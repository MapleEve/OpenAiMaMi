// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140be6f70 | name sub_140BE6F70
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BE6F70(_QWORD *a1, __int64 a2)
{
  signed __int64 v2; // rsi
  __int64 v3; // r15
  const __m128i *v5; // r14
  __m128i *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 < 0 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  if ( v2 )
  {
    v5 = *(const __m128i **)a2;
    nullsub_1(a1);
    v3 = 1;
    v6 = (__m128i *)sub_140001650(v2, 1);
    if ( !v6 )
LABEL_3:
      sub_141938D2B(v3, v2);
    v7 = (__int64)v6;
    sub_1418F44E0(v6, v5, v2);
  }
  else
  {
    v7 = 1;
  }
  v8 = a1[2];
  if ( v8 == *a1 )
    sub_14190F570(a1);
  v9 = a1[1];
  v10 = 32 * v8;
  *(_BYTE *)(v9 + v10) = 3;
  *(_QWORD *)(v9 + v10 + 8) = v2;
  *(_QWORD *)(v9 + v10 + 16) = v7;
  *(_QWORD *)(v9 + v10 + 24) = v2;
  a1[2] = v8 + 1;
  return 0;
}
