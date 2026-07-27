// __ZN13codexmate_lib4core5relay10invariants30verify_router_on_http_contract @ 0x100253720 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::invariants::verify_router_on_http_contract::h1b40dd6085d38a69(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  char *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  char *v18; // rdi
  _QWORD *v19; // r13
  _QWORD *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(); // rdi
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(); // rbx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rsi
  _QWORD *v34; // rax
  _QWORD v36[3]; // [rsp+8h] [rbp-D8h] BYREF
  _QWORD v37[3]; // [rsp+20h] [rbp-C0h] BYREF
  _QWORD v38[3]; // [rsp+38h] [rbp-A8h] BYREF
  _QWORD *v39; // [rsp+50h] [rbp-90h]
  __int64 v40; // [rsp+58h] [rbp-88h] BYREF
  _QWORD *v41; // [rsp+60h] [rbp-80h]
  __int64 (__fastcall *v42)(); // [rsp+68h] [rbp-78h]
  __int64 v43; // [rsp+70h] [rbp-70h]
  _QWORD *v44; // [rsp+78h] [rbp-68h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+80h] [rbp-60h]
  __int64 v46; // [rsp+88h] [rbp-58h]
  __int64 v47; // [rsp+90h] [rbp-50h]
  _QWORD *v48; // [rsp+98h] [rbp-48h]
  _QWORD **v49; // [rsp+A0h] [rbp-40h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+A8h] [rbp-38h]
  __int64 v51; // [rsp+B0h] [rbp-30h]

  v7 = *(_QWORD *)(a2 + 64); /*0x100253741*/
  v8 = *(_QWORD *)(a2 + 56); /*0x10025374c*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v40, v8, v7); /*0x10025374f*/
  if ( __OFSUB__(-v40, 1) ) /*0x10025375e*/
  {
    v44 = v41; /*0x10025376b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v40, v8); /*0x10025376f*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10025377e*/
    if ( !v9 ) /*0x100253786*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100253ad1*/
    v10 = v9; /*0x10025378c*/
    v49 = &v44; /*0x100253793*/
    v50 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10025379e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, &unk_1017B9738, &v49); /*0x1002537b4*/
    *(_QWORD *)(v10 + 16) = v38[2]; /*0x1002537c0*/
    v11 = v38[0]; /*0x1002537c4*/
    *(_QWORD *)(v10 + 8) = v38[1]; /*0x1002537d2*/
    *(_QWORD *)v10 = v11; /*0x1002537d6*/
    *(_BYTE *)(v10 + 24) = 0; /*0x1002537d9*/
    *a1 = 1; /*0x1002537dd*/
    a1[1] = v10; /*0x1002537e4*/
    a1[2] = 1; /*0x1002537e8*/
    if ( ((unsigned __int8)v44 & 3) == 1 ) /*0x1002537fc*/
    {
      v12 = (char *)v44 - 1; /*0x100253802*/
      v13 = *(_QWORD *)((char *)v44 - 1); /*0x100253806*/
      v14 = *(_QWORD *)((char *)v44 + 7); /*0x10025380a*/
      if ( *(_QWORD *)v14 ) /*0x10025380e*/
        (*(void (__fastcall **)(__int64))v14)(v13); /*0x10025381a*/
      v15 = *(_QWORD *)(v14 + 8); /*0x10025381c*/
      if ( v15 ) /*0x100253824*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x10025382e*/
      v16 = 24; /*0x100253833*/
      v17 = 8; /*0x100253838*/
      v18 = v12; /*0x10025383d*/
      goto LABEL_28; /*0x100253840*/
    }
    return a1; /*0x1002537fc*/
  }
  v47 = v40; /*0x100253845*/
  v19 = v41; /*0x100253849*/
  v20 = v41; /*0x100253858*/
  codexmate_lib::core::relay::codex_writer::router_http_contract_issues::hc4329a58b4f5a619(&v40, v41, v42, a3, a4); /*0x100253861*/
  if ( !(_BYTE)v40 ) /*0x10025386d*/
  {
    if ( v43 ) /*0x10025392d*/
    {
      v48 = v19; /*0x100253933*/
      v39 = v41; /*0x10025393b*/
      v27 = v42; /*0x100253942*/
      v28 = v43; /*0x100253946*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v40, v20); /*0x10025394a*/
      v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100253959*/
      if ( !v29 ) /*0x100253961*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100253af7*/
      v30 = v29; /*0x100253967*/
      alloc::str::join_generic_copy::heca7a5e86402c6b6(&v49, v27, v28, "; ", 2); /*0x100253984*/
      v46 = v51; /*0x10025398d*/
      v45 = v50; /*0x100253999*/
      v44 = v49; /*0x10025399d*/
      v49 = &v44; /*0x1002539a5*/
      v50 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002539b0*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v37, &unk_1017B96D8, &v49); /*0x1002539c6*/
      if ( v44 ) /*0x1002539d2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x1002539dd*/
      *(_QWORD *)(v30 + 16) = v37[2]; /*0x1002539e9*/
      v31 = v37[0]; /*0x1002539ed*/
      *(_QWORD *)(v30 + 8) = v37[1]; /*0x1002539fb*/
      *(_QWORD *)v30 = v31; /*0x1002539ff*/
      *(_BYTE *)(v30 + 24) = 0; /*0x100253a02*/
      *a1 = 1; /*0x100253a07*/
      a1[1] = v30; /*0x100253a0e*/
      a1[2] = 1; /*0x100253a12*/
      v25 = v27; /*0x100253a1d*/
      v32 = (_QWORD *)((char *)v27 + 8); /*0x100253a22*/
      do /*0x100253a37*/
      {
        v33 = *(v32 - 1); /*0x100253a39*/
        if ( v33 ) /*0x100253a40*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x100253a4a*/
          v25 = v27; /*0x100253a4f*/
        }
        v32 += 3; /*0x100253a30*/
        --v28; /*0x100253a34*/
      }
      while ( v28 ); /*0x100253a37*/
      v34 = v39; /*0x100253a54*/
      v19 = v48; /*0x100253a5e*/
      if ( !v39 ) /*0x100253a62*/
        goto LABEL_26; /*0x100253a62*/
    }
    else
    {
      v34 = v41; /*0x100253a66*/
      v25 = v42; /*0x100253a6a*/
      *a1 = 0; /*0x100253a6e*/
      a1[1] = 8; /*0x100253a75*/
      a1[2] = 0; /*0x100253a7d*/
      if ( !v34 ) /*0x100253a88*/
        goto LABEL_26; /*0x100253a88*/
    }
    v24 = 24LL * (_QWORD)v34; /*0x100253a8e*/
    v26 = 8; /*0x100253a92*/
    goto LABEL_25; /*0x100253a92*/
  }
  v51 = v43; /*0x100253877*/
  v50 = v42; /*0x100253883*/
  v49 = (_QWORD **)v41; /*0x100253887*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v40, v20); /*0x10025388b*/
  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10025389a*/
  if ( !v21 ) /*0x1002538a2*/
  {
    v48 = v19; /*0x100253ad8*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100253ae6*/
  }
  v22 = v21; /*0x1002538a8*/
  v44 = &v49; /*0x1002538af*/
  v45 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002538ba*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_1017B96FC, &v44); /*0x1002538d0*/
  *(_QWORD *)(v22 + 16) = v36[2]; /*0x1002538dc*/
  v23 = v36[0]; /*0x1002538e0*/
  *(_QWORD *)(v22 + 8) = v36[1]; /*0x1002538ee*/
  *(_QWORD *)v22 = v23; /*0x1002538f2*/
  *(_BYTE *)(v22 + 24) = 0; /*0x1002538f5*/
  *a1 = 1; /*0x1002538fa*/
  a1[1] = v22; /*0x100253901*/
  a1[2] = 1; /*0x100253905*/
  v24 = (__int64)v49; /*0x10025390d*/
  if ( v49 ) /*0x100253914*/
  {
    v25 = v50; /*0x10025391a*/
    v26 = 1; /*0x10025391e*/
LABEL_25:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, v26); /*0x100253a97*/
  }
LABEL_26:
  v16 = v47; /*0x100253a9c*/
  if ( v47 ) /*0x100253aa3*/
  {
    v17 = 1; /*0x100253aa5*/
    v18 = (char *)v19; /*0x100253aaa*/
LABEL_28:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v16, v17); /*0x100253aad*/
  }
  return a1; /*0x100253ab5*/
}