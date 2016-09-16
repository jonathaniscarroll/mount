using UnityEngine;
using System.Collections;

public class billboardObjects : MonoBehaviour {

	public Camera mainCamera;

	private Vector3 cameraEuler;


	void Start()
	{
		mainCamera = Camera.main;
		cameraEuler = mainCamera.transform.eulerAngles;
	}

	void Update()
	{
		transform.rotation = mainCamera.transform.rotation;
	}
}
