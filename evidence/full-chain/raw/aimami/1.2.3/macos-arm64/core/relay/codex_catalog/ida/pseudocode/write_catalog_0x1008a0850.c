// __ZN13codexmate_lib4core5relay13codex_catalog13write_catalog @ 0x1008a0850 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::write_catalog::hab70531d01891a9e(
        _QWORD *a1,
        _QWORD *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        char a7)
{
  _QWORD *v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // rbx
  __int64 v14; // r14
  __int64 v15; // r13
  void *v16; // r12
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v25; // [rsp+10h] [rbp-D0h] BYREF
  __int64 (__fastcall *v26)(_QWORD, _QWORD); // [rsp+18h] [rbp-C8h]
  __int64 v27; // [rsp+20h] [rbp-C0h]
  __int64 v28; // [rsp+28h] [rbp-B8h]
  __int64 v29; // [rsp+30h] [rbp-B0h]
  __int64 v30; // [rsp+38h] [rbp-A8h]
  __int64 v31; // [rsp+40h] [rbp-A0h]
  __int64 v32; // [rsp+48h] [rbp-98h]
  __int64 v33; // [rsp+50h] [rbp-90h]
  __int64 v34; // [rsp+58h] [rbp-88h]
  __int64 v35; // [rsp+60h] [rbp-80h]
  __int64 v36; // [rsp+68h] [rbp-78h]
  __int64 v37; // [rsp+70h] [rbp-70h] BYREF
  void *v38; // [rsp+78h] [rbp-68h]
  size_t v39; // [rsp+80h] [rbp-60h]
  __int64 *v40; // [rsp+88h] [rbp-58h] BYREF
  __int64 (__fastcall *v41)(_QWORD, _QWORD); // [rsp+90h] [rbp-50h]
  __int64 v42; // [rsp+98h] [rbp-48h]
  __int64 v43; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-38h]
  _QWORD *v45; // [rsp+B0h] [rbp-30h]

  v44 = a6; /*0x1008a0864*/
  v10 = a1; /*0x1008a0874*/
  v11 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x1008a087a*/
  if ( v11 ) /*0x1008a0882*/
  {
    *a1 = 2; /*0x1008a0884*/
    a1[1] = v11; /*0x1008a088b*/
    return v10; /*0x1008a088f*/
  }
  v45 = a1; /*0x1008a0894*/
  codexmate_lib::core::relay::codex_catalog::build_catalog_bytes::h5ba4a4ead3b3a8a5( /*0x1008a08b6*/
    (unsigned int)&v25,
    (_DWORD)a2,
    a3,
    a4,
    a5,
    v44,
    a7);
  v12 = v25; /*0x1008a08bb*/
  v13 = v26; /*0x1008a08c2*/
  v14 = v27; /*0x1008a08c9*/
  v15 = v28; /*0x1008a08d0*/
  if ( v25 != (_QWORD *)11 ) /*0x1008a08db*/
  {
    v10 = v45; /*0x1008a0a1a*/
    v45[11] = v36; /*0x1008a0a1e*/
    v10[10] = v35; /*0x1008a0a26*/
    v10[9] = v34; /*0x1008a0a31*/
    v10[8] = v33; /*0x1008a0a3c*/
    v10[7] = v32; /*0x1008a0a47*/
    v10[6] = v31; /*0x1008a0a52*/
    v22 = v29; /*0x1008a0a56*/
    v10[5] = v30; /*0x1008a0a64*/
    v10[4] = v22; /*0x1008a0a68*/
    v10[1] = v13; /*0x1008a0a6c*/
    v10[2] = v14; /*0x1008a0a70*/
    v10[3] = v15; /*0x1008a0a74*/
    *v10 = v12; /*0x1008a0a78*/
    return v10; /*0x1008a0a7b*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v37, a2[73], a2[74], "codex_router_catalog.json", 25); /*0x1008a0902*/
  v10 = v45; /*0x1008a0907*/
  v16 = v38; /*0x1008a090b*/
  v17 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v38, v39, v14, v15, 0); /*0x1008a091f*/
  if ( !v17 ) /*0x1008a0927*/
  {
    v10[3] = v39; /*0x1008a0a81*/
    v23 = v37; /*0x1008a0a85*/
    v10[2] = v38; /*0x1008a0a8d*/
    v10[1] = v23; /*0x1008a0a91*/
    *v10 = 11; /*0x1008a0a95*/
    if ( !v13 ) /*0x1008a0a9f*/
      return v10; /*0x1008a0a9f*/
LABEL_17:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x1008a0aa1*/
    return v10; /*0x1008a0aac*/
  }
  v43 = v17; /*0x1008a092d*/
  v40 = &v43; /*0x1008a0935*/
  v41 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008a0940*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v25, &unk_1017C5E7F, &v40); /*0x1008a0956*/
  v40 = v25; /*0x1008a0969*/
  v41 = v26; /*0x1008a096d*/
  v42 = v27; /*0x1008a0978*/
  if ( (v43 & 3) == 1 ) /*0x1008a0988*/
  {
    v44 = v43 - 1; /*0x1008a098e*/
    v18 = *(_QWORD *)(v43 - 1); /*0x1008a0992*/
    v19 = *(_QWORD *)(v43 + 7); /*0x1008a0996*/
    if ( *(_QWORD *)v19 ) /*0x1008a099a*/
      (*(void (__fastcall **)(__int64))v19)(v18); /*0x1008a09a5*/
    v20 = *(_QWORD *)(v19 + 8); /*0x1008a09a7*/
    if ( v20 ) /*0x1008a09ae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16)); /*0x1008a09b7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 24, 8); /*0x1008a09ca*/
    v10 = v45; /*0x1008a09cf*/
  }
  v10[3] = v42; /*0x1008a09d7*/
  v21 = v40; /*0x1008a09db*/
  v10[2] = v41; /*0x1008a09e3*/
  v10[1] = v21; /*0x1008a09e7*/
  *v10 = 10; /*0x1008a09eb*/
  if ( v37 ) /*0x1008a09f9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v37, 1); /*0x1008a0a03*/
  if ( v13 ) /*0x1008a0a0b*/
    goto LABEL_17; /*0x1008a0a0b*/
  return v10; /*0x1008a0ab4*/
}