// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x141911db0 | name sub_141911DB0
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141911DB0(const __m128i *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __m128i *v4; // rax
  __int64 v5; // rbx
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v3 = a2 >> 1;
    if ( a2 >> 1 )
    {
      nullsub_1(a1);
      v4 = (__m128i *)sub_140001650(v3, 1);
      if ( !v4 )
        sub_141938D2B(1, v3);
      v5 = (__int64)v4;
      sub_1418F44E0(v4, a1, v3);
    }
    else
    {
      v5 = 1;
    }
    v7[0] = v3;
    v7[1] = v5;
    v7[2] = v3;
  }
  else
  {
    sub_1416ABFD0(v7, a1, a2);
  }
  return sub_14163C190(v7);
}
