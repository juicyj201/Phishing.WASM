#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
186,
187,
188,
189,
190,
191,
192,
193,
194,
197,
198,
287,
288,
290,
312,
313,
314,
324,
325,
326,
327,
407,
408,
409,
412,
441,
442,
444,
446,
448,
450,
455,
463,
464,
465,
466,
467,
468,
469,
470,
471,
586,
594,
597,
599,
604,
605,
607,
608,
612,
613,
615,
616,
619,
620,
621,
624,
626,
629,
631,
633,
697,
699,
701,
710,
711,
712,
713,
715,
722,
723,
724,
725,
726,
734,
735,
736,
740,
741,
743,
747,
748,
749,
1015,
1167,
1168,
5422,
5423,
5425,
5426,
5427,
5428,
5429,
5431,
5433,
5435,
5441,
5443,
5449,
5450,
5452,
5454,
5456,
5467,
5476,
5477,
5479,
5480,
5481,
5482,
5483,
5485,
5487,
6385,
6389,
6391,
6392,
6393,
6394,
6496,
6497,
6498,
6499,
6517,
6518,
6519,
6521,
6562,
6611,
6622,
6623,
6624,
6865,
6867,
6868,
6891,
6909,
6915,
6922,
6932,
6935,
7009,
7017,
7019,
7025,
7038,
7058,
7059,
7067,
7069,
7076,
7077,
7080,
7082,
7087,
7093,
7094,
7101,
7103,
7115,
7118,
7119,
7120,
7131,
7140,
7146,
7147,
7148,
7150,
7151,
7169,
7171,
7185,
7205,
7225,
7253,
7254,
7615,
7746,
7925,
7926,
7929,
7932,
7982,
8245,
8246,
9020,
9041,
9048,
9050,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 181,
ves_icall_System_Array_InternalCreate,
// token 186,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 187,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 188,
ves_icall_System_Array_CanChangePrimitive,
// token 189,
ves_icall_System_Array_FastCopy_raw,
// token 190,
ves_icall_System_Array_GetLength_raw,
// token 191,
ves_icall_System_Array_GetLowerBound_raw,
// token 192,
ves_icall_System_Array_GetGenericValue_icall,
// token 193,
ves_icall_System_Array_GetValueImpl_raw,
// token 194,
ves_icall_System_Array_SetGenericValue_icall,
// token 197,
ves_icall_System_Array_SetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 287,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 288,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 290,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 312,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 313,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 314,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 324,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 325,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 326,
ves_icall_System_Enum_InternalGetCorElementType,
// token 327,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 407,
ves_icall_System_Environment_get_ProcessorCount,
// token 408,
ves_icall_System_Environment_get_TickCount,
// token 409,
ves_icall_System_Environment_get_TickCount64,
// token 412,
ves_icall_System_Environment_FailFast_raw,
// token 441,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 442,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 444,
ves_icall_System_GC_SuppressFinalize_raw,
// token 446,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 448,
ves_icall_System_GC_GetGCMemoryInfo,
// token 450,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 455,
ves_icall_System_Object_MemberwiseClone_raw,
// token 463,
ves_icall_System_Math_Ceiling,
// token 464,
ves_icall_System_Math_Cos,
// token 465,
ves_icall_System_Math_Floor,
// token 466,
ves_icall_System_Math_Log10,
// token 467,
ves_icall_System_Math_Pow,
// token 468,
ves_icall_System_Math_Sin,
// token 469,
ves_icall_System_Math_Sqrt,
// token 470,
ves_icall_System_Math_Tan,
// token 471,
ves_icall_System_Math_ModF,
// token 586,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 594,
ves_icall_RuntimeType_make_array_type_raw,
// token 597,
ves_icall_RuntimeType_make_byref_type_raw,
// token 599,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 604,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 605,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 607,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 608,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 612,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 613,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 615,
ves_icall_System_RuntimeType_getFullName_raw,
// token 616,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 619,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 620,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 621,
ves_icall_RuntimeType_GetFields_native_raw,
// token 624,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 626,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 629,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 631,
ves_icall_RuntimeType_GetName_raw,
// token 633,
ves_icall_RuntimeType_GetNamespace_raw,
// token 697,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 699,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 701,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 710,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 711,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 712,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 713,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 715,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 722,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 723,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 724,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 725,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 726,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 734,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 735,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 736,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 740,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 741,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 743,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 747,
ves_icall_System_String_FastAllocateString_raw,
// token 748,
ves_icall_System_String_InternalIsInterned_raw,
// token 749,
ves_icall_System_String_InternalIntern_raw,
// token 1015,
ves_icall_System_Type_internal_from_handle_raw,
// token 1167,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1168,
ves_icall_System_ValueType_Equals_raw,
// token 5422,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5423,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5425,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5426,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5427,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5428,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5429,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5431,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5433,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5435,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5441,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5443,
mono_monitor_exit_icall_raw,
// token 5449,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5450,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5452,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5454,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5456,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5467,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5476,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5477,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5479,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5480,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5481,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5482,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5483,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5485,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5487,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6385,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6389,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6391,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6392,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6393,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6394,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6496,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6497,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6498,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6499,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6517,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6518,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6519,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6521,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 6562,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 6611,
mono_object_hash_icall_raw,
// token 6622,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 6623,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 6624,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 6865,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 6867,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 6868,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 6891,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 6909,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 6915,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 6922,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 6932,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 6935,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7009,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7017,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 7019,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7025,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7038,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7058,
ves_icall_reflection_get_token_raw,
// token 7059,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7067,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7069,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7076,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7077,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7080,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7082,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7087,
ves_icall_reflection_get_token_raw,
// token 7093,
ves_icall_get_method_info_raw,
// token 7094,
ves_icall_get_method_attributes,
// token 7101,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7103,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7115,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7118,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7119,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7120,
ves_icall_reflection_get_token_raw,
// token 7131,
ves_icall_InternalInvoke_raw,
// token 7140,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7146,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7147,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7148,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7150,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7151,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7169,
ves_icall_InvokeClassConstructor_raw,
// token 7171,
ves_icall_InternalInvoke_raw,
// token 7185,
ves_icall_reflection_get_token_raw,
// token 7205,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7225,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7253,
ves_icall_reflection_get_token_raw,
// token 7254,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 7615,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 7746,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 7925,
ves_icall_ModuleBuilder_basic_init_raw,
// token 7926,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 7929,
ves_icall_ModuleBuilder_getToken_raw,
// token 7932,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 7982,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8245,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8246,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9020,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9041,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9048,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9050,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
};
