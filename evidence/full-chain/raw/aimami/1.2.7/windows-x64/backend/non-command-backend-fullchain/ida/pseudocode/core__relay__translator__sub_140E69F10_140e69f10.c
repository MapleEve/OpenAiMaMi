// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e69f10 | name sub_140E69F10
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E69F10(__int64 a1, __m128i *a2, __int64 a3)
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
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  char v24; // bl
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  const __m128i *v28; // r12
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
  __int32 v43; // r9d
  __int64 v44; // rax
  __int64 v45; // r15
  unsigned __int64 v46; // r12
  const __m128i *v47; // r13
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // r15
  unsigned __int64 v51; // r12
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // r13
  _WORD *v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rcx
  __int64 v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rcx
  __int64 v61; // rax
  __m128i v62; // xmm0
  __int64 v63; // rcx
  _DWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r14
  void *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  _WORD *v80; // rax
  __m128i v81; // xmm0
  __int64 v82; // rcx
  _DWORD *v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rcx
  _QWORD *v86; // rax
  _DWORD *v87; // rax
  __m128i v88; // xmm0
  __int64 v89; // rcx
  __int64 v90; // rax
  __m128i v91; // xmm0
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __int64 v94; // rcx
  void *v95; // rax
  __int64 v96; // rcx
  __m128i v97; // xmm0
  unsigned __int128 v98; // kr20_16
  unsigned __int64 v99; // r15
  __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // r14
  __int64 v103; // r12
  unsigned __int64 v104; // rax
  __int64 v106; // rcx
  __int64 v107; // rdx
  __m128i v108; // xmm0
  __m128i v109; // xmm0
  __int64 i; // r8
  unsigned __int64 v111; // rax
  __m128i v112; // xmm2
  unsigned __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __m128i *v118; // rax
  __m128i v119; // xmm0
  __int64 v120; // rcx
  __m128i *v121; // rax
  __m128i v122; // xmm0
  __int64 v123; // rcx
  __m128i *v124; // rax
  __m128i v125; // xmm0
  __int64 v126; // rcx
  _DWORD *v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  void *v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rcx
  _QWORD *v139; // rax
  __int64 v140; // rax
  __m128i v141; // xmm0
  const __m128i *v142; // rcx
  __m128i v143; // xmm0
  __int64 v144; // rcx
  void *v145; // rax
  const __m128i *v146; // rcx
  __m128i v147; // xmm0
  unsigned __int64 v148; // rdi
  __int64 v149; // rbx
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  __m128i *v153; // rax
  __m128i v154; // xmm0
  __int64 v155; // rcx
  __m128i *v156; // rax
  __m128i v157; // xmm0
  __int64 v158; // rcx
  __m128i *v159; // rax
  __m128i v160; // xmm0
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rcx
  _DWORD *v169; // rax
  __m128i v170; // xmm0
  __int64 v171; // rcx
  void *v172; // rax
  const __m128i *v173; // rcx
  __m128i v174; // xmm0
  unsigned __int64 v175; // rdi
  __int64 v176; // rbx
  __int64 result; // rax
  const __m128i *v178; // r14
  __m128i v179; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v180; // [rsp+D8h] [rbp+58h]
  __int64 v181[6]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v182; // [rsp+110h] [rbp+90h] BYREF
  __int64 v183; // [rsp+118h] [rbp+98h]
  unsigned __int64 v184; // [rsp+120h] [rbp+A0h]
  __int64 v185; // [rsp+128h] [rbp+A8h] BYREF
  _DWORD *v186; // [rsp+130h] [rbp+B0h]
  __int64 v187; // [rsp+138h] [rbp+B8h]
  __int64 v188; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v189; // [rsp+148h] [rbp+C8h]
  __int64 v190; // [rsp+150h] [rbp+D0h]
  __int64 v191; // [rsp+158h] [rbp+D8h] BYREF
  _QWORD *v192; // [rsp+160h] [rbp+E0h]
  __int64 v193; // [rsp+168h] [rbp+E8h]
  __int64 v194; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v195; // [rsp+178h] [rbp+F8h]
  __int64 v196; // [rsp+180h] [rbp+100h]
  _DWORD *v197; // [rsp+188h] [rbp+108h]
  _QWORD *v198; // [rsp+190h] [rbp+110h]
  __int64 v199; // [rsp+198h] [rbp+118h]
  __int128 v200; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v201; // [rsp+1B0h] [rbp+130h]
  __m128i v202; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v203; // [rsp+1C8h] [rbp+148h]
  _WORD *v204; // [rsp+1D0h] [rbp+150h]
  __m128i v205; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v206; // [rsp+1E8h] [rbp+168h]
  __m128i v207; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v208; // [rsp+200h] [rbp+180h]
  __int128 v209; // [rsp+208h] [rbp+188h] BYREF
  __int64 v210; // [rsp+218h] [rbp+198h]
  _DWORD *v211; // [rsp+220h] [rbp+1A0h]
  _BYTE *v212; // [rsp+228h] [rbp+1A8h]
  char v213; // [rsp+230h] [rbp+1B0h] BYREF
  _BYTE v214[15]; // [rsp+231h] [rbp+1B1h]
  __m128i v215; // [rsp+240h] [rbp+1C0h]
  __int128 v216; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v217; // [rsp+268h] [rbp+1E8h]
  const __m128i *v218; // [rsp+270h] [rbp+1F0h]
  _BYTE *v219; // [rsp+278h] [rbp+1F8h]
  char v220; // [rsp+286h] [rbp+206h]
  char v221; // [rsp+287h] [rbp+207h]
  char v222; // [rsp+288h] [rbp+208h]
  char v223; // [rsp+289h] [rbp+209h]
  char v224; // [rsp+28Ah] [rbp+20Ah]
  char v225; // [rsp+28Bh] [rbp+20Bh]
  char v226; // [rsp+28Ch] [rbp+20Ch]
  char v227; // [rsp+28Dh] [rbp+20Dh]
  char v228; // [rsp+28Eh] [rbp+20Eh]
  char v229; // [rsp+28Fh] [rbp+20Fh]
  __int64 v230; // [rsp+290h] [rbp+210h] BYREF
  __int64 (__fastcall *v231)(_QWORD, _QWORD); // [rsp+298h] [rbp+218h]
  __int64 v232; // [rsp+2A0h] [rbp+220h]
  const __m128i *v233; // [rsp+2A8h] [rbp+228h]
  char v234; // [rsp+2B1h] [rbp+231h]
  char v235; // [rsp+2B2h] [rbp+232h]
  char v236; // [rsp+2B3h] [rbp+233h]
  char v237; // [rsp+2B4h] [rbp+234h]
  char v238; // [rsp+2B5h] [rbp+235h]
  char v239; // [rsp+2B6h] [rbp+236h]
  char v240; // [rsp+2B7h] [rbp+237h]
  char v241; // [rsp+2B8h] [rbp+238h]
  char v242; // [rsp+2B9h] [rbp+239h]
  char v243; // [rsp+2BAh] [rbp+23Ah]
  char v244; // [rsp+2BBh] [rbp+23Bh]
  char v245; // [rsp+2BCh] [rbp+23Ch]
  char v246; // [rsp+2BDh] [rbp+23Dh]
  char v247; // [rsp+2BEh] [rbp+23Eh]
  char v248; // [rsp+2BFh] [rbp+23Fh]
  __m128i v249; // [rsp+2C0h] [rbp+240h] BYREF
  __m128i v250; // [rsp+2D0h] [rbp+250h]
  __m256i v251; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v252; // [rsp+300h] [rbp+280h]

  v252 = -2;
  *(_QWORD *)&v216 = 0;
  *((_QWORD *)&v216 + 1) = 1;
  v217 = 0;
  v6 = sub_1416419F0(aType_11, 4, a3);
  if ( v6 && *(_BYTE *)v6 == 3 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    v8 = *(_QWORD *)(v6 + 16);
    switch ( v7 )
    {
      case 12LL:
        if ( !(*(_QWORD *)v8 ^ 0x5F6567617373656DLL | *(unsigned int *)(v8 + 8) ^ 0x706F7473LL) && !a2[6].m128i_i8[5] )
        {
          a2[6].m128i_i8[5] = 1;
          sub_14190D590((unsigned int)&v216, 0, 14, 1, 1);
          v9 = *((_QWORD *)&v216 + 1);
          v10 = v217;
          *(_QWORD *)(*((_QWORD *)&v216 + 1) + v217 + 6) = 0xA0A5D454E4F445BLL;
          *(_QWORD *)(v9 + v10) = 0x445B203A61746164LL;
          v217 = v10 + 14;
        }
        break;
      case 13LL:
        if ( *(_QWORD *)v8 ^ 0x5F6567617373656DLL | *(_QWORD *)(v8 + 5) ^ 0x74726174735F6567LL )
        {
          if ( !(*(_QWORD *)v8 ^ 0x5F6567617373656DLL | *(_QWORD *)(v8 + 5) ^ 0x61746C65645F6567LL) )
          {
            v14 = sub_1416419F0(aDelta_4, 5, a3);
            if ( v14 )
            {
              v15 = sub_1416419F0(aStopReason_3, 11, v14);
              if ( v15 )
              {
                if ( *(_BYTE *)v15 == 3 && *(_QWORD *)(v15 + 24) )
                {
                  v16 = sub_140E887A0(*(_QWORD *)(v15 + 16));
                  sub_140E695D0(&v251, a2, v16, v17);
                  v19 = v251.m256i_u64[2];
                  v18 = v251.m256i_i64[1];
                  if ( v251.m256i_i64[2] )
                  {
                    v233 = (const __m128i *)v251.m256i_i64[1];
                    sub_14190D590((unsigned int)&v216, 0, v251.m256i_i32[4], 1, 1);
                    v20 = v217;
                    v178 = v233;
                    sub_1418F44E0((__m128i *)(v217 + *((_QWORD *)&v216 + 1)), v233, v19);
                    v18 = (__int64)v178;
                  }
                  else
                  {
                    v20 = 0;
                  }
                  v217 = v19 + v20;
                  if ( v251.m256i_i64[0] )
                    sub_140001660(v18, v251.m256i_i64[0], 1);
                }
              }
            }
          }
        }
        else
        {
          v25 = sub_1416419F0("messagestackwindowLabelhref", 7, a3);
          if ( v25 )
          {
            v26 = sub_1416419F0(aModel_7, 5, v25);
            if ( v26 )
            {
              if ( *(_BYTE *)v26 == 3 )
              {
                v27 = *(_QWORD *)(v26 + 24);
                if ( v27 )
                {
                  v28 = *(const __m128i **)(v26 + 16);
                  sub_14072C410((unsigned int)&v251, v27, 0, 1, 1);
                  v29 = v251.m256i_i64[1];
                  if ( v251.m256i_i32[0] == 1 )
                    sub_141938D2B(v251.m256i_i64[1], v251.m256i_i64[2]);
                  v30 = v251.m256i_i64[2];
                  sub_1418F44E0((__m128i *)v251.m256i_i64[2], v28, v27);
                  if ( a2->m128i_i64[0] )
                    sub_140001660(a2->m128i_i64[1], a2->m128i_i64[0], 1);
                  a2->m128i_i64[0] = v29;
                  a2->m128i_i64[1] = v30;
                  a2[1].m128i_i64[0] = v27;
                }
              }
            }
          }
          v31 = sub_1416419F0("messagestackwindowLabelhref", 7, a3);
          if ( v31 )
          {
            v32 = (const __m128i *)sub_1416419F0(aId_8, 2, v31);
            if ( v32 )
            {
              if ( v32->m128i_i8[0] == 3 )
              {
                v249 = _mm_loadu_si128(v32 + 1);
                v251.m256i_i64[0] = (__int64)&v249;
                v251.m256i_i64[1] = (__int64)sub_140186EE0;
                sub_1416ABFD0(&v179, &unk_141A54560, &v251);
                v33 = a2[1].m128i_i64[1];
                if ( v33 )
                  sub_140001660(a2[2].m128i_i64[0], v33, 1);
                a2[2].m128i_i64[1] = v180;
                *(__m128i *)((char *)a2 + 24) = _mm_loadu_si128(&v179);
              }
            }
          }
          sub_140E694D0((__int64)a2, &v216);
        }
        break;
      case 18LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v8 + 16)), (__m128i)xmmword_1419D34D0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1419D34C0))) == 0xFFFF )
        {
          v11 = sub_1416419F0(aIndex_1, 5, a3);
          if ( v11 && *(_BYTE *)v11 == 2 && !*(_QWORD *)(v11 + 8) )
            v12 = *(_QWORD *)(v11 + 16);
          else
            v12 = 0;
          v249.m128i_i64[0] = v12;
          v13 = sub_140D2C470(a2 + 5, v249.m128i_i64);
          sub_1402956D0(&v251, &a2[3], v13, &v249);
        }
        break;
      case 19LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1419D34C0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v8 + 3)), (__m128i)xmmword_1419D34E0))) != 0xFFFF )
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1419D3500),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v8 + 3)), (__m128i)xmmword_1419D34F0))) != 0xFFFF )
            break;
          v21 = sub_1416419F0(aIndex_1, 5, a3);
          if ( v21 && *(_BYTE *)v21 == 2 && !*(_QWORD *)(v21 + 8) )
            v22 = *(_QWORD *)(v21 + 16);
          else
            v22 = 0;
          v181[0] = v22;
          v23 = sub_1416419F0(aDelta_4, 5, a3);
          if ( v23 )
          {
            v24 = *(_BYTE *)v23;
            switch ( *(_BYTE *)v23 )
            {
              case 0:
                break;
              case 1:
                v251.m256i_i8[1] = *(_BYTE *)(v23 + 1);
                break;
              case 2:
                *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v23 + 8));
                break;
              case 3:
                sub_1416AC440(&v251.m256i_u64[1], v23 + 8);
                break;
              case 4:
                sub_1403918C0(&v251.m256i_u64[1], *(_QWORD *)(v23 + 16), *(_QWORD *)(v23 + 24));
                break;
              case 5:
                if ( *(_QWORD *)(v23 + 24) )
                {
                  v39 = *(_QWORD *)(v23 + 8);
                  if ( !v39 )
                    sub_141939020(&off_141A54900);
                  sub_140E11B90(&v249, v39, *(_QWORD *)(v23 + 16));
                }
                else
                {
                  v249.m128i_i64[0] = 0;
                  v250.m128i_i64[0] = 0;
                }
                v251.m256i_i64[1] = v249.m128i_i64[0];
                *(_OWORD *)&v251.m256i_u64[2] = __PAIR128__(v250.m128i_u64[0], v249.m128i_u64[1]);
                break;
            }
            v215 = *(__m128i *)&v251.m256i_u64[2];
            v213 = v24;
            v214[0] = v251.m256i_i8[1];
            *(_DWORD *)&v214[1] = *(__int32 *)((char *)v251.m256i_i32 + 2);
            *(_WORD *)&v214[5] = v251.m256i_i16[3];
            *(_QWORD *)&v214[7] = v251.m256i_i64[1];
            v251.m256i_i8[0] = 0;
            sub_140DF44E0(&v251);
          }
          else
          {
            v251.m256i_i8[0] = 0;
            v215 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
            v213 = 0;
            *(_QWORD *)v214 = *(__int64 *)((char *)v251.m256i_i64 + 1);
            *(_DWORD *)&v214[8] = *(__int32 *)((char *)&v251.m256i_i32[2] + 1);
            *(_WORD *)&v214[12] = *(__int16 *)((char *)&v251.m256i_i16[6] + 1);
            v214[14] = v251.m256i_i8[15];
          }
          v101 = sub_1416419F0(aType_11, 4, &v213);
          v102 = 1;
          if ( v101 && *(_BYTE *)v101 == 3 )
          {
            v102 = *(_QWORD *)(v101 + 16);
            v103 = *(_QWORD *)(v101 + 24);
          }
          else
          {
            v103 = 0;
          }
          sub_140E694D0((__int64)a2, &v216);
          if ( a2[4].m128i_i64[1] )
          {
            v104 = sub_140D2C470(a2 + 5, v181);
            v106 = a2[3].m128i_i64[0];
            v107 = a2[3].m128i_i64[1];
            v108 = _mm_cvtsi32_si128(v104 >> 57);
            v109 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v108, v108), 0), 68);
            for ( i = 0; ; i += 16 )
            {
              v111 = v107 & v104;
              v112 = _mm_loadu_si128((const __m128i *)(v106 + v111));
              _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v112, v109));
              if ( _R9D )
                break;
LABEL_170:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v112, (__m128i)-1LL)) )
                goto LABEL_261;
              v104 = i + v111 + 16;
            }
            while ( 1 )
            {
              __asm { tzcnt   r10d, r9d }
              v114 = v106 - 16 * (v107 & (v111 + _R10));
              if ( v22 == *(_QWORD *)(v114 - 16) )
                break;
              _R10 = (unsigned int)(_R9D - 1);
              LOWORD(_R10) = _R9D & (_R9D - 1);
              _R9D = _R10;
              if ( !(_WORD)_R10 )
                goto LABEL_170;
            }
            if ( v103 != 10 )
            {
              if ( v103 == 16
                && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v102), (__m128i)xmmword_1419D3510)) == 0xFFFF
                && *(_DWORD *)(v114 - 8) == 1 )
              {
                v115 = sub_1416419F0(aPartialJson_0, 12, &v213);
                if ( v115 )
                {
                  if ( *(_BYTE *)v115 == 3 )
                  {
                    v116 = *(_QWORD *)(v115 + 16);
                    v117 = *(_QWORD *)(v115 + 24);
                    v182 = v116;
                    v183 = v117;
                    if ( v117 )
                    {
                      v202.m128i_i64[0] = 0;
                      v203 = 0;
                      nullsub_1(v116);
                      v118 = (__m128i *)sub_140001650(2, 1);
                      if ( !v118 )
                        sub_141938D2B(1, 2);
                      v118->m128i_i16[0] = 25705;
                      v230 = 2;
                      v233 = v118;
                      v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v118;
                      v232 = 2;
                      v248 = 1;
                      sub_14040F9F0(&v251, &a2[1].m128i_u64[1]);
                      if ( v251.m256i_i8[0] == -1 )
                      {
                        v249.m128i_i64[0] = v251.m256i_i64[1];
                        sub_141939040(
                          (unsigned int)aCalledResultUn_16,
                          43,
                          (unsigned int)&v249,
                          (unsigned int)&off_141A52FE8,
                          (__int64)&off_141A54508);
                      }
                      v119 = _mm_loadu_si128((const __m128i *)&v251);
                      v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                      v249 = v119;
                      v248 = 0;
                      sub_140E72AA0(&v251, &v202, &v230, &v249);
                      if ( v251.m256i_i8[0] != -1 )
                        sub_140DF44E0(&v251);
                      nullsub_1(v120);
                      v121 = (__m128i *)sub_140001650(6, 1);
                      if ( !v121 )
                        sub_141938D2B(1, 6);
                      v121->m128i_i16[2] = 29795;
                      v121->m128i_i32[0] = 1701470831;
                      v230 = 6;
                      v233 = v121;
                      v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v121;
                      v232 = 6;
                      v247 = 1;
                      sub_14040FB10(&v251, &off_141A544E8);
                      if ( v251.m256i_i8[0] == -1 )
                      {
                        v249.m128i_i64[0] = v251.m256i_i64[1];
                        sub_141939040(
                          (unsigned int)aCalledResultUn_16,
                          43,
                          (unsigned int)&v249,
                          (unsigned int)&off_141A52FE8,
                          (__int64)&off_141A54508);
                      }
                      v122 = _mm_loadu_si128((const __m128i *)&v251);
                      v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                      v249 = v122;
                      v247 = 0;
                      sub_140E72AA0(&v251, &v202, &v230, &v249);
                      if ( v251.m256i_i8[0] != -1 )
                        sub_140DF44E0(&v251);
                      nullsub_1(v123);
                      v124 = (__m128i *)sub_140001650(5, 1);
                      if ( !v124 )
                        sub_141938D2B(1, 5);
                      v124->m128i_i8[4] = 108;
                      v124->m128i_i32[0] = 1701080941;
                      v230 = 5;
                      v233 = v124;
                      v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v124;
                      v232 = 5;
                      v246 = 1;
                      sub_14040F9F0(&v251, a2);
                      if ( v251.m256i_i8[0] == -1 )
                      {
                        v249.m128i_i64[0] = v251.m256i_i64[1];
                        sub_141939040(
                          (unsigned int)aCalledResultUn_16,
                          43,
                          (unsigned int)&v249,
                          (unsigned int)&off_141A52FE8,
                          (__int64)&off_141A54508);
                      }
                      v125 = _mm_loadu_si128((const __m128i *)&v251);
                      v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                      v249 = v125;
                      v246 = 0;
                      sub_140E72AA0(&v251, &v202, &v230, &v249);
                      if ( v251.m256i_i8[0] != -1 )
                        sub_140DF44E0(&v251);
                      nullsub_1(v126);
                      v127 = (_DWORD *)sub_140001650(7, 1);
                      if ( !v127 )
                        sub_141938D2B(1, 7);
                      *(_DWORD *)((char *)v127 + 3) = 1936024425;
                      *v127 = 1768908899;
                      v185 = 7;
                      v211 = v127;
                      v186 = v127;
                      v187 = 7;
                      v229 = 1;
                      v233 = (const __m128i *)sub_1402BD6F0(v128);
                      *(_QWORD *)&v200 = 0;
                      v201 = 0;
                      nullsub_1(v129);
                      v130 = sub_140001650(5, 1);
                      if ( !v130 )
                        sub_141938D2B(1, 5);
                      *(_BYTE *)(v130 + 4) = 120;
                      *(_DWORD *)v130 = 1701080681;
                      v230 = 5;
                      v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v130;
                      v232 = 5;
                      v251.m256i_i8[0] = 2;
                      *(_OWORD *)&v251.m256i_u64[1] = 0;
                      sub_140E72AA0(&v249, &v200, &v230, &v251);
                      if ( v249.m128i_i8[0] != -1 )
                        sub_140DF44E0(&v249);
                      nullsub_1(v131);
                      v132 = sub_140001650(5, 1);
                      if ( !v132 )
                        sub_141938D2B(1, 5);
                      *(_BYTE *)(v132 + 4) = 97;
                      *(_DWORD *)v132 = 1953260900;
                      v188 = 5;
                      v219 = (_BYTE *)v132;
                      v189 = v132;
                      v190 = 5;
                      v207.m128i_i64[0] = 0;
                      v208 = 0;
                      nullsub_1(v133);
                      v134 = (void *)sub_140001650(10, 1);
                      if ( !v134 )
                        sub_141938D2B(1, 10);
                      qmemcpy(v134, "tool_calls", 10);
                      v194 = 10;
                      v212 = v134;
                      v195 = (__int64)v134;
                      v196 = 10;
                      v228 = 1;
                      v218 = (const __m128i *)sub_1402BD6F0(0x6C61635F6C6F6F74LL);
                      *(_QWORD *)&v209 = 0;
                      v210 = 0;
                      nullsub_1(v135);
                      v136 = sub_140001650(5, 1);
                      if ( !v136 )
                        sub_141938D2B(1, 5);
                      *(_BYTE *)(v136 + 4) = 120;
                      *(_DWORD *)v136 = 1701080681;
                      v230 = 5;
                      v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v136;
                      v232 = 5;
                      v137 = *(unsigned int *)(v114 - 4);
                      v251.m256i_i8[0] = 2;
                      v251.m256i_i64[1] = 0;
                      v251.m256i_i64[2] = v137;
                      sub_140E72AA0(&v249, &v209, &v230, &v251);
                      if ( v249.m128i_i8[0] != -1 )
                        sub_140DF44E0(&v249);
                      nullsub_1(v138);
                      v139 = (_QWORD *)sub_140001650(8, 1);
                      if ( !v139 )
                        sub_141938D2B(1, 8);
                      *v139 = 0x6E6F6974636E7566LL;
                      v191 = 8;
                      v198 = v139;
                      v192 = v139;
                      v193 = 8;
                      v205.m128i_i64[0] = 0;
                      v206 = 0;
                      nullsub_1(0x6E6F6974636E7566LL);
                      v140 = sub_140001650(9, 1);
                      if ( !v140 )
                        sub_141938D2B(1, 9);
                      *(_QWORD *)v140 = 0x746E656D75677261LL;
                      *(_BYTE *)(v140 + 8) = 115;
                      v230 = 9;
                      v199 = v140;
                      v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v140;
                      v232 = 9;
                      v245 = 1;
                      sub_14040FB10(&v251, &v182);
                      if ( v251.m256i_i8[0] == -1 )
                      {
                        v249.m128i_i64[0] = v251.m256i_i64[1];
                        sub_141939040(
                          (unsigned int)aCalledResultUn_16,
                          43,
                          (unsigned int)&v249,
                          (unsigned int)&off_141A52FE8,
                          (__int64)&off_141A54508);
                      }
                      v141 = _mm_loadu_si128((const __m128i *)&v251);
                      v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                      v249 = v141;
                      v245 = 0;
                      sub_140E72AA0(&v251, &v205, &v230, &v249);
                      if ( v251.m256i_i8[0] != -1 )
                        sub_140DF44E0(&v251);
                      *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v205);
                      v251.m256i_i64[3] = v206;
                      v251.m256i_i8[0] = 5;
                      v224 = 0;
                      sub_140E72AA0(&v249, &v209, &v191, &v251);
                      if ( v249.m128i_i8[0] != -1 )
                        sub_140DF44E0(&v249);
                      *(_OWORD *)((char *)&v251.m256i_u32[1] + 3) = v209;
                      *(__int64 *)((char *)&v251.m256i_i64[2] + 7) = v210;
                      v142 = v218;
                      v218->m128i_i8[0] = 5;
                      v143 = _mm_loadu_si128((const __m128i *)&v251);
                      v142[1] = *(const __m128i *)((char *)&v251.m256i_u64[1] + 7);
                      *(__m128i *)((char *)v142 + 1) = v143;
                      v251.m256i_i64[1] = 1;
                      v251.m256i_i64[2] = (__int64)v142;
                      v251.m256i_i64[3] = 1;
                      v251.m256i_i8[0] = 4;
                      v228 = 0;
                      sub_140E72AA0(&v249, &v207, &v194, &v251);
                      if ( v249.m128i_i8[0] != -1 )
                        sub_140DF44E0(&v249);
                      *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v207);
                      v251.m256i_i64[3] = v208;
                      v251.m256i_i8[0] = 5;
                      v223 = 0;
                      sub_140E72AA0(&v249, &v200, &v188, &v251);
                      if ( v249.m128i_i8[0] != -1 )
                        sub_140DF44E0(&v249);
                      nullsub_1(v144);
                      v145 = (void *)sub_140001650(13, 1);
                      if ( !v145 )
                        sub_141938D2B(1, 13);
                      qmemcpy(v145, "finish_reason", 13);
                      v230 = 13;
                      v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v145;
                      v232 = 13;
                      v251.m256i_i8[0] = 0;
                      sub_140E72AA0(&v249, &v200, &v230, &v251);
                      if ( v249.m128i_i8[0] != -1 )
                        sub_140DF44E0(&v249);
                      *(_OWORD *)((char *)&v251.m256i_u32[1] + 3) = v200;
                      *(__int64 *)((char *)&v251.m256i_i64[2] + 7) = v201;
                      v146 = v233;
                      v233->m128i_i8[0] = 5;
                      v147 = _mm_loadu_si128((const __m128i *)&v251);
                      v146[1] = *(const __m128i *)((char *)&v251.m256i_u64[1] + 7);
                      *(__m128i *)((char *)v146 + 1) = v147;
                      v251.m256i_i64[1] = 1;
                      v251.m256i_i64[2] = (__int64)v146;
                      v251.m256i_i64[3] = 1;
                      v251.m256i_i8[0] = 4;
                      v229 = 0;
                      sub_140E72AA0(&v249, &v202, &v185, &v251);
                      if ( v249.m128i_i8[0] != -1 )
                        sub_140DF44E0(&v249);
                      *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v202);
                      v251.m256i_i64[3] = v203;
                      v251.m256i_i8[0] = 5;
                      v230 = (__int64)&v251;
                      v231 = sub_141642FA0;
                      sub_1416ABFD0(&v249, &unk_141A544F8, &v230);
                      v218 = (const __m128i *)v249.m128i_i64[1];
                      v233 = (const __m128i *)v249.m128i_i64[0];
                      v148 = v250.m128i_i64[0];
                      v149 = v217;
                      if ( v250.m128i_i64[0] > (unsigned __int64)(v216 - v217) )
                      {
                        sub_14190D590((unsigned int)&v216, v217, v250.m128i_i32[0], 1, 1);
                        v149 = v217;
                      }
                      else if ( !v250.m128i_i64[0] )
                      {
                        goto LABEL_219;
                      }
                      sub_1418F44E0((__m128i *)(v149 + *((_QWORD *)&v216 + 1)), v218, v148);
LABEL_219:
                      v217 = v148 + v149;
                      if ( v233 )
                        sub_140001660(v218, v233, 1);
LABEL_260:
                      sub_140DF44E0(&v251);
                      goto LABEL_261;
                    }
                  }
                }
              }
              goto LABEL_261;
            }
            if ( !(*(_QWORD *)v102 ^ 0x6C65645F74786574LL | *(unsigned __int16 *)(v102 + 8) ^ 0x6174LL)
              && !*(_BYTE *)(v114 - 8) )
            {
              v150 = sub_1416419F0(aText_12, 4, &v213);
              if ( v150 )
              {
                if ( *(_BYTE *)v150 == 3 )
                {
                  v151 = *(_QWORD *)(v150 + 16);
                  v152 = *(_QWORD *)(v150 + 24);
                  v188 = v151;
                  v189 = v152;
                  if ( v152 )
                  {
                    v207.m128i_i64[0] = 0;
                    v208 = 0;
                    nullsub_1(v151);
                    v153 = (__m128i *)sub_140001650(2, 1);
                    if ( !v153 )
                      sub_141938D2B(1, 2);
                    v153->m128i_i16[0] = 25705;
                    v230 = 2;
                    v233 = v153;
                    v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v153;
                    v232 = 2;
                    v244 = 1;
                    sub_14040F9F0(&v251, &a2[1].m128i_u64[1]);
                    if ( v251.m256i_i8[0] == -1 )
                    {
                      v249.m128i_i64[0] = v251.m256i_i64[1];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v249,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A54520);
                    }
                    v154 = _mm_loadu_si128((const __m128i *)&v251);
                    v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                    v249 = v154;
                    v244 = 0;
                    sub_140E72AA0(&v251, &v207, &v230, &v249);
                    if ( v251.m256i_i8[0] != -1 )
                      sub_140DF44E0(&v251);
                    nullsub_1(v155);
                    v156 = (__m128i *)sub_140001650(6, 1);
                    if ( !v156 )
                      sub_141938D2B(1, 6);
                    v156->m128i_i16[2] = 29795;
                    v156->m128i_i32[0] = 1701470831;
                    v230 = 6;
                    v233 = v156;
                    v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v156;
                    v232 = 6;
                    v243 = 1;
                    sub_14040FB10(&v251, &off_141A544E8);
                    if ( v251.m256i_i8[0] == -1 )
                    {
                      v249.m128i_i64[0] = v251.m256i_i64[1];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v249,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A54520);
                    }
                    v157 = _mm_loadu_si128((const __m128i *)&v251);
                    v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                    v249 = v157;
                    v243 = 0;
                    sub_140E72AA0(&v251, &v207, &v230, &v249);
                    if ( v251.m256i_i8[0] != -1 )
                      sub_140DF44E0(&v251);
                    nullsub_1(v158);
                    v159 = (__m128i *)sub_140001650(5, 1);
                    if ( !v159 )
                      sub_141938D2B(1, 5);
                    v159->m128i_i8[4] = 108;
                    v159->m128i_i32[0] = 1701080941;
                    v230 = 5;
                    v233 = v159;
                    v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v159;
                    v232 = 5;
                    v242 = 1;
                    sub_14040F9F0(&v251, a2);
                    if ( v251.m256i_i8[0] == -1 )
                    {
                      v249.m128i_i64[0] = v251.m256i_i64[1];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v249,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A54520);
                    }
                    v160 = _mm_loadu_si128((const __m128i *)&v251);
                    v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                    v249 = v160;
                    v242 = 0;
                    sub_140E72AA0(&v251, &v207, &v230, &v249);
                    if ( v251.m256i_i8[0] != -1 )
                      sub_140DF44E0(&v251);
                    nullsub_1(v161);
                    v162 = sub_140001650(7, 1);
                    if ( !v162 )
                      sub_141938D2B(1, 7);
                    *(_DWORD *)(v162 + 3) = 1936024425;
                    *(_DWORD *)v162 = 1768908899;
                    v194 = 7;
                    v218 = (const __m128i *)v162;
                    v195 = v162;
                    v196 = 7;
                    v227 = 1;
                    v233 = (const __m128i *)sub_1402BD6F0(v163);
                    *(_QWORD *)&v209 = 0;
                    v210 = 0;
                    nullsub_1(v164);
                    v165 = sub_140001650(5, 1);
                    if ( !v165 )
                      sub_141938D2B(1, 5);
                    *(_BYTE *)(v165 + 4) = 120;
                    *(_DWORD *)v165 = 1701080681;
                    v230 = 5;
                    v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v165;
                    v232 = 5;
                    v251.m256i_i8[0] = 2;
                    *(_OWORD *)&v251.m256i_u64[1] = 0;
                    sub_140E72AA0(&v249, &v209, &v230, &v251);
                    if ( v249.m128i_i8[0] != -1 )
                      sub_140DF44E0(&v249);
                    nullsub_1(v166);
                    v167 = sub_140001650(5, 1);
                    if ( !v167 )
                      sub_141938D2B(1, 5);
                    *(_BYTE *)(v167 + 4) = 97;
                    *(_DWORD *)v167 = 1953260900;
                    v191 = 5;
                    v211 = (_DWORD *)v167;
                    v192 = (_QWORD *)v167;
                    v193 = 5;
                    v205.m128i_i64[0] = 0;
                    v206 = 0;
                    nullsub_1(v168);
                    v169 = (_DWORD *)sub_140001650(7, 1);
                    if ( !v169 )
                      sub_141938D2B(1, 7);
                    *(_DWORD *)((char *)v169 + 3) = 1953391988;
                    *v169 = 1953394531;
                    v230 = 7;
                    v219 = v169;
                    v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v169;
                    v232 = 7;
                    v241 = 1;
                    sub_14040FB10(&v251, &v188);
                    if ( v251.m256i_i8[0] == -1 )
                    {
                      v249.m128i_i64[0] = v251.m256i_i64[1];
                      sub_141939040(
                        (unsigned int)aCalledResultUn_16,
                        43,
                        (unsigned int)&v249,
                        (unsigned int)&off_141A52FE8,
                        (__int64)&off_141A54520);
                    }
                    v170 = _mm_loadu_si128((const __m128i *)&v251);
                    v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
                    v249 = v170;
                    v241 = 0;
                    sub_140E72AA0(&v251, &v205, &v230, &v249);
                    if ( v251.m256i_i8[0] != -1 )
                      sub_140DF44E0(&v251);
                    *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v205);
                    v251.m256i_i64[3] = v206;
                    v251.m256i_i8[0] = 5;
                    v222 = 0;
                    sub_140E72AA0(&v249, &v209, &v191, &v251);
                    if ( v249.m128i_i8[0] != -1 )
                      sub_140DF44E0(&v249);
                    nullsub_1(v171);
                    v172 = (void *)sub_140001650(13, 1);
                    if ( !v172 )
                      sub_141938D2B(1, 13);
                    qmemcpy(v172, "finish_reason", 13);
                    v230 = 13;
                    v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v172;
                    v232 = 13;
                    v251.m256i_i8[0] = 0;
                    sub_140E72AA0(&v249, &v209, &v230, &v251);
                    if ( v249.m128i_i8[0] != -1 )
                      sub_140DF44E0(&v249);
                    *(_OWORD *)((char *)&v251.m256i_u32[1] + 3) = v209;
                    *(__int64 *)((char *)&v251.m256i_i64[2] + 7) = v210;
                    v173 = v233;
                    v233->m128i_i8[0] = 5;
                    v174 = _mm_loadu_si128((const __m128i *)&v251);
                    v173[1] = *(const __m128i *)((char *)&v251.m256i_u64[1] + 7);
                    *(__m128i *)((char *)v173 + 1) = v174;
                    v251.m256i_i64[1] = 1;
                    v251.m256i_i64[2] = (__int64)v173;
                    v251.m256i_i64[3] = 1;
                    v251.m256i_i8[0] = 4;
                    v227 = 0;
                    sub_140E72AA0(&v249, &v207, &v194, &v251);
                    if ( v249.m128i_i8[0] != -1 )
                      sub_140DF44E0(&v249);
                    *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v207);
                    v251.m256i_i64[3] = v208;
                    v251.m256i_i8[0] = 5;
                    v230 = (__int64)&v251;
                    v231 = sub_141642FA0;
                    sub_1416ABFD0(&v249, &unk_141A544F8, &v230);
                    v218 = (const __m128i *)v249.m128i_i64[1];
                    v233 = (const __m128i *)v249.m128i_i64[0];
                    v175 = v250.m128i_i64[0];
                    v176 = v217;
                    if ( v250.m128i_i64[0] > (unsigned __int64)(v216 - v217) )
                    {
                      sub_14190D590((unsigned int)&v216, v217, v250.m128i_i32[0], 1, 1);
                      v176 = v217;
                    }
                    else if ( !v250.m128i_i64[0] )
                    {
                      goto LABEL_258;
                    }
                    sub_1418F44E0((__m128i *)(v176 + *((_QWORD *)&v216 + 1)), v218, v175);
LABEL_258:
                    v217 = v175 + v176;
                    if ( v233 )
                      sub_140001660(v218, v233, 1);
                    goto LABEL_260;
                  }
                }
              }
            }
          }
LABEL_261:
          sub_140DF44E0(&v213);
          break;
        }
        v34 = sub_1416419F0(aIndex_1, 5, a3);
        if ( v34 && *(_BYTE *)v34 == 2 && !*(_QWORD *)(v34 + 8) )
          v35 = *(_QWORD *)(v34 + 16);
        else
          v35 = 0;
        v36 = sub_1416419F0(aContentBlock_0, 13, a3);
        if ( v36 )
        {
          v37 = *(_BYTE *)v36;
          switch ( *(_BYTE *)v36 )
          {
            case 0:
              break;
            case 1:
              v251.m256i_i8[1] = *(_BYTE *)(v36 + 1);
              break;
            case 2:
              *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(v36 + 8));
              break;
            case 3:
              sub_1416AC440(&v251.m256i_u64[1], v36 + 8);
              break;
            case 4:
              sub_1403918C0(&v251.m256i_u64[1], *(_QWORD *)(v36 + 16), *(_QWORD *)(v36 + 24));
              break;
            case 5:
              if ( *(_QWORD *)(v36 + 24) )
              {
                v38 = *(_QWORD *)(v36 + 8);
                if ( !v38 )
                  sub_141939020(&off_141A54900);
                sub_140E11B90(&v249, v38, *(_QWORD *)(v36 + 16));
              }
              else
              {
                v249.m128i_i64[0] = 0;
                v250.m128i_i64[0] = 0;
              }
              v251.m256i_i64[1] = v249.m128i_i64[0];
              *(_OWORD *)&v251.m256i_u64[2] = __PAIR128__(v250.m128i_u64[0], v249.m128i_u64[1]);
              break;
          }
          v215 = *(__m128i *)&v251.m256i_u64[2];
          v213 = v37;
          v214[0] = v251.m256i_i8[1];
          *(_DWORD *)&v214[1] = *(__int32 *)((char *)v251.m256i_i32 + 2);
          *(_WORD *)&v214[5] = v251.m256i_i16[3];
          *(_QWORD *)&v214[7] = v251.m256i_i64[1];
          v251.m256i_i8[0] = 0;
          sub_140DF44E0(&v251);
        }
        else
        {
          v251.m256i_i8[0] = 0;
          v215 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
          v213 = 0;
          *(_QWORD *)v214 = *(__int64 *)((char *)v251.m256i_i64 + 1);
          *(_DWORD *)&v214[8] = *(__int32 *)((char *)&v251.m256i_i32[2] + 1);
          *(_WORD *)&v214[12] = *(__int16 *)((char *)&v251.m256i_i16[6] + 1);
          v214[14] = v251.m256i_i8[15];
        }
        v40 = sub_1416419F0(aType_11, 4, &v213);
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
        sub_140E694D0((__int64)a2, &v216);
        if ( v42 != 8 )
        {
          if ( v42 == 4 && *(_DWORD *)v41 == 1954047348 )
            sub_1403ADCE0((__int64)a2[3].m128i_i64, v35, 0, v43);
          goto LABEL_261;
        }
        if ( *(_QWORD *)v41 != 0x6573755F6C6F6F74LL )
          goto LABEL_261;
        v233 = (const __m128i *)a2[6].m128i_u32[0];
        a2[6].m128i_i32[0] = (_DWORD)v233 + 1;
        v44 = sub_1416419F0(aId_8, 2, &v213);
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
        sub_14072C410((unsigned int)&v251, v46, 0, 1, 1);
        v47 = (const __m128i *)v251.m256i_i64[1];
        if ( v251.m256i_i32[0] == 1 )
          sub_141938D2B(v251.m256i_i64[1], v251.m256i_i64[2]);
        v48 = v251.m256i_i64[2];
        if ( v46 )
          sub_1418F44E0((__m128i *)v251.m256i_i64[2], (const __m128i *)v45, v46);
        v218 = v47;
        v181[0] = (__int64)v47;
        v198 = (_QWORD *)v48;
        v181[1] = v48;
        v181[2] = v46;
        v49 = sub_1416419F0(aName_9, 4, &v213);
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
        sub_14072C410((unsigned int)&v251, v51, 0, 1, 1);
        v53 = v251.m256i_i64[1];
        if ( v251.m256i_i32[0] == 1 )
          sub_141938D2B(v251.m256i_i64[1], v251.m256i_i64[2]);
        v54 = v251.m256i_i64[2];
        if ( v51 )
          sub_1418F44E0((__m128i *)v251.m256i_i64[2], (const __m128i *)v50, v51);
        v211 = (_DWORD *)v53;
        v182 = v53;
        v199 = v54;
        v183 = v54;
        v184 = v51;
        v202.m128i_i64[0] = 0;
        v203 = 0;
        nullsub_1(v52);
        v55 = (_WORD *)sub_140001650(2, 1);
        if ( !v55 )
          sub_141938D2B(1, 2);
        *v55 = 25705;
        v230 = 2;
        v219 = v55;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v55;
        v232 = 2;
        v240 = 1;
        sub_14040F9F0(&v251, &a2[1].m128i_u64[1]);
        if ( v251.m256i_i8[0] == -1 )
        {
          v249.m128i_i64[0] = v251.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v249,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54538);
        }
        v56 = _mm_loadu_si128((const __m128i *)&v251);
        v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
        v249 = v56;
        v240 = 0;
        sub_140E72AA0(&v251, &v202, &v230, &v249);
        if ( v251.m256i_i8[0] != -1 )
          sub_140DF44E0(&v251);
        nullsub_1(v57);
        v58 = sub_140001650(6, 1);
        if ( !v58 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v58 + 4) = 29795;
        *(_DWORD *)v58 = 1701470831;
        v230 = 6;
        v219 = (_BYTE *)v58;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v58;
        v232 = 6;
        v239 = 1;
        sub_14040FB10(&v251, &off_141A544E8);
        if ( v251.m256i_i8[0] == -1 )
        {
          v249.m128i_i64[0] = v251.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v249,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54538);
        }
        v59 = _mm_loadu_si128((const __m128i *)&v251);
        v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
        v249 = v59;
        v239 = 0;
        sub_140E72AA0(&v251, &v202, &v230, &v249);
        if ( v251.m256i_i8[0] != -1 )
          sub_140DF44E0(&v251);
        nullsub_1(v60);
        v61 = sub_140001650(5, 1);
        if ( !v61 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v61 + 4) = 108;
        *(_DWORD *)v61 = 1701080941;
        v230 = 5;
        v219 = (_BYTE *)v61;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v61;
        v232 = 5;
        v238 = 1;
        sub_14040F9F0(&v251, a2);
        if ( v251.m256i_i8[0] == -1 )
        {
          v249.m128i_i64[0] = v251.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v249,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54538);
        }
        v62 = _mm_loadu_si128((const __m128i *)&v251);
        v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
        v249 = v62;
        v238 = 0;
        sub_140E72AA0(&v251, &v202, &v230, &v249);
        if ( v251.m256i_i8[0] != -1 )
          sub_140DF44E0(&v251);
        nullsub_1(v63);
        v64 = (_DWORD *)sub_140001650(7, 1);
        if ( !v64 )
          sub_141938D2B(1, 7);
        *(_DWORD *)((char *)v64 + 3) = 1936024425;
        *v64 = 1768908899;
        v185 = 7;
        v181[3] = (__int64)v64;
        v186 = v64;
        v187 = 7;
        nullsub_1(v65);
        v66 = sub_140001650(32, 8);
        if ( !v66 )
        {
          v226 = 1;
          sub_141938D11(8, 32);
        }
        v219 = (_BYTE *)v66;
        *(_QWORD *)&v200 = 0;
        v201 = 0;
        nullsub_1(v67);
        v68 = sub_140001650(5, 1);
        if ( !v68 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v68 + 4) = 120;
        *(_DWORD *)v68 = 1701080681;
        v230 = 5;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v68;
        v232 = 5;
        v251.m256i_i8[0] = 2;
        *(_OWORD *)&v251.m256i_u64[1] = 0;
        sub_140E72AA0(&v249, &v200, &v230, &v251);
        if ( v249.m128i_i8[0] != -1 )
          sub_140DF44E0(&v249);
        nullsub_1(v69);
        v70 = sub_140001650(5, 1);
        if ( !v70 )
          sub_141938D2B(1, 5);
        v72 = v70;
        *(_BYTE *)(v70 + 4) = 97;
        *(_DWORD *)v70 = 1953260900;
        v188 = 5;
        v189 = v70;
        v190 = 5;
        v207.m128i_i64[0] = 0;
        v208 = 0;
        nullsub_1(v71);
        v73 = (void *)sub_140001650(10, 1);
        v181[4] = v72;
        if ( !v73 )
          sub_141938D2B(1, 10);
        v75 = (__int64)v73;
        qmemcpy(v73, "tool_calls", 10);
        v194 = 10;
        v195 = (__int64)v73;
        v196 = 10;
        nullsub_1(v74);
        v76 = sub_140001650(32, 8);
        v181[5] = v75;
        if ( !v76 )
        {
          v225 = 1;
          sub_141938D11(8, 32);
        }
        v212 = (_BYTE *)v76;
        *(_QWORD *)&v209 = 0;
        v210 = 0;
        nullsub_1(v77);
        v78 = sub_140001650(5, 1);
        if ( !v78 )
          sub_141938D2B(1, 5);
        *(_BYTE *)(v78 + 4) = 120;
        *(_DWORD *)v78 = 1701080681;
        v230 = 5;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v78;
        v232 = 5;
        v251.m256i_i8[0] = 2;
        v251.m256i_i64[1] = 0;
        v251.m256i_i64[2] = (__int64)v233;
        sub_140E72AA0(&v249, &v209, &v230, &v251);
        if ( v249.m128i_i8[0] != -1 )
          sub_140DF44E0(&v249);
        nullsub_1(v79);
        v80 = (_WORD *)sub_140001650(2, 1);
        if ( !v80 )
          sub_141938D2B(1, 2);
        *v80 = 25705;
        v230 = 2;
        v204 = v80;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v80;
        v232 = 2;
        v237 = 1;
        sub_14040F9F0(&v251, v181);
        if ( v251.m256i_i8[0] == -1 )
        {
          v249.m128i_i64[0] = v251.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v249,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54538);
        }
        v81 = _mm_loadu_si128((const __m128i *)&v251);
        v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
        v249 = v81;
        v237 = 0;
        sub_140E72AA0(&v251, &v209, &v230, &v249);
        if ( v251.m256i_i8[0] != -1 )
          sub_140DF44E0(&v251);
        nullsub_1(v82);
        v83 = (_DWORD *)sub_140001650(4, 1);
        if ( !v83 )
          sub_141938D2B(1, 4);
        *v83 = 1701869940;
        v230 = 4;
        v204 = v83;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v83;
        v232 = 4;
        v236 = 1;
        sub_14040FB10(&v251, &off_141A54550);
        if ( v251.m256i_i8[0] == -1 )
        {
          v249.m128i_i64[0] = v251.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v249,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54538);
        }
        v84 = _mm_loadu_si128((const __m128i *)&v251);
        v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
        v249 = v84;
        v236 = 0;
        sub_140E72AA0(&v251, &v209, &v230, &v249);
        if ( v251.m256i_i8[0] != -1 )
          sub_140DF44E0(&v251);
        nullsub_1(v85);
        v86 = (_QWORD *)sub_140001650(8, 1);
        if ( !v86 )
          sub_141938D2B(1, 8);
        *v86 = 0x6E6F6974636E7566LL;
        v191 = 8;
        v204 = v86;
        v192 = v86;
        v193 = 8;
        v205.m128i_i64[0] = 0;
        v206 = 0;
        nullsub_1(0x6E6F6974636E7566LL);
        v87 = (_DWORD *)sub_140001650(4, 1);
        if ( !v87 )
          sub_141938D2B(1, 4);
        *v87 = 1701667182;
        v230 = 4;
        v197 = v87;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v87;
        v232 = 4;
        v235 = 1;
        sub_14040F9F0(&v251, &v182);
        if ( v251.m256i_i8[0] == -1 )
        {
          v249.m128i_i64[0] = v251.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v249,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54538);
        }
        v88 = _mm_loadu_si128((const __m128i *)&v251);
        v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
        v249 = v88;
        v235 = 0;
        sub_140E72AA0(&v251, &v205, &v230, &v249);
        if ( v251.m256i_i8[0] != -1 )
          sub_140DF44E0(&v251);
        nullsub_1(v89);
        v90 = sub_140001650(9, 1);
        if ( !v90 )
          sub_141938D2B(1, 9);
        *(_QWORD *)v90 = 0x746E656D75677261LL;
        *(_BYTE *)(v90 + 8) = 115;
        v230 = 9;
        v197 = (_DWORD *)v90;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v90;
        v232 = 9;
        v234 = 1;
        sub_14040FB10(&v251, &unk_141A52EE0);
        if ( v251.m256i_i8[0] == -1 )
        {
          v249.m128i_i64[0] = v251.m256i_i64[1];
          sub_141939040(
            (unsigned int)aCalledResultUn_16,
            43,
            (unsigned int)&v249,
            (unsigned int)&off_141A52FE8,
            (__int64)&off_141A54538);
        }
        v91 = _mm_loadu_si128((const __m128i *)&v251);
        v250 = _mm_loadu_si128((const __m128i *)&v251.m256i_u64[2]);
        v249 = v91;
        v234 = 0;
        sub_140E72AA0(&v251, &v205, &v230, &v249);
        if ( v251.m256i_i8[0] != -1 )
          sub_140DF44E0(&v251);
        *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v205);
        v251.m256i_i64[3] = v206;
        v251.m256i_i8[0] = 5;
        v221 = 0;
        sub_140E72AA0(&v249, &v209, &v191, &v251);
        if ( v249.m128i_i8[0] != -1 )
          sub_140DF44E0(&v249);
        *(_OWORD *)((char *)&v251.m256i_u32[1] + 3) = v209;
        *(__int64 *)((char *)&v251.m256i_i64[2] + 7) = v210;
        v92 = (__int64)v212;
        *v212 = 5;
        v93 = _mm_loadu_si128((const __m128i *)&v251);
        *(_OWORD *)(v92 + 16) = *(_OWORD *)((char *)&v251.m256i_u64[1] + 7);
        *(__m128i *)(v92 + 1) = v93;
        v251.m256i_i64[1] = 1;
        v251.m256i_i64[2] = v92;
        v251.m256i_i64[3] = 1;
        v251.m256i_i8[0] = 4;
        v225 = 0;
        sub_140E72AA0(&v249, &v207, &v194, &v251);
        if ( v249.m128i_i8[0] != -1 )
          sub_140DF44E0(&v249);
        *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v207);
        v251.m256i_i64[3] = v208;
        v251.m256i_i8[0] = 5;
        v220 = 0;
        sub_140E72AA0(&v249, &v200, &v188, &v251);
        if ( v249.m128i_i8[0] != -1 )
          sub_140DF44E0(&v249);
        nullsub_1(v94);
        v95 = (void *)sub_140001650(13, 1);
        if ( !v95 )
          sub_141938D2B(1, 13);
        qmemcpy(v95, "finish_reason", 13);
        v230 = 13;
        v231 = (__int64 (__fastcall *)(_QWORD, _QWORD))v95;
        v232 = 13;
        v251.m256i_i8[0] = 0;
        sub_140E72AA0(&v249, &v200, &v230, &v251);
        if ( v249.m128i_i8[0] != -1 )
          sub_140DF44E0(&v249);
        *(_OWORD *)((char *)&v251.m256i_u32[1] + 3) = v200;
        *(__int64 *)((char *)&v251.m256i_i64[2] + 7) = v201;
        v96 = (__int64)v219;
        *v219 = 5;
        v97 = _mm_loadu_si128((const __m128i *)&v251);
        *(_OWORD *)(v96 + 16) = *(_OWORD *)((char *)&v251.m256i_u64[1] + 7);
        *(__m128i *)(v96 + 1) = v97;
        v251.m256i_i64[1] = 1;
        v251.m256i_i64[2] = v96;
        v251.m256i_i64[3] = 1;
        v251.m256i_i8[0] = 4;
        v226 = 0;
        sub_140E72AA0(&v249, &v202, &v185, &v251);
        if ( v249.m128i_i8[0] != -1 )
          sub_140DF44E0(&v249);
        *(__m128i *)&v251.m256i_u64[1] = _mm_loadu_si128(&v202);
        v251.m256i_i64[3] = v203;
        v251.m256i_i8[0] = 5;
        v230 = (__int64)&v251;
        v231 = sub_141642FA0;
        sub_1416ABFD0(&v249, &unk_141A544F8, &v230);
        v98 = (unsigned __int128)v249;
        v99 = v250.m128i_i64[0];
        v100 = v217;
        if ( v250.m128i_i64[0] > (unsigned __int64)(v216 - v217) )
        {
          v212 = (_BYTE *)v249.m128i_i64[1];
          v219 = (_BYTE *)v249.m128i_i64[0];
          sub_14190D590((unsigned int)&v216, v217, v250.m128i_i32[0], 1, 1);
          v100 = v217;
          v98 = __PAIR128__((unsigned __int64)v212, (unsigned __int64)v219);
        }
        else if ( !v250.m128i_i64[0] )
        {
LABEL_151:
          v217 = v99 + v100;
          if ( (_QWORD)v98 )
            sub_140001660(*((_QWORD *)&v98 + 1), v98, 1);
          sub_1403ADCE0((__int64)a2[3].m128i_i64, v35, 1, (__int32)v233);
          sub_140DF44E0(&v251);
          if ( v211 )
            sub_140001660(v199, v211, 1);
          if ( v218 )
            sub_140001660(v198, v218, 1);
          goto LABEL_261;
        }
        sub_1418F44E0((__m128i *)(v100 + *((_QWORD *)&v216 + 1)), *((const __m128i **)&v98 + 1), v99);
        goto LABEL_151;
      default:
        break;
    }
  }
  result = v217;
  *(_QWORD *)(a1 + 16) = v217;
  *(_OWORD *)a1 = v216;
  return result;
}
