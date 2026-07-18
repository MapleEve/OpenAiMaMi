// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12schema_shape 0x10089c9d0 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h02e5cf671206005a(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // r12
  size_t v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  _QWORD v8[3]; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+20h] [rbp-40h]
  __int64 v10; // [rsp+28h] [rbp-38h]
  unsigned __int64 v11; // [rsp+30h] [rbp-30h] BYREF

  v2 = 0xAAAAAAAAAAAAAAABLL * ((a2[1] - *a2) >> 3); /*0x10089c9f9*/
  v3 = 0x5555555555555560LL * ((a2[1] - *a2) >> 3); /*0x10089ca00*/
  if ( a2[1] - *a2 > 0xBFFFFFFFFFFFFFE8LL || v3 > 0x7FFFFFFFFFFFFFF8LL ) /*0x10089ca21*/
  {
    v4 = 0; /*0x10089ca28*/
    goto LABEL_3; /*0x10089ca28*/
  }
  if ( v3 ) /*0x10089ca3c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10089ca41*/
    v4 = 8; /*0x10089ca46*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 8u); /*0x10089ca54*/
    if ( !v5 ) /*0x10089ca5c*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4); /*0x10089ca2b*/
  }
  else
  {
    v5 = 8; /*0x10089ca63*/
    v2 = 0; /*0x10089ca68*/
  }
  v9 = v2; /*0x10089ca6b*/
  v10 = v5; /*0x10089ca6f*/
  v11 = 0; /*0x10089ca77*/
  v8[2] = v5; /*0x10089ca7f*/
  v8[0] = &v11; /*0x10089ca83*/
  v8[1] = 0; /*0x10089ca87*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h2649ca9d01689136( /*0x10089ca99*/
    a2,
    v8);
  a1[2] = v11; /*0x10089caa2*/
  v6 = v9; /*0x10089caa6*/
  a1[1] = v10; /*0x10089caae*/
  *a1 = v6; /*0x10089cab2*/
  return a1; /*0x10089cab8*/
}