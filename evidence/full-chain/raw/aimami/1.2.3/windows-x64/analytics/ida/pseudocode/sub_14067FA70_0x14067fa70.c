// module: codexmate_lib/core/analytics
// addr: 0x14067fa70
// name: sub_14067FA70
// win 1.2.1 | module src/core/analytics.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14067FA70(const __m128i **a1)
{
  const __m128i *v2; // rsi
  const __m128i *v4; // rbx
  const __m128i *v5; // r14
  const __m128i *v6; // r15
  __m128i si128; // xmm0
  __int8 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi

  v2 = a1[1];
  if ( v2 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      v5 = *a1;
      v6 = *a1 + 1;
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(*a1));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            si128 = _mm_load_si128(v6);
            v5 -= 104;
            ++v6;
            _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v9 = &v5->m128i_i8[-104 * _RAX];
        v10 = *((_QWORD *)v9 - 13);
        if ( v10 )
          sub_140001660(*((_QWORD *)v9 - 12), v10, 1);
        v11 = *((_QWORD *)v9 - 8);
        if ( v11 )
          sub_140001660(*((_QWORD *)v9 - 7), v11, 1);
        v12 = *((_QWORD *)v9 - 5);
        if ( v12 )
          sub_140001660(*((_QWORD *)v9 - 4), 8 * v12, 8);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
        v4 = (const __m128i *)((char *)v4 - 1);
      }
      while ( v4 );
    }
    v13 = (104LL * (_QWORD)v2 + 119) & 0xFFFFFFFFFFFFFFF0uLL;
    v14 = (__int64)v2[1].m128i_i64 + v13 + 1;
    if ( v14 )
      sub_140001660((char *)*a1 - v13, v14, 16);
  }
}