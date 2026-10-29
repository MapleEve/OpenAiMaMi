// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::Repository::load_pending_auto_switch::h9526e40b8e32cdbf; addr: 0x100ac6220; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_pending_auto_switch::h9526e40b8e32cdbf(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  _QWORD __src[109]; // [rsp+8h] [rbp-368h] BYREF

  v2 = *(_QWORD *)(a2 + 488); /*0x100ac624a*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src); /*0x100ac624d*/
  v3 = __src[0]; /*0x100ac6252*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x100ac625c*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x100ac6270*/
    {
      v4 = __src[1] - 1LL; /*0x100ac6272*/
      v5 = *(_QWORD *)(__src[1] - 1LL); /*0x100ac6276*/
      v6 = *(_QWORD *)(__src[1] + 7LL); /*0x100ac627a*/
      if ( *(_QWORD *)v6 ) /*0x100ac627e*/
        (*(void (__fastcall **)(__int64, __int64))v6)(v5, v2); /*0x100ac628a*/
      v7 = *(_QWORD *)(v6 + 8); /*0x100ac628c*/
      if ( v7 ) /*0x100ac6294*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x100ac629e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x100ac62b0*/
    }
    *__dst = 2; /*0x100ac62b5*/
    return __dst; /*0x100ac62bc*/
  }
  v8 = __src[1]; /*0x100ac62c1*/
  __src[99] = __src[1]; /*0x100ac62cf*/
  __src[100] = __src[2]; /*0x100ac62d3*/
  __src[101] = 0; /*0x100ac62d7*/
  __src[102] = 0; /*0x100ac62df*/
  __src[103] = __src[1]; /*0x100ac62e7*/
  __src[104] = __src[2]; /*0x100ac62eb*/
  serde_json::de::from_trait::h38f3357f3c764bac(__src); /*0x100ac62fa*/
  if ( LODWORD(__src[0]) != 2 ) /*0x100ac6306*/
  {
    memcpy(__dst, __src, 0x318u); /*0x100ac634f*/
    if ( !v3 ) /*0x100ac6357*/
      return __dst; /*0x100ac6357*/
LABEL_15:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v3, 1); /*0x100ac6359*/
    return __dst; /*0x100ac6364*/
  }
  *__dst = 2; /*0x100ac6308*/
  v9 = __src[1]; /*0x100ac630f*/
  if ( *(_QWORD *)__src[1] == 1 ) /*0x100ac631e*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3a76a939600446ed(__src[1] + 8LL); /*0x100ac6381*/
  }
  else if ( !*(_QWORD *)__src[1] ) /*0x100ac6316*/
  {
    v10 = *(_QWORD *)(__src[1] + 16LL); /*0x100ac6325*/
    if ( v10 ) /*0x100ac632d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(__src[1] + 8LL), v10, 1); /*0x100ac6339*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 40, 8); /*0x100ac6393*/
  if ( v3 ) /*0x100ac639b*/
    goto LABEL_15; /*0x100ac639b*/
  return __dst; /*0x100ac636c*/
}