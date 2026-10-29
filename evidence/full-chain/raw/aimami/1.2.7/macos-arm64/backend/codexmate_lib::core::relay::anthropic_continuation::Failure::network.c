// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_continuation::Failure::network::hc3136953d19bf4f0; addr: 0x100877c80; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:38Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_continuation::Failure::network::hc3136953d19bf4f0(
        __int64 a1,
        __int64 a2)
{
  unsigned __int8 v2; // r15
  char *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+8h] [rbp-58h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  char *v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h]
  _QWORD v11[4]; // [rsp+40h] [rbp-20h] BYREF

  v11[0] = a2; /*0x100877c93*/
  v2 = reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(v11); /*0x100877ca0*/
  v3 = "upstream_connection_error"; /*0x100877caa*/
  if ( v2 ) /*0x100877cb4*/
    v3 = "upstream_timeoutauth-mode toggle/source/subagentcontent-encodingcontent-languagecontent-locationwww-authenticatex-xss-protection;base64,childrentrailers"; /*0x100877cb4*/
  v9 = v3; /*0x100877cc5*/
  v10 = 9LL * (v2 ^ 1u) + 16; /*0x100877cc9*/
  v8[0] = &v9; /*0x100877cd1*/
  v8[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x100877cdc*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &unk_101A3A780, v8); /*0x100877cef*/
  *(_WORD *)(a1 + 40) = 2 * v2 + 502; /*0x100877cff*/
  v4 = v10; /*0x100877d08*/
  *(_QWORD *)(a1 + 24) = v9; /*0x100877d0c*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100877d10*/
  v5 = v7[1]; /*0x100877d18*/
  *(_QWORD *)a1 = v7[0]; /*0x100877d1c*/
  *(_QWORD *)(a1 + 8) = v5; /*0x100877d1f*/
  *(_QWORD *)(a1 + 16) = v7[2]; /*0x100877d27*/
  core::ptr::drop_in_place$LT$reqwest..error..Inner$GT$::h7d3b717d92101315(a2); /*0x100877d2e*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2, 144, 8); /*0x100877d40*/
  return a1; /*0x100877d48*/
}