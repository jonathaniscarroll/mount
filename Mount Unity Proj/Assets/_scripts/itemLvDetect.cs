using UnityEngine;
using System.Collections;

public class itemLvDetect : MonoBehaviour {

	//public int readItemLevel;
	//public itemLvVars loaditemLevel;

	public itemLvVars itemLevelRead;

	public int topChairLevel;
	public Rigidbody rigid;
	private float randomX;
	private float randomY;
	private float randomZ;

	// Use this for initialization
	void Start () {
		topChairLevel = 0;
	}

	// Update is called once per frame
	void Update () {
	}

	void OnTriggerEnter (Collider col) {
		//Debug.Log(true);
		itemLevelRead = col.GetComponent<itemLvVars>();
		if(itemLevelRead != null){
		//Debug.Log(itemLevelRead.itemLevel);

		if(col.tag == "chair"){
			if(itemLevelRead.itemLevel > topChairLevel){
				topChairLevel = itemLevelRead.itemLevel;
				Debug.Log("NEW TOP LEVEL" + topChairLevel);
			}
			if(topChairLevel > itemLevelRead.itemLevel){
					randomX = (Random.value * 100f)*10;
					randomY = (Random.value * 100f)*10;
					randomZ = (Random.value * 100f)*10;

					rigid = col.GetComponent<Rigidbody>();
					rigid.AddForce(randomX, randomY, randomZ, ForceMode.Force);
					Debug.Log("PUNCH");
			}
		}
	}
	}
}
