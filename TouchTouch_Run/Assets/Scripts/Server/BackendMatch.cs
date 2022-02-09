using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;

public partial class BackendMatchManager : MonoBehaviour
{
    public MatchType nowMatchType { get; private set; } = MatchType.None;           //���� ���õ� ��ġ Ÿ��
    public MatchModeType nowModeType { get; private set; } = MatchModeType.None;    //���� ���õ� ��ġ ��� Ÿ��

    //����� �α�
    private string NOTCONNECT_MATCHSERVER = "��ġ ������ ����Ǿ� ���� �ʽ��ϴ�.";
    private string RECONNECT_MATCHSERVER = "��ġ ������ ������ �õ��մϴ�.";
    private string FAIL_CONNECT_MATCHSERVER = "��ġ ���� ���� ���� : {0}";
    private string SUCCESS_CONNECT_MATCHSERVER = "��ġ ���� ���� ����";
    private string SUCCESS_MATCHMAKE = "��Ī ���� : {0}";
    private string SUCCESS_REGIST_MATCHMAKE = "��Ī ��⿭�� ��ϵǾ����ϴ�.";
    private string FAIL_REGIST_MATCHMAKE = "��Ī ���� : {0}";
    private string CANCEL_MATCHMAKE = "��Ī ��û ��� : {0}";
    private string INVAILD_MATCHTYPE = "�߸��� ��ġ Ÿ���Դϴ�.";
    private string INVALID_MODETYPE = "�߸��� ��� Ÿ���Դϴ�.";
    private string INVALID_OPERATION = "�߸��� ��û�Դϴ�\n{0}";
    private string EXCEPTION_OCCUR = "���� �߻� : {0}\n�ٽ� ��Ī�� �õ��մϴ�.";

    //��Ī�� ��ġ Ÿ��, ��� Ÿ�� ����
    public void SetNowMatchInfo(MatchType matchType, MatchModeType matchModeType)
    {
        this.nowMatchType = matchType;
        this.nowModeType = matchModeType;

        print("BackendMatch.cs - SetNowMatchInfo - " + string.Format("��Ī Ÿ�� / ��� : {0} / {1}", nowMatchType, nowModeType));
    }

    //��Ī ���� ����
    public void JoinMatchServer()
    {
        if (isConnectMatchServer)
            return;

        ErrorInfo errorInfo;
        isConnectMatchServer = true;
        if (!Backend.Match.JoinMatchMakingServer(out errorInfo))
            print("BackendMatch.cs - JoinMatchServer - " + string.Format(FAIL_CONNECT_MATCHSERVER, errorInfo.ToString()));
    }

    //��Ī ���� ���� ����
    public void LeaveMatchServer()
    {
        isConnectMatchServer = false;
        Backend.Match.LeaveMatchMakingServer();
    }
    
    //��Ī ���� �����
    //ȥ�� ��Ī�� �ϴ��� ������ ���� ������ �� ��Ī�� ��û�ؾ� ��.
    public bool CreateMatchRoom()
    {
        //��Ī ������ ����Ǿ� ���� ������ ��Ī ���� ����
        if (!isConnectMatchServer)
        {
            print("BackendMatch.cs - CreateMatchRoom - " + NOTCONNECT_MATCHSERVER);
            print("BackendMatch.cs - CreateMatchRoom - " + RECONNECT_MATCHSERVER);
            JoinMatchServer();
            return false;
        }

        print("BackendMatch.cs - CreateMatchRoom - �� ���� ��û�� ������ ����");
        Backend.Match.CreateMatchRoom();
        return true;
    }

    //��Ī ��� �� ������
    public void LeaveMatchRoom()
    {
        Backend.Match.LeaveMatchRoom();
    }

    //��Ī ��û�ϱ�
    //MatchType ( 1:1 / ������ / ���� )
    //MatchModeType ( ���� / ����Ʈ / MMR )
    public void RequestMatchMaking(int index)
    {
        //��Ī ������ ����Ǿ� ���� ������ ��Ī ���� ����
        if (!isConnectMatchServer)
        {
            print("BackendMatch.cs - RequestMatchMaking - " + NOTCONNECT_MATCHSERVER);
            print("BackendMatch.cs - RequestMatchMaking - " + RECONNECT_MATCHSERVER);
            JoinMatchServer();
            return;
        }

        //���� �ʱ�ȭ
        isConnectInGameServer = false;

        Backend.Match.RequestMatchMaking(matchInfos[index].matchType, matchInfos[index].matchModeType, matchInfos[index].inDate);

        //�ΰ��� ���� ���ӵǾ� ���� ��츦 ����� �ΰ��� ���� ������ ȣ��
        if (isConnectInGameServer)
            Backend.Match.LeaveGameServer();
    }

    //��Ī ��û ����ϱ�
    public void CancelRequestMatchMaking()
    {
        Backend.Match.CancelMatchMaking();
    }

    //��Ī ���� ���ӿ� ���� ���ϰ�
    private void ProcessAccessMatchMakingServer(ErrorInfo errInfo)
    {
        //���� ���н�
        if (errInfo != ErrorInfo.Success)
            isConnectMatchServer = false;

        if (!isConnectMatchServer)
            print("BackendMatch.cs - ProcessAccessMatchMakingServer - " + string.Format(FAIL_CONNECT_MATCHSERVER, errInfo.ToString()));
        else
            print("BackendMatch.cs - ProcessAccessMatchMakingServer - " + string.Format(SUCCESS_CONNECT_MATCHSERVER, errInfo.ToString()));
    }

    /*
     * ��Ī ��û�� ���� ���ϰ� (ȣ��Ǵ� ����)
     * ��Ī ��û �������� ��
     * ��Ī �������� ��
     * ��Ī ��û �������� ��
     */
    private void ProcessMatchMakingResponse(MatchMakingResponseEventArgs args)
    {
        string debugLog = string.Empty;
        bool isError = false;
        switch (args.ErrInfo)
        {
            case ErrorCode.Success:
                //��Ī �������� ��
                debugLog = string.Format(SUCCESS_MATCHMAKE, args.Reason);
                LobbyUI.GetInstance().MatchDoneCallback();
                ProcessMatchSuccess(args);
                break;
            case ErrorCode.Match_InProgress:
                //��Ī ��û �������� �� or ��Ī ���� �� ��Ī ��û�� �õ����� ��

                //��Ī ��û �������� ��
                if(args.Reason == string.Empty)
                {
                    debugLog = SUCCESS_REGIST_MATCHMAKE;

                    LobbyUI.GetInstance().MatchRequestCallback(true);
                }
                break;
            case ErrorCode.Match_MatchMakingCanceled:
                //��Ī ��û�� ��ҵǾ��� ��
                debugLog = string.Format(CANCEL_MATCHMAKE, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                BackendMatchManager.GetInstance().LeaveMatchRoom();
                break;
            case ErrorCode.Match_InvalidMatchType:
                isError = true;
                //��ġ Ÿ���� �߸� �������� ��
                debugLog = string.Format(FAIL_REGIST_MATCHMAKE, INVAILD_MATCHTYPE);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;
            case ErrorCode.Match_InvalidModeType:
                isError = true;
                //��ġ ��带 �߸� �������� ��
                debugLog = string.Format(FAIL_REGIST_MATCHMAKE, INVALID_MODETYPE);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.InvalidOperation:
                isError = true;
                // �߸��� ��û�� �������� ��
                debugLog = string.Format(INVALID_OPERATION, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;
            case ErrorCode.Match_Making_InvalidRoom:
                isError = true;
                // �߸��� ��û�� �������� ��
                debugLog = string.Format(INVALID_OPERATION, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;
            case ErrorCode.Exception:
                isError = true;
                // ��Ī �ǰ�, �������� �� ������ �� ���� �߻� �� exception�� ���ϵ�
                // �� ��� �ٽ� ��Ī ��û�ؾ� ��
                debugLog = string.Format(EXCEPTION_OCCUR, args.Reason);

                LobbyUI.GetInstance().RequestMatch();
                break;
        }

        if (!debugLog.Equals(string.Empty))
        {
            print("BackendMatch.cs - ProcessMatchMakingResponse - " + debugLog);
            //if(isError)
                //����â ����
        }
    }

    //��Ī �������� ��
    //�ΰ��� ������ �����ؾ� �Ѵ�.
    private void ProcessMatchSuccess(MatchMakingResponseEventArgs args)
    {
        ErrorInfo errorInfo;
        if(sessionIdList != null)
        {
            print("BackendMatch.cs - ProcessMatchSuccess - ���� ���� ���� ����");
            sessionIdList.Clear();
        }

        if (!Backend.Match.JoinGameServer(args.RoomInfo.m_inGameServerEndPoint.m_address, args.RoomInfo.m_inGameServerEndPoint.m_port, false, out errorInfo))
            print("BackendMatch.cs - ProcessMatchMakingSuccess - " + string.Format(FAIL_ACCESS_INGAME));

        //���ڰ����� �ΰ��� ����ū�� �����صξ�� �Ѵ�.
        //�ΰ��� �������� �뿡 ������ �� �ʿ�
        //1�� ���� ��� ������ �뿡 �������� ������ �ش� ���� �ı��ȴ�.
        isConnectInGameServer = true;
        isJoinGameRoom = false;
        isReconnectProcess = false;
        inGameRoomToken = args.RoomInfo.m_inGameRoomToken;
        isSandBoxGame = args.RoomInfo.m_enableSandbox;

        var info = GetMatchInfo(args.MatchCardIndate);
        if (info == null)
        {
            Debug.LogError("BackendMatch.cs - ProcessMatchSuccess - ��ġ ������ �ҷ����� �� �����߽��ϴ�.");
            return;
        }

        nowMatchType = info.matchType;
        nowModeType = info.matchModeType;
        numOfClient = int.Parse(info.headCount);
    }
}
