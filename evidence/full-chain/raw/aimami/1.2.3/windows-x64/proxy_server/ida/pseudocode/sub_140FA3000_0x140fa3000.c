// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140fa3000
// name: sub_140FA3000
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FA3000(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  const __m128i *v4; // rbx
  const __m128i *v5; // r14
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdi
  const __m128i *v12; // rbx
  const __m128i *v13; // r14
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // [rsp+20h] [rbp-10h]

  v18 = *a1;
  result = sub_140FA27F0(*a1 + 16);
  v2 = *(_QWORD *)(v18 + 136);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v18 + 152);
    if ( v3 )
    {
      v4 = *(const __m128i **)(v18 + 128);
      v5 = v4 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v4));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v5);
            v4 -= 24;
            ++v5;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v8 = -3 * result;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v4[-1].m128i_i64[v8]) )
          sub_140EA5AE0(&v4[-1].m128i_i64[v8]);
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v3;
      }
      while ( v3 );
    }
    result = (24 * v2 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = result + v2 + 17;
    if ( v9 )
      result = sub_140001660(*(_QWORD *)(v18 + 128) - result, v9, 16);
  }
  v10 = *(_QWORD *)(v18 + 184);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v18 + 200);
    if ( v11 )
    {
      v12 = *(const __m128i **)(v18 + 176);
      v13 = v12 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v12));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v15 = _mm_load_si128(v13);
            v12 -= 24;
            ++v13;
            _R15D = _mm_movemask_epi8(v15) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v16 = -3 * result;
        if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v12[-1] + v16 - 1)) )
          sub_140EA5AE0((__int64 *)&v12[-1] + v16 - 1);
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
        --v11;
      }
      while ( v11 );
    }
    result = (24 * v10 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v17 = result + v10 + 17;
    if ( v17 )
      result = sub_140001660(*(_QWORD *)(v18 + 176) - result, v17, 16);
  }
  if ( v18 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v18 + 8)) )
    return sub_140001660(v18, 224, 8);
  return result;
}