using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private ArrayList grid_selected = new ArrayList();

    public void push_space(Grid_Space gs)
    {
        grid_selected.Add(gs);
    }

    private void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            ClearGrid();
        }
    }

    void ClearGrid()
    {
        foreach(Grid_Space gs in grid_selected)
        {
            gs.selected = false;
            gs.meshRenderer.material = gs.defMat;
        }
    }

    public void SetName(string new_name)
    {
        name = new_name;
    }
}
