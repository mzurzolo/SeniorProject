using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using System.Runtime.InteropServices;
using UnityEngine.Events;
using System;


namespace OLD
{
    [System.Serializable]
    public class MyStringEvent : UnityEvent<string>
    {
    }

    public class Game_System : MonoBehaviour
    {
        public GameObject player_container;
        public GameObject Text;
        public Player[] players;
        private UnityEngine.Random rnd = new UnityEngine.Random();
        private string assetPath;
        private MyStringEvent gameOver = new MyStringEvent();

        [DllImport("__Internal")]
        private static extern void GameOver(string winner);

        // Then create a function that is going to trigger
        // the imported function from our JSLib.



        // Start is called before the first frame update
        void Start()
        {
            players = player_container.GetComponentsInChildren<Player>();
            assetPath = Application.dataPath;
            Debug.Log(assetPath);

            gameOver.AddListener(UGameOver);

            // A correct website page.
            //StartCoroutine(GetRequest("http://localhost:3000/"));
        }

        public void UGameOver(string winner)
        {
            GameOver(winner);
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
                string winner = players[UnityEngine.Random.Range(0, 2)].name;
                gameOver.Invoke(winner);
                Text.GetComponent<UnityEngine.UI.Text>().text = "Winner = " + winner;
            }
        }

    }
}