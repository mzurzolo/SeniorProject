using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Game_System : MonoBehaviour
{
    public GameObject player_container;
    public GameObject Text;
    private Player[] players;
    private Random rnd = new Random();


    // Start is called before the first frame update
    void Start()
    {
        players = player_container.GetComponentsInChildren<Player>();

        Text.GetComponent<UnityEngine.UI.Text>().text += " = " + players[Random.Range(0, 2)].name;

        //create Folder


        string m_Path = Application.dataPath;

        //Output the Game data path to the console
        Debug.Log("dataPath : " + m_Path);
        File.WriteAllText(m_Path + "/winner.txt", "Winner is " + players[Random.Range(0, 2)].name);
    }
}