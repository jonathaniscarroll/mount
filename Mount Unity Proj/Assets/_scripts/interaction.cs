using UnityEngine;
using System.Collections;

public class interaction : MonoBehaviour {
	//to find variables outside of the object you need to define both the game object to search as well as the script
	//"self" is otherwise assumed
	public GameObject intern;
	public internMove acting; 

	public int counter;
	private float roll;

	// Use this for initialization
	void Start () {
		acting = intern.GetComponent<internMove>();
		counter = 0;
	}
	
	// Update is called once per frame
	void Update () {
		//Debug.Log(acting.action);
		if(acting.action == true){
			counter += 1;
		if(counter > 250){
			counter = 0;
			acting.action = false;
			}
		}
	}

	void OnTriggerEnter (Collider col) {
		//Debug.Log(col.tag);
		if(col.tag == "chair"){
			roll = Random.value * 100;
			Debug.Log(roll);
			if(roll > 50.0f){
			acting.action = true;
			}
			}
		}
	}