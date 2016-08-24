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
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// textscrollermove
struct  textscrollermove_t2408639672  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject textscrollermove::endtext
	GameObject_t3674682005 * ___endtext_2;
	// System.Int32 textscrollermove::speed
	int32_t ___speed_3;
	// UnityEngine.Rigidbody textscrollermove::rb
	Rigidbody_t3346577219 * ___rb_4;

public:
	inline static int32_t get_offset_of_endtext_2() { return static_cast<int32_t>(offsetof(textscrollermove_t2408639672, ___endtext_2)); }
	inline GameObject_t3674682005 * get_endtext_2() const { return ___endtext_2; }
	inline GameObject_t3674682005 ** get_address_of_endtext_2() { return &___endtext_2; }
	inline void set_endtext_2(GameObject_t3674682005 * value)
	{
		___endtext_2 = value;
		Il2CppCodeGenWriteBarrier(&___endtext_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(textscrollermove_t2408639672, ___speed_3)); }
	inline int32_t get_speed_3() const { return ___speed_3; }
	inline int32_t* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(int32_t value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(textscrollermove_t2408639672, ___rb_4)); }
	inline Rigidbody_t3346577219 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t3346577219 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
