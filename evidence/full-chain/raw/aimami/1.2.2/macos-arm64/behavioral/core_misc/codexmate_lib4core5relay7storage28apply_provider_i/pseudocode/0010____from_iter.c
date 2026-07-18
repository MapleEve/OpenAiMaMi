// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x1008a3930 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h68a700f692cc770e(
        unsigned __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 *v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 i; // rbx
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  _QWORD v15[3]; // [rsp+8h] [rbp-88h] BYREF
  unsigned __int64 *v16; // [rsp+20h] [rbp-70h]
  __int64 v17; // [rsp+28h] [rbp-68h] BYREF
  __int64 v18; // [rsp+30h] [rbp-60h]
  __int64 v19; // [rsp+38h] [rbp-58h]
  __int64 v20; // [rsp+40h] [rbp-50h] BYREF
  __int64 v21; // [rsp+48h] [rbp-48h]
  unsigned __int64 v22; // [rsp+50h] [rbp-40h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-38h]
  __int64 v24; // [rsp+60h] [rbp-30h]

  v2 = a1; /*0x1008a3944*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h373c1bbb51cf616a( /*0x1008a394f*/
    &v17,
    a2,
    a2 + 3);
  v3 = v17; /*0x1008a3954*/
  if ( __OFSUB__(-v17, 1) ) /*0x1008a395b*/
  {
    *a1 = 0; /*0x1008a3960*/
    a1[1] = 8; /*0x1008a3967*/
    a1[2] = 0; /*0x1008a396f*/
  }
  else
  {
    v16 = a1; /*0x1008a397c*/
    v4 = v18; /*0x1008a3980*/
    v5 = v19; /*0x1008a3984*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008a3988*/
    v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x60u, 8u); /*0x1008a3997*/
    if ( !v6 ) /*0x1008a399f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8); /*0x1008a3ab2*/
    v7 = v6; /*0x1008a39a5*/
    *v6 = v3; /*0x1008a39a8*/
    v6[1] = v4; /*0x1008a39ab*/
    v6[2] = v5; /*0x1008a39af*/
    v22 = 4; /*0x1008a39b3*/
    v23 = v6; /*0x1008a39bb*/
    v24 = 1; /*0x1008a39bf*/
    v20 = a2[3]; /*0x1008a39cb*/
    v19 = a2[2]; /*0x1008a39d3*/
    v8 = *a2; /*0x1008a39d7*/
    v18 = a2[1]; /*0x1008a39de*/
    v17 = v8; /*0x1008a39e2*/
    v9 = 1; /*0x1008a39e6*/
    for ( i = 5; ; i += 3 ) /*0x1008a39ec*/
    {
      _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h373c1bbb51cf616a( /*0x1008a3a2c*/
        v15,
        &v17,
        &v20);
      v11 = v15[0]; /*0x1008a3a31*/
      if ( v15[0] == 0x8000000000000000LL ) /*0x1008a3a45*/
        break; /*0x1008a3a45*/
      v21 = v15[1]; /*0x1008a3a4b*/
      v12 = v15[2]; /*0x1008a3a4f*/
      if ( v9 == v22 ) /*0x1008a3a57*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(&v22, v9, 1, 8, 0x18u); /*0x1008a3a70*/
        v7 = v23; /*0x1008a3a75*/
      }
      v7[i - 2] = v11; /*0x1008a3a00*/
      v7[i - 1] = v21; /*0x1008a3a09*/
      v7[i] = v12; /*0x1008a3a0e*/
      v24 = ++v9; /*0x1008a3a15*/
    }
    v2 = v16; /*0x1008a3a7f*/
    v16[2] = v24; /*0x1008a3a83*/
    v13 = v22; /*0x1008a3a87*/
    v2[1] = (unsigned __int64)v23; /*0x1008a3a8f*/
    *v2 = v13; /*0x1008a3a93*/
  }
  return v2; /*0x1008a3a99*/
}