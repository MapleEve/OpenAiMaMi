// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140164630 | name sub_140164630
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
const char *__fastcall sub_140164630(__int64 a1, __int64 a2)
{
  __int128 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r12
  __m128i si128; // xmm6
  __m128i v9; // xmm7
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rax
  __m128i v15; // xmm0
  _OWORD *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // r15
  __int128 v21; // xmm0
  _OWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  __int128 v28; // xmm0
  _OWORD *v29; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  __int128 v33; // xmm0
  _OWORD *v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r15
  const __m128i *v39; // rbx
  __m128i *v40; // rax
  const __m128i *v41; // rbx
  __m128i *v42; // rax
  __int64 v43; // r14
  __int128 v44; // xmm0
  _OWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r14
  _DWORD *v48; // rax
  __int64 v49; // rcx
  __m128i *v50; // rax
  __int64 v51; // rcx
  _DWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r14
  const __m128i *v55; // rbx
  __m128i *v56; // rax
  __int128 v57; // xmm0
  _OWORD *v58; // rax
  _BYTE v59[32]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v60; // [rsp+40h] [rbp-40h] BYREF
  __int64 v61; // [rsp+50h] [rbp-30h]
  __int64 v62; // [rsp+58h] [rbp-28h] BYREF
  _DWORD *v63; // [rsp+60h] [rbp-20h]
  __int64 v64; // [rsp+68h] [rbp-18h]
  __m256i v65; // [rsp+70h] [rbp-10h] BYREF
  __int64 v66; // [rsp+90h] [rbp+10h]
  char v67; // [rsp+9Eh] [rbp+1Eh]
  char v68; // [rsp+9Fh] [rbp+1Fh]
  char v69; // [rsp+A0h] [rbp+20h]
  char v70; // [rsp+A1h] [rbp+21h]
  char v71; // [rsp+A2h] [rbp+22h]
  char v72; // [rsp+A3h] [rbp+23h]
  char v73; // [rsp+A4h] [rbp+24h]
  char v74; // [rsp+A5h] [rbp+25h]
  char v75; // [rsp+A6h] [rbp+26h]
  char v76; // [rsp+A7h] [rbp+27h]
  __int64 v77; // [rsp+A8h] [rbp+28h]

  v77 = -2;
  *((_QWORD *)&v2 + 1) = a1;
  if ( *(_BYTE *)a2 != 5 )
  {
    v66 = a2;
    sub_14002F9D0(a2);
    a2 = v66;
    *(_BYTE *)v66 = 5;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  v3 = a2;
  v4 = **((_QWORD **)&v2 + 1);
  if ( !__OFSUB__(-**((_QWORD **)&v2 + 1), 1) )
  {
    v5 = sub_1416419F0(aOutput, 6, a2);
    if ( v5 )
    {
      if ( *(_BYTE *)v5 == 4 )
      {
        v6 = *(_QWORD *)(v5 + 16);
        v7 = v6 + 32LL * *(_QWORD *)(v5 + 24);
        si128 = _mm_load_si128((const __m128i *)&xmmword_14193C200);
        v9 = _mm_load_si128((const __m128i *)&xmmword_14193C210);
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              if ( v6 == v7 )
                goto LABEL_18;
              v10 = v6;
              v6 += 32;
              v11 = sub_1416419F0(aType_2, 4, v10);
            }
            while ( !v11 || *(_BYTE *)v11 != 3 );
            v12 = *(_QWORD *)(v11 + 16);
            v13 = *(_QWORD *)(v11 + 24);
            if ( v13 == 16 )
              break;
            if ( v13 == 13 )
            {
              v12 = *(_QWORD *)v12 ^ 0x6E6F6974636E7566LL | *(_QWORD *)(v12 + 5) ^ 0x6C6C61635F6E6F69LL;
              if ( !v12 )
                goto LABEL_16;
            }
          }
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v12), si128)) == 0xFFFF
            || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v12), v9)) == 0xFFFF )
          {
LABEL_16:
            nullsub_1(v12);
            v14 = (void *)sub_140001650(10, 1);
            if ( !v14 )
              goto LABEL_64;
            qmemcpy(v14, "incomplete", 10);
            v65.m256i_i8[0] = 3;
            v65.m256i_i64[1] = 10;
            v65.m256i_i64[2] = (__int64)v14;
            v65.m256i_i64[3] = 10;
            v76 = 1;
            v66 = sub_141641AF0(aStatus_1, 6, v10);
            sub_14002F9D0(v66);
            v15 = _mm_loadu_si128((const __m128i *)&v65);
            v16 = (_OWORD *)v66;
            *(_OWORD *)(v66 + 16) = *(_OWORD *)&v65.m256i_u64[2];
            *v16 = v15;
          }
        }
      }
    }
  }
LABEL_18:
  v17 = v4 ^ 0x8000000000000000uLL;
  v18 = 2;
  if ( v4 < 0 )
    v18 = v4 ^ 0x8000000000000000uLL;
  if ( !v18 )
  {
    nullsub_1(v17);
    v27 = sub_140001650(9, 1);
    if ( !v27 )
      sub_141938D2B(1, 9);
    *(_QWORD *)v27 = 0x6574656C706D6F63LL;
    *(_BYTE *)(v27 + 8) = 100;
    v65.m256i_i8[0] = 3;
    v65.m256i_i64[1] = 9;
    v65.m256i_i64[2] = v27;
    v65.m256i_i64[3] = 9;
    v75 = 1;
    v66 = sub_141641AF0(aStatus_1, 6, v3);
    sub_14002F9D0(v66);
    v28 = *(_OWORD *)v65.m256i_i8;
    v29 = (_OWORD *)v66;
    *(_OWORD *)(v66 + 16) = *(_OWORD *)&v65.m256i_u64[2];
    *v29 = v28;
    return aResponseComple;
  }
  if ( v18 != 1 )
  {
    nullsub_1(v17);
    v31 = sub_140001650(6, 1);
    if ( !v31 )
      sub_141938D2B(1, 6);
    v32 = v3;
    *(_WORD *)(v31 + 4) = 25701;
    *(_DWORD *)v31 = 1818845542;
    v65.m256i_i8[0] = 3;
    v65.m256i_i64[1] = 6;
    v65.m256i_i64[2] = v31;
    v65.m256i_i64[3] = 6;
    v71 = 1;
    v66 = sub_141641AF0(aStatus_1, 6, v3);
    sub_14002F9D0(v66);
    v33 = *(_OWORD *)v65.m256i_i8;
    v34 = (_OWORD *)v66;
    *(_OWORD *)(v66 + 16) = *(_OWORD *)&v65.m256i_u64[2];
    *v34 = v33;
    *(_QWORD *)&v60 = 0;
    v61 = 0;
    nullsub_1(v35);
    v36 = (_DWORD *)sub_140001650(4, 1);
    if ( !v36 )
      sub_141938D2B(1, 4);
    *v36 = 1701869940;
    v62 = 4;
    v63 = v36;
    v64 = 4;
    *(_QWORD *)&v2 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 32LL);
    if ( (__int64)v2 < 0 )
    {
      v38 = 0;
      goto LABEL_33;
    }
    v41 = *(const __m128i **)(*((_QWORD *)&v2 + 1) + 24LL);
    if ( (_QWORD)v2 )
    {
      nullsub_1(v37);
      v38 = 1;
      v42 = (__m128i *)sub_140001650(v2, 1);
      if ( !v42 )
      {
LABEL_33:
        v70 = 1;
        sub_141938D2B(v38, v2);
      }
      v43 = (__int64)v42;
      sub_1418F44E0(v42, v41, v2);
    }
    else
    {
      v43 = 1;
    }
    v65.m256i_i8[0] = 3;
    v65.m256i_i64[1] = v2;
    v65.m256i_i64[2] = v43;
    v65.m256i_i64[3] = v2;
    v70 = 0;
    sub_140E72AA0(v59, &v60, &v62, &v65);
    if ( v59[0] != 0xFF )
      sub_14002F9D0(v59);
    nullsub_1(v46);
    v47 = 1;
    v48 = (_DWORD *)sub_140001650(4, 1);
    if ( !v48 )
      sub_141938D2B(1, 4);
    *v48 = 1701080931;
    v62 = 4;
    v63 = v48;
    v64 = 4;
    if ( (_QWORD)v2 )
    {
      nullsub_1(v49);
      v50 = (__m128i *)sub_140001650(v2, 1);
      if ( !v50 )
      {
        v69 = 1;
        sub_141938D2B(1, v2);
      }
      v47 = (__int64)v50;
      sub_1418F44E0(v50, v41, v2);
    }
    v65.m256i_i8[0] = 3;
    v65.m256i_i64[1] = v2;
    v65.m256i_i64[2] = v47;
    v65.m256i_i64[3] = v2;
    v69 = 0;
    sub_140E72AA0(v59, &v60, &v62, &v65);
    if ( v59[0] != 0xFF )
      sub_14002F9D0(v59);
    nullsub_1(v51);
    v52 = (_DWORD *)sub_140001650(7, 1);
    if ( !v52 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v52 + 3) = 1701273971;
    *v52 = 1936942445;
    v62 = 7;
    v63 = v52;
    v64 = 7;
    *(_QWORD *)&v2 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 16LL);
    if ( (__int64)v2 < 0 )
    {
      v54 = 0;
      goto LABEL_56;
    }
    if ( (_QWORD)v2 )
    {
      v55 = *(const __m128i **)(*((_QWORD *)&v2 + 1) + 8LL);
      nullsub_1(v53);
      v54 = 1;
      v56 = (__m128i *)sub_140001650(v2, 1);
      if ( !v56 )
      {
LABEL_56:
        v68 = 1;
        sub_141938D2B(v54, v2);
      }
      *((_QWORD *)&v2 + 1) = v56;
      sub_1418F44E0(v56, v55, v2);
    }
    else
    {
      *((_QWORD *)&v2 + 1) = 1;
    }
    v65.m256i_i8[0] = 3;
    *(_OWORD *)&v65.m256i_u64[1] = v2;
    v65.m256i_i64[3] = v2;
    v68 = 0;
    sub_140E72AA0(v59, &v60, &v62, &v65);
    if ( v59[0] != 0xFF )
      sub_14002F9D0(v59);
    *(_OWORD *)&v65.m256i_u64[1] = v60;
    v65.m256i_i64[3] = v61;
    v65.m256i_i8[0] = 5;
    v67 = 1;
    v66 = sub_141641AF0(aError_33, 5, v32);
    sub_14002F9D0(v66);
    v57 = *(_OWORD *)v65.m256i_i8;
    v58 = (_OWORD *)v66;
    *(_OWORD *)(v66 + 16) = *(_OWORD *)&v65.m256i_u64[2];
    *v58 = v57;
    return (const char *)&unk_1419D026D;
  }
  nullsub_1(v17);
  v19 = (void *)sub_140001650(10, 1);
  if ( !v19 )
LABEL_64:
    sub_141938D2B(1, 10);
  v20 = v3;
  qmemcpy(v19, "incomplete", 10);
  v65.m256i_i8[0] = 3;
  v65.m256i_i64[1] = 10;
  v65.m256i_i64[2] = (__int64)v19;
  v65.m256i_i64[3] = 10;
  v74 = 1;
  v66 = sub_141641AF0(aStatus_1, 6, v3);
  sub_14002F9D0(v66);
  v21 = *(_OWORD *)v65.m256i_i8;
  v22 = (_OWORD *)v66;
  *(_OWORD *)(v66 + 16) = *(_OWORD *)&v65.m256i_u64[2];
  *v22 = v21;
  *(_QWORD *)&v60 = 0;
  v61 = 0;
  nullsub_1(v23);
  v24 = sub_140001650(6, 1);
  if ( !v24 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v24 + 4) = 28271;
  *(_DWORD *)v24 = 1935762802;
  v62 = 6;
  v63 = (_DWORD *)v24;
  v64 = 6;
  *(_QWORD *)&v2 = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 16LL);
  if ( (__int64)v2 < 0 )
  {
    v26 = 0;
    goto LABEL_26;
  }
  if ( (_QWORD)v2 )
  {
    v39 = *(const __m128i **)(*((_QWORD *)&v2 + 1) + 8LL);
    nullsub_1(v25);
    v26 = 1;
    v40 = (__m128i *)sub_140001650(v2, 1);
    if ( !v40 )
    {
LABEL_26:
      v73 = 1;
      sub_141938D2B(v26, v2);
    }
    *((_QWORD *)&v2 + 1) = v40;
    sub_1418F44E0(v40, v39, v2);
  }
  else
  {
    *((_QWORD *)&v2 + 1) = 1;
  }
  v65.m256i_i8[0] = 3;
  *(_OWORD *)&v65.m256i_u64[1] = v2;
  v65.m256i_i64[3] = v2;
  v73 = 0;
  sub_140E72AA0(v59, &v60, &v62, &v65);
  if ( v59[0] != 0xFF )
    sub_14002F9D0(v59);
  *(_OWORD *)&v65.m256i_u64[1] = v60;
  v65.m256i_i64[3] = v61;
  v65.m256i_i8[0] = 5;
  v72 = 1;
  v66 = sub_141641AF0(aIncompleteDeta_0, 18, v20);
  sub_14002F9D0(v66);
  v44 = *(_OWORD *)v65.m256i_i8;
  v45 = (_OWORD *)v66;
  *(_OWORD *)(v66 + 16) = *(_OWORD *)&v65.m256i_u64[2];
  *v45 = v44;
  return (const char *)&unk_1419D025A;
}
