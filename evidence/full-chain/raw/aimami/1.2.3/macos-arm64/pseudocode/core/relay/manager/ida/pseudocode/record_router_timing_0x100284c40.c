// __ZN13codexmate_lib4core5relay7manager20record_router_timing @ 0x100284c40 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::record_router_timing::h43d4824883113823(
        unsigned int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  void *v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-90h] BYREF
  int v14; // [rsp+18h] [rbp-88h]
  _QWORD v15[3]; // [rsp+20h] [rbp-80h] BYREF
  __int64 v16; // [rsp+38h] [rbp-68h] BYREF
  __int128 v17; // [rsp+40h] [rbp-60h]
  _QWORD *v18; // [rsp+50h] [rbp-50h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+58h] [rbp-48h]
  _QWORD *v20; // [rsp+60h] [rbp-40h]
  __int64 (__fastcall *v21)(); // [rsp+68h] [rbp-38h]
  _OWORD v22[3]; // [rsp+70h] [rbp-30h] BYREF

  v13 = a2; /*0x100284c58*/
  v14 = a3; /*0x100284c5f*/
  v7 = std::time::Instant::elapsed::h457f209775ed485c(&v13); /*0x100284c6c*/
  v22[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v7 + v8 / 0xF4240uLL; /*0x100284c8f*/
  v15[0] = a4; /*0x100284c97*/
  v15[1] = a5; /*0x100284c9b*/
  v18 = v22; /*0x100284ca3*/
  v19 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100284cae*/
  v20 = v15; /*0x100284cb6*/
  v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284cc1*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v16, &anon_39a6e93098609d65551b0fc4eadbbbd9_668, &v18); /*0x100284cd4*/
  v9 = &anon_39a6e93098609d65551b0fc4eadbbbd9_5; /*0x100284ce0*/
  if ( a1 ) /*0x100284ce9*/
    v9 = &anon_39a6e93098609d65551b0fc4eadbbbd9_6; /*0x100284ce9*/
  v12[0] = v9; /*0x100284cf3*/
  v12[1] = a1 | 8LL; /*0x100284cfa*/
  v10 = v17; /*0x100284d01*/
  v22[0] = v17; /*0x100284d09*/
  v18 = v12; /*0x100284d18*/
  v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284d1c*/
  v20 = v22; /*0x100284d20*/
  v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284d24*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v15, &anon_39a6e93098609d65551b0fc4eadbbbd9_664, &v18); /*0x100284d37*/
  result = codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100284d58*/
             &anon_39a6e93098609d65551b0fc4eadbbbd9_665,
             13,
             "totalresult=error stage=preflight",
             5,
             v15);
  if ( v16 ) /*0x100284d64*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v16, 1); /*0x100284d6e*/
  return result; /*0x100284d73*/
}