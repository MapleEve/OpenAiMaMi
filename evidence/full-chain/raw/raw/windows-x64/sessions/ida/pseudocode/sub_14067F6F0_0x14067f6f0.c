// module: codexmate_lib/core/sessions
// addr: 0x14067f6f0
// name: sub_14067F6F0
// win 1.2.1 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14067F6F0(const __m128i **a1)
{
  const __m128i *v1; // rsi
  const __m128i *v3; // rbx
  const __m128i *v4; // r14
  const __m128i *v5; // r15
  __m128i si128; // xmm0
  const __m128i *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
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
          v4 -= 80;
          ++v5;
        }
        _R12D = _RAX;
        __asm { tzcnt   eax, r12d }
        v9 = &v4[-5 * _RAX];
        v10 = v9[-5].m128i_i64[0];
        if ( v10 )
          sub_140001660(v9[-5].m128i_i64[1], v10, 1);
        v11 = v9[-3].m128i_i64[1];
        if ( v11 != -1 && v11 )
          sub_140001660(v9[-2].m128i_i64[0], v11, 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        v3 = (const __m128i *)((char *)v3 - 1);
      }
      while ( v3 );
    }
    v12 = 80LL * (_QWORD)v1;
    v13 = 81LL * (_QWORD)v1 + 97;
    if ( v13 )
      sub_140001660(&(*a1)[v12 / 0xFFFFFFFFFFFFFFF0uLL - 5], v13, 16);
  }
}