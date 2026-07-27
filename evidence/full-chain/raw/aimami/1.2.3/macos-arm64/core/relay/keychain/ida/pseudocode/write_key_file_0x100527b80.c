// __ZN13codexmate_lib4core5relay8keychain14write_key_file @ 0x100527b80 | 基线 same-set
double __fastcall codexmate_lib::core::relay::keychain::write_key_file::h73e6c3aba7b96586(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  size_t v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rsi
  double result; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // [rsp+8h] [rbp-A8h] BYREF
  void *v29; // [rsp+10h] [rbp-A0h]
  size_t __n; // [rsp+18h] [rbp-98h]
  _QWORD *v31; // [rsp+20h] [rbp-90h] BYREF
  void *v32; // [rsp+28h] [rbp-88h]
  size_t v33; // [rsp+30h] [rbp-80h]
  __int64 v34; // [rsp+38h] [rbp-78h]
  _QWORD v35[2]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v36; // [rsp+50h] [rbp-60h] BYREF
  __int64 v37; // [rsp+58h] [rbp-58h]
  __int64 v38; // [rsp+60h] [rbp-50h]
  __int64 v39; // [rsp+68h] [rbp-48h] BYREF
  __int64 v40; // [rsp+70h] [rbp-40h]
  __int64 v41; // [rsp+78h] [rbp-38h]
  void *__src; // [rsp+80h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v28, a2, a3, "keysNULLUser.gitAuth", 4); /*0x100527bb4*/
  LOWORD(v36) = 511; /*0x100527bb9*/
  BYTE2(v36) = 1; /*0x100527bbf*/
  v10 = __n; /*0x100527bca*/
  __src = v29; /*0x100527bd5*/
  v11 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v36, v29, __n); /*0x100527bdc*/
  if ( v11 ) /*0x100527be4*/
  {
    v35[0] = v11; /*0x100527bea*/
    v31 = v35; /*0x100527bf2*/
    v32 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100527c00*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v36, &unk_1017C181C, &v31); /*0x100527c19*/
    if ( (v35[0] & 3) == 1 ) /*0x100527c2a*/
    {
      v12 = v35[0] - 1LL; /*0x100527c2c*/
      v13 = *(_QWORD *)(v35[0] - 1LL); /*0x100527c30*/
      v14 = *(_QWORD *)(v35[0] + 7LL); /*0x100527c34*/
      if ( *(_QWORD *)v14 ) /*0x100527c38*/
        (*(void (__fastcall **)(_QWORD))v14)(*(_QWORD *)(v35[0] - 1LL)); /*0x100527c44*/
      v15 = *(_QWORD *)(v14 + 8); /*0x100527c46*/
      if ( v15 ) /*0x100527c4e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x100527c58*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 24, 8); /*0x100527c6a*/
    }
    a1[2] = v38; /*0x100527c73*/
    v17 = v36; /*0x100527c77*/
    a1[1] = v37; /*0x100527c7f*/
    *a1 = v17; /*0x100527c83*/
    goto LABEL_19; /*0x100527c86*/
  }
  v18 = std::sys::fs::set_permissions::hfb7e5143e400282f(__src, v10); /*0x100527c97*/
  if ( (v18 & 3) == 1 ) /*0x100527ca4*/
  {
    v34 = v18 - 1; /*0x100527de3*/
    v40 = *(_QWORD *)(v18 - 1); /*0x100527deb*/
    v41 = *(_QWORD *)(v18 + 7); /*0x100527df3*/
    if ( *(_QWORD *)v41 ) /*0x100527df7*/
      (*(void (__fastcall **)(__int64))v41)(v40); /*0x100527e03*/
    v27 = *(_QWORD *)(v41 + 8); /*0x100527e0d*/
    if ( v27 ) /*0x100527e14*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v27, *(_QWORD *)(v41 + 16)); /*0x100527e1a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 24, 8); /*0x100527e2d*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v31, __src, v10, a4, a5); /*0x100527cbe*/
  v19 = v32; /*0x100527cc7*/
  v20 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v32, v33, a6, a7, 1); /*0x100527cde*/
  if ( !v20 ) /*0x100527ce6*/
  {
    *a1 = 0x8000000000000000LL; /*0x100527dcc*/
    v26 = v31; /*0x100527dcf*/
    if ( !v31 ) /*0x100527dd9*/
      goto LABEL_19; /*0x100527dd9*/
LABEL_18:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v26, 1); /*0x100527d89*/
    goto LABEL_19; /*0x100527d91*/
  }
  v39 = v20; /*0x100527cec*/
  v35[0] = &v39; /*0x100527cf4*/
  v35[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100527cff*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v36, &unk_1017C1809, v35); /*0x100527d12*/
  if ( (v39 & 3) == 1 ) /*0x100527d23*/
  {
    v21 = v39 - 1; /*0x100527d25*/
    v22 = *(_QWORD *)(v39 - 1); /*0x100527d29*/
    v23 = *(_QWORD *)(v39 + 7); /*0x100527d2d*/
    if ( *(_QWORD *)v23 ) /*0x100527d31*/
      (*(void (__fastcall **)(_QWORD))v23)(*(_QWORD *)(v39 - 1)); /*0x100527d3d*/
    v24 = *(_QWORD *)(v23 + 8); /*0x100527d3f*/
    if ( v24 ) /*0x100527d46*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v24, *(_QWORD *)(v23 + 16)); /*0x100527d4f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8); /*0x100527d61*/
  }
  a1[2] = v38; /*0x100527d6a*/
  v25 = v36; /*0x100527d6e*/
  a1[1] = v37; /*0x100527d76*/
  *a1 = v25; /*0x100527d7a*/
  v26 = v31; /*0x100527d7d*/
  if ( v31 ) /*0x100527d87*/
    goto LABEL_18; /*0x100527d87*/
LABEL_19:
  if ( v28 ) /*0x100527da0*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v28, 1); /*0x100527dab*/
  return result; /*0x100527db0*/
}