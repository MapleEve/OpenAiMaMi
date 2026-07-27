// module: codexmate_lib/core/repository
// addr: 0x1406808d0
// name: sub_1406808D0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1406808D0(const __m128i **a1)
{
  const __m128i *v1; // rsi
  const __m128i *v3; // rbx
  const __m128i *v4; // r14
  const __m128i *v5; // r15
  int v6; // eax
  __m128i si128; // xmm0
  __int8 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi

  v1 = a1[1];
  if ( v1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      v4 = *a1;
      v5 = *a1 + 1;
      v6 = ~_mm_movemask_epi8(_mm_load_si128(*a1));
      do
      {
        if ( !(_WORD)v6 )
        {
          do
          {
            si128 = _mm_load_si128(v5);
            v4 -= 64;
            ++v5;
            v6 = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !v6 );
        }
        _R12D = v6;
        __asm { tzcnt   eax, r12d }
        v10 = &v4->m128i_i8[-(_EAX << 6)];
        v11 = *((_QWORD *)v10 - 8);
        if ( v11 )
          sub_140001660(*((_QWORD *)v10 - 7), v11, 1);
        v12 = *((_QWORD *)v10 - 4);
        if ( v12 != -1 && v12 )
          sub_140001660(*((_QWORD *)v10 - 3), v12, 1);
        v6 = _R12D & (_R12D - 1);
        v3 = (const __m128i *)((char *)v3 - 1);
      }
      while ( v3 );
    }
    v13 = (_QWORD)v1 << 6;
    v14 = 65LL * (_QWORD)v1 + 81;
    if ( v14 )
      sub_140001660((char *)&(*a1)[-4] - v13, v14, 16);
  }
}