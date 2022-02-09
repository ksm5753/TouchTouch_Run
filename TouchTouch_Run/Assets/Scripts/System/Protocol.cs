using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd.Tcp;

namespace Protocol
{
    //�̺�Ʈ Ÿ��
    public enum Type : sbyte
    {
        AIPlayerInfo,


        Key,

        StartCount,
        LoadRoomScene,
        LoadGameScene,
        GameSync,
        GameStart,
        GameEnd
    }

    public class Message
    {
        public Type type;

        public Message(Type type)
        {
            this.type = type;
        }
    }

    public class KeyMessage : Message
    {
        public float x;

        public KeyMessage(float x) : base(Type.Key)
        {
            this.x = x;
        }
    }


    public class AIPlayerInfo : Message
    {
        public SessionId m_sessionId;
        public string m_nickname;
        public int m_numberOfMatches;
        public int m_numberOfWin;
        public int m_numberOfDraw;
        public int m_numberOfDefeats;

        public AIPlayerInfo(MatchUserGameRecord gameRecord) : base(Type.AIPlayerInfo)
        {
            this.m_sessionId = gameRecord.m_sessionId;
            this.m_nickname = gameRecord.m_nickname;
            this.m_numberOfWin = gameRecord.m_numberOfWin;
            this.m_numberOfDraw = gameRecord.m_numberOfDraw;
            this.m_numberOfDefeats = gameRecord.m_numberOfDefeats;
            this.m_numberOfMatches = gameRecord.m_numberOfMatches;
        }

        public MatchUserGameRecord GetMatchRecord()
        {
            MatchUserGameRecord gameRecord = new MatchUserGameRecord();
            gameRecord.m_sessionId = this.m_sessionId;
            gameRecord.m_nickname = this.m_nickname;
            gameRecord.m_numberOfMatches = this.m_numberOfMatches;
            gameRecord.m_numberOfWin = this.m_numberOfWin;
            gameRecord.m_numberOfDraw = this.m_numberOfDraw;
            gameRecord.m_numberOfDefeats = this.m_numberOfDefeats;

            return gameRecord;
        }
    }

    public class LoadRoomSceneMessage : Message
    {
        public LoadRoomSceneMessage() : base(Type.LoadRoomScene)
        {

        }
    }
    public class LoadGameSceneMessage : Message
    {
        public LoadGameSceneMessage() : base(Type.LoadGameScene)
        {

        }
    }

    public class StartCountMessage : Message
    {
        public int time;
        public StartCountMessage(int time) : base(Type.StartCount)
        {
            this.time = time;
        }
    }

    public class GameSyncMessage : Message
    {
        public SessionId host;
        public int count = 0;
        public float[] xPos = null;
        public float[] zPos = null;
        public bool[] onlineInfo = null;

        public GameSyncMessage(SessionId host, int count, float[] x, float[] z, bool[] online) : base(Type.GameSync)
        {
            this.host = host;
            this.count = count;
            this.xPos = new float[count];
            this.zPos = new float[count];
            this.onlineInfo = new bool[count];

            for(int i = 0; i < count; i++)
            {
                xPos[i] = x[i];
                zPos[i] = z[i];
                onlineInfo[i] = online[i];
            }
        }
    }

    public class GameStartMessage : Message
    {
        public GameStartMessage() : base(Type.GameStart)
        {

        }
    }

    public class GameEndMessage : Message
    {
        public int count;
        public int[] sessionList;

        public GameEndMessage(Stack<SessionId> result) : base(Type.GameEnd)
        {
            count = result.Count;
            sessionList = new int[count];
            for(int i = 0; i < count; i++)
            {
                sessionList[i] = (int)result.Pop();
            }
        }
    }
}
