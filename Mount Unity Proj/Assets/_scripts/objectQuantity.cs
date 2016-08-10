using UnityEngine;
using System.Collections;

public class objectQuantity : MonoBehaviour {



	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void generateObject(){
		objectProb = Random.Range (0f, 100f);
		if (objectProb <= posts) {
			Instantiate(cubicleObject, new Vector3(Random.Range (-5f, 5f), 10, Random.Range (-5f, 5f)), Quaternion.identity);
		}
}
