using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Protocol;

public class InputManager : MonoBehaviour
{
    private bool isMove = false;

    public Movement_Joystick virtualStick;

    void Start()
    {
        GameManager.InGame += MobileInput;
    }

    void MobileInput()
    {
        if (!virtualStick) return;

        KeyMessage msg = new KeyMessage(virtualStick.joystickVec.x);


        if (BackendMatchManager.GetInstance().IsHost())
        {
            BackendMatchManager.GetInstance().SendDataToInGame<KeyMessage>(msg);
        }
        else
        {
            BackendMatchManager.GetInstance().SendDataToInGame<KeyMessage>(msg);
        }


    }
}
