using UnityEngine;
using System.Collections;

public class internMove : MonoBehaviour {

	private Vector3 goal;
	private NavMeshAgent agent;

	void Start () {
		newGoal ();
		agent = GetComponent<NavMeshAgent> ();
		agent.destination = goal; 
	}

	void Update (){
		if (agent.remainingDistance < 0.5f) {
			newGoal ();
			agent.destination = goal; 
		}
	}

	void newGoal () {
		goal = new Vector3 (Random.Range (-5.0f, 5.0f), 0, Random.Range (-5.0f, 5.0f));
	}
		
}
