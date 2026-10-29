// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::supports_structured_output::h1a81d1363b8d313f; addr: 0x100898310; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::supports_structured_output::h1a81d1363b8d313f(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rbx
  __int64 v4; // r14
  _BYTE v6[37]; // [rsp+8h] [rbp-58h] BYREF
  char v7; // [rsp+2Dh] [rbp-33h]
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-20h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba(&v8, a1, a2); /*0x10089832d*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hc5425a7e3a4c6fca(v6, a1); /*0x10089833c*/
  if ( v7 == 2 || !(v7 & 1 | (v6[33] == 0)) ) /*0x100898352*/
  {
    v3 = v9; /*0x10089835c*/
    v4 = v10; /*0x100898360*/
    LOBYTE(v2) = 1; /*0x10089837b*/
    if ( !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100898376*/
                             v9,
                             v10,
                             &anon_0868f19ff3e9f3569e732f60bdb020cc_886,
                             10) )
      v2 = codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100898399*/
             v3,
             v4,
             &anon_0868f19ff3e9f3569e732f60bdb020cc_887,
             9);
  }
  else
  {
    LOBYTE(v2) = 1; /*0x100898357*/
  }
  if ( v8 ) /*0x1008983a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x1008983ae*/
  return v2; /*0x1008983b6*/
}