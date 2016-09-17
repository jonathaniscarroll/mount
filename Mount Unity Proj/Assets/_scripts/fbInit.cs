using Facebook.Unity;
using Facebook.MiniJSON;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class fbInit : MonoBehaviour {

	List<string> perm;
	private Dictionary<string,object> FBUserDetails;
	private Dictionary<string,object> PostDetails;
	private Dictionary<string,object> FBName;
	private string fbID;
	private List<List<string>> likeList;
	private List<string> postList;

	private int likeCount;
	private int postCount;
	private int postNumber;

	public game_engine GameEngine;
	public cubicleGeneration CubicleGeneration;
	public objectDictionary ObjectGeneration;
	public phpComm phpCommunication;
	public bool start;
	public Dictionary<string,string> likePerPost;

	public string likeID;
	public string postID;

	public string get_data;
	public string userName;

	public bool newPost;

	// Awake function from Unity's MonoBehavior
	void Awake ()
	{
		start = false;
		newPost = true;
		GameEngine = gameObject.GetComponent<game_engine>();
		CubicleGeneration = gameObject.GetComponent<cubicleGeneration> ();
		ObjectGeneration = gameObject.GetComponent<objectDictionary> ();
		phpCommunication = gameObject.GetComponent<phpComm> ();

		likePerPost = new Dictionary<string,string> ();
		postList = new List<string> ();
		likeList = new List<string> ();

		perm = new List<string> () { "public_profile", "email", "user_friends", "user_posts" };

		if (!FB.IsInitialized) {
			// Initialize the Facebook SDK
			FB.Init(internLogin);
		}

	}

	void internLogin(){
		FB.LogInWithReadPermissions(perm, AuthCallback);
	}

	private void AuthCallback (ILoginResult result) {
		if (FB.IsLoggedIn) {
			// AccessToken class will have session details
			var aToken = Facebook.Unity.AccessToken.CurrentAccessToken;
			// Print current access token's User ID
			//Debug.Log(aToken.UserId);
			// Print current access token's granted permissions
//			foreach (string perm in Facebook.Unity.AccessToken.CurrentAccessToken.Permissions) {
//				Debug.Log(perm);
//			}
			retrievePosts ();
			retrieveName ();
		} else {
			Debug.Log("User cancelled login");
		}
	}

	void retrievePosts(){
		FB.API ("/me/posts", HttpMethod.GET,postsCallback,new Dictionary<string,string>(){});
	}

	void retrieveName(){
		FB.API("/me?fields=first_name", HttpMethod.GET, nameCallback);
	}

	void nameCallback(IGraphResult result){
		//Debug.Log (result.RawResult);
		FBName = (Dictionary<string,object>)result.ResultDictionary;
		userName = FBName ["first_name"].ToString();
		GameEngine.userName = userName;
		//Debug.Log (userName);

	}


	private void postsCallback(IGraphResult result){

		//Debug.Log (result.RawResult);

		FBUserDetails = (Dictionary<string,object>)result.ResultDictionary;

		var postresultList = new List<object> ();
		postresultList = (List<object>)(FBUserDetails["data"]);

		//Debug.Log ("POST LIST: "+postList.Count);

		foreach(object keyValue in postresultList)
		{
			var post = keyValue as Dictionary<string,object>;
			postID = post ["id"].ToString();
			//add to the list of posts
			postList.Add (postID);
			postCount++;

			FB.API ("/" + postID + "/likes", HttpMethod.GET, returnPostLikes, new Dictionary<string,string> (){ });
		}
			

		GameEngine.posts = postCount;
		GameEngine.setText ();
	}

	public void returnPostLikes(IGraphResult result){
		//Debug.Log ("Likes: " + result.RawResult);

		Dictionary<string,object> likes;
		int i = 0;

		PostDetails = (Dictionary<string,object>)result.ResultDictionary;
		var postParts = new List<object> ();
		postParts = (List<object>)(PostDetails["data"]);
		Debug.Log("This Post Like Count: "+postParts.Count ());
		newPost = true;

		//need to determine if post has any likes or not

		if (postParts.Count () == 0) {
			//post has no likes, need to register a 0 in the like list 
			likeList.Add ("0"); 
		} else {
			foreach (object keyValue in postParts) {
				likes = keyValue as Dictionary<string,object>;
				likeID = likes ["id"].ToString ();

				//Debug.Log (likeID);
				//if it is the first like of this post, add the the list of first likes
				if (newPost == true) {
					likeList.Add (likeID);
					newPost = false;
				} 
				i = i + 1;
				likeCount++;
				//Debug.Log ("LIKE ID: "  + likesID + ", TOTAL LIKE COUNT:" + likeCount + ", THIS POST LIKE COUNT: " + i);

			}
		}
			

		GameEngine.likes = likeCount;
		GameEngine.setText ();

		postNumber++;

		if (postNumber >= postCount && start == false) {
			
//			int x = 0;
//			int y = 0;
//			foreach (string post in postList) {
//				Debug.Log ("number: " + x + ", post: " + post);
//				x++;
//			}
//
//			foreach (string like in likeList) {
//				Debug.Log ("number: " + y + ", like: " + like);
//				y++;
//			}
//			phpCommunication.collectNameAndLikes();
			start = true;
			ObjectGeneration.populateCubicles (likeCount);
			createLikePostDict ();
		}
	}

	void createLikePostDict(){
		for (int x = 0; x < postCount; x++) {
			likePerPost.Add (postList [x], likeList [x]);
		}

		foreach (KeyValuePair<string,string> postlike in likePerPost)
		{
			Debug.Log("post: " + postlike.Key + " like: " + postlike.Value);
		}
	}

}

