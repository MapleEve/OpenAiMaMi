// __ZN13codexmate_lib4core5relay17router_transition17format_violations @ 0x1009019e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::router_transition::format_violations::h985501a8077a74db(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rsi
  _QWORD v9[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v10; // [rsp+18h] [rbp-38h] BYREF
  __int64 v11; // [rsp+20h] [rbp-30h]
  __int64 v12; // [rsp+28h] [rbp-28h]

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heb7e760b39b3b7cc( /*0x1009019fd*/
    &v10,
    a2,
    a2 + 32 * a3);
  v3 = v11; /*0x100901a02*/
  v4 = v12; /*0x100901a06*/
  alloc::str::join_generic_copy::heca7a5e86402c6b6(v9, v11, v12, &unk_10167774E, 3); /*0x100901a21*/
  a1[2] = v9[2]; /*0x100901a2a*/
  v5 = v9[0]; /*0x100901a2e*/
  a1[1] = v9[1]; /*0x100901a36*/
  *a1 = v5; /*0x100901a3a*/
  if ( v4 ) /*0x100901a40*/
  {
    v6 = (_QWORD *)(v3 + 8); /*0x100901a42*/
    do /*0x100901a57*/
    {
      v7 = *(v6 - 1); /*0x100901a59*/
      if ( v7 ) /*0x100901a61*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v7, 1); /*0x100901a6c*/
      v6 += 3; /*0x100901a50*/
      --v4; /*0x100901a54*/
    }
    while ( v4 ); /*0x100901a57*/
  }
  if ( v10 ) /*0x100901a7a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24 * v10, 8); /*0x100901a8c*/
  return a1; /*0x100901a94*/
}