using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

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

        // A correct website page.
        StartCoroutine(GetRequest("http://localhost:3000/"));
    }

    IEnumerator GetRequest(string uri)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
        {
            // Request and wait for the desired page.
            yield return webRequest.SendWebRequest();

            string[] pages = uri.Split('/');
            int page = pages.Length - 1;

            if (webRequest.isNetworkError)
            {
                Debug.Log(pages[page] + ": Error: " + webRequest.error);
            }
            else
            {
                Debug.Log(pages[page] + ":\nReceived: " + webRequest.downloadHandler.text);
            }
        }
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