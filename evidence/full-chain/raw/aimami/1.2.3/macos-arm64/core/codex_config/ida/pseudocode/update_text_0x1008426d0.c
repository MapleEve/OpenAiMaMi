// __ZN13codexmate_lib4core12codex_config11update_text @ 0x1008426d0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::codex_config::update_text::h5582eca463192a5c(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 *a6)
{
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  _QWORD *v13; // rax
  char *v14; // r15
  __int64 v15; // rsi
  size_t v16; // r12
  size_t v17; // rbx
  _QWORD *v18; // rax
  char *v19; // r15
  size_t v20; // rcx
  _QWORD *v21; // rdi
  const char *v22; // rcx
  _QWORD *v23; // rdi
  const char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rsi
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v33; // [rsp+0h] [rbp-120h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+8h] [rbp-118h]
  __int64 *v35; // [rsp+10h] [rbp-110h]
  __int64 (__fastcall *v36)(); // [rsp+18h] [rbp-108h]
  void *v37; // [rsp+20h] [rbp-100h]
  __int64 (__fastcall *v38)(); // [rsp+28h] [rbp-F8h]
  __int64 v39; // [rsp+30h] [rbp-F0h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-E8h] BYREF
  int v41; // [rsp+4Ch] [rbp-D4h]
  size_t v42; // [rsp+50h] [rbp-D0h]
  void *v43; // [rsp+58h] [rbp-C8h]
  _QWORD *v44; // [rsp+60h] [rbp-C0h] BYREF
  char *v45; // [rsp+68h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+70h] [rbp-B0h]
  size_t __n; // [rsp+78h] [rbp-A8h]
  const char *v48; // [rsp+80h] [rbp-A0h]
  __int64 v49; // [rsp+88h] [rbp-98h]
  __int64 v50; // [rsp+90h] [rbp-90h]
  char *v51; // [rsp+98h] [rbp-88h]
  __int64 v52; // [rsp+A0h] [rbp-80h]
  __int64 v53; // [rsp+A8h] [rbp-78h]
  void *v54; // [rsp+B0h] [rbp-70h]
  _QWORD *v55; // [rsp+B8h] [rbp-68h]
  __int64 v56; // [rsp+C0h] [rbp-60h] BYREF
  char *v57; // [rsp+C8h] [rbp-58h]
  char *v58; // [rsp+D0h] [rbp-50h]
  void *__s2; // [rsp+D8h] [rbp-48h]
  void *__s1; // [rsp+E0h] [rbp-40h]
  void *v61; // [rsp+E8h] [rbp-38h]
  _QWORD *v62; // [rsp+F0h] [rbp-30h]

  v7 = a1; /*0x1008426e7*/
  v40[0] = a4; /*0x1008426ea*/
  v40[1] = a5; /*0x1008426f1*/
  v43 = a2; /*0x1008426f8*/
  v42 = a3; /*0x100842702*/
  v8 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10084270c*/
  if ( v8 ) /*0x100842714*/
  {
    LOWORD(v44) = 511; /*0x100842716*/
    BYTE2(v44) = 1; /*0x10084271f*/
    v10 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v44, v8, v9); /*0x100842730*/
    if ( v10 ) /*0x100842738*/
    {
      *a1 = 2; /*0x10084273a*/
      a1[1] = v10; /*0x100842741*/
      return v7; /*0x100842745*/
    }
  }
  v11 = 1; /*0x10084274a*/
  v41 = *a6; /*0x100842753*/
  v62 = a1; /*0x100842759*/
  while ( 1 ) /*0x100842760*/
  {
    v12 = v11 + 1; /*0x100842760*/
    if ( v11 == 3 ) /*0x100842768*/
      v12 = 3; /*0x100842768*/
    v39 = v11; /*0x10084276c*/
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(&v44, v43, v42); /*0x100842788*/
    v13 = v44; /*0x10084278d*/
    v14 = v45; /*0x100842794*/
    v15 = v46; /*0x10084279b*/
    v16 = __n; /*0x1008427a2*/
    if ( v44 != (_QWORD *)11 ) /*0x1008427ad*/
    {
      v21 = v62; /*0x100842a00*/
      v62[11] = v55; /*0x100842a04*/
      v21[10] = v54; /*0x100842a0c*/
      v21[9] = v53; /*0x100842a14*/
      v21[8] = v52; /*0x100842a1c*/
      v21[7] = v51; /*0x100842a27*/
      v21[6] = v50; /*0x100842a32*/
      v22 = v48; /*0x100842a36*/
      v21[5] = v49; /*0x100842a44*/
      v21[4] = v22; /*0x100842a48*/
      v21[1] = v14; /*0x100842a4c*/
      v7 = v21; /*0x100842a50*/
      v21[2] = v15; /*0x100842a53*/
      v21[3] = v16; /*0x100842a57*/
      *v21 = v13; /*0x100842a5b*/
      return v7; /*0x100842a5e*/
    }
    __s2 = (void *)v46; /*0x1008427ba*/
    v57 = v45; /*0x1008427c7*/
    codexmate_lib::commands::system::compose_image_compat_flag::hd7b1c02b2fa2311b(&v45, v46, __n, v41); /*0x1008427cb*/
    v58 = v45; /*0x1008427d7*/
    __s1 = (void *)v46; /*0x1008427e2*/
    v17 = __n; /*0x1008427e6*/
    if ( __n == v16 && !memcmp(__s1, __s2, v16) ) /*0x100842804*/
    {
      *v62 = 11; /*0x100842acf*/
      goto LABEL_36; /*0x100842ad6*/
    }
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(&v44, v43, v42); /*0x10084281f*/
    v18 = v44; /*0x100842824*/
    v19 = v45; /*0x10084282b*/
    v61 = (void *)v46; /*0x100842839*/
    v20 = __n; /*0x10084283d*/
    if ( v44 != (_QWORD *)11 ) /*0x100842848*/
    {
      v23 = v62; /*0x100842a67*/
      v62[11] = v55; /*0x100842a6b*/
      v23[10] = v54; /*0x100842a73*/
      v23[9] = v53; /*0x100842a7b*/
      v23[8] = v52; /*0x100842a83*/
      v23[7] = v51; /*0x100842a8e*/
      v23[6] = v50; /*0x100842a99*/
      v24 = v48; /*0x100842a9d*/
      v23[5] = v49; /*0x100842aab*/
      v23[4] = v24; /*0x100842aaf*/
      v23[1] = v19; /*0x100842ab3*/
      v23[2] = v61; /*0x100842abb*/
      v23[3] = v20; /*0x100842abf*/
      *v23 = v18; /*0x100842ac3*/
      goto LABEL_36; /*0x100842ac6*/
    }
    if ( __n == v16 && !memcmp(v61, __s2, v16) ) /*0x10084285e*/
      break; /*0x10084285e*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100842879*/
    {
      v33 = v40; /*0x100842886*/
      v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100842894*/
      v35 = &v39; /*0x1008428a2*/
      v36 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008428b0*/
      v37 = &unk_101674A80; /*0x1008428be*/
      v38 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008428c5*/
      v50 = 2; /*0x1008428cc*/
      v51 = "codexmate_lib::core::codex_config"; /*0x1008428de*/
      v52 = 33; /*0x1008428e5*/
      v54 = &unk_1017C5943; /*0x1008428f4*/
      v55 = &v33; /*0x1008428ff*/
      v44 = nullptr; /*0x100842903*/
      v45 = "codexmate_lib::core::codex_config"; /*0x10084290e*/
      v46 = 33; /*0x100842915*/
      __n = 0; /*0x100842920*/
      v48 = "src/core/codex_config.rs"; /*0x100842932*/
      v49 = 24; /*0x100842939*/
      v53 = 0x1B00000001LL; /*0x10084294e*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v56, &v44); /*0x10084295d*/
    }
    if ( v19 ) /*0x100842965*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v19, 1); /*0x100842973*/
    if ( v58 ) /*0x10084297f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v58, 1); /*0x10084298a*/
    v7 = v62; /*0x100842996*/
    if ( v57 ) /*0x10084299a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v57, 1); /*0x1008429a5*/
    if ( v11 != 3 ) /*0x1008429ae*/
    {
      v11 = v12; /*0x1008429b0*/
      if ( v12 <= 3 ) /*0x1008429b7*/
        continue; /*0x1008429b7*/
    }
    v44 = v40; /*0x1008429c4*/
    v45 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008429d2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v7 + 1, &unk_1017C58FB, &v44); /*0x1008429eb*/
    *v7 = 10; /*0x1008429f0*/
    return v7; /*0x1008429f7*/
  }
  v25 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100842af6*/
          v43,
          v42,
          (__int64)__s1,
          v17,
          1);
  if ( v25 ) /*0x100842afe*/
  {
    v56 = v25; /*0x100842b04*/
    v44 = v40; /*0x100842b0f*/
    v45 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100842b1d*/
    v46 = (__int64)&v56; /*0x100842b28*/
    __n = (size_t)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100842b36*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33, &unk_1017C59A2, &v44); /*0x100842b52*/
    v44 = v33; /*0x100842b65*/
    v45 = (char *)v34; /*0x100842b6c*/
    v46 = (__int64)v35; /*0x100842b7a*/
    if ( (v56 & 3) == 1 ) /*0x100842b8d*/
    {
      v26 = v56 - 1; /*0x100842b8f*/
      v27 = *(_QWORD *)(v56 - 1); /*0x100842b93*/
      v28 = *(_QWORD *)(v56 + 7); /*0x100842b97*/
      if ( *(_QWORD *)v28 ) /*0x100842b9b*/
        (*(void (__fastcall **)(__int64))v28)(v27); /*0x100842ba6*/
      v29 = *(_QWORD *)(v28 + 8); /*0x100842ba8*/
      if ( v29 ) /*0x100842baf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16)); /*0x100842bb8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 24, 8); /*0x100842bca*/
    }
    v30 = v62; /*0x100842bd6*/
    v62[3] = v46; /*0x100842bda*/
    v31 = v44; /*0x100842bde*/
    v30[2] = v45; /*0x100842bec*/
    v30[1] = v31; /*0x100842bf0*/
    *v30 = 10; /*0x100842bf9*/
    if ( !v19 ) /*0x100842bff*/
      goto LABEL_36; /*0x100842bff*/
  }
  else
  {
    *v62 = 11; /*0x100842c62*/
    if ( !v19 ) /*0x100842c68*/
      goto LABEL_36; /*0x100842c68*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v19, 1); /*0x100842c0d*/
LABEL_36:
  if ( v58 ) /*0x100842c19*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v58, 1); /*0x100842c24*/
  v7 = v62; /*0x100842c30*/
  if ( v57 ) /*0x100842c34*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v57, 1); /*0x100842c3f*/
  return v7; /*0x100842c47*/
}