// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408cfd20 | successor of pre-update 0x140efc0c0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.554, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408CFD20(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __m128i si128; // xmm1
  __m128i v7; // xmm0
  __m128i v8; // xmm2
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  __m128i v11; // xmm5
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __m128i v17; // xmm3
  __m128i v18; // xmm1
  __int64 v20; // rdx
  char v21; // r9
  char v22; // r10
  _QWORD v23[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  _QWORD v27[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+80h] [rbp+0h] BYREF
  __int64 v29; // [rsp+88h] [rbp+8h]
  unsigned __int64 v30; // [rsp+90h] [rbp+10h]
  __int64 v31; // [rsp+98h] [rbp+18h]
  __int64 v32; // [rsp+A0h] [rbp+20h]
  __int64 v33; // [rsp+A8h] [rbp+28h]

  v33 = -2;
  sub_1408D0020(&v28);
  sub_1416B18A0((unsigned int)v23, *(_QWORD *)(a1 + 776), *(_QWORD *)(a1 + 784), (unsigned int)&unk_141A97808, 25);
  v31 = v23[1];
  sub_1416DA570(v27);
  v32 = v27[1];
  sub_1408D0020(&v24);
  if ( v27[0] > 0LL )
    sub_140001660(v32, v27[0], 1);
  if ( v23[0] )
    sub_140001660(v31, v23[0], 1);
  v3 = v29;
  if ( v30 != v26 )
  {
LABEL_12:
    v1 = 0;
    goto LABEL_13;
  }
  if ( v30 > 0xF )
  {
    v4 = v30 >> 4;
    v5 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A045A0);
    v7 = _mm_load_si128((const __m128i *)&xmmword_141A045B0);
    v8 = _mm_load_si128((const __m128i *)&xmmword_141A045C0);
    while ( 1 )
    {
      v9 = _mm_loadu_si128((const __m128i *)(v29 + v5));
      v10 = _mm_add_epi8(v9, si128);
      v11 = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v10, v7), v10), v8), v9);
      v12 = _mm_loadu_si128((const __m128i *)(v25 + v5));
      v13 = _mm_add_epi8(v12, si128);
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v13, v7), v13), v8), v12), v11)) != 0xFFFF )
        goto LABEL_12;
      v5 += 16;
      if ( !--v4 )
      {
        LOBYTE(v1) = 1;
        if ( (v30 & 0xF) == 0 )
          goto LABEL_13;
        v14 = _mm_loadu_si128((const __m128i *)(v29 + v30 - 16));
        v15 = _mm_add_epi8(v14, si128);
        v16 = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v15, v7), v15), v8), v14);
        v17 = _mm_loadu_si128((const __m128i *)(v25 + v30 - 16));
        v18 = _mm_add_epi8(si128, v17);
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v7, v18), v18), v8), v17), v16)) == 0xFFFF )
          goto LABEL_13;
        goto LABEL_12;
      }
    }
  }
  v20 = 0;
  do
  {
    LOBYTE(v1) = v30 == v20;
    if ( v30 == v20 )
      break;
    v21 = *(_BYTE *)(v29 + v20) | (32 * ((unsigned __int8)(*(_BYTE *)(v29 + v20) - 65) < 0x1Au));
    v22 = *(_BYTE *)(v25 + v20) | (32 * ((unsigned __int8)(*(_BYTE *)(v25 + v20) - 65) < 0x1Au));
    ++v20;
  }
  while ( v21 == v22 );
LABEL_13:
  if ( v24 )
    sub_140001660(v25, v24, 1);
  if ( v28 )
    sub_140001660(v3, v28, 1);
  return v1;
}
