using UnityEngine;
using System.Collections;

public class internMove : MonoBehaviour {

	private Transform goal;

	void Start () {
		randomGoal();
		Debug.Log ("hi");
		NavMeshAgent agent = GetComponent<NavMeshAgent>();
		agent.destination = Random.insideUnitCircle * 5; 
	}

	void randomGoal(){
		//goal.position = Random.insideUnitCircle * 5;
	}
}
