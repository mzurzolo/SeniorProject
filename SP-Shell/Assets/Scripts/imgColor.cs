using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class imgColor : MonoBehaviour
{
    public Image[] imgs;
    // Start is called before the first frame update
    public void Init()
    {
        imgs = GetComponentsInChildren<Image>();
    }
    // Update is called once per frame
    float change = 0.005f;
    void Update()
    {
 
        foreach (Image img in imgs)
        {
            if (img.name.Contains("Line") || img.name.Contains("Panel"))
            {
                
                if (img.color.r >= 1.0f && img.color.g <= 0.0f)
                {
                    img.color += new Color(0, 0, change);
                    if (img.color.b >= 1.0f)
                        img.color -= new Color(change, 0, 0);
                }
                if (img.color.b >= 1.0f && img.color.r >= 0.0f)
                {
                    img.color -= new Color(change, 0, 0);
                }
                if (img.color.b >= 1.0f && img.color.r <= 0.0f)
                {
                    img.color += new Color(0, change, 0);
                    if (img.color.g >= 1.0f)
                        img.color -= new Color(0, 0, change);
                }
                if (img.color.g >= 1.0f && img.color.b >= 0.0f)
                {
                    img.color -= new Color(0, 0, change);
                }
                if (img.color.g >= 1.0f && img.color.b <= 0.0f)
                {
                    img.color += new Color(change, 0, 0);
                    if (img.color.r >= 1.0f)
                        img.color -= new Color(0, change, 0);
                }
                if (img.color.r >= 1.0f && img.color.g >= 0.0f)
                {
                    img.color -= new Color(0, change, 0);
                }
            }
        }
    }
}
