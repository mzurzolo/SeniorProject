using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collider_Bridge : MonoBehaviour
{
    Collider_Listener _listener;
    public void Init(Collider_Listener l)
    {
        _listener = l;
    }

    private void OnTriggerEnter(Collider other)
    {
        _listener.OnTouchTriggerEnter(other);
    }

    private void OnMouseEnter()
    {
        _listener.OnTouchMouseEnter();
    }

    private void OnMouseDown()
    {
        _listener.OnTouchMouseDown();
    }

    private void OnMouseExit()
    {
        _listener.OnTouchMouseExit();
    }

}
