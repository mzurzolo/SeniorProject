using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "Grid_Instance", menuName = "ScriptableObjects/GridObject", order = 1)]
public class Grid_Instance : MonoBehaviour
{
    public int columns = 5;
    public int rows = 5;
    public GameObject[,] grid_spaces;

    public GameObject space_prefab;

    private float xstep;
    private float xadjust;
    private float zstep;

    private Grid grid;
    private GridLayout.CellLayout layout;

    private void Start()
    {
        grid = GetComponent<Grid>();
        layout = grid.cellLayout;
        grid_spaces = new GameObject[columns, rows];

        switch(layout)
        {
            case GridLayout.CellLayout.Rectangle:
                xstep = 1.0f;
                zstep = 1.0f;
                break;
            case GridLayout.CellLayout.Hexagon:
                xstep = 1.0f;
                zstep = 0.75f;
                break;
        }
        
        for (int x=0;x<columns;x++)
            for(int z=0;z<rows;z++)
            {

                grid_spaces[x, z] = Instantiate(space_prefab);
                grid_spaces[x, z].transform.parent = transform;
                switch (layout)
                {
                    case GridLayout.CellLayout.Rectangle:
                        grid_spaces[x, z].transform.position = new Vector3(0.5f + x * xstep, 0, 0.5f + z * zstep);
                        break;
                    case GridLayout.CellLayout.Hexagon:
                        grid_spaces[x, z].transform.position = new Vector3((z % 2 * 0.5f) + x * xstep, 0, z * zstep);
                        break;
                }
            }
    }
}
