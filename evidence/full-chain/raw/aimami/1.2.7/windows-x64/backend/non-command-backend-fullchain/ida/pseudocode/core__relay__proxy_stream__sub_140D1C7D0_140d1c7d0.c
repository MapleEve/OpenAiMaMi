// win 1.2.7 | module src/core/relay/proxy_stream.rs | ea 0x140d1c7d0 | name sub_140D1C7D0
// win 1.2.7 | module src/core/relay/proxy_stream.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D1C7D0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  const __m128i *v12; // rbx
  const __m128i *v13; // r14
  __m128i si128; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 result; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+38h] [rbp-18h]
  _QWORD *v29; // [rsp+40h] [rbp-10h]

  if ( *(_DWORD *)a1 != 2 )
    return sub_140D1DBB0(a1);
  v2 = a1[11];
  if ( v2 )
    sub_140001660(a1[12], v2, 1);
  v3 = a1[14];
  if ( v3 )
    sub_140001660(a1[15], v3, 1);
  v4 = a1[24];
  if ( v4 != -1 )
  {
    if ( v4 )
      sub_140001660(a1[25], v4, 1);
    v5 = a1[27];
    if ( v5 )
      sub_140001660(a1[28], v5, 1);
  }
  v6 = a1[31];
  if ( v6 != -1 )
  {
    if ( v6 )
      sub_140001660(a1[32], v6, 1);
    v7 = a1[34];
    if ( v7 )
      sub_140001660(a1[35], v7, 1);
  }
  v29 = a1;
  sub_140371D30(a1 + 41);
  HIDWORD(_RAX) = (unsigned __int64)sub_14036FB80(a1 + 47) >> 32;
  v9 = a1;
  v10 = a1[54];
  if ( v10 )
  {
    v11 = v29[56];
    if ( v11 )
    {
      v12 = (const __m128i *)v29[53];
      v13 = v12 + 1;
      _R15D = ~_mm_movemask_epi8(_mm_load_si128(v12));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v13);
            v12 -= 24;
            ++v13;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v16 = -3 * _RAX;
        v17 = *((_QWORD *)&v12[-1] + v16 - 1);
        if ( v17 )
          sub_140001660(v12[-1].m128i_i64[v16], v17, 1);
        --v11;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v11 );
    }
    v19 = (24 * v10 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v20 = v19 + v10 + 17;
    if ( v20 )
      sub_140001660(v9[53] - v19, v20, 16);
  }
  v21 = v9[18];
  v26 = v9[19];
  v27 = 0;
  v28 = v21;
  while ( 1 )
  {
    result = v27;
    if ( v26 == v27 )
      break;
    ++v27;
    v22 = v21 + 32;
    sub_1403880E0(v21);
    v21 = v22;
  }
  v23 = v29[17];
  if ( v23 )
    result = sub_140001660(v28, 32 * v23, 8);
  v24 = v29[20];
  if ( v24 )
    result = sub_140001660(v29[21], v24, 1);
  v25 = v29[38];
  if ( v25 != -1 )
  {
    if ( v25 )
      return sub_140001660(v29[39], v25, 1);
  }
  return result;
}
