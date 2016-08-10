using UnityEngine;
using System.Collections;

public class internMove : MonoBehaviour {

	private Transform goal;
	private NavMeshAgent agent;

	void Start () {
		agent = GetComponent<NavMeshAgent> ();
		agent.destination = Random.insideUnitCircle * 5; 
	}

	void Update (){
		if (agent.remainingDistance < 0.5f)
			agent.destination = Random.insideUnitCircle * 5; 
	}
		
}
