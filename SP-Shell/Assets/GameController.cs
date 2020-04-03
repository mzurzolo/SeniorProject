using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

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
    private Save save = new Save();


    [DllImport("__Internal")]
    private static extern void GameOver(string winner);
    [DllImport("__Internal")]
    private static extern void EndMove();
     [DllImport("__Internal")]
     private static extern void ImportSave(string player_1_id, string player_2_id);
    // Start is called before the first frame update
    void Start()
    {
        players = player_container.GetComponentsInChildren<Player>();
        SetGameControllerReferenceForButtons();
        side = "X";
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

    void SetGameControllerReferenceForButtons()
    {
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].GetComponentInParent<Space>().SetControllerReference(this);
    }

    public void SaveFile()
    {
        File.Delete("save.json");
        StreamWriter writer = new StreamWriter("save.json", true);
        writer.WriteLine(ExportState());
        writer.Close();
        Debug.Log("File saved!");
    }

    public void LoadFile()
    {
        StreamReader reader = new StreamReader("save.json");
        string json = reader.ReadToEnd();
        Debug.Log(json);
        reader.Close();
        UImportSave(json);
        Debug.Log("File loaded!");
    }

    public string ExportState()
    {
        save.spaceList = new string[spaceList.Length];
        for (int i = 0; i < spaceList.Length; i++)
            save.spaceList[i] = spaceList[i].text;
        save.side = side;
        save.player1 = players[0].pid;
        save.player2 = players[1].pid;
        return JsonUtility.ToJson(save);
    }
    
    public void UImportSave(string json)
    {
        save = JsonUtility.FromJson<Save>(json);
        
        side = save.side;
        players[0].pid = save.player1;
        players[1].pid = save.player2;
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].text = save.spaceList[i];
        CheckInteractable();
        #if UNITY_WEBGL
            ImportSave(players[0].pid, players[0].pid);
        #endif
    }

    public string GetSide()
    {
        return side;
    }

    void ChangeSide()
    {
        if (side == "X")
        {
            Debug.Log("!!!");
            side = "O";
            player_idx = 1;
        }
        else
        {
            side = "X";
            player_idx = 0;
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
    public string side = "";
    public int moves = 0;
    public string player1 = "";
    public string player2 = "";
}