using Facebook.Unity;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class fbInit : MonoBehaviour {

	List<string> perm;

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

	private void AuthCallback (ILoginResult result) {
		if (FB.IsLoggedIn) {
			// Print current access token's granted permissions
			foreach (string str in perm) {
				Debug.Log(str);
			}
		} else {
			Debug.Log("User cancelled login");
		}

	}

}

