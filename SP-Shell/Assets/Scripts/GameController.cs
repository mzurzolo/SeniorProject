using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using System.Threading;

[System.Serializable]
public class GameController : MonoBehaviour
{
    public Text[] spaceList;
    public Space[] trueSpaceList;
    public GameObject gameOverPanel;
    public Text gameOverText;
    public GameObject restartButton;
    private string side;
    public GameObject player_container;
    public Player[] players;
    public int player_idx;
    public Save save = new Save();
    public bool enableRestart = true;
    public bool gameOver = false;
    public bool tie = false;
    public GameObject waitingPanel;
    public imgColor imgCol;

    [DllImport("__Internal")]
    private static extern void GameOver(string winner);
    [DllImport("__Internal")]
    private static extern void EndMove();
    [DllImport("__Internal")]
    private static extern void ExportState(string savestate);
    [DllImport("__Internal")]
    private static extern void PollTrigger();
    // Start is called before the first frame update
    void Start()
    {
        players = player_container.GetComponentsInChildren<Player>();
        Screen.SetResolution(9, 16,true);
        imgCol.Init();
        #if UNITY_WEBGL
            enableRestart = false;
#endif
#if UNITY_EDITOR
        players[0].SetName("Player1");
        players[1].SetName("Player2");

        side = "X";
        player_idx = 0;
        enableRestart = true;
#endif

        SetGameControllerReferenceForButtons();
        gameOverPanel.SetActive(false);
        waitingPanel.SetActive(false);
        restartButton.SetActive(false);
    }

    private void Update()
    {
        if (!gameOver)
        {
            if ((side == "X" && player_idx != 0) || (side == "O" && player_idx != 1))
            {
                waitingPanel.SetActive(true);
                SetInteractable(false);
            }
            else
            {
                waitingPanel.SetActive(false);
                SetInteractable(true);
            }
        }
    }

    public void UGameOver(string winner)
    {
        #if UNITY_EDITOR
            return;
        #endif
        #if UNITY_WEBGL
            GameOver(winner);
        #endif
    }


    public void SetIDX(int index)
    {
      player_idx = index;
    }

    public void UEndMove()
    {
        #if UNITY_EDITOR
            return;
        #endif
        #if UNITY_WEBGL
            EndMove();
        #endif
    }


    public void UExportState(string savestate)
    {
        Debug.Log(savestate);
        #if UNITY_EDITOR
            return;
        #endif
        #if UNITY_WEBGL
            ExportState(savestate);
            //PollLoop(1);
            Debug.Log("postexport");
        #endif

    }

    void SetGameControllerReferenceForButtons()
    {
        int x = Random.Range(-1, 1);
        while (x == 0)
            x = Random.Range(-1, 1);
        for (int i = 0; i < spaceList.Length; i++)
        {
            spaceList[i].GetComponentInParent<Space>().SetControllerReference(this);
            spaceList[i].GetComponentInParent<Space>().Init(x);
        }
    }

    public void SaveFile()
    {
        File.Delete("save.json");
        StreamWriter writer = new StreamWriter("save.json", true);
        writer.WriteLine(ExportSaveState());
        writer.Close();
        Debug.Log("File saved!");
    }

    public void LoadFile()
    {
        StreamReader reader = new StreamReader("save.json");
        string json = reader.ReadToEnd();
        reader.Close();
        Debug.Log(json);

        ImportState(json);
        Debug.Log("File loaded!");
    }

    public void ExportState()
    {
        save.spaceList = new string[spaceList.Length];
        for (int i = 0; i < spaceList.Length; i++)
            save.spaceList[i] = spaceList[i].text;
        save.side = GetSide();
        save.player1 = players[0].name;
        save.player2 = players[1].name;
        UExportState(JsonUtility.ToJson(save));
    }

    public string ExportSaveState()
    {
        save.spaceList = new string[spaceList.Length];
        for (int i = 0; i < spaceList.Length; i++)
            save.spaceList[i] = spaceList[i].text;
        save.side = GetSide();
        save.player1 = players[0].name;
        save.player2 = players[1].name;
        return JsonUtility.ToJson(save);
    }

    public void ImportState(string gamestate)
    {
        Save s_ave = JsonUtility.FromJson<Save>(gamestate);
        SetSide(s_ave.side);
        side = GetSide();
        players[0].name = s_ave.player1;
        players[1].name = s_ave.player2;
        for (int i = 0; i < spaceList.Length; i++)
            if (spaceList[i].text != s_ave.spaceList[i])
                spaceList[i].GetComponentInParent<Space>().SetSpace(s_ave.spaceList[i]);
        if ((side == "X" && player_idx != 0) || (side == "O" && player_idx != 1))
            PollLoop(1);

        if (s_ave.winner != -1)
        {
            player_idx = s_ave.winner;
            GameOver();
        }

        Debug.Log("postimport");
    }

    public void CheckGameOver()
    {
        if (spaceList[0].text != "" && spaceList[1].text == spaceList[0].text && spaceList[2].text == spaceList[0].text)
            GameOver();
        else if (spaceList[3].text != "" && spaceList[4].text == spaceList[3].text && spaceList[5].text == spaceList[3].text)
            GameOver();
        else if (spaceList[6].text != "" && spaceList[7].text == spaceList[6].text && spaceList[8].text == spaceList[6].text)
            GameOver();
        else if (spaceList[0].text != "" && spaceList[3].text == spaceList[0].text && spaceList[6].text == spaceList[0].text)
            GameOver();
        else if (spaceList[1].text != "" && spaceList[4].text == spaceList[1].text && spaceList[7].text == spaceList[1].text)
            GameOver();
        else if (spaceList[2].text != "" && spaceList[5].text == spaceList[2].text && spaceList[8].text == spaceList[2].text)
            GameOver();
        else if (spaceList[0].text != "" && spaceList[4].text == spaceList[0].text && spaceList[8].text == spaceList[0].text)
            GameOver();
        else if (spaceList[2].text != "" && spaceList[4].text == spaceList[2].text && spaceList[6].text == spaceList[2].text)
            GameOver();
        else if (CheckBoard())
        {
            tie = true;
            GameOver();
        }
    }
    public string GetSide()
    {
        return side;
    }

    public void SetSide(string newside)
    {
        side = newside;
    }

    void ChangeSide()
    {
        if (side == "X")
        {
            SetSide("O");
            #if UNITY_EDITOR
                player_idx = 1;
            #endif
        }
        else
        {
            SetSide("X");
            #if UNITY_EDITOR
                player_idx = 0;
            #endif
        }
    }

    public void PollLoop(int i)
    {
      string pside = GetSide();
      if ((pside == "X" && player_idx != 0) || (pside == "O" && player_idx != 1))
      {
        #if UNITY_WEBGL
          PollTrigger();
        #endif
        pside = GetSide();
      }
    }

    public void EndTurn()
    {
        if (!gameOver)
        {
            CheckGameOver();
            //UEndMove();
            ChangeSide();
            ExportState();
        }
    }

    bool CheckBoard()
    {
        for(int i=0;i<spaceList.Length;i++)
            if (spaceList[i].text == "")
                return false;
        return true;
    }

    void GameOver()
    {
        gameOver = true;
        if (tie)
            gameOverText.text = "Tie!";
        else
        {
            UGameOver(players[player_idx].name);
            gameOverText.text = players[player_idx].name + " WINS!";
        }
        gameOverPanel.SetActive(true);
        restartButton.SetActive(enableRestart);
        for (int i = 0; i < spaceList.Length; i++)
            SetInteractable(false);
        save.winner = player_idx;
    }

    void SetInteractable(bool setting)
    {
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].GetComponentInParent<Button>().interactable = setting;
    }

    void CheckInteractable()
    {
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].GetComponentInParent<Button>().interactable = spaceList[i].text == "";
    }
    // ToDo Item #9, restart needs to get a new game, maybe with a signal back to react.
    // it shouldn't just be resetting the board of the current game instance
    public void Restart()
    {
        side = "X";
        player_idx = 0;
        gameOver = false;
        tie = false;
        gameOverPanel.SetActive(false);
        SetInteractable(true);
        restartButton.SetActive(false);
        int x = Random.Range(-1, 1);
        while (x == 0)
            x = Random.Range(-1, 1);
        for (int i = 0; i < spaceList.Length; i++)
        {
            spaceList[i].text = "";
            spaceList[i].GetComponentInParent<Space>().Init(x);
        }
    }
}

[System.Serializable]
public class Save
{
    public string[] spaceList;
    public string side;
    public string player1;
    public string player2;
    public int winner = -1;
}
