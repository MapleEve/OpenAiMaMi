// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1006bfc00 depth=1
// _::from_iter
unsigned __int64 *__fastcall _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8fe48c348dfdd0ad(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v12; // [rsp+18h] [rbp-48h]
  unsigned __int64 v13; // [rsp+20h] [rbp-40h]
  __int64 v14; // [rsp+28h] [rbp-38h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h] BYREF

  v4 = a3 - a2; /*0x1006bfc14*/
  if ( (unsigned __int64)(a3 - a2) > 0x5555555555555550LL ) /*0x1006bfc24*/
  {
    v5 = 0; /*0x1006bfc26*/
    goto LABEL_3; /*0x1006bfc26*/
  }
  v3 = 3 * (v4 >> 1); /*0x1006bfc3d*/
  if ( v3 ) /*0x1006bfc44*/
  {
    v12 = a2; /*0x1006bfc46*/
    v6 = a3; /*0x1006bfc4a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006bfc4d*/
    v5 = 8; /*0x1006bfc52*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3 * (v4 >> 1), 8u); /*0x1006bfc60*/
    if ( !v7 ) /*0x1006bfc68*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v3); /*0x1006bfc29*/
    v8 = v4 >> 4; /*0x1006bfc6a*/
    a3 = v6; /*0x1006bfc6e*/
    a2 = v12; /*0x1006bfc71*/
  }
  else
  {
    v7 = 8; /*0x1006bfc77*/
    v8 = 0; /*0x1006bfc7c*/
  }
  v13 = v8; /*0x1006bfc7f*/
  v14 = v7; /*0x1006bfc83*/
  v15 = 0; /*0x1006bfc8b*/
  v11[2] = v7; /*0x1006bfc93*/
  v11[0] = &v15; /*0x1006bfc97*/
  v11[1] = 0; /*0x1006bfc9b*/
  ((void (__fastcall *)(__int64, __int64, _QWORD *))_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h0a0c82e2d85d62ed)( /*0x1006bfcb0*/
    a2,
    a3,
    v11);
  a1[2] = v15; /*0x1006bfcb9*/
  v9 = v13; /*0x1006bfcbd*/
  a1[1] = v14; /*0x1006bfcc5*/
  *a1 = v9; /*0x1006bfcc9*/
  return a1; /*0x1006bfccf*/
}