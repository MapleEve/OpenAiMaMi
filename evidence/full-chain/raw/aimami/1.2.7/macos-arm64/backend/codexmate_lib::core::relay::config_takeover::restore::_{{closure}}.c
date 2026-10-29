// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::restore::_$u7b$$u7b$closure$u7d$$u7d$::h770cb590991e9e45; addr: 0x10022a830; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::config_takeover::restore::_$u7b$$u7b$closure$u7d$$u7d$::h770cb590991e9e45(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rsi
  double result; // xmm0_8
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+18h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF

  v10 = a2; /*0x10022a842*/
  v9[0] = &v10; /*0x10022a84a*/
  v9[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10022a855*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(
    v8,
    "\x1Bsync restored config.toml: \xC0\x1Cwrite restored config.toml: \xC0\x16sync takeover backup: \xC0\x1Bserialize takeover backup: \xC0\x17write takeover backup: \xC0$write takeover-cleaned config.toml: \xC0\atarget=\xC0\x01 \xC02[AiMaMi][router-transition] journal write failed: \xC0src/core/relay/router_transition.rs",
    v9);
  a1[3] = v8[2]; /*0x10022a871*/
  v2 = v8[0]; /*0x10022a875*/
  a1[2] = v8[1]; /*0x10022a87d*/
  a1[1] = v2; /*0x10022a881*/
  *a1 = 10; /*0x10022a885*/
  if ( (v10 & 3) == 1 ) /*0x10022a898*/
  {
    v3 = v10 - 1; /*0x10022a89a*/
    v4 = *(_QWORD *)(v10 - 1); /*0x10022a89e*/
    v5 = *(_QWORD *)(v10 + 7); /*0x10022a8a2*/
    if ( *(_QWORD *)v5 ) /*0x10022a8a6*/
      (*(void (__fastcall **)(__int64))v5)(v4); /*0x10022a8b2*/
    v6 = *(_QWORD *)(v5 + 8); /*0x10022a8b4*/
    if ( v6 ) /*0x10022a8bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x10022a8c6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x10022a8d8*/
  }
  return result; /*0x10022a8dd*/
}
