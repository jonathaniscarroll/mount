using UnityEngine;
using System.Collections;

public class phpComm : MonoBehaviour
{
	private string secretKey = "mySecretKey"; // Edit this value and make sure it's the same as the one stored on the server
	public string addScoreURL = "https://mount.toughguymountain.com/php/addscore.php?"; //be sure to add a ? to your url
	public string highscoreURL = "https://mount.toughguymountain.com/php/display.php";

	public game_engine GameEngine;
	public fbInit Facebook;

	private string userName;
	private int likes;

	void Start()
	{
		GameEngine = gameObject.GetComponent<game_engine> ();
		Facebook = gameObject.GetComponent<fbInit> ();

		//Debug.Log("1."+userName + " " + likes);
		//StartCoroutine(GetScores());
	}

	void Update()
	{
//		if (Facebook.start = true) {
//
//			userName = GameEngine.userName;
//			likes = GameEngine.likes;
//			//Debug.Log("3."+userName + " " + likes);
//			StartCoroutine (PostScores (userName, likes));
//
//		}
	}

	public void collectNameAndLikes()
	{
		userName = GameEngine.userName;
		likes = GameEngine.likes;
		//Debug.Log("3."+userName + " " + likes);
		StartCoroutine (PostScores (userName, likes));
	}

	// remember to use StartCoroutine when calling this function!
	IEnumerator PostScores(string name, int score)
	{
		//This connects to a server side php script that will add the name and score to a MySQL DB.
		// Supply it with a string representing the players name and the players score.
		Debug.Log("2." + name + " " + score);
		string hash = GameEngine.Md5Sum(name + score + secretKey);

		string post_url = addScoreURL + "name=" + WWW.EscapeURL(name) + "&score=" + score + "&hash=" + hash;

		// Post the URL to the site and create a download object to get the result.
		WWW hs_post = new WWW(post_url);
		yield return hs_post; // Wait until the download is done

		if (hs_post.error != null) {
			print ("There was an error posting the high score: " + hs_post.error);
		} else {
			Debug.Log ("It worked on this end");
		}
		Debug.Log (hs_post.text);
		GameEngine.likes = int.Parse(hs_post.text);
	}

	// Get the scores from the MySQL DB to display in a GUIText.
	// remember to use StartCoroutine when calling this function!
//	IEnumerator GetScores()
//	{
//		gameObject.GetComponent<GUIText>().text = "Loading Scores";
//		WWW hs_get = new WWW(highscoreURL);
//		yield return hs_get;
//
//		if (hs_get.error != null)
//		{
//			print("There was an error getting the high score: " + hs_get.error);
//		}
//		else
//		{
//			gameObject.GetComponent<GUIText>().text = hs_get.text; // this is a GUIText that will display the scores in game.
//		}
//	}

}