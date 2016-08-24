using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class game_engine : MonoBehaviour {
	public int likes;
	public int posts;
	public int timer;
	public string userName;

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

	public  string Md5Sum(string strToEncrypt)
	{
		System.Text.UTF8Encoding ue = new System.Text.UTF8Encoding();
		byte[] bytes = ue.GetBytes(strToEncrypt);

		// encrypt bytes
		System.Security.Cryptography.MD5CryptoServiceProvider md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
		byte[] hashBytes = md5.ComputeHash(bytes);

		// Convert the encrypted bytes back to a string (base 16)
		string hashString = "";

		for (int i = 0; i < hashBytes.Length; i++)
		{
			hashString += System.Convert.ToString(hashBytes[i], 16).PadLeft(2, '0');
		}

		return hashString.PadLeft(32, '0');
	}
		
}