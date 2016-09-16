using UnityEngine;
using System.Collections;

public class textscrollermove : MonoBehaviour {

	public GameObject starttext;
	//public GameObject endtext;
	public int speed;

	private Rigidbody rb;
	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody>();
		rb.AddForce(speed,0,0,ForceMode.Impulse);
	}
	
	// Update is called once per frame
	void Update () {
		//rb.AddForce(speed,0,0,ForceMode.Force);
		if(transform.position.x <= -50.0f){
			transform.position = starttext.transform.position;
		}
	}
}
