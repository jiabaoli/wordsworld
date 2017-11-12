using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetTexture : MonoBehaviour 
{
    [SerializeField]
    Texture2D targetTex;

	void Update () {
        AddToTex(Random.Range(0, 255), Random.Range(0, 255));
	}

    void AddToTex(float x, float y)
    {
		targetTex.SetPixel((int)Mathf.Round(x), (int)Mathf.Round(y), Color.gray);

		//Texture2D texture = new Texture2D(128, 128);
		//GetComponent<Renderer>().material.mainTexture = texture;

		//for (int i = 0; i < texture.height; i++)
		//{
		//	for (int j = 0; j < texture.width; j++)
		//	{
		//		Color color = ((j & i) != 0 ? Color.white : Color.gray);
		//		texture.SetPixel(x, y, color);
		//	}
		//}
        targetTex.Apply();
    }
}
