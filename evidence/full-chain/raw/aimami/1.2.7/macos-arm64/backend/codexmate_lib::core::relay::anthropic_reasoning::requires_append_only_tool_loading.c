// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_reasoning::requires_append_only_tool_loading::h8e5ad3033b81bbe1; addr: 0x100898760; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::requires_append_only_tool_loading::h8e5ad3033b81bbe1(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v7; // [rsp+8h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-50h]
  __int64 v9; // [rsp+18h] [rbp-48h]
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba(&v10, a1, a2); /*0x100898781*/
  v3 = v11; /*0x100898786*/
  v4 = v12; /*0x10089878a*/
  LOBYTE(v2) = 1; /*0x1008987a5*/
  if ( !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x1008987be*/
                           v11,
                           v12,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_871,
                           9)
    && !(unsigned __int8)codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f(
                           v3,
                           v4,
                           &anon_0868f19ff3e9f3569e732f60bdb020cc_873,
                           8) )
  {
    codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h1067f5b7efbfefba(&v7, a1, a2); /*0x1008987d1*/
    v5 = v8; /*0x1008987d6*/
    v2 = codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::hb1ca05f97346ca6f( /*0x1008987f2*/
           v8,
           v9,
           &anon_0868f19ff3e9f3569e732f60bdb020cc_870,
           10);
    if ( v7 ) /*0x1008987fc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, 1); /*0x100898806*/
  }
  if ( v10 ) /*0x100898812*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v10, 1); /*0x10089881c*/
  return v2; /*0x100898824*/
}