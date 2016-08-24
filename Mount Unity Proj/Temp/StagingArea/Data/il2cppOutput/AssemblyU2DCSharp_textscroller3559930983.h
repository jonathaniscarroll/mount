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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// textscroller
struct  textscroller_t3559930983  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject textscroller::slidingtext
	GameObject_t3674682005 * ___slidingtext_2;
	// UnityEngine.GameObject textscroller::starttext
	GameObject_t3674682005 * ___starttext_3;

public:
	inline static int32_t get_offset_of_slidingtext_2() { return static_cast<int32_t>(offsetof(textscroller_t3559930983, ___slidingtext_2)); }
	inline GameObject_t3674682005 * get_slidingtext_2() const { return ___slidingtext_2; }
	inline GameObject_t3674682005 ** get_address_of_slidingtext_2() { return &___slidingtext_2; }
	inline void set_slidingtext_2(GameObject_t3674682005 * value)
	{
		___slidingtext_2 = value;
		Il2CppCodeGenWriteBarrier(&___slidingtext_2, value);
	}

	inline static int32_t get_offset_of_starttext_3() { return static_cast<int32_t>(offsetof(textscroller_t3559930983, ___starttext_3)); }
	inline GameObject_t3674682005 * get_starttext_3() const { return ___starttext_3; }
	inline GameObject_t3674682005 ** get_address_of_starttext_3() { return &___starttext_3; }
	inline void set_starttext_3(GameObject_t3674682005 * value)
	{
		___starttext_3 = value;
		Il2CppCodeGenWriteBarrier(&___starttext_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
