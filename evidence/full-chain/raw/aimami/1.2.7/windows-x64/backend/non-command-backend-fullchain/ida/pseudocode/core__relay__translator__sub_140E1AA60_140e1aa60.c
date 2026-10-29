// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e1aa60 | name sub_140E1AA60
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E1AA60(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  __int64 v7; // r14
  const __m128i *v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  const __m128i *v12; // r8
  __int64 v13; // rax
  char v14; // bl
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  signed __int64 v22; // r15
  __int64 v23; // rbx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __m128i *v29; // rax
  _DWORD *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __m128i v34; // xmm0
  unsigned __int64 v35; // r12
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __m128i *v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rax
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r12
  __m128i *v51; // rax
  __int64 v52; // rbx
  const __m128i *v53; // rbx
  unsigned __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int8 v60; // r15
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  const __m128i *v64; // r13
  const __m128i *v65; // r15
  __m128i *v66; // rax
  __int64 v67; // r12
  __int64 v68; // rax
  int v69; // ecx
  __int64 v70; // rcx
  const __m128i *v71; // r15
  __int64 v72; // rax
  int v73; // r12d
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // r13
  const __m128i *v77; // rax
  __int64 v78; // rcx
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __int64 v81; // rdx
  __int64 v82; // r8
  __m128i v84; // xmm1
  __int64 v86; // r10
  __int64 v87; // r9
  __int8 *v88; // r13
  unsigned __int64 v89; // r15
  char v92; // dl
  bool v93; // zf
  char *v94; // rbx
  int v95; // eax
  __int64 v96; // rbx
  __m128i *v97; // rax
  __int64 v98; // rcx
  __m128i *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  const __m128i *v102; // rbx
  unsigned __int64 v103; // r15
  __int64 v104; // r12
  __m128i *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rcx
  void *v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rbx
  _DWORD *v115; // rax
  __int64 v116; // rcx
  __m128i *v117; // rax
  __int64 v118; // rcx
  __m128i *v119; // rax
  __int64 v120; // rcx
  signed __int64 v121; // r15
  const __m128i *v122; // r13
  __int64 v123; // rbx
  __m128i *v124; // rax
  __int64 v125; // r12
  __int64 v126; // rcx
  _DWORD *v127; // rax
  __int64 v128; // rcx
  unsigned __int64 v129; // rbx
  __m128i *v130; // rax
  __int64 v131; // r15
  __int64 v132; // rcx
  __int64 v133; // rax
  const __m128i *v134; // rbx
  unsigned __int64 v135; // r15
  __int64 v136; // r12
  _DWORD *v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rbx
  _DWORD *v147; // rax
  __int64 v148; // rcx
  __m128i *v149; // rax
  __int64 v150; // rcx
  void *v151; // rax
  unsigned __int64 v152; // r12
  __int64 v153; // rbx
  __m128i *v154; // rax
  __int64 v155; // r15
  const __m128i *v156; // rbx
  unsigned __int64 v157; // r15
  __int64 v158; // r12
  __int64 v160; // rax
  __int64 v161; // r9
  unsigned __int64 v162; // rdi
  const __m128i *v163; // r14
  __int64 v164; // rbx
  __int64 v165; // rcx
  const __m128i *v166; // rdx
  __int64 v167; // rcx
  __m128i v168; // [rsp+30h] [rbp-50h] BYREF
  __int64 v169; // [rsp+40h] [rbp-40h]
  _QWORD v170[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v171; // [rsp+60h] [rbp-20h]
  __int64 v172; // [rsp+68h] [rbp-18h] BYREF
  __int64 v173; // [rsp+70h] [rbp-10h]
  __int64 v174; // [rsp+78h] [rbp-8h]
  __int64 v175; // [rsp+80h] [rbp+0h]
  __int64 v176; // [rsp+88h] [rbp+8h]
  char v177; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v178[15]; // [rsp+91h] [rbp+11h]
  __m128i v179; // [rsp+A0h] [rbp+20h]
  __m128i v180; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v181; // [rsp+C0h] [rbp+40h]
  __m128i v182; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v183; // [rsp+D8h] [rbp+58h]
  __int128 v184; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v185; // [rsp+F0h] [rbp+70h]
  __int64 v186; // [rsp+108h] [rbp+88h]
  char v187; // [rsp+117h] [rbp+97h] BYREF
  const __m128i *v188; // [rsp+118h] [rbp+98h]
  const __m128i *v189; // [rsp+120h] [rbp+A0h]
  __int64 v190; // [rsp+128h] [rbp+A8h] BYREF
  __m128i v191; // [rsp+130h] [rbp+B0h]
  __int64 v192; // [rsp+140h] [rbp+C0h]
  __int64 v193; // [rsp+148h] [rbp+C8h]
  __m128i *v194; // [rsp+150h] [rbp+D0h]
  __int64 v195; // [rsp+158h] [rbp+D8h]
  __m128i *v196; // [rsp+160h] [rbp+E0h]
  const __m128i *v197; // [rsp+168h] [rbp+E8h]
  __m128i v198; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v199; // [rsp+180h] [rbp+100h]
  __m128i v200; // [rsp+188h] [rbp+108h] BYREF
  __int64 v201; // [rsp+198h] [rbp+118h]
  _BYTE v202[24]; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v203; // [rsp+1B8h] [rbp+138h]
  __int64 v204; // [rsp+1C8h] [rbp+148h]
  char v205; // [rsp+1D1h] [rbp+151h]
  char v206; // [rsp+1D2h] [rbp+152h]
  char v207; // [rsp+1D3h] [rbp+153h]
  char v208; // [rsp+1D4h] [rbp+154h]
  char v209; // [rsp+1D5h] [rbp+155h]
  char v210; // [rsp+1D6h] [rbp+156h]
  char v211; // [rsp+1D7h] [rbp+157h]
  __int64 v212; // [rsp+1D8h] [rbp+158h]
  __m256i v213; // [rsp+1E0h] [rbp+160h] BYREF
  char v214; // [rsp+20Dh] [rbp+18Dh]
  char v215; // [rsp+20Eh] [rbp+18Eh]
  char v216; // [rsp+20Fh] [rbp+18Fh]
  __m256i v217; // [rsp+210h] [rbp+190h] BYREF
  char v218; // [rsp+237h] [rbp+1B7h]
  __int64 v219; // [rsp+238h] [rbp+1B8h]

  v219 = -2;
  v198.m128i_i64[0] = 0;
  v198.m128i_i64[1] = 1;
  v199 = 0;
  if ( *(_BYTE *)(a2 + 108) )
  {
    v6 = 1;
    v7 = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 108) = 1;
    v218 = 1;
    sub_140E1E8B0(&v217, a2);
    v9 = v217.m256i_u64[2];
    v8 = (const __m128i *)v217.m256i_i64[1];
    if ( v217.m256i_i64[2] )
    {
      v188 = (const __m128i *)v217.m256i_i64[1];
      sub_14190D590((unsigned int)&v198, 0, v217.m256i_i32[4], 1, 1);
      v6 = v198.m128i_i64[1];
      v10 = v199;
      v8 = v188;
      sub_1418F44E0((__m128i *)(v199 + v198.m128i_i64[1]), v188, v9);
    }
    else
    {
      v6 = 1;
      v10 = 0;
    }
    v7 = v9 + v10;
    v199 = v7;
    if ( v217.m256i_i64[0] )
      sub_140001660(v8, v217.m256i_i64[0], 1);
  }
  v218 = 1;
  v11 = sub_1416419F0(aChoices_2, 7, a3);
  if ( !v11 || *(_BYTE *)v11 != 4 || !*(_QWORD *)(v11 + 24) )
  {
    result = v199;
    a1[1].m128i_i64[0] = v199;
    *a1 = _mm_loadu_si128(&v198);
    return result;
  }
  v12 = *(const __m128i **)(v11 + 16);
  v218 = 1;
  v188 = v12;
  v13 = sub_1416419F0(aDelta_4, 5, v12);
  if ( v13 )
  {
    v14 = *(_BYTE *)v13;
    switch ( *(_BYTE *)v13 )
    {
      case 0:
        break;
      case 1:
        v217.m256i_i8[1] = *(_BYTE *)(v13 + 1);
        break;
      case 2:
        *(__m128i *)&v217.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v13 + 8));
        break;
      case 3:
        v218 = 1;
        sub_1416AC440(&v217.m256i_u64[1], v13 + 8);
        break;
      case 4:
        v16 = *(_QWORD *)(v13 + 16);
        v17 = *(_QWORD *)(v13 + 24);
        v218 = 1;
        sub_1403918C0(&v217.m256i_u64[1], v16, v17);
        break;
      case 5:
        if ( *(_QWORD *)(v13 + 24) )
        {
          v18 = *(_QWORD *)(v13 + 8);
          if ( !v18 )
          {
            v218 = 1;
            sub_141939020(&off_141A54900);
          }
          v19 = *(_QWORD *)(v13 + 16);
          v218 = 1;
          sub_140E11B90(&v213, v18, v19);
        }
        else
        {
          v213.m256i_i64[0] = 0;
          v213.m256i_i64[2] = 0;
        }
        v217.m256i_i64[1] = v213.m256i_i64[0];
        *(_OWORD *)&v217.m256i_u64[2] = *(_OWORD *)&v213.m256i_u64[1];
        break;
    }
    v179 = *(__m128i *)&v217.m256i_u64[2];
    v177 = v14;
    v178[0] = v217.m256i_i8[1];
    *(_DWORD *)&v178[1] = *(__int32 *)((char *)v217.m256i_i32 + 2);
    *(_WORD *)&v178[5] = v217.m256i_i16[3];
    *(_QWORD *)&v178[7] = v217.m256i_i64[1];
    v217.m256i_i8[0] = 0;
    v218 = 1;
    sub_140DF44E0(&v217);
  }
  else
  {
    v217.m256i_i8[0] = 0;
    v179 = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
    v177 = 0;
    *(_QWORD *)v178 = *(__int64 *)((char *)v217.m256i_i64 + 1);
    *(_DWORD *)&v178[8] = *(__int32 *)((char *)&v217.m256i_i32[2] + 1);
    *(_WORD *)&v178[12] = *(__int16 *)((char *)&v217.m256i_i16[6] + 1);
    v178[14] = v217.m256i_i8[15];
  }
  v20 = sub_1416419F0(aContent_9, 7, &v177);
  if ( v20 )
  {
    if ( *(_BYTE *)v20 == 3 )
    {
      v22 = *(_QWORD *)(v20 + 24);
      if ( v22 )
      {
        v189 = *(const __m128i **)(v20 + 16);
        if ( *(_DWORD *)(a2 + 48) == 1 )
        {
          LODWORD(v23) = *(_DWORD *)(a2 + 52);
          goto LABEL_53;
        }
        v23 = *(unsigned int *)(a2 + 104);
        *(_DWORD *)(a2 + 104) = v23 + 1;
        *(_DWORD *)(a2 + 48) = 1;
        *(_DWORD *)(a2 + 52) = v23;
        v200.m128i_i64[0] = 0;
        v201 = 0;
        nullsub_1(v21);
        v24 = (__m128i *)sub_140001650(4, 1);
        if ( !v24 )
          sub_141938D2B(1, 4);
        v24->m128i_i32[0] = 1701869940;
        *(_QWORD *)v202 = 4;
        v197 = v24;
        *(_QWORD *)&v202[8] = v24;
        *(_QWORD *)&v202[16] = 4;
        v216 = 1;
        sub_14040FB10(&v217, &off_141A53298);
        if ( v217.m256i_i8[0] == -1 )
        {
          v213.m256i_i64[0] = v217.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v213,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A532A8);
        }
        v25 = _mm_loadu_si128((const __m128i *)&v217);
        *(__m128i *)&v213.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
        *(__m128i *)v213.m256i_i8 = v25;
        v216 = 0;
        sub_140E72AA0(&v217, &v200, v202, &v213);
        if ( v217.m256i_i8[0] != -1 )
          sub_140DF44E0(&v217);
        nullsub_1(v26);
        v27 = sub_140001650(5, 1);
        if ( !v27 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v27 + 4) = 120;
        *(_DWORD *)v27 = 1701080681;
        *(_QWORD *)v202 = 5;
        *(_QWORD *)&v202[8] = v27;
        *(_QWORD *)&v202[16] = 5;
        v217.m256i_i8[0] = 2;
        v217.m256i_i64[1] = 0;
        v217.m256i_i64[2] = v23;
        sub_140E72AA0(&v213, &v200, v202, &v217);
        if ( v213.m256i_i8[0] != -1 )
          sub_140DF44E0(&v213);
        nullsub_1(v28);
        v29 = (__m128i *)sub_140001650(13, 1);
        if ( !v29 )
          sub_141938D2B(1, 13);
        qmemcpy(v29, "content_block", 13);
        *(_QWORD *)&v184 = 13;
        v197 = v29;
        *((_QWORD *)&v184 + 1) = v29;
        v185.m128i_i64[0] = 13;
        v190 = 0;
        v191.m128i_i64[1] = 0;
        nullsub_1(0x5F746E65746E6F63LL);
        v30 = (_DWORD *)sub_140001650(4, 1);
        if ( !v30 )
          sub_141938D2B(1, 4);
        *v30 = 1701869940;
        *(_QWORD *)v202 = 4;
        v204 = (__int64)v30;
        *(_QWORD *)&v202[8] = v30;
        *(_QWORD *)&v202[16] = 4;
        v215 = 1;
        sub_14040FB10(&v217, &off_141A532D8);
        if ( v217.m256i_i8[0] == -1 )
        {
          v213.m256i_i64[0] = v217.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v213,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A532A8);
        }
        v31 = _mm_loadu_si128((const __m128i *)&v217);
        *(__m128i *)&v213.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
        *(__m128i *)v213.m256i_i8 = v31;
        v215 = 0;
        sub_140E72AA0(&v217, &v190, v202, &v213);
        if ( v217.m256i_i8[0] != -1 )
          sub_140DF44E0(&v217);
        nullsub_1(v32);
        v33 = (_DWORD *)sub_140001650(4, 1);
        if ( !v33 )
          sub_141938D2B(1, 4);
        *v33 = 1954047348;
        *(_QWORD *)v202 = 4;
        v204 = (__int64)v33;
        *(_QWORD *)&v202[8] = v33;
        *(_QWORD *)&v202[16] = 4;
        v214 = 1;
        sub_14040FB10(&v217, &unk_141A52EE0);
        if ( v217.m256i_i8[0] == -1 )
        {
          v213.m256i_i64[0] = v217.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v213,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A532A8);
        }
        v34 = _mm_loadu_si128((const __m128i *)&v217);
        *(__m128i *)&v213.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
        *(__m128i *)v213.m256i_i8 = v34;
        v214 = 0;
        sub_140E72AA0(&v217, &v190, v202, &v213);
        if ( v217.m256i_i8[0] != -1 )
          sub_140DF44E0(&v217);
        *(__m128i *)&v217.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v190);
        v217.m256i_i64[3] = v191.m128i_i64[1];
        v217.m256i_i8[0] = 5;
        v211 = 0;
        sub_140E72AA0(&v213, &v200, &v184, &v217);
        if ( v213.m256i_i8[0] != -1 )
          sub_140DF44E0(&v213);
        *(__m128i *)&v217.m256i_u64[1] = _mm_loadu_si128(&v200);
        v217.m256i_i64[3] = v201;
        v217.m256i_i8[0] = 5;
        sub_140E88840(&v213, &v217);
        v35 = v213.m256i_u64[2];
        v197 = (const __m128i *)v213.m256i_i64[1];
        if ( v213.m256i_i64[2] > (unsigned __int64)(v198.m128i_i64[0] - v7) )
        {
          sub_14190D590((unsigned int)&v198, v7, v213.m256i_i32[4], 1, 1);
          v6 = v198.m128i_i64[1];
          v7 = v199;
        }
        else if ( !v213.m256i_i64[2] )
        {
LABEL_50:
          v7 += v35;
          v199 = v7;
          if ( v213.m256i_i64[0] )
            sub_140001660(v197, v213.m256i_i64[0], 1);
          sub_140DF44E0(&v217);
LABEL_53:
          v200.m128i_i64[0] = 0;
          v201 = 0;
          nullsub_1(v21);
          v36 = (_DWORD *)sub_140001650(4, 1);
          if ( !v36 )
            sub_141938D2B(1, 4);
          *v36 = 1701869940;
          *(_QWORD *)v202 = 4;
          v204 = (__int64)v36;
          *(_QWORD *)&v202[8] = v36;
          *(_QWORD *)&v202[16] = 4;
          nullsub_1(v37);
          v38 = sub_140001650(19, 1);
          v197 = (const __m128i *)v38;
          if ( !v38 )
            sub_141938D2B(1, 19);
          *(__m128i *)v38 = _mm_loadu_si128((const __m128i *)aContentBlockDe);
          *(_DWORD *)(v38 + 15) = 1635019877;
          v217.m256i_i8[0] = 3;
          v217.m256i_i64[1] = 19;
          v217.m256i_i64[2] = v38;
          v217.m256i_i64[3] = 19;
          sub_140E72AA0(&v213, &v200, v202, &v217);
          if ( v213.m256i_i8[0] != -1 )
            sub_140DF44E0(&v213);
          nullsub_1(v39);
          v40 = sub_140001650(5, 1);
          if ( !v40 )
            sub_141938D2B(1, 5);
          *(_BYTE *)(v40 + 4) = 120;
          *(_DWORD *)v40 = 1701080681;
          *(_QWORD *)v202 = 5;
          *(_QWORD *)&v202[8] = v40;
          *(_QWORD *)&v202[16] = 5;
          v217.m256i_i8[0] = 2;
          v217.m256i_i64[1] = 0;
          v217.m256i_i64[2] = (unsigned int)v23;
          sub_140E72AA0(&v213, &v200, v202, &v217);
          if ( v213.m256i_i8[0] != -1 )
            sub_140DF44E0(&v213);
          nullsub_1(v41);
          v42 = (__m128i *)sub_140001650(5, 1);
          if ( !v42 )
            sub_141938D2B(1, 5);
          v42->m128i_i8[4] = 97;
          v42->m128i_i32[0] = 1953260900;
          *(_QWORD *)&v184 = 5;
          v197 = v42;
          *((_QWORD *)&v184 + 1) = v42;
          v185.m128i_i64[0] = 5;
          v190 = 0;
          v191.m128i_i64[1] = 0;
          nullsub_1(v43);
          v44 = (_DWORD *)sub_140001650(4, 1);
          if ( !v44 )
            sub_141938D2B(1, 4);
          *v44 = 1701869940;
          *(_QWORD *)v202 = 4;
          v195 = (__int64)v44;
          *(_QWORD *)&v202[8] = v44;
          *(_QWORD *)&v202[16] = 4;
          nullsub_1(v45);
          v46 = (void *)sub_140001650(10, 1);
          v204 = (__int64)v46;
          if ( !v46 )
            sub_141938D2B(1, 10);
          qmemcpy(v46, "text_delta", 10);
          v217.m256i_i8[0] = 3;
          v217.m256i_i64[1] = 10;
          v217.m256i_i64[2] = (__int64)v46;
          v217.m256i_i64[3] = 10;
          sub_140E72AA0(&v213, &v190, v202, &v217);
          if ( v213.m256i_i8[0] != -1 )
            sub_140DF44E0(&v213);
          nullsub_1(v47);
          v48 = (_DWORD *)sub_140001650(4, 1);
          if ( !v48 )
            sub_141938D2B(1, 4);
          *v48 = 1954047348;
          *(_QWORD *)v202 = 4;
          *(_QWORD *)&v202[8] = v48;
          *(_QWORD *)&v202[16] = 4;
          v204 = (__int64)v48;
          if ( v22 < 0 )
          {
            v50 = 0;
            goto LABEL_68;
          }
          nullsub_1(v49);
          v50 = 1;
          v51 = (__m128i *)sub_140001650(v22, 1);
          if ( !v51 )
          {
LABEL_68:
            v210 = 1;
            sub_141938D2B(v50, v22);
          }
          v52 = (__int64)v51;
          sub_1418F44E0(v51, v189, v22);
          v217.m256i_i8[0] = 3;
          v217.m256i_i64[1] = v22;
          v217.m256i_i64[2] = v52;
          v217.m256i_i64[3] = v22;
          v210 = 0;
          sub_140E72AA0(&v213, &v190, v202, &v217);
          if ( v213.m256i_i8[0] != -1 )
            sub_140DF44E0(&v213);
          *(__m128i *)&v217.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v190);
          v217.m256i_i64[3] = v191.m128i_i64[1];
          v217.m256i_i8[0] = 5;
          v209 = 0;
          sub_140E72AA0(&v213, &v200, &v184, &v217);
          if ( v213.m256i_i8[0] != -1 )
            sub_140DF44E0(&v213);
          *(__m128i *)&v213.m256i_u64[1] = _mm_loadu_si128(&v200);
          v213.m256i_i64[3] = v201;
          v213.m256i_i8[0] = 5;
          v190 = (__int64)aContentBlockDe;
          v191.m128i_i64[0] = 19;
          *(_QWORD *)&v184 = &v213;
          v217.m256i_i64[0] = (__int64)&v190;
          v217.m256i_i64[1] = (__int64)sub_140186EE0;
          v217.m256i_i64[2] = (__int64)&v184;
          v217.m256i_i64[3] = (__int64)sub_1404806B0;
          sub_1416ABFD0(v202, &unk_141A548D8, &v217);
          v53 = *(const __m128i **)&v202[8];
          v54 = *(_QWORD *)&v202[16];
          if ( *(_QWORD *)&v202[16] > (unsigned __int64)(v198.m128i_i64[0] - v7) )
          {
            v189 = *(const __m128i **)&v202[8];
            sub_14190D590((unsigned int)&v198, v7, *(_DWORD *)&v202[16], 1, 1);
            v7 = v199;
            v53 = v189;
          }
          else if ( !*(_QWORD *)&v202[16] )
          {
LABEL_77:
            v199 = v54 + v7;
            if ( *(_QWORD *)v202 )
              sub_140001660(v53, *(_QWORD *)v202, 1);
            sub_140DF44E0(&v213);
            goto LABEL_80;
          }
          sub_1418F44E0((__m128i *)(v7 + v198.m128i_i64[1]), v53, v54);
          goto LABEL_77;
        }
        sub_1418F44E0((__m128i *)(v7 + v6), v197, v35);
        goto LABEL_50;
      }
    }
  }
LABEL_80:
  v55 = sub_1416419F0(aToolCalls_0, 10, &v177);
  if ( v55 )
  {
    if ( *(_BYTE *)v55 == 4 )
    {
      v56 = *(_QWORD *)(v55 + 16);
      v171 = v56 + 32LL * *(_QWORD *)(v55 + 24);
      if ( v56 != v171 )
      {
        while ( 1 )
        {
          v57 = sub_1416419F0(aIndex_1, 5, v56);
          if ( v57 && *(_BYTE *)v57 == 2 && !*(_QWORD *)(v57 + 8) )
            v58 = *(_QWORD *)(v57 + 16);
          else
            v58 = 0;
          v59 = sub_1416419F0(aFunction_1, 8, v56);
          if ( v59 )
          {
            v60 = *(_BYTE *)v59;
            switch ( *(_BYTE *)v59 )
            {
              case 0:
                break;
              case 1:
                v217.m256i_i8[1] = *(_BYTE *)(v59 + 1);
                break;
              case 2:
                *(__m128i *)&v217.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v59 + 8));
                break;
              case 3:
                sub_1416AC440(&v217.m256i_u64[1], v59 + 8);
                break;
              case 4:
                sub_1403918C0(&v217.m256i_u64[1], *(_QWORD *)(v59 + 16), *(_QWORD *)(v59 + 24));
                break;
              case 5:
                if ( *(_QWORD *)(v59 + 24) )
                {
                  v61 = *(_QWORD *)(v59 + 8);
                  if ( !v61 )
                    sub_141939020(&off_141A54900);
                  sub_140E11B90(&v213, v61, *(_QWORD *)(v59 + 16));
                }
                else
                {
                  v213.m256i_i64[0] = 0;
                  v213.m256i_i64[2] = 0;
                }
                v217.m256i_i64[1] = v213.m256i_i64[0];
                *(_OWORD *)&v217.m256i_u64[2] = *(_OWORD *)&v213.m256i_u64[1];
                break;
            }
            v217.m256i_i8[0] = v60;
            v185 = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
            LOWORD(v184) = __PAIR16__(v217.m256i_u8[1], v60);
            *(_QWORD *)((char *)&v184 + 2) = *(__int64 *)((char *)v217.m256i_i64 + 2);
            *(_DWORD *)((char *)&v184 + 10) = *(__int32 *)((char *)&v217.m256i_i32[2] + 2);
            HIWORD(v184) = v217.m256i_i16[7];
            v217.m256i_i8[0] = 0;
            sub_140DF44E0(&v217);
          }
          else
          {
            v217.m256i_i8[0] = 0;
            v185 = _mm_loadu_si128((const __m128i *)&v217.m256i_u64[2]);
            LOBYTE(v184) = 0;
            *(_QWORD *)((char *)&v184 + 1) = *(__int64 *)((char *)v217.m256i_i64 + 1);
            *(_DWORD *)((char *)&v184 + 9) = *(__int32 *)((char *)&v217.m256i_i32[2] + 1);
            *(_WORD *)((char *)&v184 + 13) = *(__int16 *)((char *)&v217.m256i_i16[6] + 1);
            HIBYTE(v184) = v217.m256i_i8[15];
          }
          v62 = sub_1416419F0(aId_8, 2, v56);
          if ( !v62 || *(_BYTE *)v62 != 3 )
            break;
          v64 = *(const __m128i **)(v62 + 24);
          if ( (__int64)v64 < 0 )
          {
            v165 = 0;
            v166 = v189;
            goto LABEL_252;
          }
          LOBYTE(v63) = 1;
          LODWORD(v212) = v63;
          if ( !v64 )
            goto LABEL_108;
          v65 = *(const __m128i **)(v62 + 16);
          nullsub_1(v63);
          v66 = (__m128i *)sub_140001650(v64, 1);
          if ( !v66 )
          {
            v166 = v64;
            v165 = 1;
LABEL_252:
            sub_141938D2B(v165, v166);
          }
          v67 = (__int64)v66;
          sub_1418F44E0(v66, v65, (unsigned __int64)v64);
          LODWORD(v212) = 0;
LABEL_109:
          v170[0] = v64;
          v189 = (const __m128i *)v67;
          v170[1] = v67;
          v197 = v64;
          v170[2] = v64;
          v68 = sub_1416419F0(aName_9, 4, &v184);
          LOBYTE(v69) = 1;
          LODWORD(v196) = v69;
          if ( !v68 || *(_BYTE *)v68 != 3 )
            goto LABEL_115;
          v70 = *(_QWORD *)(v68 + 24);
          if ( v70 < 0 )
          {
            v167 = 0;
            goto LABEL_254;
          }
          v194 = *(__m128i **)(v68 + 24);
          if ( v70 )
          {
            v71 = *(const __m128i **)(v68 + 16);
            nullsub_1(v70);
            v193 = sub_140001650(v194, 1);
            if ( !v193 )
            {
              v193 = (__int64)v194;
              v167 = 1;
LABEL_254:
              sub_141938D2B(v167, v193);
            }
            sub_1418F44E0((__m128i *)v193, v71, (unsigned __int64)v194);
            LODWORD(v196) = 0;
          }
          else
          {
LABEL_115:
            v193 = 1;
            v194 = nullptr;
          }
          v72 = sub_1416419F0(aArguments_0, 9, &v184);
          LOBYTE(v195) = 1;
          if ( v72 && *(_BYTE *)v72 == 3 )
          {
            v176 = *(_QWORD *)(v72 + 16);
            v175 = *(_QWORD *)(v72 + 24);
            LOBYTE(v195) = v175 == 0;
          }
          else
          {
            v176 = 1;
            v175 = 0;
          }
          v56 += 32;
          v73 = *(_DWORD *)(a2 + 104);
          v217.m256i_i64[0] = v58;
          v75 = sub_140D2C470((const __m128i *)(a2 + 88), v217.m256i_i64);
          v76 = v75 >> 57;
          v77 = *(const __m128i **)(a2 + 56);
          v78 = *(_QWORD *)(a2 + 64);
          v79 = _mm_cvtsi32_si128(v75 >> 57);
          v80 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v79, v79), 0), 68);
          v81 = 0;
          v82 = v75;
          while ( 1 )
          {
            _R8 = v78 & v82;
            v84 = _mm_loadu_si128((const __m128i *)((char *)v77 + _R8));
            _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v84, v80));
            if ( _R9D )
              break;
LABEL_124:
            v87 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v84, (__m128i)-1LL));
            if ( (_DWORD)v87 )
            {
              if ( !*(_QWORD *)(a2 + 72) )
              {
                LOBYTE(v87) = 1;
                sub_141909590(a2 + 56, 1, a2 + 88, v87);
                v77 = *(const __m128i **)(a2 + 56);
                v78 = *(_QWORD *)(a2 + 64);
              }
              v89 = v78 & v75;
              _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v77 + v89)));
              if ( !_EDX )
              {
                _R8 = 16;
                do
                {
                  v89 = v78 & (_R8 + v89);
                  _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v77 + v89)));
                  _R8 += 16;
                }
                while ( !_EDX );
              }
              __asm { tzcnt   r8d, edx }
              _R8 = v78 & (v89 + _R8);
              v92 = v77->m128i_i8[_R8];
              if ( v92 >= 0 )
              {
                _EDX = _mm_movemask_epi8(_mm_load_si128(v77));
                __asm { tzcnt   r8d, edx }
                v92 = v77->m128i_i8[_R8];
              }
              v77->m128i_i8[_R8] = v76;
              v77[1].m128i_i8[v78 & (_R8 - 16)] = v76;
              v78 = -5 * _R8;
              v88 = &v77->m128i_i8[-40 * _R8];
              *((_QWORD *)v88 - 5) = v58;
              *((_QWORD *)v88 - 4) = 0;
              *((_QWORD *)v88 - 3) = 1;
              *((_QWORD *)v88 - 2) = 0;
              *((_DWORD *)v88 - 2) = v73;
              *(v88 - 4) = 0;
              *(__m128i *)(a2 + 72) = _mm_sub_epi64(
                                        _mm_loadu_si128((const __m128i *)(a2 + 72)),
                                        (__m128i)_mm_shuffle_ps(
                                                   (__m128)_mm_cvtsi32_si128(v92 & 1),
                                                   (__m128)xmmword_1419D3560,
                                                   228));
              v73 = *(_DWORD *)(a2 + 104);
              goto LABEL_133;
            }
            v82 = v81 + _R8 + 16;
            v81 += 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r10d, r9d }
            v86 = -5 * (v78 & (_R8 + _R10));
            if ( *((_QWORD *)&v77[-2] + v86 - 1) == v58 )
              break;
            _R10 = (unsigned int)(_R9D - 1);
            LOWORD(_R10) = _R9D & (_R9D - 1);
            _R9D = _R10;
            if ( !(_WORD)_R10 )
              goto LABEL_124;
          }
          v88 = &v77->m128i_i8[8 * v86];
LABEL_133:
          if ( *((_DWORD *)v88 - 2) == v73 )
            *(_DWORD *)(a2 + 104) = v73 + 1;
          v93 = *(v88 - 4) == 0;
          v204 = (__int64)v88;
          if ( v93 )
          {
            v94 = v88 - 32;
            if ( !(_BYTE)v212 )
            {
              sub_1416AC440(&v217, v170);
              if ( *(_QWORD *)v94 )
                sub_140001660(*((_QWORD *)v88 - 3), *(_QWORD *)v94, 1);
              *((_QWORD *)v94 + 2) = v217.m256i_i64[2];
              *(__m128i *)v94 = _mm_loadu_si128((const __m128i *)&v217);
            }
            if ( !*((_QWORD *)v88 - 2) )
            {
              sub_141568C20(&v217);
              *(__m128i *)v202 = _mm_loadu_si128((const __m128i *)&v217);
              v213.m256i_i64[0] = 0;
              *(_OWORD *)&v213.m256i_u64[1] = 1u;
              v217.m256i_i64[2] = 1610612768;
              v217.m256i_i64[0] = (__int64)&v213;
              v217.m256i_i64[1] = (__int64)&off_141A54A20;
              if ( (unsigned __int8)sub_141569DC0(v202, &v217) )
                sub_141939040(
                  (unsigned int)aADisplayImplem_9,
                  55,
                  (unsigned int)&v187,
                  (unsigned int)&unk_141A53038,
                  (__int64)&off_141A54AD8);
              v186 = v213.m256i_i64[1];
              v212 = v213.m256i_i64[0];
              if ( v213.m256i_i64[2] <= 0xCuLL )
              {
                if ( v213.m256i_i64[2] != 12 )
LABEL_268:
                  sub_141938F40(v213.m256i_i32[2], v213.m256i_i32[4], 0, 12, (__int64)&off_141A53320);
              }
              else if ( *(char *)(v213.m256i_i64[1] + 12) < -64 )
              {
                goto LABEL_268;
              }
              v213.m256i_i64[0] = v213.m256i_i64[1];
              v213.m256i_i64[1] = 12;
              v217.m256i_i64[0] = (__int64)&v213;
              v217.m256i_i64[1] = (__int64)sub_140186EE0;
              sub_1416ABFD0(&v168, &unk_141A53338, &v217);
              if ( v212 )
                sub_140001660(v186, v212, 1);
              v88 = (__int8 *)v204;
              if ( *(_QWORD *)v94 )
                sub_140001660(*(_QWORD *)(v204 - 24), *(_QWORD *)v94, 1);
              *((_QWORD *)v94 + 2) = v169;
              *(__m128i *)v94 = _mm_loadu_si128(&v168);
            }
            if ( !(_BYTE)v196 )
            {
              *(v88 - 4) = 1;
              v95 = *(_DWORD *)(a2 + 48);
              v96 = *(unsigned int *)(a2 + 52);
              *(_DWORD *)(a2 + 48) = 0;
              if ( v95 == 1 )
              {
                v200.m128i_i64[0] = 0;
                v201 = 0;
                nullsub_1(v78);
                v97 = (__m128i *)sub_140001650(4, 1);
                if ( !v97 )
                  sub_141938D2B(1, 4);
                v97->m128i_i32[0] = 1701869940;
                v190 = 4;
                v196 = v97;
                v191.m128i_i64[0] = (__int64)v97;
                v191.m128i_i64[1] = 4;
                nullsub_1(v98);
                v99 = (__m128i *)sub_140001650(18, 1);
                v212 = (__int64)v99;
                if ( !v99 )
                  sub_141938D2B(1, 18);
                *v99 = _mm_loadu_si128((const __m128i *)aContentBlockSt);
                v99[1].m128i_i16[0] = 28783;
                v217.m256i_i8[0] = 3;
                v217.m256i_i64[1] = 18;
                v217.m256i_i64[2] = (__int64)v99;
                v217.m256i_i64[3] = 18;
                sub_140E72AA0(&v213, &v200, &v190, &v217);
                if ( v213.m256i_i8[0] != -1 )
                  sub_140DF44E0(&v213);
                nullsub_1(v100);
                v101 = sub_140001650(5, 1);
                if ( !v101 )
                  sub_141938D2B(1, 5);
                *(_BYTE *)(v101 + 4) = 120;
                *(_DWORD *)v101 = 1701080681;
                v190 = 5;
                v191.m128i_i64[0] = v101;
                v191.m128i_i64[1] = 5;
                v217.m256i_i8[0] = 2;
                v217.m256i_i64[1] = 0;
                v217.m256i_i64[2] = v96;
                sub_140E72AA0(&v213, &v200, &v190, &v217);
                if ( v213.m256i_i8[0] != -1 )
                  sub_140DF44E0(&v213);
                v203 = v201;
                *(__m128i *)&v202[8] = _mm_loadu_si128(&v200);
                v202[0] = 5;
                v190 = (__int64)aContentBlockSt;
                v191.m128i_i64[0] = 18;
                v200.m128i_i64[0] = (__int64)v202;
                v217.m256i_i64[0] = (__int64)&v190;
                v217.m256i_i64[1] = (__int64)sub_140186EE0;
                v217.m256i_i64[2] = (__int64)&v200;
                v217.m256i_i64[3] = (__int64)sub_1404806B0;
                sub_1416ABFD0(&v213, &unk_141A548D8, &v217);
                v103 = v213.m256i_u64[2];
                v102 = (const __m128i *)v213.m256i_i64[1];
                v104 = v199;
                if ( v213.m256i_i64[2] > (unsigned __int64)(v198.m128i_i64[0] - v199) )
                {
                  v212 = v213.m256i_i64[1];
                  sub_14190D590((unsigned int)&v198, v199, v213.m256i_i32[4], 1, 1);
                  v104 = v199;
                  v102 = (const __m128i *)v212;
LABEL_162:
                  sub_1418F44E0((__m128i *)(v104 + v198.m128i_i64[1]), v102, v103);
                }
                else if ( v213.m256i_i64[2] )
                {
                  goto LABEL_162;
                }
                v199 = v103 + v104;
                if ( v213.m256i_i64[0] )
                  sub_140001660(v102, v213.m256i_i64[0], 1);
                sub_140DF44E0(v202);
              }
              v182.m128i_i64[0] = 0;
              v183 = 0;
              nullsub_1(v78);
              v105 = (__m128i *)sub_140001650(4, 1);
              if ( !v105 )
                sub_141938D2B(1, 4);
              v105->m128i_i32[0] = 1701869940;
              *(_QWORD *)v202 = 4;
              v196 = v105;
              *(_QWORD *)&v202[8] = v105;
              *(_QWORD *)&v202[16] = 4;
              nullsub_1(v106);
              v107 = sub_140001650(19, 1);
              v212 = v107;
              if ( !v107 )
                sub_141938D2B(1, 19);
              *(__m128i *)v107 = _mm_loadu_si128((const __m128i *)aContentBlockSt_0);
              *(_DWORD *)(v107 + 15) = 1953653108;
              v217.m256i_i8[0] = 3;
              v217.m256i_i64[1] = 19;
              v217.m256i_i64[2] = v107;
              v217.m256i_i64[3] = 19;
              sub_140E72AA0(&v213, &v182, v202, &v217);
              if ( v213.m256i_i8[0] != -1 )
                sub_140DF44E0(&v213);
              nullsub_1(v108);
              v109 = sub_140001650(5, 1);
              if ( !v109 )
                sub_141938D2B(1, 5);
              *(_BYTE *)(v109 + 4) = 120;
              *(_DWORD *)v109 = 1701080681;
              *(_QWORD *)v202 = 5;
              *(_QWORD *)&v202[8] = v109;
              *(_QWORD *)&v202[16] = 5;
              v110 = *(unsigned int *)(v204 - 8);
              v217.m256i_i8[0] = 2;
              v217.m256i_i64[1] = 0;
              v217.m256i_i64[2] = v110;
              sub_140E72AA0(&v213, &v182, v202, &v217);
              if ( v213.m256i_i8[0] != -1 )
                sub_140DF44E0(&v213);
              nullsub_1(v111);
              v112 = (void *)sub_140001650(13, 1);
              if ( !v112 )
                sub_141938D2B(1, 13);
              v114 = (__int64)v112;
              qmemcpy(v112, "content_block", 13);
              v172 = 13;
              v173 = (__int64)v112;
              v174 = 13;
              v180.m128i_i64[0] = 0;
              v181 = 0;
              nullsub_1(v113);
              v115 = (_DWORD *)sub_140001650(4, 1);
              v212 = v114;
              if ( !v115 )
                sub_141938D2B(1, 4);
              *v115 = 1701869940;
              v200.m128i_i64[0] = 4;
              v186 = (__int64)v115;
              v200.m128i_i64[1] = (__int64)v115;
              v201 = 4;
              nullsub_1(v116);
              v117 = (__m128i *)sub_140001650(8, 1);
              v196 = v117;
              if ( !v117 )
                sub_141938D2B(1, 8);
              v117->m128i_i64[0] = 0x6573755F6C6F6F74LL;
              v217.m256i_i8[0] = 3;
              v217.m256i_i64[1] = 8;
              v217.m256i_i64[2] = (__int64)v117;
              v217.m256i_i64[3] = 8;
              sub_140E72AA0(&v213, &v180, &v200, &v217);
              if ( v213.m256i_i8[0] != -1 )
                sub_140DF44E0(&v213);
              nullsub_1(v118);
              v119 = (__m128i *)sub_140001650(2, 1);
              if ( !v119 )
                sub_141938D2B(1, 2);
              v119->m128i_i16[0] = 25705;
              v200.m128i_i64[0] = 2;
              v196 = v119;
              v200.m128i_i64[1] = (__int64)v119;
              v201 = 2;
              v121 = *(_QWORD *)(v204 - 16);
              if ( v121 < 0 )
              {
                v123 = 0;
LABEL_258:
                v208 = 1;
                sub_141938D2B(v123, v121);
              }
              if ( v121 )
              {
                v122 = *(const __m128i **)(v204 - 24);
                nullsub_1(v120);
                v123 = 1;
                v124 = (__m128i *)sub_140001650(v121, 1);
                if ( !v124 )
                  goto LABEL_258;
                v125 = (__int64)v124;
                sub_1418F44E0(v124, v122, v121);
              }
              else
              {
                v125 = 1;
              }
              v217.m256i_i8[0] = 3;
              v217.m256i_i64[1] = v121;
              v217.m256i_i64[2] = v125;
              v217.m256i_i64[3] = v121;
              v208 = 0;
              sub_140E72AA0(&v213, &v180, &v200, &v217);
              if ( v213.m256i_i8[0] != -1 )
                sub_140DF44E0(&v213);
              nullsub_1(v126);
              v127 = (_DWORD *)sub_140001650(4, 1);
              if ( !v127 )
                sub_141938D2B(1, 4);
              *v127 = 1701667182;
              v200.m128i_i64[0] = 4;
              v186 = (__int64)v127;
              v200.m128i_i64[1] = (__int64)v127;
              v201 = 4;
              nullsub_1(v128);
              v129 = (unsigned __int64)v194;
              v130 = (__m128i *)sub_140001650(v194, 1);
              v196 = v130;
              if ( !v130 )
                sub_141938D2B(1, v129);
              v131 = (__int64)v130;
              sub_1418F44E0(v130, (const __m128i *)v193, v129);
              v217.m256i_i8[0] = 3;
              v217.m256i_i64[1] = v129;
              v217.m256i_i64[2] = v131;
              v217.m256i_i64[3] = v129;
              sub_140E72AA0(&v213, &v180, &v200, &v217);
              if ( v213.m256i_i8[0] != -1 )
                sub_140DF44E0(&v213);
              nullsub_1(v132);
              v133 = sub_140001650(5, 1);
              if ( !v133 )
                sub_141938D2B(1, 5);
              *(_BYTE *)(v133 + 4) = 116;
              *(_DWORD *)v133 = 1970302569;
              v200.m128i_i64[0] = 5;
              v200.m128i_i64[1] = v133;
              v201 = 5;
              v217.m256i_i64[1] = 0;
              v217.m256i_i64[3] = 0;
              v217.m256i_i8[0] = 5;
              sub_140E72AA0(&v213, &v180, &v200, &v217);
              if ( v213.m256i_i8[0] != -1 )
                sub_140DF44E0(&v213);
              v203 = v181;
              *(__m128i *)&v202[8] = _mm_loadu_si128(&v180);
              v202[0] = 5;
              v207 = 0;
              sub_140E72AA0(&v217, &v182, &v172, v202);
              if ( v217.m256i_i8[0] != -1 )
                sub_140DF44E0(&v217);
              v192 = v183;
              v191 = _mm_loadu_si128(&v182);
              LOBYTE(v190) = 5;
              *(_QWORD *)v202 = aContentBlockSt_0;
              *(_QWORD *)&v202[8] = 19;
              v200.m128i_i64[0] = (__int64)&v190;
              v217.m256i_i64[0] = (__int64)v202;
              v217.m256i_i64[1] = (__int64)sub_140186EE0;
              v217.m256i_i64[2] = (__int64)&v200;
              v217.m256i_i64[3] = (__int64)sub_1404806B0;
              sub_1416ABFD0(&v213, &unk_141A548D8, &v217);
              v135 = v213.m256i_u64[2];
              v134 = (const __m128i *)v213.m256i_i64[1];
              v136 = v199;
              v88 = (__int8 *)v204;
              if ( v213.m256i_i64[2] > (unsigned __int64)(v198.m128i_i64[0] - v199) )
              {
                v212 = v213.m256i_i64[1];
                sub_14190D590((unsigned int)&v198, v199, v213.m256i_i32[4], 1, 1);
                v136 = v199;
                v88 = (__int8 *)v204;
                v134 = (const __m128i *)v212;
LABEL_197:
                sub_1418F44E0((__m128i *)(v136 + v198.m128i_i64[1]), v134, v135);
              }
              else if ( v213.m256i_i64[2] )
              {
                goto LABEL_197;
              }
              v199 = v135 + v136;
              if ( v213.m256i_i64[0] )
                sub_140001660(v134, v213.m256i_i64[0], 1);
              sub_140DF44E0(&v190);
            }
          }
          LOBYTE(v195) = *(v88 - 4) ^ 1 | v195;
          if ( !(_BYTE)v195 )
          {
            v182.m128i_i64[0] = 0;
            v183 = 0;
            nullsub_1(v78);
            v137 = (_DWORD *)sub_140001650(4, 1);
            if ( !v137 )
              sub_141938D2B(1, 4);
            *v137 = 1701869940;
            *(_QWORD *)v202 = 4;
            v212 = (__int64)v137;
            *(_QWORD *)&v202[8] = v137;
            *(_QWORD *)&v202[16] = 4;
            nullsub_1(v138);
            v139 = sub_140001650(19, 1);
            v195 = v139;
            if ( !v139 )
              sub_141938D2B(1, 19);
            *(__m128i *)v139 = _mm_loadu_si128((const __m128i *)aContentBlockDe);
            *(_DWORD *)(v139 + 15) = 1635019877;
            v217.m256i_i8[0] = 3;
            v217.m256i_i64[1] = 19;
            v217.m256i_i64[2] = v139;
            v217.m256i_i64[3] = 19;
            sub_140E72AA0(&v213, &v182, v202, &v217);
            if ( v213.m256i_i8[0] != -1 )
              sub_140DF44E0(&v213);
            nullsub_1(v140);
            v141 = sub_140001650(5, 1);
            if ( !v141 )
              sub_141938D2B(1, 5);
            *(_BYTE *)(v141 + 4) = 120;
            *(_DWORD *)v141 = 1701080681;
            *(_QWORD *)v202 = 5;
            *(_QWORD *)&v202[8] = v141;
            *(_QWORD *)&v202[16] = 5;
            v142 = *(unsigned int *)(v204 - 8);
            v217.m256i_i8[0] = 2;
            v217.m256i_i64[1] = 0;
            v217.m256i_i64[2] = v142;
            sub_140E72AA0(&v213, &v182, v202, &v217);
            if ( v213.m256i_i8[0] != -1 )
              sub_140DF44E0(&v213);
            nullsub_1(v143);
            v144 = sub_140001650(5, 1);
            if ( !v144 )
              sub_141938D2B(1, 5);
            v146 = v144;
            *(_BYTE *)(v144 + 4) = 97;
            *(_DWORD *)v144 = 1953260900;
            v172 = 5;
            v173 = v144;
            v174 = 5;
            v180.m128i_i64[0] = 0;
            v181 = 0;
            nullsub_1(v145);
            v147 = (_DWORD *)sub_140001650(4, 1);
            v204 = v146;
            if ( !v147 )
              sub_141938D2B(1, 4);
            *v147 = 1701869940;
            v200.m128i_i64[0] = 4;
            v212 = (__int64)v147;
            v200.m128i_i64[1] = (__int64)v147;
            v201 = 4;
            nullsub_1(v148);
            v149 = (__m128i *)sub_140001650(16, 1);
            v195 = (__int64)v149;
            if ( !v149 )
              sub_141938D2B(1, 16);
            *v149 = _mm_loadu_si128(&xmmword_141A5334E);
            v217.m256i_i8[0] = 3;
            v217.m256i_i64[1] = 16;
            v217.m256i_i64[2] = (__int64)v149;
            v217.m256i_i64[3] = 16;
            sub_140E72AA0(&v213, &v180, &v200, &v217);
            if ( v213.m256i_i8[0] != -1 )
              sub_140DF44E0(&v213);
            nullsub_1(v150);
            v151 = (void *)sub_140001650(12, 1);
            if ( !v151 )
              sub_141938D2B(1, 12);
            qmemcpy(v151, "partial_json", 12);
            v200.m128i_i64[0] = 12;
            v195 = (__int64)v151;
            v200.m128i_i64[1] = (__int64)v151;
            v201 = 12;
            v152 = v175;
            if ( v175 < 0 )
            {
              v153 = 0;
LABEL_256:
              v206 = 1;
              sub_141938D2B(v153, v152);
            }
            if ( v175 )
            {
              nullsub_1(v151);
              v153 = 1;
              v154 = (__m128i *)sub_140001650(v152, 1);
              if ( !v154 )
                goto LABEL_256;
              v155 = (__int64)v154;
              sub_1418F44E0(v154, (const __m128i *)v176, v152);
            }
            else
            {
              v155 = 1;
            }
            v217.m256i_i8[0] = 3;
            v217.m256i_i64[1] = v152;
            v217.m256i_i64[2] = v155;
            v217.m256i_i64[3] = v152;
            v206 = 0;
            sub_140E72AA0(&v213, &v180, &v200, &v217);
            if ( v213.m256i_i8[0] != -1 )
              sub_140DF44E0(&v213);
            v203 = v181;
            *(__m128i *)&v202[8] = _mm_loadu_si128(&v180);
            v202[0] = 5;
            v205 = 0;
            sub_140E72AA0(&v217, &v182, &v172, v202);
            if ( v217.m256i_i8[0] != -1 )
              sub_140DF44E0(&v217);
            v192 = v183;
            v191 = _mm_loadu_si128(&v182);
            LOBYTE(v190) = 5;
            *(_QWORD *)v202 = aContentBlockDe;
            *(_QWORD *)&v202[8] = 19;
            v200.m128i_i64[0] = (__int64)&v190;
            v217.m256i_i64[0] = (__int64)v202;
            v217.m256i_i64[1] = (__int64)sub_140186EE0;
            v217.m256i_i64[2] = (__int64)&v200;
            v217.m256i_i64[3] = (__int64)sub_1404806B0;
            sub_1416ABFD0(&v213, &unk_141A548D8, &v217);
            v157 = v213.m256i_u64[2];
            v156 = (const __m128i *)v213.m256i_i64[1];
            v158 = v199;
            if ( v213.m256i_i64[2] > (unsigned __int64)(v198.m128i_i64[0] - v199) )
            {
              v204 = v213.m256i_i64[1];
              sub_14190D590((unsigned int)&v198, v199, v213.m256i_i32[4], 1, 1);
              v158 = v199;
              v156 = (const __m128i *)v204;
LABEL_226:
              sub_1418F44E0((__m128i *)(v158 + v198.m128i_i64[1]), v156, v157);
            }
            else if ( v213.m256i_i64[2] )
            {
              goto LABEL_226;
            }
            v199 = v157 + v158;
            if ( v213.m256i_i64[0] )
              sub_140001660(v156, v213.m256i_i64[0], 1);
            sub_140DF44E0(&v190);
          }
          if ( v194 )
            sub_140001660(v193, v194, 1);
          if ( v197 )
            sub_140001660(v189, v197, 1);
          sub_140DF44E0(&v184);
          if ( v56 == v171 )
            goto LABEL_242;
        }
        LOBYTE(v62) = 1;
        LODWORD(v212) = v62;
LABEL_108:
        v67 = 1;
        v64 = nullptr;
        goto LABEL_109;
      }
    }
  }
LABEL_242:
  v160 = sub_1416419F0(aFinishReason_0, 13, v188);
  if ( !v160 )
    goto LABEL_250;
  if ( *(_BYTE *)v160 != 3 )
    goto LABEL_250;
  v161 = *(_QWORD *)(v160 + 24);
  if ( !v161 )
    goto LABEL_250;
  sub_140E19250(&v217, a2, *(_QWORD *)(v160 + 16), v161);
  v162 = v217.m256i_u64[2];
  v163 = (const __m128i *)v217.m256i_i64[1];
  v164 = v199;
  if ( v217.m256i_i64[2] > (unsigned __int64)(v198.m128i_i64[0] - v199) )
  {
    v188 = (const __m128i *)v217.m256i_i64[1];
    sub_14190D590((unsigned int)&v198, v199, v217.m256i_i32[4], 1, 1);
    v164 = v199;
    v163 = v188;
  }
  else if ( !v217.m256i_i64[2] )
  {
    goto LABEL_248;
  }
  sub_1418F44E0((__m128i *)(v164 + v198.m128i_i64[1]), v163, v162);
LABEL_248:
  v199 = v162 + v164;
  if ( v217.m256i_i64[0] )
    sub_140001660(v163, v217.m256i_i64[0], 1);
LABEL_250:
  a1[1].m128i_i64[0] = v199;
  *a1 = _mm_loadu_si128(&v198);
  v218 = 0;
  return sub_140DF44E0(&v177);
}
