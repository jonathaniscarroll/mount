#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t588466745;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// interaction
struct interaction_t1844104722;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// internMove
struct  internMove_t2703232515  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 internMove::goal
	Vector3_t4282066566  ___goal_2;
	// UnityEngine.NavMeshAgent internMove::agent
	NavMeshAgent_t588466745 * ___agent_3;
	// UnityEngine.GameObject internMove::intern
	GameObject_t3674682005 * ___intern_4;
	// System.Boolean internMove::action
	bool ___action_5;
	// UnityEngine.GameObject internMove::detection
	GameObject_t3674682005 * ___detection_6;
	// interaction internMove::interacting
	interaction_t1844104722 * ___interacting_7;

public:
	inline static int32_t get_offset_of_goal_2() { return static_cast<int32_t>(offsetof(internMove_t2703232515, ___goal_2)); }
	inline Vector3_t4282066566  get_goal_2() const { return ___goal_2; }
	inline Vector3_t4282066566 * get_address_of_goal_2() { return &___goal_2; }
	inline void set_goal_2(Vector3_t4282066566  value)
	{
		___goal_2 = value;
	}

	inline static int32_t get_offset_of_agent_3() { return static_cast<int32_t>(offsetof(internMove_t2703232515, ___agent_3)); }
	inline NavMeshAgent_t588466745 * get_agent_3() const { return ___agent_3; }
	inline NavMeshAgent_t588466745 ** get_address_of_agent_3() { return &___agent_3; }
	inline void set_agent_3(NavMeshAgent_t588466745 * value)
	{
		___agent_3 = value;
		Il2CppCodeGenWriteBarrier(&___agent_3, value);
	}

	inline static int32_t get_offset_of_intern_4() { return static_cast<int32_t>(offsetof(internMove_t2703232515, ___intern_4)); }
	inline GameObject_t3674682005 * get_intern_4() const { return ___intern_4; }
	inline GameObject_t3674682005 ** get_address_of_intern_4() { return &___intern_4; }
	inline void set_intern_4(GameObject_t3674682005 * value)
	{
		___intern_4 = value;
		Il2CppCodeGenWriteBarrier(&___intern_4, value);
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(internMove_t2703232515, ___action_5)); }
	inline bool get_action_5() const { return ___action_5; }
	inline bool* get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(bool value)
	{
		___action_5 = value;
	}

	inline static int32_t get_offset_of_detection_6() { return static_cast<int32_t>(offsetof(internMove_t2703232515, ___detection_6)); }
	inline GameObject_t3674682005 * get_detection_6() const { return ___detection_6; }
	inline GameObject_t3674682005 ** get_address_of_detection_6() { return &___detection_6; }
	inline void set_detection_6(GameObject_t3674682005 * value)
	{
		___detection_6 = value;
		Il2CppCodeGenWriteBarrier(&___detection_6, value);
	}

	inline static int32_t get_offset_of_interacting_7() { return static_cast<int32_t>(offsetof(internMove_t2703232515, ___interacting_7)); }
	inline interaction_t1844104722 * get_interacting_7() const { return ___interacting_7; }
	inline interaction_t1844104722 ** get_address_of_interacting_7() { return &___interacting_7; }
	inline void set_interacting_7(interaction_t1844104722 * value)
	{
		___interacting_7 = value;
		Il2CppCodeGenWriteBarrier(&___interacting_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
