using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class game_engine : MonoBehaviour {
	public int likes;
	public int posts;

	private float objectProb;

	public GameObject cubicleObject;
	public Text likeText;
	public Text postText;

	void Start () {
		likes = 0;
		posts = 0;
		setText();
	}

	// Update is called once per frame
	void Update () {

		if ( Input.GetKeyDown ( KeyCode.P )){
			posts += 1;
			setText();
		}

		if ( Input.GetKeyDown ( KeyCode.L )){
			likes += 1;
			setText();
		}
			
		if (Input.GetKeyDown (KeyCode.Space)) {
			generateObject ();
		}
	}

	void setText(){
		likeText.text = "likes = " + likes.ToString();
		postText.text = "posts = " + posts.ToString();
	}

	void generateObject(){
		objectProb = Random.Range (0f, 100f);
		if (objectProb <= posts) {
			Instantiate(cubicleObject, new Vector3(Random.Range (-5f, 5f), 10, Random.Range (-5f, 5f)), Quaternion.identity);
		}
	}
}