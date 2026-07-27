// __ZN13codexmate_lib4core5relay5quota15format_currency @ 0x1008ac9c0 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::relay::quota::format_currency::h2c6930e244df1375(
        signed __int64 *a1,
        const void *a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5)
{
  signed __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  signed __int64 v13; // rax
  _QWORD v15[2]; // [rsp+0h] [rbp-90h] BYREF
  signed __int64 *v16; // [rsp+10h] [rbp-80h]
  __int64 (__fastcall *v17)(); // [rsp+18h] [rbp-78h] BYREF
  __int64 v18; // [rsp+20h] [rbp-70h]
  __int64 v19; // [rsp+28h] [rbp-68h]
  signed __int64 *v20; // [rsp+30h] [rbp-60h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+38h] [rbp-58h]
  signed __int64 *v22; // [rsp+40h] [rbp-50h]
  __int64 (__fastcall *v23)(); // [rsp+48h] [rbp-48h]
  signed __int64 v24; // [rsp+50h] [rbp-40h] BYREF
  __int64 v25; // [rsp+58h] [rbp-38h]
  signed __int64 v26; // [rsp+60h] [rbp-30h]

  v8 = a1; /*0x1008ac9dd*/
  core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1008ac9e4*/
    &v20,
    a2,
    a3);
  if ( (_BYTE)v20 == 1 ) /*0x1008ac9ed*/
  {
    if ( a3 < 0 ) /*0x1008ac9f2*/
    {
      v9 = 0; /*0x1008ac9f4*/
      goto LABEL_4; /*0x1008ac9f4*/
    }
    v16 = a1; /*0x1008aca31*/
    if ( a3 ) /*0x1008aca35*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v20, a2); /*0x1008aca37*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1008aca44*/
      v9 = 1; /*0x1008aca49*/
      if ( !v10 ) /*0x1008aca51*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, a3); /*0x1008ac9f6*/
      v11 = v10; /*0x1008aca53*/
    }
    else
    {
      v11 = 1; /*0x1008aca58*/
    }
    memcpy((void *)v11, a2, a3); /*0x1008aca66*/
    v24 = a3; /*0x1008aca6b*/
    v25 = v11; /*0x1008aca6f*/
    v26 = a3; /*0x1008aca73*/
    v8 = v16; /*0x1008aca77*/
  }
  else
  {
    v17 = v21; /*0x1008aca03*/
    v20 = (signed __int64 *)&v17; /*0x1008aca0c*/
    v21 = (__int64 (__fastcall *)())core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h1254124821271e23; /*0x1008aca17*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v24, &unk_101674AC0, &v20); /*0x1008aca2a*/
  }
  alloc::str::_$LT$impl$u20$str$GT$::to_uppercase::hf395e45de658014c(&v17, a4, a5); /*0x1008aca85*/
  v12 = v18; /*0x1008aca8a*/
  if ( !v19 ) /*0x1008aca95*/
  {
    v8[2] = v26; /*0x1008acb42*/
    v13 = v24; /*0x1008acb46*/
    v8[1] = v25; /*0x1008acb4e*/
    *v8 = v13; /*0x1008acb52*/
    goto LABEL_21; /*0x1008acb55*/
  }
  if ( v19 != 3 ) /*0x1008aca9f*/
    goto LABEL_16; /*0x1008aca9f*/
  if ( *(_WORD *)v18 ^ 0x4E43 | *(unsigned __int8 *)(v18 + 2) ^ 0x59 /*0x1008acace*/
    && *(_WORD *)v18 ^ 0x4D52 | *(unsigned __int8 *)(v18 + 2) ^ 0x42 )
  {
    if ( *(_WORD *)v18 ^ 0x5355 | *(unsigned __int8 *)(v18 + 2) ^ 0x44 ) /*0x1008acae9*/
    {
LABEL_16:
      v15[0] = v18; /*0x1008acaf2*/
      v15[1] = v19; /*0x1008acaf9*/
      v20 = v15; /*0x1008acb07*/
      v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008acb12*/
      v22 = &v24; /*0x1008acb1a*/
      v23 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008acb25*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &anon_10420c9971c21f44d230d15b39fb3fec_751, &v20); /*0x1008acb37*/
      goto LABEL_19; /*0x1008acb3c*/
    }
    v20 = &v24; /*0x1008acbc0*/
    v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008acbcb*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &anon_10420c9971c21f44d230d15b39fb3fec_845, &v20); /*0x1008acbdd*/
  }
  else
  {
    v20 = &v24; /*0x1008acb5b*/
    v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008acb66*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v8, &anon_10420c9971c21f44d230d15b39fb3fec_846, &v20); /*0x1008acb78*/
  }
LABEL_19:
  if ( v24 ) /*0x1008acb84*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x1008acb8f*/
LABEL_21:
  if ( v17 ) /*0x1008acb9b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v17, 1); /*0x1008acba5*/
  return v8; /*0x1008acbad*/
}