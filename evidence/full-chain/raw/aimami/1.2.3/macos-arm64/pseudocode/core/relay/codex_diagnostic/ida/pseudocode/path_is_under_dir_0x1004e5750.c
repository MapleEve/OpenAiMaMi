// __ZN13codexmate_lib4core5relay16codex_diagnostic17path_is_under_dir @ 0x1004e5750 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::path_is_under_dir::hbebf74f73253219f(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // r15
  __int64 *v7; // r14
  void *v8; // rbx
  size_t v9; // r15
  __int64 v10; // r12
  void *v11; // r13
  __int64 v12; // rsi
  _QWORD v14[2]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v15; // [rsp+10h] [rbp-70h] BYREF
  void *__s1; // [rsp+18h] [rbp-68h]
  size_t __n; // [rsp+20h] [rbp-60h]
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  void *__s2; // [rsp+30h] [rbp-50h]
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  void *v22; // [rsp+48h] [rbp-38h]
  size_t v23; // [rsp+50h] [rbp-30h]

  codexmate_lib::core::relay::codex_diagnostic::normalize_path_for_compare::h8f27ab8ddab37fc8(&v15, a1, a2); /*0x1004e5771*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v21, a3, a4); /*0x1004e5780*/
  v6 = v22; /*0x1004e5785*/
  v7 = &v18; /*0x1004e578d*/
  codexmate_lib::core::relay::codex_diagnostic::normalize_path_for_compare::h8f27ab8ddab37fc8(&v18, v22, v23); /*0x1004e5797*/
  if ( 2 * v21 ) /*0x1004e57a0*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v21, 1); /*0x1004e57c5*/
    v8 = __s1; /*0x1004e57ca*/
    v9 = __n; /*0x1004e57ce*/
    if ( __n != v20 ) /*0x1004e57d6*/
      goto LABEL_6; /*0x1004e57d6*/
  }
  else
  {
    v8 = __s1; /*0x1004e57ad*/
    v9 = __n; /*0x1004e57b1*/
    if ( __n != v20 ) /*0x1004e57b9*/
    {
LABEL_6:
      v14[0] = &v18; /*0x1004e57ef*/
      v14[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004e57fa*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v21, &unk_1017BF855, v14); /*0x1004e580d*/
      v10 = v21; /*0x1004e5812*/
      v11 = v22; /*0x1004e5816*/
      if ( v9 >= v23 ) /*0x1004e5821*/
      {
        LOBYTE(v7) = memcmp(v22, v8, v23) == 0; /*0x1004e583a*/
        if ( !v10 ) /*0x1004e5841*/
          goto LABEL_11; /*0x1004e5841*/
      }
      else
      {
        LODWORD(v7) = 0; /*0x1004e5823*/
        if ( !v21 ) /*0x1004e5829*/
        {
LABEL_11:
          v12 = v18; /*0x1004e5853*/
          if ( !v18 ) /*0x1004e585a*/
            goto LABEL_13; /*0x1004e585a*/
          goto LABEL_12; /*0x1004e585a*/
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x1004e584e*/
      goto LABEL_11; /*0x1004e584e*/
    }
  }
  if ( memcmp(v8, __s2, v9) ) /*0x1004e57e2*/
    goto LABEL_6; /*0x1004e57e9*/
  LOBYTE(v7) = 1; /*0x1004e5892*/
  v12 = v18; /*0x1004e5895*/
  if ( v18 ) /*0x1004e589c*/
LABEL_12:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v12, 1); /*0x1004e585c*/
LABEL_13:
  if ( v15 ) /*0x1004e5871*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v15, 1); /*0x1004e587b*/
  return (unsigned int)v7; /*0x1004e5883*/
}