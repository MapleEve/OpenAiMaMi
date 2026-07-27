// __ZN13codexmate_lib4core5relay7manager27format_invariant_violations @ 0x100285140 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::format_invariant_violations::h98c34c0a81bbfce4(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heb7e760b39b3b7cc( /*0x10028515b*/
    &v10,
    a2,
    a2 + 32 * a3);
  v3 = v11; /*0x100285160*/
  v4 = v12; /*0x100285164*/
  alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10028517f*/
    v9,
    v11,
    v12,
    " | router_transitionstate_db_selectedcodexmate_lib::core::relay::manager",
    3);
  a1[2] = v9[2]; /*0x100285188*/
  v5 = v9[0]; /*0x10028518c*/
  a1[1] = v9[1]; /*0x100285194*/
  *a1 = v5; /*0x100285198*/
  if ( v4 ) /*0x10028519e*/
  {
    v6 = (_QWORD *)(v3 + 8); /*0x1002851a0*/
    do /*0x1002851b7*/
    {
      v7 = *(v6 - 1); /*0x1002851b9*/
      if ( v7 ) /*0x1002851c0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v7, 1); /*0x1002851ca*/
      v6 += 3; /*0x1002851b0*/
      --v4; /*0x1002851b4*/
    }
    while ( v4 ); /*0x1002851b7*/
  }
  result = v10; /*0x1002851d1*/
  if ( v10 ) /*0x1002851d8*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24 * v10, 8); /*0x1002851f4*/
  return result; /*0x1002851ea*/
}