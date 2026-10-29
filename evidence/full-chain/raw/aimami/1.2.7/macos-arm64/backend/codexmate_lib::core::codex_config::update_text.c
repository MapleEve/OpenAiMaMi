// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::codex_config::update_text::h015a02e9eacbd725; addr: 0x100429210; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:18Z
__int64 *__fastcall codexmate_lib::core::codex_config::update_text::h015a02e9eacbd725(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 *a6)
{
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 (__fastcall *v13)(); // r15
  __int64 v14; // rsi
  size_t v15; // r12
  size_t v16; // rbx
  _QWORD *v17; // rax
  __int64 (__fastcall *v18)(); // r15
  size_t v19; // rcx
  __int64 *v20; // rdi
  const char *v21; // rcx
  __int64 *v22; // rdi
  const char *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rbx
  _QWORD *v33; // [rsp+0h] [rbp-120h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+8h] [rbp-118h]
  __int64 *v35; // [rsp+10h] [rbp-110h]
  __int64 (__fastcall *v36)(); // [rsp+18h] [rbp-108h]
  void *v37; // [rsp+20h] [rbp-100h]
  __int64 (__fastcall *v38)(); // [rsp+28h] [rbp-F8h]
  __int64 v39; // [rsp+30h] [rbp-F0h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-E8h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-D4h]
  __int64 v42; // [rsp+50h] [rbp-D0h]
  __int64 v43; // [rsp+58h] [rbp-C8h]
  _QWORD *v44; // [rsp+60h] [rbp-C0h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+68h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+70h] [rbp-B0h]
  size_t __n; // [rsp+78h] [rbp-A8h]
  const char *v48; // [rsp+80h] [rbp-A0h]
  __int64 v49; // [rsp+88h] [rbp-98h]
  __int64 v50; // [rsp+90h] [rbp-90h]
  void *v51; // [rsp+98h] [rbp-88h]
  __int64 v52; // [rsp+A0h] [rbp-80h]
  __int64 v53; // [rsp+A8h] [rbp-78h]
  void *v54; // [rsp+B0h] [rbp-70h]
  _QWORD *v55; // [rsp+B8h] [rbp-68h]
  __int64 v56; // [rsp+C0h] [rbp-60h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+C8h] [rbp-58h]
  __int64 (__fastcall *v58)(); // [rsp+D0h] [rbp-50h]
  void *__s2; // [rsp+D8h] [rbp-48h]
  void *__s1; // [rsp+E0h] [rbp-40h]
  void *v61; // [rsp+E8h] [rbp-38h]
  __int64 *v62; // [rsp+F0h] [rbp-30h]

  v7 = a1; /*0x100429227*/
  v40[0] = a4; /*0x10042922a*/
  v40[1] = a5; /*0x100429231*/
  v43 = a2; /*0x100429238*/
  v42 = a3; /*0x100429242*/
  v8 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10042924c*/
  if ( v8 && (LOWORD(v44) = 511, BYTE2(v44) = 1, (v9 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v44, v8)) != 0) ) /*0x100429278*/
  {
    *a1 = 2; /*0x10042927a*/
    a1[1] = v9; /*0x100429281*/
  }
  else
  {
    v10 = 1; /*0x10042928a*/
    v41 = *a6; /*0x100429293*/
    v62 = a1; /*0x100429299*/
    while ( 1 ) /*0x1004292a0*/
    {
      v11 = v10 + 1; /*0x1004292a0*/
      if ( v10 == 3 ) /*0x1004292a8*/
        v11 = 3; /*0x1004292a8*/
      v39 = v10; /*0x1004292ac*/
      codexmate_lib::core::codex_config::read_text::h465a80863f0d5121(&v44, v43, v42); /*0x1004292c8*/
      v12 = v44; /*0x1004292cd*/
      v13 = v45; /*0x1004292d4*/
      v14 = v46; /*0x1004292db*/
      v15 = __n; /*0x1004292e2*/
      if ( v44 != (_QWORD *)11 ) /*0x1004292ed*/
      {
        v20 = v62; /*0x100429540*/
        v62[11] = (__int64)v55; /*0x100429544*/
        v20[10] = (__int64)v54; /*0x10042954c*/
        v20[9] = v53; /*0x100429554*/
        v20[8] = v52; /*0x10042955c*/
        v20[7] = (__int64)v51; /*0x100429567*/
        v20[6] = v50; /*0x100429572*/
        v21 = v48; /*0x100429576*/
        v20[5] = v49; /*0x100429584*/
        v20[4] = (__int64)v21; /*0x100429588*/
        v20[1] = (__int64)v13; /*0x10042958c*/
        v7 = v20; /*0x100429590*/
        v20[2] = v14; /*0x100429593*/
        v20[3] = v15; /*0x100429597*/
        *v20 = (__int64)v12; /*0x10042959b*/
        return v7; /*0x10042959e*/
      }
      __s2 = (void *)v46; /*0x1004292fa*/
      v57 = v45; /*0x100429307*/
      codexmate_lib::commands::system::compose_image_compat_flag::hf816507d1700e214(&v45, v46, __n, v41); /*0x10042930b*/
      v58 = v45; /*0x100429317*/
      __s1 = (void *)v46; /*0x100429322*/
      v16 = __n; /*0x100429326*/
      if ( __n == v15 && !memcmp(__s1, __s2, v15) ) /*0x100429344*/
      {
        *v62 = 11; /*0x10042960f*/
        goto LABEL_38; /*0x100429616*/
      }
      codexmate_lib::core::codex_config::read_text::h465a80863f0d5121(&v44, v43, v42); /*0x10042935f*/
      v17 = v44; /*0x100429364*/
      v18 = v45; /*0x10042936b*/
      v61 = (void *)v46; /*0x100429379*/
      v19 = __n; /*0x10042937d*/
      if ( v44 != (_QWORD *)11 ) /*0x100429388*/
      {
        v22 = v62; /*0x1004295a7*/
        v62[11] = (__int64)v55; /*0x1004295ab*/
        v22[10] = (__int64)v54; /*0x1004295b3*/
        v22[9] = v53; /*0x1004295bb*/
        v22[8] = v52; /*0x1004295c3*/
        v22[7] = (__int64)v51; /*0x1004295ce*/
        v22[6] = v50; /*0x1004295d9*/
        v23 = v48; /*0x1004295dd*/
        v22[5] = v49; /*0x1004295eb*/
        v22[4] = (__int64)v23; /*0x1004295ef*/
        v22[1] = (__int64)v18; /*0x1004295f3*/
        v22[2] = (__int64)v61; /*0x1004295fb*/
        v22[3] = v19; /*0x1004295ff*/
        *v22 = (__int64)v17; /*0x100429603*/
        goto LABEL_38; /*0x100429606*/
      }
      if ( __n == v15 && !memcmp(v61, __s2, v15) ) /*0x10042939e*/
        break; /*0x10042939e*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1004293b9*/
      {
        v33 = v40; /*0x1004293c6*/
        v34 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1004293d4*/
        v35 = &v39; /*0x1004293e2*/
        v36 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004293f0*/
        v37 = &unk_1016F2588; /*0x1004293fe*/
        v38 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100429405*/
        v50 = 2; /*0x10042940c*/
        v51 = &unk_1016F264E; /*0x10042941e*/
        v52 = 33; /*0x100429425*/
        v54 = &unk_1018F6AE9; /*0x100429434*/
        v55 = &v33; /*0x10042943f*/
        v44 = nullptr; /*0x100429443*/
        v45 = (__int64 (__fastcall *)())&unk_1016F264E; /*0x10042944e*/
        v46 = 33; /*0x100429455*/
        __n = 0; /*0x100429460*/
        v48 = "src/core/codex_config.rs"; /*0x100429472*/
        v49 = 24; /*0x100429479*/
        v53 = 0x2600000001LL; /*0x10042948e*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v56, &v44); /*0x10042949d*/
      }
      if ( v18 ) /*0x1004294a5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v18, 1); /*0x1004294b3*/
      if ( v58 ) /*0x1004294bf*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v58, 1); /*0x1004294ca*/
      v7 = v62; /*0x1004294d6*/
      if ( v57 ) /*0x1004294da*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v57, 1); /*0x1004294e5*/
      if ( v10 != 3 ) /*0x1004294ee*/
      {
        v10 = v11; /*0x1004294f0*/
        if ( v11 <= 3 ) /*0x1004294f7*/
          continue; /*0x1004294f7*/
      }
      v44 = v40; /*0x100429504*/
      v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100429512*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v7 + 1, &unk_1018F6AA1, &v44); /*0x10042952b*/
      *v7 = 10; /*0x100429530*/
      return v7; /*0x100429537*/
    }
    if ( (codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hba6c6a10ebc72e28(v43, v42, __s1, v16) /*0x100429637*/
        & 1) != 0 )
    {
      v56 = v24; /*0x10042963d*/
      v44 = v40; /*0x100429648*/
      v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100429656*/
      v46 = (__int64)&v56; /*0x100429661*/
      __n = (size_t)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10042966f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v33, &unk_1018F6B48, &v44); /*0x10042968b*/
      v44 = v33; /*0x10042969e*/
      v45 = v34; /*0x1004296a5*/
      v46 = (__int64)v35; /*0x1004296b3*/
      if ( (v56 & 3) == 1 ) /*0x1004296c6*/
      {
        v25 = v56 - 1; /*0x1004296c8*/
        v26 = *(_QWORD *)(v56 - 1); /*0x1004296cc*/
        v27 = *(_QWORD *)(v56 + 7); /*0x1004296d0*/
        if ( *(_QWORD *)v27 ) /*0x1004296d4*/
          (*(void (__fastcall **)(__int64))v27)(v26); /*0x1004296df*/
        v28 = *(_QWORD *)(v27 + 8); /*0x1004296e1*/
        if ( v28 ) /*0x1004296e8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x1004296f1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x100429703*/
      }
      v29 = v62; /*0x10042970f*/
      v62[3] = v46; /*0x100429713*/
      v30 = v44; /*0x100429717*/
      v29[2] = (__int64)v45; /*0x100429725*/
      v29[1] = (__int64)v30; /*0x100429729*/
      v31 = 10; /*0x10042972d*/
    }
    else
    {
      v31 = 11; /*0x100429734*/
      codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hd58b317faccf87e9(v24); /*0x10042973c*/
    }
    *v62 = v31; /*0x100429745*/
    if ( v18 ) /*0x10042974b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v18, 1); /*0x100429759*/
LABEL_38:
    if ( v58 ) /*0x100429765*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v58, 1); /*0x100429770*/
    v7 = v62; /*0x10042977c*/
    if ( v57 ) /*0x100429780*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v57, 1); /*0x10042978b*/
  }
  return v7; /*0x100429793*/
}