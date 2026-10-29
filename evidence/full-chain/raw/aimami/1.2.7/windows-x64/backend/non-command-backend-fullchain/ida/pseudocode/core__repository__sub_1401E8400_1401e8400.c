// win 1.2.7 | module src/core/repository.rs | ea 0x1401e8400 | name sub_1401E8400
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401E8400(__m128i *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 result; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  __m256i v18; // [rsp+38h] [rbp-48h] BYREF
  __m128i v19; // [rsp+58h] [rbp-28h]
  __m128i v20; // [rsp+68h] [rbp-18h]
  __m128i v21; // [rsp+78h] [rbp-8h]
  __m128i v22; // [rsp+88h] [rbp+8h]
  __int128 v23; // [rsp+98h] [rbp+18h]
  __int128 v24; // [rsp+A8h] [rbp+28h]
  __int128 v25; // [rsp+B8h] [rbp+38h]
  __int128 v26; // [rsp+C8h] [rbp+48h]
  __int64 v27; // [rsp+D8h] [rbp+58h]
  __int64 v28; // [rsp+E0h] [rbp+60h] BYREF
  __m256i v29; // [rsp+E8h] [rbp+68h] BYREF
  __m128i v30; // [rsp+108h] [rbp+88h]
  __m128i v31; // [rsp+118h] [rbp+98h]
  __m128i v32; // [rsp+128h] [rbp+A8h]
  __m128i v33; // [rsp+138h] [rbp+B8h]
  __int128 v34; // [rsp+148h] [rbp+C8h]
  __int128 v35; // [rsp+158h] [rbp+D8h]
  __int128 v36; // [rsp+168h] [rbp+E8h]
  __int128 v37; // [rsp+178h] [rbp+F8h]
  __int64 v38; // [rsp+188h] [rbp+108h]
  __m128i v39; // [rsp+190h] [rbp+110h] BYREF
  __int64 v40; // [rsp+1A8h] [rbp+128h]
  __int64 v41; // [rsp+1B0h] [rbp+130h]
  __int64 v42; // [rsp+1C0h] [rbp+140h]
  __int64 v43; // [rsp+1C8h] [rbp+148h]
  __int64 v44; // [rsp+1D8h] [rbp+158h]
  __int64 v45; // [rsp+1E0h] [rbp+160h]
  __int64 v46; // [rsp+1F0h] [rbp+170h]
  __int64 v47; // [rsp+1F8h] [rbp+178h]
  __int64 v48; // [rsp+208h] [rbp+188h]
  __int64 v49; // [rsp+210h] [rbp+190h]
  __int64 v50; // [rsp+220h] [rbp+1A0h]
  __int64 v51; // [rsp+228h] [rbp+1A8h]
  __m256i v52; // [rsp+240h] [rbp+1C0h] BYREF
  __m128i v53; // [rsp+260h] [rbp+1E0h]
  __m128i v54; // [rsp+270h] [rbp+1F0h]
  __m128i v55; // [rsp+280h] [rbp+200h]
  __m128i v56; // [rsp+290h] [rbp+210h]
  char v57; // [rsp+2AFh] [rbp+22Fh]
  __int64 v58; // [rsp+2B0h] [rbp+230h]

  v58 = -2;
  v6 = a2[5];
  v7 = a2[6];
  sub_140ED4870(&v17, v6, v7);
  if ( v17 == -2 )
  {
    v57 = 1;
    result = sub_141695A00(&v28, v6, v7);
    if ( (_DWORD)v28 == 2 )
    {
      if ( (v29.m256i_i8[0] & 3u) - 2 >= 2 && (v29.m256i_i8[0] & 3) != 0 )
      {
        --v29.m256i_i64[0];
        LOBYTE(v28) = 3;
        v57 = 1;
        sub_1416BCB00(&v29);
      }
      *a1 = (__m128i)-1LL;
      v57 = 0;
      return sub_1401954F0(&v18);
    }
    else if ( a3 )
    {
      a1[5] = v22;
      a1[4] = v21;
      v13 = _mm_loadu_si128((const __m128i *)&v18);
      v14 = *(__m128i *)&v18.m256i_u64[2];
      v15 = v19;
      a1[3] = v20;
      a1[2] = v15;
      a1[1] = v14;
      *a1 = v13;
    }
    else
    {
      *a1 = (__m128i)-1LL;
      return sub_1401954F0(&v18);
    }
    return result;
  }
  sub_1418F44E0(&v39, (const __m128i *)&v17, 0xB0u);
  result = sub_140ED7E50(&v39);
  if ( (_BYTE)result )
  {
    sub_140ED5630(&v17, &v39, v6, v7);
    result = v17;
    v52 = v18;
    v53 = v19;
    v54 = v20;
    v55 = v21;
    v56 = v22;
    if ( v17 == 2 )
    {
      a1[5] = v56;
      a1[4] = v55;
      si128 = _mm_load_si128((const __m128i *)&v52);
      v10 = *(__m128i *)&v52.m256i_u64[2];
      v11 = v53;
      a1[3] = v54;
      a1[2] = v11;
      a1[1] = v10;
      *a1 = si128;
      v12 = v39.m128i_i64[0];
      if ( v39.m128i_i64[0] == -1 )
        goto LABEL_19;
    }
    else
    {
      v38 = v27;
      v37 = v26;
      v36 = v25;
      v35 = v24;
      v34 = v23;
      v29 = v52;
      v30 = v53;
      v31 = v54;
      v32 = v55;
      v33 = v56;
      v28 = v17;
      sub_140ED6DC0((unsigned int)&v17, a2[41], a2[42], v53.m128i_i32[2], v54.m128i_i64[0]);
      v16 = _mm_loadu_si128((const __m128i *)&v17);
      *(__m128i *)((char *)a1 + 24) = *(__m128i *)&v18.m256i_u64[1];
      *(__m128i *)((char *)a1 + 8) = v16;
      a1->m128i_i64[0] = -1;
      result = sub_140034220(&v28);
      v12 = v39.m128i_i64[0];
      if ( v39.m128i_i64[0] == -1 )
        goto LABEL_19;
    }
LABEL_17:
    if ( v12 )
      result = sub_140001660(v39.m128i_i64[1], v12, 1);
    goto LABEL_19;
  }
  *a1 = (__m128i)-1LL;
  v12 = v39.m128i_i64[0];
  if ( v39.m128i_i64[0] != -1 )
    goto LABEL_17;
LABEL_19:
  if ( v40 != -1 && v40 )
    result = sub_140001660(v41, v40, 1);
  if ( v42 != -1 && v42 )
    result = sub_140001660(v43, v42, 1);
  if ( v44 != -1 && v44 )
    result = sub_140001660(v45, v44, 1);
  if ( v46 != -1 && v46 )
    result = sub_140001660(v47, v46, 1);
  if ( v48 != -1 && v48 )
    result = sub_140001660(v49, v48, 1);
  if ( v50 != -1 && v50 )
    return sub_140001660(v51, v50, 1);
  return result;
}
