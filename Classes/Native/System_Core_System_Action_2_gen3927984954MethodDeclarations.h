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

// System.Action`2<System.Object,System.Object>
struct Action_2_t3927984954;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3362391082_gshared (Action_2_t3927984954 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m3362391082(__this, ___object, ___method, method) ((  void (*) (Action_2_t3927984954 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m3362391082_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m1501152969_gshared (Action_2_t3927984954 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m1501152969(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t3927984954 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_2_Invoke_m1501152969_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m1914861552_gshared (Action_2_t3927984954 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m1914861552(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t3927984954 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m1914861552_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m3956733788_gshared (Action_2_t3927984954 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m3956733788(__this, ___result, method) ((  void (*) (Action_2_t3927984954 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m3956733788_gshared)(__this, ___result, method)
