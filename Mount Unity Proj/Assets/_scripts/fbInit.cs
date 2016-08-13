using Facebook.Unity;
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

		//Debug.Log ("POSTS ITS POSSST: " + FBUserDetails["posts"]);

		foreach(KeyValuePair<string,object> keyValue in FBUserDetails)
		{
			string key = keyValue.Key;
			object value = keyValue.Value;

			Debug.Log ("KEY: " + key + " VALUE: " + value);
		}
	}

}

