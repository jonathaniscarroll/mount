#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t3671945244;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single>
struct Dictionary_2_t3720443438;
// objectQuantity
struct objectQuantity_t2311568618;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// objectDictionary
struct  objectDictionary_t3599772981  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> objectDictionary::cubicleObjects
	List_1_t747900261 * ___cubicleObjects_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> objectDictionary::cubobjDictionary
	Dictionary_2_t3671945244 * ___cubobjDictionary_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Single> objectDictionary::weightDictionary
	Dictionary_2_t3720443438 * ___weightDictionary_4;
	// objectQuantity objectDictionary::quantity
	objectQuantity_t2311568618 * ___quantity_5;
	// System.Int32 objectDictionary::objectQuant
	int32_t ___objectQuant_6;

public:
	inline static int32_t get_offset_of_cubicleObjects_2() { return static_cast<int32_t>(offsetof(objectDictionary_t3599772981, ___cubicleObjects_2)); }
	inline List_1_t747900261 * get_cubicleObjects_2() const { return ___cubicleObjects_2; }
	inline List_1_t747900261 ** get_address_of_cubicleObjects_2() { return &___cubicleObjects_2; }
	inline void set_cubicleObjects_2(List_1_t747900261 * value)
	{
		___cubicleObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___cubicleObjects_2, value);
	}

	inline static int32_t get_offset_of_cubobjDictionary_3() { return static_cast<int32_t>(offsetof(objectDictionary_t3599772981, ___cubobjDictionary_3)); }
	inline Dictionary_2_t3671945244 * get_cubobjDictionary_3() const { return ___cubobjDictionary_3; }
	inline Dictionary_2_t3671945244 ** get_address_of_cubobjDictionary_3() { return &___cubobjDictionary_3; }
	inline void set_cubobjDictionary_3(Dictionary_2_t3671945244 * value)
	{
		___cubobjDictionary_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubobjDictionary_3, value);
	}

	inline static int32_t get_offset_of_weightDictionary_4() { return static_cast<int32_t>(offsetof(objectDictionary_t3599772981, ___weightDictionary_4)); }
	inline Dictionary_2_t3720443438 * get_weightDictionary_4() const { return ___weightDictionary_4; }
	inline Dictionary_2_t3720443438 ** get_address_of_weightDictionary_4() { return &___weightDictionary_4; }
	inline void set_weightDictionary_4(Dictionary_2_t3720443438 * value)
	{
		___weightDictionary_4 = value;
		Il2CppCodeGenWriteBarrier(&___weightDictionary_4, value);
	}

	inline static int32_t get_offset_of_quantity_5() { return static_cast<int32_t>(offsetof(objectDictionary_t3599772981, ___quantity_5)); }
	inline objectQuantity_t2311568618 * get_quantity_5() const { return ___quantity_5; }
	inline objectQuantity_t2311568618 ** get_address_of_quantity_5() { return &___quantity_5; }
	inline void set_quantity_5(objectQuantity_t2311568618 * value)
	{
		___quantity_5 = value;
		Il2CppCodeGenWriteBarrier(&___quantity_5, value);
	}

	inline static int32_t get_offset_of_objectQuant_6() { return static_cast<int32_t>(offsetof(objectDictionary_t3599772981, ___objectQuant_6)); }
	inline int32_t get_objectQuant_6() const { return ___objectQuant_6; }
	inline int32_t* get_address_of_objectQuant_6() { return &___objectQuant_6; }
	inline void set_objectQuant_6(int32_t value)
	{
		___objectQuant_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
