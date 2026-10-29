__int64 __fastcall sub_140A32260(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  char v14; // bl
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rbx
  _DWORD *v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rdx
  _DWORD *v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rcx
  _DWORD *v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // r12
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r12
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rbx
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  __int8 v72; // r15
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r13
  __int64 v78; // r15
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // rax
  __int64 v82; // rdx
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // r15
  __int64 v86; // rax
  int v87; // r12d
  unsigned __int64 v89; // r15
  unsigned __int64 v90; // r13
  const __m128i *v91; // rax
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  __int64 v95; // rdx
  __int64 v96; // r8
  __m128i v98; // xmm1
  __int64 v100; // r10
  __int64 v101; // r9
  __int8 *v102; // r13
  unsigned __int64 v103; // r15
  bool v106; // zf
  char *v107; // rbx
  int v108; // eax
  __int64 v109; // rbx
  _DWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __m128i *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // r15
  __int64 v119; // r12
  _DWORD *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  void *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rbx
  _DWORD *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  _QWORD *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  _WORD *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // r15
  __int64 v143; // r13
  __int64 v144; // rbx
  __int64 v145; // rax
  __int64 v146; // r12
  __int64 v147; // rdx
  __int64 v148; // rcx
  _DWORD *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rbx
  __int64 v153; // rax
  __int64 v154; // r15
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // r15
  __int64 v160; // r12
  _DWORD *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rbx
  _DWORD *v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __m128i *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  void *v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r12
  __int64 v185; // rbx
  __int64 v186; // rax
  __int64 v187; // r15
  __int64 v188; // rbx
  __int64 v189; // r15
  __int64 v190; // r12
  __int64 v192; // rax
  __int64 v193; // rdi
  __int64 v194; // r14
  __int64 v195; // rbx
  __int64 v196; // rcx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __m128i v199; // [rsp+30h] [rbp-50h] BYREF
  __int64 v200; // [rsp+40h] [rbp-40h]
  _QWORD v201[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v202; // [rsp+60h] [rbp-20h]
  __int64 v203; // [rsp+68h] [rbp-18h] BYREF
  __int64 v204; // [rsp+70h] [rbp-10h]
  __int64 v205; // [rsp+78h] [rbp-8h]
  __int64 v206; // [rsp+80h] [rbp+0h]
  __int64 v207; // [rsp+88h] [rbp+8h]
  char v208; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v209[15]; // [rsp+91h] [rbp+11h]
  __m128i v210; // [rsp+A0h] [rbp+20h]
  __m128i v211; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v212; // [rsp+C0h] [rbp+40h]
  __m128i v213; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v214; // [rsp+D8h] [rbp+58h]
  __int128 v215; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v216; // [rsp+F0h] [rbp+70h]
  __int64 v217; // [rsp+108h] [rbp+88h]
  char v218; // [rsp+117h] [rbp+97h] BYREF
  __int64 v219; // [rsp+118h] [rbp+98h]
  __int64 v220; // [rsp+120h] [rbp+A0h]
  __int64 v221; // [rsp+128h] [rbp+A8h] BYREF
  __m128i v222; // [rsp+130h] [rbp+B0h]
  __int64 v223; // [rsp+140h] [rbp+C0h]
  __int64 v224; // [rsp+148h] [rbp+C8h]
  __int64 v225; // [rsp+150h] [rbp+D0h]
  __int64 v226; // [rsp+158h] [rbp+D8h]
  _DWORD *v227; // [rsp+160h] [rbp+E0h]
  __int64 v228; // [rsp+168h] [rbp+E8h]
  __m128i v229; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v230; // [rsp+180h] [rbp+100h]
  __m128i v231; // [rsp+188h] [rbp+108h] BYREF
  __int64 v232; // [rsp+198h] [rbp+118h]
  _BYTE v233[24]; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v234; // [rsp+1B8h] [rbp+138h]
  __int64 v235; // [rsp+1C8h] [rbp+148h]
  char v236; // [rsp+1D1h] [rbp+151h]
  char v237; // [rsp+1D2h] [rbp+152h]
  char v238; // [rsp+1D3h] [rbp+153h]
  char v239; // [rsp+1D4h] [rbp+154h]
  char v240; // [rsp+1D5h] [rbp+155h]
  char v241; // [rsp+1D6h] [rbp+156h]
  char v242; // [rsp+1D7h] [rbp+157h]
  __int64 v243; // [rsp+1D8h] [rbp+158h]
  __m256i v244; // [rsp+1E0h] [rbp+160h] BYREF
  char v245; // [rsp+20Dh] [rbp+18Dh]
  char v246; // [rsp+20Eh] [rbp+18Eh]
  char v247; // [rsp+20Fh] [rbp+18Fh]
  __m256i v248; // [rsp+210h] [rbp+190h] BYREF
  char v249; // [rsp+237h] [rbp+1B7h]
  __int64 v250; // [rsp+238h] [rbp+1B8h]

  v250 = -2;
  v229.m128i_i64[0] = 0;
  v229.m128i_i64[1] = 1;
  v230 = 0;
  if ( *(_BYTE *)(a2 + 108) )
  {
    v6 = 1;
    v7 = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 108) = 1;
    v249 = 1;
    sub_140A360B0(&v248, a2);
    v9 = v248.m256i_i64[2];
    v8 = v248.m256i_i64[1];
    if ( v248.m256i_i64[2] )
    {
      v219 = v248.m256i_i64[1];
      sub_141939070((unsigned int)&v229, 0, v248.m256i_i32[4], 1, 1);
      v6 = v229.m128i_i64[1];
      v10 = v230;
      v8 = v219;
      sub_1419234B0(v230 + v229.m128i_i64[1], v219, v9);
    }
    else
    {
      v6 = 1;
      v10 = 0;
    }
    v7 = v9 + v10;
    v230 = v7;
    if ( v248.m256i_i64[0] )
      sub_140001660(v8, v248.m256i_i64[0], 1);
  }
  v249 = 1;
  v11 = sub_1416724D0(aChoices_1, 7, a3);
  if ( !v11 || *(_BYTE *)v11 != 4 || !*(_QWORD *)(v11 + 24) )
  {
    result = v230;
    a1[1].m128i_i64[0] = v230;
    *a1 = _mm_loadu_si128(&v229);
    return result;
  }
  v12 = *(_QWORD *)(v11 + 16);
  v249 = 1;
  v219 = v12;
  v13 = sub_1416724D0(aDelta_1, 5, v12);
  if ( v13 )
  {
    v14 = *(_BYTE *)v13;
    switch ( *(_BYTE *)v13 )
    {
      case 0:
        break;
      case 1:
        v248.m256i_i8[1] = *(_BYTE *)(v13 + 1);
        break;
      case 2:
        *(__m128i *)&v248.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v13 + 8));
        break;
      case 3:
        v249 = 1;
        sub_1416DB410(&v248.m256i_u64[1], v13 + 8);
        break;
      case 4:
        v16 = *(_QWORD *)(v13 + 16);
        v17 = *(_QWORD *)(v13 + 24);
        v249 = 1;
        sub_1401C07A0(&v248.m256i_u64[1], v16, v17);
        break;
      case 5:
        if ( *(_QWORD *)(v13 + 24) )
        {
          v18 = *(_QWORD *)(v13 + 8);
          if ( !v18 )
          {
            v249 = 1;
            sub_14196B5D0(&off_141A6CB98);
          }
          v19 = *(_QWORD *)(v13 + 16);
          v249 = 1;
          sub_140A21590(&v244, v18, v19);
        }
        else
        {
          v244.m256i_i64[0] = 0;
          v244.m256i_i64[2] = 0;
        }
        JUMPOUT(0x140A324C3LL);
    }
    v210 = *(__m128i *)&v248.m256i_u64[2];
    v208 = v14;
    v209[0] = v248.m256i_i8[1];
    *(_DWORD *)&v209[1] = *(__int32 *)((char *)v248.m256i_i32 + 2);
    *(_WORD *)&v209[5] = v248.m256i_i16[3];
    *(_QWORD *)&v209[7] = v248.m256i_i64[1];
    v248.m256i_i8[0] = 0;
    v249 = 1;
    sub_140A192F0(&v248);
  }
  else
  {
    v248.m256i_i8[0] = 0;
    v210 = _mm_loadu_si128((const __m128i *)&v248.m256i_u64[2]);
    v208 = 0;
    *(_QWORD *)v209 = *(__int64 *)((char *)v248.m256i_i64 + 1);
    *(_DWORD *)&v209[8] = *(__int32 *)((char *)&v248.m256i_i32[2] + 1);
    *(_WORD *)&v209[12] = *(__int16 *)((char *)&v248.m256i_i16[6] + 1);
    v209[14] = v248.m256i_i8[15];
  }
  v20 = sub_1416724D0(aContent_7, 7, &v208);
  if ( v20 )
  {
    if ( *(_BYTE *)v20 == 3 )
    {
      v23 = *(_QWORD *)(v20 + 24);
      if ( v23 )
      {
        v220 = *(_QWORD *)(v20 + 16);
        if ( *(_DWORD *)(a2 + 48) == 1 )
        {
          LODWORD(v24) = *(_DWORD *)(a2 + 52);
          goto LABEL_53;
        }
        v24 = *(unsigned int *)(a2 + 104);
        *(_DWORD *)(a2 + 104) = v24 + 1;
        *(_DWORD *)(a2 + 48) = 1;
        *(_DWORD *)(a2 + 52) = v24;
        v231.m128i_i64[0] = 0;
        v232 = 0;
        nullsub_1(v22, v21);
        v25 = (_DWORD *)sub_140001650(4, 1);
        if ( !v25 )
          sub_14196B2DB(1, 4);
        *v25 = 1701869940;
        *(_QWORD *)v233 = 4;
        v228 = (__int64)v25;
        *(_QWORD *)&v233[8] = v25;
        *(_QWORD *)&v233[16] = 4;
        v247 = 1;
        sub_140B72ED0(&v248, &off_141A6A3D8);
        if ( v248.m256i_i8[0] == -1 )
        {
          v244.m256i_i64[0] = v248.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v244,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6A3E8);
        }
        v26 = _mm_loadu_si128((const __m128i *)&v248);
        *(__m128i *)&v244.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v248.m256i_u64[2]);
        *(__m128i *)v244.m256i_i8 = v26;
        v247 = 0;
        sub_140A68320(&v248, &v231, v233, &v244);
        if ( v248.m256i_i8[0] != -1 )
          sub_140A192F0(&v248);
        nullsub_1(v28, v27);
        v29 = sub_140001650(5, 1);
        if ( !v29 )
          sub_14196B2DB(1, 5);
        *(_BYTE *)(v29 + 4) = 120;
        *(_DWORD *)v29 = 1701080681;
        *(_QWORD *)v233 = 5;
        *(_QWORD *)&v233[8] = v29;
        *(_QWORD *)&v233[16] = 5;
        v248.m256i_i8[0] = 2;
        v248.m256i_i64[1] = 0;
        v248.m256i_i64[2] = v24;
        sub_140A68320(&v244, &v231, v233, &v248);
        if ( v244.m256i_i8[0] != -1 )
          sub_140A192F0(&v244);
        nullsub_1(v31, v30);
        v32 = (void *)sub_140001650(13, 1);
        if ( !v32 )
          sub_14196B2DB(1, 13);
        qmemcpy(v32, "content_block", 13);
        *(_QWORD *)&v215 = 13;
        v228 = (__int64)v32;
        *((_QWORD *)&v215 + 1) = v32;
        v216.m128i_i64[0] = 13;
        v221 = 0;
        v222.m128i_i64[1] = 0;
        nullsub_1(0x5F746E65746E6F63LL, v33);
        v34 = (_DWORD *)sub_140001650(4, 1);
        if ( !v34 )
          sub_14196B2DB(1, 4);
        *v34 = 1701869940;
        *(_QWORD *)v233 = 4;
        v235 = (__int64)v34;
        *(_QWORD *)&v233[8] = v34;
        *(_QWORD *)&v233[16] = 4;
        v246 = 1;
        sub_140B72ED0(&v248, &off_141A6A418);
        if ( v248.m256i_i8[0] == -1 )
        {
          v244.m256i_i64[0] = v248.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v244,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6A3E8);
        }
        v35 = _mm_loadu_si128((const __m128i *)&v248);
        *(__m128i *)&v244.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v248.m256i_u64[2]);
        *(__m128i *)v244.m256i_i8 = v35;
        v246 = 0;
        sub_140A68320(&v248, &v221, v233, &v244);
        if ( v248.m256i_i8[0] != -1 )
          sub_140A192F0(&v248);
        nullsub_1(v37, v36);
        v38 = (_DWORD *)sub_140001650(4, 1);
        if ( !v38 )
          sub_14196B2DB(1, 4);
        *v38 = 1954047348;
        *(_QWORD *)v233 = 4;
        v235 = (__int64)v38;
        *(_QWORD *)&v233[8] = v38;
        *(_QWORD *)&v233[16] = 4;
        v245 = 1;
        sub_140B72ED0(&v248, &unk_141A694F0);
        if ( v248.m256i_i8[0] == -1 )
        {
          v244.m256i_i64[0] = v248.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v244,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6A3E8);
        }
        v39 = _mm_loadu_si128((const __m128i *)&v248);
        *(__m128i *)&v244.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v248.m256i_u64[2]);
        *(__m128i *)v244.m256i_i8 = v39;
        v245 = 0;
        sub_140A68320(&v248, &v221, v233, &v244);
        if ( v248.m256i_i8[0] != -1 )
          sub_140A192F0(&v248);
        *(__m128i *)&v248.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v221);
        v248.m256i_i64[3] = v222.m128i_i64[1];
        v248.m256i_i8[0] = 5;
        v242 = 0;
        sub_140A68320(&v244, &v231, &v215, &v248);
        if ( v244.m256i_i8[0] != -1 )
          sub_140A192F0(&v244);
        *(__m128i *)&v248.m256i_u64[1] = _mm_loadu_si128(&v231);
        v248.m256i_i64[3] = v232;
        v248.m256i_i8[0] = 5;
        sub_140A8C370(&v244, &v248);
        v40 = v244.m256i_i64[2];
        v228 = v244.m256i_i64[1];
        if ( v244.m256i_i64[2] > (unsigned __int64)(v229.m128i_i64[0] - v7) )
        {
          sub_141939070((unsigned int)&v229, v7, v244.m256i_i32[4], 1, 1);
          v6 = v229.m128i_i64[1];
          v7 = v230;
        }
        else if ( !v244.m256i_i64[2] )
        {
LABEL_50:
          v7 += v40;
          v230 = v7;
          if ( v244.m256i_i64[0] )
            sub_140001660(v228, v244.m256i_i64[0], 1);
          sub_140A192F0(&v248);
LABEL_53:
          v231.m128i_i64[0] = 0;
          v232 = 0;
          nullsub_1(v22, v21);
          v41 = (_DWORD *)sub_140001650(4, 1);
          if ( !v41 )
            sub_14196B2DB(1, 4);
          *v41 = 1701869940;
          *(_QWORD *)v233 = 4;
          v235 = (__int64)v41;
          *(_QWORD *)&v233[8] = v41;
          *(_QWORD *)&v233[16] = 4;
          nullsub_1(v43, v42);
          v44 = sub_140001650(19, 1);
          v228 = v44;
          if ( !v44 )
            sub_14196B2DB(1, 19);
          *(__m128i *)v44 = _mm_loadu_si128((const __m128i *)aContentBlockDe);
          *(_DWORD *)(v44 + 15) = 1635019877;
          v248.m256i_i8[0] = 3;
          v248.m256i_i64[1] = 19;
          v248.m256i_i64[2] = v44;
          v248.m256i_i64[3] = 19;
          sub_140A68320(&v244, &v231, v233, &v248);
          if ( v244.m256i_i8[0] != -1 )
            sub_140A192F0(&v244);
          nullsub_1(v46, v45);
          v47 = sub_140001650(5, 1);
          if ( !v47 )
            sub_14196B2DB(1, 5);
          *(_BYTE *)(v47 + 4) = 120;
          *(_DWORD *)v47 = 1701080681;
          *(_QWORD *)v233 = 5;
          *(_QWORD *)&v233[8] = v47;
          *(_QWORD *)&v233[16] = 5;
          v248.m256i_i8[0] = 2;
          v248.m256i_i64[1] = 0;
          v248.m256i_i64[2] = (unsigned int)v24;
          sub_140A68320(&v244, &v231, v233, &v248);
          if ( v244.m256i_i8[0] != -1 )
            sub_140A192F0(&v244);
          nullsub_1(v49, v48);
          v50 = sub_140001650(5, 1);
          if ( !v50 )
            sub_14196B2DB(1, 5);
          *(_BYTE *)(v50 + 4) = 97;
          *(_DWORD *)v50 = 1953260900;
          *(_QWORD *)&v215 = 5;
          v228 = v50;
          *((_QWORD *)&v215 + 1) = v50;
          v216.m128i_i64[0] = 5;
          v221 = 0;
          v222.m128i_i64[1] = 0;
          nullsub_1(v52, v51);
          v53 = (_DWORD *)sub_140001650(4, 1);
          if ( !v53 )
            sub_14196B2DB(1, 4);
          *v53 = 1701869940;
          *(_QWORD *)v233 = 4;
          v226 = (__int64)v53;
          *(_QWORD *)&v233[8] = v53;
          *(_QWORD *)&v233[16] = 4;
          nullsub_1(v55, v54);
          v56 = (void *)sub_140001650(10, 1);
          v235 = (__int64)v56;
          if ( !v56 )
            sub_14196B2DB(1, 10);
          qmemcpy(v56, "text_delta", 10);
          v248.m256i_i8[0] = 3;
          v248.m256i_i64[1] = 10;
          v248.m256i_i64[2] = (__int64)v56;
          v248.m256i_i64[3] = 10;
          sub_140A68320(&v244, &v221, v233, &v248);
          if ( v244.m256i_i8[0] != -1 )
            sub_140A192F0(&v244);
          nullsub_1(v58, v57);
          v59 = (_DWORD *)sub_140001650(4, 1);
          if ( !v59 )
            sub_14196B2DB(1, 4);
          *v59 = 1954047348;
          *(_QWORD *)v233 = 4;
          *(_QWORD *)&v233[8] = v59;
          *(_QWORD *)&v233[16] = 4;
          v235 = (__int64)v59;
          if ( v23 < 0 )
          {
            v62 = 0;
            goto LABEL_68;
          }
          nullsub_1(v61, v60);
          v62 = 1;
          v63 = sub_140001650(v23, 1);
          if ( !v63 )
          {
LABEL_68:
            v241 = 1;
            sub_14196B2DB(v62, v23);
          }
          v64 = v63;
          sub_1419234B0(v63, v220, v23);
          v248.m256i_i8[0] = 3;
          v248.m256i_i64[1] = v23;
          v248.m256i_i64[2] = v64;
          v248.m256i_i64[3] = v23;
          v241 = 0;
          sub_140A68320(&v244, &v221, v233, &v248);
          if ( v244.m256i_i8[0] != -1 )
            sub_140A192F0(&v244);
          *(__m128i *)&v248.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v221);
          v248.m256i_i64[3] = v222.m128i_i64[1];
          v248.m256i_i8[0] = 5;
          v240 = 0;
          sub_140A68320(&v244, &v231, &v215, &v248);
          if ( v244.m256i_i8[0] != -1 )
            sub_140A192F0(&v244);
          *(__m128i *)&v244.m256i_u64[1] = _mm_loadu_si128(&v231);
          v244.m256i_i64[3] = v232;
          v244.m256i_i8[0] = 5;
          v221 = (__int64)aContentBlockDe;
          v222.m128i_i64[0] = 19;
          *(_QWORD *)&v215 = &v244;
          v248.m256i_i64[0] = (__int64)&v221;
          v248.m256i_i64[1] = (__int64)sub_140191200;
          v248.m256i_i64[2] = (__int64)&v215;
          v248.m256i_i64[3] = (__int64)sub_140BE6880;
          sub_1416DAFA0(v233, &unk_141A6C33A, &v248);
          v65 = *(_QWORD *)&v233[8];
          v66 = *(_QWORD *)&v233[16];
          if ( *(_QWORD *)&v233[16] > (unsigned __int64)(v229.m128i_i64[0] - v7) )
          {
            v220 = *(_QWORD *)&v233[8];
            sub_141939070((unsigned int)&v229, v7, *(_DWORD *)&v233[16], 1, 1);
            v7 = v230;
            v65 = v220;
          }
          else if ( !*(_QWORD *)&v233[16] )
          {
LABEL_77:
            v230 = v66 + v7;
            if ( *(_QWORD *)v233 )
              sub_140001660(v65, *(_QWORD *)v233, 1);
            sub_140A192F0(&v244);
            goto LABEL_80;
          }
          sub_1419234B0(v7 + v229.m128i_i64[1], v65, v66);
          goto LABEL_77;
        }
        sub_1419234B0(v7 + v6, v228, v40);
        goto LABEL_50;
      }
    }
  }
LABEL_80:
  v67 = sub_1416724D0(aToolCalls_0, 10, &v208);
  if ( v67 )
  {
    if ( *(_BYTE *)v67 == 4 )
    {
      v68 = *(_QWORD *)(v67 + 16);
      v202 = v68 + 32LL * *(_QWORD *)(v67 + 24);
      if ( v68 != v202 )
      {
        while ( 1 )
        {
          v69 = sub_1416724D0(aIndex_1, 5, v68);
          if ( v69 && *(_BYTE *)v69 == 2 && !*(_QWORD *)(v69 + 8) )
            v70 = *(_QWORD *)(v69 + 16);
          else
            v70 = 0;
          v71 = sub_1416724D0(aFunction_1, 8, v68);
          if ( v71 )
          {
            v72 = *(_BYTE *)v71;
            switch ( *(_BYTE *)v71 )
            {
              case 0:
                break;
              case 1:
                v248.m256i_i8[1] = *(_BYTE *)(v71 + 1);
                break;
              case 2:
                *(__m128i *)&v248.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v71 + 8));
                break;
              case 3:
                sub_1416DB410(&v248.m256i_u64[1], v71 + 8);
                break;
              case 4:
                sub_1401C07A0(&v248.m256i_u64[1], *(_QWORD *)(v71 + 16), *(_QWORD *)(v71 + 24));
                break;
              case 5:
                if ( *(_QWORD *)(v71 + 24) )
                {
                  v73 = *(_QWORD *)(v71 + 8);
                  if ( !v73 )
                    sub_14196B5D0(&off_141A6CB98);
                  sub_140A21590(&v244, v73, *(_QWORD *)(v71 + 16));
                }
                else
                {
                  v244.m256i_i64[0] = 0;
                  v244.m256i_i64[2] = 0;
                }
                v248.m256i_i64[1] = v244.m256i_i64[0];
                *(_OWORD *)&v248.m256i_u64[2] = *(_OWORD *)&v244.m256i_u64[1];
                break;
            }
            v248.m256i_i8[0] = v72;
            v216 = _mm_loadu_si128((const __m128i *)&v248.m256i_u64[2]);
            LOWORD(v215) = __PAIR16__(v248.m256i_u8[1], v72);
            *(_QWORD *)((char *)&v215 + 2) = *(__int64 *)((char *)v248.m256i_i64 + 2);
            *(_DWORD *)((char *)&v215 + 10) = *(__int32 *)((char *)&v248.m256i_i32[2] + 2);
            HIWORD(v215) = v248.m256i_i16[7];
            v248.m256i_i8[0] = 0;
            sub_140A192F0(&v248);
          }
          else
          {
            v248.m256i_i8[0] = 0;
            v216 = _mm_loadu_si128((const __m128i *)&v248.m256i_u64[2]);
            LOBYTE(v215) = 0;
            *(_QWORD *)((char *)&v215 + 1) = *(__int64 *)((char *)v248.m256i_i64 + 1);
            *(_DWORD *)((char *)&v215 + 9) = *(__int32 *)((char *)&v248.m256i_i32[2] + 1);
            *(_WORD *)((char *)&v215 + 13) = *(__int16 *)((char *)&v248.m256i_i16[6] + 1);
            HIBYTE(v215) = v248.m256i_i8[15];
          }
          v74 = sub_1416724D0(aId_7, 2, v68);
          if ( !v74 || *(_BYTE *)v74 != 3 )
            break;
          v77 = *(_QWORD *)(v74 + 24);
          if ( v77 < 0 )
          {
            v196 = 0;
            v197 = v220;
            goto LABEL_252;
          }
          LOBYTE(v76) = 1;
          LODWORD(v243) = v76;
          if ( !v77 )
            goto LABEL_108;
          v78 = *(_QWORD *)(v74 + 16);
          nullsub_1(v76, v75);
          v79 = sub_140001650(v77, 1);
          if ( !v79 )
          {
            v197 = v77;
            v196 = 1;
LABEL_252:
            sub_14196B2DB(v196, v197);
          }
          v80 = v79;
          sub_1419234B0(v79, v78, v77);
          LODWORD(v243) = 0;
LABEL_109:
          v201[0] = v77;
          v220 = v80;
          v201[1] = v80;
          v228 = v77;
          v201[2] = v77;
          v81 = sub_1416724D0(aName_8, 4, &v215);
          LOBYTE(v83) = 1;
          LODWORD(v227) = v83;
          if ( !v81 || *(_BYTE *)v81 != 3 )
            goto LABEL_115;
          v84 = *(_QWORD *)(v81 + 24);
          if ( v84 < 0 )
          {
            v198 = 0;
            goto LABEL_254;
          }
          v225 = *(_QWORD *)(v81 + 24);
          if ( v84 )
          {
            v85 = *(_QWORD *)(v81 + 16);
            nullsub_1(v84, v82);
            v224 = sub_140001650(v225, 1);
            if ( !v224 )
            {
              v224 = v225;
              v198 = 1;
LABEL_254:
              sub_14196B2DB(v198, v224);
            }
            sub_1419234B0(v224, v85, v225);
            LODWORD(v227) = 0;
          }
          else
          {
LABEL_115:
            v224 = 1;
            v225 = 0;
          }
          v86 = sub_1416724D0(aArguments_1, 9, &v215);
          LOBYTE(v226) = 1;
          if ( v86 && *(_BYTE *)v86 == 3 )
          {
            v207 = *(_QWORD *)(v86 + 16);
            v206 = *(_QWORD *)(v86 + 24);
            LOBYTE(v226) = v206 == 0;
          }
          else
          {
            v207 = 1;
            v206 = 0;
          }
          v68 += 32;
          v87 = *(_DWORD *)(a2 + 104);
          v248.m256i_i64[0] = v70;
          v89 = sub_1406D0660(a2 + 88, &v248);
          v90 = v89 >> 57;
          v91 = *(const __m128i **)(a2 + 56);
          v92 = *(_QWORD *)(a2 + 64);
          v93 = _mm_cvtsi32_si128(v89 >> 57);
          v94 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v93, v93), 0), 68);
          v95 = 0;
          v96 = v89;
          while ( 1 )
          {
            _R8 = v92 & v96;
            v98 = _mm_loadu_si128((const __m128i *)((char *)v91 + _R8));
            _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v98, v94));
            if ( _R9D )
              break;
LABEL_124:
            v101 = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v98, (__m128i)-1LL));
            if ( (_DWORD)v101 )
            {
              if ( !*(_QWORD *)(a2 + 72) )
              {
                LOBYTE(v101) = 1;
                sub_141936AA0(a2 + 56, 1, a2 + 88, v101);
                v91 = *(const __m128i **)(a2 + 56);
                v92 = *(_QWORD *)(a2 + 64);
              }
              v103 = v92 & v89;
              _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v91 + v103)));
              if ( !_EDX )
              {
                _R8 = 16;
                do
                {
                  v103 = v92 & (_R8 + v103);
                  _EDX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v91 + v103)));
                  _R8 += 16;
                }
                while ( !_EDX );
              }
              __asm { tzcnt   r8d, edx }
              _R8 = v92 & (v103 + _R8);
              v95 = v91->m128i_u8[_R8];
              if ( (v95 & 0x80u) == 0LL )
              {
                _EDX = _mm_movemask_epi8(_mm_load_si128(v91));
                __asm { tzcnt   r8d, edx }
                v95 = v91->m128i_u8[_R8];
              }
              v91->m128i_i8[_R8] = v90;
              v91[1].m128i_i8[v92 & (_R8 - 16)] = v90;
              v92 = -5 * _R8;
              v102 = &v91->m128i_i8[-40 * _R8];
              LOBYTE(v95) = v95 & 1;
              *((_QWORD *)v102 - 5) = v70;
              *((_QWORD *)v102 - 4) = 0;
              *((_QWORD *)v102 - 3) = 1;
              *((_QWORD *)v102 - 2) = 0;
              *((_DWORD *)v102 - 2) = v87;
              *(v102 - 4) = 0;
              *(__m128i *)(a2 + 72) = _mm_sub_epi64(
                                        _mm_loadu_si128((const __m128i *)(a2 + 72)),
                                        (__m128i)_mm_shuffle_ps(
                                                   (__m128)_mm_cvtsi32_si128((unsigned __int8)v95),
                                                   (__m128)xmmword_14196F130,
                                                   228));
              v87 = *(_DWORD *)(a2 + 104);
              goto LABEL_133;
            }
            v96 = v95 + _R8 + 16;
            v95 += 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   r10d, r9d }
            v100 = -5 * (v92 & (_R8 + _R10));
            if ( *((_QWORD *)&v91[-2] + v100 - 1) == v70 )
              break;
            _R10 = (unsigned int)(_R9D - 1);
            LOWORD(_R10) = _R9D & (_R9D - 1);
            _R9D = _R10;
            if ( !(_WORD)_R10 )
              goto LABEL_124;
          }
          v102 = &v91->m128i_i8[8 * v100];
LABEL_133:
          if ( *((_DWORD *)v102 - 2) == v87 )
            *(_DWORD *)(a2 + 104) = v87 + 1;
          v106 = *(v102 - 4) == 0;
          v235 = (__int64)v102;
          if ( v106 )
          {
            v107 = v102 - 32;
            if ( !(_BYTE)v243 )
            {
              sub_1416DB410(&v248, v201);
              v95 = *(_QWORD *)v107;
              if ( *(_QWORD *)v107 )
                sub_140001660(*((_QWORD *)v102 - 3), v95, 1);
              *((_QWORD *)v107 + 2) = v248.m256i_i64[2];
              *(__m128i *)v107 = _mm_loadu_si128((const __m128i *)&v248);
            }
            if ( !*((_QWORD *)v102 - 2) )
            {
              sub_141597890(&v248);
              *(__m128i *)v233 = _mm_loadu_si128((const __m128i *)&v248);
              v244.m256i_i64[0] = 0;
              *(_OWORD *)&v244.m256i_u64[1] = 1u;
              v248.m256i_i64[2] = 1610612768;
              v248.m256i_i64[0] = (__int64)&v244;
              v248.m256i_i64[1] = (__int64)&off_141A6D298;
              if ( (unsigned __int8)sub_141598A30(v233, &v248) )
                sub_14196B5F0(
                  (unsigned int)aADisplayImplem_6,
                  55,
                  (unsigned int)&v218,
                  (unsigned int)&unk_141A69A18,
                  (__int64)&off_141A6D350);
              v217 = v244.m256i_i64[1];
              v243 = v244.m256i_i64[0];
              if ( v244.m256i_i64[2] <= 0xCuLL )
              {
                if ( v244.m256i_i64[2] != 12 )
LABEL_295:
                  sub_14196B4F0(v244.m256i_i32[2], v244.m256i_i32[4], 0, 12, (__int64)&off_141A6A458);
              }
              else if ( *(char *)(v244.m256i_i64[1] + 12) <= -65 )
              {
                goto LABEL_295;
              }
              v244.m256i_i64[0] = v244.m256i_i64[1];
              v244.m256i_i64[1] = 12;
              v248.m256i_i64[0] = (__int64)&v244;
              v248.m256i_i64[1] = (__int64)sub_140191200;
              sub_1416DAFA0(&v199, &unk_141A6A470, &v248);
              if ( v243 )
                sub_140001660(v217, v243, 1);
              v95 = *(_QWORD *)v107;
              v102 = (__int8 *)v235;
              if ( *(_QWORD *)v107 )
                sub_140001660(*(_QWORD *)(v235 - 24), v95, 1);
              *((_QWORD *)v107 + 2) = v200;
              *(__m128i *)v107 = _mm_loadu_si128(&v199);
            }
            if ( !(_BYTE)v227 )
            {
              *(v102 - 4) = 1;
              v108 = *(_DWORD *)(a2 + 48);
              v109 = *(unsigned int *)(a2 + 52);
              *(_DWORD *)(a2 + 48) = 0;
              if ( v108 == 1 )
              {
                v231.m128i_i64[0] = 0;
                v232 = 0;
                nullsub_1(v92, v95);
                v110 = (_DWORD *)sub_140001650(4, 1);
                if ( !v110 )
                  sub_14196B2DB(1, 4);
                *v110 = 1701869940;
                v221 = 4;
                v227 = v110;
                v222.m128i_i64[0] = (__int64)v110;
                v222.m128i_i64[1] = 4;
                nullsub_1(v112, v111);
                v113 = (__m128i *)sub_140001650(18, 1);
                v243 = (__int64)v113;
                if ( !v113 )
                  sub_14196B2DB(1, 18);
                *v113 = _mm_loadu_si128((const __m128i *)aContentBlockSt_0);
                v113[1].m128i_i16[0] = 28783;
                v248.m256i_i8[0] = 3;
                v248.m256i_i64[1] = 18;
                v248.m256i_i64[2] = (__int64)v113;
                v248.m256i_i64[3] = 18;
                sub_140A68320(&v244, &v231, &v221, &v248);
                if ( v244.m256i_i8[0] != -1 )
                  sub_140A192F0(&v244);
                nullsub_1(v115, v114);
                v116 = sub_140001650(5, 1);
                if ( !v116 )
                  sub_14196B2DB(1, 5);
                *(_BYTE *)(v116 + 4) = 120;
                *(_DWORD *)v116 = 1701080681;
                v221 = 5;
                v222.m128i_i64[0] = v116;
                v222.m128i_i64[1] = 5;
                v248.m256i_i8[0] = 2;
                v248.m256i_i64[1] = 0;
                v248.m256i_i64[2] = v109;
                sub_140A68320(&v244, &v231, &v221, &v248);
                if ( v244.m256i_i8[0] != -1 )
                  sub_140A192F0(&v244);
                v234 = v232;
                *(__m128i *)&v233[8] = _mm_loadu_si128(&v231);
                v233[0] = 5;
                v221 = (__int64)aContentBlockSt_0;
                v222.m128i_i64[0] = 18;
                v231.m128i_i64[0] = (__int64)v233;
                v248.m256i_i64[0] = (__int64)&v221;
                v248.m256i_i64[1] = (__int64)sub_140191200;
                v248.m256i_i64[2] = (__int64)&v231;
                v248.m256i_i64[3] = (__int64)sub_140BE6880;
                sub_1416DAFA0(&v244, &unk_141A6C33A, &v248);
                v118 = v244.m256i_i64[2];
                v117 = v244.m256i_i64[1];
                v119 = v230;
                if ( v244.m256i_i64[2] > (unsigned __int64)(v229.m128i_i64[0] - v230) )
                {
                  v243 = v244.m256i_i64[1];
                  sub_141939070((unsigned int)&v229, v230, v244.m256i_i32[4], 1, 1);
                  v119 = v230;
                  v117 = v243;
LABEL_162:
                  sub_1419234B0(v119 + v229.m128i_i64[1], v117, v118);
                }
                else if ( v244.m256i_i64[2] )
                {
                  goto LABEL_162;
                }
                v230 = v118 + v119;
                if ( v244.m256i_i64[0] )
                  sub_140001660(v117, v244.m256i_i64[0], 1);
                sub_140A192F0(v233);
              }
              v213.m128i_i64[0] = 0;
              v214 = 0;
              nullsub_1(v92, v95);
              v120 = (_DWORD *)sub_140001650(4, 1);
              if ( !v120 )
                sub_14196B2DB(1, 4);
              *v120 = 1701869940;
              *(_QWORD *)v233 = 4;
              v227 = v120;
              *(_QWORD *)&v233[8] = v120;
              *(_QWORD *)&v233[16] = 4;
              nullsub_1(v122, v121);
              v123 = sub_140001650(19, 1);
              v243 = v123;
              if ( !v123 )
                sub_14196B2DB(1, 19);
              *(__m128i *)v123 = _mm_loadu_si128((const __m128i *)aContentBlockSt_1);
              *(_DWORD *)(v123 + 15) = 1953653108;
              v248.m256i_i8[0] = 3;
              v248.m256i_i64[1] = 19;
              v248.m256i_i64[2] = v123;
              v248.m256i_i64[3] = 19;
              sub_140A68320(&v244, &v213, v233, &v248);
              if ( v244.m256i_i8[0] != -1 )
                sub_140A192F0(&v244);
              nullsub_1(v125, v124);
              v126 = sub_140001650(5, 1);
              if ( !v126 )
                sub_14196B2DB(1, 5);
              *(_BYTE *)(v126 + 4) = 120;
              *(_DWORD *)v126 = 1701080681;
              *(_QWORD *)v233 = 5;
              *(_QWORD *)&v233[8] = v126;
              *(_QWORD *)&v233[16] = 5;
              v127 = *(unsigned int *)(v235 - 8);
              v248.m256i_i8[0] = 2;
              v248.m256i_i64[1] = 0;
              v248.m256i_i64[2] = v127;
              sub_140A68320(&v244, &v213, v233, &v248);
              if ( v244.m256i_i8[0] != -1 )
                sub_140A192F0(&v244);
              nullsub_1(v129, v128);
              v130 = (void *)sub_140001650(13, 1);
              if ( !v130 )
                sub_14196B2DB(1, 13);
              v133 = (__int64)v130;
              qmemcpy(v130, "content_block", 13);
              v203 = 13;
              v204 = (__int64)v130;
              v205 = 13;
              v211.m128i_i64[0] = 0;
              v212 = 0;
              nullsub_1(v132, v131);
              v134 = (_DWORD *)sub_140001650(4, 1);
              v243 = v133;
              if ( !v134 )
                sub_14196B2DB(1, 4);
              *v134 = 1701869940;
              v231.m128i_i64[0] = 4;
              v217 = (__int64)v134;
              v231.m128i_i64[1] = (__int64)v134;
              v232 = 4;
              nullsub_1(v136, v135);
              v137 = (_QWORD *)sub_140001650(8, 1);
              v227 = v137;
              if ( !v137 )
                sub_14196B2DB(1, 8);
              *v137 = 0x6573755F6C6F6F74LL;
              v248.m256i_i8[0] = 3;
              v248.m256i_i64[1] = 8;
              v248.m256i_i64[2] = (__int64)v137;
              v248.m256i_i64[3] = 8;
              sub_140A68320(&v244, &v211, &v231, &v248);
              if ( v244.m256i_i8[0] != -1 )
                sub_140A192F0(&v244);
              nullsub_1(v139, v138);
              v140 = (_WORD *)sub_140001650(2, 1);
              if ( !v140 )
                sub_14196B2DB(1, 2);
              *v140 = 25705;
              v231.m128i_i64[0] = 2;
              v231.m128i_i64[1] = (__int64)v140;
              v232 = 2;
              v142 = *(_QWORD *)(v235 - 16);
              v227 = v140;
              if ( v142 < 0 )
              {
                v144 = 0;
LABEL_258:
                v239 = 1;
                sub_14196B2DB(v144, v142);
              }
              if ( v142 )
              {
                v143 = *(_QWORD *)(v235 - 24);
                nullsub_1(v235, v141);
                v144 = 1;
                v145 = sub_140001650(v142, 1);
                if ( !v145 )
                  goto LABEL_258;
                v146 = v145;
                sub_1419234B0(v145, v143, v142);
              }
              else
              {
                v146 = 1;
              }
              v248.m256i_i8[0] = 3;
              v248.m256i_i64[1] = v142;
              v248.m256i_i64[2] = v146;
              v248.m256i_i64[3] = v142;
              v239 = 0;
              sub_140A68320(&v244, &v211, &v231, &v248);
              if ( v244.m256i_i8[0] != -1 )
                sub_140A192F0(&v244);
              nullsub_1(v148, v147);
              v149 = (_DWORD *)sub_140001650(4, 1);
              if ( !v149 )
                sub_14196B2DB(1, 4);
              *v149 = 1701667182;
              v231.m128i_i64[0] = 4;
              v217 = (__int64)v149;
              v231.m128i_i64[1] = (__int64)v149;
              v232 = 4;
              nullsub_1(v151, v150);
              v152 = v225;
              v153 = sub_140001650(v225, 1);
              v227 = (_DWORD *)v153;
              if ( !v153 )
                sub_14196B2DB(1, v152);
              v154 = v153;
              sub_1419234B0(v153, v224, v152);
              v248.m256i_i8[0] = 3;
              v248.m256i_i64[1] = v152;
              v248.m256i_i64[2] = v154;
              v248.m256i_i64[3] = v152;
              sub_140A68320(&v244, &v211, &v231, &v248);
              if ( v244.m256i_i8[0] != -1 )
                sub_140A192F0(&v244);
              nullsub_1(v156, v155);
              v157 = sub_140001650(5, 1);
              if ( !v157 )
                sub_14196B2DB(1, 5);
              *(_BYTE *)(v157 + 4) = 116;
              *(_DWORD *)v157 = 1970302569;
              v231.m128i_i64[0] = 5;
              v231.m128i_i64[1] = v157;
              v232 = 5;
              v248.m256i_i64[1] = 0;
              v248.m256i_i64[3] = 0;
              v248.m256i_i8[0] = 5;
              sub_140A68320(&v244, &v211, &v231, &v248);
              if ( v244.m256i_i8[0] != -1 )
                sub_140A192F0(&v244);
              v234 = v212;
              *(__m128i *)&v233[8] = _mm_loadu_si128(&v211);
              v233[0] = 5;
              v238 = 0;
              sub_140A68320(&v248, &v213, &v203, v233);
              if ( v248.m256i_i8[0] != -1 )
                sub_140A192F0(&v248);
              v223 = v214;
              v222 = _mm_loadu_si128(&v213);
              LOBYTE(v221) = 5;
              *(_QWORD *)v233 = aContentBlockSt_1;
              *(_QWORD *)&v233[8] = 19;
              v231.m128i_i64[0] = (__int64)&v221;
              v248.m256i_i64[0] = (__int64)v233;
              v248.m256i_i64[1] = (__int64)sub_140191200;
              v248.m256i_i64[2] = (__int64)&v231;
              v248.m256i_i64[3] = (__int64)sub_140BE6880;
              sub_1416DAFA0(&v244, &unk_141A6C33A, &v248);
              v159 = v244.m256i_i64[2];
              v158 = v244.m256i_i64[1];
              v160 = v230;
              v102 = (__int8 *)v235;
              if ( v244.m256i_i64[2] > (unsigned __int64)(v229.m128i_i64[0] - v230) )
              {
                v243 = v244.m256i_i64[1];
                sub_141939070((unsigned int)&v229, v230, v244.m256i_i32[4], 1, 1);
                v160 = v230;
                v102 = (__int8 *)v235;
                v158 = v243;
LABEL_197:
                sub_1419234B0(v160 + v229.m128i_i64[1], v158, v159);
              }
              else if ( v244.m256i_i64[2] )
              {
                goto LABEL_197;
              }
              v230 = v159 + v160;
              if ( v244.m256i_i64[0] )
                sub_140001660(v158, v244.m256i_i64[0], 1);
              sub_140A192F0(&v221);
            }
          }
          LOBYTE(v226) = *(v102 - 4) ^ 1 | v226;
          if ( !(_BYTE)v226 )
          {
            v213.m128i_i64[0] = 0;
            v214 = 0;
            nullsub_1(v92, v95);
            v161 = (_DWORD *)sub_140001650(4, 1);
            if ( !v161 )
              sub_14196B2DB(1, 4);
            *v161 = 1701869940;
            *(_QWORD *)v233 = 4;
            v243 = (__int64)v161;
            *(_QWORD *)&v233[8] = v161;
            *(_QWORD *)&v233[16] = 4;
            nullsub_1(v163, v162);
            v164 = sub_140001650(19, 1);
            v226 = v164;
            if ( !v164 )
              sub_14196B2DB(1, 19);
            *(__m128i *)v164 = _mm_loadu_si128((const __m128i *)aContentBlockDe);
            *(_DWORD *)(v164 + 15) = 1635019877;
            v248.m256i_i8[0] = 3;
            v248.m256i_i64[1] = 19;
            v248.m256i_i64[2] = v164;
            v248.m256i_i64[3] = 19;
            sub_140A68320(&v244, &v213, v233, &v248);
            if ( v244.m256i_i8[0] != -1 )
              sub_140A192F0(&v244);
            nullsub_1(v166, v165);
            v167 = sub_140001650(5, 1);
            if ( !v167 )
              sub_14196B2DB(1, 5);
            *(_BYTE *)(v167 + 4) = 120;
            *(_DWORD *)v167 = 1701080681;
            *(_QWORD *)v233 = 5;
            *(_QWORD *)&v233[8] = v167;
            *(_QWORD *)&v233[16] = 5;
            v168 = *(unsigned int *)(v235 - 8);
            v248.m256i_i8[0] = 2;
            v248.m256i_i64[1] = 0;
            v248.m256i_i64[2] = v168;
            sub_140A68320(&v244, &v213, v233, &v248);
            if ( v244.m256i_i8[0] != -1 )
              sub_140A192F0(&v244);
            nullsub_1(v170, v169);
            v171 = sub_140001650(5, 1);
            if ( !v171 )
              sub_14196B2DB(1, 5);
            v174 = v171;
            *(_BYTE *)(v171 + 4) = 97;
            *(_DWORD *)v171 = 1953260900;
            v203 = 5;
            v204 = v171;
            v205 = 5;
            v211.m128i_i64[0] = 0;
            v212 = 0;
            nullsub_1(v173, v172);
            v175 = (_DWORD *)sub_140001650(4, 1);
            v235 = v174;
            if ( !v175 )
              sub_14196B2DB(1, 4);
            *v175 = 1701869940;
            v231.m128i_i64[0] = 4;
            v243 = (__int64)v175;
            v231.m128i_i64[1] = (__int64)v175;
            v232 = 4;
            nullsub_1(v177, v176);
            v178 = (__m128i *)sub_140001650(16, 1);
            v226 = (__int64)v178;
            if ( !v178 )
              sub_14196B2DB(1, 16);
            *v178 = _mm_loadu_si128((const __m128i *)&aToolUseinputJs[8]);
            v248.m256i_i8[0] = 3;
            v248.m256i_i64[1] = 16;
            v248.m256i_i64[2] = (__int64)v178;
            v248.m256i_i64[3] = 16;
            sub_140A68320(&v244, &v211, &v231, &v248);
            if ( v244.m256i_i8[0] != -1 )
              sub_140A192F0(&v244);
            nullsub_1(v180, v179);
            v181 = (void *)sub_140001650(12, 1);
            if ( !v181 )
              sub_14196B2DB(1, 12);
            qmemcpy(v181, "partial_json", 12);
            v231.m128i_i64[0] = 12;
            v231.m128i_i64[1] = (__int64)v181;
            v232 = 12;
            v184 = v206;
            v226 = (__int64)v181;
            if ( v206 < 0 )
            {
              v185 = 0;
LABEL_256:
              v237 = 1;
              sub_14196B2DB(v185, v184);
            }
            if ( v206 )
            {
              nullsub_1(v183, v182);
              v185 = 1;
              v186 = sub_140001650(v184, 1);
              if ( !v186 )
                goto LABEL_256;
              v187 = v186;
              sub_1419234B0(v186, v207, v184);
            }
            else
            {
              v187 = 1;
            }
            v248.m256i_i8[0] = 3;
            v248.m256i_i64[1] = v184;
            v248.m256i_i64[2] = v187;
            v248.m256i_i64[3] = v184;
            v237 = 0;
            sub_140A68320(&v244, &v211, &v231, &v248);
            if ( v244.m256i_i8[0] != -1 )
              sub_140A192F0(&v244);
            v234 = v212;
            *(__m128i *)&v233[8] = _mm_loadu_si128(&v211);
            v233[0] = 5;
            v236 = 0;
            sub_140A68320(&v248, &v213, &v203, v233);
            if ( v248.m256i_i8[0] != -1 )
              sub_140A192F0(&v248);
            v223 = v214;
            v222 = _mm_loadu_si128(&v213);
            LOBYTE(v221) = 5;
            *(_QWORD *)v233 = aContentBlockDe;
            *(_QWORD *)&v233[8] = 19;
            v231.m128i_i64[0] = (__int64)&v221;
            v248.m256i_i64[0] = (__int64)v233;
            v248.m256i_i64[1] = (__int64)sub_140191200;
            v248.m256i_i64[2] = (__int64)&v231;
            v248.m256i_i64[3] = (__int64)sub_140BE6880;
            sub_1416DAFA0(&v244, &unk_141A6C33A, &v248);
            v189 = v244.m256i_i64[2];
            v188 = v244.m256i_i64[1];
            v190 = v230;
            if ( v244.m256i_i64[2] > (unsigned __int64)(v229.m128i_i64[0] - v230) )
            {
              v235 = v244.m256i_i64[1];
              sub_141939070((unsigned int)&v229, v230, v244.m256i_i32[4], 1, 1);
              v190 = v230;
              v188 = v235;
LABEL_226:
              sub_1419234B0(v190 + v229.m128i_i64[1], v188, v189);
            }
            else if ( v244.m256i_i64[2] )
            {
              goto LABEL_226;
            }
            v230 = v189 + v190;
            if ( v244.m256i_i64[0] )
              sub_140001660(v188, v244.m256i_i64[0], 1);
            sub_140A192F0(&v221);
          }
          if ( v225 )
            sub_140001660(v224, v225, 1);
          if ( v228 )
            sub_140001660(v220, v228, 1);
          sub_140A192F0(&v215);
          if ( v68 == v202 )
            goto LABEL_242;
        }
        LOBYTE(v74) = 1;
        LODWORD(v243) = v74;
LABEL_108:
        v80 = 1;
        v77 = 0;
        goto LABEL_109;
      }
    }
  }
LABEL_242:
  v192 = sub_1416724D0(aFinishReason_0, 13, v219);
  if ( !v192 || *(_BYTE *)v192 != 3 || !*(_QWORD *)(v192 + 24) )
    goto LABEL_250;
  sub_140A30AC0(&v248, a2, *(_QWORD *)(v192 + 16));
  v193 = v248.m256i_i64[2];
  v194 = v248.m256i_i64[1];
  v195 = v230;
  if ( v248.m256i_i64[2] > (unsigned __int64)(v229.m128i_i64[0] - v230) )
  {
    v219 = v248.m256i_i64[1];
    sub_141939070((unsigned int)&v229, v230, v248.m256i_i32[4], 1, 1);
    v195 = v230;
    v194 = v219;
  }
  else if ( !v248.m256i_i64[2] )
  {
    goto LABEL_248;
  }
  sub_1419234B0(v195 + v229.m128i_i64[1], v194, v193);
LABEL_248:
  v230 = v193 + v195;
  if ( v248.m256i_i64[0] )
    sub_140001660(v194, v248.m256i_i64[0], 1);
LABEL_250:
  a1[1].m128i_i64[0] = v230;
  *a1 = _mm_loadu_si128(&v229);
  v249 = 0;
  return sub_140A192F0(&v208);
}
