// __ZN13codexmate_lib4core5relay5quota25format_with_optional_unit @ 0x1008ae640 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::quota::format_with_optional_unit::hf36850b8f654e2a9(
        _QWORD *a1,
        unsigned __int64 a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-50h]
  __int64 v14; // [rsp+28h] [rbp-48h]
  __int64 *v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+38h] [rbp-38h]
  _QWORD *v17; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall *v18)(); // [rsp+48h] [rbp-28h]

  codexmate_lib::core::relay::quota::format_number_like::ha299b15e648e281c((__int64)&v12, a2, a3); /*0x1008ae65f*/
  if ( !a4 /*0x1008ae67d*/
    || (v7 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a4, a5), v7 == nullptr
                                                                                              || v8 == 0) )
  {
    a1[2] = v14; /*0x1008ae68a*/
    v9 = v12; /*0x1008ae68e*/
    a1[1] = v13; /*0x1008ae696*/
    *a1 = v9; /*0x1008ae69a*/
    return a1; /*0x1008ae69d*/
  }
  if ( v8 == 1 ) /*0x1008ae6a6*/
  {
    if ( *v7 == 36 ) /*0x1008ae75f*/
      goto LABEL_14; /*0x1008ae75f*/
  }
  else if ( v8 == 3 ) /*0x1008ae6b0*/
  {
    if ( *(_WORD *)v7 ^ 0x5355 | (unsigned __int8)v7[2] ^ 0x44 && *(_WORD *)v7 ^ 0x7375 | (unsigned __int8)v7[2] ^ 0x64 ) /*0x1008ae6df*/
    {
      if ( !(*(_WORD *)v7 ^ 0x4E43 | (unsigned __int8)v7[2] ^ 0x59) /*0x1008ae733*/
        || !(*(_WORD *)v7 ^ 0x4D52 | (unsigned __int8)v7[2] ^ 0x42)
        || !(*(_WORD *)v7 ^ 0x6E63 | (unsigned __int8)v7[2] ^ 0x79)
        || !(*(_WORD *)v7 ^ 0x6D72 | (unsigned __int8)v7[2] ^ 0x62) )
      {
        v15 = &v12; /*0x1008ae738*/
        v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008ae743*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_846, &v15); /*0x1008ae755*/
        goto LABEL_16; /*0x1008ae75a*/
      }
      goto LABEL_15; /*0x1008ae736*/
    }
LABEL_14:
    v15 = &v12; /*0x1008ae761*/
    v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008ae76c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_845, &v15); /*0x1008ae77e*/
    goto LABEL_16; /*0x1008ae783*/
  }
LABEL_15:
  v11[0] = v7; /*0x1008ae785*/
  v11[1] = v8; /*0x1008ae789*/
  v15 = &v12; /*0x1008ae78d*/
  v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008ae798*/
  v17 = v11; /*0x1008ae7a0*/
  v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008ae7ab*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_751, &v15); /*0x1008ae7bd*/
LABEL_16:
  if ( v12 ) /*0x1008ae7c9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x1008ae7d4*/
  return a1; /*0x1008ae7dc*/
}