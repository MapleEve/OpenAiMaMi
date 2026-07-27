// __ZN13codexmate_lib4core5relay15config_takeover21normalize_section_key @ 0x1008f5c20 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::normalize_section_key::h5aa1cacb5786d356(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  double result; // xmm0_8
  _QWORD v6[7]; // [rsp+8h] [rbp-88h] BYREF
  char v7; // [rsp+40h] [rbp-50h]
  __int16 v8; // [rsp+48h] [rbp-48h]
  _QWORD v9[3]; // [rsp+50h] [rbp-40h] BYREF
  __int64 v10; // [rsp+68h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp-20h]
  __int64 v12; // [rsp+78h] [rbp-18h]

  v6[0] = 0; /*0x1008f5c31*/
  v6[1] = a3; /*0x1008f5c3c*/
  v6[2] = a2; /*0x1008f5c40*/
  v6[3] = a3; /*0x1008f5c44*/
  v6[4] = 0; /*0x1008f5c48*/
  v6[5] = a3; /*0x1008f5c50*/
  v6[6] = 0x2E0000002ELL; /*0x1008f5c5e*/
  v7 = 1; /*0x1008f5c62*/
  v8 = 1; /*0x1008f5c66*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfe8cf936d206cc63( /*0x1008f5c77*/
    &v10,
    v6);
  v3 = v11; /*0x1008f5c7c*/
  alloc::str::join_generic_copy::ha9d2732844b8793d(v9, v11, v12, ".", 1); /*0x1008f5c98*/
  a1[2] = v9[2]; /*0x1008f5ca1*/
  v4 = v9[0]; /*0x1008f5ca5*/
  a1[1] = v9[1]; /*0x1008f5cad*/
  *a1 = v4; /*0x1008f5cb1*/
  if ( v10 ) /*0x1008f5cbb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 16 * v10, 8); /*0x1008f5cc9*/
  return result; /*0x1008f5cce*/
}