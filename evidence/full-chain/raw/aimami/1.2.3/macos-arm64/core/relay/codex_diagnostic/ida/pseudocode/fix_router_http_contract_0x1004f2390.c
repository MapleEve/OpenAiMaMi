// __ZN13codexmate_lib4core5relay16codex_diagnostic24fix_router_http_contract @ 0x1004f2390 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_router_http_contract::h7bd4fe1ed817f034(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD *, __int64))
{
  __int64 result; // rax
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // rbx
  void *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rbx
  void *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // r15
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  _QWORD v39[3]; // [rsp+8h] [rbp-118h] BYREF
  _QWORD v40[2]; // [rsp+20h] [rbp-100h] BYREF
  _QWORD v41[13]; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v42; // [rsp+98h] [rbp-88h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-80h]
  __int64 v44; // [rsp+A8h] [rbp-78h]
  __int64 v45; // [rsp+B0h] [rbp-70h]
  __int64 v46; // [rsp+B8h] [rbp-68h]
  __int64 v47; // [rsp+C0h] [rbp-60h]
  __int64 v48; // [rsp+C8h] [rbp-58h]
  __int64 v49; // [rsp+D0h] [rbp-50h]
  __int64 v50; // [rsp+D8h] [rbp-48h]
  __int64 v51; // [rsp+E0h] [rbp-40h]
  __int64 v52; // [rsp+E8h] [rbp-38h]
  __int64 v53; // [rsp+F0h] [rbp-30h]

  result = a6(v41, a5); /*0x1004f23ba*/
  if ( LODWORD(v41[0]) != 11 ) /*0x1004f23c4*/
  {
    qmemcpy(a1, v41, 0x60u); /*0x1004f2414*/
    return result; /*0x1004f2414*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v42, a2, a3); /*0x1004f23dd*/
  v10 = v42; /*0x1004f23e2*/
  v11 = (_QWORD *)v43; /*0x1004f23e9*/
  if ( __OFSUB__(-v42, 1) ) /*0x1004f23f0*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x1004f23fb*/
      0x8000000000000000LL,
      v43);
    v11 = nullptr; /*0x1004f2400*/
  }
  else
  {
    v12 = v44; /*0x1004f241c*/
  }
  v13 = v41; /*0x1004f2420*/
  v14 = v11; /*0x1004f2427*/
  codexmate_lib::core::relay::codex_diagnostic::check_router_http_contract::h1f5d10a08e55f54d(v41, v11, v12, a4); /*0x1004f242d*/
  if ( 2 * v10 ) /*0x1004f2432*/
  {
    v13 = v11; /*0x1004f2450*/
    v14 = (_QWORD *)v10; /*0x1004f2453*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x1004f2456*/
    if ( v41[5] != 2 ) /*0x1004f2463*/
      goto LABEL_11; /*0x1004f2463*/
  }
  else if ( v41[5] != 2 ) /*0x1004f2447*/
  {
LABEL_11:
    v51 = 0; /*0x1004f2479*/
    v52 = 8; /*0x1004f2481*/
    v53 = 0; /*0x1004f2489*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x1004f2491*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004f24a0*/
    if ( !v16 ) /*0x1004f24b2*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f2907*/
    v17 = (_QWORD *)v16; /*0x1004f24b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004f24bb*/
    v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004f24ca*/
    if ( !v18 ) /*0x1004f24d2*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1004f294b*/
    qmemcpy(v18, "router_http_contract", 20); /*0x1004f24f0*/
    *v17 = 20; /*0x1004f24fa*/
    v17[1] = v18; /*0x1004f2501*/
    v17[2] = 20; /*0x1004f2505*/
    v48 = 1; /*0x1004f250d*/
    v49 = (__int64)v17; /*0x1004f2515*/
    v50 = 1; /*0x1004f2519*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x1004f2521*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004f2530*/
    if ( !v19 ) /*0x1004f253b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f2918*/
    v20 = (_QWORD *)v19; /*0x1004f2541*/
    if ( v41[9] == 0x8000000000000000LL ) /*0x1004f254e*/
    {
      v44 = v41[8]; /*0x1004f255b*/
      v43 = v41[7]; /*0x1004f2566*/
      v42 = v41[6]; /*0x1004f256a*/
    }
    else
    {
      v42 = v41[9]; /*0x1004f2581*/
      v43 = v41[10]; /*0x1004f2596*/
      v44 = v41[11]; /*0x1004f259a*/
      if ( v41[6] ) /*0x1004f25a1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[7], v41[6], 1); /*0x1004f25a8*/
    }
    v40[0] = &v42; /*0x1004f25b4*/
    v40[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004f25c2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_1017BFFCF, v40); /*0x1004f25de*/
    if ( v42 ) /*0x1004f25ed*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v42, 1); /*0x1004f25f8*/
    v20[2] = v39[2]; /*0x1004f2604*/
    v21 = v39[0]; /*0x1004f2609*/
    v20[1] = v39[1]; /*0x1004f2617*/
    *v20 = v21; /*0x1004f261c*/
    result = v51; /*0x1004f2620*/
    v22 = v52; /*0x1004f2624*/
    v42 = v51; /*0x1004f2628*/
    v43 = v52; /*0x1004f262f*/
    v23 = v53; /*0x1004f2633*/
    v44 = v53; /*0x1004f2637*/
    v24 = v48; /*0x1004f263b*/
    v25 = v49; /*0x1004f263f*/
    v45 = v48; /*0x1004f2643*/
    v46 = v49; /*0x1004f2647*/
    v47 = v50; /*0x1004f264f*/
    a1[6] = v50; /*0x1004f2653*/
    a1[5] = v25; /*0x1004f2657*/
    a1[4] = v24; /*0x1004f265b*/
    a1[3] = v23; /*0x1004f265f*/
    a1[2] = v22; /*0x1004f2663*/
    a1[1] = result; /*0x1004f2667*/
    a1[7] = 1; /*0x1004f266b*/
    a1[8] = v20; /*0x1004f2673*/
    a1[9] = 1; /*0x1004f2677*/
    *a1 = 11; /*0x1004f267f*/
    if ( v41[0] ) /*0x1004f2690*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[1], v41[0], 1); /*0x1004f269e*/
    v26 = v41[3]; /*0x1004f26a3*/
    if ( v41[3] ) /*0x1004f26ad*/
    {
      v27 = &v41[4]; /*0x1004f26af*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v27, v26, 1); /*0x1004f26be*/
    }
    return result; /*0x1004f26ad*/
  }
  v15 = v41[4]; /*0x1004f2465*/
  if ( *(_WORD *)v41[4] != 27503 ) /*0x1004f2473*/
    goto LABEL_11; /*0x1004f2473*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v14); /*0x1004f26d5*/
  v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004f26e4*/
  if ( !v28 ) /*0x1004f26f6*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f2929*/
  v29 = (_QWORD *)v28; /*0x1004f26fc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004f26ff*/
  v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004f270e*/
  if ( !v30 ) /*0x1004f2716*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1004f295c*/
  qmemcpy(v30, "router_http_contract", 20); /*0x1004f2734*/
  *v29 = 20; /*0x1004f273e*/
  v29[1] = v30; /*0x1004f2745*/
  v29[2] = 20; /*0x1004f2749*/
  v51 = 1; /*0x1004f2751*/
  v52 = (__int64)v29; /*0x1004f2759*/
  v53 = 1; /*0x1004f275d*/
  v48 = 0; /*0x1004f2765*/
  v49 = 8; /*0x1004f276d*/
  v50 = 0; /*0x1004f2775*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x1004f277d*/
  v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004f278c*/
  if ( !v31 ) /*0x1004f2794*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004f293a*/
  v32 = (_QWORD *)v31; /*0x1004f279a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004f279d*/
  v33 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x1004f27ac*/
  if ( !v33 ) /*0x1004f27b4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x1004f296d*/
  *(_QWORD *)((char *)v33 + 37) = 0xA6BAE791A5E5B194LL; /*0x1004f27c4*/
  v33[4] = 0xE5B194E7AFB7E820LL; /*0x1004f27d2*/
  qmemcpy(v33 + 2, "aimai1 HTTP-only", 16); /*0x1004f27ee*/
  v33[1] = 0x20A585E59986E5B0LL; /*0x1004f27fc*/
  *v33 = 0x96E68D87E9B2B7E5LL; /*0x1004f280a*/
  *v32 = 45; /*0x1004f280d*/
  v32[1] = v33; /*0x1004f2814*/
  v32[2] = 45; /*0x1004f2818*/
  v34 = v53; /*0x1004f2820*/
  v44 = v53; /*0x1004f2824*/
  v35 = v51; /*0x1004f2828*/
  v36 = v52; /*0x1004f282c*/
  v43 = v52; /*0x1004f2830*/
  v42 = v51; /*0x1004f2834*/
  v37 = v48; /*0x1004f283b*/
  v38 = v49; /*0x1004f283f*/
  v45 = v48; /*0x1004f2843*/
  v46 = v49; /*0x1004f2847*/
  v47 = v50; /*0x1004f284f*/
  a1[6] = v50; /*0x1004f2853*/
  a1[5] = v38; /*0x1004f2857*/
  a1[4] = v37; /*0x1004f285b*/
  a1[3] = v34; /*0x1004f285f*/
  a1[2] = v36; /*0x1004f2863*/
  a1[1] = v35; /*0x1004f2867*/
  a1[7] = 1; /*0x1004f286b*/
  a1[8] = v32; /*0x1004f2873*/
  a1[9] = 1; /*0x1004f2877*/
  *a1 = 11; /*0x1004f287f*/
  if ( v41[0] ) /*0x1004f2890*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[1], v41[0], 1); /*0x1004f289e*/
  if ( v41[3] ) /*0x1004f28ad*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v41[3], 1); /*0x1004f28b7*/
  if ( v41[6] ) /*0x1004f28c6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41[7], v41[6], 1); /*0x1004f28d4*/
  v26 = v41[9]; /*0x1004f28d9*/
  result = 2LL * v41[9]; /*0x1004f28e0*/
  if ( 2LL * v41[9] ) /*0x1004f28e0*/
  {
    v27 = &v41[10]; /*0x1004f28f1*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v27, v26, 1); /*0x1004f28f8*/
  }
  return result; /*0x1004f26c3*/
}