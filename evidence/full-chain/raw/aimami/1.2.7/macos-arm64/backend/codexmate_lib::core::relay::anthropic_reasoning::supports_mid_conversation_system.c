// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::supports_mid_conversation_system::h09d4fecfedde28c6; addr: 0x100898610; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::supports_mid_conversation_system::h09d4fecfedde28c6(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v6; // [rsp+0h] [rbp-30h] BYREF
  __int64 v7; // [rsp+8h] [rbp-28h]
  __int64 v8; // [rsp+10h] [rbp-20h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba(&v6, a1, a2); /*0x100898627*/
  v3 = v7; /*0x10089862c*/
  v4 = v8; /*0x100898630*/
  LOBYTE(v2) = 1; /*0x10089864b*/
  if ( !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x1008986f7*/
                           v7,
                           v8,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_874,
                           7)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_871,
                           9)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_875,
                           8)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_872,
                           10)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_877,
                           6)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_873,
                           8)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_879,
                           8) )
  {
    v2 = codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x100898717*/
           v3,
           v4,
           &anon_0868f19ff3e9f3569e732f60bdb020cc_870,
           10);
  }
  if ( v6 ) /*0x100898721*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v6, 1); /*0x10089872b*/
  return v2; /*0x100898733*/
}