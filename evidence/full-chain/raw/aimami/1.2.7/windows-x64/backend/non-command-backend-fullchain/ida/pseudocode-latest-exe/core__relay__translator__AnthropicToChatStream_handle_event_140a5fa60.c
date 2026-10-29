__int64 __fastcall sub_140A5FA60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  char v24; // bl
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rax
  const __m128i *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  char v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // r13
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r14
  __int64 v55; // r13
  _WORD *v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rdx
  __int64 v67; // rcx
  _DWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _DWORD *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r14
  void *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  void *v85; // r15
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 (__fastcall *v92)(); // rax
  __m128i v93; // xmm0
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 (__fastcall *v96)(); // rax
  __m128i v97; // xmm0
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 (__fastcall *v100)(); // rax
  __int64 v101; // rdx
  __int64 (__fastcall *v102)(); // rax
  __m128i v103; // xmm0
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  __m128i v107; // xmm0
  __int64 v108; // rcx
  __m128i v109; // xmm0
  __int64 v110; // rdx
  __int64 v111; // rcx
  void *v112; // rax
  __int64 v113; // rcx
  __m128i v114; // xmm0
  unsigned __int128 v115; // kr20_16
  __int64 v116; // r15
  __int64 v117; // r12
  __int64 v118; // rax
  __int64 v119; // r14
  __int64 v120; // r12
  unsigned __int64 v121; // rax
  __int64 v123; // rcx
  __int64 v124; // rdx
  __m128i v125; // xmm0
  __m128i v126; // xmm0
  __int64 i; // r8
  unsigned __int64 v128; // rax
  __m128i v129; // xmm2
  __int64 v131; // rbx
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 (__fastcall *v136)(); // rax
  __m128i v137; // xmm0
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  __m128i v141; // xmm0
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  __m128i v145; // xmm0
  __int64 v146; // rdx
  __int64 v147; // rcx
  _DWORD *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  void *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  _QWORD *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rax
  __m128i v167; // xmm0
  __int64 v168; // rcx
  __m128i v169; // xmm0
  __int64 v170; // rdx
  __int64 v171; // rcx
  void *v172; // rax
  __int64 v173; // rcx
  __m128i v174; // xmm0
  __int64 v175; // rdi
  __int64 v176; // rbx
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 (__fastcall *v181)(); // rax
  __m128i v182; // xmm0
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // rax
  __m128i v186; // xmm0
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // rax
  __m128i v190; // xmm0
  __int64 v191; // rdx
  __int64 v192; // rcx
  _DWORD *v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  _DWORD *v202; // rax
  __m128i v203; // xmm0
  __int64 v204; // rdx
  __int64 v205; // rcx
  void *v206; // rax
  __int64 v207; // rcx
  __m128i v208; // xmm0
  __int64 v209; // rdi
  __int64 v210; // rbx
  __int64 result; // rax
  __int64 v212; // r14
  __m128i v213; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v214; // [rsp+D8h] [rbp+58h]
  _QWORD v215[6]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v216; // [rsp+110h] [rbp+90h] BYREF
  __int64 v217; // [rsp+118h] [rbp+98h]
  __int64 v218; // [rsp+120h] [rbp+A0h]
  __int64 v219; // [rsp+128h] [rbp+A8h] BYREF
  _DWORD *v220; // [rsp+130h] [rbp+B0h]
  __int64 v221; // [rsp+138h] [rbp+B8h]
  __int64 v222; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v223; // [rsp+148h] [rbp+C8h]
  __int64 v224; // [rsp+150h] [rbp+D0h]
  __int64 v225; // [rsp+158h] [rbp+D8h] BYREF
  _QWORD *v226; // [rsp+160h] [rbp+E0h]
  __int64 v227; // [rsp+168h] [rbp+E8h]
  __int64 v228; // [rsp+170h] [rbp+F0h] BYREF
  _DWORD *v229; // [rsp+178h] [rbp+F8h]
  __int64 v230; // [rsp+180h] [rbp+100h]
  __int64 (__fastcall *v231)(); // [rsp+188h] [rbp+108h]
  _QWORD *v232; // [rsp+190h] [rbp+110h]
  __int64 v233; // [rsp+198h] [rbp+118h]
  __int128 v234; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v235; // [rsp+1B0h] [rbp+130h]
  __m128i v236; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v237; // [rsp+1C8h] [rbp+148h]
  __int64 (__fastcall *v238)(); // [rsp+1D0h] [rbp+150h]
  __m128i v239; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v240; // [rsp+1E8h] [rbp+168h]
  __m128i v241; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v242; // [rsp+200h] [rbp+180h]
  __int128 v243; // [rsp+208h] [rbp+188h] BYREF
  __int64 v244; // [rsp+218h] [rbp+198h]
  _DWORD *v245; // [rsp+220h] [rbp+1A0h]
  _BYTE *v246; // [rsp+228h] [rbp+1A8h]
  char v247; // [rsp+230h] [rbp+1B0h] BYREF
  _BYTE v248[15]; // [rsp+231h] [rbp+1B1h]
  __m128i v249; // [rsp+240h] [rbp+1C0h]
  __int128 v250; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v251; // [rsp+268h] [rbp+1E8h]
  _BYTE *v252; // [rsp+270h] [rbp+1F0h]
  _BYTE *v253; // [rsp+278h] [rbp+1F8h]
  char v254; // [rsp+286h] [rbp+206h]
  char v255; // [rsp+287h] [rbp+207h]
  char v256; // [rsp+288h] [rbp+208h]
  char v257; // [rsp+289h] [rbp+209h]
  char v258; // [rsp+28Ah] [rbp+20Ah]
  char v259; // [rsp+28Bh] [rbp+20Bh]
  char v260; // [rsp+28Ch] [rbp+20Ch]
  char v261; // [rsp+28Dh] [rbp+20Dh]
  char v262; // [rsp+28Eh] [rbp+20Eh]
  char v263; // [rsp+28Fh] [rbp+20Fh]
  __int64 v264; // [rsp+290h] [rbp+210h] BYREF
  __int64 (__fastcall *v265)(); // [rsp+298h] [rbp+218h]
  __int64 v266; // [rsp+2A0h] [rbp+220h]
  __int64 v267; // [rsp+2A8h] [rbp+228h]
  char v268; // [rsp+2B1h] [rbp+231h]
  char v269; // [rsp+2B2h] [rbp+232h]
  char v270; // [rsp+2B3h] [rbp+233h]
  char v271; // [rsp+2B4h] [rbp+234h]
  char v272; // [rsp+2B5h] [rbp+235h]
  char v273; // [rsp+2B6h] [rbp+236h]
  char v274; // [rsp+2B7h] [rbp+237h]
  char v275; // [rsp+2B8h] [rbp+238h]
  char v276; // [rsp+2B9h] [rbp+239h]
  char v277; // [rsp+2BAh] [rbp+23Ah]
  char v278; // [rsp+2BBh] [rbp+23Bh]
  char v279; // [rsp+2BCh] [rbp+23Ch]
  char v280; // [rsp+2BDh] [rbp+23Dh]
  char v281; // [rsp+2BEh] [rbp+23Eh]
  char v282; // [rsp+2BFh] [rbp+23Fh]
  __m128i v283; // [rsp+2C0h] [rbp+240h] BYREF
  __m128i v284; // [rsp+2D0h] [rbp+250h]
  __m256i v285; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v286; // [rsp+300h] [rbp+280h]

  v286 = -2;
  *(_QWORD *)&v250 = 0;
  *((_QWORD *)&v250 + 1) = 1;
  v251 = 0;
  v6 = sub_1416724D0(aType_10, 4, a3);
  if ( v6 && *(_BYTE *)v6 == 3 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    v8 = *(_QWORD *)(v6 + 16);
    switch ( v7 )
    {
      case 12LL:
        if ( !(*(_QWORD *)v8 ^ 0x5F6567617373656DLL | *(unsigned int *)(v8 + 8) ^ 0x706F7473LL) && !*(_BYTE *)(a2 + 101) )
        {
          *(_BYTE *)(a2 + 101) = 1;
          sub_141939070((unsigned int)&v250, 0, 14, 1, 1);
          v9 = *((_QWORD *)&v250 + 1);
          v10 = v251;
          *(_QWORD *)(*((_QWORD *)&v250 + 1) + v251 + 6) = 0xA0A5D454E4F445BLL;
          *(_QWORD *)(v9 + v10) = 0x445B203A61746164LL;
          v251 = v10 + 14;
        }
        break;
      case 13LL:
        if ( *(_QWORD *)v8 ^ 0x5F6567617373656DLL | *(_QWORD *)(v8 + 5) ^ 0x74726174735F6567LL )
        {
          if ( !(*(_QWORD *)v8 ^ 0x5F6567617373656DLL | *(_QWORD *)(v8 + 5) ^ 0x61746C65645F6567LL) )
          {
            v14 = sub_1416724D0(aDelta_1, 5, a3);
            if ( v14 )
            {
              v15 = sub_1416724D0(aStopReason_1, 11, v14);
              if ( v15 )
              {
                if ( *(_BYTE *)v15 == 3 && *(_QWORD *)(v15 + 24) )
                {
                  v16 = sub_140A8C2D0(*(_QWORD *)(v15 + 16));
                  sub_140A5F120(&v285, a2, v16, v17);
                  v19 = v285.m256i_i64[2];
                  v18 = v285.m256i_i64[1];
                  if ( v285.m256i_i64[2] )
                  {
                    v267 = v285.m256i_i64[1];
                    sub_141939070((unsigned int)&v250, 0, v285.m256i_i32[4], 1, 1);
                    v20 = v251;
                    v212 = v267;
                    sub_1419234B0(v251 + *((_QWORD *)&v250 + 1), v267, v19);
                    v18 = v212;
                  }
                  else
                  {
                    v20 = 0;
                  }
                  v251 = v19 + v20;
                  if ( v285.m256i_i64[0] )
                    sub_140001660(v18, v285.m256i_i64[0], 1);
                }
              }
            }
          }
        }
        else
        {
          v25 = sub_1416724D0(aMessage_7, 7, a3);
          if ( v25 )
          {
            v26 = sub_1416724D0(aModel_4, 5, v25);
            if ( v26 )
            {
              if ( *(_BYTE *)v26 == 3 )
              {
                v27 = *(_QWORD *)(v26 + 24);
                if ( v27 )
                {
                  v28 = *(_QWORD *)(v26 + 16);
                  sub_1401E7560((unsigned int)&v285, v27, 0, 1, 1);
                  v29 = v285.m256i_i64[1];
                  if ( v285.m256i_i32[0] == 1 )
                    sub_14196B2DB(v285.m256i_i64[1], v285.m256i_i64[2]);
                  v30 = v285.m256i_i64[2];
                  sub_1419234B0(v285.m256i_i64[2], v28, v27);
                  if ( *(_QWORD *)a2 )
                    sub_140001660(*(_QWORD *)(a2 + 8), *(_QWORD *)a2, 1);
                  *(_QWORD *)a2 = v29;
                  *(_QWORD *)(a2 + 8) = v30;
                  *(_QWORD *)(a2 + 16) = v27;
                }
              }
            }
          }
          v31 = sub_1416724D0(aMessage_7, 7, a3);
          if ( v31 )
          {
            v32 = (const __m128i *)sub_1416724D0(aId_7, 2, v31);
            if ( v32 )
            {
              if ( v32->m128i_i8[0] == 3 )
              {
                v283 = _mm_loadu_si128(v32 + 1);
                v285.m256i_i64[0] = (__int64)&v283;
                v285.m256i_i64[1] = (__int64)sub_140191200;
                sub_1416DAFA0(&v213, &unk_141A6B150, &v285);
                v33 = *(_QWORD *)(a2 + 24);
                if ( v33 )
                  sub_140001660(*(_QWORD *)(a2 + 32), v33, 1);
                *(_QWORD *)(a2 + 40) = v214;
                *(__m128i *)(a2 + 24) = _mm_loadu_si128(&v213);
              }
            }
          }
          sub_140A5F020(a2, &v250);
        }
        break;
      case 18LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v8 + 16)), (__m128i)xmmword_141A45170),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_141A45160))) == 0xFFFF )
        {
          v11 = sub_1416724D0(aIndex_1, 5, a3);
          if ( v11 && *(_BYTE *)v11 == 2 && !*(_QWORD *)(v11 + 8) )
            v12 = *(_QWORD *)(v11 + 16);
          else
            v12 = 0;
          v283.m128i_i64[0] = v12;
          v13 = sub_1406D0660(a2 + 80, &v283);
          sub_140021F60(&v285, a2 + 48, v13, &v283);
        }
        break;
      case 19LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_141A45160),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v8 + 3)), (__m128i)xmmword_141A45180))) != 0xFFFF )
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_141A35010),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v8 + 3)), (__m128i)xmmword_141A35000))) != 0xFFFF )
            break;
          v21 = sub_1416724D0(aIndex_1, 5, a3);
          if ( v21 && *(_BYTE *)v21 == 2 && !*(_QWORD *)(v21 + 8) )
            v22 = *(_QWORD *)(v21 + 16);
          else
            v22 = 0;
          v215[0] = v22;
          v23 = sub_1416724D0(aDelta_1, 5, a3);
          if ( v23 )
          {
            v24 = *(_BYTE *)v23;
            switch ( *(_BYTE *)v23 )
            {
              case 0:
                break;
              case 1:
                v285.m256i_i8[1] = *(_BYTE *)(v23 + 1);
                break;
              case 2:
                *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v23 + 8));
                break;
              case 3:
                sub_1416DB410(&v285.m256i_u64[1], v23 + 8);
                break;
              case 4:
                sub_1401C07A0(&v285.m256i_u64[1], *(_QWORD *)(v23 + 16), *(_QWORD *)(v23 + 24));
                break;
              case 5:
                if ( *(_QWORD *)(v23 + 24) )
                {
                  v39 = *(_QWORD *)(v23 + 8);
                  if ( !v39 )
                    sub_14196B5D0(&off_141A6CB98);
                  sub_140A21590(&v283, v39, *(_QWORD *)(v23 + 16));
                }
                else
                {
                  v283.m128i_i64[0] = 0;
                  v284.m128i_i64[0] = 0;
                }
                v285.m256i_i64[1] = v283.m128i_i64[0];
                *(_OWORD *)&v285.m256i_u64[2] = __PAIR128__(v284.m128i_u64[0], v283.m128i_u64[1]);
                break;
            }
            v249 = *(__m128i *)&v285.m256i_u64[2];
            v247 = v24;
            v248[0] = v285.m256i_i8[1];
            *(_DWORD *)&v248[1] = *(__int32 *)((char *)v285.m256i_i32 + 2);
            *(_WORD *)&v248[5] = v285.m256i_i16[3];
            *(_QWORD *)&v248[7] = v285.m256i_i64[1];
            v285.m256i_i8[0] = 0;
            sub_140A192F0(&v285);
          }
          else
          {
            v285.m256i_i8[0] = 0;
            v249 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
            v247 = 0;
            *(_QWORD *)v248 = *(__int64 *)((char *)v285.m256i_i64 + 1);
            *(_DWORD *)&v248[8] = *(__int32 *)((char *)&v285.m256i_i32[2] + 1);
            *(_WORD *)&v248[12] = *(__int16 *)((char *)&v285.m256i_i16[6] + 1);
            v248[14] = v285.m256i_i8[15];
          }
          v118 = sub_1416724D0(aType_10, 4, &v247);
          v119 = 1;
          if ( v118 && *(_BYTE *)v118 == 3 )
          {
            v119 = *(_QWORD *)(v118 + 16);
            v120 = *(_QWORD *)(v118 + 24);
          }
          else
          {
            v120 = 0;
          }
          sub_140A5F020(a2, &v250);
          if ( *(_QWORD *)(a2 + 72) )
          {
            v121 = sub_1406D0660(a2 + 80, v215);
            v123 = *(_QWORD *)(a2 + 48);
            v124 = *(_QWORD *)(a2 + 56);
            v125 = _mm_cvtsi32_si128(v121 >> 57);
            v126 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v125, v125), 0), 68);
            for ( i = 0; ; i += 16 )
            {
              v128 = v124 & v121;
              v129 = _mm_loadu_si128((const __m128i *)(v123 + v128));
              _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v129, v126));
              if ( _R9D )
                break;
LABEL_170:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v129, (__m128i)-1LL)) )
                goto LABEL_261;
              v121 = i + v128 + 16;
            }
            while ( 1 )
            {
              __asm { tzcnt   r10d, r9d }
              v131 = v123 - 16 * (v124 & (v128 + _R10));
              if ( v22 == *(_QWORD *)(v131 - 16) )
                break;
              _R10 = (unsigned int)(_R9D - 1);
              LOWORD(_R10) = _R9D & (_R9D - 1);
              _R9D = _R10;
              if ( !(_WORD)_R10 )
                goto LABEL_170;
            }
            if ( v120 != 10 )
            {
              if ( v120 == 16
                && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v119), (__m128i)xmmword_141A45190)) == 0xFFFF
                && *(_DWORD *)(v131 - 8) == 1 )
              {
                v132 = sub_1416724D0(aPartialJson, 12, &v247);
                if ( v132 )
                {
                  if ( *(_BYTE *)v132 == 3 )
                  {
                    v134 = *(_QWORD *)(v132 + 16);
                    v135 = *(_QWORD *)(v132 + 24);
                    v216 = v134;
                    v217 = v135;
                    if ( v135 )
                    {
                      v236.m128i_i64[0] = 0;
                      v237 = 0;
                      nullsub_1(v134, v133);
                      v136 = (__int64 (__fastcall *)())sub_140001650(2, 1);
                      if ( !v136 )
                        sub_14196B2DB(1, 2);
                      *(_WORD *)v136 = 25705;
                      v264 = 2;
                      v267 = (__int64)v136;
                      v265 = v136;
                      v266 = 2;
                      v282 = 1;
                      sub_140B72E40(&v285, a2 + 24);
                      if ( v285.m256i_i8[0] == -1 )
                      {
                        v283.m128i_i64[0] = v285.m256i_i64[1];
                        sub_14196B5F0(
                          (unsigned int)aCalledResultUn_15,
                          43,
                          (unsigned int)&v283,
                          (unsigned int)&off_141A699C8,
                          (__int64)&off_141A6B0F8);
                      }
                      v137 = _mm_loadu_si128((const __m128i *)&v285);
                      v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                      v283 = v137;
                      v282 = 0;
                      sub_140A68320(&v285, &v236, &v264, &v283);
                      if ( v285.m256i_i8[0] != -1 )
                        sub_140A192F0(&v285);
                      nullsub_1(v139, v138);
                      v140 = sub_140001650(6, 1);
                      if ( !v140 )
                        sub_14196B2DB(1, 6);
                      *(_WORD *)(v140 + 4) = 29795;
                      *(_DWORD *)v140 = 1701470831;
                      v264 = 6;
                      v267 = v140;
                      v265 = (__int64 (__fastcall *)())v140;
                      v266 = 6;
                      v281 = 1;
                      sub_140B72ED0(&v285, &off_141A6B0D8);
                      if ( v285.m256i_i8[0] == -1 )
                      {
                        v283.m128i_i64[0] = v285.m256i_i64[1];
                        sub_14196B5F0(
                          (unsigned int)aCalledResultUn_15,
                          43,
                          (unsigned int)&v283,
                          (unsigned int)&off_141A699C8,
                          (__int64)&off_141A6B0F8);
                      }
                      v141 = _mm_loadu_si128((const __m128i *)&v285);
                      v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                      v283 = v141;
                      v281 = 0;
                      sub_140A68320(&v285, &v236, &v264, &v283);
                      if ( v285.m256i_i8[0] != -1 )
                        sub_140A192F0(&v285);
                      nullsub_1(v143, v142);
                      v144 = sub_140001650(5, 1);
                      if ( !v144 )
                        sub_14196B2DB(1, 5);
                      *(_BYTE *)(v144 + 4) = 108;
                      *(_DWORD *)v144 = 1701080941;
                      v264 = 5;
                      v267 = v144;
                      v265 = (__int64 (__fastcall *)())v144;
                      v266 = 5;
                      v280 = 1;
                      sub_140B72E40(&v285, a2);
                      if ( v285.m256i_i8[0] == -1 )
                      {
                        v283.m128i_i64[0] = v285.m256i_i64[1];
                        sub_14196B5F0(
                          (unsigned int)aCalledResultUn_15,
                          43,
                          (unsigned int)&v283,
                          (unsigned int)&off_141A699C8,
                          (__int64)&off_141A6B0F8);
                      }
                      v145 = _mm_loadu_si128((const __m128i *)&v285);
                      v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                      v283 = v145;
                      v280 = 0;
                      sub_140A68320(&v285, &v236, &v264, &v283);
                      if ( v285.m256i_i8[0] != -1 )
                        sub_140A192F0(&v285);
                      nullsub_1(v147, v146);
                      v148 = (_DWORD *)sub_140001650(7, 1);
                      if ( !v148 )
                        sub_14196B2DB(1, 7);
                      *(_DWORD *)((char *)v148 + 3) = 1936024425;
                      *v148 = 1768908899;
                      v219 = 7;
                      v245 = v148;
                      v220 = v148;
                      v221 = 7;
                      v263 = 1;
                      v267 = sub_1401E8400();
                      *(_QWORD *)&v234 = 0;
                      v235 = 0;
                      nullsub_1(v150, v149);
                      v151 = sub_140001650(5, 1);
                      if ( !v151 )
                        sub_14196B2DB(1, 5);
                      *(_BYTE *)(v151 + 4) = 120;
                      *(_DWORD *)v151 = 1701080681;
                      v264 = 5;
                      v265 = (__int64 (__fastcall *)())v151;
                      v266 = 5;
                      v285.m256i_i8[0] = 2;
                      *(_OWORD *)&v285.m256i_u64[1] = 0;
                      sub_140A68320(&v283, &v234, &v264, &v285);
                      if ( v283.m128i_i8[0] != -1 )
                        sub_140A192F0(&v283);
                      nullsub_1(v153, v152);
                      v154 = sub_140001650(5, 1);
                      if ( !v154 )
                        sub_14196B2DB(1, 5);
                      *(_BYTE *)(v154 + 4) = 97;
                      *(_DWORD *)v154 = 1953260900;
                      v222 = 5;
                      v253 = (_BYTE *)v154;
                      v223 = v154;
                      v224 = 5;
                      v241.m128i_i64[0] = 0;
                      v242 = 0;
                      nullsub_1(v156, v155);
                      v157 = (void *)sub_140001650(10, 1);
                      if ( !v157 )
                        sub_14196B2DB(1, 10);
                      qmemcpy(v157, "tool_calls", 10);
                      v228 = 10;
                      v246 = v157;
                      v229 = v157;
                      v230 = 10;
                      v262 = 1;
                      v252 = (_BYTE *)sub_1401E8400();
                      *(_QWORD *)&v243 = 0;
                      v244 = 0;
                      nullsub_1(v159, v158);
                      v160 = sub_140001650(5, 1);
                      if ( !v160 )
                        sub_14196B2DB(1, 5);
                      *(_BYTE *)(v160 + 4) = 120;
                      *(_DWORD *)v160 = 1701080681;
                      v264 = 5;
                      v265 = (__int64 (__fastcall *)())v160;
                      v266 = 5;
                      v161 = *(unsigned int *)(v131 - 4);
                      v285.m256i_i8[0] = 2;
                      v285.m256i_i64[1] = 0;
                      v285.m256i_i64[2] = v161;
                      sub_140A68320(&v283, &v243, &v264, &v285);
                      if ( v283.m128i_i8[0] != -1 )
                        sub_140A192F0(&v283);
                      nullsub_1(v163, v162);
                      v164 = (_QWORD *)sub_140001650(8, 1);
                      if ( !v164 )
                        sub_14196B2DB(1, 8);
                      *v164 = 0x6E6F6974636E7566LL;
                      v225 = 8;
                      v232 = v164;
                      v226 = v164;
                      v227 = 8;
                      v239.m128i_i64[0] = 0;
                      v240 = 0;
                      nullsub_1(0x6E6F6974636E7566LL, v165);
                      v166 = sub_140001650(9, 1);
                      if ( !v166 )
                        sub_14196B2DB(1, 9);
                      *(_QWORD *)v166 = 0x746E656D75677261LL;
                      *(_BYTE *)(v166 + 8) = 115;
                      v264 = 9;
                      v233 = v166;
                      v265 = (__int64 (__fastcall *)())v166;
                      v266 = 9;
                      v279 = 1;
                      sub_140B72ED0(&v285, &v216);
                      if ( v285.m256i_i8[0] == -1 )
                      {
                        v283.m128i_i64[0] = v285.m256i_i64[1];
                        sub_14196B5F0(
                          (unsigned int)aCalledResultUn_15,
                          43,
                          (unsigned int)&v283,
                          (unsigned int)&off_141A699C8,
                          (__int64)&off_141A6B0F8);
                      }
                      v167 = _mm_loadu_si128((const __m128i *)&v285);
                      v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                      v283 = v167;
                      v279 = 0;
                      sub_140A68320(&v285, &v239, &v264, &v283);
                      if ( v285.m256i_i8[0] != -1 )
                        sub_140A192F0(&v285);
                      *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v239);
                      v285.m256i_i64[3] = v240;
                      v285.m256i_i8[0] = 5;
                      v258 = 0;
                      sub_140A68320(&v283, &v243, &v225, &v285);
                      if ( v283.m128i_i8[0] != -1 )
                        sub_140A192F0(&v283);
                      *(_OWORD *)((char *)&v285.m256i_u32[1] + 3) = v243;
                      *(__int64 *)((char *)&v285.m256i_i64[2] + 7) = v244;
                      v168 = (__int64)v252;
                      *v252 = 5;
                      v169 = _mm_loadu_si128((const __m128i *)&v285);
                      *(_OWORD *)(v168 + 16) = *(_OWORD *)((char *)&v285.m256i_u64[1] + 7);
                      *(__m128i *)(v168 + 1) = v169;
                      v285.m256i_i64[1] = 1;
                      v285.m256i_i64[2] = v168;
                      v285.m256i_i64[3] = 1;
                      v285.m256i_i8[0] = 4;
                      v262 = 0;
                      sub_140A68320(&v283, &v241, &v228, &v285);
                      if ( v283.m128i_i8[0] != -1 )
                        sub_140A192F0(&v283);
                      *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v241);
                      v285.m256i_i64[3] = v242;
                      v285.m256i_i8[0] = 5;
                      v257 = 0;
                      sub_140A68320(&v283, &v234, &v222, &v285);
                      if ( v283.m128i_i8[0] != -1 )
                        sub_140A192F0(&v283);
                      nullsub_1(v171, v170);
                      v172 = (void *)sub_140001650(13, 1);
                      if ( !v172 )
                        sub_14196B2DB(1, 13);
                      qmemcpy(v172, "finish_reason", 13);
                      v264 = 13;
                      v265 = (__int64 (__fastcall *)())v172;
                      v266 = 13;
                      v285.m256i_i8[0] = 0;
                      sub_140A68320(&v283, &v234, &v264, &v285);
                      if ( v283.m128i_i8[0] != -1 )
                        sub_140A192F0(&v283);
                      *(_OWORD *)((char *)&v285.m256i_u32[1] + 3) = v234;
                      *(__int64 *)((char *)&v285.m256i_i64[2] + 7) = v235;
                      v173 = v267;
                      *(_BYTE *)v267 = 5;
                      v174 = _mm_loadu_si128((const __m128i *)&v285);
                      *(_OWORD *)(v173 + 16) = *(_OWORD *)((char *)&v285.m256i_u64[1] + 7);
                      *(__m128i *)(v173 + 1) = v174;
                      v285.m256i_i64[1] = 1;
                      v285.m256i_i64[2] = v173;
                      v285.m256i_i64[3] = 1;
                      v285.m256i_i8[0] = 4;
                      v263 = 0;
                      sub_140A68320(&v283, &v236, &v219, &v285);
                      if ( v283.m128i_i8[0] != -1 )
                        sub_140A192F0(&v283);
                      *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v236);
                      v285.m256i_i64[3] = v237;
                      v285.m256i_i8[0] = 5;
                      v264 = (__int64)&v285;
                      v265 = sub_14166C3A0;
                      sub_1416DAFA0(&v283, &unk_141A6B0E8, &v264);
                      v252 = (_BYTE *)v283.m128i_i64[1];
                      v267 = v283.m128i_i64[0];
                      v175 = v284.m128i_i64[0];
                      v176 = v251;
                      if ( v284.m128i_i64[0] > (unsigned __int64)(v250 - v251) )
                      {
                        sub_141939070((unsigned int)&v250, v251, v284.m128i_i32[0], 1, 1);
                        v176 = v251;
                      }
                      else if ( !v284.m128i_i64[0] )
                      {
                        goto LABEL_219;
                      }
                      sub_1419234B0(v176 + *((_QWORD *)&v250 + 1), v252, v175);
LABEL_219:
                      v251 = v175 + v176;
                      if ( v267 )
                        sub_140001660(v252, v267, 1);
LABEL_260:
                      sub_140A192F0(&v285);
                      goto LABEL_261;
                    }
                  }
                }
              }
              goto LABEL_261;
            }
            if ( !(*(_QWORD *)v119 ^ 0x6C65645F74786574LL | *(unsigned __int16 *)(v119 + 8) ^ 0x6174LL)
              && !*(_BYTE *)(v131 - 8) )
            {
              v177 = sub_1416724D0(aText_10, 4, &v247);
              if ( v177 )
              {
                if ( *(_BYTE *)v177 == 3 )
                {
                  v179 = *(_QWORD *)(v177 + 16);
                  v180 = *(_QWORD *)(v177 + 24);
                  v222 = v179;
                  v223 = v180;
                  if ( v180 )
                  {
                    v241.m128i_i64[0] = 0;
                    v242 = 0;
                    nullsub_1(v179, v178);
                    v181 = (__int64 (__fastcall *)())sub_140001650(2, 1);
                    if ( !v181 )
                      sub_14196B2DB(1, 2);
                    *(_WORD *)v181 = 25705;
                    v264 = 2;
                    v267 = (__int64)v181;
                    v265 = v181;
                    v266 = 2;
                    v278 = 1;
                    sub_140B72E40(&v285, a2 + 24);
                    if ( v285.m256i_i8[0] == -1 )
                    {
                      v283.m128i_i64[0] = v285.m256i_i64[1];
                      sub_14196B5F0(
                        (unsigned int)aCalledResultUn_15,
                        43,
                        (unsigned int)&v283,
                        (unsigned int)&off_141A699C8,
                        (__int64)&off_141A6B110);
                    }
                    v182 = _mm_loadu_si128((const __m128i *)&v285);
                    v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                    v283 = v182;
                    v278 = 0;
                    sub_140A68320(&v285, &v241, &v264, &v283);
                    if ( v285.m256i_i8[0] != -1 )
                      sub_140A192F0(&v285);
                    nullsub_1(v184, v183);
                    v185 = sub_140001650(6, 1);
                    if ( !v185 )
                      sub_14196B2DB(1, 6);
                    *(_WORD *)(v185 + 4) = 29795;
                    *(_DWORD *)v185 = 1701470831;
                    v264 = 6;
                    v267 = v185;
                    v265 = (__int64 (__fastcall *)())v185;
                    v266 = 6;
                    v277 = 1;
                    sub_140B72ED0(&v285, &off_141A6B0D8);
                    if ( v285.m256i_i8[0] == -1 )
                    {
                      v283.m128i_i64[0] = v285.m256i_i64[1];
                      sub_14196B5F0(
                        (unsigned int)aCalledResultUn_15,
                        43,
                        (unsigned int)&v283,
                        (unsigned int)&off_141A699C8,
                        (__int64)&off_141A6B110);
                    }
                    v186 = _mm_loadu_si128((const __m128i *)&v285);
                    v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                    v283 = v186;
                    v277 = 0;
                    sub_140A68320(&v285, &v241, &v264, &v283);
                    if ( v285.m256i_i8[0] != -1 )
                      sub_140A192F0(&v285);
                    nullsub_1(v188, v187);
                    v189 = sub_140001650(5, 1);
                    if ( !v189 )
                      sub_14196B2DB(1, 5);
                    *(_BYTE *)(v189 + 4) = 108;
                    *(_DWORD *)v189 = 1701080941;
                    v264 = 5;
                    v267 = v189;
                    v265 = (__int64 (__fastcall *)())v189;
                    v266 = 5;
                    v276 = 1;
                    sub_140B72E40(&v285, a2);
                    if ( v285.m256i_i8[0] == -1 )
                    {
                      v283.m128i_i64[0] = v285.m256i_i64[1];
                      sub_14196B5F0(
                        (unsigned int)aCalledResultUn_15,
                        43,
                        (unsigned int)&v283,
                        (unsigned int)&off_141A699C8,
                        (__int64)&off_141A6B110);
                    }
                    v190 = _mm_loadu_si128((const __m128i *)&v285);
                    v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                    v283 = v190;
                    v276 = 0;
                    sub_140A68320(&v285, &v241, &v264, &v283);
                    if ( v285.m256i_i8[0] != -1 )
                      sub_140A192F0(&v285);
                    nullsub_1(v192, v191);
                    v193 = (_DWORD *)sub_140001650(7, 1);
                    if ( !v193 )
                      sub_14196B2DB(1, 7);
                    *(_DWORD *)((char *)v193 + 3) = 1936024425;
                    *v193 = 1768908899;
                    v228 = 7;
                    v252 = v193;
                    v229 = v193;
                    v230 = 7;
                    v261 = 1;
                    v267 = sub_1401E8400();
                    *(_QWORD *)&v243 = 0;
                    v244 = 0;
                    nullsub_1(v195, v194);
                    v196 = sub_140001650(5, 1);
                    if ( !v196 )
                      sub_14196B2DB(1, 5);
                    *(_BYTE *)(v196 + 4) = 120;
                    *(_DWORD *)v196 = 1701080681;
                    v264 = 5;
                    v265 = (__int64 (__fastcall *)())v196;
                    v266 = 5;
                    v285.m256i_i8[0] = 2;
                    *(_OWORD *)&v285.m256i_u64[1] = 0;
                    sub_140A68320(&v283, &v243, &v264, &v285);
                    if ( v283.m128i_i8[0] != -1 )
                      sub_140A192F0(&v283);
                    nullsub_1(v198, v197);
                    v199 = sub_140001650(5, 1);
                    if ( !v199 )
                      sub_14196B2DB(1, 5);
                    *(_BYTE *)(v199 + 4) = 97;
                    *(_DWORD *)v199 = 1953260900;
                    v225 = 5;
                    v245 = (_DWORD *)v199;
                    v226 = (_QWORD *)v199;
                    v227 = 5;
                    v239.m128i_i64[0] = 0;
                    v240 = 0;
                    nullsub_1(v201, v200);
                    v202 = (_DWORD *)sub_140001650(7, 1);
                    if ( !v202 )
                      sub_14196B2DB(1, 7);
                    *(_DWORD *)((char *)v202 + 3) = 1953391988;
                    *v202 = 1953394531;
                    v264 = 7;
                    v253 = v202;
                    v265 = (__int64 (__fastcall *)())v202;
                    v266 = 7;
                    v275 = 1;
                    sub_140B72ED0(&v285, &v222);
                    if ( v285.m256i_i8[0] == -1 )
                    {
                      v283.m128i_i64[0] = v285.m256i_i64[1];
                      sub_14196B5F0(
                        (unsigned int)aCalledResultUn_15,
                        43,
                        (unsigned int)&v283,
                        (unsigned int)&off_141A699C8,
                        (__int64)&off_141A6B110);
                    }
                    v203 = _mm_loadu_si128((const __m128i *)&v285);
                    v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
                    v283 = v203;
                    v275 = 0;
                    sub_140A68320(&v285, &v239, &v264, &v283);
                    if ( v285.m256i_i8[0] != -1 )
                      sub_140A192F0(&v285);
                    *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v239);
                    v285.m256i_i64[3] = v240;
                    v285.m256i_i8[0] = 5;
                    v256 = 0;
                    sub_140A68320(&v283, &v243, &v225, &v285);
                    if ( v283.m128i_i8[0] != -1 )
                      sub_140A192F0(&v283);
                    nullsub_1(v205, v204);
                    v206 = (void *)sub_140001650(13, 1);
                    if ( !v206 )
                      sub_14196B2DB(1, 13);
                    qmemcpy(v206, "finish_reason", 13);
                    v264 = 13;
                    v265 = (__int64 (__fastcall *)())v206;
                    v266 = 13;
                    v285.m256i_i8[0] = 0;
                    sub_140A68320(&v283, &v243, &v264, &v285);
                    if ( v283.m128i_i8[0] != -1 )
                      sub_140A192F0(&v283);
                    *(_OWORD *)((char *)&v285.m256i_u32[1] + 3) = v243;
                    *(__int64 *)((char *)&v285.m256i_i64[2] + 7) = v244;
                    v207 = v267;
                    *(_BYTE *)v267 = 5;
                    v208 = _mm_loadu_si128((const __m128i *)&v285);
                    *(_OWORD *)(v207 + 16) = *(_OWORD *)((char *)&v285.m256i_u64[1] + 7);
                    *(__m128i *)(v207 + 1) = v208;
                    v285.m256i_i64[1] = 1;
                    v285.m256i_i64[2] = v207;
                    v285.m256i_i64[3] = 1;
                    v285.m256i_i8[0] = 4;
                    v261 = 0;
                    sub_140A68320(&v283, &v241, &v228, &v285);
                    if ( v283.m128i_i8[0] != -1 )
                      sub_140A192F0(&v283);
                    *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v241);
                    v285.m256i_i64[3] = v242;
                    v285.m256i_i8[0] = 5;
                    v264 = (__int64)&v285;
                    v265 = sub_14166C3A0;
                    sub_1416DAFA0(&v283, &unk_141A6B0E8, &v264);
                    v252 = (_BYTE *)v283.m128i_i64[1];
                    v267 = v283.m128i_i64[0];
                    v209 = v284.m128i_i64[0];
                    v210 = v251;
                    if ( v284.m128i_i64[0] > (unsigned __int64)(v250 - v251) )
                    {
                      sub_141939070((unsigned int)&v250, v251, v284.m128i_i32[0], 1, 1);
                      v210 = v251;
                    }
                    else if ( !v284.m128i_i64[0] )
                    {
                      goto LABEL_258;
                    }
                    sub_1419234B0(v210 + *((_QWORD *)&v250 + 1), v252, v209);
LABEL_258:
                    v251 = v209 + v210;
                    if ( v267 )
                      sub_140001660(v252, v267, 1);
                    goto LABEL_260;
                  }
                }
              }
            }
          }
LABEL_261:
          sub_140A192F0(&v247);
          break;
        }
        v34 = sub_1416724D0(aIndex_1, 5, a3);
        if ( v34 && *(_BYTE *)v34 == 2 && !*(_QWORD *)(v34 + 8) )
          v35 = *(_QWORD *)(v34 + 16);
        else
          v35 = 0;
        v36 = sub_1416724D0(aContentBlock_0, 13, a3);
        if ( v36 )
        {
          v37 = *(_BYTE *)v36;
          switch ( *(_BYTE *)v36 )
          {
            case 0:
              break;
            case 1:
              v285.m256i_i8[1] = *(_BYTE *)(v36 + 1);
              break;
            case 2:
              *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v36 + 8));
              break;
            case 3:
              sub_1416DB410(&v285.m256i_u64[1], v36 + 8);
              break;
            case 4:
              sub_1401C07A0(&v285.m256i_u64[1], *(_QWORD *)(v36 + 16), *(_QWORD *)(v36 + 24));
              break;
            case 5:
              if ( *(_QWORD *)(v36 + 24) )
              {
                v38 = *(_QWORD *)(v36 + 8);
                if ( !v38 )
                  sub_14196B5D0(&off_141A6CB98);
                sub_140A21590(&v283, v38, *(_QWORD *)(v36 + 16));
              }
              else
              {
                v283.m128i_i64[0] = 0;
                v284.m128i_i64[0] = 0;
              }
              v285.m256i_i64[1] = v283.m128i_i64[0];
              *(_OWORD *)&v285.m256i_u64[2] = __PAIR128__(v284.m128i_u64[0], v283.m128i_u64[1]);
              break;
          }
          v249 = *(__m128i *)&v285.m256i_u64[2];
          v247 = v37;
          v248[0] = v285.m256i_i8[1];
          *(_DWORD *)&v248[1] = *(__int32 *)((char *)v285.m256i_i32 + 2);
          *(_WORD *)&v248[5] = v285.m256i_i16[3];
          *(_QWORD *)&v248[7] = v285.m256i_i64[1];
          v285.m256i_i8[0] = 0;
          sub_140A192F0(&v285);
        }
        else
        {
          v285.m256i_i8[0] = 0;
          v249 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
          v247 = 0;
          *(_QWORD *)v248 = *(__int64 *)((char *)v285.m256i_i64 + 1);
          *(_DWORD *)&v248[8] = *(__int32 *)((char *)&v285.m256i_i32[2] + 1);
          *(_WORD *)&v248[12] = *(__int16 *)((char *)&v285.m256i_i16[6] + 1);
          v248[14] = v285.m256i_i8[15];
        }
        v40 = sub_1416724D0(aType_10, 4, &v247);
        v41 = 1;
        if ( v40 && *(_BYTE *)v40 == 3 )
        {
          v41 = *(_QWORD *)(v40 + 16);
          v42 = *(_QWORD *)(v40 + 24);
        }
        else
        {
          v42 = 0;
        }
        sub_140A5F020(a2, &v250);
        if ( v42 != 8 )
        {
          if ( v42 == 4 && *(_DWORD *)v41 == 1954047348 )
            sub_140873C50(a2 + 48, v35, 0, v43);
          goto LABEL_261;
        }
        if ( *(_QWORD *)v41 != 0x6573755F6C6F6F74LL )
          goto LABEL_261;
        v267 = *(unsigned int *)(a2 + 96);
        *(_DWORD *)(a2 + 96) = v267 + 1;
        v44 = sub_1416724D0(aId_7, 2, &v247);
        v45 = 1;
        if ( v44 && *(_BYTE *)v44 == 3 )
        {
          v45 = *(_QWORD *)(v44 + 16);
          v46 = *(_QWORD *)(v44 + 24);
        }
        else
        {
          v46 = 0;
        }
        sub_1401E7560((unsigned int)&v285, v46, 0, 1, 1);
        v47 = v285.m256i_i64[1];
        if ( v285.m256i_i32[0] == 1 )
          sub_14196B2DB(v285.m256i_i64[1], v285.m256i_i64[2]);
        v48 = v285.m256i_i64[2];
        if ( v46 )
          sub_1419234B0(v285.m256i_i64[2], v45, v46);
        v252 = (_BYTE *)v47;
        v215[0] = v47;
        v232 = (_QWORD *)v48;
        v215[1] = v48;
        v215[2] = v46;
        v49 = sub_1416724D0(aName_8, 4, &v247);
        v50 = 1;
        if ( v49 && *(_BYTE *)v49 == 3 )
        {
          v50 = *(_QWORD *)(v49 + 16);
          v51 = *(_QWORD *)(v49 + 24);
        }
        else
        {
          v51 = 0;
        }
        sub_1401E7560((unsigned int)&v285, v51, 0, 1, 1);
        v54 = v285.m256i_i64[1];
        if ( v285.m256i_i32[0] == 1 )
          sub_14196B2DB(v285.m256i_i64[1], v285.m256i_i64[2]);
        v55 = v285.m256i_i64[2];
        if ( v51 )
          sub_1419234B0(v285.m256i_i64[2], v50, v51);
        v245 = (_DWORD *)v54;
        v216 = v54;
        v233 = v55;
        v217 = v55;
        v218 = v51;
        v236.m128i_i64[0] = 0;
        v237 = 0;
        nullsub_1(v53, v52);
        v56 = (_WORD *)sub_140001650(2, 1);
        if ( !v56 )
          sub_14196B2DB(1, 2);
        *v56 = 25705;
        v264 = 2;
        v253 = v56;
        v265 = (__int64 (__fastcall *)())v56;
        v266 = 2;
        v274 = 1;
        sub_140B72E40(&v285, a2 + 24);
        if ( v285.m256i_i8[0] == -1 )
        {
          v283.m128i_i64[0] = v285.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v283,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6B128);
        }
        v57 = _mm_loadu_si128((const __m128i *)&v285);
        v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
        v283 = v57;
        v274 = 0;
        sub_140A68320(&v285, &v236, &v264, &v283);
        if ( v285.m256i_i8[0] != -1 )
          sub_140A192F0(&v285);
        nullsub_1(v59, v58);
        v60 = sub_140001650(6, 1);
        if ( !v60 )
          sub_14196B2DB(1, 6);
        *(_WORD *)(v60 + 4) = 29795;
        *(_DWORD *)v60 = 1701470831;
        v264 = 6;
        v253 = (_BYTE *)v60;
        v265 = (__int64 (__fastcall *)())v60;
        v266 = 6;
        v273 = 1;
        sub_140B72ED0(&v285, &off_141A6B0D8);
        if ( v285.m256i_i8[0] == -1 )
        {
          v283.m128i_i64[0] = v285.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v283,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6B128);
        }
        v61 = _mm_loadu_si128((const __m128i *)&v285);
        v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
        v283 = v61;
        v273 = 0;
        sub_140A68320(&v285, &v236, &v264, &v283);
        if ( v285.m256i_i8[0] != -1 )
          sub_140A192F0(&v285);
        nullsub_1(v63, v62);
        v64 = sub_140001650(5, 1);
        if ( !v64 )
          sub_14196B2DB(1, 5);
        *(_BYTE *)(v64 + 4) = 108;
        *(_DWORD *)v64 = 1701080941;
        v264 = 5;
        v253 = (_BYTE *)v64;
        v265 = (__int64 (__fastcall *)())v64;
        v266 = 5;
        v272 = 1;
        sub_140B72E40(&v285, a2);
        if ( v285.m256i_i8[0] == -1 )
        {
          v283.m128i_i64[0] = v285.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v283,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6B128);
        }
        v65 = _mm_loadu_si128((const __m128i *)&v285);
        v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
        v283 = v65;
        v272 = 0;
        sub_140A68320(&v285, &v236, &v264, &v283);
        if ( v285.m256i_i8[0] != -1 )
          sub_140A192F0(&v285);
        nullsub_1(v67, v66);
        v68 = (_DWORD *)sub_140001650(7, 1);
        if ( !v68 )
          sub_14196B2DB(1, 7);
        v71 = v68;
        *(_DWORD *)((char *)v68 + 3) = 1936024425;
        *v68 = 1768908899;
        v219 = 7;
        v220 = v68;
        v221 = 7;
        nullsub_1(v70, v69);
        v72 = sub_140001650(32, 8);
        v215[3] = v71;
        if ( !v72 )
        {
          v260 = 1;
          sub_14196B2C1(8, 32);
        }
        v253 = (_BYTE *)v72;
        *(_QWORD *)&v234 = 0;
        v235 = 0;
        nullsub_1(v74, v73);
        v75 = sub_140001650(5, 1);
        if ( !v75 )
          sub_14196B2DB(1, 5);
        *(_BYTE *)(v75 + 4) = 120;
        *(_DWORD *)v75 = 1701080681;
        v264 = 5;
        v265 = (__int64 (__fastcall *)())v75;
        v266 = 5;
        v285.m256i_i8[0] = 2;
        *(_OWORD *)&v285.m256i_u64[1] = 0;
        sub_140A68320(&v283, &v234, &v264, &v285);
        if ( v283.m128i_i8[0] != -1 )
          sub_140A192F0(&v283);
        nullsub_1(v77, v76);
        v78 = sub_140001650(5, 1);
        if ( !v78 )
          sub_14196B2DB(1, 5);
        v81 = v78;
        *(_BYTE *)(v78 + 4) = 97;
        *(_DWORD *)v78 = 1953260900;
        v222 = 5;
        v223 = v78;
        v224 = 5;
        v241.m128i_i64[0] = 0;
        v242 = 0;
        nullsub_1(v80, v79);
        v82 = (void *)sub_140001650(10, 1);
        v215[4] = v81;
        if ( !v82 )
          sub_14196B2DB(1, 10);
        v85 = v82;
        qmemcpy(v82, "tool_calls", 10);
        v228 = 10;
        v229 = v82;
        v230 = 10;
        nullsub_1(v84, v83);
        v86 = sub_140001650(32, 8);
        v215[5] = v85;
        if ( !v86 )
        {
          v259 = 1;
          sub_14196B2C1(8, 32);
        }
        v246 = (_BYTE *)v86;
        *(_QWORD *)&v243 = 0;
        v244 = 0;
        nullsub_1(v88, v87);
        v89 = sub_140001650(5, 1);
        if ( !v89 )
          sub_14196B2DB(1, 5);
        *(_BYTE *)(v89 + 4) = 120;
        *(_DWORD *)v89 = 1701080681;
        v264 = 5;
        v265 = (__int64 (__fastcall *)())v89;
        v266 = 5;
        v285.m256i_i8[0] = 2;
        v285.m256i_i64[1] = 0;
        v285.m256i_i64[2] = v267;
        sub_140A68320(&v283, &v243, &v264, &v285);
        if ( v283.m128i_i8[0] != -1 )
          sub_140A192F0(&v283);
        nullsub_1(v91, v90);
        v92 = (__int64 (__fastcall *)())sub_140001650(2, 1);
        if ( !v92 )
          sub_14196B2DB(1, 2);
        *(_WORD *)v92 = 25705;
        v264 = 2;
        v238 = v92;
        v265 = v92;
        v266 = 2;
        v271 = 1;
        sub_140B72E40(&v285, v215);
        if ( v285.m256i_i8[0] == -1 )
        {
          v283.m128i_i64[0] = v285.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v283,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6B128);
        }
        v93 = _mm_loadu_si128((const __m128i *)&v285);
        v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
        v283 = v93;
        v271 = 0;
        sub_140A68320(&v285, &v243, &v264, &v283);
        if ( v285.m256i_i8[0] != -1 )
          sub_140A192F0(&v285);
        nullsub_1(v95, v94);
        v96 = (__int64 (__fastcall *)())sub_140001650(4, 1);
        if ( !v96 )
          sub_14196B2DB(1, 4);
        *(_DWORD *)v96 = 1701869940;
        v264 = 4;
        v238 = v96;
        v265 = v96;
        v266 = 4;
        v270 = 1;
        sub_140B72ED0(&v285, &off_141A6B140);
        if ( v285.m256i_i8[0] == -1 )
        {
          v283.m128i_i64[0] = v285.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v283,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6B128);
        }
        v97 = _mm_loadu_si128((const __m128i *)&v285);
        v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
        v283 = v97;
        v270 = 0;
        sub_140A68320(&v285, &v243, &v264, &v283);
        if ( v285.m256i_i8[0] != -1 )
          sub_140A192F0(&v285);
        nullsub_1(v99, v98);
        v100 = (__int64 (__fastcall *)())sub_140001650(8, 1);
        if ( !v100 )
          sub_14196B2DB(1, 8);
        *(_QWORD *)v100 = 0x6E6F6974636E7566LL;
        v225 = 8;
        v238 = v100;
        v226 = v100;
        v227 = 8;
        v239.m128i_i64[0] = 0;
        v240 = 0;
        nullsub_1(0x6E6F6974636E7566LL, v101);
        v102 = (__int64 (__fastcall *)())sub_140001650(4, 1);
        if ( !v102 )
          sub_14196B2DB(1, 4);
        *(_DWORD *)v102 = 1701667182;
        v264 = 4;
        v231 = v102;
        v265 = v102;
        v266 = 4;
        v269 = 1;
        sub_140B72E40(&v285, &v216);
        if ( v285.m256i_i8[0] == -1 )
        {
          v283.m128i_i64[0] = v285.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v283,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6B128);
        }
        v103 = _mm_loadu_si128((const __m128i *)&v285);
        v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
        v283 = v103;
        v269 = 0;
        sub_140A68320(&v285, &v239, &v264, &v283);
        if ( v285.m256i_i8[0] != -1 )
          sub_140A192F0(&v285);
        nullsub_1(v105, v104);
        v106 = sub_140001650(9, 1);
        if ( !v106 )
          sub_14196B2DB(1, 9);
        *(_QWORD *)v106 = 0x746E656D75677261LL;
        *(_BYTE *)(v106 + 8) = 115;
        v264 = 9;
        v231 = (__int64 (__fastcall *)())v106;
        v265 = (__int64 (__fastcall *)())v106;
        v266 = 9;
        v268 = 1;
        sub_140B72ED0(&v285, &unk_141A694F0);
        if ( v285.m256i_i8[0] == -1 )
        {
          v283.m128i_i64[0] = v285.m256i_i64[1];
          sub_14196B5F0(
            (unsigned int)aCalledResultUn_15,
            43,
            (unsigned int)&v283,
            (unsigned int)&off_141A699C8,
            (__int64)&off_141A6B128);
        }
        v107 = _mm_loadu_si128((const __m128i *)&v285);
        v284 = _mm_loadu_si128((const __m128i *)&v285.m256i_u64[2]);
        v283 = v107;
        v268 = 0;
        sub_140A68320(&v285, &v239, &v264, &v283);
        if ( v285.m256i_i8[0] != -1 )
          sub_140A192F0(&v285);
        *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v239);
        v285.m256i_i64[3] = v240;
        v285.m256i_i8[0] = 5;
        v255 = 0;
        sub_140A68320(&v283, &v243, &v225, &v285);
        if ( v283.m128i_i8[0] != -1 )
          sub_140A192F0(&v283);
        *(_OWORD *)((char *)&v285.m256i_u32[1] + 3) = v243;
        *(__int64 *)((char *)&v285.m256i_i64[2] + 7) = v244;
        v108 = (__int64)v246;
        *v246 = 5;
        v109 = _mm_loadu_si128((const __m128i *)&v285);
        *(_OWORD *)(v108 + 16) = *(_OWORD *)((char *)&v285.m256i_u64[1] + 7);
        *(__m128i *)(v108 + 1) = v109;
        v285.m256i_i64[1] = 1;
        v285.m256i_i64[2] = v108;
        v285.m256i_i64[3] = 1;
        v285.m256i_i8[0] = 4;
        v259 = 0;
        sub_140A68320(&v283, &v241, &v228, &v285);
        if ( v283.m128i_i8[0] != -1 )
          sub_140A192F0(&v283);
        *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v241);
        v285.m256i_i64[3] = v242;
        v285.m256i_i8[0] = 5;
        v254 = 0;
        sub_140A68320(&v283, &v234, &v222, &v285);
        if ( v283.m128i_i8[0] != -1 )
          sub_140A192F0(&v283);
        nullsub_1(v111, v110);
        v112 = (void *)sub_140001650(13, 1);
        if ( !v112 )
          sub_14196B2DB(1, 13);
        qmemcpy(v112, "finish_reason", 13);
        v264 = 13;
        v265 = (__int64 (__fastcall *)())v112;
        v266 = 13;
        v285.m256i_i8[0] = 0;
        sub_140A68320(&v283, &v234, &v264, &v285);
        if ( v283.m128i_i8[0] != -1 )
          sub_140A192F0(&v283);
        *(_OWORD *)((char *)&v285.m256i_u32[1] + 3) = v234;
        *(__int64 *)((char *)&v285.m256i_i64[2] + 7) = v235;
        v113 = (__int64)v253;
        *v253 = 5;
        v114 = _mm_loadu_si128((const __m128i *)&v285);
        *(_OWORD *)(v113 + 16) = *(_OWORD *)((char *)&v285.m256i_u64[1] + 7);
        *(__m128i *)(v113 + 1) = v114;
        v285.m256i_i64[1] = 1;
        v285.m256i_i64[2] = v113;
        v285.m256i_i64[3] = 1;
        v285.m256i_i8[0] = 4;
        v260 = 0;
        sub_140A68320(&v283, &v236, &v219, &v285);
        if ( v283.m128i_i8[0] != -1 )
          sub_140A192F0(&v283);
        *(__m128i *)&v285.m256i_u64[1] = _mm_loadu_si128(&v236);
        v285.m256i_i64[3] = v237;
        v285.m256i_i8[0] = 5;
        v264 = (__int64)&v285;
        v265 = sub_14166C3A0;
        sub_1416DAFA0(&v283, &unk_141A6B0E8, &v264);
        v115 = (unsigned __int128)v283;
        v116 = v284.m128i_i64[0];
        v117 = v251;
        if ( v284.m128i_i64[0] > (unsigned __int64)(v250 - v251) )
        {
          v246 = (_BYTE *)v283.m128i_i64[1];
          v253 = (_BYTE *)v283.m128i_i64[0];
          sub_141939070((unsigned int)&v250, v251, v284.m128i_i32[0], 1, 1);
          v117 = v251;
          v115 = __PAIR128__((unsigned __int64)v246, (unsigned __int64)v253);
        }
        else if ( !v284.m128i_i64[0] )
        {
LABEL_151:
          v251 = v116 + v117;
          if ( (_QWORD)v115 )
            sub_140001660(*((_QWORD *)&v115 + 1), v115, 1);
          sub_140873C50(a2 + 48, v35, 1, v267);
          sub_140A192F0(&v285);
          if ( v245 )
            sub_140001660(v233, v245, 1);
          if ( v252 )
            sub_140001660(v232, v252, 1);
          goto LABEL_261;
        }
        sub_1419234B0(v117 + *((_QWORD *)&v250 + 1), *((_QWORD *)&v115 + 1), v116);
        goto LABEL_151;
      default:
        break;
    }
  }
  result = v251;
  *(_QWORD *)(a1 + 16) = v251;
  *(_OWORD *)a1 = v250;
  return result;
}
