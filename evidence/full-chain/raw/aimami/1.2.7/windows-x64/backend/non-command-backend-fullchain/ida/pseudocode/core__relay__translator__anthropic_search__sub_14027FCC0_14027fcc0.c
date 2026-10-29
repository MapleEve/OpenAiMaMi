// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | ea 0x14027fcc0 | name sub_14027FCC0
// win 1.2.7 | module src/core/relay/translator/anthropic_search.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14027FCC0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  void *v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  __m128 *v14; // rax
  __int64 v15; // r15
  const char *v16; // rbx
  __int128 v17; // xmm0
  unsigned __int64 v18; // r11
  bool v19; // r14
  __int64 v20; // rcx
  __m128 *v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __m128 v24; // xmm0
  __int64 v25; // rcx
  unsigned __int64 v26; // r9
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r15
  __int64 v30; // r14
  unsigned __int64 v31; // r11
  __int64 v32; // r10
  __int64 v33; // r14
  unsigned __int64 v34; // rdi
  __int64 v35; // r11
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // r13
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // rdi
  __int64 v44; // r12
  int v45; // eax
  char v46; // cl
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  __int128 v51; // xmm0
  _OWORD *v52; // rax
  __int128 v54; // xmm0
  _OWORD *v55; // rax
  __int64 v56; // [rsp+20h] [rbp-60h]
  __int128 v57; // [rsp+28h] [rbp-58h] BYREF
  __int64 v58; // [rsp+38h] [rbp-48h]
  __int64 v59; // [rsp+40h] [rbp-40h]
  __int64 v60; // [rsp+48h] [rbp-38h]
  __int128 v61; // [rsp+50h] [rbp-30h] BYREF
  __int128 v62; // [rsp+60h] [rbp-20h] BYREF
  __int64 v63; // [rsp+70h] [rbp-10h]
  __int64 v64; // [rsp+78h] [rbp-8h]
  unsigned __int64 v65; // [rsp+80h] [rbp+0h]
  __m128 v66; // [rsp+88h] [rbp+8h]
  __m256i v67; // [rsp+98h] [rbp+18h] BYREF
  __int64 v68; // [rsp+B8h] [rbp+38h] BYREF
  _DWORD *v69; // [rsp+C0h] [rbp+40h]
  __int64 v70; // [rsp+C8h] [rbp+48h]
  __int64 v71; // [rsp+D0h] [rbp+50h]
  char v72; // [rsp+DEh] [rbp+5Eh]
  char v73; // [rsp+DFh] [rbp+5Fh]
  __int64 v74; // [rsp+E0h] [rbp+60h]

  v74 = -2;
  *(_QWORD *)&v57 = 0;
  v58 = 0;
  nullsub_1(a1);
  v4 = (_DWORD *)sub_140001650(4, 1);
  if ( !v4 )
    sub_141938D2B(1, 4);
  *v4 = 1701869940;
  v68 = 4;
  v69 = v4;
  v70 = 4;
  nullsub_1(v5);
  v6 = sub_140001650(19, 1);
  v71 = v6;
  if ( !v6 )
    sub_141938D2B(1, 19);
  *(_OWORD *)v6 = *(_OWORD *)&aPendingAnthrop[134];
  *(_DWORD *)(v6 + 15) = 892351280;
  LOBYTE(v61) = 3;
  *((_QWORD *)&v61 + 1) = 19;
  *(_QWORD *)&v62 = v6;
  *((_QWORD *)&v62 + 1) = 19;
  sub_140E72AA0(&v67, &v57, &v68, &v61);
  if ( v67.m256i_i8[0] != -1 )
    sub_14002F9D0(&v67);
  nullsub_1(v7);
  v8 = (_DWORD *)sub_140001650(4, 1);
  if ( !v8 )
    sub_141938D2B(1, 4);
  *v8 = 1701667182;
  v68 = 4;
  v69 = v8;
  v70 = 4;
  nullsub_1(v9);
  v10 = (void *)sub_140001650(10, 1);
  v71 = (__int64)v10;
  if ( !v10 )
    sub_141938D2B(1, 10);
  qmemcpy(v10, "web_search", 10);
  LOBYTE(v61) = 3;
  *((_QWORD *)&v61 + 1) = 10;
  *(_QWORD *)&v62 = v10;
  *((_QWORD *)&v62 + 1) = 10;
  sub_140E72AA0(&v67, &v57, &v68, &v61);
  if ( v67.m256i_i8[0] != -1 )
    sub_14002F9D0(&v67);
  *(_OWORD *)&v67.m256i_u64[1] = v57;
  v67.m256i_i64[3] = v58;
  v67.m256i_i8[0] = 5;
  v11 = (_BYTE *)sub_1416419F0(aExternalWebAcc, 19, a2);
  if ( v11 && *v11 == 1 && v11[1] != 1 )
  {
    v15 = 59;
    v16 = (const char *)&unk_1419E1984;
    goto LABEL_82;
  }
  v12 = sub_1416419F0(aFilters, 7, a2);
  if ( !v12 )
    goto LABEL_15;
  if ( *(_BYTE *)v12 != 5 )
  {
    if ( !*(_BYTE *)v12 )
      goto LABEL_15;
    v15 = 26;
    v16 = (const char *)&unk_1419E1A07;
    goto LABEL_82;
  }
  v18 = *(_QWORD *)(v12 + 8);
  v19 = v18 != 0;
  if ( v18 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    v20 = *(_QWORD *)(v12 + 24);
  }
  else
  {
    v20 = 0;
  }
  v26 = 0;
  v16 = (const char *)&unk_1419E19E4;
  v71 = *(_QWORD *)(v12 + 8);
  while ( v20-- != 0 )
  {
    if ( !v19 )
      sub_141939020(&off_141A54AF8);
    if ( v26 )
    {
      if ( v13 < *(unsigned __int16 *)(v26 + 626) )
        goto LABEL_36;
      goto LABEL_47;
    }
    if ( !v13 )
    {
      v26 = v18;
      goto LABEL_46;
    }
    v26 = v18;
    if ( (v13 & 7) == 0 )
    {
      v31 = v13;
      if ( v13 < 8 )
        goto LABEL_46;
      do
      {
LABEL_45:
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 632)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v31 -= 8LL;
      }
      while ( v31 );
      goto LABEL_46;
    }
    v30 = 0;
    do
    {
      v26 = *(_QWORD *)(v26 + 632);
      ++v30;
    }
    while ( (v13 & 7) != v30 );
    v31 = v13 - v30;
    if ( v13 >= 8 )
      goto LABEL_45;
LABEL_46:
    v13 = 0;
    v18 = 0;
    if ( *(_WORD *)(v26 + 626) )
    {
LABEL_36:
      v28 = v26;
      v29 = v13;
      goto LABEL_49;
    }
    do
    {
LABEL_47:
      v28 = *(_QWORD *)(v26 + 352);
      if ( !v28 )
        sub_141939020(&off_141A52F98);
      ++v18;
      v29 = *(unsigned __int16 *)(v26 + 624);
      v26 = *(_QWORD *)(v26 + 352);
    }
    while ( (unsigned __int16)v29 >= *(_WORD *)(v28 + 626) );
LABEL_49:
    if ( !v18 )
    {
      v13 = v29 + 1;
      v26 = v28;
      v35 = 3 * v29;
      v15 = 35;
      if ( *(_QWORD *)(v28 + 8 * v35 + 376) != 15 )
        goto LABEL_82;
      goto LABEL_58;
    }
    v32 = v28 + 8 * v29 + 640;
    if ( (v18 & 7) == 0 )
    {
      v34 = v18;
      if ( v18 < 8 )
        goto LABEL_55;
      do
      {
LABEL_54:
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v32 + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v32 = v26 + 632;
        v34 -= 8LL;
      }
      while ( v34 );
      goto LABEL_55;
    }
    v33 = 0;
    do
    {
      v26 = *(_QWORD *)v32;
      v32 = *(_QWORD *)v32 + 632LL;
      ++v33;
    }
    while ( (v18 & 7) != v33 );
    v34 = v18 - v33;
    if ( v18 >= 8 )
      goto LABEL_54;
LABEL_55:
    v13 = 0;
    v35 = 3 * v29;
    v15 = 35;
    if ( *(_QWORD *)(v28 + 8 * v35 + 376) != 15 )
      goto LABEL_82;
LABEL_58:
    v19 = 1;
    v36 = (**(_QWORD **)(v28 + 8 * v35 + 368) ^ 0x5F6465776F6C6C61LL
         | *(_QWORD *)(*(_QWORD *)(v28 + 8 * v35 + 368) + 7LL) ^ 0x736E69616D6F645FLL) == 0;
    v18 = 0;
    if ( !v36 )
      goto LABEL_82;
  }
  v37 = v71;
  if ( !v71 )
    goto LABEL_15;
  v60 = a2;
  v59 = *(_QWORD *)(v12 + 16);
LABEL_64:
  v38 = v37 + 360;
  v39 = *(unsigned __int16 *)(v37 + 626);
  v71 = v37;
  v40 = (_QWORD *)(v37 - 8);
  v56 = v39;
  v41 = 3LL * (unsigned int)(8 * v39);
  v42 = -1;
  do
  {
    if ( !v41 )
    {
      v42 = v56;
LABEL_72:
      a2 = v60;
      if ( !v59 )
        goto LABEL_15;
      --v59;
      v37 = *(_QWORD *)(v71 + 8 * v42 + 632);
      goto LABEL_64;
    }
    v43 = v38 + 24;
    v44 = 15LL - *(_QWORD *)(v38 + 16);
    v45 = sub_1418F4B70(aAllowedDomains, *(_QWORD *)(v38 + 8));
    if ( v45 )
      v44 = v45;
    v46 = (v44 > 0) - (v44 < 0);
    v40 += 4;
    ++v42;
    v41 -= 24;
    v38 = v43;
  }
  while ( v46 == 1 );
  if ( v46 )
    goto LABEL_72;
  v15 = 30;
  v16 = (const char *)&unk_1419E19C6;
  if ( *((_BYTE *)v40 - 24) != 4 )
    goto LABEL_82;
  v47 = *(v40 - 1);
  v48 = *v40;
  v49 = 32LL * *v40;
  v50 = 0;
  a2 = v60;
  while ( v49 != v50 )
  {
    v36 = *(_BYTE *)(v47 + v50) == 3;
    v50 += 32;
    if ( !v36 )
      goto LABEL_82;
  }
  sub_1403918C0((char *)&v61 + 8, v47, v48);
  LOBYTE(v61) = 4;
  v73 = 1;
  v71 = sub_141641AF0(aAllowedDomains, 15, &v67);
  sub_14002F9D0(v71);
  v51 = v61;
  v52 = (_OWORD *)v71;
  *(_OWORD *)(v71 + 16) = v62;
  *v52 = v51;
LABEL_15:
  v14 = (__m128 *)sub_1416419F0(aUserLocation, 13, a2);
  if ( !v14 )
  {
LABEL_18:
    v17 = *(_OWORD *)v67.m256i_i8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v67.m256i_u64[2];
    *(_OWORD *)a1 = v17;
    return a1;
  }
  v15 = 27;
  v16 = aUnsupportedSea;
  if ( v14->m128_i8[0] == 5 )
  {
    v21 = v14;
    v22 = sub_1416419F0(aType_3, 4, v14);
    if ( !v22
      || *(_BYTE *)v22 != 3
      || *(_QWORD *)(v22 + 24) != 11
      || **(_QWORD **)(v22 + 16) ^ 0x6D69786F72707061LL
       | *(_QWORD *)(*(_QWORD *)(v22 + 16) + 3LL) ^ 0x6574616D69786F72LL )
    {
      goto LABEL_82;
    }
    if ( v21->m128_i8[0] != 5 )
      sub_141939020(&off_1419E1A30);
    v23 = v21->m128_u64[1];
    if ( v23 )
    {
      v24 = v21[1];
      v25 = 1;
    }
    else
    {
      v24 = 0;
      v25 = 0;
    }
    v61 = (unsigned __int64)v25;
    *(_QWORD *)&v62 = v23;
    _mm_storel_ps((double *)&v62 + 1, v24);
    v63 = v25;
    v64 = 0;
    v65 = v23;
    v66 = v24;
    if ( (unsigned __int8)sub_1401AEAC0(&v61) )
      goto LABEL_82;
    sub_140287C70(&v61, v21);
    v72 = 1;
    v71 = sub_141641AF0(aUserLocation, 13, &v67);
    sub_14002F9D0(v71);
    v54 = v61;
    v55 = (_OWORD *)v71;
    *(_OWORD *)(v71 + 16) = v62;
    *v55 = v54;
    goto LABEL_18;
  }
  if ( !v14->m128_i8[0] )
    goto LABEL_18;
LABEL_82:
  *(_QWORD *)(a1 + 8) = v16;
  *(_QWORD *)(a1 + 16) = v15;
  *(_BYTE *)a1 = -1;
  sub_14002F9D0(&v67);
  return a1;
}
