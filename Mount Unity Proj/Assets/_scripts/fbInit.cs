using Facebook.Unity;
using Facebook.MiniJSON;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class fbInit : MonoBehaviour {

	List<string> perm;
	private Dictionary<string,object> FBUserDetails;
	private string fbID;

	// Awake function from Unity's MonoBehavior
	void Awake ()
	{
		perm = new List<string> () { "public_profile", "email", "user_friends", "user_posts" };

		if (!FB.IsInitialized) {
			// Initialize the Facebook SDK
			FB.Init(internLogin);
		}

	}

	void internLogin(){
		FB.LogInWithReadPermissions(perm, AuthCallback);
	}

	void retrievePosts(){
		FB.API ("/me/posts", HttpMethod.GET,postsCallback,new Dictionary<string,string>(){});
	}

	private void AuthCallback (ILoginResult result) {
		if (FB.IsLoggedIn) {
			// AccessToken class will have session details
			var aToken = Facebook.Unity.AccessToken.CurrentAccessToken;
			// Print current access token's User ID
			Debug.Log(aToken.UserId);
			// Print current access token's granted permissions
//			foreach (string perm in Facebook.Unity.AccessToken.CurrentAccessToken.Permissions) {
//				Debug.Log(perm);
//			}
			retrievePosts ();
		} else {
			Debug.Log("User cancelled login");
		}

	}

	private void postsCallback(IGraphResult result){

		Debug.Log (result.RawResult);

		FBUserDetails = (Dictionary<string,object>)result.ResultDictionary;

		var postList = new List<object> ();
		postList = (List<object>)(FBUserDetails["data"]);

		foreach(object keyValue in postList)
		{
			var post = keyValue as Dictionary<string,object>;
			var postID = post ["id"];
			Debug.Log ("ID: "  + postID);
			FB.API ("/" + postID + "/likes", HttpMethod.GET,returnPostLikes,new Dictionary<string,string>(){}); 
		}
	}

	private void returnPostLikes(IGraphResult result){
		Debug.Log ("Likes: " + result.RawResult);
	}

}

