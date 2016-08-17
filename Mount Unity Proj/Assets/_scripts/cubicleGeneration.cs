using UnityEngine;
using System.Collections;
using System.Collections.Generic; //this is necessary for using lists

public class cubicleGeneration : MonoBehaviour {

	public game_engine GameEngine;
	public List<GameObject> cubicles = new List<GameObject>();

	private GameObject newestCubicle;
	private List<Vector3> directions = new List<Vector3> ();
	private Vector3 cubiclePos;
	public GameObject pathway;

	// Use this for initialization
	void Start () {
		GameEngine = gameObject.GetComponent<game_engine>();
		newestCubicle = GameObject.FindGameObjectWithTag ("cubicle");
		cubiclePos = newestCubicle.transform.position;
		newCubicle();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void newCubicle(){
		directions.Add (cubiclePos + new Vector3 (6, 0, 0));
		directions.Add (cubiclePos + new Vector3 (-6, 0, 0));
		directions.Add (cubiclePos + new Vector3 (0, 0, 6));
		directions.Add (cubiclePos + new Vector3 (0, 0, -6));
		Instantiate (pathway, directions [Random.Range (0,4)], Quaternion.identity);
	}
}
