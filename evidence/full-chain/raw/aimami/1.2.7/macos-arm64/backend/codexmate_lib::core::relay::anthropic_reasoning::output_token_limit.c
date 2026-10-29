// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::output_token_limit::h2c3df1a1576a5f5f; addr: 0x100897260; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::output_token_limit::h2c3df1a1576a5f5f(
        unsigned __int8 *a1,
        __int64 a2,
        __m128i a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  __int64 v7; // [rsp+0h] [rbp-30h] BYREF
  __int64 v8; // [rsp+8h] [rbp-28h]
  unsigned __int64 v9; // [rsp+10h] [rbp-20h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba(&v7, a1, a2, a3); /*0x100897277*/
  v3 = v8; /*0x10089727c*/
  v4 = v9; /*0x100897280*/
  v5 = 1; /*0x10089729b*/
  if ( !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x1008972ed*/
                           v8,
                           v9,
                           (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_877,
                           6u)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_873,
                           8u)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_874,
                           7u)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_871,
                           9u) )
  {
    v5 = (unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x10089730d*/
                            v3,
                            v4,
                            (__int64)&anon_0868f19ff3e9f3569e732f60bdb020cc_870,
                            0xAu);
  }
  if ( v7 ) /*0x100897318*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v7, 1); /*0x100897322*/
  return v5; /*0x10089732f*/
}