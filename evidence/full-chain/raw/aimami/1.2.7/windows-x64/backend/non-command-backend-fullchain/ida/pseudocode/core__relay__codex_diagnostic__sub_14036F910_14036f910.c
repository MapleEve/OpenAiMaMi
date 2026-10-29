// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x14036f910 | name sub_14036F910
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14036F910(const __m128i **a1)
{
  const __m128i *v2; // rsi
  const __m128i *v4; // r14
  const __m128i *v5; // r15
  const __m128i *v6; // r12
  __m128i si128; // xmm0
  __int8 *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi

  v2 = a1[1];
  if ( v2 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      v5 = *a1;
      v6 = *a1 + 1;
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(*a1));
      do
      {
        if ( !(_WORD)_R13D )
        {
          do
          {
            si128 = _mm_load_si128(v6);
            v5 -= 376;
            ++v6;
            _R13D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R13D );
        }
        __asm { tzcnt   eax, r13d }
        v9 = &v5->m128i_i8[-376 * _RAX];
        v10 = *((_QWORD *)v9 - 47);
        if ( v10 )
          sub_140001660(*((_QWORD *)v9 - 46), v10, 1);
        v4 = (const __m128i *)((char *)v4 - 1);
        HIDWORD(_RAX) = (unsigned __int64)sub_14029E230((_QWORD *)v9 - 43) >> 32;
        _R13D &= _R13D - 1;
      }
      while ( v4 );
    }
    v11 = (376LL * (_QWORD)v2 + 391) & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = (__int64)v2[1].m128i_i64 + v11 + 1;
    if ( v12 )
      sub_140001660((char *)*a1 - v11, v12, 16);
  }
}
