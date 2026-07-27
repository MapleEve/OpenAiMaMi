// module: codexmate_lib/core/repository
// addr: 0x1403a5c50
// name: sub_1403A5C50
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403A5C50(__m128i *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __m128i si128; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __int64 result; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __int64 v15; // rbx
  __m128i v16; // xmm0
  _OWORD v17[4]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v18; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+0h]
  __int64 v20; // [rsp+E0h] [rbp+60h] BYREF
  __m256i v21; // [rsp+E8h] [rbp+68h] BYREF
  __m128i v22; // [rsp+108h] [rbp+88h]
  __m128i v23; // [rsp+118h] [rbp+98h]
  __m128i v24; // [rsp+128h] [rbp+A8h]
  __m128i v25; // [rsp+138h] [rbp+B8h]
  __int128 v26; // [rsp+148h] [rbp+C8h]
  __int128 v27; // [rsp+158h] [rbp+D8h]
  __int128 v28; // [rsp+168h] [rbp+E8h]
  __m256i v29; // [rsp+190h] [rbp+110h] BYREF
  __m128i v30; // [rsp+1B0h] [rbp+130h]
  __m128i v31; // [rsp+1C0h] [rbp+140h]
  __m128i v32; // [rsp+1D0h] [rbp+150h]
  __m128i v33; // [rsp+1E0h] [rbp+160h]
  _BYTE v34[88]; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v35; // [rsp+248h] [rbp+1C8h]
  __int128 v36; // [rsp+258h] [rbp+1D8h]
  __int128 v37; // [rsp+268h] [rbp+1E8h]
  __int128 v38; // [rsp+278h] [rbp+1F8h]
  char v39; // [rsp+28Fh] [rbp+20Fh]
  __int64 v40; // [rsp+290h] [rbp+210h]

  v40 = -2;
  v6 = a2[5];
  v7 = a2[6];
  sub_1403C9010(&v20, v6, v7);
  if ( v20 == -2 )
  {
    v39 = 1;
    sub_141486710(v17, v6, v7);
    if ( LODWORD(v17[0]) == 2 )
    {
      *(_QWORD *)&v34[8] = *((_QWORD *)&v17[0] + 1);
      *(_QWORD *)v34 = 2;
LABEL_8:
      v39 = 1;
      sub_140018650(&v34[8]);
      *a1 = (__m128i)-1LL;
      v39 = 0;
      return sub_14034ED40(&v21);
    }
    *(_OWORD *)v34 = v17[0];
    result = v19;
    *(_QWORD *)&v34[80] = v19;
    *(__m128i *)&v34[64] = _mm_loadu_si128(&v18);
    *(_OWORD *)&v34[48] = v17[3];
    *(_OWORD *)&v34[32] = v17[2];
    *(_OWORD *)&v34[16] = v17[1];
    if ( *(_QWORD *)&v17[0] == 2 )
      goto LABEL_8;
    if ( a3 )
    {
      a1[5] = v25;
      a1[4] = v24;
      v12 = _mm_loadu_si128((const __m128i *)&v21);
      v13 = *(__m128i *)&v21.m256i_u64[2];
      v14 = v22;
      a1[3] = v23;
      a1[2] = v14;
      a1[1] = v13;
      *a1 = v12;
    }
    else
    {
      *a1 = (__m128i)-1LL;
      return sub_14034ED40(&v21);
    }
  }
  else
  {
    sub_141684120(v17, &v20, 176);
    if ( (unsigned __int8)sub_1403CBE70(v17) )
    {
      sub_1403C9DD0(&v20, v17, v6, v7);
      v29 = v21;
      v30 = v22;
      v31 = v23;
      v32 = v24;
      v33 = v25;
      if ( v20 == 2 )
      {
        a1[5] = v33;
        a1[4] = v32;
        si128 = _mm_load_si128((const __m128i *)&v29);
        v9 = *(__m128i *)&v29.m256i_u64[2];
        v10 = v30;
        a1[3] = v31;
        a1[2] = v10;
        a1[1] = v9;
        *a1 = si128;
      }
      else
      {
        v38 = v28;
        v37 = v27;
        v36 = v26;
        *(__m256i *)&v34[8] = v29;
        *(__m128i *)&v34[40] = v30;
        *(__m128i *)&v34[56] = v31;
        *(__m128i *)&v34[72] = v32;
        v35 = v33;
        *(_QWORD *)v34 = v20;
        v15 = v29.m256i_i64[2];
        sub_1403CB3A0((unsigned int)&v20, a2[41], a2[42], v29.m256i_i32[4], v29.m256i_i64[3]);
        v16 = _mm_loadu_si128((const __m128i *)&v20);
        *(__m128i *)((char *)a1 + 24) = *(__m128i *)&v21.m256i_u64[1];
        *(__m128i *)((char *)a1 + 8) = v16;
        a1->m128i_i64[0] = -1;
        if ( *(_QWORD *)&v34[16] )
          sub_140001660(v15, *(_QWORD *)&v34[16], 1);
        if ( *(_QWORD *)&v34[40] )
          sub_140001660(*(_QWORD *)&v34[48], *(_QWORD *)&v34[40], 1);
        if ( *(__int64 *)&v34[64] > 0 )
          sub_140001660(*(_QWORD *)&v34[72], *(_QWORD *)&v34[64], 1);
        if ( v35.m128i_i64[0] > 0 )
          sub_140001660(v35.m128i_i64[1], v35.m128i_i64[0], 1);
        if ( *((__int64 *)&v36 + 1) > 0 )
          sub_140001660(v37, *((_QWORD *)&v36 + 1), 1);
      }
    }
    else
    {
      *a1 = (__m128i)-1LL;
    }
    return sub_14034E960(v17);
  }
  return result;
}