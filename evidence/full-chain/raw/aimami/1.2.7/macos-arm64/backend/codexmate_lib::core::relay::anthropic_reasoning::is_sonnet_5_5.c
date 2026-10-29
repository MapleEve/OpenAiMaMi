// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_reasoning::is_sonnet_5_5::hc653507a9cd5554a; addr: 0x1007815f0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:42Z
char __fastcall codexmate_lib::core::relay::anthropic_reasoning::is_sonnet_5_5::hc653507a9cd5554a(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  char result; // al
  __int64 v4; // rdi
  char v5; // bl
  __int64 v6; // [rsp+8h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-18h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h72648ba5ca814d6c(&v6, a1, a2); /*0x100781605*/
  v2 = v7; /*0x10078160a*/
  result = codexmate_lib::core::relay::anthropic_reasoning::model_matches_family::he725ac7a83bd237d( /*0x100781621*/
             v7,
             v8,
             (__int64)&anon_4114c41c52614d982439c1a03d06b8ac_1126,
             0xAu);
  if ( v6 ) /*0x10078162d*/
  {
    v4 = v2; /*0x100781634*/
    v5 = result; /*0x100781637*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, 1); /*0x100781639*/
    return v5; /*0x10078163e*/
  }
  return result; /*0x100781640*/
}