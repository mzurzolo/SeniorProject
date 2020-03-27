using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace OLD
{
    public class Grid_Space : MonoBehaviour

    {
        public Material defMat;
        public Material selMat;
        public Material curMat;

        public bool selected = false;
        public MeshRenderer meshRenderer;

        private Game_System gameSys;

        private void Start()
        {
            meshRenderer = GetComponent<MeshRenderer>();
            gameSys = transform.parent.parent.GetComponent<Game_System>();
        }

        private void OnMouseOver()
        {
            if (!selected)
                meshRenderer.material = selMat;
        }

        private void OnMouseExit()
        {
            if (!selected && !Input.GetMouseButton(0))
                meshRenderer.material = defMat;
            if (!selected && Input.GetMouseButton(0))
            {
                gameSys.players[0].push_space(this);
                meshRenderer.material = curMat;
                selected = true;
            }
        }

        private void OnMouseDown()
        {
            gameSys.players[0].push_space(this);
            meshRenderer.material = curMat;
            selected = true;
        }
    }
}