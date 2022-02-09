using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;

public partial class BackendMatchManager : MonoBehaviour
{
    private bool isSetHost = false;         //ȣ��Ʈ ���� �����ߴ��� ����
    //���� �α�
    private string FAIL_ACCESS_INGAME = "�ΰ��� ���� ���� : {0} - {1}";
    private string SUCCESS_ACCESS_INGAME = "���� �ΰ��� ���� ���� : {0}";
    private string NUM_INGAME_SESSION = "�ΰ��� �� ���� ���� : {0}";

    //�ΰ��� �� ����
    private void AccessInGame(string roomToken)
    {
        Backend.Match.JoinGameRoom(roomToken);
    }

    //���� �뿡 ������ ���ǵ��� ����
    //���� �뿡 �������� �� 1ȸ ���ŵ�
    //������ ���� ���� 1ȸ ���ŵ�
    private void ProcessMatchInGameSessionList(MatchInGameSessionListEventArgs args)
    {
        sessionIdList = new List<SessionId>();
        gameRecords = new Dictionary<SessionId, MatchUserGameRecord>();

        foreach(var record in args.GameRecords)
        {
            sessionIdList.Add(record.m_sessionId);
            gameRecords.Add(record.m_sessionId, record);
        }

        sessionIdList.Sort();
    }

    //Ŭ���̾�Ʈ ���� ���� �� ���ӿ� ���� ���ϰ�
    //Ŭ���̾�Ʈ�� ���� �뿡 ������ ������ ȣ���
    //������ ���� ���� ���ŵ��� ����
    private void ProcessMatchInGameAccess(MatchInGameSessionEventArgs args)
    {
        //if (isReconnectProcess) { }
        print("BackendInGame.cs - ProcessMatchInGameAccess - " + string.Format(SUCCESS_ACCESS_INGAME, args.ErrInfo));

        if(args.ErrInfo != ErrorCode.Success)
        {
            //���� �� ���� ����
            print("BackendInGame.cs - ProcessMatchInGameAccess - " + string.Format(FAIL_ACCESS_INGAME, args.ErrInfo, args.Reason));
            LeaveInGameRoom();
            return;
        }

        //���� �� ���� ����
        //���ڰ��� ��� ������ Ŭ���̾�Ʈ(����)�� ���� ID�� ��Ī ����� ���� ����
        //���� ������ �����Ǿ� ����ֱ� ������ �̹� ������ �����̸� �ǳʶڴ�.
        var record = args.GameRecord;
        print("BackendInGame.cs - ProcessMatchInGameAccess - " + string.Format(string.Format("�ΰ��� ���� ���� ���� [{0}] : {1}", args.GameRecord.m_sessionId, args.GameRecord.m_nickname)));
        if (!sessionIdList.Contains(args.GameRecord.m_sessionId))
        {
            //���� ����, ���� ��� ���� ����
            sessionIdList.Add(record.m_sessionId);
            gameRecords.Add(record.m_sessionId, record);

            print("BackendInGame.cs - ProcessMatchInGameAccess - " + string.Format(NUM_INGAME_SESSION, sessionIdList.Count));
        }
    }

    //�ΰ��� ���� ���� ����
    public void LeaveInGameRoom()
    {
        isConnectInGameServer = false;
        Backend.Match.LeaveGameServer();
    }

    //�������� ���� ���� ��Ŷ�� ������ �� ȣ��
    //��� ������ ���� �뿡 ���� �� "�ֿܼ��� ������ �ð�" �Ŀ� ���� ���� ��Ŷ�� �������� ��
    private void GameSetup()
    {
        print("BackendInGame.cs - GameSetup - ���� ���� �޽��� ����. ���� ���� ����");

        isHost = false;
        isSetHost = false;

        OnGameReady();
    }

    //���� ���� ������ �� ȣ���
    public void OnGameReady()
    {
        if (!isSetHost)
        {
            //ȣ��Ʈ�� �����Ǿ� ���� ������ ȣ��Ʈ ����
            isSetHost = SetHostSession();
        }
        print("BackendInGame.cs - OnGameReady - ȣ��Ʈ ���� �Ϸ�");

        if(isSandBoxGame && IsHost())
        {
            SetAIPlayer();
        }

        if (IsHost())
        {
            Invoke("ReadyToLoadRoom", 0.5f);
        }
    }

    //����ڽ� ��� ����
    private void SetAIPlayer()
    {
        int aiCount = numOfClient - sessionIdList.Count;

        print("BackendInGame.cs - SetAIPlayer - AI �÷��̾� ���� : aiCount : " + aiCount);

        int index = 0;
        for(int i = 0; i < aiCount; i++)
        {
            MatchUserGameRecord aiRecord = new MatchUserGameRecord();
            aiRecord.m_nickname = "AIPlayer" + index;
            aiRecord.m_sessionId = (SessionId)index;
            aiRecord.m_numberOfMatches = 0;
            aiRecord.m_numberOfWin = 0;
            aiRecord.m_numberOfDefeats = 0;
            aiRecord.m_numberOfDraw = 0;

            gameRecords.Add((SessionId)index, aiRecord);
            sessionIdList.Add((SessionId)index);
            index += 1;
        }
    }

    private void ReadyToLoadRoom()
    {
        if (BackendMatchManager.GetInstance().isSandBoxGame)
        {
            print("BackendInGame.cs - ReadyToLoadRoom - ����ڽ� ��� Ȱ��ȭ. AI ���� ����");
            //����ڽ� ���� ai ���� �۽�
            foreach (var tmp in gameRecords)
            {
                if ((int)tmp.Key > (int)SessionId.Reserve) continue;
                print("BackendInGame.cs - ReadyToLoadRoom - ai���� �۽� : " + (int)tmp.Key);
                SendDataToInGame(new Protocol.AIPlayerInfo(tmp.Value));
            }
        }

        print("BackendInGame.cs - ReadyToLoadRoom - 1�� �� �� �� ��ȯ �޽��� �۽�");
        Invoke("SendChangeRoomScene", 1f);
    }

    public bool PrevGameMessage(byte[] BinaryUserData)
    {
        Protocol.Message msg = DataParser.ReadJsonData<Protocol.Message>(BinaryUserData);
        if (msg == null) return false;

        //���� ���� ���� �۾� ��Ŷ �˻�
        switch (msg.type)
        {
            case Protocol.Type.AIPlayerInfo:
                Protocol.AIPlayerInfo aiPlayerInfo = DataParser.ReadJsonData<Protocol.AIPlayerInfo>(BinaryUserData);
                ProcessAIData(aiPlayerInfo);
                return true;
            case Protocol.Type.LoadRoomScene:
                LobbyUI.GetInstance().ChangeRoomLoadScene(); //�� ���Ƿ� �̵�
                if (IsHost())
                {
                    print("BackendInGame.cs - PrevGameMessage - 5���� ���� �� ��ȯ �޽��� �۽�");
                    Invoke("SendChangeGameScene", 5);
                }
                return true;
            case Protocol.Type.LoadGameScene:
                GameManager.GetInstance().ChangeState(GameManager.GameState.Start); //���� ������ ��ȯ
                return true;
        }
        return false;
    }

    public void ProcessAIData(Protocol.AIPlayerInfo aiPlayerInfo)
    {
        MatchInGameSessionEventArgs args = new MatchInGameSessionEventArgs();
        args.GameRecord = aiPlayerInfo.GetMatchRecord();

        ProcessMatchInGameAccess(args);
    }

    private void SendChangeRoomScene()
    {
        print("BackendInGame.cs - SendChangeRoomScene - �� �� ��ȯ �޽��� �۽�");
        SendDataToInGame(new Protocol.LoadRoomSceneMessage());
    }

    private void SendChangeGameScene()
    {
        print("BackendInGame.cs - SendChangeGameScene - ���� �� ��ȯ �۽�");
        SendDataToInGame(new Protocol.LoadGameSceneMessage());
    }

    //ȣ��Ʈ���� ���� ���Ǹ���Ʈ�� ����
     public void SetPlayerSessionList(List<SessionId> sessions)
    {
        sessionIdList = sessions;
    }

    //������ ������ ��Ŷ ����
    //���������� �� ��Ŷ�� �޾� ��� Ŭ���̾�Ʈ(��Ŷ ���� Ŭ���̾�Ʈ ����)�� ��ε�ĳ���� ����
    public void SendDataToInGame<T>(T msg)
    {
        Backend.Match.SendDataToInGameRoom(DataParser.DataToJsonData<T>(msg));
    }

    private void ProcessSessionOffline(SessionId sessionId)
    {
        if (hostSession.Equals(sessionId))
        {
            // ȣ��Ʈ ���� ��⸦ ���
            //InGameUiManager.GetInstance().SetHostWaitBoard();
        }
        else
        {
            // ȣ��Ʈ�� �ƴϸ� �ܼ��� UI �� ����.
        }
    }

    private void SendGameSyncMessage()
    {
        //���� ���� ��Ȳ
        //var message = 
        //SendDataToInGame();
    }
}
