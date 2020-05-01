using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioHandler : MonoBehaviour
{
    AudioSource aud;

   public AudioClip[] clips;
    void Start()
    {
        aud = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        if(!aud.isPlaying)
        {
            int i = Random.Range(0, clips.Length-1);
            while(aud.clip == clips[i])
            {
                i = Random.Range(0, clips.Length - 1);
            }
            aud.clip = clips[i];
            aud.Play();
        }
    }
}
