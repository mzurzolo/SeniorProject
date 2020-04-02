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
    private int moves;
    public GameObject player_container;
    public Player[] players;
    public int player_idx = 0;
    private Save save = new Save();

    /*
    [DllImport("__Internal")]
    private static extern void GameOver(string winner);
    [DllImport("__Internal")]
    private static extern void EndMove();
    [DllImport("__Internal")]
    private static extern void ImportSave(string player1id, string player2id);*/

    // Start is called before the first frame update
    void Start()
    {
        players = player_container.GetComponentsInChildren<Player>();
        SetGameControllerReferenceForButtons();
        side = "X";
        gameOverPanel.SetActive(false);
        moves = 0;
        restartButton.SetActive(false);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
            SaveFile();
        if (Input.GetKeyDown(KeyCode.L))
            LoadFile();
        if ((side == "X" && player_idx != 0) || (side == "O" && player_idx != 1))
            SetInteractable(false);
        else
            SetInteractable(true);
    }

    public void UGameOver(string winner)
    {
        //GameOver(winner);
    }

    public void UEndMove()
    {
        //EndMove();
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
        save.moves = moves;
        save.player1 = players[0].pid;
        save.player2 = players[1].pid;
        return JsonUtility.ToJson(save);
    }
    
    public void UImportSave(string json)
    {
        save = JsonUtility.FromJson<Save>(json);
        
        side = save.side;
        moves = save.moves;
        players[0].pid = save.player1;
        players[1].pid = save.player2;
        for (int i = 0; i < spaceList.Length; i++)
            spaceList[i].text = save.spaceList[i];
        CheckInteractable();
        //ImportSave(players[0].pid,players[0].pid)
    }

    public string GetSide()
    {
        return side;
    }

    void ChangeSide()
    {
        if (side == "X")
        {
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
        moves++;
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
        else if (moves >= 9)
        {
            gameOverPanel.SetActive(true);
            gameOverText.text = "Tie!";
            restartButton.SetActive(true);
        }
        UEndMove();
        ChangeSide();
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
        moves = 0;
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