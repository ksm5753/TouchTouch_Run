using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Battlehub.Dispatcher;


public class LoginUI : MonoBehaviour
{
    //�α��� â
    public GameObject[] Steps;

    [Space(10f)]
    [Header("�α��� �˾�â")]
    public GameObject customLoginObject; //Ŀ���� �α���
    public GameObject signUpObject; //ȸ�� ����
    public GameObject nicknameObject; //�г��� â
    [Space(10f)]
    [Header("�α���")]
    public InputField[] loginField;
    public InputField[] signField;
    public InputField nicknameField;
    [Space(10f)]
    [Header("��Ÿ")]
    public GameObject errorObject;
    public GameObject loadingObject;

    private static LoginUI instance;
    public static LoginUI GetInstance()
    {
        if (instance == null) return null;

        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;
    }

    void Start()
    {
        loadingObject.SetActive(false);
    }

    #region �ʱ�ȭ (ScaleCtrl -> Initialize)
    public void Initialize()
    {
        loadingObject.SetActive(false);
        errorObject.SetActive(false);
        for (int i = 1; i < Steps.Length; i++) //��ġ��ũ�� ���� ��� ����
            Steps[i].SetActive(false);
    }
    #endregion


    //==========================================================================
    #region ��ġ �� �ڵ��α���
    public void TouchStart()
    {
        // ������Ʈ �˾��� �������� ���� X
        //if (updateObject.activeSelf == true) return;

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().BackendTokenLogin((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (result)
                {
                    ChangeLobbyScene();
                    return;
                }
                loadingObject.SetActive(false);
                if (!error.Equals(string.Empty))
                {
                    errorObject.GetComponentInChildren<Text>().text = "���� ���� �ҷ����� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                
                for(int i = 0; i < Steps.Length; i++)
                {
                    Steps[i].SetActive(false);
                }
                Steps[1].SetActive(true); //�α���
            });
        });
    }
    #endregion
    //==========================================================================
    #region Ŀ���� �α���
    public void Login()
    {
        if (errorObject.activeSelf)
        {
            return;
        }
        string id = loginField[0].text;
        string pw = loginField[1].text;

        if (id.Equals(string.Empty) || pw.Equals(string.Empty))
        {
            errorObject.GetComponentInChildren<Text>().text = "ID Ȥ�� PW �� ���� �Է����ּ���.";
            errorObject.SetActive(true);
            return;
        }

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().CustomLogin(id, pw, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "�α��� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                ChangeLobbyScene();
            });
        });
    }
    #endregion
    //==========================================================================
    #region Ŀ���� ȸ������
    public void SignUp()
    {
        if (errorObject.activeSelf)
        {
            return;
        }
        string id = signField[0].text;
        string pw = signField[1].text;

        if (id.Equals(string.Empty) || pw.Equals(string.Empty))
        {
            errorObject.GetComponentInChildren<Text>().text = "ID Ȥ�� PW �� ���� �Է����ּ���.";
            errorObject.SetActive(true);
            return;
        }

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().CustomSignIn(id, pw, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "ȸ������ ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                ChangeLobbyScene();
            });
        });
    }
    #endregion
    //==========================================================================
    #region �г��� Ȱ��
    public void ActiveNickNameObject()
    {
        Dispatcher.Current.BeginInvoke(() =>
        {
            for(int i = 0; i < Steps.Length; i++)
            {
                Steps[i].SetActive(false);
            }
            errorObject.SetActive(false);
            loadingObject.SetActive(false);
            Steps[Steps.Length - 1].SetActive(true);
        });
    }
    #endregion
    //==========================================================================
    #region �г��� ����
    public void UpdateNickName()
    {
        if (errorObject.activeSelf)
        {
            return;
        }
        string nickname = nicknameField.text;
        if (nickname.Equals(string.Empty))
        {
            errorObject.GetComponentInChildren<Text>().text = "�г����� ���� �Է����ּ���";
            errorObject.SetActive(true);
            return;
        }
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().UpdateNickname(nickname, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "�г��� ���� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                ChangeLobbyScene();
            });
        });
    }
    #endregion
    //==========================================================================
    #region ���� �α���
    public void GoogleFederation()
    {
        if (errorObject.activeSelf)
        {
            return;
        }

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().GoogleAuthorizeFederation((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "�α��� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                ChangeLobbyScene();
            });
        });
    }
    #endregion
    //==========================================================================
    #region ���� �α���
    public void AppleFederation()
    {
        if (errorObject.activeSelf)
        {
            return;
        }

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().AppleAuthorizeFederation((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "�α��� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                ChangeLobbyScene();
            });
        });
    }
    #endregion
    //==========================================================================
    #region �Խ�Ʈ �α���
    public void GuestLogin()
    {
        if (errorObject.activeSelf)
        {
            return;
        }

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().GuestLogin((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "�α��� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                ChangeLobbyScene();
            });
        });
    }
    #endregion
    //==========================================================================
    void ChangeLobbyScene()
    {
        GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
    }
    //==========================================================================
}
