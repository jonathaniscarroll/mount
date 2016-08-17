using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class interaction : MonoBehaviour {
	//to find variables outside of the object you need to define both the game object to search as well as the script
	//"self" is otherwise assumed
	public GameObject intern;
	public internMove acting; 

	public int counter;
	private float roll;

	private int holding;

	//throwing stuff stuff
	public Rigidbody rigidthrow;
	private float randomX;
	private float randomY;
	private float randomZ;

	//linerender stuff

	private int segmentSize;

	public GameObject Drawing;
	public LineRenderer render;
	public int drawLength = 19; 

	//laptop text stuff;
	public Text laptoptext;

	// Use this for initialization
	void Start () {
		acting = intern.GetComponent<internMove>();
		render = Drawing.GetComponent<LineRenderer>();
		counter = 0;
		holding = 0;
		render.SetVertexCount(drawLength);
		render.enabled = false;

		laptoptext.text = null;

	}
	
	// Update is called once per frame
	void Update () {
		//Debug.Log(acting.action);
		if(acting.action == true){
			counter += 1; 
			if(counter > 250){
				laptoptext.text = null;

				acting.action = false;
				counter = 0;
			}
		}
		if(holding == 1){
			foreach (Transform iChild in intern.transform){
				if (iChild.tag == "pencil") {
					//render.SetPosition(intern.transform.position.x,intern.transform.position.y,intern.transform.position.z);
					LineDraw ();
				}
			}
		}
			
	}

	void OnTriggerEnter (Collider col) {
		//Debug.Log(col.tag);

		if(col.tag == "chair"){
			roll = Random.value * 100;
			//Debug.Log(roll);
			if(roll > 50.0f){
			acting.action = true;
			}
		}
		if(col.tag == "pencil"){
			//get collider's game object, put that into pickuphold
			if(holding == 0){
			PickUpandHold (col.gameObject);
				render.enabled = true;
			}
			if(holding == 1){
				ThrowAwayItem ("pencil");
				PickUpandHold (col.gameObject);
			}
			//Debug.Log(col.gameObject);

		} 


		if(col.tag == "laptop"){
			counter = 0;
			roll = Random.value * 100;
			if(roll > 0.0f){
				acting.action = true;
				laptoptext.text = "laptop works";
				if(counter > 200){
					laptoptext.text = null;
				}
			}
		}
	}

	void PickUpandHold (GameObject item) {
		Vector3 internPosiHold = new Vector3 (transform.position.x, 2.0f, transform.position.z);

		//item.transform.Translate(internPosiHold * (Time.deltaTime * 0.1f), Space.Self);
	
		//item.transform.position = Vector3.MoveTowards(item.transform.position, internPosiHold, Time.deltaTime * 0.1f);
		item.transform.position = internPosiHold;
		item.transform.rotation = Random.rotation;
		item.transform.SetParent(intern.transform, true);
		item.GetComponent<Rigidbody>().useGravity = false;

		item.GetComponent<Rigidbody>().isKinematic = true;
		holding = 1;

	}

	void ThrowAwayItem (string oldItemName){
		foreach (Transform iChild in intern.transform){
			if (iChild.tag == oldItemName){

				randomX = (Random.value * 100f)*50;
				//randomY = (Random.value * 360f)*5;
				//randomZ = (Random.value * 360f)*5;
				iChild.GetComponent<Rigidbody>().useGravity = true;

				iChild.GetComponent<Rigidbody>().isKinematic = false;

				rigidthrow = iChild.GetComponent<Rigidbody>();
				rigidthrow.AddForce(intern.transform.forward * randomX, ForceMode.Force);
				iChild.parent = null;

				holding = 0;
			}
		}
	}
	int i;
	int j;

	void LineDraw () {
		i++;
		if (i > 5){
			i = 0;
			j++;
			if(j > drawLength - 1){
			j = 0;
			}
		}
	
			Vector3 interncurrentpos = new Vector3 (intern.transform.position.x,intern.transform.position.y,intern.transform.position.z);
			render.SetPosition(j, interncurrentpos);

	}
}