using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;
using Battlehub.Dispatcher;
using System.Linq;
using LitJson;
using System;
using Protocol;

/*
 * ##### BackendMatchManager.cs���� ����ϴ� ���
 * ��ġ����ŷ �ڵ鷯 ���
 * �ΰ��� �ڵ鷯 ���
 */



public partial class BackendMatchManager : MonoBehaviour
{
    private static BackendMatchManager instance;

    //�ֿܼ��� ������ ��Ī ī�� ����
    public class MatchInfo
    {
        public string title;                //��Ī ��
        public string inDate;               //��Ī inDate (UUID)
        public MatchType matchType;         //��ġ Ÿ�� (1:1 / ������ / ����)
        public MatchModeType matchModeType; //��ġ ��� Ÿ�� (���� / ����Ʈ / MMR)
        public string headCount;            //��Ī �ο�
        public bool isSandBoxEnable;        //����ڽ� ��� (AI ��Ī)
    }
    public List<MatchInfo> matchInfos { get; private set; } = new List<MatchInfo>(); //�ֿܼ��� ������ ��Ī ���̺� ����Ʈ
    public List<SessionId> sessionIdList { get; private set; } //��ġ�� �������� �������� ���� ���

    public Dictionary<SessionId, MatchUserGameRecord> gameRecords { get; private set; } = null;  // ��ġ�� �������� �������� ��Ī ���

    private string inGameRoomToken = string.Empty; //���� �� ��ū (�ΰ��� ���� ��ū)

    public SessionId hostSession { get; private set; } //ȣ��Ʈ ����

    public bool isReconnectEnable { get; private set; } = false;

    public bool isConnectMatchServer { get; private set; } = false;
    private bool isConnectInGameServer = false;
    private bool isJoinGameRoom = false;
    public bool isReconnectProcess { get; private set; } = false;
    public bool isSandBoxGame { get; private set; } = false;

    //HOST
    private bool isHost = false;            //ȣ��Ʈ ���� (�������� ������ SuperGamer ������ ������
    private Queue<KeyMessage> localQueue = null;

    private int numOfClient = 2;            //��ġ�� ������ ������ �� ��
    //private Queue<K>
    //private Queue<K>

    void Awake()
    {
        if (instance != null)
            Destroy(instance);
        instance = this;
    }

    public static BackendMatchManager GetInstance()
    {
        if (!instance)
            return null;
        return instance;
    }

    void Start()
    {
        MatchMakingHandler();
        InGameHandler();
    }

    void OnApplicationQuit()
    {
        if (isConnectMatchServer)
            LeaveMatchServer();
    }

    //ȣ��Ʈ���� Ȯ��
    public bool IsHost()
    {
        return isHost;
    }

    public void SetHostSession(SessionId host)
    {
        hostSession = host;
    }

    //���� ���̵� Ȯ��
    public bool IsMySessionId(SessionId session)
    {
        return Backend.Match.GetMySessionId() == session;
    }

    public string GetNickNameBySessionId(SessionId session)
    {
        // return Backend.Match.GetNickNameBySessionId(session);
        return gameRecords[session].m_nickname;
    }

    public bool IsSessionListNull()
    {
        return sessionIdList == null || sessionIdList.Count == 0;
    }

    public void AddMsgToLocalQueue(KeyMessage message)
    {
        //���� ť�� �޽��� �߰�
        if (!isHost || localQueue == null) return;

        localQueue.Enqueue(message);
    }

    private bool SetHostSession()
    {
        //ȣ��Ʈ ���� ���ϱ�
        //�� Ŭ���̾�Ʈ�� ��� ���� (ȣ��Ʈ ���� ���ϴ� ������ ��� �����Ƿ� ������ Ŭ���̾�Ʈ�� ��� ������ ���������� ������� ����)
        print("BackendMatchManager.cs - SetHostSession - ȣ��Ʈ ���� ���� ����");
        //ȣ��Ʈ ���� ����(�� Ŭ���̾�Ʈ���� ���� ������ �ٸ� �� �ֱ� ������ ����)
        sessionIdList.Sort();
        isHost = false;

        //���� ȣ��Ʈ �������� Ȯ��
        foreach(var record in gameRecords)
        {
            if (record.Value.m_isSuperGamer)
            {
                if (record.Value.m_sessionId.Equals(Backend.Match.GetMySessionId()))
                    isHost = true;
                hostSession = record.Value.m_sessionId; //�ش� ������ ȣ��Ʈ�� ����
                break;
            }
        }

        print("BackendMatchManager.cs - SetHostSession - ȣ��Ʈ ���� : " + isHost);

        //if(isHost)
        //    localQueue = new 

        //ȣ��Ʈ �������� ������ ��ġ������ ���� ����
        LeaveMatchServer();
        return true;
    }

    private void SetSubHost(SessionId hostSessionId)
    {
        print("BackendMatchManager.cs - SetSubHost - ���� ȣ��Ʈ ���� ���� ����");

        //���� ���� ȣ��Ʈ �������� �������� ���� ������ Ȯ��
        //�������� ���� SuperGamer ������ GameRecords�� SuperGamer ���� ����
        foreach(var record in gameRecords)
        {
            if (record.Value.m_sessionId.Equals(hostSessionId))
                record.Value.m_isSuperGamer = true;
            else
                record.Value.m_isSuperGamer = false;
        }

        //���� ȣ��Ʈ �������� Ȯ��
        if (hostSessionId.Equals(Backend.Match.GetMySessionId()))
            isHost = true;
        else
            isHost = false;

        hostSession = hostSessionId; //�־��� ������ ȣ��Ʈ �������� ����

        print("BackendMatchManager.cs - SetSubHost - ���� ȣ��Ʈ ���� : " + isHost);

        //ȣ��Ʈ �����̸� ����
        //����������������

        print("BackendMatchManager.cs - SetSubHost - ���� ȣ��Ʈ ���� �Ϸ�");
    }

    //��Ī ���� ���� �̺�Ʈ �ڵ鷯
    private void MatchMakingHandler()
    {
        Backend.Match.OnJoinMatchMakingServer += (args) =>
        {
            print("BackendMatchManager.cs - MatchMakingHandler - ��Ī ���� ���� : " + args.ErrInfo);
            ProcessAccessMatchMakingServer(args.ErrInfo);
        };

        Backend.Match.OnMatchMakingResponse += (args) =>
        {
            print("BackendMatchManager.cs - MatchMakingHandler - ��Ī ��û : " + args.ErrInfo + " : " + args.Reason);
            ProcessMatchMakingResponse(args);
        };

        Backend.Match.OnLeaveMatchMakingServer += (args) =>
        {
            print("BackendMatchManager.cs - MatchMakingHandler - ��Ī ���� ���� : " + args.ErrInfo);
            isConnectMatchServer = false;

            //�ٽ� ������ �õ�
            JoinMatchServer();

            if (args.ErrInfo.Category.Equals(ErrorCode.DisconnectFromRemote) || args.ErrInfo.Category.Equals(ErrorCode.Exception)
                || args.ErrInfo.Category.Equals(ErrorCode.NetworkTimeout))
            {
                // �������� ������ ���� ���
                //if (LobbyUI.GetInstance())
                //{
                //    LobbyUI.GetInstance().MatchRequestCallback(false);
                //    LobbyUI.GetInstance().CloseRoomUIOnly();
                //    LobbyUI.GetInstance().SetErrorObject("��Ī������ ������ ���������ϴ�.\n\n" + args.ErrInfo.Reason);
                //}
            }
        };

        //��� �� ���� / ���� ����
        Backend.Match.OnMatchMakingRoomCreate += (args) =>
        {
            print("BackendMatchManager.cs - MatchMakingHandler - ��� �� ���� : " + args.ErrInfo);

            LobbyUI.GetInstance().RoomResult(args.ErrInfo.Equals(ErrorCode.Success) == true);
        };
    }

    //�ΰ��� ���� ���� �̺�Ʈ �ڵ鷯
    private void InGameHandler()
    {
        Backend.Match.OnSessionJoinInServer += (args) =>
        {
            print("BackendMatchManager.cs - InGameHandler - �ΰ��� ���� ���� : " + args.ErrInfo);

            if (isJoinGameRoom) return;
            if (inGameRoomToken == string.Empty)
            {
                print("�ΰ��� ���� ���� ���������� �� ��ū�� �������� �ʽ��ϴ�.");
                return;
            }

            print("BackendMathManager.cs - InGameHandler - �ΰ��� ���� ���� ����!");
            isJoinGameRoom = true;
            AccessInGame(inGameRoomToken);

        };

        Backend.Match.OnSessionListInServer += (args) =>
        {
            //���� ����Ʈ ȣ�� �� ���� ä���� ȣ���
            //���� ���� ����(��)�� �������� �÷��̾�� �� ������ ���� �� �濡 ���� �ִ� �÷��̾��� ���� ������ �������
            //������ �ʰ� ���� �÷��̾���� ������ OnMatchInGameAccess���� ���ŵ�
            print("BackendMatchManager.cs - InGameHandler - OnSessionListInServer : " + args.ErrInfo);

            ProcessMatchInGameSessionList(args);
        };

        Backend.Match.OnMatchInGameAccess += (args) =>
        {
            print("BackendMatchManager.cs - InGameHandler - OnMatchInGameAccess : " + args.ErrInfo);

            ProcessMatchInGameAccess(args);
        };

        Backend.Match.OnMatchInGameStart += () =>
        {
            //�������� ���� ���� ��Ŷ�� ������ ȣ��
            GameSetup();
        };

        Backend.Match.OnMatchRelay += (args) =>
        {
            // �� Ŭ���̾�Ʈ���� ������ ���� �ְ���� ��Ŷ��
            // ������ �ܼ� ��ε�ĳ���ø� ���� (�������� ��� ���굵 �������� ����)

            //���� ���� ����
            if (PrevGameMessage(args.BinaryUserData))
            {
                //���� ���� ������ �����Ͽ����� �ٷ� ����
                return;
            }

            if (WorldManager.instance == null) return;

            WorldManager.instance.OnRecieve(args);
        };

        Backend.Match.OnLeaveInGameServer += (args) =>
        {
            print("BackendMatchManager.cs - InGameHandler - OnLeaveInGameServer : " + args.ErrInfo + " : " + args.Reason);
            if (args.Reason.Equals("Fail To Reconnect"))
            {
                JoinMatchServer();
            }
            isConnectInGameServer = false;
        };

        Backend.Match.OnSessionOffline += (args) =>
        {
            //�ٸ� ���� Ȥ�� �ڱ��ڽ��� ������ �������� �� ȣ��
            print("BackendMatchManager.cs - InGameHandler - " + string.Format("[{0}] �������εǾ����ϴ�. - {1} : {2}", args.GameRecord.m_nickname, args.ErrInfo, args.Reason));
            //���� ������ �ƴϸ� �������� ���μ��� ����
            if (args.ErrInfo != ErrorCode.AuthenticationFailed)
            {
                ProcessSessionOffline(args.GameRecord.m_sessionId);
            }
            else
            {
                // �߸��� ������ �õ� �� ���������� �߻�
            }
        };

        Backend.Match.OnMatchResult += (args) =>
        {
            print("BackendMatchManager.cs - InGameHandler - ���� ����� ���ε� ��� : " + string.Format("{0} : {1}", args.ErrInfo, args.Reason));

            //�������� ���� ��� ��Ŷ�� ������ ȣ��
            //����(Ŭ���̾�Ʈ) ������ ���� ������� ���������� ������Ʈ �Ǿ����� Ȯ��

            if (args.ErrInfo == ErrorCode.Success)
            {

            }
        };

        Backend.Match.OnChangeSuperGamer += (args) =>
        {
            print("BackendMatchManager.cs - InGameHandler - " + string.Format("���� ���� : {0} / �� ���� : {1}", args.OldSuperUserRecord.m_nickname, args.NewSuperUserRecord.m_nickname));
            //ȣ��Ʈ �缳��
            SetSubHost(args.NewSuperUserRecord.m_sessionId);
            if (isHost)
            {
                //���� ���� ȣ��Ʈ�� �����Ǹ� �ٸ� ��� Ŭ���̾�Ʈ�� ��ũ�޽��� ����
                Invoke("SendGameSyncMessage", 1);
            }
        };
    }


    public void GetMatchList(Action<bool, string> func)
    {
        //��Ī ���̺� ���� �ʱ�ȭ
        matchInfos.Clear();

        Backend.Match.GetMatchList(callback =>
        {
            //��û �����ϴ� ��� ���û
            if (!callback.IsSuccess())
            {
                print("BackendMatchManager.cs - GetMatchList - ��Īī�� ����Ʈ �ҷ����� ����\n" + callback);
                Dispatcher.Current.BeginInvoke(() =>
                {
                    GetMatchList(func);
                });
                return;
            }

            foreach(JsonData row in callback.Rows())
            {
                MatchInfo matchInfo = new MatchInfo();
                matchInfo.title = row["matchTitle"]["S"].ToString();
                matchInfo.inDate = row["inDate"]["S"].ToString();
                matchInfo.headCount = row["matchHeadCount"]["N"].ToString();
                matchInfo.isSandBoxEnable = row["enable_sandbox"]["BOOL"].ToString().Equals("True") ? true : false;

                foreach(MatchType type in Enum.GetValues(typeof(MatchType)))
                {
                    if (type.ToString().ToLower().Equals(row["matchType"]["S"].ToString().ToLower()))
                        matchInfo.matchType = type;
                }

                foreach (MatchModeType type in Enum.GetValues(typeof(MatchModeType)))
                {
                    if (type.ToString().ToLower().Equals(row["matchModeType"]["S"].ToString().ToLower()))
                    {
                        matchInfo.matchModeType = type;
                    }
                }

                matchInfos.Add(matchInfo);
            }

            print("BackendMatchManager.cs - GetMatchList - ���̺���Ʈ �ҷ����� ���� : " + matchInfos.Count);
            func(true, string.Empty);
        });
    }

    public MatchInfo GetMatchInfo(string indate)
    {
        var result = matchInfos.FirstOrDefault(x => x.inDate == indate);
        if (result.Equals(default(MatchInfo)) == true)
        {
            return null;
        }
        return result;
    }

    public void IsMatchGameActivate()
    {
        isReconnectEnable = false;
        JoinMatchServer();
    }


    void Update()
    {
        if(isConnectInGameServer || isConnectMatchServer)
        {
            Backend.Match.Poll();

            //ȣ��Ʈ�� ��� ����ť�� ����
            //ť�� �ִ� ��Ŷ�� ���ÿ��� ó��
            if(localQueue != null)
            {
                while(localQueue.Count > 0)
                {
                    var msg = localQueue.Dequeue();
                    WorldManager.instance.OnRecieveForLocal(msg);
                }
            }
        }
    }
}
