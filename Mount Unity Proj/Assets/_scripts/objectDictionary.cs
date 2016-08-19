using UnityEngine;
using System.Collections;
using System.Collections.Generic; //this is necessary for using lists

public class objectDictionary : MonoBehaviour {

	public List<GameObject> cubicleObjects = new List<GameObject>();

	public Dictionary<int,GameObject> cubobjDictionary;
	public Dictionary<int,GameObject> weightDictionary;

	private GameObject[] testWeight;
	private string objTag;

	// Use this for initialization
	void Start () {
		cubobjDictionary = new Dictionary<int,GameObject>();
		makeObjectDictionary ();
	}
	
	// Update is called once per frame
	void Update () {
		if ( Input.GetKeyDown ( KeyCode.Space )){
			weightObjects ();
		}
	}


	// each object has a base like level required to spawn that item. This is called in the object quantity script
	void makeObjectDictionary(){
		int i = 1;
		int o;
		foreach(GameObject cubobj in cubicleObjects)
		{
			o = Random.Range (i * (10 + i * i) - 10, i * (10 + i * i) + 10);
			//Debug.Log (o);
			cubobjDictionary.Add (o,cubobj);
			//Debug.Log (cubobjDictionary[o]);
			i++;
		}
	}
	//weight object generation based on which objects already exist
	void weightObjects(){

		int i = 0;

		foreach (GameObject cubobj in cubicleObjects) {

			objTag = cubobj.tag;
			//find how many of each game object is in the scene
			testWeight = GameObject.FindGameObjectsWithTag (objTag);

			Debug.Log(cubobj + ": " + testWeight.Length);

//			foreach (GameObject objectWeight in testWeight) {
//				weightDictionary.ADD ();
//				i++;
//			}
		}
	}
}
