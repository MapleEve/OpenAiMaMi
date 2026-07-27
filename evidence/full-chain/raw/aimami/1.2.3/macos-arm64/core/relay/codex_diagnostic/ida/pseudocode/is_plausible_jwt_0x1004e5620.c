// __ZN13codexmate_lib4core5relay16codex_diagnostic16is_plausible_jwt @ 0x1004e5620 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::is_plausible_jwt::hcb88bef805a6093d(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4[7]; // [rsp+8h] [rbp-88h] BYREF
  char v5; // [rsp+40h] [rbp-50h]
  __int16 v6; // [rsp+48h] [rbp-48h]
  __int64 v7; // [rsp+50h] [rbp-40h] BYREF
  __int64 v8; // [rsp+58h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+70h] [rbp-20h]
  __int64 v11; // [rsp+78h] [rbp-18h]

  v4[0] = 0; /*0x1004e562e*/
  v4[1] = a2; /*0x1004e5639*/
  v4[2] = a1; /*0x1004e563d*/
  v4[3] = a2; /*0x1004e5641*/
  v4[4] = 0; /*0x1004e5645*/
  v4[5] = a2; /*0x1004e564d*/
  v4[6] = 0x2E0000002ELL; /*0x1004e565b*/
  v5 = 1; /*0x1004e565f*/
  v6 = 1; /*0x1004e5663*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h571c47416a66ce07( /*0x1004e5674*/
    &v9,
    v4);
  if ( v11 != 3 ) /*0x1004e567e*/
    goto LABEL_6; /*0x1004e567e*/
  v2 = v10; /*0x1004e5680*/
  base64::engine::Engine::decode::inner::h0ef0f283e408ae41(&v7, &unk_1015FC842, *v10, v10[1]); /*0x1004e5696*/
  if ( __OFSUB__(-v7, 1) ) /*0x1004e56a5*/
    goto LABEL_6; /*0x1004e56a5*/
  if ( v7 ) /*0x1004e56a7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1004e56b2*/
  base64::engine::Engine::decode::inner::h0ef0f283e408ae41(&v7, &unk_1015FC842, v2[2], v2[3]); /*0x1004e56ca*/
  if ( v7 == 0x8000000000000000LL ) /*0x1004e56e0*/
  {
LABEL_6:
    LODWORD(v2) = 0; /*0x1004e56e2*/
  }
  else
  {
    LOBYTE(v2) = 1; /*0x1004e570d*/
    if ( v7 ) /*0x1004e5712*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1); /*0x1004e571d*/
  }
  if ( v9 ) /*0x1004e56eb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 16 * v9, 8); /*0x1004e56fa*/
  return (unsigned int)v2; /*0x1004e5701*/
}