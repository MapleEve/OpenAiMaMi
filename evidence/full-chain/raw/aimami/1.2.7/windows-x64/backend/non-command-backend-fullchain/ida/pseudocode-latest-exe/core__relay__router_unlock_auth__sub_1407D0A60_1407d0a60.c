// win 1.2.7 latest-exe | module src/core/relay/router_unlock_auth.rs | ea 0x1407d0a60 | successor of pre-update 0x140f60d60 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.636, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1407D0A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r13
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int128 v23; // kr00_16
  _QWORD *m128i_i64; // rdi
  __int64 v25; // r15
  __int64 v26; // r13
  __m128i v27; // xmm0
  _BYTE *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  bool v32; // si
  __int64 v33; // rax
  char v34; // r12
  __m128i *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // r13
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r14
  __int64 v45; // r14
  int v46; // eax
  char v47; // cl
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int128 v54; // xmm6
  __int64 v55; // rdx
  __int64 v56; // rcx
  __m128i *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __m128i *v62; // rax
  __m128i *v63; // rax
  __m128i v65; // [rsp+38h] [rbp-48h] BYREF
  __int64 v66; // [rsp+48h] [rbp-38h]
  _QWORD v67[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v68; // [rsp+60h] [rbp-20h]
  __int64 v69; // [rsp+70h] [rbp-10h]
  __int64 v70; // [rsp+78h] [rbp-8h]
  __m256i v71; // [rsp+80h] [rbp+0h] BYREF
  char v72[144]; // [rsp+A0h] [rbp+20h] BYREF
  __m256i v73; // [rsp+130h] [rbp+B0h] BYREF
  __m256i *v74; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v75; // [rsp+158h] [rbp+D8h]
  __int64 v76; // [rsp+160h] [rbp+E0h]
  const char *v77; // [rsp+168h] [rbp+E8h]
  __int64 v78; // [rsp+170h] [rbp+F0h]
  __int64 v79; // [rsp+178h] [rbp+F8h]
  void *v80; // [rsp+180h] [rbp+100h]
  __m256i *v81; // [rsp+188h] [rbp+108h]
  __int64 v82; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v83; // [rsp+1E8h] [rbp+168h]
  __int64 v84; // [rsp+1F0h] [rbp+170h]
  __int64 v85; // [rsp+1F8h] [rbp+178h]
  __int64 v86; // [rsp+200h] [rbp+180h] BYREF
  __int64 v87; // [rsp+208h] [rbp+188h]
  __int64 v88; // [rsp+210h] [rbp+190h]
  __int64 v89; // [rsp+218h] [rbp+198h]
  __m256i v90; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v91; // [rsp+248h] [rbp+1C8h]
  __m256i v92; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v93; // [rsp+270h] [rbp+1F0h]
  char v94; // [rsp+285h] [rbp+205h] BYREF
  char v95; // [rsp+286h] [rbp+206h]
  char v96; // [rsp+287h] [rbp+207h]
  __int64 v97; // [rsp+288h] [rbp+208h]

  v97 = -2;
  v67[0] = a4;
  v67[1] = a5;
  *(_QWORD *)&v68 = a2;
  sub_1416CC450(&v92, a2, a3);
  if ( v92.m256i_i64[0] == -1 )
  {
    v90.m256i_i64[0] = v92.m256i_i64[1];
    v73.m256i_i64[0] = (__int64)v67;
    v73.m256i_i64[1] = (__int64)sub_140191200;
    v73.m256i_i64[2] = (__int64)&v90;
    v73.m256i_i64[3] = (__int64)sub_1416EA080;
    sub_1416DAFA0(&v71, &unk_141A47262, &v73);
    v22 = v71.m256i_i64[0];
    v23 = *(_OWORD *)&v71.m256i_u64[1];
    if ( (v90.m256i_i8[0] & 3u) - 2 >= 2 && (v90.m256i_i8[0] & 3) != 0 )
    {
      v73.m256i_i64[1] = v90.m256i_i64[0] - 1;
      v73.m256i_i8[0] = 3;
      sub_1416EBAD0(&v73.m256i_u64[1]);
    }
    *(_QWORD *)(a1 + 8) = v22;
    *(_OWORD *)(a1 + 16) = v23;
    *(_QWORD *)a1 = 10;
    return *(double *)v8.m128i_i64;
  }
  *((_QWORD *)&v68 + 1) = a3;
  v91 = v92.m256i_i64[0];
  v7 = v92.m256i_i64[2];
  v89 = v92.m256i_i64[1];
  *(_OWORD *)v73.m256i_i8 = *(_OWORD *)&v92.m256i_u64[1];
  v8.m128i_i64[0] = 0;
  *(_OWORD *)&v73.m256i_u64[2] = 0;
  vendor_json_parse_str_with_trailing_check(&v71, (__int128 *)v73.m256i_i8);
  if ( v71.m256i_i8[0] == -1 )
  {
    v90.m256i_i64[0] = v71.m256i_i64[1];
    v92.m256i_i64[0] = 0;
    *(_OWORD *)&v92.m256i_u64[1] = 1u;
    v73.m256i_i64[2] = 1610612768;
    v73.m256i_i64[0] = (__int64)&v92;
    v73.m256i_i64[1] = (__int64)&off_141A49990;
    if ( (unsigned __int8)sub_14166FAD0(&v90, &v73) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_59,
        55,
        (unsigned int)&v94,
        (unsigned int)&unk_141A481A8,
        (__int64)&off_141A4E498);
    m128i_i64 = (_QWORD *)v92.m256i_i64[1];
    v25 = v92.m256i_i64[0];
    v26 = v92.m256i_i64[2];
    sub_140032F30(&v90);
    goto LABEL_24;
  }
  v90 = v71;
  v9 = v71.m256i_i64[1];
  if ( v71.m256i_i8[0] != 5 )
  {
    nullsub_1(v71.m256i_i64[3], v71.m256i_i64[1]);
    v26 = 33;
    v35 = (__m128i *)sub_140001650(33, 1);
    if ( !v35 )
    {
      v96 = 1;
      sub_14196B2DB(1, 33);
    }
    m128i_i64 = v35->m128i_i64;
    qmemcpy(&v35[1], " is not an object", 17);
    v8 = _mm_loadu_si128((const __m128i *)&xmmword_141A4728F);
    *v35 = v8;
    goto LABEL_40;
  }
  v88 = a1;
  if ( !v71.m256i_i64[1] )
    goto LABEL_66;
  v87 = v7;
  v85 = v71.m256i_i64[2];
  v93 = *(_OWORD *)&v71.m256i_u64[1];
LABEL_6:
  v10 = v9 + 360;
  v11 = *(unsigned __int16 *)(v9 + 626);
  v69 = v9;
  v12 = (_BYTE *)(v9 - 31);
  v70 = v11;
  v13 = 3LL * (unsigned int)(8 * v11);
  v14 = -1;
  do
  {
    if ( !v13 )
    {
      v14 = v70;
LABEL_16:
      if ( *((_QWORD *)&v93 + 1) )
      {
        --*((_QWORD *)&v93 + 1);
        v9 = *(_QWORD *)(v69 + 8 * v14 + 632);
        goto LABEL_6;
      }
      goto LABEL_48;
    }
    v15 = v10 + 24;
    v16 = *(_QWORD *)(v10 + 16);
    v17 = v16 - 25;
    if ( v16 >= 0x19 )
      v16 = 25;
    v18 = -(__int64)v17;
    v19 = sub_141923B40(aAimamiRouterUn_0, *(_QWORD *)(v10 + 8), v16);
    if ( v19 )
      v18 = v19;
    LOBYTE(v21) = (v18 > 0) - (v18 < 0);
    v12 += 32;
    ++v14;
    v13 -= 24;
    v10 = v15;
  }
  while ( (_BYTE)v21 == 1 );
  if ( (_BYTE)v21 )
    goto LABEL_16;
  v7 = v87;
  if ( *(v12 - 1) == 1 && *v12 )
  {
    nullsub_1(v21, v20);
    v26 = 41;
    v36 = (_QWORD *)sub_140001650(41, 1);
    if ( !v36 )
    {
      v96 = 1;
      sub_14196B2DB(1, 41);
    }
    m128i_i64 = v36;
    v8.m128i_i64[0] = 0x632070756B636162LL;
    qmemcpy(v36, "backup contains AiMaMi router unlock auth", 41);
    goto LABEL_65;
  }
LABEL_48:
  v37 = v93;
LABEL_49:
  v38 = v37 + 360;
  v39 = *(unsigned __int16 *)(v37 + 626);
  *(_QWORD *)&v93 = v37;
  m128i_i64 = (_QWORD *)(v37 - 8);
  *((_QWORD *)&v93 + 1) = v39;
  v40 = 3LL * (unsigned int)(8 * v39);
  v41 = -1;
  do
  {
    if ( !v40 )
    {
      v41 = *((_QWORD *)&v93 + 1);
      v7 = v87;
LABEL_59:
      if ( !v85 )
        goto LABEL_66;
      --v85;
      v37 = *(_QWORD *)(v93 + 8 * v41 + 632);
      goto LABEL_49;
    }
    v42 = v38 + 24;
    v43 = *(_QWORD *)(v38 + 16);
    v44 = v43 - 14;
    if ( v43 >= 0xE )
      v43 = 14;
    v45 = -(__int64)v44;
    v46 = sub_141923B40(aOpenaiApiKey_2, *(_QWORD *)(v38 + 8), v43);
    if ( v46 )
      v45 = v46;
    v47 = (v45 > 0) - (v45 < 0);
    m128i_i64 += 4;
    ++v41;
    v40 -= 24;
    v38 = v42;
  }
  while ( v47 == 1 );
  v7 = v87;
  if ( v47 )
    goto LABEL_59;
  if ( *((_BYTE *)m128i_i64 - 24) == 3 )
  {
    v48 = *(m128i_i64 - 1);
    v49 = *m128i_i64;
    v96 = 1;
    v50 = sub_1408FEA60(v48, v49);
    if ( v50 )
    {
      if ( v51 )
      {
        v26 = -1;
        if ( v51 < 0x17 )
        {
LABEL_65:
          a1 = v88;
          goto LABEL_40;
        }
        v8 = _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v50), (__m128i)xmmword_141A34F70),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v50 + 7)), (__m128i)xmmword_141A34F60));
        a1 = v88;
        if ( _mm_movemask_epi8(v8) == 0xFFFF )
        {
          nullsub_1(v52, v51);
          v26 = 39;
          v63 = (__m128i *)sub_140001650(39, 1);
          if ( !v63 )
          {
            v96 = 1;
            sub_14196B2DB(1, 39);
          }
          m128i_i64 = v63->m128i_i64;
          qmemcpy(&v63[1], "AiMaMi virtual API auth", 23);
          v8 = _mm_loadu_si128((const __m128i *)&xmmword_141A49E2A);
          *v63 = v8;
        }
LABEL_40:
        sub_140032FF0(&v90);
        v25 = v26;
LABEL_24:
        if ( v25 != -1 )
          goto LABEL_25;
        goto LABEL_69;
      }
    }
  }
LABEL_66:
  v8 = _mm_loadu_si128((const __m128i *)&v90);
  *(__m128i *)&v92.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v90.m256i_u64[2]);
  *(__m128i *)v92.m256i_i8 = v8;
  v96 = 0;
  sub_140B87260(&v73, &v92, aAuthfile, 8, &off_141A49E68, 5);
  a1 = v88;
  v53 = v73.m256i_i64[0];
  if ( v73.m256i_i64[0] == -2 )
  {
    v86 = v73.m256i_i64[1];
    v82 = 0;
    v83 = 1;
    v84 = 0;
    v92.m256i_i64[2] = 1610612768;
    v92.m256i_i64[0] = (__int64)&v82;
    v92.m256i_i64[1] = (__int64)&off_141A49990;
    if ( (unsigned __int8)sub_14166FAD0(&v86, &v92) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_59,
        55,
        (unsigned int)&v94,
        (unsigned int)&unk_141A481A8,
        (__int64)&off_141A4E498);
    v25 = v82;
    m128i_i64 = (_QWORD *)v83;
    v26 = v84;
    v96 = 0;
    sub_140032F30(&v86);
    if ( v25 != -1 )
      goto LABEL_25;
    goto LABEL_69;
  }
  v54 = *(_OWORD *)&v73.m256i_u64[1];
  m128i_i64 = (_QWORD *)v73.m256i_i64[3];
  sub_1419234B0(v72, &v74, 144);
  *(_OWORD *)&v71.m256i_u64[1] = v54;
  v71.m256i_i64[3] = (__int64)m128i_i64;
  v71.m256i_i64[0] = v53;
  if ( (unsigned __int8)sub_14071CE40(&v71) )
  {
    nullsub_1(v56, v55);
    v57 = (__m128i *)sub_140001650(43, 1);
    if ( !v57 )
      sub_14196B2DB(1, 43);
    m128i_i64 = v57->m128i_i64;
    qmemcpy(&v57[1], "AiMaMi managed virtual auth", 27);
    *v57 = _mm_loadu_si128((const __m128i *)&xmmword_141A49EF5);
    sub_140778B70(&v71);
    v26 = 43;
    v25 = 43;
    goto LABEL_25;
  }
  if ( (unsigned __int8)sub_14071C530(&v71) )
  {
    v25 = -1;
  }
  else
  {
    nullsub_1(v61, v60);
    v25 = 61;
    v62 = (__m128i *)sub_140001650(61, 1);
    if ( !v62 )
      sub_14196B2DB(1, 61);
    m128i_i64 = v62->m128i_i64;
    qmemcpy(&v62[1], "neither user OAuth auth nor user API-key auth", 45);
    v8 = _mm_loadu_si128((const __m128i *)&xmmword_141A49EB8);
    *v62 = v8;
  }
  sub_140778B70(&v71);
  v26 = 61;
  if ( v25 == -1 )
  {
LABEL_69:
    *(_QWORD *)(a1 + 8) = v91;
    *(_QWORD *)(a1 + 16) = v89;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)a1 = -1;
    return *(double *)v8.m128i_i64;
  }
LABEL_25:
  *(_QWORD *)&v93 = v25;
  *((_QWORD *)&v93 + 1) = m128i_i64;
  v92.m256i_i64[0] = v89;
  v92.m256i_i64[1] = v7;
  *(_OWORD *)&v92.m256i_u64[2] = 0;
  v95 = 1;
  vendor_json_parse_str_with_trailing_check(&v73, (__int128 *)v92.m256i_i8);
  if ( v73.m256i_i8[0] == -1 )
  {
    v95 = 1;
    sub_140032F30(&v73.m256i_u64[1]);
LABEL_79:
    *(_OWORD *)v71.m256i_i8 = v93;
    v71.m256i_i64[2] = v26;
    *(_OWORD *)v92.m256i_i8 = v68;
    v73.m256i_i64[0] = (__int64)v67;
    v73.m256i_i64[1] = (__int64)sub_140191200;
    v73.m256i_i64[2] = (__int64)&v92;
    v73.m256i_i64[3] = (__int64)sub_1416CE600;
    v74 = &v71;
    v75 = (__int64)sub_1400015F0;
    sub_1416DAFA0(&v65, &unk_141A49C7B, &v73);
    *(_QWORD *)(a1 + 24) = v66;
    v8 = _mm_loadu_si128(&v65);
    *(__m128i *)(a1 + 8) = v8;
    *(_QWORD *)a1 = 10;
    if ( v71.m256i_i64[0] )
      *(double *)v8.m128i_i64 = sub_140001660(v71.m256i_i64[1], v71.m256i_i64[0], 1);
    v59 = v91;
    goto LABEL_82;
  }
  v27 = _mm_loadu_si128((const __m128i *)&v73);
  *(__m128i *)&v90.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v73.m256i_u64[2]);
  *(__m128i *)v90.m256i_i8 = v27;
  v28 = (_BYTE *)sub_1416724D0(aAimamiRouterUn_0, 25, &v90);
  if ( v28 && *v28 == 1 && v28[1] )
    goto LABEL_43;
  v29 = sub_1416724D0(aOpenaiApiKey_2, 14, &v90);
  v32 = v29
     && *(_BYTE *)v29 == 3
     && (v30 = sub_1408FEA60(*(_QWORD *)(v29 + 16), *(_QWORD *)(v29 + 24)), v31 >= 0x17)
     && _mm_movemask_epi8(
          _mm_and_si128(
            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v30), (__m128i)xmmword_141A34F70),
            _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v30 + 7)), (__m128i)xmmword_141A34F60))) == 0xFFFF;
  v33 = sub_1416724D0(aTokens_0, 6, &v90);
  if ( !v33 || *(_BYTE *)v33 != 5 )
  {
    if ( v32 )
      goto LABEL_43;
LABEL_36:
    sub_140D8EBC0(&v71, &v92);
    if ( v71.m256i_i64[0] == -2 )
    {
      v73.m256i_i64[1] = v71.m256i_i64[1];
      v73.m256i_i8[0] = 1;
      sub_140032F30(&v73.m256i_u64[1]);
      v34 = 0;
    }
    else
    {
      sub_1419234B0(&v73, &v71, 176);
      v34 = sub_14071CE40(&v73);
      sub_140778B70(&v71);
    }
    v95 = 1;
    sub_140032FF0(&v90);
    if ( v34 )
      goto LABEL_75;
    goto LABEL_79;
  }
  if ( *(_QWORD *)(v33 + 24) != 0 || !v32 )
    goto LABEL_36;
LABEL_43:
  v95 = 1;
  sub_140032FF0(&v90);
LABEL_75:
  v58 = v93;
  *(_OWORD *)v71.m256i_i8 = v93;
  v71.m256i_i64[2] = v26;
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    v92.m256i_i64[0] = (__int64)&v71;
    v92.m256i_i64[1] = (__int64)sub_1400015F0;
    v76 = 2;
    v77 = aCodexmateLibCo_31;
    v78 = 46;
    v80 = &unk_141A49CCC;
    v81 = &v92;
    v73.m256i_i64[0] = 0;
    v73.m256i_i64[1] = (__int64)aCodexmateLibCo_31;
    *(_OWORD *)&v73.m256i_u64[2] = 0x2Eu;
    v74 = (__m256i *)aSrcCoreRelayRo_0;
    v75 = 36;
    v79 = 0x14600000001LL;
    sub_141503E20(&v94, &v73);
    v58 = v71.m256i_i64[0];
  }
  v8.m128i_i64[0] = -1;
  *(_OWORD *)a1 = -1;
  v59 = v91;
  if ( v58 )
    *(double *)v8.m128i_i64 = sub_140001660(v71.m256i_i64[1], v58, 1);
LABEL_82:
  if ( v59 )
    *(double *)v8.m128i_i64 = sub_140001660(v89, v59, 1);
  return *(double *)v8.m128i_i64;
}
