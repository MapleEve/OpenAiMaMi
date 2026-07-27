// __ZN13codexmate_lib8platform7process29reject_external_codex_writers @ 0x100365f30 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD *v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-40h]
  _QWORD *v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]

  v3 = a2[2]; /*0x100365f45*/
  if ( v3 ) /*0x100365f4c*/
  {
    v4 = a2[1]; /*0x100365f52*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v10, v4, v3, " | ps-ocodexmate_lib::platform::process", 3); /*0x100365f6d*/
    v15 = v12; /*0x100365f76*/
    v14 = v11; /*0x100365f82*/
    v13 = v10; /*0x100365f86*/
    v10 = &v13; /*0x100365f8e*/
    v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100365f99*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v9, &anon_b0ee9adff4519c22b647af231a5a39fa_1281, &v10); /*0x100365fac*/
    if ( v13 ) /*0x100365fb8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x100365fc3*/
    a1[3] = v9[2]; /*0x100365fcc*/
    v5 = v9[0]; /*0x100365fd1*/
    a1[2] = v9[1]; /*0x100365fd9*/
    a1[1] = v5; /*0x100365fde*/
    *a1 = 10; /*0x100365fe3*/
    v6 = (_QWORD *)(v4 + 8); /*0x100365feb*/
    do /*0x100366007*/
    {
      v7 = *(v6 - 1); /*0x100366009*/
      if ( v7 ) /*0x100366011*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v7, 1); /*0x10036601c*/
      v6 += 3; /*0x100366000*/
      --v3; /*0x100366004*/
    }
    while ( v3 ); /*0x100366007*/
    result = *a2; /*0x100366023*/
    if ( *a2 ) /*0x100366023*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24 * result, 8); /*0x10036603b*/
  }
  else
  {
    *a1 = 11; /*0x100366042*/
    result = *a2; /*0x10036604a*/
    if ( *a2 ) /*0x10036604a*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], 24 * result, 8); /*0x10036606f*/
  }
  return result; /*0x100366063*/
}