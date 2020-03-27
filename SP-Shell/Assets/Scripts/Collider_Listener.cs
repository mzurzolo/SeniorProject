using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collider_Listener : MonoBehaviour
{
    public void Init(Collider[] colliders)
    {
        // Check if Colider is in another GameObject
        foreach(Collider collider in colliders)
        { 
            Collider_Bridge cb = collider.gameObject.AddComponent<Collider_Bridge>();
            cb.Init(this);
        }
    }

    #region self collision
    internal void OnTriggerEnter(Collider other)
    {

    }

    internal void OnMouseEnter()
    {
        Debug.Log("!!!");
    }

    internal void OnMouseDown()
    {
        
    }
    internal void OnMouseExit()
    {

    }
    #endregion
    #region Touch Collision
    public void OnTouchMouseEnter()
    {
        Debug.Log("@@@");
    }

    public void OnTouchTriggerEnter(Collider other)
    {

    }

    public void OnTouchMouseDown()
    {
        
    }

    public void OnTouchMouseExit()
    {
        
    }
    #endregion
}
