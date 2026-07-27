// __ZN13codexmate_lib4core5relay8keychain15delete_key_file @ 0x100527f40 | 基线 same-set
double __fastcall codexmate_lib::core::relay::keychain::delete_key_file::h82b77f1e4410ef89(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rbx
  double result; // xmm0_8
  void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rsi
  _QWORD v17[3]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  void *__src; // [rsp+28h] [rbp-58h]
  size_t __n; // [rsp+30h] [rbp-50h]
  __int64 *v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall *v22)(_QWORD, _QWORD); // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8(&v21, a2, a3, "keysNULLUser.gitAuth", 4); /*0x100527f6b*/
  v7 = v22; /*0x100527f70*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v18, v22, v23, a4, a5); /*0x100527f85*/
  if ( v21 ) /*0x100527f91*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v21, 1); /*0x100527f9b*/
  v9 = __src; /*0x100527fa0*/
  v10 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, __n); /*0x100527fab*/
  v11 = v10; /*0x100527fb0*/
  if ( !v10 ) /*0x100527fb6*/
  {
    *a1 = 0x8000000000000000LL; /*0x10052803e*/
    goto LABEL_15; /*0x100528041*/
  }
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v10) ) /*0x100527fbb*/
  {
    v24 = v11; /*0x100527fc4*/
    v21 = &v24; /*0x100527fcc*/
    v22 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100527fd7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &unk_1017C1830, &v21); /*0x100527fea*/
    a1[2] = v17[2]; /*0x100527ff3*/
    v12 = v17[0]; /*0x100527ff7*/
    a1[1] = v17[1]; /*0x100527fff*/
    *a1 = v12; /*0x100528003*/
    if ( (v24 & 3) != 1 ) /*0x100528012*/
      goto LABEL_15; /*0x100528012*/
    v13 = v24 - 1; /*0x100528018*/
    v14 = *(_QWORD *)(v24 - 1); /*0x10052801c*/
    v15 = *(_QWORD *)(v24 + 7); /*0x100528020*/
    if ( *(_QWORD *)v15 ) /*0x100528024*/
      (*(void (__fastcall **)(__int64))v15)(v14); /*0x100528030*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x10052804d*/
    if ( (v11 & 3) != 1 ) /*0x100528059*/
      goto LABEL_15; /*0x100528059*/
    v13 = v11 - 1; /*0x10052805e*/
    v14 = *(_QWORD *)(v11 - 1); /*0x100528061*/
    v15 = *(_QWORD *)(v11 + 7); /*0x100528065*/
    if ( *(_QWORD *)v15 ) /*0x100528069*/
      (*(void (__fastcall **)(__int64))v15)(v14); /*0x100528075*/
  }
  v16 = *(_QWORD *)(v15 + 8); /*0x100528077*/
  if ( v16 ) /*0x10052807e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x100528087*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24, 8); /*0x100528099*/
LABEL_15:
  if ( v18 ) /*0x1005280a5*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v18, 1); /*0x1005280af*/
  return result; /*0x1005280b4*/
}