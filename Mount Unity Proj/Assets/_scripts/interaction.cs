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
		if(acting.action == true){
			counter += 1;
		}
		if(counter > 250){
			acting.action = false;
			counter = 0;
		}
	}

	void OnTriggerEnter (Collider col) {
		//Debug.Log(col.tag);
		if(col.tag == "chair"){
			roll = Random.value * 100;
			if(roll > 75f){
			acting.action = true;
			}
			}
		}
	}