// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x141911f40 | name sub_141911F40
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141911F40(const __m128i *a1, signed __int64 a2)
{
  __int64 v3; // r14
  __m128i *v5; // rax
  __int64 v6; // rdi
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 < 0 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( a2 )
  {
    nullsub_1(a1);
    v3 = 1;
    v5 = (__m128i *)sub_140001650(a2, 1);
    if ( !v5 )
LABEL_3:
      sub_141938D2B(v3, a2);
    v6 = (__int64)v5;
    sub_1418F44E0(v5, a1, a2);
  }
  else
  {
    v6 = 1;
  }
  v8[0] = a2;
  v8[1] = v6;
  v8[2] = a2;
  return sub_14163C190(v8);
}
