// __ZN13codexmate_lib4core5relay12proxy_server16log_route_result @ 0x100257ad0 | 基线 same-set
char __fastcall codexmate_lib::core::relay::proxy_server::log_route_result::h15fcdab5b1b9c19e(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        __int16 a7,
        unsigned __int16 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rsi
  char result; // al
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(); // rax
  bool v17; // zf
  char *v18; // rax
  size_t v19; // rbx
  const void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  _DWORD *v23; // rax
  __int64 v24; // r14
  const void *v25; // r12
  __int64 v26; // rax
  _BYTE v27[24]; // [rsp+8h] [rbp-E8h] BYREF
  _QWORD v28[2]; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-C0h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-B0h] BYREF
  _QWORD *v31; // [rsp+50h] [rbp-A0h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+58h] [rbp-98h]
  _QWORD *v33; // [rsp+60h] [rbp-90h]
  __int64 (__fastcall *v34)(); // [rsp+68h] [rbp-88h]
  _QWORD *v35; // [rsp+70h] [rbp-80h]
  __int64 (__fastcall *v36)(); // [rsp+78h] [rbp-78h]
  size_t *v37; // [rsp+80h] [rbp-70h]
  __int64 (__fastcall *v38)(); // [rsp+88h] [rbp-68h]
  __int64 *v39; // [rsp+90h] [rbp-60h]
  __int64 (__fastcall *v40)(); // [rsp+98h] [rbp-58h]
  size_t v41; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-48h]
  size_t v43; // [rsp+B0h] [rbp-40h]
  __int64 v44; // [rsp+B8h] [rbp-38h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+C0h] [rbp-30h]
  __int64 v46; // [rsp+C8h] [rbp-28h]

  v11 = a9; /*0x100257ae5*/
  v30[0] = a1; /*0x100257aee*/
  v30[1] = a2; /*0x100257af5*/
  v29[0] = a3; /*0x100257afc*/
  v29[1] = a4; /*0x100257b03*/
  result = a7 == 0; /*0x100257b0e*/
  if ( a9 == 0 && a7 == 0 ) /*0x100257b0e*/
    return result; /*0x100257b19*/
  if ( a9 ) /*0x100257b28*/
  {
    v15 = (__int64)&v31; /*0x100257b2e*/
    codexmate_lib::core::relay::models::sanitize_error_for_display::h90525d8d08e331fa(&v31, a9, a10); /*0x100257b35*/
    v46 = (__int64)v33; /*0x100257b41*/
    v45 = v32; /*0x100257b53*/
    v44 = (__int64)v31; /*0x100257b57*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, 0); /*0x100257b5d*/
    v15 = 4; /*0x100257b62*/
    v11 = 1; /*0x100257b67*/
    v16 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100257b6c*/
    if ( !v16 ) /*0x100257b74*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100257d48*/
    *(_DWORD *)v16 = 1701736302; /*0x100257b7a*/
    v44 = 4; /*0x100257b80*/
    v45 = v16; /*0x100257b88*/
    v46 = 4; /*0x100257b8c*/
  }
  v17 = a5 == nullptr; /*0x100257b94*/
  v18 = "nonehosttoolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls"; /*0x100257b97*/
  if ( a5 ) /*0x100257b9e*/
    v18 = a5; /*0x100257b9e*/
  v19 = 4; /*0x100257ba2*/
  if ( v17 ) /*0x100257ba7*/
    a6 = 4; /*0x100257ba7*/
  v28[0] = v18; /*0x100257bab*/
  v28[1] = a6; /*0x100257bb2*/
  if ( (a7 & 1) != 0 ) /*0x100257bbd*/
  {
    v20 = (const void *)core::fmt::num::imp::_$LT$impl$u20$u16$GT$::_fmt::he37f58232fb48d79(a8, &v31, 5); /*0x100257bcf*/
    v19 = v21; /*0x100257bd4*/
    if ( v21 < 0 ) /*0x100257bda*/
    {
      v22 = 0; /*0x100257bdc*/
      goto LABEL_13; /*0x100257bdc*/
    }
    if ( !v21 ) /*0x100257c19*/
    {
      v24 = 1; /*0x100257c43*/
      goto LABEL_20; /*0x100257c43*/
    }
    v25 = v20; /*0x100257c1b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a8, &v31); /*0x100257c1e*/
    v22 = 1; /*0x100257c23*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1); /*0x100257c31*/
    if ( v26 ) /*0x100257c39*/
    {
      v24 = v26; /*0x100257c3b*/
      v20 = v25; /*0x100257c3e*/
LABEL_20:
      memcpy((void *)v24, v20, v19); /*0x100257c49*/
      goto LABEL_21; /*0x100257c52*/
    }
LABEL_13:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v19); /*0x100257bdf*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v11); /*0x100257bec*/
  v22 = 1; /*0x100257bf1*/
  v23 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100257c01*/
  if ( !v23 ) /*0x100257c09*/
    goto LABEL_13; /*0x100257c09*/
  v24 = (__int64)v23; /*0x100257c0b*/
  *v23 = 1701736302; /*0x100257c0e*/
LABEL_21:
  v41 = v19; /*0x100257c57*/
  v42 = v24; /*0x100257c5b*/
  v43 = v19; /*0x100257c5f*/
  v31 = v30; /*0x100257c6a*/
  v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100257c78*/
  v33 = v29; /*0x100257c86*/
  v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100257c8d*/
  v35 = v28; /*0x100257c9b*/
  v36 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100257c9f*/
  v37 = &v41; /*0x100257ca7*/
  v38 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100257cb2*/
  v39 = &v44; /*0x100257cba*/
  v40 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100257cbe*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1017B9999, &v31); /*0x100257cd7*/
  if ( v41 ) /*0x100257ce3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1); /*0x100257cee*/
  result = codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x100257d12*/
             "codex_routecompletedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
             11,
             "completedrelay pass-through stream failedtransfer-encodingcontent-lengthkeep-aliveproxy-authenticateproxy-authorizationteupgradebuild streaming body failed",
             9,
             v27);
  if ( v44 ) /*0x100257d1e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x100257d29*/
  return result; /*0x100257d2e*/
}