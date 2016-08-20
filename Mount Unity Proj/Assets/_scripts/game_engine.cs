using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class game_engine : MonoBehaviour {
	public int likes;
	public int posts;
	public int timer;

	public Text likeText;
	public Text postText;

	public cubicleGeneration CubicleGeneration;
	public objectDictionary ObjectGeneration;

	void Start () {
		CubicleGeneration = gameObject.GetComponent<cubicleGeneration> ();
		ObjectGeneration = gameObject.GetComponent<objectDictionary> ();
		timer = 0;
		likes = 0;
		posts = 0;
		setText();
		ObjectGeneration.populateCubicles (likes);
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
			ObjectGeneration.populateCubicles (likes);
		}

		timer += 1;
		if (timer > 500){
			//Debug.Log(true);
//			if(likes > 0){
//				likes -= 1;
//				//Debug.Log("Likes");
//			}
//			if(posts > 0){
//				posts -= 1;
				//Debug.Log("Posts");
//			}
//			Generate new cubicle
//			if (likes > 50) {
//				CubicleGeneration.newCubicle ();
//			}

			timer = 0;
			setText();

		}
		if(likes < 0){
			likes = 0;
		}
		if(posts < 0){
			posts = 0;
		}

	}

	public void setText(){
		likeText.text = "likes = " + likes.ToString();
		postText.text = "posts = " + posts.ToString();
	}
		
}