#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
187,
188,
189,
190,
191,
192,
193,
194,
195,
198,
199,
299,
300,
302,
330,
331,
332,
352,
353,
354,
355,
438,
439,
440,
443,
476,
477,
479,
481,
483,
485,
490,
498,
499,
500,
501,
502,
503,
504,
505,
506,
637,
645,
648,
650,
655,
656,
658,
659,
663,
664,
666,
667,
670,
671,
672,
675,
677,
680,
682,
684,
753,
755,
757,
766,
767,
768,
769,
771,
778,
779,
780,
781,
782,
790,
791,
792,
796,
797,
799,
803,
804,
805,
1071,
1246,
1247,
5886,
5887,
5889,
5890,
5891,
5892,
5893,
5895,
5897,
5899,
5907,
5909,
5913,
5914,
5916,
5918,
5920,
5931,
5940,
5941,
5943,
5944,
5945,
5946,
5947,
5949,
5951,
6830,
6834,
6836,
6837,
6838,
6839,
6968,
6969,
6970,
6971,
6991,
6992,
6993,
6995,
7036,
7085,
7087,
7097,
7098,
7099,
7347,
7349,
7350,
7374,
7393,
7399,
7406,
7416,
7420,
7497,
7505,
7507,
7513,
7526,
7546,
7547,
7555,
7557,
7564,
7565,
7568,
7570,
7575,
7581,
7582,
7589,
7591,
7603,
7606,
7607,
7608,
7619,
7628,
7634,
7635,
7636,
7638,
7639,
7657,
7659,
7673,
7693,
7713,
7743,
7744,
8122,
8259,
8496,
8497,
8503,
8504,
8505,
8510,
8569,
8843,
8844,
9750,
9771,
9778,
9780,
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
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
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
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
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
// token 187,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 188,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 189,
ves_icall_System_Array_CanChangePrimitive,
// token 190,
ves_icall_System_Array_FastCopy_raw,
// token 191,
ves_icall_System_Array_GetLength_raw,
// token 192,
ves_icall_System_Array_GetLowerBound_raw,
// token 193,
ves_icall_System_Array_GetGenericValue_icall,
// token 194,
ves_icall_System_Array_GetValueImpl_raw,
// token 195,
ves_icall_System_Array_SetGenericValue_icall,
// token 198,
ves_icall_System_Array_SetValueImpl_raw,
// token 199,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 299,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 300,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 302,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 330,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 331,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 332,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 352,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 353,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 354,
ves_icall_System_Enum_InternalGetCorElementType,
// token 355,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 438,
ves_icall_System_Environment_get_ProcessorCount,
// token 439,
ves_icall_System_Environment_get_TickCount,
// token 440,
ves_icall_System_Environment_get_TickCount64,
// token 443,
ves_icall_System_Environment_FailFast_raw,
// token 476,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 477,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 479,
ves_icall_System_GC_SuppressFinalize_raw,
// token 481,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 483,
ves_icall_System_GC_GetGCMemoryInfo,
// token 485,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 490,
ves_icall_System_Object_MemberwiseClone_raw,
// token 498,
ves_icall_System_Math_Ceiling,
// token 499,
ves_icall_System_Math_Cos,
// token 500,
ves_icall_System_Math_Floor,
// token 501,
ves_icall_System_Math_Log10,
// token 502,
ves_icall_System_Math_Pow,
// token 503,
ves_icall_System_Math_Sin,
// token 504,
ves_icall_System_Math_Sqrt,
// token 505,
ves_icall_System_Math_Tan,
// token 506,
ves_icall_System_Math_ModF,
// token 637,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 645,
ves_icall_RuntimeType_make_array_type_raw,
// token 648,
ves_icall_RuntimeType_make_byref_type_raw,
// token 650,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 655,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 656,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 658,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 659,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 663,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 664,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 666,
ves_icall_System_RuntimeType_getFullName_raw,
// token 667,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 670,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 671,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 672,
ves_icall_RuntimeType_GetFields_native_raw,
// token 675,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 677,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 680,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 682,
ves_icall_RuntimeType_GetName_raw,
// token 684,
ves_icall_RuntimeType_GetNamespace_raw,
// token 753,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 755,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 757,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 766,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 767,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 768,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 769,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 771,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 778,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 779,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 780,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 781,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 782,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 790,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 791,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 792,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 796,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 797,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 799,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 803,
ves_icall_System_String_FastAllocateString_raw,
// token 804,
ves_icall_System_String_InternalIsInterned_raw,
// token 805,
ves_icall_System_String_InternalIntern_raw,
// token 1071,
ves_icall_System_Type_internal_from_handle_raw,
// token 1246,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1247,
ves_icall_System_ValueType_Equals_raw,
// token 5886,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 5887,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 5889,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 5890,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 5891,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 5892,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 5893,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 5895,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 5897,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 5899,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 5907,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 5909,
mono_monitor_exit_icall_raw,
// token 5913,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 5914,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 5916,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 5918,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 5920,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 5931,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 5940,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 5941,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 5943,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 5944,
ves_icall_System_Threading_Thread_GetState_raw,
// token 5945,
ves_icall_System_Threading_Thread_SetState_raw,
// token 5946,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 5947,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 5949,
ves_icall_System_Threading_Thread_YieldInternal,
// token 5951,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6830,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6834,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6836,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6837,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6838,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6839,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 6968,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 6969,
ves_icall_System_GCHandle_InternalFree_raw,
// token 6970,
ves_icall_System_GCHandle_InternalGet_raw,
// token 6971,
ves_icall_System_GCHandle_InternalSet_raw,
// token 6991,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 6992,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 6993,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 6995,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7036,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7085,
mono_object_hash_icall_raw,
// token 7087,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 7097,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7098,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7099,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7347,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7349,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7350,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7374,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7393,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7399,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7406,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7416,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7420,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7497,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7505,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 7507,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7513,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7526,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7546,
ves_icall_reflection_get_token_raw,
// token 7547,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7555,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7557,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7564,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7565,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7568,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7570,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7575,
ves_icall_reflection_get_token_raw,
// token 7581,
ves_icall_get_method_info_raw,
// token 7582,
ves_icall_get_method_attributes,
// token 7589,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7591,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7603,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7606,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7607,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7608,
ves_icall_reflection_get_token_raw,
// token 7619,
ves_icall_InternalInvoke_raw,
// token 7628,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7634,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7635,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7636,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7638,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7639,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7657,
ves_icall_InvokeClassConstructor_raw,
// token 7659,
ves_icall_InternalInvoke_raw,
// token 7673,
ves_icall_reflection_get_token_raw,
// token 7693,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7713,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7743,
ves_icall_reflection_get_token_raw,
// token 7744,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8122,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8259,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8496,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8497,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8503,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8504,
ves_icall_ModuleBuilder_getToken_raw,
// token 8505,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8510,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8569,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8843,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8844,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9750,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9771,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 9778,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 9780,
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
1,
1,
0,
0,
0,
0,
};
