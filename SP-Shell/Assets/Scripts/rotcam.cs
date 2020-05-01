using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotcam : MonoBehaviour
{

    public float xrot, yrot, zrot, wrot;
    public float newx = 0, newy = 0, newz = 0,neww = 0;
    public float speed;

    private void Start()
    {
        Randomize();
    }
    float accum = 0;
    float t = 0;
    float dt = 0;
    void Update()
    {
        if (accum < 1 || t < 1)
        {
            newx = Mathf.Lerp(transform.rotation.x, xrot, speed);
            newy = Mathf.Lerp(transform.rotation.y, yrot, speed);
            newz = Mathf.Lerp(transform.rotation.z, zrot, speed);
            neww = Mathf.Lerp(transform.rotation.w, wrot, speed);

            transform.rotation = new Quaternion(newx, newy, newz, neww);
            accum += speed;
            t += dt;
        }
        else
            Randomize();
    }

    void Randomize()
    {
        accum = 0;
        t = 0;
        dt = Random.Range(0.005f, .015f);
        speed = Random.Range(0.005f, .015f);
        xrot = Random.Range(-1f, 1f);
        yrot = Random.Range(-1f, 1f);
        zrot = Random.Range(-1f, 1f);
        wrot = Random.Range(-1f, 1f);
    }
}
