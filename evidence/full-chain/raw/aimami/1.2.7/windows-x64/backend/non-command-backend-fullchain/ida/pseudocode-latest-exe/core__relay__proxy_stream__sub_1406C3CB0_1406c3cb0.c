// win 1.2.7 latest-exe | module src/core/relay/proxy_stream.rs | ea 0x1406c3cb0 | successor of pre-update 0x140d1c7d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.808, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1406C3CB0(_QWORD *a1)
{
  __int64 v2; // rdx
  __m128i si128; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // rdx
  _QWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  const __m128i *v14; // rbx
  const __m128i *v15; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v26; // [rsp+28h] [rbp-28h]
  __int64 v27; // [rsp+30h] [rbp-20h]
  __int64 v28; // [rsp+38h] [rbp-18h]
  _QWORD *v29; // [rsp+40h] [rbp-10h]

  v2 = a1[10];
  if ( v2 )
    *(double *)si128.m128i_i64 = sub_140001660(a1[11], v2, 1);
  v4 = a1[13];
  if ( v4 )
    *(double *)si128.m128i_i64 = sub_140001660(a1[14], v4, 1);
  v5 = a1[23];
  if ( v5 != -1 )
  {
    if ( v5 )
      *(double *)si128.m128i_i64 = sub_140001660(a1[24], v5, 1);
    v6 = a1[26];
    if ( v6 )
      *(double *)si128.m128i_i64 = sub_140001660(a1[27], v6, 1);
  }
  v7 = a1[30];
  if ( v7 != -1 )
  {
    if ( v7 )
      *(double *)si128.m128i_i64 = sub_140001660(a1[31], v7, 1);
    v8 = a1[33];
    if ( v8 )
      *(double *)si128.m128i_i64 = sub_140001660(a1[34], v8, 1);
  }
  v29 = a1;
  sub_140191070(a1 + 40);
  HIDWORD(_RAX) = (unsigned __int64)sub_14018EA10(a1 + 46) >> 32;
  v11 = a1;
  v12 = a1[53];
  if ( v12 )
  {
    v13 = v29[55];
    if ( v13 )
    {
      v14 = (const __m128i *)v29[52];
      si128 = _mm_load_si128(v14);
      v15 = v14 + 1;
      _R15D = ~_mm_movemask_epi8(si128);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v15);
            v14 -= 24;
            ++v15;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v17 = -3 * _RAX;
        v10 = *((_QWORD *)&v14[-1] + v17 - 1);
        if ( v10 )
          *(double *)si128.m128i_i64 = sub_140001660(v14[-1].m128i_i64[v17], v10, 1);
        --v13;
        _RAX = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v13 );
    }
    v18 = (24 * v12 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v19 = v18 + v12 + 17;
    if ( v19 )
      *(double *)si128.m128i_i64 = sub_140001660(v11[52] - v18, v19, 16);
  }
  v20 = v11[17];
  v26 = v11[18];
  v27 = 0;
  v28 = v20;
  while ( v26 != v27 )
  {
    ++v27;
    v21 = v20 + 32;
    sub_1401AB4D0(v20, v10);
    v20 = v21;
  }
  v22 = v29[16];
  if ( v22 )
    *(double *)si128.m128i_i64 = sub_140001660(v28, 32 * v22, 8);
  v23 = v29[19];
  if ( v23 )
    *(double *)si128.m128i_i64 = sub_140001660(v29[20], v23, 1);
  v24 = v29[37];
  if ( v24 != -1 && v24 )
    *(double *)si128.m128i_i64 = sub_140001660(v29[38], v24, 1);
  return *(double *)si128.m128i_i64;
}
