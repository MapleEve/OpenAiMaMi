// mac 1.2.2 NEW codexmate_lib4core12debug_bundle23read_catalog_fil 0x10089f280 d=1
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h283c3f3fccaf0fa9(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 i; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  _QWORD v13[9]; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v14[3]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD *v15; // [rsp+68h] [rbp-48h]
  unsigned __int64 v16; // [rsp+70h] [rbp-40h]
  __int64 v17; // [rsp+78h] [rbp-38h]

  v2 = a2[8]; /*0x10089f294*/
  if ( v2 > 0x555555555555555LL ) /*0x10089f2b1*/
  {
    v3 = 0; /*0x10089f2b3*/
    goto LABEL_3; /*0x10089f2b3*/
  }
  if ( 24 * v2 ) /*0x10089f2a0*/
  {
    v15 = a2; /*0x10089f2c9*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10089f2cd*/
    v3 = 8; /*0x10089f2d2*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v2, 8u); /*0x10089f2e0*/
    if ( !v4 ) /*0x10089f2e8*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3); /*0x10089f2b6*/
    v5 = v4; /*0x10089f2ea*/
    v6 = v2; /*0x10089f2ed*/
    a2 = v15; /*0x10089f2f0*/
  }
  else
  {
    v5 = 8; /*0x10089f2f6*/
    v6 = 0; /*0x10089f2fc*/
  }
  v16 = v6; /*0x10089f2fe*/
  v17 = v5; /*0x10089f302*/
  v13[7] = a2[7]; /*0x10089f30a*/
  v13[6] = a2[6]; /*0x10089f312*/
  v13[5] = a2[5]; /*0x10089f31a*/
  v13[4] = a2[4]; /*0x10089f322*/
  v13[3] = a2[3]; /*0x10089f32d*/
  v13[2] = a2[2]; /*0x10089f338*/
  v7 = *a2; /*0x10089f33f*/
  v13[1] = a2[1]; /*0x10089f346*/
  v13[0] = v7; /*0x10089f34d*/
  v13[8] = v2; /*0x10089f354*/
  for ( i = 0; ; ++i ) /*0x10089f358*/
  {
    v9 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4cb5ae5f440cfc78(v13); /*0x10089f373*/
    if ( !v9 ) /*0x10089f37b*/
      break; /*0x10089f37b*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v14, v9); /*0x10089f383*/
    *(_QWORD *)(v5 + 16) = v14[2]; /*0x10089f38c*/
    v10 = v14[0]; /*0x10089f390*/
    *(_QWORD *)(v5 + 8) = v14[1]; /*0x10089f398*/
    *(_QWORD *)v5 = v10; /*0x10089f39c*/
    v5 += 24; /*0x10089f3a2*/
  }
  a1[2] = i; /*0x10089f3ac*/
  v11 = v16; /*0x10089f3b0*/
  a1[1] = v17; /*0x10089f3b8*/
  *a1 = v11; /*0x10089f3bc*/
  return a1; /*0x10089f3c2*/
}