// __ZN13codexmate_lib4core12codex_config11update_text @ 0x100842d10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::codex_config::update_text::he68e9fad74444d83(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  _QWORD *v12; // rax
  char *v13; // r15
  __int64 v14; // rsi
  size_t v15; // r12
  size_t v16; // rbx
  _QWORD *v17; // rax
  char *v18; // r15
  size_t v19; // rcx
  const char *v20; // rcx
  _QWORD *v21; // rdi
  const char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rsi
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v31; // [rsp+0h] [rbp-120h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+8h] [rbp-118h]
  __int64 *v33; // [rsp+10h] [rbp-110h]
  __int64 (__fastcall *v34)(); // [rsp+18h] [rbp-108h]
  void *v35; // [rsp+20h] [rbp-100h]
  __int64 (__fastcall *v36)(); // [rsp+28h] [rbp-F8h]
  __int64 v37; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-E8h]
  _QWORD v39[2]; // [rsp+40h] [rbp-E0h] BYREF
  size_t v40; // [rsp+50h] [rbp-D0h]
  void *v41; // [rsp+58h] [rbp-C8h]
  _QWORD *v42; // [rsp+60h] [rbp-C0h] BYREF
  char *v43; // [rsp+68h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-B0h]
  size_t __n; // [rsp+78h] [rbp-A8h]
  const char *v46; // [rsp+80h] [rbp-A0h]
  __int64 v47; // [rsp+88h] [rbp-98h]
  __int64 v48; // [rsp+90h] [rbp-90h]
  char *v49; // [rsp+98h] [rbp-88h]
  __int64 v50; // [rsp+A0h] [rbp-80h]
  __int64 v51; // [rsp+A8h] [rbp-78h]
  void *v52; // [rsp+B0h] [rbp-70h]
  _QWORD *v53; // [rsp+B8h] [rbp-68h]
  __int64 v54; // [rsp+C0h] [rbp-60h] BYREF
  char *v55; // [rsp+C8h] [rbp-58h]
  char *v56; // [rsp+D0h] [rbp-50h]
  void *__s2; // [rsp+D8h] [rbp-48h]
  void *__s1; // [rsp+E0h] [rbp-40h]
  void *v59; // [rsp+E8h] [rbp-38h]
  _QWORD *v60; // [rsp+F0h] [rbp-30h]

  v38 = a6; /*0x100842d24*/
  v6 = a1; /*0x100842d2b*/
  v39[0] = a4; /*0x100842d2e*/
  v39[1] = a5; /*0x100842d35*/
  v41 = a2; /*0x100842d3c*/
  v40 = a3; /*0x100842d46*/
  v7 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x100842d50*/
  if ( v7 ) /*0x100842d58*/
  {
    LOWORD(v42) = 511; /*0x100842d5a*/
    BYTE2(v42) = 1; /*0x100842d63*/
    v9 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v42, v7, v8); /*0x100842d74*/
    if ( v9 ) /*0x100842d7c*/
    {
      *a1 = 2; /*0x100842d7e*/
      a1[1] = v9; /*0x100842d85*/
      return v6; /*0x100842d89*/
    }
  }
  v10 = 1; /*0x100842d8e*/
  v60 = a1; /*0x100842d94*/
  while ( 1 ) /*0x100842da0*/
  {
    v11 = v10 + 1; /*0x100842da0*/
    if ( v10 == 3 ) /*0x100842da8*/
      v11 = 3; /*0x100842da8*/
    v37 = v10; /*0x100842dac*/
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(&v42, v41, v40); /*0x100842dc8*/
    v12 = v42; /*0x100842dcd*/
    v13 = v43; /*0x100842dd4*/
    v14 = v44; /*0x100842ddb*/
    v15 = __n; /*0x100842de2*/
    if ( v42 != (_QWORD *)11 ) /*0x100842ded*/
    {
      v6 = v60; /*0x100843041*/
      v60[11] = v53; /*0x100843045*/
      v6[10] = v52; /*0x10084304d*/
      v6[9] = v51; /*0x100843055*/
      v6[8] = v50; /*0x10084305d*/
      v6[7] = v49; /*0x100843068*/
      v6[6] = v48; /*0x100843073*/
      v20 = v46; /*0x100843077*/
      v6[5] = v47; /*0x100843085*/
      v6[4] = v20; /*0x100843089*/
      v6[1] = v13; /*0x10084308d*/
      v6[2] = v14; /*0x100843091*/
      v6[3] = v15; /*0x100843095*/
      *v6 = v12; /*0x100843099*/
      return v6; /*0x10084309c*/
    }
    __s2 = (void *)v44; /*0x100842dfa*/
    v55 = v43; /*0x100842e08*/
    codexmate_lib::core::relay::codex_writer::compose_from_original::h499b644f0fb511a8( /*0x100842e0c*/
      (__int64)&v43,
      (void *)v44,
      __n,
      v38);
    v56 = v43; /*0x100842e18*/
    __s1 = (void *)v44; /*0x100842e23*/
    v16 = __n; /*0x100842e27*/
    if ( __n == v15 && !memcmp(__s1, __s2, v15) ) /*0x100842e45*/
    {
      *v60 = 11; /*0x10084310d*/
      goto LABEL_36; /*0x100843114*/
    }
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(&v42, v41, v40); /*0x100842e60*/
    v17 = v42; /*0x100842e65*/
    v18 = v43; /*0x100842e6c*/
    v59 = (void *)v44; /*0x100842e7a*/
    v19 = __n; /*0x100842e7e*/
    if ( v42 != (_QWORD *)11 ) /*0x100842e89*/
    {
      v21 = v60; /*0x1008430a5*/
      v60[11] = v53; /*0x1008430a9*/
      v21[10] = v52; /*0x1008430b1*/
      v21[9] = v51; /*0x1008430b9*/
      v21[8] = v50; /*0x1008430c1*/
      v21[7] = v49; /*0x1008430cc*/
      v21[6] = v48; /*0x1008430d7*/
      v22 = v46; /*0x1008430db*/
      v21[5] = v47; /*0x1008430e9*/
      v21[4] = v22; /*0x1008430ed*/
      v21[1] = v18; /*0x1008430f1*/
      v21[2] = v59; /*0x1008430f9*/
      v21[3] = v19; /*0x1008430fd*/
      *v21 = v17; /*0x100843101*/
      goto LABEL_36; /*0x100843104*/
    }
    if ( __n == v15 && !memcmp(v59, __s2, v15) ) /*0x100842e9f*/
      break; /*0x100842e9f*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100842eba*/
    {
      v31 = v39; /*0x100842ec7*/
      v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100842ed5*/
      v33 = &v37; /*0x100842ee3*/
      v34 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100842ef1*/
      v35 = &unk_101674A80; /*0x100842eff*/
      v36 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100842f06*/
      v48 = 2; /*0x100842f0d*/
      v49 = "codexmate_lib::core::codex_config"; /*0x100842f1f*/
      v50 = 33; /*0x100842f26*/
      v52 = &unk_1017C5943; /*0x100842f35*/
      v53 = &v31; /*0x100842f40*/
      v42 = nullptr; /*0x100842f44*/
      v43 = "codexmate_lib::core::codex_config"; /*0x100842f4f*/
      v44 = 33; /*0x100842f56*/
      __n = 0; /*0x100842f61*/
      v46 = "src/core/codex_config.rs"; /*0x100842f73*/
      v47 = 24; /*0x100842f7a*/
      v51 = 0x1B00000001LL; /*0x100842f8f*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v54, &v42); /*0x100842f9e*/
    }
    if ( v18 ) /*0x100842fa6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v18, 1); /*0x100842fb4*/
    if ( v56 ) /*0x100842fc0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v56, 1); /*0x100842fcb*/
    v6 = v60; /*0x100842fd7*/
    if ( v55 ) /*0x100842fdb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v55, 1); /*0x100842fe6*/
    if ( v10 != 3 ) /*0x100842fef*/
    {
      v10 = v11; /*0x100842ff1*/
      if ( v11 <= 3 ) /*0x100842ff8*/
        continue; /*0x100842ff8*/
    }
    v42 = v39; /*0x100843005*/
    v43 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100843013*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v6 + 1, &unk_1017C58FB, &v42); /*0x10084302c*/
    *v6 = 10; /*0x100843031*/
    return v6; /*0x100843038*/
  }
  v23 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100843134*/
          v41,
          v40,
          (__int64)__s1,
          v16,
          1);
  if ( v23 ) /*0x10084313c*/
  {
    v54 = v23; /*0x100843142*/
    v42 = v39; /*0x10084314d*/
    v43 = (char *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084315b*/
    v44 = (__int64)&v54; /*0x100843166*/
    __n = (size_t)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100843174*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v31, &unk_1017C59A2, &v42); /*0x100843190*/
    v42 = v31; /*0x1008431a3*/
    v43 = (char *)v32; /*0x1008431aa*/
    v44 = (__int64)v33; /*0x1008431b8*/
    if ( (v54 & 3) == 1 ) /*0x1008431cb*/
    {
      v24 = v54 - 1; /*0x1008431cd*/
      v25 = *(_QWORD *)(v54 - 1); /*0x1008431d1*/
      v26 = *(_QWORD *)(v54 + 7); /*0x1008431d5*/
      if ( *(_QWORD *)v26 ) /*0x1008431d9*/
        (*(void (__fastcall **)(__int64))v26)(v25); /*0x1008431e4*/
      v27 = *(_QWORD *)(v26 + 8); /*0x1008431e6*/
      if ( v27 ) /*0x1008431ed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v27, *(_QWORD *)(v26 + 16)); /*0x1008431f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24, 8); /*0x100843208*/
    }
    v28 = v60; /*0x100843214*/
    v60[3] = v44; /*0x100843218*/
    v29 = v42; /*0x10084321c*/
    v28[2] = v43; /*0x10084322a*/
    v28[1] = v29; /*0x10084322e*/
    *v28 = 10; /*0x100843237*/
    if ( !v18 ) /*0x10084323d*/
      goto LABEL_36; /*0x10084323d*/
  }
  else
  {
    *v60 = 11; /*0x1008432a0*/
    if ( !v18 ) /*0x1008432a6*/
      goto LABEL_36; /*0x1008432a6*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v18, 1); /*0x10084324b*/
LABEL_36:
  if ( v56 ) /*0x100843257*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v56, 1); /*0x100843262*/
  v6 = v60; /*0x10084326e*/
  if ( v55 ) /*0x100843272*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v55, 1); /*0x10084327d*/
  return v6; /*0x100843285*/
}