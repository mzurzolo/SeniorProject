using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

[System.Serializable]
public class GameController : MonoBehaviour
{
    public Text[] spaceList;
    public GameObject gameOverPanel;
    public Text gameOverText;
    public GameObject restartButton;
    private string side;
    public GameObject player_container;
    public Player[] players;
    public int player_idx = 0;
    public Save save = new Save();


    [DllImport("__Internal")]
    private static extern void GameOver(string winner);
    [DllImport("__Internal")]
    private static extern void EndMove();
    [DllImport("__Internal")]
    private static extern void ExportState(string savestate);
    // Start is called before the first frame update
    void Start()
    {
        players = player_container.GetComponentsInChildren<Player>();
        SetGameControllerReferenceForButtons();
        gameOverPanel.SetActive(false);
        restartButton.SetActive(false);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            #if UNITY_WEBGL
                //Call react function to export json i guess?
            #endif
            #if UNITY_EDITOR
                SaveFile();
            #endif
        }
        if (Input.GetKeyDown(KeyCode.L))
        {
            #if UNITY_WEBGL
                //Call react function to import json i guess?
            #endif
            #if UNITY_EDITOR
                LoadFile();
            #endif
        }
        if ((side == "X" && player_idx != 0) || (side == "O" && player_idx != 1))
            SetInteractable(false);
        else
            SetInteractable(true);
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
        #endif
    }

    void SetGameControllerReferenceForButtons()
    {
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].GetComponentInParent<Space>().SetControllerReference(this);
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
        save.side = side;
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
        Debug.Log(this.side);
        SetSide(s_ave.side);
        Debug.Log(this.side);
        players[0].name = s_ave.player1;
        players[1].name = s_ave.player2;
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].text = s_ave.spaceList[i];
        CheckInteractable();
    }

    public string GetSide()
    {
        return side;
    }

    public void SetSide(string side)
    {
        this.side = side;
    }

    void ChangeSide()
    {
        if (side == "X")
        {
            Debug.Log("!!!");
            side = "O";
            //player_idx = 1;
        }
        else
        {
            side = "X";
            //player_idx = 0;
        }
    }

    public void EndTurn()
    {
        if (spaceList[0].text == side && spaceList[1].text == side && spaceList[2].text == side)
            GameOver();
        else if (spaceList[3].text == side && spaceList[4].text == side && spaceList[5].text == side)
            GameOver();
        else if (spaceList[6].text == side && spaceList[7].text == side && spaceList[8].text == side)
            GameOver();
        else if (spaceList[0].text == side && spaceList[3].text == side && spaceList[6].text == side)
            GameOver();
        else if (spaceList[1].text == side && spaceList[4].text == side && spaceList[7].text == side)
            GameOver();
        else if (spaceList[2].text == side && spaceList[5].text == side && spaceList[8].text == side)
            GameOver();
        else if (spaceList[0].text == side && spaceList[4].text == side && spaceList[8].text == side)
            GameOver();
        else if (spaceList[2].text == side && spaceList[4].text == side && spaceList[6].text == side)
            GameOver();
        else if (CheckBoard())
        {
            gameOverPanel.SetActive(true);
            gameOverText.text = "Tie!";
            restartButton.SetActive(true);
        }
        UEndMove();
        ChangeSide();
        ExportState();
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
        UGameOver(players[player_idx].name);
        gameOverPanel.SetActive(true);
        gameOverText.text = players[player_idx].name + " wins!";
        restartButton.SetActive(true);
        for (int i = 0; i < spaceList.Length; i++)
            SetInteractable(false);
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

    public void Restart()
    {
        side = "X";
        player_idx = 0;
        gameOverPanel.SetActive(false);
        SetInteractable(true);
        restartButton.SetActive(false);
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].text = "";
    }
}

[System.Serializable]
public class Save
{
    public string[] spaceList;
    public string side;
    public string player1;
    public string player2;
}
