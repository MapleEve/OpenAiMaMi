// __ZN13codexmate_lib4core5relay7manager20record_router_timing @ 0x100284db0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::record_router_timing::h4bb28af80ee86731(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r12
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // r13
  __int64 result; // rax
  _QWORD v14[2]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-B0h] BYREF
  int v16; // [rsp+18h] [rbp-A8h]
  _QWORD v17[3]; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-88h] BYREF
  __int128 v19; // [rsp+40h] [rbp-80h]
  __int64 v20; // [rsp+50h] [rbp-70h]
  __int64 v21; // [rsp+58h] [rbp-68h]
  _QWORD *v22; // [rsp+60h] [rbp-60h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+68h] [rbp-58h]
  _QWORD *v24; // [rsp+70h] [rbp-50h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-48h]
  _OWORD v26[4]; // [rsp+80h] [rbp-40h] BYREF

  v20 = a3; /*0x100284dc7*/
  v21 = a2; /*0x100284dcb*/
  v15 = a4; /*0x100284dd2*/
  v16 = a5; /*0x100284dd9*/
  v7 = std::time::Instant::elapsed::h457f209775ed485c(&v15); /*0x100284de7*/
  v26[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v7 + v8 / 0xF4240uLL; /*0x100284e0a*/
  v9 = a6[1]; /*0x100284e12*/
  v10 = a6[2]; /*0x100284e16*/
  v17[0] = v9; /*0x100284e1a*/
  v17[1] = v10; /*0x100284e21*/
  v22 = v26; /*0x100284e2c*/
  v23 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100284e37*/
  v24 = v17; /*0x100284e42*/
  v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284e4d*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v18, &anon_39a6e93098609d65551b0fc4eadbbbd9_668, &v22); /*0x100284e63*/
  v11 = &anon_39a6e93098609d65551b0fc4eadbbbd9_5; /*0x100284e6f*/
  if ( a1 ) /*0x100284e79*/
    v11 = &anon_39a6e93098609d65551b0fc4eadbbbd9_6; /*0x100284e79*/
  v14[0] = v11; /*0x100284e85*/
  v14[1] = a1 | 8LL; /*0x100284e8c*/
  v12 = v19; /*0x100284e93*/
  v26[0] = v19; /*0x100284e9b*/
  v22 = v14; /*0x100284eaa*/
  v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284eae*/
  v24 = v26; /*0x100284eb2*/
  v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100284eb6*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &anon_39a6e93098609d65551b0fc4eadbbbd9_664, &v22); /*0x100284ecc*/
  result = codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100284eec*/
             &anon_39a6e93098609d65551b0fc4eadbbbd9_665,
             13,
             v21,
             v20,
             v17);
  if ( v18 ) /*0x100284efb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v18, 1); /*0x100284f05*/
  if ( *a6 ) /*0x100284f0a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, *a6, 1); /*0x100284f1a*/
  return result; /*0x100284f1f*/
}