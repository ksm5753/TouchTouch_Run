using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BackEnd;
using BackEnd.Tcp;
using Battlehub.Dispatcher;
using System.Linq;

public partial class LobbyUI : MonoBehaviour
{
    public void MakeRoom()
    {
        //��ġ ������ ���� ���� ��û
        if (BackendMatchManager.GetInstance().CreateMatchRoom())
        {
            //SetLoadingObjectActive(true);
        }
    }

    public void RoomResult(bool isSuccess, List<MatchMakingUserInfo> userList = null)
    {
        //���� ������ ������
        if (isSuccess)
        {
            print("RoomUI - RoomResult - ���� ���� ����");

            RequestMatch();
        }
    }
    public void CancelMatch()
    {
        if (loadingObject.activeSelf || errorObject.activeSelf || matchDonePanel.activeSelf)
            return;

        BackendMatchManager.GetInstance().CancelRequestMatchMaking();
    }

    public void RequestMatch()
    {
        if (loadingObject.activeSelf || errorObject.activeSelf || matchDonePanel.activeSelf || matchRequestPanel.activeSelf)
            return;

        BackendMatchManager.GetInstance().RequestMatchMaking(0);
    }

    public void MatchDoneCallback()
    {
        matchRequestPanel.SetActive(false);
        matchDonePanel.SetActive(true);
    }

    public void MatchCancelCallback()
    {
        matchRequestPanel.SetActive(true);
        matchDonePanel.SetActive(false);
    }

    public void MatchRequestCallback(bool result)
    {
        matchRequestPanel.SetActive(result);
    }
}
