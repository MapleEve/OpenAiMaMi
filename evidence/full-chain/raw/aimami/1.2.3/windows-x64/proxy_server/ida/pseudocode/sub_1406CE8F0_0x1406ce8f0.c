// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406ce8f0
// name: sub_1406CE8F0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CE8F0(__int64 a1)
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
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+38h] [rbp-18h]
  _QWORD *v29; // [rsp+40h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    sub_140001660(*(_QWORD *)(a1 + 24), v2, 1);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    sub_140001660(*(_QWORD *)(a1 + 48), v3, 1);
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 != -1 )
  {
    if ( v4 )
      sub_140001660(*(_QWORD *)(a1 + 128), v4, 1);
    v5 = *(_QWORD *)(a1 + 144);
    if ( v5 )
      sub_140001660(*(_QWORD *)(a1 + 152), v5, 1);
  }
  v6 = *(_QWORD *)(a1 + 176);
  if ( v6 != -1 )
  {
    if ( v6 )
      sub_140001660(*(_QWORD *)(a1 + 184), v6, 1);
    v7 = *(_QWORD *)(a1 + 200);
    if ( v7 )
      sub_140001660(*(_QWORD *)(a1 + 208), v7, 1);
  }
  v29 = (_QWORD *)a1;
  sub_1406813C0((const __m128i **)(a1 + 256));
  HIDWORD(_RAX) = (unsigned __int64)sub_14067EB80(a1 + 304) >> 32;
  v9 = (_QWORD *)a1;
  v10 = *(_QWORD *)(a1 + 360);
  if ( v10 )
  {
    v11 = v29[47];
    if ( v11 )
    {
      v12 = (const __m128i *)v29[44];
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
    v18 = (24 * v10 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v19 = v18 + v10 + 17;
    if ( v19 )
      sub_140001660(v9[44] - v18, v19, 16);
  }
  v20 = v9[9];
  v26 = v9[10];
  v27 = 0;
  v28 = v20;
  while ( 1 )
  {
    result = v27;
    if ( v26 == v27 )
      break;
    ++v27;
    v22 = v20 + 32;
    sub_1402C3260();
    v20 = v22;
  }
  v23 = v29[8];
  if ( v23 )
    result = sub_140001660(v28, 32 * v23, 8);
  v24 = v29[11];
  if ( v24 )
    result = sub_140001660(v29[12], v24, 1);
  v25 = v29[29];
  if ( v25 != -1 )
  {
    if ( v25 )
      return sub_140001660(v29[30], v25, 1);
  }
  return result;
}