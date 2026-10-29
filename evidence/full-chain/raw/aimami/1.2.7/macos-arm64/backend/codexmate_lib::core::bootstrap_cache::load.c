// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::bootstrap_cache::load::h8c02063b55039a45; addr: 0x10021d190; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:17Z
// B-level evidence identity verified; module codexmate_lib/core/bootstrap_cache; range 0x10021d190-0x10021d2b6; sha f019dbc8e267; session <审计会话>; method exact-normalized-body; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
_QWORD *__fastcall codexmate_lib::core::bootstrap_cache::load::h8c02063b55039a45(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r12
  _BYTE __dst[1120]; // [rsp+8h] [rbp-918h] BYREF
  __int64 v6; // [rsp+468h] [rbp-4B8h] BYREF
  _QWORD __src[150]; // [rsp+470h] [rbp-4B0h] BYREF

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v6); /*0x10021d1ac*/
  v1 = v6; /*0x10021d1b1*/
  if ( __OFSUB__(-v6, 1) ) /*0x10021d1bb*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h9febf27e05e3c56c(&v6); /*0x10021d1c7*/
    goto LABEL_7; /*0x10021d1cc*/
  }
  v2 = __src[0]; /*0x10021d1ce*/
  __src[140] = __src[0]; /*0x10021d1dc*/
  __src[141] = __src[1]; /*0x10021d1e0*/
  __src[142] = 0; /*0x10021d1e4*/
  __src[143] = 0; /*0x10021d1ec*/
  __src[144] = __src[0]; /*0x10021d1f4*/
  __src[145] = __src[1]; /*0x10021d1f8*/
  serde_json::de::from_trait::hcd94127bdfb7e559(&v6); /*0x10021d207*/
  v3 = v6; /*0x10021d20c*/
  if ( v6 == 2 ) /*0x10021d21e*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc62c3b2945dfda16(__src); /*0x10021d223*/
    if ( !v1 ) /*0x10021d22b*/
      goto LABEL_6; /*0x10021d22b*/
    goto LABEL_5; /*0x10021d22b*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x10021d27f*/
  if ( v1 ) /*0x10021d287*/
LABEL_5:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v1, 1); /*0x10021d22d*/
LABEL_6:
  if ( (_DWORD)v3 != 2 ) /*0x10021d241*/
  {
    memcpy(a1 + 1, __dst, 0x458u); /*0x10021d29b*/
    *a1 = v3; /*0x10021d2a0*/
    return a1; /*0x10021d2a0*/
  }
LABEL_7:
  *a1 = 0; /*0x10021d243*/
  a1[2] = 3; /*0x10021d254*/
  a1[112] = 0x8000000000000000LL; /*0x10021d25c*/
  a1[124] = 0x8000000000000000LL; /*0x10021d263*/
  a1[132] = 0x8000000000000000LL; /*0x10021d26a*/
  return a1; /*0x10021d2a6*/
}