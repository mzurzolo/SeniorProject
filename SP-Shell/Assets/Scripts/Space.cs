using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Space : MonoBehaviour
{
    public Button button;
    public Text buttonText;
    public GameObject explosion;
    private GameController gameController;
    private RectTransform rectTransform;
    public void SetControllerReference(GameController control)
    {
        gameController = control;
        rectTransform = GetComponent<RectTransform>();
        startOffset = Random.Range(0f, 1f);
    }

    private float startOffset;
    private float change = 0.005f;
    private float accum = 0;
    private void Update()
    {
        accum += Time.deltaTime;
        if (accum >= startOffset)
        {
            if (rectTransform.localScale.x > 1.25 || rectTransform.localScale.x < 0.85f)
                change *= -1;
            rectTransform.localScale += new Vector3(change, change, change);
        }
    }


    public void SetSpace(string change)
    {
        if (buttonText.text == "")
        {
            buttonText.text = gameController.GetSide();
            instanceExplosion();
            gameController.EndTurn();
        }
        else if(change != "")
        {
            buttonText.text = change;
            instanceExplosion();
        }
    }

    void instanceExplosion()
    {
        Vector3 newPos = new Vector3(0, 0, 2.45f);

        if (rectTransform.localPosition.x < 0)
            newPos += new Vector3(-.8f, 0, 0);
        else if (rectTransform.localPosition.x > 0 && rectTransform.localPosition.x < 100)
            newPos += new Vector3(0.9f, 0, 0);
        else
            newPos += new Vector3(2.7f, 0, 0);

        if (rectTransform.localPosition.y < 0)
            newPos += new Vector3(0, -1f, 0);
        else if (rectTransform.localPosition.y > 0)
            newPos += new Vector3(0, 3f, 0);
        else
            newPos += new Vector3(0, 1f, 0);
        Debug.Log(newPos);
        Debug.Log(rectTransform.localPosition);
        GameObject ex = Instantiate(explosion, newPos, Camera.main.transform.rotation);
    }
}
