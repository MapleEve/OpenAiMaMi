// module: codexmate_lib/core/relay/proxy_passthrough
// addr: 0x140674de0
// name: sub_140674DE0
// win 1.2.1 | module src/core/relay/proxy_passthrough.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140674DE0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __m128i si128; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __m128i v21; // xmm6
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  bool v28; // zf
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  _OWORD v32[2]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-38h]
  __int64 v34; // [rsp+50h] [rbp-30h]
  __int64 v35; // [rsp+58h] [rbp-28h]

  v35 = -2;
  v32[1] = xmmword_141767D00;
  v32[0] = _mm_loadu_si128((const __m128i *)&xmmword_141767CF0);
  v2 = sub_1406C11C0(a1, v32);
  LOBYTE(v1) = 1;
  if ( !v2 )
    return (unsigned int)v1;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  if ( !v4 )
  {
LABEL_6:
    v6 = sub_14033BC10(v3, v4);
    if ( !v7 )
      return (unsigned int)v1;
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    v1 = v6;
    nullsub_1(v8);
    v10 = 1;
    v11 = sub_140001650(v9, 1);
    if ( !v11 )
LABEL_9:
      sub_1416C2D4B(v10, v9);
    v12 = v11;
    sub_141684120(v11, v1, v9);
    if ( v9 < 8 )
    {
      v13 = 0;
      goto LABEL_22;
    }
    if ( v9 >= 0x20 )
    {
      v13 = v9 & 0x7FFFFFFFFFFFFFE0LL;
      v14 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_141742460);
      v16 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
      v17 = _mm_load_si128((const __m128i *)&xmmword_141742470);
      do
      {
        v18 = _mm_loadu_si128((const __m128i *)(v12 + v14));
        v19 = _mm_loadu_si128((const __m128i *)(v12 + v14 + 16));
        v20 = _mm_add_epi8(v18, si128);
        v21 = _mm_add_epi8(v19, si128);
        *(__m128i *)(v12 + v14) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v20, v16), v20), v17), v18);
        *(__m128i *)(v12 + v14 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v21, v16), v21), v17),
                                         v19);
        v14 += 32;
      }
      while ( v13 != v14 );
      if ( v9 == v13 )
        goto LABEL_24;
      if ( (v9 & 0x18) == 0 )
      {
        do
        {
LABEL_22:
          *(_BYTE *)(v12 + v13) |= 32 * ((unsigned __int8)(*(_BYTE *)(v12 + v13) - 65) < 0x1Au);
          ++v13;
LABEL_23:
          ;
        }
        while ( v9 != v13 );
LABEL_24:
        if ( v9 == 6 )
        {
          v28 = (*(_DWORD *)v12 ^ 0x72616562 | *(unsigned __int16 *)(v12 + 4) ^ 0x7265) == 0;
LABEL_36:
          LOBYTE(v1) = v28;
          goto LABEL_37;
        }
        v29 = v12;
        v30 = v9;
        if ( v9 > 6 )
        {
          v29 = v12;
          v30 = v9;
          if ( !(*(_DWORD *)v12 ^ 0x72616562 | *(_DWORD *)(v12 + 3) ^ 0x20726572) )
          {
            v33 = v9;
            v34 = v12;
            v29 = sub_14033BC10(v12 + 7, v9 - 7);
            v9 = v33;
            v12 = v34;
          }
        }
        if ( v30 )
        {
          if ( v30 == 12 )
          {
            v28 = (*(_QWORD *)v29 ^ 0x722D696D616D6961LL | *(unsigned int *)(v29 + 8) ^ 0x79616C65LL) == 0;
            goto LABEL_36;
          }
          if ( v30 >= 0x17 )
          {
            v28 = _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v29), (__m128i)xmmword_141748DB0),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v29 + 7)), (__m128i)xmmword_141748DA0))) == 0xFFFF;
            goto LABEL_36;
          }
          LODWORD(v1) = 0;
        }
        else
        {
          LOBYTE(v1) = 1;
        }
LABEL_37:
        sub_140001660(v12, v9, 1);
        return (unsigned int)v1;
      }
    }
    else
    {
      v13 = 0;
    }
    v22 = v13;
    v13 = v9 & 0x7FFFFFFFFFFFFFF8LL;
    v23 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v24 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v25 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    do
    {
      v26 = _mm_loadl_epi64((const __m128i *)(v12 + v22));
      v27 = _mm_add_epi8(v26, v23);
      *(_QWORD *)(v12 + v22) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v27, v24), v27), v25), v26).m128i_u64[0];
      v22 += 8;
    }
    while ( v13 != v22 );
    goto LABEL_23;
  }
  v5 = 0;
  while ( (unsigned __int8)(*(_BYTE *)(v3 + v5) - 32) < 0x5Fu || *(_BYTE *)(v3 + v5) == 9 )
  {
    if ( v4 == ++v5 )
      goto LABEL_6;
  }
  return (unsigned int)v1;
}