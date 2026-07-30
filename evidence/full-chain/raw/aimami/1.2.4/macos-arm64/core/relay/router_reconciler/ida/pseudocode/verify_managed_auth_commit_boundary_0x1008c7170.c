// __ZN13codexmate_lib4core5relay17router_reconciler35verify_managed_auth_commit_boundary @ 0x1008c7170 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::router_reconciler::verify_managed_auth_commit_boundary::h0f4c12a9927a19f1(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r12
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r14
  _QWORD *v21; // r12
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(); // r13
  __int64 v26; // r14
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  _QWORD **v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  char *v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  void *v37; // rax
  void *v38; // rbx
  _QWORD v39[3]; // [rsp+8h] [rbp-268h] BYREF
  _QWORD v40[3]; // [rsp+20h] [rbp-250h] BYREF
  _QWORD v41[3]; // [rsp+38h] [rbp-238h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-220h] BYREF
  _QWORD v43[11]; // [rsp+60h] [rbp-210h] BYREF
  _QWORD v44[11]; // [rsp+B8h] [rbp-1B8h] BYREF
  _QWORD v45[2]; // [rsp+110h] [rbp-160h] BYREF
  __int64 v46; // [rsp+120h] [rbp-150h]
  __int64 v47; // [rsp+128h] [rbp-148h] BYREF
  __int64 v48; // [rsp+130h] [rbp-140h]
  __int64 v49; // [rsp+138h] [rbp-138h]
  _QWORD v50[11]; // [rsp+140h] [rbp-130h] BYREF
  __int64 v51; // [rsp+198h] [rbp-D8h]
  _QWORD *v52; // [rsp+1A0h] [rbp-D0h] BYREF
  _QWORD v53[11]; // [rsp+1A8h] [rbp-C8h] BYREF
  _QWORD *v54; // [rsp+200h] [rbp-70h]
  __int64 v55; // [rsp+208h] [rbp-68h]
  _QWORD *v56; // [rsp+210h] [rbp-60h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+218h] [rbp-58h]
  __int64 v58; // [rsp+220h] [rbp-50h]
  __int64 v59; // [rsp+228h] [rbp-48h]
  char *v60; // [rsp+230h] [rbp-40h]
  _QWORD *v61; // [rsp+238h] [rbp-38h]
  _QWORD *v62; // [rsp+240h] [rbp-30h]

  v42[0] = a3; /*0x1008c7193*/
  v42[1] = a4; /*0x1008c719a*/
  v53[3] = 0; /*0x1008c71a1*/
  v52 = nullptr; /*0x1008c71ac*/
  v53[1] = 0; /*0x1008c71b7*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(v43, &v52); /*0x1008c71d0*/
  if ( __OFSUB__(0, v43[0]) ) /*0x1008c71d7*/
  {
    LOBYTE(v45[0]) = v43[1]; /*0x1008c71eb*/
    v56 = v45; /*0x1008c71f8*/
    v57 = _$LT$url..parser..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b83982323eaffdf; /*0x1008c7203*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_1017D0C73, &v56); /*0x1008c721c*/
    qmemcpy(v50, v53, sizeof(v50)); /*0x1008c7233*/
    qmemcpy(v44, v50, sizeof(v44)); /*0x1008c7248*/
    qmemcpy(a1 + 1, v44, 0x58u); /*0x1008c7257*/
    *a1 = 10; /*0x1008c725a*/
    return v50; /*0x1008c7261*/
  }
  v54 = a5; /*0x1008c7266*/
  qmemcpy(v50, v43, sizeof(v50)); /*0x1008c7280*/
  qmemcpy(v44, v50, sizeof(v44)); /*0x1008c7295*/
  qmemcpy(v43, v44, sizeof(v43)); /*0x1008c72a7*/
  if ( !HIDWORD(v43[5]) ) /*0x1008c72b3*/
    goto LABEL_24; /*0x1008c72b3*/
  if ( v43[2] <= (unsigned __int64)HIDWORD(v43[5]) ) /*0x1008c72ca*/
  {
    if ( v43[2] != HIDWORD(v43[5]) ) /*0x1008c72e5*/
LABEL_6:
      core::str::slice_error_fail::h480e51fbd8b15eba(v43[1], v43[2], 0, HIDWORD(v43[5]), &off_10197DA50); /*0x1008c72d2*/
  }
  else if ( *(char *)(v43[1] + HIDWORD(v43[5])) <= -65 ) /*0x1008c72d0*/
  {
    goto LABEL_6; /*0x1008c72d0*/
  }
  if ( HIDWORD(v43[5]) != 4 /*0x1008c7375*/
    || memcmp((const void *)v43[1], "httpSomeInitBodybody", 4u)
    || (v10 = url::Url::host_str::h951633b861c322f2(v43), v10 == 0 || v11 != 9)
    || *(_QWORD *)v10 ^ 0x2E302E302E373231LL | *(unsigned __int8 *)(v10 + 8) ^ 0x31LL
    || !LOWORD(v43[5])
    || (v12 = (_BYTE *)url::Url::path::hdacd300d547f5011(v43), v13) && (v13 != 1 || *v12 != 47) )
  {
LABEL_24:
    v52 = v42; /*0x1008c746a*/
    v53[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1008c7478*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, &unk_1017D0BEF, &v52); /*0x1008c7494*/
    a1[3] = v41[2]; /*0x1008c74a0*/
    result = (_QWORD *)v41[0]; /*0x1008c74a4*/
    a1[2] = v41[1]; /*0x1008c74b2*/
    a1[1] = result; /*0x1008c74b6*/
LABEL_25:
    *a1 = 10; /*0x1008c74ba*/
    goto LABEL_26; /*0x1008c74ba*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v50, a2[7], a2[8]); /*0x1008c738a*/
  if ( v50[0] == 0x8000000000000000LL ) /*0x1008c73aa*/
  {
    v56 = (_QWORD *)v50[1]; /*0x1008c73b0*/
    v44[0] = &v56; /*0x1008c73b8*/
    v44[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008c73c6*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v52, &unk_1017D0CA5, v44); /*0x1008c73e2*/
    v14 = v52; /*0x1008c73e7*/
    v15 = v53[0]; /*0x1008c73ee*/
    v16 = v53[1]; /*0x1008c73f5*/
    result = v56; /*0x1008c73fc*/
    if ( ((unsigned __int8)v56 & 3) == 1 ) /*0x1008c7408*/
    {
      v60 = (char *)v56 - 1; /*0x1008c740e*/
      v54 = *(_QWORD **)((char *)v56 - 1); /*0x1008c7416*/
      v17 = *(_QWORD *)((char *)v56 + 7); /*0x1008c741a*/
      if ( *(_QWORD *)v17 ) /*0x1008c741e*/
        (*(void (__fastcall **)(_QWORD *))v17)(v54); /*0x1008c742a*/
      v18 = *(_QWORD *)(v17 + 8); /*0x1008c7430*/
      if ( v18 ) /*0x1008c7437*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v18, *(_QWORD *)(v17 + 16)); /*0x1008c743d*/
      result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 24, 8); /*0x1008c7450*/
    }
    a1[1] = v14; /*0x1008c7455*/
    a1[2] = v15; /*0x1008c7459*/
    a1[3] = v16; /*0x1008c745d*/
    goto LABEL_25; /*0x1008c7461*/
  }
  v60 = (char *)v50[1]; /*0x1008c74f0*/
  v55 = v50[0]; /*0x1008c74f4*/
  v62 = (_QWORD *)v50[2]; /*0x1008c74ff*/
  v44[0] = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb22461ad3f1bdb68(a3, a4, 47); /*0x1008c7513*/
  v44[1] = v19; /*0x1008c751a*/
  v50[0] = v44; /*0x1008c7521*/
  v50[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x1008c752f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v52, &unk_1017C8333, v50); /*0x1008c754b*/
  v61 = v52; /*0x1008c7557*/
  v20 = v53[0]; /*0x1008c755b*/
  v21 = v62; /*0x1008c757b*/
  codexmate_lib::core::relay::codex_writer::router_http_contract_issues::h1d0482da3c1d978f( /*0x1008c7587*/
    v50,
    v60,
    v62,
    v53[0],
    v53[1],
    1);
  if ( LODWORD(v50[0]) == 1 ) /*0x1008c759a*/
  {
    v44[2] = v50[3]; /*0x1008c75a4*/
    v44[1] = v50[2]; /*0x1008c75b2*/
    v44[0] = v50[1]; /*0x1008c75b9*/
    codexmate_lib::core::relay::router_reconciler::verify_managed_auth_commit_boundary::_$u7b$$u7b$closure$u7d$$u7d$::h5cc8e1119f649c36( /*0x1008c75ce*/
      &v52,
      v44);
    result = v52; /*0x1008c75d3*/
    v56 = (_QWORD *)v53[0]; /*0x1008c75e1*/
    v57 = (__int64 (__fastcall *)())v53[1]; /*0x1008c75ec*/
    v58 = v53[2]; /*0x1008c75f7*/
    a1[11] = v53[10]; /*0x1008c75ff*/
    a1[10] = v53[9]; /*0x1008c7607*/
    a1[9] = v53[8]; /*0x1008c7612*/
    a1[8] = v53[7]; /*0x1008c761d*/
    a1[7] = v53[6]; /*0x1008c7628*/
    a1[6] = v53[5]; /*0x1008c7633*/
    a1[5] = v53[4]; /*0x1008c763e*/
    a1[4] = v53[3]; /*0x1008c7649*/
    v46 = v58; /*0x1008c7651*/
    v22 = v56; /*0x1008c7658*/
    v45[1] = v57; /*0x1008c7660*/
    v45[0] = v56; /*0x1008c7667*/
    a1[2] = v57; /*0x1008c766e*/
    a1[1] = v22; /*0x1008c7672*/
    a1[3] = v46; /*0x1008c767d*/
    *a1 = result; /*0x1008c7681*/
    v23 = v61; /*0x1008c7684*/
LABEL_55:
    if ( v23 ) /*0x1008c7aaa*/
      result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v23, 1); /*0x1008c7ab7*/
    v33 = v55; /*0x1008c7abc*/
    if ( !v55 ) /*0x1008c7ac3*/
      goto LABEL_26; /*0x1008c7ac3*/
    v32 = v60; /*0x1008c7ace*/
    goto LABEL_59; /*0x1008c7ace*/
  }
  v47 = v50[1]; /*0x1008c7698*/
  v48 = v50[2]; /*0x1008c769f*/
  v49 = v50[3]; /*0x1008c76a6*/
  if ( v50[3] ) /*0x1008c76b0*/
  {
    alloc::str::join_generic_copy::h1b385c7941ba5aef(&v52, v48, v50[3], "; ", 2); /*0x1008c76d1*/
    v50[2] = v53[1]; /*0x1008c76dd*/
    v50[1] = v53[0]; /*0x1008c76f2*/
    v50[0] = v52; /*0x1008c76f9*/
    v52 = v50; /*0x1008c7700*/
    v53[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c770e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v40, &unk_1017D0BB7, &v52); /*0x1008c772a*/
    if ( v50[0] ) /*0x1008c7739*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[1], v50[0], 1); /*0x1008c7747*/
    a1[3] = v40[2]; /*0x1008c7753*/
    v24 = v40[0]; /*0x1008c7757*/
    a1[2] = v40[1]; /*0x1008c7765*/
    a1[1] = v24; /*0x1008c7769*/
    *a1 = 10; /*0x1008c776d*/
    v23 = v61; /*0x1008c7774*/
LABEL_54:
    result = (_QWORD *)core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hfb9bc898fb07c3b5(&v47); /*0x1008c7a9b*/
    goto LABEL_55; /*0x1008c7aa2*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v56, a2[73], a2[74], "codex_router_catalog.jsondebug--bundled", 25); /*0x1008c779c*/
  v59 = v20; /*0x1008c77bc*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h333bec88c4196129( /*0x1008c77c0*/
    &v52,
    v60,
    v21,
    "model_catalog_json",
    18);
  v62 = v52; /*0x1008c77cc*/
  if ( v52 == (_QWORD *)0x8000000000000000LL ) /*0x1008c77dd*/
  {
    v25 = v57; /*0x1008c77df*/
    v26 = v58; /*0x1008c77e3*/
LABEL_49:
    v50[0] = v25; /*0x1008c79f5*/
    v50[1] = v26; /*0x1008c79fc*/
    v52 = v50; /*0x1008c7a03*/
    v53[0] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008c7a11*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_1017D0B79, &v52); /*0x1008c7a2d*/
    a1[3] = v39[2]; /*0x1008c7a39*/
    v34 = v39[0]; /*0x1008c7a3d*/
    a1[2] = v39[1]; /*0x1008c7a4b*/
    a1[1] = v34; /*0x1008c7a4f*/
    *a1 = 10; /*0x1008c7a53*/
LABEL_50:
    v20 = v59; /*0x1008c7a5a*/
    v23 = v61; /*0x1008c7a62*/
    if ( 2LL * (_QWORD)v62 ) /*0x1008c7a66*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v62, 1); /*0x1008c7a7f*/
    if ( v56 ) /*0x1008c7a8b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v56, 1); /*0x1008c7a96*/
    goto LABEL_54; /*0x1008c7a96*/
  }
  v25 = v57; /*0x1008c77fa*/
  v26 = v58; /*0x1008c77fe*/
  v51 = v53[0]; /*0x1008c7809*/
  std::path::Path::components::he8b0f71a48373be5(v50, v53[0], v53[1]); /*0x1008c7810*/
  std::path::Path::components::he8b0f71a48373be5(&v52, v25, v26); /*0x1008c7822*/
  if ( !(unsigned __int8)_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5193f8baacc9df8f( /*0x1008c783c*/
                           v50,
                           &v52) )
    goto LABEL_49; /*0x1008c783c*/
  codexmate_lib::core::relay::codex_catalog::read_catalog_model_slugs::hb2ecb05eb98a3e4e(&v52, v25, v26); /*0x1008c784f*/
  v27 = v52; /*0x1008c7854*/
  v50[0] = v53[0]; /*0x1008c7862*/
  v50[1] = v53[1]; /*0x1008c7870*/
  v50[2] = v53[2]; /*0x1008c787e*/
  v50[3] = v53[3]; /*0x1008c788c*/
  v50[4] = v53[4]; /*0x1008c789a*/
  v50[5] = v53[5]; /*0x1008c78a8*/
  if ( v52 != (_QWORD *)11 ) /*0x1008c78b3*/
  {
    a1[11] = v53[10]; /*0x1008c7ae0*/
    a1[10] = v53[9]; /*0x1008c7ae8*/
    a1[9] = v53[8]; /*0x1008c7af3*/
    v35 = v53[6]; /*0x1008c7af7*/
    a1[8] = v53[7]; /*0x1008c7b05*/
    a1[7] = v35; /*0x1008c7b09*/
    a1[6] = v50[5]; /*0x1008c7b14*/
    a1[5] = v50[4]; /*0x1008c7b1f*/
    a1[4] = v50[3]; /*0x1008c7b2a*/
    a1[3] = v50[2]; /*0x1008c7b35*/
    v36 = v50[0]; /*0x1008c7b39*/
    a1[2] = v50[1]; /*0x1008c7b47*/
    a1[1] = v36; /*0x1008c7b4b*/
    *a1 = v27; /*0x1008c7b4f*/
    goto LABEL_50; /*0x1008c7b52*/
  }
  v44[0] = v50[0]; /*0x1008c78c7*/
  v44[1] = v50[1]; /*0x1008c78ce*/
  v44[2] = v50[2]; /*0x1008c78dc*/
  v44[3] = v50[3]; /*0x1008c78ea*/
  v44[4] = v50[4]; /*0x1008c78f8*/
  v44[5] = v50[5]; /*0x1008c7906*/
  v28 = (_QWORD *)v54[1]; /*0x1008c7911*/
  v29 = &v52; /*0x1008c792d*/
  codexmate_lib::core::relay::codex_catalog::no_account_slot_slugs::he9e07b17926d2ef6( /*0x1008c7934*/
    &v52,
    (__int64)v28,
    v54[2],
    v54[4],
    v54[5],
    v54[7],
    v54[8]);
  if ( !v53[2]
    || (v29 = (_QWORD **)v44,
        v28 = &v52,
        !(unsigned __int8)_$LT$std..collections..hash..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h2f8b630519fdd337(
                            v44,
                            &v52)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v28, v30, v31); /*0x1008c7b57*/
    v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(78, 1); /*0x1008c7b66*/
    if ( !v37 ) /*0x1008c7b6e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 78); /*0x1008c7bc9*/
    v38 = v37; /*0x1008c7b70*/
    memcpy(v37, "managed auth refused: no-account catalog does not match the active relay slots; ", 0x4Eu);
    *a1 = 10; /*0x1008c7b87*/
    a1[1] = 78; /*0x1008c7b8e*/
    a1[2] = v38; /*0x1008c7b96*/
    a1[3] = 78; /*0x1008c7b9a*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(&v52); /*0x1008c7ba9*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(v44); /*0x1008c7bb5*/
    goto LABEL_50; /*0x1008c7bba*/
  }
  *a1 = 11; /*0x1008c7962*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(&v52); /*0x1008c7970*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9e80456f59c0a8d2(v44); /*0x1008c797c*/
  if ( v62 ) /*0x1008c7986*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v62, 1); /*0x1008c7998*/
  if ( v56 ) /*0x1008c79a4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v56, 1); /*0x1008c79ae*/
  result = (_QWORD *)core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hfb9bc898fb07c3b5(&v47); /*0x1008c79ba*/
  if ( v61 ) /*0x1008c79c4*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v61, 1); /*0x1008c79d3*/
  if ( !v55 ) /*0x1008c79dd*/
    goto LABEL_26; /*0x1008c79dd*/
  v32 = v60; /*0x1008c79e8*/
  v33 = v55; /*0x1008c79ec*/
LABEL_59:
  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v33, 1); /*0x1008c7ad2*/
LABEL_26:
  if ( v43[0] ) /*0x1008c74cb*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43[1], v43[0], 1); /*0x1008c74d9*/
  return result; /*0x1008c74de*/
}