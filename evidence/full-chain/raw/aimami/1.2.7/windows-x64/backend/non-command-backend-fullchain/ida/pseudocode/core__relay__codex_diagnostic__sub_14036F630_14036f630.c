// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x14036f630 | name sub_14036F630
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14036F630(const __m128i **a1)
{
  const __m128i *v2; // rsi
  const __m128i *v4; // rbx
  const __m128i *v5; // r14
  const __m128i *v6; // r15
  __m128i si128; // xmm0
  __int8 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi

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
            v5 -= 56;
            ++v6;
            _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v9 = &v5->m128i_i8[-56 * _RAX];
        v10 = *((_QWORD *)v9 - 7);
        if ( v10 )
          sub_140001660(*((_QWORD *)v9 - 6), v10, 1);
        v11 = *((_QWORD *)v9 - 3);
        if ( v11 )
          sub_140001660(*((_QWORD *)v9 - 2), v11, 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
        v4 = (const __m128i *)((char *)v4 - 1);
      }
      while ( v4 );
    }
    v12 = (56LL * (_QWORD)v2 + 71) & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = (__int64)v2[1].m128i_i64 + v12 + 1;
    if ( v13 )
      sub_140001660((char *)*a1 - v12, v13, 16);
  }
}
