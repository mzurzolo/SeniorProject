using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace OLD
{
    public class Unit : MonoBehaviour
    {
        public int healthPoints = 5;
        public int damagePoints = 2;
        public int movePoints = 2;

        public Collider selfCollider;
        public Collider[] touchColliders;
        Transform selfTransform;
        private Collider_Listener colliderListener;


        private void Start()
        {
            selfTransform = this.transform;
            selfCollider = GetComponent<Collider>();
            touchColliders = selfTransform.Find("Touch Colliders").GetComponentsInChildren<Collider>();
            colliderListener = gameObject.AddComponent<Collider_Listener>();
            colliderListener.Init(touchColliders);
        }
    }
}