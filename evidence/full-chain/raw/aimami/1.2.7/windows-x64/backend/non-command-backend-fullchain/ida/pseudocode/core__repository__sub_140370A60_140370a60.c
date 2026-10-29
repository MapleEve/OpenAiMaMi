// win 1.2.7 | module src/core/repository.rs | ea 0x140370a60 | name sub_140370A60
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140370A60(const __m128i **a1)
{
  const __m128i *v1; // rsi
  const __m128i *v3; // rbx
  const __m128i *v4; // r14
  const __m128i *v5; // r15
  __m128i si128; // xmm0
  __int8 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi

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
          v4 -= 88;
          ++v5;
        }
        _R12D = _RAX;
        __asm { tzcnt   eax, r12d }
        v9 = &v4->m128i_i8[-88 * _RAX];
        v10 = *((_QWORD *)v9 - 11);
        if ( v10 )
          sub_140001660(*((_QWORD *)v9 - 10), v10, 1);
        v11 = *((_QWORD *)v9 - 6);
        if ( v11 != -1 && v11 )
          sub_140001660(*((_QWORD *)v9 - 5), v11, 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        v3 = (const __m128i *)((char *)v3 - 1);
      }
      while ( v3 );
    }
    v12 = (88LL * (_QWORD)v1 + 103) & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = (__int64)v1[1].m128i_i64 + v12 + 1;
    if ( v13 )
      sub_140001660((char *)*a1 - v12, v13, 16);
  }
}
