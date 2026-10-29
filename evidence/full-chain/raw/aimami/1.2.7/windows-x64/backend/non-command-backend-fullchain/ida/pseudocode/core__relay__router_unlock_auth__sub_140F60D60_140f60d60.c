// win 1.2.7 | module src/core/relay/router_unlock_auth.rs | ea 0x140f60d60 | name sub_140F60D60
// win 1.2.7 | module src/core/relay/router_unlock_auth.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F60D60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  _BYTE *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rcx
  __int128 v18; // kr10_16
  __int64 v19; // rbx
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r13
  __m128i *v24; // rax
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r12
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r14
  int v33; // eax
  char v34; // cl
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // r12
  __m128i v40; // xmm0
  _BYTE *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  bool v45; // si
  __int64 v46; // rax
  char v47; // r12
  __int64 v48; // r13
  __int64 v49; // r15
  __int64 v50; // rcx
  __m128i *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rcx
  __m128i *v55; // rax
  __m128i *v56; // rax
  __m128i v57; // [rsp+38h] [rbp-48h] BYREF
  __int64 v58; // [rsp+48h] [rbp-38h]
  _QWORD v59[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v60; // [rsp+60h] [rbp-20h]
  __int64 v61; // [rsp+68h] [rbp-18h]
  __int64 v62; // [rsp+70h] [rbp-10h]
  __int64 v63; // [rsp+78h] [rbp-8h]
  __m256i v64; // [rsp+80h] [rbp+0h] BYREF
  __m128i v65; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v66; // [rsp+B0h] [rbp+30h]
  __int64 v67; // [rsp+B8h] [rbp+38h]
  __int64 v68; // [rsp+C8h] [rbp+48h]
  __int64 v69; // [rsp+D0h] [rbp+50h]
  __int64 v70; // [rsp+E0h] [rbp+60h]
  __int64 v71; // [rsp+E8h] [rbp+68h]
  __int64 v72; // [rsp+F8h] [rbp+78h]
  __int64 v73; // [rsp+100h] [rbp+80h]
  __int64 v74; // [rsp+110h] [rbp+90h]
  __int64 v75; // [rsp+118h] [rbp+98h]
  __m128i v76; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v77; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v78; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v79; // [rsp+160h] [rbp+E0h]
  const char *v80; // [rsp+168h] [rbp+E8h]
  __int64 v81; // [rsp+170h] [rbp+F0h]
  __int64 v82; // [rsp+178h] [rbp+F8h]
  void *v83; // [rsp+180h] [rbp+100h]
  __m256i *v84; // [rsp+188h] [rbp+108h]
  __int64 v85; // [rsp+190h] [rbp+110h]
  __int64 v86; // [rsp+198h] [rbp+118h]
  __int64 v87; // [rsp+1A8h] [rbp+128h]
  __int64 v88; // [rsp+1B0h] [rbp+130h]
  __int64 v89; // [rsp+1C0h] [rbp+140h]
  __int64 v90; // [rsp+1C8h] [rbp+148h]
  __int64 v91; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v92; // [rsp+1E8h] [rbp+168h]
  __int64 v93; // [rsp+1F0h] [rbp+170h]
  __int64 v94; // [rsp+1F8h] [rbp+178h]
  __int64 v95; // [rsp+200h] [rbp+180h]
  __int64 v96; // [rsp+208h] [rbp+188h] BYREF
  __int64 v97; // [rsp+210h] [rbp+190h]
  __int64 v98; // [rsp+218h] [rbp+198h]
  __m128i v99; // [rsp+220h] [rbp+1A0h] BYREF
  __m128i v100; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 v101; // [rsp+248h] [rbp+1C8h]
  __m256i v102; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v103; // [rsp+278h] [rbp+1F8h]
  char v104; // [rsp+28Dh] [rbp+20Dh] BYREF
  char v105; // [rsp+28Eh] [rbp+20Eh]
  char v106; // [rsp+28Fh] [rbp+20Fh]
  __int64 v107; // [rsp+290h] [rbp+210h]

  v107 = -2;
  v59[0] = a4;
  v59[1] = a5;
  sub_14169D480(&v102, a2, a3);
  if ( v102.m256i_i64[0] == -1 )
  {
    v99.m128i_i64[0] = v102.m256i_i64[1];
    v76.m128i_i64[0] = (__int64)v59;
    v76.m128i_i64[1] = (__int64)sub_140186EE0;
    v77.m128i_i64[0] = (__int64)&v99;
    v77.m128i_i64[1] = (__int64)sub_1416BB0B0;
    sub_1416ABFD0(&v64, &unk_141A58143, &v76);
    v18 = *(_OWORD *)v64.m256i_i8;
    v19 = v64.m256i_i64[2];
    result = v99.m128i_i64[0];
    if ( (v99.m128i_i8[0] & 3u) - 2 >= 2 && (v99.m128i_i8[0] & 3) != 0 )
    {
      v76.m128i_i64[1] = v99.m128i_i64[0] - 1;
      v76.m128i_i8[0] = 3;
      result = sub_1416BCB00(&v76.m128i_u64[1]);
    }
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)a1 = 10;
    return result;
  }
  v61 = a2;
  v60 = a3;
  v98 = v102.m256i_i64[1];
  v101 = v102.m256i_i64[0];
  v76 = *(__m128i *)&v102.m256i_u64[1];
  v94 = v102.m256i_i64[2];
  v77 = 0;
  sub_14062F970(&v64, &v76);
  if ( v64.m256i_i8[0] == -1 )
  {
    v99.m128i_i64[0] = v64.m256i_i64[1];
    v102.m256i_i64[0] = 0;
    *(_OWORD *)&v102.m256i_u64[1] = 1u;
    v77.m128i_i64[0] = 1610612768;
    v76.m128i_i64[0] = (__int64)&v102;
    v76.m128i_i64[1] = (__int64)&off_141A65938;
    if ( (unsigned __int8)sub_14163CE40(&v99, &v76) )
      sub_141939040(
        (unsigned int)aADisplayImplem_10,
        55,
        (unsigned int)&v104,
        (unsigned int)&unk_141A58C98,
        (__int64)&off_141A659F0);
    v21 = v102.m256i_i64[1];
    v22 = v102.m256i_i64[0];
    v23 = v102.m256i_i64[2];
    sub_14002F910(&v99);
    goto LABEL_47;
  }
  v99 = *(__m128i *)v64.m256i_i8;
  v8 = v64.m256i_i64[1];
  v100 = *(__m128i *)&v64.m256i_u64[2];
  if ( v64.m256i_i8[0] != 5 )
  {
    nullsub_1(v64.m256i_i64[3]);
    v23 = 33;
    v24 = (__m128i *)sub_140001650(33, 1);
    if ( !v24 )
    {
      v106 = 1;
      sub_141938D2B(1, 33);
    }
    v21 = (__int64)v24;
    qmemcpy(&v24[1], " is not an object", 17);
    *v24 = _mm_loadu_si128((const __m128i *)&xmmword_141A58170);
    goto LABEL_24;
  }
  v97 = a1;
  if ( !v64.m256i_i64[1] )
  {
LABEL_44:
    v38 = _mm_loadu_si128(&v99);
    *(__m128i *)&v102.m256i_u64[2] = _mm_loadu_si128(&v100);
    *(__m128i *)v102.m256i_i8 = v38;
    v106 = 0;
    sub_140423FC0(&v76, &v102, aAuthfile, 8, &off_141A56478, 5);
    a1 = v97;
    v39 = v76.m128i_i64[0];
    if ( v76.m128i_i64[0] == -2 )
    {
      v96 = v76.m128i_i64[1];
      v91 = 0;
      v92 = 1;
      v93 = 0;
      v102.m256i_i64[2] = 1610612768;
      v102.m256i_i64[0] = (__int64)&v91;
      v102.m256i_i64[1] = (__int64)&off_141A65938;
      if ( (unsigned __int8)sub_14163CE40(&v96, &v102) )
        sub_141939040(
          (unsigned int)aADisplayImplem_10,
          55,
          (unsigned int)&v104,
          (unsigned int)&unk_141A58C98,
          (__int64)&off_141A659F0);
      v22 = v91;
      v21 = v92;
      v23 = v93;
      v106 = 0;
      sub_14002F910(&v96);
      goto LABEL_47;
    }
    v48 = v76.m128i_i64[1];
    v49 = v77.m128i_i64[1];
    v21 = v77.m128i_i64[0];
    sub_1418F44E0(&v65, &v78, 0x90u);
    v64.m256i_i64[1] = v48;
    *(_OWORD *)&v64.m256i_u64[2] = __PAIR128__(v49, v21);
    v64.m256i_i64[0] = v39;
    if ( (unsigned __int8)sub_140ED8760(&v64) )
    {
      nullsub_1(v50);
      v51 = (__m128i *)sub_140001650(43, 1);
      if ( !v51 )
        sub_141938D2B(1, 43);
      v21 = (__int64)v51;
      qmemcpy(&v51[1], "AiMaMi managed virtual auth", 27);
      *v51 = _mm_loadu_si128((const __m128i *)&xmmword_141A62B30);
      if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v48, v39, 1);
      if ( v49 != -1 && v49 )
        sub_140001660(v65.m128i_i64[0], v49, 1);
      if ( v66 != -1 && v66 )
        sub_140001660(v67, v66, 1);
      if ( v68 != -1 && v68 )
        sub_140001660(v69, v68, 1);
      if ( v70 != -1 && v70 )
        sub_140001660(v71, v70, 1);
      if ( v72 != -1 && v72 )
        sub_140001660(v73, v72, 1);
      v23 = 43;
      if ( v74 != -1 && v74 )
        sub_140001660(v75, v74, 1);
      v22 = 43;
      goto LABEL_48;
    }
    if ( (unsigned __int8)sub_140ED7E50(&v64) )
    {
      v22 = -1;
    }
    else
    {
      nullsub_1(v54);
      v22 = 61;
      v55 = (__m128i *)sub_140001650(61, 1);
      if ( !v55 )
        sub_141938D2B(1, 61);
      v21 = (__int64)v55;
      qmemcpy(&v55[1], "neither user OAuth auth nor user API-key auth", 45);
      *v55 = _mm_loadu_si128((const __m128i *)&xmmword_141A62AF3);
    }
    if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v48, v39, 1);
    if ( v49 != -1 && v49 )
      sub_140001660(v65.m128i_i64[0], v49, 1);
    if ( v66 != -1 && v66 )
      sub_140001660(v67, v66, 1);
    if ( v68 != -1 && v68 )
      sub_140001660(v69, v68, 1);
    if ( v70 != -1 && v70 )
      sub_140001660(v71, v70, 1);
    if ( v72 != -1 && v72 )
      sub_140001660(v73, v72, 1);
    if ( v74 != -1 && v74 )
      sub_140001660(v75, v74, 1);
    v23 = 61;
    if ( v22 == -1 )
      goto LABEL_87;
LABEL_48:
    *(_QWORD *)&v103 = v22;
    *((_QWORD *)&v103 + 1) = v21;
    v102.m256i_i64[0] = v98;
    v102.m256i_i64[1] = v94;
    *(_OWORD *)&v102.m256i_u64[2] = 0;
    v105 = 1;
    sub_14062F970(&v76, &v102);
    if ( v76.m128i_i8[0] == -1 )
    {
      v105 = 1;
      sub_14002F910(&v76.m128i_u64[1]);
      goto LABEL_114;
    }
    v40 = _mm_loadu_si128(&v76);
    v100 = _mm_loadu_si128(&v77);
    v99 = v40;
    v41 = (_BYTE *)sub_1416419F0(aAimamiRouterUn_1, 25, &v99);
    if ( !v41 || *v41 != 1 || !v41[1] )
    {
      v42 = sub_1416419F0(aOpenaiApiKey_3, 14, &v99);
      v45 = v42
         && *(_BYTE *)v42 == 3
         && (v43 = sub_140E91160(*(_QWORD *)(v42 + 16), *(_QWORD *)(v42 + 24)), v44 >= 0x17)
         && _mm_movemask_epi8(
              _mm_and_si128(
                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v43), (__m128i)xmmword_141A42070),
                _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v43 + 7)), (__m128i)xmmword_141A42060))) == 0xFFFF;
      v46 = sub_1416419F0(aTokens_2, 6, &v99);
      if ( v46 && *(_BYTE *)v46 == 5 )
      {
        if ( *(_QWORD *)(v46 + 24) != 0 || !v45 )
          goto LABEL_59;
      }
      else if ( !v45 )
      {
LABEL_59:
        sub_140630900(&v64, &v102);
        if ( v64.m256i_i64[0] == -2 )
        {
          v76.m128i_i64[1] = v64.m256i_i64[1];
          v76.m128i_i8[0] = 1;
          sub_14002F910(&v76.m128i_u64[1]);
          v47 = 0;
        }
        else
        {
          sub_1418F44E0(&v76, (const __m128i *)&v64, 0xB0u);
          v47 = sub_140ED8760(&v76);
          if ( v76.m128i_i64[0] != -1 && v76.m128i_i64[0] )
            sub_140001660(v76.m128i_i64[1], v76.m128i_i64[0], 1);
          if ( v77.m128i_i64[1] != -1 && v77.m128i_i64[1] )
            sub_140001660(v78.m128i_i64[0], v77.m128i_i64[1], 1);
          if ( v79 != -1 && v79 )
            sub_140001660(v80, v79, 1);
          if ( v82 != -1 && v82 )
            sub_140001660(v83, v82, 1);
          if ( v85 != -1 && v85 )
            sub_140001660(v86, v85, 1);
          if ( v87 != -1 && v87 )
            sub_140001660(v88, v87, 1);
          if ( v89 != -1 && v89 )
            sub_140001660(v90, v89, 1);
        }
        v105 = 1;
        sub_14002F9D0(&v99);
        if ( v47 )
          goto LABEL_110;
LABEL_114:
        *(_OWORD *)v64.m256i_i8 = v103;
        v64.m256i_i64[2] = v23;
        v102.m256i_i64[0] = v61;
        v102.m256i_i64[1] = v60;
        v76.m128i_i64[0] = (__int64)v59;
        v76.m128i_i64[1] = (__int64)sub_140186EE0;
        v77.m128i_i64[0] = (__int64)&v102;
        v77.m128i_i64[1] = (__int64)sub_14169F630;
        v78.m128i_i64[0] = (__int64)&v64;
        v78.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_1416ABFD0(&v57, &unk_141A6293A, &v76);
        result = v58;
        *(_QWORD *)(a1 + 24) = v58;
        *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v57);
        *(_QWORD *)a1 = 10;
        if ( v64.m256i_i64[0] )
          result = sub_140001660(v64.m256i_i64[1], v64.m256i_i64[0], 1);
        v53 = v101;
        goto LABEL_117;
      }
    }
    v105 = 1;
    sub_14002F9D0(&v99);
LABEL_110:
    v52 = v103;
    *(_OWORD *)v64.m256i_i8 = v103;
    v64.m256i_i64[2] = v23;
    result = *(_QWORD *)off_1421E6EC0;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v102.m256i_i64[0] = (__int64)&v64;
      v102.m256i_i64[1] = (__int64)sub_1400015F0;
      v79 = 2;
      v80 = aCodexmateLibCo_44;
      v81 = 46;
      v83 = &unk_141A6298B;
      v84 = &v102;
      v76.m128i_i64[0] = 0;
      v76.m128i_i64[1] = (__int64)aCodexmateLibCo_44;
      v77 = (__m128i)0x2EuLL;
      v78.m128i_i64[0] = (__int64)aSrcCoreRelayRo_1;
      v78.m128i_i64[1] = 36;
      v82 = 0x14600000001LL;
      result = sub_1414D53A0(&v104, &v76);
      v52 = v64.m256i_i64[0];
    }
    *(_OWORD *)a1 = -1;
    v53 = v101;
    if ( v52 )
      result = sub_140001660(v64.m256i_i64[1], v52, 1);
LABEL_117:
    if ( v53 )
      return sub_140001660(v98, v53, 1);
    return result;
  }
  v95 = v64.m256i_i64[2];
  v103 = *(_OWORD *)&v64.m256i_u64[1];
LABEL_6:
  v9 = v8 + 360;
  v10 = *(unsigned __int16 *)(v8 + 626);
  v62 = v8;
  v11 = (_BYTE *)(v8 - 31);
  v63 = v10;
  v12 = 3LL * (unsigned int)(8 * v10);
  v13 = -1;
  do
  {
    if ( !v12 )
    {
      v13 = v63;
LABEL_14:
      if ( *((_QWORD *)&v103 + 1) )
      {
        --*((_QWORD *)&v103 + 1);
        v8 = *(_QWORD *)(v62 + 8 * v13 + 632);
        goto LABEL_6;
      }
      goto LABEL_29;
    }
    v14 = v9 + 24;
    v15 = 25LL - *(_QWORD *)(v9 + 16);
    v16 = sub_1418F4B70(aAimamiRouterUn_1, *(_QWORD *)(v9 + 8));
    if ( v16 )
      v15 = v16;
    LOBYTE(v17) = (v15 > 0) - (v15 < 0);
    v11 += 32;
    ++v13;
    v12 -= 24;
    v9 = v14;
  }
  while ( (_BYTE)v17 == 1 );
  if ( (_BYTE)v17 )
    goto LABEL_14;
  if ( *(v11 - 1) == 1 && *v11 )
  {
    nullsub_1(v17);
    v23 = 41;
    v25 = (void *)sub_140001650(41, 1);
    if ( !v25 )
    {
      v106 = 1;
      sub_141938D2B(1, 41);
    }
    v21 = (__int64)v25;
    qmemcpy(v25, "backup contains AiMaMi router unlock auth", 41);
    goto LABEL_43;
  }
LABEL_29:
  v26 = v103;
LABEL_30:
  v27 = v26 + 360;
  v28 = *(unsigned __int16 *)(v26 + 626);
  *(_QWORD *)&v103 = v26;
  v29 = (_QWORD *)(v26 - 8);
  *((_QWORD *)&v103 + 1) = v28;
  v30 = 3LL * (unsigned int)(8 * v28);
  v21 = -1;
  do
  {
    if ( !v30 )
    {
      v21 = *((_QWORD *)&v103 + 1);
LABEL_38:
      if ( !v95 )
        goto LABEL_44;
      --v95;
      v26 = *(_QWORD *)(v103 + 8 * v21 + 632);
      goto LABEL_30;
    }
    v31 = v27 + 24;
    v32 = 14LL - *(_QWORD *)(v27 + 16);
    v33 = sub_1418F4B70(aOpenaiApiKey_3, *(_QWORD *)(v27 + 8));
    if ( v33 )
      v32 = v33;
    v34 = (v32 > 0) - (v32 < 0);
    v29 += 4;
    ++v21;
    v30 -= 24;
    v27 = v31;
  }
  while ( v34 == 1 );
  if ( v34 )
    goto LABEL_38;
  if ( *((_BYTE *)v29 - 24) != 3 )
    goto LABEL_44;
  v35 = sub_140E91160(*(v29 - 1), *v29);
  if ( !v36 )
    goto LABEL_44;
  v23 = -1;
  if ( v36 < 0x17 )
  {
LABEL_43:
    a1 = v97;
    goto LABEL_24;
  }
  a1 = v97;
  if ( _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v35), (__m128i)xmmword_141A42070),
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v35 + 7)), (__m128i)xmmword_141A42060))) == 0xFFFF )
  {
    nullsub_1(v37);
    v23 = 39;
    v56 = (__m128i *)sub_140001650(39, 1);
    if ( !v56 )
    {
      v106 = 1;
      sub_141938D2B(1, 39);
    }
    v21 = (__int64)v56;
    qmemcpy(&v56[1], "AiMaMi virtual API auth", 23);
    *v56 = _mm_loadu_si128((const __m128i *)&xmmword_141A62ACC);
  }
LABEL_24:
  sub_14002F9D0(&v99);
  v22 = v23;
LABEL_47:
  if ( v22 != -1 )
    goto LABEL_48;
LABEL_87:
  *(_QWORD *)(a1 + 8) = v101;
  *(_QWORD *)(a1 + 16) = v98;
  result = v94;
  *(_QWORD *)(a1 + 24) = v94;
  *(_QWORD *)a1 = -1;
  return result;
}
