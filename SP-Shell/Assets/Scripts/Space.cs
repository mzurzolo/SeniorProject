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
    public int leftright = -1;

    public void Init(int inv)
    {
        rectTransform = GetComponent<RectTransform>();
        startOffset = Random.Range(0f, 1f);
        accum = 0;
        leftright *= inv;
        rectTransform.localScale = new Vector3(1, 1, 1);
        rectTransform.localRotation = Quaternion.Euler(new Vector3(0, 0, 0));
    }

    public void SetControllerReference(GameController control)
    {
        gameController = control;
    }

    private float startOffset;
    public float scaleChange = 0.005f;
    public float rotChange = 0.5f;
    public float colChange = 0.005f;
    private float accum = 0;
    private void Update()
    {
        if (buttonText.text == "")
        {
            accum += Time.deltaTime;
            if (accum >= startOffset)
            {
                if (rectTransform.localScale.x > 1.25 || rectTransform.localScale.x < 0.85f)
                    scaleChange *= -1;
                rectTransform.localScale += new Vector3(scaleChange, scaleChange, scaleChange);
            }

            if (Mathf.Abs(rectTransform.localRotation.z) >= .2)
                leftright *= -1;
            rectTransform.localRotation = Quaternion.Euler(rectTransform.localRotation.eulerAngles + new Vector3(0, 0, rotChange * leftright));
        }
        else
        {
            rectTransform.localScale = Vector3.Lerp(rectTransform.localScale, new Vector3(.8f, .8f, .8f), .2f);
            Vector3 newRot = Vector3.Lerp(rectTransform.localRotation.eulerAngles, new Vector3(0, 0, 0), .2f);
            rectTransform.localRotation = Quaternion.Euler(newRot);
            button.interactable = false;
        }

        if (buttonText.color.r >= 1.0f && buttonText.color.g <= 0.0f)
        {
            buttonText.color += new Color(0, 0, colChange);
            if (buttonText.color.b >= 1.0f)
                buttonText.color -= new Color(colChange, 0, 0);
        }
        if (buttonText.color.b >= 1.0f && buttonText.color.r >= 0.0f)
        {
            buttonText.color -= new Color(colChange, 0, 0);
        }
        if (buttonText.color.b >= 1.0f && buttonText.color.r <= 0.0f)
        {
            buttonText.color += new Color(0, colChange, 0);
            if (buttonText.color.g >= 1.0f)
                buttonText.color -= new Color(0, 0, colChange);
        }
        if (buttonText.color.g >= 1.0f && buttonText.color.b >= 0.0f)
        {
            buttonText.color -= new Color(0, 0, colChange);
        }
        if (buttonText.color.g >= 1.0f && buttonText.color.b <= 0.0f)
        {
            buttonText.color += new Color(colChange, 0, 0);
            if (buttonText.color.r >= 1.0f)
                buttonText.color -= new Color(0, colChange, 0);
        }
        if (buttonText.color.r >= 1.0f && buttonText.color.g >= 0.0f)
        {
            buttonText.color -= new Color(0, colChange, 0);
        }
    }


    public void SetSpace(string change)
    {
        if (change != "")
        {
            buttonText.text = change;
            instanceExplosion();
        }
        else if (buttonText.text == "")
        {
            buttonText.text = gameController.GetSide();
            instanceExplosion();
            gameController.EndTurn();
        }

    }

    void instanceExplosion()
    {
        Vector3 newPos = new Vector3(0, 0, 10f);

        if (rectTransform.localPosition.x < 0)
            newPos += new Vector3(-1.35f, 0, 0);
        else if (rectTransform.localPosition.x > 0 && rectTransform.localPosition.x < 100)
            newPos += new Vector3(1.28f, 0, 0);
        else
            newPos += new Vector3(4f, 0, 0);

        if (rectTransform.localPosition.y < 0)
            newPos += new Vector3(0, -2.5f, 0);
        else if (rectTransform.localPosition.y > 0)
            newPos += new Vector3(0, 2.5f, 0);
        else
            newPos += new Vector3(0, 0f, 0);
        //Debug.Log(newPos);
        //Debug.Log(rectTransform.localPosition);
        GameObject ex = Instantiate(explosion, Camera.main.transform);
        ex.transform.localPosition = newPos;
    }
}
