using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Space : MonoBehaviour
{
    public Button button;
    public Text buttonText;
    private GameController gameController;

    public void SetControllerReference(GameController control)
    {
        gameController = control;
    }


    public void SetSpace()
    {
        if (buttonText.text == "")
        {
            buttonText.text = gameController.GetSide();
            gameController.EndTurn();
        }
    }

}
