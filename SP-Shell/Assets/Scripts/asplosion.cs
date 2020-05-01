using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class asplosion : MonoBehaviour
{
    ExplosionMat exp;
    Transform tf;
    // Start is called before the first frame update
    void Start()
    {
        tf = transform;
        exp = GetComponent<ExplosionMat>();
        tf.localScale = new Vector3(0.0f, 0.0f, 0.0f);
    }

    float scaleChange = 0.25f;

    // Update is called once per frame
    void Update()
    {
        tf.localScale += new Vector3(scaleChange, scaleChange, scaleChange);

        if (tf.localScale.x >= 2.5)
            exp._alpha -= .015f;

        if (exp._alpha <= 0)
            Destroy(gameObject);
    }
}
