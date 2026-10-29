// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::manager::format_invariant_violations::ha2bd6240f95e38eb; addr: 0x10026f300; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// B-level evidence identity verified; module codexmate_lib/core/relay/manager; range 0x10026f300-0x10026f3c4; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
double __fastcall codexmate_lib::core::relay::manager::format_invariant_violations::ha2bd6240f95e38eb(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rsi
  double result; // xmm0_8
  _QWORD v9[3]; // [rsp+8h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hc779c7cfa57de0c0( /*0x10026f31b*/
    &v10,
    a2,
    a2 + 32 * a3);
  v3 = v11; /*0x10026f320*/
  v4 = v12; /*0x10026f324*/
  alloc::str::join_generic_copy::h877a7dfcc3252013(v9, v11, v12, &anon_8cf26f36e03587b9a54b9e7945b707cc_161, 3); /*0x10026f33f*/
  a1[2] = v9[2]; /*0x10026f348*/
  v5 = v9[0]; /*0x10026f34c*/
  a1[1] = v9[1]; /*0x10026f354*/
  *a1 = v5; /*0x10026f358*/
  if ( v4 ) /*0x10026f35e*/
  {
    v6 = (_QWORD *)(v3 + 8); /*0x10026f360*/
    do /*0x10026f377*/
    {
      v7 = *(v6 - 1); /*0x10026f379*/
      if ( v7 ) /*0x10026f380*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v6, v7, 1); /*0x10026f38a*/
      v6 += 3; /*0x10026f370*/
      --v4; /*0x10026f374*/
    }
    while ( v4 ); /*0x10026f377*/
  }
  if ( v10 ) /*0x10026f398*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24 * v10, 8); /*0x10026f3b4*/
  return result; /*0x10026f3aa*/
}
