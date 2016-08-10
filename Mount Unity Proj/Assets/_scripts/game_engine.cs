using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class game_engine : MonoBehaviour {
	private int likes;
	private int posts;
	public Text likeText;
	public Text postText;
	// Use this for initialization
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
	}

	void setText(){
		likeText.text = "likes = " + likes.ToString();
		postText.text = "posts = " + posts.ToString();
	}
}