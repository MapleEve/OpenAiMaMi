// __ZN13codexmate_lib4core5relay17router_reconciler13record_timing @ 0x100324d90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 result; // rax
  _BYTE v12[24]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v13[8]; // [rsp+20h] [rbp-A0h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v15; // [rsp+70h] [rbp-50h] BYREF
  int v16; // [rsp+78h] [rbp-48h]
  _QWORD v17[2]; // [rsp+80h] [rbp-40h] BYREF
  unsigned __int128 v18; // [rsp+90h] [rbp-30h] BYREF
  char v19; // [rsp+AFh] [rbp-11h] BYREF

  v19 = a1; /*0x100324da1*/
  v17[0] = a2; /*0x100324da5*/
  v17[1] = a3; /*0x100324da9*/
  v15 = a4; /*0x100324dad*/
  v16 = a5; /*0x100324db1*/
  v7 = std::time::Instant::elapsed::h457f209775ed485c(&v15); /*0x100324db9*/
  v18 = 0x3E8 * (unsigned __int128)(unsigned __int64)v7 + v8 / 0xF4240uLL; /*0x100324ddc*/
  v9 = a6[1]; /*0x100324de4*/
  v10 = a6[2]; /*0x100324de8*/
  v14[0] = v9; /*0x100324dec*/
  v14[1] = v10; /*0x100324df0*/
  v13[0] = &v19; /*0x100324df8*/
  v13[1] = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e; /*0x100324e06*/
  v13[2] = v17; /*0x100324e11*/
  v13[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100324e1f*/
  v13[4] = &v18; /*0x100324e2a*/
  v13[5] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100324e35*/
  v13[6] = v14; /*0x100324e3d*/
  v13[7] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100324e41*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v12, &unk_1017BBC51, v13); /*0x100324e5a*/
  result = codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100324e7e*/
             "router_transitionphase_timingstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
             17,
             "phase_timingstarting_proxyproxy_startedproxy_root_present=truepreparing_authauth_ready",
             12,
             v12);
  if ( *a6 ) /*0x100324e83*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, *a6, 1); /*0x100324e93*/
  return result; /*0x100324e98*/
}