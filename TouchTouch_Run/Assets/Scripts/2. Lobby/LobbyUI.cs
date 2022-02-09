using BackEnd;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public partial class LobbyUI : MonoBehaviour
{
    [Header("Main Panel")]
    public Toggle[] MenuButton;
    public GameObject mainParent;
    public Scrollbar scrollBar;                 //scrollBar�� ��ġ�� �������� ���� ������ �˻�
    public float swipeTime = 0.01f;             //�������� Swipe �Ǵ� �ð�
    public float swipeDistance = 50.0f;         //�������� Swipe�Ǳ� ���� �������� �ϴ� �ּ� �Ÿ�

    [Space(15f)]
    [Header("Home Panel")]
    public GameObject NicknamePanel;            

    private float[] scrollPageValues;           //�� �������� ��ġ �� [0.0 - 1.0]
    private float valueDistance = 0;            //�� ������ ������ �Ÿ�
    private int currentPage = 0;                //���� ������
    private int maxPage = 0;                    //�ִ� ������
    private float startTouchX;                  //��ġ ���� ��ġ
    private float endTouchX;                    //��ġ ���� ��ġ
    private bool isSwipeMode = false;           //���� Swipe�� �ǰ� �ִ��� üũ

    [Space(15f)]
    [Header("Others")]
    public GameObject matchRequestPanel;
    public GameObject matchDonePanel;
    public GameObject loadingObject;
    public GameObject errorObject;

    private static LobbyUI instance;


    #region �ʱ�ȭ (ScaleCtrl -> Initialize)
    public void Initialize()
    {
        loadingObject.SetActive(false);
        errorObject.SetActive(false);

    }
    #endregion

    void Start()
    {
        if (BackendServerManager.GetInstance() != null) setNickName(); //�κ� ������ �г��� ����
                                           
        BackendServerManager.GetInstance().InitalizeGameData(); //���ӵ����� �ʱ⼳��

        SetscrollBarValue(1, false);
        
    }

    void Update()
    {
        UpdateInput();
    }

    #region �г��� ����
    private void setNickName()
    {
        var name = BackendServerManager.GetInstance().myNickName;
        if (name.Equals(string.Empty))
        {
            Debug.Log("�г��� �ҷ����� ����");
            name = "Error";
        }

        NicknamePanel.GetComponentInChildren<Text>().text = name;
    }
    #endregion

    //===========================================================================================
    #region ���� ȭ�� ����
    public void SetscrollBarValue(int index,  bool mode = true)
    {
        currentPage = index;

        if(!mode)
            scrollBar.value = scrollPageValues[index];

        StartCoroutine(OnSwipeOneStep(currentPage));
    }

    private void UpdateInput()
    {
        //���� Swipe�� �������̸� ��ġ �Ұ�
        if (isSwipeMode) return;

#if UNITY_EDITOR
        //���콺 ���� ��ư�� ������ �� 1ȸ
        if (Input.GetMouseButtonDown(0))
        {
            //��ġ ���� ����(Swipe ���� ����)
            startTouchX = Input.mousePosition.x;
        }
        else if (Input.GetMouseButtonUp(0))
        {
            //��ġ ���� ���� (Swipe ���� ����)
            endTouchX = Input.mousePosition.x;
            UpdateSwipe();
        }
#endif

#if UNITY_ANDROID
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                //��ġ ���� ����(Swipe ���� ����)
                startTouchX = Input.mousePosition.x;
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                //��ġ ���� ���� (Swipe ���� ����)
                endTouchX = Input.mousePosition.x;
                UpdateSwipe();
            }
        }
#endif
    }

    private void UpdateSwipe()
    {
        //�ʹ� ���� �Ÿ��� �������� ���� Swipe X
        if (Mathf.Abs(startTouchX - endTouchX) < swipeDistance)
        {
            //���� �������� Swipe�ؼ� ���ư���
            StartCoroutine(OnSwipeOneStep(currentPage));
            return;
        }

        //Swipe ����
        bool isLeft = startTouchX < endTouchX ? true : false;

        //�̵� ������ ������ ��
        if (isLeft)
        {
            //���� �������� ���� ���̸� ����
            if (currentPage == 0) return;

            //�������� �̵��� ���� ���� �������� 1 ����
            currentPage--;
        }

        //�̵� ������ �������� ��
        else
        {
            //���� �������� ������ ���̸� ����
            if (currentPage == maxPage - 1) return;

            //���������� �̵��� ���� ���� �������� 1 ����
            currentPage++;
        }

        //currentIndex ��° �������� Swipe�ؼ� �̵�
        StartCoroutine(OnSwipeOneStep(currentPage));
    }

    private IEnumerator OnSwipeOneStep(int index)
    {
        float start = scrollBar.value;
        float current = 0;
        float percent = 0;

        isSwipeMode = true;

        while (percent < 1)
        {
            current += Time.deltaTime;
            percent = current / swipeTime;

            scrollBar.value = Mathf.Lerp(start, scrollPageValues[index], percent);

            MenuButton[currentPage].isOn = true;
            yield return null;
        }

        isSwipeMode = false;
    }

    public void MoveMenu(Toggle toggle)
    {
        if (toggle.isOn)
        {
            switch (toggle.name)
            {
                case "Shop":
                    SetscrollBarValue(0);
                    break;
                case "Home":
                    SetscrollBarValue(1);
                    break;
                case "Setting":
                    SetscrollBarValue(2);
                    break;
            }
        }
    }
    #endregion
    //===========================================================================================

    public void SetLoadingObjectActive(bool isActive)
    {
        loadingObject.SetActive(isActive);
    }

    public void ChangeRoomLoadScene()
    {
        GameManager.GetInstance().ChangeState(GameManager.GameState.Ready);
    }



    public static LobbyUI GetInstance()
    {
        if (instance == null) return null;

        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;

        BackendMatchManager.GetInstance().IsMatchGameActivate();

        //��ũ�� �Ǵ� �������� �� value ���� �����ϴ� �迭 �޸� �Ҵ�
        scrollPageValues = new float[mainParent.transform.childCount];

        //��ũ�� �Ǵ� ������ ������ �Ÿ�
        valueDistance = 1f / (scrollPageValues.Length - 1f);

        //��ũ�� �Ǵ� �������� �� value ��ġ ���� [0 <= value <= 1]
        for (int i = 0; i < scrollPageValues.Length; i++)
            scrollPageValues[i] = valueDistance * i;

        //�ִ� �������� ��
        maxPage = mainParent.transform.childCount;
    }

}
