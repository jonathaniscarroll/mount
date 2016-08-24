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
// itemLvDetect
struct itemLvDetect_t3563220224;
// itemLvVars
struct itemLvVars_t1800886217;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// saveItems
struct  saveItems_t163814467  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject saveItems::intern
	GameObject_t3674682005 * ___intern_2;
	// itemLvDetect saveItems::topLevelToSave
	itemLvDetect_t3563220224 * ___topLevelToSave_3;
	// itemLvVars saveItems::itemLevelToCheck
	itemLvVars_t1800886217 * ___itemLevelToCheck_4;

public:
	inline static int32_t get_offset_of_intern_2() { return static_cast<int32_t>(offsetof(saveItems_t163814467, ___intern_2)); }
	inline GameObject_t3674682005 * get_intern_2() const { return ___intern_2; }
	inline GameObject_t3674682005 ** get_address_of_intern_2() { return &___intern_2; }
	inline void set_intern_2(GameObject_t3674682005 * value)
	{
		___intern_2 = value;
		Il2CppCodeGenWriteBarrier(&___intern_2, value);
	}

	inline static int32_t get_offset_of_topLevelToSave_3() { return static_cast<int32_t>(offsetof(saveItems_t163814467, ___topLevelToSave_3)); }
	inline itemLvDetect_t3563220224 * get_topLevelToSave_3() const { return ___topLevelToSave_3; }
	inline itemLvDetect_t3563220224 ** get_address_of_topLevelToSave_3() { return &___topLevelToSave_3; }
	inline void set_topLevelToSave_3(itemLvDetect_t3563220224 * value)
	{
		___topLevelToSave_3 = value;
		Il2CppCodeGenWriteBarrier(&___topLevelToSave_3, value);
	}

	inline static int32_t get_offset_of_itemLevelToCheck_4() { return static_cast<int32_t>(offsetof(saveItems_t163814467, ___itemLevelToCheck_4)); }
	inline itemLvVars_t1800886217 * get_itemLevelToCheck_4() const { return ___itemLevelToCheck_4; }
	inline itemLvVars_t1800886217 ** get_address_of_itemLevelToCheck_4() { return &___itemLevelToCheck_4; }
	inline void set_itemLevelToCheck_4(itemLvVars_t1800886217 * value)
	{
		___itemLevelToCheck_4 = value;
		Il2CppCodeGenWriteBarrier(&___itemLevelToCheck_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
