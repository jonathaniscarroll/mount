using UnityEngine;
using System.Collections;

public class objectQuantity : MonoBehaviour {

	private float objectProb;
	private GameObject cubicleObject;

	//reference the name of the script and the variable it is assigned
	public game_engine quantity; 

	//get the current quality from quality script
	public objectquality quality;

	// Use this for initialization
	void Start () {
		quantity = gameObject.GetComponent<game_engine>();
		quality = gameObject.GetComponent<objectquality> ();
	}
	
	// Update is called once per frame
	void Update () {

		if (quantity.timer == 0) {
			generateObject ();
		}

		if(Input.GetKeyDown ( KeyCode.Space))
			generateObject ();
	}

	void generateObject(){
		cubicleObject = quality.currentItem;
		objectProb = Random.Range (0f, 100f);
		if (objectProb <= quantity.likes) {
			Instantiate(cubicleObject, new Vector3(Random.Range (-5f, 5f), 10, Random.Range (-5f, 5f)), Quaternion.identity);
		}
	}
}
