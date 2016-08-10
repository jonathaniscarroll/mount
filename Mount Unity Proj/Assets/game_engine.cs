using UnityEngine;
using System.Collections;

public class game_engine : MonoBehaviour {
	int timer = 0;
	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		timer += 1;
		Debug.Log(timer);
	}
}
