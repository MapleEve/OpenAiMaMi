// __ZN13codexmate_lib4core5relay16codex_diagnostic21fix_catalog_integrity @ 0x1004e98f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_catalog_integrity::h32467177c4c7cf47(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD *, __int64))
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10[9]; // [rsp+0h] [rbp-F0h] BYREF
  _QWORD v11[13]; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-40h] BYREF
  __int64 v13; // [rsp+B8h] [rbp-38h]
  __int64 v14; // [rsp+C0h] [rbp-30h]

  result = a6(v11, a5); /*0x1004e991a*/
  if ( LODWORD(v11[0]) == 11 ) /*0x1004e9924*/
  {
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h322ab894fde71630( /*0x1004e993d*/
      &v12,
      *(_QWORD *)(a4 + 8),
      *(_QWORD *)(a4 + 8) + 232LL * *(_QWORD *)(a4 + 16));
    v9 = v13; /*0x1004e9942*/
    codexmate_lib::core::relay::codex_diagnostic::check_catalog_integrity::h34bf487dee059d0c(v11, a2, a3, a4, v13, v14); /*0x1004e995d*/
    result = codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hbdd9e58b4320b7fd( /*0x1004e9989*/
               v10,
               &anon_92869709a5e99ce1936aa4e326b6c562_441,
               0x11u,
               v11,
               &unk_1015FCE8E,
               0x17u);
    qmemcpy(a1 + 1, v10, 0x48u); /*0x1004e999e*/
    *a1 = 11; /*0x1004e99a1*/
    if ( v12 ) /*0x1004e99af*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 8 * v12, 8); /*0x1004e99bd*/
  }
  else
  {
    qmemcpy(a1, v11, 0x60u); /*0x1004e99d3*/
  }
  return result; /*0x1004e99d6*/
}