// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140779de0 | successor of pre-update 0x14029e410 | session <审计会话>
// match evidence: {"body_sim": 0.603, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_140779DE0(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  const __m128i *v4; // rbx
  __m128i si128; // xmm0
  const __m128i *v6; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdi
  const __m128i *v13; // rbx
  const __m128i *v14; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rsi

  HIDWORD(_RAX) = (unsigned __int64)sub_14018F950(a1) >> 32;
  v2 = a1[7];
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      v4 = (const __m128i *)a1[6];
      si128 = _mm_load_si128(v4);
      v6 = v4 + 1;
      _R15D = ~_mm_movemask_epi8(si128);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v6);
            v4 -= 24;
            ++v6;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v8 = -3LL * _RAX;
        v9 = *((_QWORD *)&v4[-1] + v8 - 1);
        if ( v9 )
          *(double *)si128.m128i_i64 = sub_140001660(v4[-1].m128i_i64[v8], v9, 1);
        --v3;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v3 );
    }
    _RAX = (24 * v2 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v10 = _RAX + v2 + 17;
    if ( v10 )
      *(double *)si128.m128i_i64 = sub_140001660(a1[6] - _RAX, v10, 16);
  }
  v11 = a1[13];
  if ( v11 )
  {
    v12 = a1[15];
    if ( v12 )
    {
      v13 = (const __m128i *)a1[12];
      si128 = _mm_load_si128(v13);
      v14 = v13 + 1;
      _R15D = ~_mm_movemask_epi8(si128);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v14);
            v13 -= 24;
            ++v14;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v16 = -3LL * _RAX;
        v17 = *((_QWORD *)&v13[-1] + v16 - 1);
        if ( v17 )
          *(double *)si128.m128i_i64 = sub_140001660(v13[-1].m128i_i64[v16], v17, 1);
        --v12;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v12 );
    }
    v18 = (24 * v11 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v19 = v18 + v11 + 17;
    if ( v19 )
      *(double *)si128.m128i_i64 = sub_140001660(a1[12] - v18, v19, 16);
  }
  return *(double *)si128.m128i_i64;
}
