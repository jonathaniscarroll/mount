using UnityEngine;
using System.Collections;
using System.Collections.Generic; //this is necessary for using lists

public class objectDictionary : MonoBehaviour {

	public List<GameObject> cubicleObjects = new List<GameObject>();

	public Dictionary<int,GameObject> cubobjDictionary; 

	// Use this for initialization
	void Start () {
		cubobjDictionary = new Dictionary<int,GameObject>();
		makeObjectDictionary ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

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
}
