#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// internMove
struct internMove_t2703232515;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// interaction
struct  interaction_t1844104722  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject interaction::intern
	GameObject_t3674682005 * ___intern_2;
	// internMove interaction::acting
	internMove_t2703232515 * ___acting_3;
	// System.Int32 interaction::counter
	int32_t ___counter_4;
	// System.Single interaction::roll
	float ___roll_5;

public:
	inline static int32_t get_offset_of_intern_2() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___intern_2)); }
	inline GameObject_t3674682005 * get_intern_2() const { return ___intern_2; }
	inline GameObject_t3674682005 ** get_address_of_intern_2() { return &___intern_2; }
	inline void set_intern_2(GameObject_t3674682005 * value)
	{
		___intern_2 = value;
		Il2CppCodeGenWriteBarrier(&___intern_2, value);
	}

	inline static int32_t get_offset_of_acting_3() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___acting_3)); }
	inline internMove_t2703232515 * get_acting_3() const { return ___acting_3; }
	inline internMove_t2703232515 ** get_address_of_acting_3() { return &___acting_3; }
	inline void set_acting_3(internMove_t2703232515 * value)
	{
		___acting_3 = value;
		Il2CppCodeGenWriteBarrier(&___acting_3, value);
	}

	inline static int32_t get_offset_of_counter_4() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___counter_4)); }
	inline int32_t get_counter_4() const { return ___counter_4; }
	inline int32_t* get_address_of_counter_4() { return &___counter_4; }
	inline void set_counter_4(int32_t value)
	{
		___counter_4 = value;
	}

	inline static int32_t get_offset_of_roll_5() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___roll_5)); }
	inline float get_roll_5() const { return ___roll_5; }
	inline float* get_address_of_roll_5() { return &___roll_5; }
	inline void set_roll_5(float value)
	{
		___roll_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
