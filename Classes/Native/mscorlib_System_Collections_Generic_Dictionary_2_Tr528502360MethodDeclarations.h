﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t528502360;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944347872.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2658320534_gshared (Transform_1_t528502360 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2658320534(__this, ___object, ___method, method) ((  void (*) (Transform_1_t528502360 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2658320534_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1944347872  Transform_1_Invoke_m1976033878_gshared (Transform_1_t528502360 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1976033878(__this, ___key, ___value, method) ((  KeyValuePair_2_t1944347872  (*) (Transform_1_t528502360 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1976033878_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3105433791_gshared (Transform_1_t528502360 * __this, Il2CppObject * ___key, Il2CppObject * ___value, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3105433791(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t528502360 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3105433791_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1944347872  Transform_1_EndInvoke_m687617772_gshared (Transform_1_t528502360 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m687617772(__this, ___result, method) ((  KeyValuePair_2_t1944347872  (*) (Transform_1_t528502360 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m687617772_gshared)(__this, ___result, method)
