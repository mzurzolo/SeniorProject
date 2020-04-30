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

    // Update is called once per frame
    void Update()
    {
        tf.localScale += new Vector3(0.35f, 0.35f, 0.35f);

        if (tf.localScale.x >= 2)
            exp._alpha -= .035f;

        if (exp._alpha <= 0)
            Destroy(gameObject);
    }
}
