using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Protocol;
using BackEnd;
using Cinemachine;
using BackEnd.Tcp;

public class Player : MonoBehaviour
{
    private SessionId index = 0;
    private string nickName = string.Empty;
    private bool isLive = false;
    private bool isMe = false;

    //UI
    public TextMesh nicknameText;

    //�̵� ����
    public bool isMove { get; private set; }
    public Vector3 moveVector { get; private set; }
    public bool isRotate { get; private set; }
    private float rotSpeed = 4.0f;
    private float moveSpeed = 4.0f;

    private GameObject playerObject;

    public void Initialize(bool isMe, SessionId index, string nickName)
    {
        this.isMe = isMe;
        this.index = index;
        this.nickName = nickName;

        nicknameText.text = nickName;

        var CM = GameObject.Find("Player_Camera").GetComponent<CinemachineVirtualCamera>();
        

        if (this.isMe)
        {
            CM.Follow = this.transform.GetChild(0).transform;
            CM.LookAt = this.transform.GetChild(0).transform;
        }

        this.isLive = true;
        this.isMove = false;
        this.moveVector = new Vector3(0, 0, 0);
        this.isRotate = false;

        playerObject = this.gameObject;
    }

    #region �̵����� �Լ�
    /*
     * ��ȭ����ŭ �̵�
     * Ư�� ��ǥ�� �̵�
     */
    public void SetMoveVector(float move)
    {
        SetMoveVector(this.transform.forward * move);
    }
    public void SetMoveVector(Vector3 vector)
    {
        moveVector = vector;

        if (vector == Vector3.zero)
            isMove = false;
        else
            isMove = true;
    }

    public void Move()
    {
        Move(moveVector);
    }
    public void Move(Vector3 var)
    {
        if (!isLive) return;
        else
        {
            if (Quaternion.Angle(playerObject.transform.rotation, Quaternion.LookRotation(var)) > Quaternion.kEpsilon)
                isRotate = true;
            else
                isRotate = false;
        }

        //�̵�
        var pos = gameObject.transform.position + playerObject.transform.forward * moveSpeed * Time.deltaTime;
        SetPosition(pos);
    }

    public void Rotate()
    {
        if (moveVector.Equals(Vector3.zero))
        {
            isRotate = false;
            return;
        }
        if(Quaternion.Angle(playerObject.transform.rotation, Quaternion.LookRotation(moveVector)) < Quaternion.kEpsilon)
        {
            isRotate = false;
            return;
        }
        playerObject.transform.rotation = Quaternion.Lerp(playerObject.transform.rotation, Quaternion.LookRotation(moveVector), Time.deltaTime * rotSpeed);
    }

    float tx = 0;

    public void SetRotate(float x)
    {
        if(x != 0)
        {
            tx += x;
        }
        this.transform.GetChild(0).transform.rotation = Quaternion.Euler(0, tx, 0);

        transform.rotation = Quaternion.Euler(0, this.transform.GetChild(0).transform.rotation.eulerAngles.y, 0);
    }

    public void SetPosition(Vector3 pos)
    {
        if (!isLive) return;
        gameObject.transform.position = pos;
    }

    //isStatic�� true�̸� �ش� ��ġ�� �̵�
    public void SetPosition(float x, float y, float z)
    {
        if (!isLive) return;
        Vector3 pos = new Vector3(x, y, z);
        SetPosition(pos);
    }

    public Vector3 GetPosition()
    {
        return gameObject.transform.position;
    }

    public Vector3 GetRotation()
    {
        return gameObject.transform.rotation.eulerAngles;
    }

    #endregion

    public bool GetIsLive()
    {
        return isLive;
    }

    private void PlayerDie()
    {
        isLive = false;
    }

    public SessionId GetIndex()
    {
        return index;
    }

    public bool IsMe()
    {
        return isMe;
    }

    public string GetNickName()
    {
        return nickName;
    }

    void Update()
    {
        if (!isLive) return;
        if (isMove) Move();
        if (isRotate) Rotate();

        if(transform.position.y < -5)
        {
            PlayerDie();
            //WorldManager
        }
    }
}
