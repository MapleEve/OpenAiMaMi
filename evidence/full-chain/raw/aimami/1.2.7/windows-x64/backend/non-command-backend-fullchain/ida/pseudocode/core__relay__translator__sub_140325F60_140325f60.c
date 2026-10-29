// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140325f60 | name sub_140325F60
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140325F60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  const __m128i *v18; // r15
  __int64 v19; // r12
  __m128i *v20; // rax
  __m128i *v21; // rbx
  __m128i *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // r15
  unsigned __int64 v29; // r8
  __m128i si128; // xmm0
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm3
  __m128i v34; // xmm4
  __m128i v35; // xmm5
  __m128i v36; // xmm6
  __int64 v37; // r8
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  __m128i v42; // xmm4
  char *v43; // rax
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __m128i *v48; // rax
  _OWORD v49[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v50[3]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v51; // [rsp+68h] [rbp-18h] BYREF
  __int64 v52; // [rsp+78h] [rbp-8h]
  __m128i *v53; // [rsp+80h] [rbp+0h]
  char v54; // [rsp+88h] [rbp+8h] BYREF
  __m128i v55; // [rsp+90h] [rbp+10h] BYREF
  __int64 v56; // [rsp+A0h] [rbp+20h]
  char v57; // [rsp+A9h] [rbp+29h]
  char v58; // [rsp+ABh] [rbp+2Bh]
  char v59; // [rsp+ADh] [rbp+2Dh]
  __m128i *v60; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v61; // [rsp+B8h] [rbp+38h]
  char v62; // [rsp+C6h] [rbp+46h]
  char v63; // [rsp+C7h] [rbp+47h]
  __int64 v64; // [rsp+C8h] [rbp+48h]

  v64 = -2;
  v9 = sub_1416419F0(aToolChoice_1, 11, a2);
  if ( v9 )
  {
    v10 = sub_1416419F0(aType_4, 4, v9);
    if ( v10 )
    {
      if ( *(_BYTE *)v10 == 3 )
      {
        result = sub_140E91160(*(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 24));
        v13 = v12 == 0;
        if ( v12 >= 0 )
          goto LABEL_5;
LABEL_10:
        v19 = 0;
        v17 = v12;
        goto LABEL_11;
      }
    }
  }
  result = sub_140E91160(1, 0);
  v13 = v12 == 0;
  if ( v12 < 0 )
    goto LABEL_10;
LABEL_5:
  if ( v13 )
  {
    *(_BYTE *)(a1 + 8) = a5;
    *(_QWORD *)a1 = 0;
    return result;
  }
  v61 = a2;
  v14 = a1;
  v15 = a3;
  v16 = a4;
  v17 = v12;
  v18 = (const __m128i *)result;
  nullsub_1(a5);
  v19 = 1;
  v20 = (__m128i *)sub_140001650(v17, 1);
  if ( !v20 )
LABEL_11:
    sub_141938D2B(v19, v17);
  v21 = v20;
  sub_1418F44E0(v20, v18, v17);
  v22 = v21;
  if ( v17 < 8 )
  {
    v23 = 0;
    v24 = v16;
    v25 = v15;
    v26 = v14;
    v27 = v61;
    v28 = a5;
    goto LABEL_22;
  }
  v24 = v16;
  v28 = a5;
  if ( v17 < 0x20 )
  {
    v23 = 0;
    v25 = v15;
    v26 = v14;
    v27 = v61;
    goto LABEL_19;
  }
  v23 = v17 & 0x7FFFFFFFFFFFFFE0LL;
  v29 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419D36E0);
  v31 = _mm_load_si128((const __m128i *)&xmmword_1419D36F0);
  v32 = _mm_load_si128((const __m128i *)&xmmword_1419D3700);
  v25 = v15;
  do
  {
    v33 = _mm_loadu_si128(&v22[v29 / 0x10]);
    v34 = _mm_loadu_si128(&v22[v29 / 0x10 + 1]);
    v35 = _mm_add_epi8(v33, si128);
    v36 = _mm_add_epi8(v34, si128);
    v22[v29 / 0x10] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v35, v31), v35), v32), v33);
    v22[v29 / 0x10 + 1] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v36, v31), v36), v32), v34);
    v29 += 32LL;
  }
  while ( v23 != v29 );
  v26 = v14;
  v27 = v61;
  if ( v17 == v23 )
    goto LABEL_24;
  if ( (v17 & 0x18) != 0 )
  {
LABEL_19:
    v37 = v23;
    v23 = v17 & 0x7FFFFFFFFFFFFFF8LL;
    v38 = _mm_load_si128((const __m128i *)&xmmword_1419D3710);
    v39 = _mm_load_si128((const __m128i *)&xmmword_1419D3720);
    v40 = _mm_load_si128((const __m128i *)&xmmword_1419D3730);
    do
    {
      v41 = _mm_loadl_epi64((__m128i *)((char *)v22 + v37));
      v42 = _mm_add_epi8(v41, v38);
      *(__int64 *)((char *)v22->m128i_i64 + v37) = _mm_or_si128(
                                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v42, v39), v42), v40),
                                                     v41).m128i_u64[0];
      v37 += 8;
    }
    while ( v23 != v37 );
    goto LABEL_23;
  }
  do
  {
LABEL_22:
    v22->m128i_i8[v23] |= 32 * ((unsigned __int8)(v22->m128i_i8[v23] - 65) < 0x1Au);
    ++v23;
LABEL_23:
    ;
  }
  while ( v17 != v23 );
LABEL_24:
  if ( v17 != 4 )
  {
    if ( v17 != 3 || v22->m128i_i16[0] ^ 0x6E61 | v22->m128i_u8[2] ^ 0x79 )
      goto LABEL_27;
LABEL_30:
    v60 = v22;
    v61 = v17;
    sub_14022DBF0(&v54, v25, v24);
    if ( v59 == 2 )
    {
      v43 = &aCustomToolGram[50];
      v44 = 75;
    }
    else
    {
      sub_14022DBF0(&v54, v25, v24);
      if ( v59 == 2 || v57 || (sub_14022DBF0(&v54, v25, v24), v43 = &aCustomToolGram[125], v44 = 78, v59 != 2) && v58 )
      {
        sub_14022DBF0(&v54, v25, v24);
        if ( v59 == 2 || v57 )
        {
          v17 = v61;
          v22 = v60;
          if ( !v28 )
          {
            *(_BYTE *)(v26 + 8) = 0;
            goto LABEL_28;
          }
          v51.m128i_i64[0] = 0;
          v52 = 0;
          nullsub_1(v60);
          v45 = (_DWORD *)sub_140001650(4, 1);
          if ( !v45 )
            sub_141938D2B(1, 4);
          *v45 = 1701869940;
          v50[0] = 4;
          v50[1] = v45;
          v50[2] = 4;
          v63 = 1;
          sub_14040FB10(&v54, &off_1419E4BA0);
          if ( v54 == -1 )
          {
            *(_QWORD *)&v49[0] = v55.m128i_i64[0];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)v49,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E9108);
          }
          v46 = _mm_loadu_si128((const __m128i *)&v54);
          v49[1] = _mm_loadu_si128((const __m128i *)&v55.m128i_u64[1]);
          v49[0] = v46;
          v63 = 0;
          sub_140E72AA0(&v54, &v51, v50, v49);
          if ( v54 != -1 )
            sub_14002F9D0(&v54);
          v55 = _mm_loadu_si128(&v51);
          v56 = v52;
          v54 = 5;
          v62 = 1;
          v53 = (__m128i *)sub_141641AF0(aThinking_0, 8, v27);
          sub_14002F9D0(v53);
          v47 = _mm_loadu_si128((const __m128i *)&v54);
          v48 = v53;
          v53[1] = _mm_loadu_si128((const __m128i *)&v55.m128i_u64[1]);
          *v48 = v47;
          *(_BYTE *)(v26 + 8) = 0;
        }
        else
        {
          *(_BYTE *)(v26 + 8) = v28;
        }
        *(_QWORD *)v26 = 0;
LABEL_47:
        v17 = v61;
        v22 = v60;
        return sub_140001660(v22, v17, 1);
      }
    }
    *(_QWORD *)v26 = v43;
    *(_QWORD *)(v26 + 8) = v44;
    goto LABEL_47;
  }
  if ( v22->m128i_i32[0] == 1819242356 )
    goto LABEL_30;
LABEL_27:
  *(_BYTE *)(v26 + 8) = v28;
LABEL_28:
  *(_QWORD *)v26 = 0;
  return sub_140001660(v22, v17, 1);
}
