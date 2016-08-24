#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// interaction
struct interaction_t1844104722;
// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_String7231557.h"

// System.Void interaction::.ctor()
extern "C"  void interaction__ctor_m850551193 (interaction_t1844104722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void interaction::Start()
extern "C"  void interaction_Start_m4092656281 (interaction_t1844104722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void interaction::Update()
extern "C"  void interaction_Update_m2324145300 (interaction_t1844104722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void interaction::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void interaction_OnTriggerEnter_m1550040191 (interaction_t1844104722 * __this, Collider_t2939674232 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void interaction::PickUpandHold(UnityEngine.GameObject)
extern "C"  void interaction_PickUpandHold_m591147017 (interaction_t1844104722 * __this, GameObject_t3674682005 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void interaction::ThrowAwayItem(System.String)
extern "C"  void interaction_ThrowAwayItem_m3358354596 (interaction_t1844104722 * __this, String_t* ___oldItemName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void interaction::LineDraw()
extern "C"  void interaction_LineDraw_m4094370019 (interaction_t1844104722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
