// __ZN13codexmate_lib4core5relay16codex_diagnostic18checked_fix_result @ 0x1004e7350 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hcecd381739201c5f(
        __int64 *a1,
        const void *a2,
        size_t a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 v7; // rax
  _QWORD *v8; // r12
  void *v9; // rax
  void *v10; // rbx
  void *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // r12
  void *v26; // rax
  void *v27; // rbx
  void *v28; // rdi
  _QWORD *v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rsi
  _QWORD v36[3]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v37[2]; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-A8h]
  __int64 v39; // [rsp+30h] [rbp-A0h]
  _QWORD *v40; // [rsp+38h] [rbp-98h]
  __int64 v41; // [rsp+40h] [rbp-90h]
  __int64 v42; // [rsp+48h] [rbp-88h]
  __int64 v43; // [rsp+50h] [rbp-80h]
  __int64 v44; // [rsp+58h] [rbp-78h]
  _QWORD *v45; // [rsp+60h] [rbp-70h] BYREF
  __int64 v46; // [rsp+68h] [rbp-68h]
  __int64 *v47; // [rsp+70h] [rbp-60h]
  __int64 (__fastcall *v48)(); // [rsp+78h] [rbp-58h]
  __int64 *v49; // [rsp+80h] [rbp-50h]
  __int64 v50; // [rsp+88h] [rbp-48h] BYREF
  _QWORD *v51; // [rsp+90h] [rbp-40h]
  __int64 v52; // [rsp+98h] [rbp-38h]
  _QWORD *v53; // [rsp+A0h] [rbp-30h]

  v49 = a5; /*0x1004e7364*/
  v37[0] = a2; /*0x1004e7371*/
  v37[1] = a3; /*0x1004e7378*/
  v53 = a4; /*0x1004e737f*/
  if ( a4[5] == 2 && *(_WORD *)v53[4] == 27503 ) /*0x1004e7397*/
  {
    v38 = v53[4]; /*0x1004e75cc*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004e75d3*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e75e2*/
    if ( !v24 ) /*0x1004e75ea*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e778b*/
    v25 = (_QWORD *)v24; /*0x1004e75f0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e75f3*/
    v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1004e7600*/
    if ( !v26 ) /*0x1004e7608*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1004e77c6*/
    v27 = v26; /*0x1004e760e*/
    v28 = v26; /*0x1004e7611*/
    memcpy(v26, a2, a3); /*0x1004e761a*/
    *v25 = a3; /*0x1004e761f*/
    v25[1] = v27; /*0x1004e7623*/
    v25[2] = a3; /*0x1004e7628*/
    v50 = 1; /*0x1004e762d*/
    v51 = v25; /*0x1004e7635*/
    v52 = 1; /*0x1004e7639*/
    v45 = nullptr; /*0x1004e7641*/
    v46 = 8; /*0x1004e7649*/
    v47 = nullptr; /*0x1004e7651*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, a2); /*0x1004e7659*/
    v29 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e7668*/
    if ( !v29 ) /*0x1004e7670*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e77a0*/
    v30 = v49; /*0x1004e7676*/
    v29[2] = v49[2]; /*0x1004e767e*/
    v31 = *v30; /*0x1004e7682*/
    v29[1] = v30[1]; /*0x1004e7689*/
    *v29 = v31; /*0x1004e768d*/
    a1[2] = v52; /*0x1004e7694*/
    v32 = v50; /*0x1004e7698*/
    a1[1] = (__int64)v51; /*0x1004e76a0*/
    *a1 = v32; /*0x1004e76a4*/
    a1[5] = (__int64)v47; /*0x1004e76ab*/
    v33 = v45; /*0x1004e76af*/
    a1[4] = v46; /*0x1004e76b7*/
    a1[3] = (__int64)v33; /*0x1004e76bb*/
    a1[6] = 1; /*0x1004e76bf*/
    a1[7] = (__int64)v29; /*0x1004e76c7*/
    a1[8] = 1; /*0x1004e76cb*/
    if ( *v53 ) /*0x1004e76d7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[1], *v53, 1); /*0x1004e76e8*/
    v34 = v53[3]; /*0x1004e76ed*/
    if ( v34 ) /*0x1004e76f4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v34, 1); /*0x1004e7702*/
    v35 = v53[6]; /*0x1004e7707*/
    if ( v35 ) /*0x1004e770e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[7], v35, 1); /*0x1004e7719*/
    result = -v53[9]; /*0x1004e7725*/
    if ( !__OFSUB__(result, 1) && v53[9] ) /*0x1004e7722*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53[10], v53[9], 1); /*0x1004e774e*/
  }
  else
  {
    v42 = 0; /*0x1004e739d*/
    v43 = 8; /*0x1004e73a8*/
    v44 = 0; /*0x1004e73b0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004e73b8*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e73c7*/
    if ( !v7 ) /*0x1004e73cf*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e7761*/
    v8 = (_QWORD *)v7; /*0x1004e73d5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e73d8*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1004e73e5*/
    if ( !v9 ) /*0x1004e73ed*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1004e77b3*/
    v10 = v9; /*0x1004e73f3*/
    v11 = v9; /*0x1004e73f6*/
    memcpy(v9, a2, a3); /*0x1004e73ff*/
    *v8 = a3; /*0x1004e7404*/
    v8[1] = v10; /*0x1004e7408*/
    v8[2] = a3; /*0x1004e740d*/
    v39 = 1; /*0x1004e7412*/
    v40 = v8; /*0x1004e741d*/
    v41 = 1; /*0x1004e7424*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, a2); /*0x1004e742f*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e743e*/
    if ( !v12 ) /*0x1004e7449*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e7776*/
    v13 = (_QWORD *)v12; /*0x1004e744f*/
    v14 = v53; /*0x1004e7452*/
    if ( __OFSUB__(-v53[9], 1) ) /*0x1004e745d*/
    {
      v52 = v53[8]; /*0x1004e746a*/
      v15 = v53[6]; /*0x1004e746e*/
      v51 = (_QWORD *)v53[7]; /*0x1004e7475*/
      v50 = v15; /*0x1004e7479*/
    }
    else
    {
      v16 = v53[6]; /*0x1004e747f*/
      v17 = v53[7]; /*0x1004e7483*/
      v50 = v53[9]; /*0x1004e7487*/
      v18 = v53[11]; /*0x1004e748f*/
      v51 = (_QWORD *)v53[10]; /*0x1004e7493*/
      v52 = v18; /*0x1004e7497*/
      if ( v16 ) /*0x1004e749e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x1004e74a5*/
    }
    v45 = v37; /*0x1004e74b1*/
    v46 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004e74bc*/
    v47 = &v50; /*0x1004e74c4*/
    v48 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004e74cf*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_1017BF859, &v45); /*0x1004e74e5*/
    if ( v50 ) /*0x1004e74f1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v50, 1); /*0x1004e74fc*/
    v13[2] = v36[2]; /*0x1004e7508*/
    v19 = v36[0]; /*0x1004e750d*/
    v13[1] = v36[1]; /*0x1004e751b*/
    *v13 = v19; /*0x1004e7520*/
    a1[2] = v44; /*0x1004e7528*/
    v20 = v42; /*0x1004e752c*/
    a1[1] = v43; /*0x1004e7537*/
    *a1 = v20; /*0x1004e753b*/
    a1[5] = v41; /*0x1004e7545*/
    v21 = v39; /*0x1004e7549*/
    a1[4] = (__int64)v40; /*0x1004e7557*/
    a1[3] = v21; /*0x1004e755b*/
    a1[6] = 1; /*0x1004e755f*/
    a1[7] = (__int64)v13; /*0x1004e7567*/
    a1[8] = 1; /*0x1004e756b*/
    result = (__int64)v49; /*0x1004e7573*/
    if ( *v49 ) /*0x1004e7577*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49[1], *v49, 1); /*0x1004e7588*/
    if ( *v14 ) /*0x1004e758d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14[1], *v14, 1); /*0x1004e759e*/
    v23 = v14[3]; /*0x1004e75a3*/
    if ( v23 ) /*0x1004e75aa*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14[4], v23, 1); /*0x1004e75b5*/
  }
  return result; /*0x1004e75ba*/
}