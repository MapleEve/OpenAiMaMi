// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x141910ff0 | name sub_141910FF0
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_141910FF0(__int64 a1, const __m128i *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  const __m128i *v6; // rbx
  unsigned __int64 result; // rax
  __int64 v8; // rbx

  v5 = *(_QWORD *)a1;
  if ( a3 > *(_QWORD *)a1 - *(_QWORD *)(a1 + 16) )
  {
    v6 = a2;
    result = sub_140C20D70(a1);
    if ( result )
      return result;
    v5 = *(_QWORD *)a1;
    a2 = v6;
  }
  if ( a3 >= v5 )
  {
    *(_BYTE *)(a1 + 24) = 1;
    result = sub_140C9FF80(a1 + 32, a2, a3);
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 16);
    sub_1418F44E0((__m128i *)(v8 + *(_QWORD *)(a1 + 8)), a2, a3);
    *(_QWORD *)(a1 + 16) = a3 + v8;
    return 0;
  }
  return result;
}
