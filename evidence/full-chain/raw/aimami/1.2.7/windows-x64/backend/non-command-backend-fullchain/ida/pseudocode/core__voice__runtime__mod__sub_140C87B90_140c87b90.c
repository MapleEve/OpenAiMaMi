// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140c87b90 | name sub_140C87B90
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C87B90(unsigned __int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rax
  __m128i *v12; // rbx
  const __m128i *v13; // r14
  __int64 v14; // rax
  __int64 result; // rax

  v6 = sub_140E91160(a2, a3);
  if ( v7 )
  {
    v9 = v7;
    if ( v7 < 0 )
      sub_141938D2B(0, v7);
    v13 = (const __m128i *)v6;
    nullsub_1(v8);
    v14 = sub_140001650(v9, 1);
    if ( !v14 )
      sub_141938D2B(1, v9);
    v12 = (__m128i *)v14;
  }
  else
  {
    v9 = qword_141A40738[a4];
    v10 = dword_141A40758[a4];
    nullsub_1(a4);
    v11 = sub_140001650(v9, 1);
    if ( !v11 )
      sub_141938D2B(1, v9);
    v12 = (__m128i *)v11;
    v13 = (const __m128i *)((char *)dword_141A40758 + v10);
  }
  result = sub_1418F44E0(v12, v13, v9);
  *a1 = v9;
  a1[1] = (unsigned __int64)v12;
  a1[2] = v9;
  return result;
}
