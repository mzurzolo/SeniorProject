using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class lineColor : MonoBehaviour
{
    public Image[] lines;
    // Start is called before the first frame update
    void Start()
    {
        lines = GetComponentsInChildren<Image>();
    }
    // Update is called once per frame
    float change = 0.005f;
    void Update()
    {
 
        foreach (Image line in lines)
        {
            if (line.name.Contains("Line"))
            {
                if (line.color.r >= 1.0f && line.color.g <= 0.0f)
                {
                    line.color += new Color(0, 0, change);
                    if (line.color.b >= 1.0f)
                        line.color -= new Color(change, 0, 0);
                }
                if (line.color.b >= 1.0f && line.color.r >= 0.0f)
                {
                    line.color -= new Color(change, 0, 0);
                }
                if (line.color.b >= 1.0f && line.color.r <= 0.0f)
                {
                    line.color += new Color(0, change, 0);
                    if (line.color.g >= 1.0f)
                        line.color -= new Color(0, 0, change);
                }
                if (line.color.g >= 1.0f && line.color.b >= 0.0f)
                {
                    line.color -= new Color(0, 0, change);
                }
                if (line.color.g >= 1.0f && line.color.b <= 0.0f)
                {
                    line.color += new Color(change, 0, 0);
                    if (line.color.r >= 1.0f)
                        line.color -= new Color(0, change, 0);
                }
                if (line.color.r >= 1.0f && line.color.g >= 0.0f)
                {
                    line.color -= new Color(0, change, 0);
                }
            }
        }
    }
}
