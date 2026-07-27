// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405e95f0
// name: sub_1405E95F0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1405E95F0(__int64 *a1)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  const __m128i *v7; // r14
  const __m128i *v8; // r15
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx

  v3 = *a1;
  if ( *a1 == -1 )
  {
    v15 = a1[1];
    if ( v15 )
      sub_140001660(a1[2], v15, 1);
    v16 = a1[4];
    if ( v16 )
      sub_140001660(a1[5], v16, 1);
    v17 = a1[8];
    if ( v17 )
    {
      v18 = 16 * v17;
      v19 = 17 * v17 + 33;
      if ( v19 )
        sub_140001660(a1[7] - v18 - 16, v19, 16);
    }
  }
  else
  {
    if ( v3 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(a1[1], v3, 1) >> 32;
    v4 = a1[3];
    if ( v4 )
      HIDWORD(_RAX) = (unsigned __int64)sub_140001660(a1[4], v4, 1) >> 32;
    v5 = a1[8];
    if ( v5 )
    {
      v6 = a1[10];
      if ( v6 )
      {
        v7 = (const __m128i *)a1[7];
        v8 = v7 + 1;
        _R12D = ~_mm_movemask_epi8(_mm_load_si128(v7));
        do
        {
          if ( !(_WORD)_R12D )
          {
            do
            {
              si128 = _mm_load_si128(v8);
              v7 -= 40;
              ++v8;
              _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF;
            }
            while ( !_R12D );
          }
          __asm { tzcnt   eax, r12d }
          v11 = -5 * _RAX;
          v12 = v7[-2].m128i_i64[v11];
          if ( v12 )
            sub_140001660(*((_QWORD *)&v7[-1] + v11 - 1), v12, 1);
          --v6;
          _RAX = _R12D & (unsigned int)(_R12D - 1);
          _R12D &= _R12D - 1;
        }
        while ( v6 );
      }
      v13 = (40 * v5 + 55) & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = v13 + v5 + 17;
      if ( v14 )
        sub_140001660(a1[7] - v13, v14, 16);
    }
  }
}