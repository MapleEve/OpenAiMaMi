// __ZN13codexmate_lib8commands5voice33resolve_voice_vocabulary_app_info @ 0x100694140 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::resolve_voice_vocabulary_app_info::hb299d05c8c14623e(
        _QWORD *__dst,
        __int64 a2)
{
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rax
  size_t v12; // r14
  __int64 v13; // rsi
  __int64 v15; // r12
  __int64 v16; // r14
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  _QWORD __src[19]; // [rsp+8h] [rbp-1D8h] BYREF
  _QWORD v27[9]; // [rsp+A0h] [rbp-140h] BYREF
  _QWORD v28[2]; // [rsp+E8h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-E8h]
  __int64 v30; // [rsp+100h] [rbp-E0h]
  __int64 v31; // [rsp+108h] [rbp-D8h]
  __int64 v32; // [rsp+110h] [rbp-D0h]
  __int64 v33; // [rsp+118h] [rbp-C8h]
  __int64 v34; // [rsp+120h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+128h] [rbp-B8h]
  __int64 v36; // [rsp+130h] [rbp-B0h]
  __int64 v37; // [rsp+138h] [rbp-A8h]
  __int64 v38; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+148h] [rbp-98h]
  __int64 v40; // [rsp+150h] [rbp-90h]
  __int64 v41; // [rsp+158h] [rbp-88h] BYREF
  __int64 v42; // [rsp+160h] [rbp-80h]
  __int64 v43; // [rsp+168h] [rbp-78h]
  __int64 v44; // [rsp+170h] [rbp-70h]
  __int64 v45; // [rsp+178h] [rbp-68h] BYREF
  __int64 v46; // [rsp+180h] [rbp-60h]
  __int64 v47; // [rsp+188h] [rbp-58h]
  __int64 *v48; // [rsp+190h] [rbp-50h]
  char *v49; // [rsp+198h] [rbp-48h]
  __int64 v50; // [rsp+1A0h] [rbp-40h]
  __int64 v51; // [rsp+1A8h] [rbp-38h]
  _BYTE v52[41]; // [rsp+1B7h] [rbp-29h] BYREF

  v3 = *(char **)(a2 + 8); /*0x100694157*/
  v48 = (__int64 *)a2; /*0x10069415b*/
  v4 = *(_QWORD *)(a2 + 16); /*0x10069415f*/
  v49 = v3; /*0x100694163*/
  v5 = v4; /*0x100694167*/
  v6 = std::path::Path::extension::hbb56a39ecf8d3771(v3, v4); /*0x10069416a*/
  if ( !v6 /*0x1006941ad*/
    || (v3 = (char *)__src,
        v5 = v6,
        core::str::converts::from_utf8::hb32deb9559450f6e(__src, v6, v7),
        LODWORD(__src[0]) == 1)
    || __src[2] != 3
    || *(_WORD *)__src[1] ^ 0x7061 | *(unsigned __int8 *)(__src[1] + 2LL) ^ 0x70 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v5); /*0x1006941b6*/
    v8 = 27; /*0x1006941bb*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1006941cb*/
    if ( !v9 ) /*0x1006941d3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x100694624*/
    v10 = (_QWORD *)v9; /*0x1006941d9*/
    *(_QWORD *)(v9 + 16) = 0x94BAE5207070612ELL; /*0x1006941e6*/
    *(_QWORD *)(v9 + 8) = 0x20AAB8E480B8E4A9LL; /*0x1006941f4*/
    *(_QWORD *)v9 = 0x8BE68980E9B7AFE8LL; /*0x100694202*/
    *(_DWORD *)(v9 + 23) = -1466636396; /*0x100694206*/
    v11 = 27; /*0x10069420e*/
    goto LABEL_7; /*0x10069420e*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v34, v49, v4, "Contents/Info.plist", 19); /*0x100694279*/
  v15 = v35; /*0x10069427e*/
  v16 = v36; /*0x100694285*/
  v17 = __src; /*0x10069428c*/
  v18 = v35; /*0x100694293*/
  v50 = v35; /*0x100694299*/
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v35, v36); /*0x10069429d*/
  if ( LOBYTE(__src[0]) ) /*0x1006942a9*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x1006942be*/
    {
      v19 = __src[1] - 1LL; /*0x1006942c0*/
      v20 = *(_QWORD *)(__src[1] - 1LL); /*0x1006942c4*/
      v21 = *(_QWORD *)(__src[1] + 7LL); /*0x1006942c8*/
      if ( *(_QWORD *)v21 ) /*0x1006942cc*/
        (*(void (__fastcall **)(__int64))v21)(v20); /*0x1006942d8*/
      v22 = *(_QWORD *)(v21 + 8); /*0x1006942da*/
      if ( v22 ) /*0x1006942e1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x1006942ea*/
      v18 = 24; /*0x1006942ef*/
      v17 = (_QWORD *)v19; /*0x1006942f9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x1006942fc*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v18); /*0x100694301*/
    v8 = 29; /*0x100694306*/
    v23 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x100694316*/
    if ( !v23 ) /*0x10069431e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x100694635*/
    v10 = v23; /*0x100694324*/
    *(_QWORD *)((char *)v23 + 21) = 0x7473696C702E6F66LL; /*0x100694331*/
    v23[2] = 0x2E6F666E492091B0LL; /*0x10069433f*/
    v23[1] = 0xE5BABCE7A894E794LL; /*0x10069434d*/
    *v23 = 0xBAE58980E98089E6LL; /*0x10069435b*/
    v24 = 29; /*0x10069435f*/
    v25 = v34; /*0x100694364*/
    if ( !v34 ) /*0x10069436e*/
      goto LABEL_21; /*0x10069436e*/
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v25, 1); /*0x100694370*/
LABEL_21:
    v11 = v24; /*0x10069437e*/
LABEL_7:
    v12 = v8; /*0x100694213*/
    goto LABEL_8; /*0x100694213*/
  }
  codexmate_lib::commands::voice::read_plist_value::h6f3f7fb94fd4667d( /*0x1006943a0*/
    __src,
    v15,
    v16,
    (__int64)"CFBundleIdentifierCFBundleDisplayName",
    18);
  v51 = __src[1]; /*0x1006943ac*/
  v10 = (_QWORD *)__src[2]; /*0x1006943b0*/
  v8 = __src[3]; /*0x1006943b7*/
  if ( LOBYTE(__src[0]) ) /*0x1006943c5*/
  {
    v24 = v51; /*0x1006943c7*/
    v25 = v34; /*0x1006943cb*/
    if ( !v34 ) /*0x1006943d5*/
      goto LABEL_21; /*0x1006943d5*/
    goto LABEL_20; /*0x1006943d5*/
  }
  codexmate_lib::commands::voice::read_plist_value::h6f3f7fb94fd4667d( /*0x1006943f4*/
    &v41,
    v50,
    v16,
    (__int64)"CFBundleDisplayName",
    19);
  if ( (_DWORD)v41 == 1 /*0x100694424*/
    && (codexmate_lib::commands::voice::resolve_macos_app_info::_$u7b$$u7b$closure$u7d$$u7d$::h96ac157cb0efc2bd(
          &v41,
          v50,
          v16,
          v42,
          v43),
        (_DWORD)v41 == 1) )
  {
    codexmate_lib::commands::voice::resolve_macos_app_info::_$u7b$$u7b$closure$u7d$$u7d$::h85bef13235bb2ad4( /*0x10069443c*/
      (size_t *)&v38,
      v49,
      v4,
      v42,
      v43);
  }
  else
  {
    v40 = v44; /*0x100694447*/
    v39 = v43; /*0x100694456*/
    v38 = v42; /*0x10069445d*/
  }
  v12 = v38; /*0x100694464*/
  v37 = v39; /*0x100694472*/
  v28[0] = v49; /*0x10069447d*/
  v28[1] = v4; /*0x100694484*/
  v45 = 0; /*0x10069448b*/
  v46 = 1; /*0x100694493*/
  v47 = 0; /*0x10069449b*/
  __src[2] = 1610612768; /*0x1006944a3*/
  __src[0] = &v45; /*0x1006944b2*/
  __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006944c0*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v28, __src) ) /*0x1006944d5*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100694613*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      v52,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v31 = v45; /*0x1006944f1*/
  v32 = v46; /*0x1006944f8*/
  v33 = v47; /*0x100694503*/
  v29 = v39; /*0x100694511*/
  v30 = v40; /*0x100694518*/
  if ( v34 ) /*0x100694529*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v34, 1); /*0x100694534*/
  if ( v51 != 0x8000000000000000LL ) /*0x10069454a*/
  {
    v27[0] = v51; /*0x100694557*/
    v27[1] = v10; /*0x10069455e*/
    v27[2] = v8; /*0x100694565*/
    v27[3] = v12; /*0x10069456c*/
    v27[4] = v29; /*0x100694581*/
    v27[5] = v30; /*0x100694588*/
    v27[6] = v31; /*0x100694596*/
    v27[7] = v32; /*0x1006945a4*/
    v27[8] = v33; /*0x1006945b2*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hb29085f7e85859aa((__int64)__src, v27); /*0x1006945c7*/
    memcpy(__dst, __src, 0x98u); /*0x1006945db*/
    v13 = *v48; /*0x1006945e4*/
    if ( !*v48 ) /*0x1006945e4*/
      return __dst; /*0x1006945ea*/
    goto LABEL_9; /*0x1006945ea*/
  }
  v11 = (__int64)v10; /*0x10069454c*/
  v10 = (_QWORD *)v8; /*0x10069454f*/
LABEL_8:
  __dst[1] = v11; /*0x100694216*/
  __dst[2] = v10; /*0x10069421a*/
  __dst[3] = v12; /*0x10069421e*/
  *__dst = 0x8000000000000000LL; /*0x10069422c*/
  v13 = *v48; /*0x100694233*/
  if ( *v48 ) /*0x100694233*/
LABEL_9:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v13, 1); /*0x10069423b*/
  return __dst; /*0x10069424c*/
}