using UnityEngine;
using System.Collections;
using System.Collections.Generic; //this is necessary for using lists

public class objectDictionary : MonoBehaviour {

	public List<GameObject> cubicleObjects = new List<GameObject>();

	public Dictionary<int,GameObject> cubobjDictionary;
	public Dictionary<GameObject,float> weightDictionary;

	private GameObject[] testWeight;
	private string objTag;

	private float increment;
	private float incrementPoints;

	// Use this for initialization
	void Start () {
		incrementPoints = 100f;
		cubobjDictionary = new Dictionary<int,GameObject>();
		weightDictionary = new Dictionary<GameObject,float> ();
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

		float incrementCount;
		float weight;



		foreach (GameObject cubobj in cubicleObjects) {

			increment = incrementPoints/cubicleObjects.Count;

			objTag = cubobj.tag;
			//find how many of each game object is in the scene
			testWeight = GameObject.FindGameObjectsWithTag (objTag);

			weight = increment / testWeight.Length;

			if (cubobj != null && testWeight.Length != null) {
				//create dictionary containing the amount of each object contained in scene

				weightDictionary.Add (cubobj, weight);
				Debug.Log (cubobj + " " + weightDictionary[cubobj]);
			}

			incrementPoints = incrementPoints - weight;

		}
	}
}
