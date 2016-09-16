using UnityEngine;
using System.Collections;

public class phpComm : MonoBehaviour
{
	private string secretKey = "mySecretKey"; // Edit this value and make sure it's the same as the one stored on the server
	public string addScoreURL = "https://mount.toughguymountain.com/php/addscore.php?"; //be sure to add a ? to your url
	//public string highscoreURL = "https://mount.toughguymountain.com/php/display.php";
	public string registerlikesURL = "https://mount.toughguymountain.com/php/registerlikes.php?";

	public game_engine GameEngine;
	public fbInit Facebook;

	private string userName;
	private int likes;

	public int firstLike;

	void Start()
	{
		GameEngine = gameObject.GetComponent<game_engine> ();
		Facebook = gameObject.GetComponent<fbInit> ();

		//Debug.Log("1."+userName + " " + likes);
		//StartCoroutine(GetScores());
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
		//Debug.Log("2." + name + " " + score);
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

	public void registerLikes(string likeID, string name)
	{
		Debug.Log ("First Post " + likeID);
		Debug.Log(float.Parse(likeID));
		StartCoroutine(PostLikes(likeID,name));
	}

	IEnumerator PostLikes(string likeID, string name)
	{
		string hash = GameEngine.Md5Sum(name + secretKey);
		string checkLikeID = registerlikesURL + "name=" + WWW.EscapeURL (name) + "&likeID=" + likeID + "&hash=" + hash;
		WWW likeID_post = new WWW (checkLikeID);
		yield return likeID_post;

		if (likeID_post.error != null) {
			print ("There was an error retrieving the like quantity: " + likeID_post.error);
		} else {
			Debug.Log ("like quantity worked on this end");
		}

		string result = likeID_post.text;
		if (result == "stop") {
			Facebook.newLike = false;
		}
		Debug.Log (likeID_post.text);
	}

}