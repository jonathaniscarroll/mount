using UnityEngine;
using System.Collections;

public class game_engine : MonoBehaviour {
	public int likes = 0;
	public int posts = 0;
	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

		if ( Input.GetKeyDown ( KeyCode.P )){
			posts += 1;
			Debug.Log(posts);
		}

		if ( Input.GetKeyDown ( KeyCode.L )){
			likes += 1;
			Debug.Log(likes);
		}
	}
}
