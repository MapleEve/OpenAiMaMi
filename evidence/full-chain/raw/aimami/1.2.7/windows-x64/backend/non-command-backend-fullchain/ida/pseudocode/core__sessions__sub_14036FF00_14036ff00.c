// win 1.2.7 | module src/core/sessions.rs | ea 0x14036ff00 | name sub_14036FF00
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14036FF00(const __m128i **a1)
{
  const __m128i *v1; // rsi
  const __m128i *v3; // rbx
  const __m128i *v4; // r14
  const __m128i *v5; // r15
  __m128i si128; // xmm0
  __int8 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi

  v1 = a1[1];
  if ( v1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      v4 = *a1;
      v5 = *a1 + 1;
      _RAX = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(*a1));
      do
      {
        for ( ; !(_DWORD)_RAX; _RAX = _mm_movemask_epi8(si128) ^ 0xFFFFu )
        {
          si128 = _mm_load_si128(v5);
          v4 -= 104;
          ++v5;
        }
        _R12D = _RAX;
        __asm { tzcnt   eax, r12d }
        v9 = &v4->m128i_i8[-104 * _RAX];
        v10 = *((_QWORD *)v9 - 13);
        if ( v10 )
          sub_140001660(*((_QWORD *)v9 - 12), v10, 1);
        v11 = *((_QWORD *)v9 - 10);
        if ( v11 != -1 )
        {
          if ( v11 )
            sub_140001660(*((_QWORD *)v9 - 9), v11, 1);
          v12 = *((_QWORD *)v9 - 7);
          if ( v12 )
            sub_140001660(*((_QWORD *)v9 - 6), v12, 1);
          v13 = *((_QWORD *)v9 - 4);
          if ( v13 != -1 && v13 )
            sub_140001660(*((_QWORD *)v9 - 3), v13, 1);
        }
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        v3 = (const __m128i *)((char *)v3 - 1);
      }
      while ( v3 );
    }
    v14 = (104LL * (_QWORD)v1 + 119) & 0xFFFFFFFFFFFFFFF0uLL;
    v15 = (__int64)v1[1].m128i_i64 + v14 + 1;
    if ( v15 )
      sub_140001660((char *)*a1 - v14, v15, 16);
  }
}
