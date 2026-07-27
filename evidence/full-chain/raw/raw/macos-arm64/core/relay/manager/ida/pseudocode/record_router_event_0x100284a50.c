// __ZN13codexmate_lib4core5relay7manager19record_router_event @ 0x100284a50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::record_router_event::h9aef4b264acbe670(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  _BYTE v10[24]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v11[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+50h] [rbp-30h] BYREF

  v6 = &anon_39a6e93098609d65551b0fc4eadbbbd9_5; /*0x100284a6c*/
  if ( a1 ) /*0x100284a75*/
    v6 = &anon_39a6e93098609d65551b0fc4eadbbbd9_6; /*0x100284a75*/
  v13[0] = v6; /*0x100284a82*/
  v13[1] = a1 | 8LL; /*0x100284a86*/
  v7 = a4[1]; /*0x100284a8a*/
  v8 = a4[2]; /*0x100284a8e*/
  v12[0] = v7; /*0x100284a92*/
  v12[1] = v8; /*0x100284a96*/
  v11[0] = v13; /*0x100284a9e*/
  v11[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284aa9*/
  v11[2] = v12; /*0x100284ab1*/
  v11[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284ab5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v10, &anon_39a6e93098609d65551b0fc4eadbbbd9_664, v11); /*0x100284ac8*/
  result = codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100284ae3*/
             &anon_39a6e93098609d65551b0fc4eadbbbd9_665,
             13,
             a2,
             a3,
             v10);
  if ( *a4 ) /*0x100284ae8*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, *a4, 1); /*0x100284af8*/
  return result; /*0x100284afd*/
}