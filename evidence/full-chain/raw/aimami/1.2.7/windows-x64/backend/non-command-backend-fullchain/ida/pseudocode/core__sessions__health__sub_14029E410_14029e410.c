// win 1.2.7 | module src/core/sessions/health.rs | ea 0x14029e410 | name sub_14029E410
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14029E410(const __m128i **a1)
{
  const __m128i *v3; // rdi
  const __m128i *v4; // rbx
  const __m128i *v5; // r14
  const __m128i *v6; // r15
  __m128i si128; // xmm0
  const __m128i *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdi
  const __m128i *v13; // rdi
  const __m128i *v14; // rbx
  const __m128i *v15; // r14
  const __m128i *v16; // r15
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  const __m128i *v22; // rdi
  const __m128i *v23; // rbx
  const __m128i *v24; // r14
  const __m128i *v25; // r15
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdi

  v3 = a1[1];
  if ( v3 )
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
            v5 -= 80;
            ++v6;
            _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v9 = &v5[-5 * _RAX];
        v10 = v9[-5].m128i_i64[0];
        if ( v10 )
          sub_140001660(v9[-5].m128i_i64[1], v10, 1);
        v11 = v9[-3].m128i_i64[1];
        if ( v11 != -1 && v11 )
          sub_140001660(v9[-2].m128i_i64[0], v11, 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
        v4 = (const __m128i *)((char *)v4 - 1);
      }
      while ( v4 );
    }
    _RAX = 80LL * (_QWORD)v3;
    v12 = 81LL * (_QWORD)v3 + 97;
    if ( v12 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660((char *)&(*a1)[-5] - _RAX, v12, 16) >> 32;
  }
  v13 = a1[7];
  if ( v13 )
  {
    v14 = a1[9];
    if ( v14 )
    {
      v15 = a1[6];
      v16 = v15 + 1;
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(v15));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v18 = _mm_load_si128(v16);
            v15 -= 24;
            ++v16;
            _R12D = _mm_movemask_epi8(v18) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v19 = -3 * _RAX;
        v20 = *((_QWORD *)&v15[-1] + v19 - 1);
        if ( v20 )
          sub_140001660(v15[-1].m128i_i64[v19], v20, 1);
        v14 = (const __m128i *)((char *)v14 - 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v14 );
    }
    _RAX = (24LL * (_QWORD)v13 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v21 = (__int64)v13[1].m128i_i64 + _RAX + 1;
    if ( v21 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660((char *)a1[6] - _RAX, v21, 16) >> 32;
  }
  v22 = a1[13];
  if ( v22 )
  {
    v23 = a1[15];
    if ( v23 )
    {
      v24 = a1[12];
      v25 = v24 + 1;
      _R12D = ~_mm_movemask_epi8(_mm_load_si128(v24));
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v27 = _mm_load_si128(v25);
            v24 -= 24;
            ++v25;
            _R12D = _mm_movemask_epi8(v27) ^ 0xFFFF;
          }
          while ( !_R12D );
        }
        __asm { tzcnt   eax, r12d }
        v28 = -3 * _RAX;
        v29 = *((_QWORD *)&v24[-1] + v28 - 1);
        if ( v29 )
          sub_140001660(v24[-1].m128i_i64[v28], v29, 1);
        v23 = (const __m128i *)((char *)v23 - 1);
        _RAX = _R12D & (unsigned int)(_R12D - 1);
        _R12D &= _R12D - 1;
      }
      while ( v23 );
    }
    v30 = (24LL * (_QWORD)v22 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v31 = (__int64)v22[1].m128i_i64 + v30 + 1;
    if ( v31 )
      sub_140001660((char *)a1[12] - v30, v31, 16);
  }
}
