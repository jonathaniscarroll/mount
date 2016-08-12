using UnityEngine;
using System.Collections;

public class itemLvDetect : MonoBehaviour {

	//public int readItemLevel;
	//public itemLvVars loaditemLevel;

	public itemLvVars itemLevelRead;
	public int itemLevelDectected;

	// Use this for initialization
	void Start () {
		itemLevelDectected = 0;
	}

	// Update is called once per frame
	void Update () {
	}

	void OnTriggerEnter (Collider col) {
		Debug.Log(true);
		itemLevelRead = col.GetComponent<itemLvVars>();
		if(itemLevelRead != null){
		Debug.Log(itemLevelRead.itemLevel);
		}
	}
}
