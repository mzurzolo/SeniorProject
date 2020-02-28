using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Game_System : MonoBehaviour
{
    public GameObject player_container;
    public GameObject Text;
    public Player[] players;
    private Random rnd = new Random();
    private string assetPath;

    // Start is called before the first frame update
    void Start()
    {
        players = player_container.GetComponentsInChildren<Player>();
        assetPath = Application.dataPath;
        Debug.Log(assetPath);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Text.GetComponent<UnityEngine.UI.Text>().text = "Winner = " + players[Random.Range(0, 2)].name;
            File.WriteAllText(assetPath + "/winner.txt", "Winner is " + players[Random.Range(0, 2)].name);
        }
    }
}