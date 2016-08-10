using UnityEngine;
using System.Collections;

public class objectquality : MonoBehaviour {

	public GameObject poorItem;
	public GameObject goodItem;
	private float roll;

	//reference the name of the script and the variable it is assigned
	public game_engine quality; 

	// Use this for initialization
	void Start () {
		//really drive home that this script is refering to the thing you told it to refer to
		quality = gameObject.GetComponent<game_engine>();
	}
	
	// Update is called once per frame
	void Update () {
		if ( Input.GetKeyDown (KeyCode.Space) ){
			roll = Random.value * 100;
			//script name dot variable within said script fucking A
			if ( roll >= quality.likes ){
				Debug.Log(quality.likes );
			} else {
				Debug.Log(false);
			}
		}
	}
}
