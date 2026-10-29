// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f58a10 | name sub_140F58A10
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F58A10(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  char v13; // al
  __int64 v14; // r8
  void *v15; // rdx
  void (__fastcall *v16)(_BYTE *, __int64); // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __m128i *v25; // rdi
  _OWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // r15
  __m128i v35; // xmm0
  __m128i si128; // xmm1
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __m128i *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rsi
  __m128i *v50; // rcx
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int32 v55; // ebx
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rdi
  __m128i *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rdi
  __int64 v66; // rax
  __m128i v67; // xmm0
  _BYTE *v68; // r14
  __int64 v69; // rax
  __int128 v70; // xmm0
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  __int64 v73; // rax
  __int64 v74; // rcx
  __m128i *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  _OWORD *v80; // rax
  __m128i v81; // xmm0
  __int64 v82; // rbx
  __int64 v83; // rax
  __m128i v84; // xmm1
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rbx
  __int64 v90; // rcx
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  __m128i v93; // xmm0
  __m128i v94; // xmm1
  _BYTE *v95; // rdi
  __int64 v96; // r13
  const char *v97; // r14
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rcx
  _QWORD *v104; // rdi
  void *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rcx
  _QWORD *v109; // rdi
  _OWORD *v110; // rax
  __m128i v111; // xmm0
  __int64 v112; // rax
  __int64 v113; // rcx
  __m128i *v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  __m128i *v119; // rsi
  _OWORD *v120; // rax
  __m128i v121; // xmm0
  __m128i v122; // xmm1
  __int128 v123; // xmm2
  __int64 v124; // rax
  __int128 v125; // xmm0
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __int64 v128; // rax
  __int64 v129; // rcx
  __m128i *v130; // rsi
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  _OWORD *v135; // rax
  __m128i v136; // xmm0
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // edx
  int v141; // ecx
  unsigned int v142; // ecx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rcx
  __m128i *v148; // rbx
  __m128i *v149; // rax
  __int64 v150; // rdi
  __m128i *v151; // rcx
  __m128i v152; // xmm0
  __int64 v153; // r8
  __int64 v154; // rax
  __int64 v155; // rcx
  __m128i v156; // xmm0
  __m128i v157; // xmm1
  __int128 v158; // xmm2
  __m128i v159; // xmm0
  __m128i v160; // xmm1
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 *v163; // rdi
  __m128i *v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rcx
  __int64 *v168; // rdi
  __int64 v169; // rax
  __m128i v170; // xmm0
  __int64 v171; // rax
  __int64 v172; // rcx
  __m128i *v173; // rdi
  __m128i *v174; // rax
  __int64 v175; // rax
  __int64 v176; // rcx
  __m128i *v177; // rdi
  __int64 v178; // rax
  __m128i v179; // xmm0
  __int64 v180; // rcx
  __int64 v181; // rdx
  __int64 v182; // r8
  __int64 v183; // rax
  __int64 v184; // rcx
  __m128i *v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rcx
  __m128i *v190; // rsi
  _QWORD *v191; // rax
  __m128i v192; // xmm0
  __int64 v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rdi
  __int64 v196; // rax
  __int64 v197; // rcx
  __m128i *v198; // rdi
  __int64 v199; // rax
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // r9
  __int64 v203; // rcx
  _QWORD *v204; // r10
  __int64 v205; // r8
  __int64 v206; // rax
  __int64 v207; // rdi
  __int32 v208; // edx
  __int64 v209; // rax
  __int64 v210; // r13
  __int64 i; // r12
  unsigned __int64 v212; // r15
  __int64 v213; // rdi
  __int64 v214; // rax
  __int64 v215; // rdx
  const char *v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rdx
  __int64 v219; // rax
  __m512i *v220; // r14
  __int64 *v221; // rax
  __int64 v222; // r13
  __int64 v223; // rdi
  __int64 v224; // r12
  __m512i *v225; // r15
  __int64 v226; // r14
  __int64 v227; // rax
  __int64 v228; // rcx
  __int64 v229; // rdi
  __int64 v230; // rbx
  __int64 v231; // rcx
  __int64 v232; // rax
  __int64 v233; // rcx
  __m128i *v234; // rsi
  __int64 v235; // rax
  __int64 v236; // rcx
  __int64 v237; // rsi
  __m128i *v238; // rdx
  __m128i v239; // xmm0
  __int64 v240; // rcx
  __int64 v241; // rax
  __int64 v242; // rcx
  __m128i *v243; // rdi
  __m128i *v244; // rax
  __m128i *v245; // rcx
  __m128i v246; // xmm0
  __int64 v247; // rax
  __int64 v248; // rcx
  __m128i *v249; // rcx
  __m128i v250; // xmm0
  __int64 v251; // rdx
  _BYTE *v252; // rax
  __int64 v253; // rcx
  __int64 v254; // rax
  __int64 v255; // rcx
  __m128i *v256; // rdx
  __m128i v257; // xmm0
  __int64 v258; // rcx
  __m128i *v259; // rcx
  __int64 v260; // rcx
  void *v261; // rax
  __m128i *v262; // rdx
  __int64 v263; // rcx
  __m128i *v264; // rax
  __int64 v265; // rcx
  __m128i *v266; // rdx
  __m128i v267; // xmm0
  __int64 v268; // [rsp+30h] [rbp-50h] BYREF
  __int64 v269; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v270[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v271; // [rsp+50h] [rbp-30h]
  __int64 v272; // [rsp+58h] [rbp-28h]
  __int64 v273; // [rsp+60h] [rbp-20h]
  __int64 v274; // [rsp+68h] [rbp-18h]
  __int64 v275; // [rsp+70h] [rbp-10h]
  __int64 *v276; // [rsp+78h] [rbp-8h]
  __m128i v277; // [rsp+80h] [rbp+0h] BYREF
  __int64 v278; // [rsp+90h] [rbp+10h]
  __m128i v279; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v280; // [rsp+B0h] [rbp+30h]
  __int64 v281; // [rsp+B8h] [rbp+38h]
  __int64 v282; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v283; // [rsp+C8h] [rbp+48h]
  __int64 v284; // [rsp+D0h] [rbp+50h]
  __int64 v285; // [rsp+D8h] [rbp+58h]
  __m128i v286; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v287; // [rsp+F0h] [rbp+70h]
  __int64 v288; // [rsp+F8h] [rbp+78h]
  __int64 *v289; // [rsp+100h] [rbp+80h]
  __int64 *v290; // [rsp+108h] [rbp+88h]
  __m256i v291; // [rsp+110h] [rbp+90h] BYREF
  __int128 v292; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v293; // [rsp+140h] [rbp+C0h]
  __int16 v294; // [rsp+148h] [rbp+C8h]
  char v295; // [rsp+14Ah] [rbp+CAh]
  const char *v296; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v297; // [rsp+160h] [rbp+E0h]
  const char *v298; // [rsp+168h] [rbp+E8h]
  __m128i v299; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v300; // [rsp+180h] [rbp+100h]
  __int64 (__fastcall *v301)(_QWORD, _QWORD); // [rsp+188h] [rbp+108h]
  __m128i v302; // [rsp+190h] [rbp+110h] BYREF
  __m256i v303; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v304; // [rsp+1C0h] [rbp+140h]
  __m128i v305; // [rsp+1D0h] [rbp+150h] BYREF
  _BYTE v306[24]; // [rsp+1E0h] [rbp+160h]
  __m512i v307; // [rsp+200h] [rbp+180h] BYREF
  __m128i v308; // [rsp+240h] [rbp+1C0h] BYREF
  __m128i v309; // [rsp+250h] [rbp+1D0h] BYREF
  _BYTE v310[48]; // [rsp+260h] [rbp+1E0h] BYREF
  __m128i v311[2]; // [rsp+290h] [rbp+210h] BYREF
  _QWORD *v312; // [rsp+2B8h] [rbp+238h]
  __int64 v313; // [rsp+2C0h] [rbp+240h]
  char v314; // [rsp+2CEh] [rbp+24Eh]
  char v315; // [rsp+2CFh] [rbp+24Fh]
  _BYTE v316[96]; // [rsp+2D0h] [rbp+250h] BYREF
  char v317; // [rsp+343h] [rbp+2C3h]
  char v318; // [rsp+344h] [rbp+2C4h]
  char v319; // [rsp+345h] [rbp+2C5h]
  char v320; // [rsp+346h] [rbp+2C6h]
  char v321; // [rsp+347h] [rbp+2C7h]
  __m128i *v322; // [rsp+348h] [rbp+2C8h]
  __int64 v323; // [rsp+350h] [rbp+2D0h]

  v323 = -2;
  v270[0] = a4;
  v270[1] = a5;
  v13 = sub_140F10310(a4, a5);
  if ( a8 || (v13 & 1) == 0 )
  {
    switch ( a5 )
    {
      case 12LL:
        if ( *(_QWORD *)a4 ^ 0x735F6769666E6F63LL | *(unsigned int *)(a4 + 8) ^ 0x656C6174LL )
          goto LABEL_79;
        sub_140F03750(a1, (_DWORD)a2, a3, a6, *(_QWORD *)(a7 + 40));
        return a1;
      case 14LL:
        if ( !(*(_QWORD *)a4 ^ 0x746E695F68747561LL | *(_QWORD *)(a4 + 6) ^ 0x797469726765746ELL) )
        {
          sub_140F04FE0(a1, a2, *(unsigned __int8 *)(a3 + 364));
          return a1;
        }
        if ( *(_QWORD *)a4 ^ 0x6C61756469736572LL | *(_QWORD *)(a4 + 6) ^ 0x65686361635F6C61LL )
          goto LABEL_79;
        sub_1416828D0((unsigned int)v316, a2[97], a2[98], (unsigned int)&unk_141A5C5AC, 24);
        v322 = *(__m128i **)&v316[8];
        sub_1416828D0((unsigned int)&v309, *(_DWORD *)&v316[8], *(_DWORD *)&v316[16], (unsigned int)&unk_141A5C5C4, 22);
        if ( *(_QWORD *)v316 )
          sub_140001660(v322, *(_QWORD *)v316, 1);
        v52 = *(_QWORD *)v310;
        v322 = (__m128i *)v309.m128i_i64[1];
        sub_141695A00(v316, v309.m128i_i64[1], *(_QWORD *)v310);
        if ( *(_DWORD *)v316 == 2 )
        {
          v53 = v316[8] & 3;
          if ( (unsigned int)(v53 - 2) >= 2 && (v316[8] & 3) != 0 )
          {
            --*(_QWORD *)&v316[8];
            v316[0] = 3;
            sub_1416BCB00(&v316[8]);
          }
        }
        else
        {
          v100 = sub_141695140(v322, v52);
          if ( v100 )
          {
            *(_QWORD *)a1 = 2;
            *(_QWORD *)(a1 + 8) = v100;
            v101 = v309.m128i_i64[0];
            goto LABEL_188;
          }
        }
        nullsub_1(v53);
        v102 = sub_140001650(24, 8);
        if ( !v102 )
          sub_141938D11(8, 24);
        v104 = (_QWORD *)v102;
        nullsub_1(v103);
        v105 = (void *)sub_140001650(14, 1);
        if ( !v105 )
        {
          v313 = (__int64)v104;
          sub_141938D2B(1, 14);
        }
        qmemcpy(v105, "residual_cache", 14);
        *v104 = 14;
        v104[1] = v105;
        v104[2] = 14;
        v291.m256i_i64[0] = 1;
        v291.m256i_i64[1] = (__int64)v104;
        v291.m256i_i64[2] = 1;
        v307.m512i_i64[0] = 0;
        *(_OWORD *)&v307.m512i_u64[1] = 8u;
        nullsub_1(v106);
        v107 = sub_140001650(24, 8);
        if ( !v107 )
          sub_141938D11(8, 24);
        v109 = (_QWORD *)v107;
        nullsub_1(v108);
        v110 = (_OWORD *)sub_140001650(27, 1);
        if ( !v110 )
        {
          v313 = (__int64)v109;
          sub_141938D2B(1, 27);
        }
        *(_OWORD *)((char *)v110 + 11) = *(__int128 *)((char *)&xmmword_141A5C5E8 + 11);
        *v110 = xmmword_141A5C5E8;
        *v109 = 27;
        v109[1] = v110;
        v109[2] = 27;
        *(_QWORD *)&v316[16] = v291.m256i_i64[2];
        v111 = _mm_loadu_si128((const __m128i *)&v291);
        *(__m128i *)v316 = v111;
        *(_QWORD *)&v316[40] = v307.m512i_i64[2];
        *(__m128i *)&v316[24] = _mm_loadu_si128((const __m128i *)&v307);
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
        *(__m128i *)(a1 + 8) = v111;
        *(_QWORD *)(a1 + 56) = 1;
        *(_QWORD *)(a1 + 64) = v109;
        *(_QWORD *)(a1 + 72) = 1;
        *(_QWORD *)a1 = -1;
        v101 = v309.m128i_i64[0];
        goto LABEL_188;
      case 17LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_141A091E0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A557D0))) == 0xFFFF )
        {
          sub_1416828D0((unsigned int)&v302, a2[97], a2[98], (unsigned int)&unk_141A5C5AC, 24);
          v55 = v303.m256i_i32[0];
          v322 = (__m128i *)v302.m128i_i64[1];
          sub_1416828D0((unsigned int)&v291, v302.m128i_i32[2], v303.m256i_i32[0], (unsigned int)&unk_141A5CB1B, 12);
          v56 = v291.m256i_i64[2];
          v313 = v291.m256i_i64[1];
          sub_141695A00(v316, v291.m256i_i64[1], v291.m256i_i64[2]);
          if ( *(_DWORD *)v316 == 2 )
          {
            v57 = v316[8] & 3;
            if ( (unsigned int)(v57 - 2) >= 2 && (v316[8] & 3) != 0 )
            {
              --*(_QWORD *)&v316[8];
              v316[0] = 3;
              sub_1416BCB00(&v316[8]);
            }
            nullsub_1(v57);
            v58 = sub_140001650(24, 8);
            if ( !v58 )
              sub_141938D11(8, 24);
            v60 = (_QWORD *)v58;
            nullsub_1(v59);
            v61 = (__m128i *)sub_140001650(17, 1);
            if ( !v61 )
            {
              v312 = v60;
              sub_141938D2B(1, 17);
            }
            *v61 = _mm_loadu_si128((const __m128i *)aResidualManife);
            v61[1].m128i_i8[0] = 116;
            *v60 = 17;
            v60[1] = v61;
            v60[2] = 17;
            v307.m512i_i64[0] = 1;
            v307.m512i_i64[1] = (__int64)v60;
            v307.m512i_i64[2] = 1;
            v309.m128i_i64[0] = 0;
            v309.m128i_i64[1] = 8;
            *(_QWORD *)v310 = 0;
            nullsub_1(v62);
            v63 = sub_140001650(24, 8);
            if ( !v63 )
              sub_141938D11(8, 24);
            v65 = (_QWORD *)v63;
            nullsub_1(v64);
            v66 = sub_140001650(33, 1);
            if ( !v66 )
            {
              v312 = v65;
              sub_141938D2B(1, 33);
            }
            *(_OWORD *)(v66 + 16) = xmmword_141A5CB48;
            *(_OWORD *)v66 = xmmword_141A5CB38;
            *(_BYTE *)(v66 + 32) = -122;
            *v65 = 33;
            v65[1] = v66;
            v65[2] = 33;
            *(_QWORD *)&v316[16] = v307.m512i_i64[2];
            v67 = _mm_loadu_si128((const __m128i *)&v307);
            *(__m128i *)v316 = v67;
            *(_QWORD *)&v316[40] = *(_QWORD *)v310;
            *(__m128i *)&v316[24] = _mm_loadu_si128(&v309);
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
            *(__m128i *)(a1 + 8) = v67;
            *(_QWORD *)(a1 + 56) = 1;
            *(_QWORD *)(a1 + 64) = v65;
            *(_QWORD *)(a1 + 72) = 1;
            *(_QWORD *)a1 = -1;
          }
          else
          {
            sub_1416828D0((unsigned int)&v307, (_DWORD)v322, v55, (unsigned int)&unk_141A5CB59, 7);
            v316[0] = 1;
            v82 = v307.m512i_i64[2];
            v312 = (_QWORD *)v307.m512i_i64[1];
            v83 = sub_14168A790(v316, v307.m512i_i64[1], v307.m512i_i64[2]);
            if ( v83 )
            {
              *(_QWORD *)a1 = 2;
              *(_QWORD *)(a1 + 8) = v83;
            }
            else
            {
              sub_141406CE0(v316);
              v140 = (*(int *)v316 >> 13) - 1;
              v141 = 0;
              if ( *(int *)v316 >> 13 <= 0 )
              {
                v142 = (1 - (*(int *)v316 >> 13)) / 0x190u + 1;
                v140 += 400 * v142;
                v141 = -146097 * v142;
              }
              v277.m128i_i64[0] = 1000
                                * (*(unsigned int *)&v316[4]
                                 + 86400LL
                                 * (((v140 / 100) >> 2)
                                  + ((1461 * v140) >> 2)
                                  + v141
                                  + ((*(_DWORD *)v316 >> 4) & 0x1FF)
                                  - v140 / 100
                                  - 719163))
                                + *(unsigned int *)&v316[8] / 0xF4240uLL;
              *(_QWORD *)v316 = &v277;
              *(_QWORD *)&v316[8] = sub_1416BCBE0;
              sub_1416ABFD0(&v286, &unk_141A5CB60, v316);
              sub_140BA4A70(&v309, v312, v82, &v286);
              v289 = (__int64 *)v309.m128i_i64[1];
              v143 = sub_141695830(v313, v56, v309.m128i_i64[1], *(_QWORD *)v310);
              if ( v143 )
              {
                *(_QWORD *)a1 = 2;
                *(_QWORD *)(a1 + 8) = v143;
              }
              else
              {
                nullsub_1(v144);
                v161 = sub_140001650(24, 8);
                if ( !v161 )
                  sub_141938D11(8, 24);
                v163 = (__int64 *)v161;
                nullsub_1(v162);
                v164 = (__m128i *)sub_140001650(17, 1);
                if ( !v164 )
                {
                  v290 = v163;
                  sub_141938D2B(1, 17);
                }
                *v164 = _mm_loadu_si128((const __m128i *)aResidualManife);
                v164[1].m128i_i8[0] = 116;
                *v163 = 17;
                v163[1] = (__int64)v164;
                v163[2] = 17;
                v299.m128i_i64[0] = 1;
                v299.m128i_i64[1] = (__int64)v163;
                v300 = 1;
                v305.m128i_i64[0] = 0;
                v305.m128i_i64[1] = 8;
                *(_QWORD *)v306 = 0;
                nullsub_1(v165);
                v166 = sub_140001650(24, 8);
                if ( !v166 )
                  sub_141938D11(8, 24);
                v168 = (__int64 *)v166;
                nullsub_1(v167);
                v169 = sub_140001650(39, 1);
                if ( !v169 )
                {
                  v290 = v168;
                  sub_141938D2B(1, 39);
                }
                *(_OWORD *)(v169 + 16) = xmmword_141A5CB81;
                *(_OWORD *)v169 = xmmword_141A5CB71;
                *(_QWORD *)(v169 + 31) = 0x79726F7473696820LL;
                *v168 = 39;
                v168[1] = v169;
                v168[2] = 39;
                *(_QWORD *)&v316[16] = v300;
                v170 = _mm_loadu_si128(&v299);
                *(__m128i *)v316 = v170;
                *(_QWORD *)&v316[40] = *(_QWORD *)v306;
                *(__m128i *)&v316[24] = _mm_loadu_si128(&v305);
                *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
                *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
                *(__m128i *)(a1 + 8) = v170;
                *(_QWORD *)(a1 + 56) = 1;
                *(_QWORD *)(a1 + 64) = v168;
                *(_QWORD *)(a1 + 72) = 1;
                *(_QWORD *)a1 = -1;
              }
              if ( v309.m128i_i64[0] )
                sub_140001660(v289, v309.m128i_i64[0], 1);
            }
            if ( v307.m512i_i64[0] )
              sub_140001660(v312, v307.m512i_i64[0], 1);
          }
          if ( v291.m256i_i64[0] )
            sub_140001660(v313, v291.m256i_i64[0], 1);
          v101 = v302.m128i_i64[0];
LABEL_188:
          if ( v101 )
            sub_140001660(v322, v101, 1);
        }
        else
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(a4 + 16)), (__m128i)xmmword_141A086F0),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A557E0))) != 0xFFFF )
            goto LABEL_79;
          sub_140F08830(a1, a2[97], a2[98], a3, a6, *(_QWORD *)(a7 + 40));
        }
        return a1;
      case 18LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_141A55780),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55770))) == 0xFFFF )
        {
          sub_140F09A40(a1, a2, a6, *(_QWORD *)(a7 + 40));
        }
        else
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a4 + 16)), (__m128i)xmmword_141A557A0),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55790))) != 0xFFFF )
            goto LABEL_79;
          sub_140F095C0(a1, (_DWORD)a2, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16), a6, *(_QWORD *)(a7 + 40));
        }
        return a1;
      case 19LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A41F50),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_141A41F40))) == 0xFFFF )
          goto LABEL_74;
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55680),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 3)), (__m128i)xmmword_141A55670))) != 0xFFFF )
          goto LABEL_79;
        v27 = a2[1];
        v28 = a2[2];
        sub_1416828D0((unsigned int)&v277, v27, v28, (unsigned int)&unk_141A5D50D, 6);
        sub_1401B79C0((__int64)&v286, v27, v28);
        v312 = (_QWORD *)a1;
        sub_1401B8C00((__int64)&v299, (__int64)a2);
        v29 = v299.m128i_i64[1];
        v30 = v277.m128i_i64[1];
        v31 = v278;
        if ( (unsigned __int8)sub_141681D40(v299.m128i_i64[1], v300, v277.m128i_i64[1], v278) )
        {
          v272 = v286.m128i_i64[0];
          if ( v286.m128i_i64[0] != -1 )
          {
            v273 = v286.m128i_i64[1];
            sub_141681AF0(&v291, v286.m128i_i64[1], v287);
            sub_141681AF0(&v307, v30, v31);
            v285 = v29;
            v33 = v291.m256i_i64[1];
            v34 = v307.m512i_i64[1];
            if ( v291.m256i_i64[1] == v307.m512i_i64[1]
              && (_BYTE)v294 == v307.m512i_i8[56]
              && HIBYTE(v294) == 2
              && v307.m512i_i8[57] == 2
              && v291.m256i_i8[16] < 3u == v307.m512i_i8[16] < 3u
              && !(unsigned int)sub_1418F4B70(v291.m256i_i64[0], v307.m512i_i64[0]) )
            {
              v29 = v285;
LABEL_36:
              sub_140F03990(&v282, v27, v28);
              v275 = v30;
              if ( !v284 )
              {
                nullsub_1(v38);
                v183 = sub_140001650(24, 8);
                if ( !v183 )
                  sub_141938D11(8, 24);
                v185 = (__m128i *)v183;
                nullsub_1(v184);
                v186 = sub_140001650(19, 1);
                if ( !v186 )
                {
                  v322 = v185;
                  sub_141938D2B(1, 19);
                }
                *(__m128i *)v186 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
                *(_DWORD *)(v186 + 15) = 1852795252;
                v185->m128i_i64[0] = 19;
                v185->m128i_i64[1] = v186;
                v185[1].m128i_i64[0] = 19;
                v307.m512i_i64[0] = 1;
                v307.m512i_i64[1] = (__int64)v185;
                v307.m512i_i64[2] = 1;
                v309.m128i_i64[0] = 0;
                v309.m128i_i64[1] = 8;
                *(_QWORD *)v310 = 0;
                nullsub_1(v187);
                v188 = sub_140001650(24, 8);
                if ( !v188 )
                  sub_141938D11(8, 24);
                v190 = (__m128i *)v188;
                nullsub_1(v189);
                v191 = (_QWORD *)sub_140001650(15, 1);
                if ( !v191 )
                {
                  v322 = v190;
                  sub_141938D2B(1, 15);
                }
                *(_QWORD *)((char *)v191 + 7) = 0x9995E78BAEE693BAuLL;
                *v191 = 0xBAE5A797E6A097E6uLL;
                v190->m128i_i64[0] = 15;
                v190->m128i_i64[1] = (__int64)v191;
                v190[1].m128i_i64[0] = 15;
                *(_QWORD *)&v316[16] = v307.m512i_i64[2];
                v192 = _mm_loadu_si128((const __m128i *)&v307);
                *(__m128i *)v316 = v192;
                *(__m128i *)&v316[24] = _mm_loadu_si128(&v309);
                *(_QWORD *)&v316[40] = *(_QWORD *)v310;
                v193 = (__int64)v312;
                *(_OWORD *)(v312 + 5) = *(_OWORD *)&v316[32];
                *(_OWORD *)(v193 + 24) = *(_OWORD *)&v316[16];
                *(__m128i *)(v193 + 8) = v192;
                *(_QWORD *)(v193 + 56) = 1;
                *(_QWORD *)(v193 + 64) = v190;
                *(_QWORD *)(v193 + 72) = 1;
                *(_QWORD *)v193 = -1;
                goto LABEL_202;
              }
              v39 = v284;
              sub_1416828D0((unsigned int)&v291, a2[97], a2[98], (unsigned int)&unk_141A5D553, 16);
              v316[0] = 1;
              v271 = v291.m256i_i64[2];
              v281 = v291.m256i_i64[1];
              v40 = sub_14168A790(v316, v291.m256i_i64[1], v291.m256i_i64[2]);
              if ( v40 )
              {
                v305.m128i_i64[0] = v40;
                v302.m128i_i64[0] = 0;
                v302.m128i_i64[1] = 8;
                v303.m256i_i64[0] = 0;
                nullsub_1(v42);
                v44 = sub_140001650(24, 8);
                if ( !v44 )
                  sub_141938D11(8, 24);
                v46 = (__m128i *)v44;
                nullsub_1(v45);
                v47 = sub_140001650(19, 1);
                if ( !v47 )
                {
                  v322 = v46;
                  sub_141938D2B(1, 19);
                }
                *(__m128i *)v47 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
                *(_DWORD *)(v47 + 15) = 1852795252;
                v46->m128i_i64[0] = 19;
                v46->m128i_i64[1] = v47;
                v46[1].m128i_i64[0] = 19;
                v307.m512i_i64[0] = 1;
                v307.m512i_i64[1] = (__int64)v46;
                v307.m512i_i64[2] = 1;
                nullsub_1(v48);
                v322 = (__m128i *)sub_140001650(24, 8);
                v49 = (__int64)v312;
                if ( !v322 )
                  sub_141938D11(8, 24);
                *(_QWORD *)v316 = &v305;
                *(_QWORD *)&v316[8] = sub_1416BB0B0;
                sub_1416ABFD0(&v309, &unk_141A5D563, v316);
                v50 = v322;
                v322[1].m128i_i64[0] = *(_QWORD *)v310;
                *v50 = v309;
                v51 = _mm_loadu_si128(&v302);
                *(__m128i *)v316 = v51;
                *(_QWORD *)&v316[16] = v303.m256i_i64[0];
                *(_QWORD *)&v316[40] = v307.m512i_i64[2];
                *(__m128i *)&v316[24] = _mm_loadu_si128((const __m128i *)&v307);
                *(_OWORD *)(v49 + 40) = *(_OWORD *)&v316[32];
                *(_OWORD *)(v49 + 24) = *(_OWORD *)&v316[16];
                *(__m128i *)(v49 + 8) = v51;
                *(_QWORD *)(v49 + 56) = 1;
                *(_QWORD *)(v49 + 64) = v50;
                *(_QWORD *)(v49 + 72) = 1;
                *(_QWORD *)v49 = -1;
                if ( (v305.m128i_i8[0] & 3u) - 2 >= 2 && (v305.m128i_i8[0] & 3) != 0 )
                {
                  *(_QWORD *)&v316[8] = v305.m128i_i64[0] - 1;
                  v316[0] = 3;
                  sub_1416BCB00(&v316[8]);
                }
                if ( v291.m256i_i64[0] )
                  sub_140001660(v281, v291.m256i_i64[0], 1);
                v29 = v285;
LABEL_202:
                sub_1403FAC20(&v282);
                v30 = v275;
                if ( v282 )
                  sub_140001660(v283, 32 * v282, 8);
LABEL_149:
                if ( v299.m128i_i64[0] )
                  sub_140001660(v29, v299.m128i_i64[0], 1);
                v138 = v286.m128i_i64[0];
                if ( v286.m128i_i64[0] != -1 && v286.m128i_i64[0] )
                {
                  v139 = v286.m128i_i64[1];
LABEL_154:
                  sub_140001660(v139, v138, 1);
                  goto LABEL_155;
                }
                goto LABEL_155;
              }
              v309.m128i_i32[0] = sub_141683E80(v42, v41, v43);
              v309.m128i_i32[1] = v208;
              sub_141683E30(v316, &v309, 3577643008LL, 27111902);
              v274 = 0;
              v209 = 0;
              if ( !v316[0] )
                v209 = *(_QWORD *)&v316[8];
              v210 = v283;
              v279.m128i_i64[0] = v209;
              v289 = (__int64 *)(v283 + 32 * v39);
              v276 = (__int64 *)v283;
              while ( (__int64 *)v210 != v289 )
              {
                v313 = v210 + 32;
                *(_OWORD *)v310 = 1u;
                *(_QWORD *)&v310[16] = aWal_0;
                *(_QWORD *)&v310[24] = 4;
                *(_QWORD *)&v310[32] = aShm;
                *(_QWORD *)&v310[40] = 4;
                for ( i = 0; i != 3; ++i )
                {
                  v212 = *(_QWORD *)&v310[16 * i + 8];
                  sub_140F066B0(
                    (__int64)&v307,
                    *(_QWORD *)(v210 + 8),
                    *(_QWORD *)(v210 + 16),
                    *(_QWORD *)&v310[16 * i],
                    v212);
                  v213 = v307.m512i_i64[2];
                  v322 = (__m128i *)v307.m512i_i64[1];
                  sub_141695A00(v316, v307.m512i_i64[1], v307.m512i_i64[2]);
                  if ( *(_DWORD *)v316 == 2 )
                  {
                    if ( (v316[8] & 3u) - 2 >= 2 && (v316[8] & 3) != 0 )
                    {
                      --*(_QWORD *)&v316[8];
                      v316[0] = 3;
                      sub_1416BCB00(&v316[8]);
                    }
                  }
                  else
                  {
                    v214 = sub_141682C30(v322, v213);
                    if ( v214 )
                    {
                      sub_1416B3AE0(v316, v214, v215);
                      v216 = *(const char **)&v316[8];
                      if ( v316[0] )
                        v216 = aStateSqlite_0;
                      v217 = *(_QWORD *)&v316[16];
                      if ( v316[0] )
                        v217 = 12;
                    }
                    else
                    {
                      v217 = 12;
                      v216 = aStateSqlite_0;
                    }
                    v296 = v216;
                    v297 = v217;
                    *(_QWORD *)v316 = &v279;
                    *(_QWORD *)&v316[8] = sub_1416BCB10;
                    *(_QWORD *)&v316[16] = &v296;
                    *(_QWORD *)&v316[24] = sub_140186EE0;
                    sub_1416ABFD0(&v302, &unk_141A60B44, v316);
                    sub_140BA4A70(v316, v281, v271, &v302);
                    v290 = *(__int64 **)&v316[8];
                    if ( sub_141695640(v322, v213, *(_QWORD *)&v316[8], *(_QWORD *)&v316[16]) )
                    {
                      if ( (unsigned int)(v218 & 3) - 2 >= 2 && (v218 & 3) != 0 )
                      {
                        v305.m128i_i64[1] = v218 - 1;
                        v305.m128i_i8[0] = 3;
                        sub_1416BCB00(&v305.m128i_u64[1]);
                      }
                    }
                    else
                    {
                      v219 = sub_141695140(v322, v213);
                      if ( v219 )
                      {
                        if ( (unsigned int)(v219 & 3) - 2 >= 2 && (v219 & 3) != 0 )
                        {
                          v305.m128i_i64[1] = v219 - 1;
                          v305.m128i_i8[0] = 3;
                          sub_1416BCB00(&v305.m128i_u64[1]);
                        }
                      }
                      else
                      {
                        v274 += v212 == 0;
                      }
                    }
                    if ( *(_QWORD *)v316 )
                      sub_140001660(v290, *(_QWORD *)v316, 1);
                  }
                  if ( v307.m512i_i64[0] )
                    sub_140001660(v322, v307.m512i_i64[0], 1);
                }
                v210 = v313;
              }
              v269 = v274;
              v302.m128i_i64[0] = 0;
              v302.m128i_i64[1] = 8;
              v303.m256i_i64[0] = 0;
              v220 = &v307;
              v221 = v276;
LABEL_259:
              if ( v221 == v289 )
              {
                v229 = v303.m256i_i64[0];
                v280 = v303.m256i_i64[0];
                v279 = _mm_loadu_si128(&v302);
                if ( v303.m256i_i64[0] )
                {
                  sub_1403D1820(&v296, v279.m128i_i64[1], v279.m128i_i64[1] + 32 * v303.m256i_i64[0]);
                  v30 = v275;
                  v230 = v285;
                  v305.m128i_i64[0] = 0;
                  v305.m128i_i64[1] = 8;
                  *(_QWORD *)v306 = 0;
                  nullsub_1(v231);
                  v232 = sub_140001650(24, 8);
                  if ( !v232 )
                    sub_141938D11(8, 24);
                  v234 = (__m128i *)v232;
                  nullsub_1(v233);
                  v235 = sub_140001650(19, 1);
                  if ( !v235 )
                  {
                    v322 = v234;
                    sub_141938D2B(1, 19);
                  }
                  *(__m128i *)v235 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
                  *(_DWORD *)(v235 + 15) = 1852795252;
                  v234->m128i_i64[0] = 19;
                  v234->m128i_i64[1] = v235;
                  v234[1].m128i_i64[0] = 19;
                  v302.m128i_i64[0] = 1;
                  v302.m128i_i64[1] = (__int64)v234;
                  v303.m256i_i64[0] = 1;
                  nullsub_1(v236);
                  v322 = (__m128i *)sub_140001650(24, 8);
                  if ( !v322 )
                    sub_141938D11(8, 24);
                  v268 = v229;
                  v237 = v297;
                  sub_140D1EE10((unsigned int)v316, v297, (_DWORD)v298, (unsigned int)&unk_141A59B70, 2);
                  *(_QWORD *)v310 = *(_QWORD *)&v316[16];
                  v309 = _mm_loadu_si128((const __m128i *)v316);
                  *(_QWORD *)v316 = &v268;
                  *(_QWORD *)&v316[8] = sub_1416BCB10;
                  *(_QWORD *)&v316[16] = &v309;
                  *(_QWORD *)&v316[24] = sub_1400015F0;
                  sub_1416ABFD0(&v307, &unk_141A5D5D8, v316);
                  v313 = v237;
                  if ( v309.m128i_i64[0] )
                    sub_140001660(v309.m128i_i64[1], v309.m128i_i64[0], 1);
                  v238 = v322;
                  v322[1].m128i_i64[0] = v307.m512i_i64[2];
                  *v238 = *(__m128i *)v307.m512i_i8;
                  v239 = _mm_loadu_si128(&v305);
                  *(__m128i *)v316 = v239;
                  *(_QWORD *)&v316[16] = *(_QWORD *)v306;
                  *(__m128i *)&v316[24] = _mm_loadu_si128(&v302);
                  *(_QWORD *)&v316[40] = v303.m256i_i64[0];
                  v240 = (__int64)v312;
                  *(_OWORD *)(v312 + 5) = *(_OWORD *)&v316[32];
                  *(_OWORD *)(v240 + 24) = *(_OWORD *)&v316[16];
                  *(__m128i *)(v240 + 8) = v239;
                  *(_QWORD *)(v240 + 56) = 1;
                  *(_QWORD *)(v240 + 64) = v238;
                  *(_QWORD *)(v240 + 72) = 1;
                  *(_QWORD *)v240 = -1;
                  sub_1403FAE40(&v296);
                  if ( v296 )
                    sub_140001660(v313, 24LL * (_QWORD)v296, 8);
                }
                else
                {
                  v322 = (__m128i *)sub_140C23890(24);
                  nullsub_1(v253);
                  v254 = sub_140001650(19, 1);
                  if ( !v254 )
                    sub_141938D2B(1, 19);
                  *(__m128i *)v254 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
                  *(_DWORD *)(v254 + 15) = 1852795252;
                  v255 = (__int64)v322;
                  v322->m128i_i64[0] = 19;
                  *(_QWORD *)(v255 + 8) = v254;
                  *(_QWORD *)(v255 + 16) = 19;
                  v302.m128i_i64[0] = 1;
                  v302.m128i_i64[1] = v255;
                  v303.m256i_i64[0] = 1;
                  v307.m512i_i64[0] = 0;
                  *(_OWORD *)&v307.m512i_u64[1] = 8u;
                  v322 = (__m128i *)sub_140C23890(24);
                  *(_QWORD *)v316 = &v269;
                  *(_QWORD *)&v316[8] = sub_1416BCB10;
                  sub_1416ABFD0(&v309, &unk_141A5D581, v316);
                  v256 = v322;
                  v322[1].m128i_i64[0] = *(_QWORD *)v310;
                  *v256 = v309;
                  v257 = _mm_loadu_si128(&v302);
                  *(__m128i *)v316 = v257;
                  *(_QWORD *)&v316[16] = v303.m256i_i64[0];
                  *(__m128i *)&v316[24] = _mm_loadu_si128((const __m128i *)&v307);
                  *(_QWORD *)&v316[40] = v307.m512i_i64[2];
                  v258 = (__int64)v312;
                  *(_OWORD *)(v312 + 5) = *(_OWORD *)&v316[32];
                  *(_OWORD *)(v258 + 24) = *(_OWORD *)&v316[16];
                  *(__m128i *)(v258 + 8) = v257;
                  *(_QWORD *)(v258 + 56) = 1;
                  *(_QWORD *)(v258 + 64) = v256;
                  *(_QWORD *)(v258 + 72) = 1;
                  *(_QWORD *)v258 = -1;
                  v30 = v275;
                  v230 = v285;
                }
                sub_1403FAC20(&v279);
                if ( v279.m128i_i64[0] )
                  sub_140001660(v279.m128i_i64[1], 32 * v279.m128i_i64[0], 8);
                if ( v291.m256i_i64[0] )
                  sub_140001660(v281, v291.m256i_i64[0], 1);
                sub_1403FAC20(&v282);
                if ( v282 )
                  sub_140001660(v276, 32 * v282, 8);
                if ( v299.m128i_i64[0] )
                  sub_140001660(v230, v299.m128i_i64[0], 1);
                v138 = v272;
                if ( v272 )
                {
                  v139 = v273;
                  goto LABEL_154;
                }
LABEL_155:
                if ( v277.m128i_i64[0] )
                  sub_140001660(v30, v277.m128i_i64[0], 1);
                return (__int64)v312;
              }
              v290 = v221 + 4;
              *(_OWORD *)v310 = 1u;
              *(_QWORD *)&v310[16] = aWal_0;
              *(_QWORD *)&v310[24] = 4;
              *(_QWORD *)&v310[32] = aShm;
              *(_QWORD *)&v310[40] = 4;
              v222 = v221[1];
              v223 = v221[2];
              v224 = 0;
              while ( 1 )
              {
                sub_140F066B0((__int64)v220, v222, v223, *(_QWORD *)&v310[16 * v224], *(_QWORD *)&v310[16 * v224 + 8]);
                v317 = 1;
                v322 = (__m128i *)v307.m512i_i64[1];
                sub_141695A00(v316, v307.m512i_i64[1], v307.m512i_i64[2]);
                if ( *(_DWORD *)v316 != 2 )
                  break;
                if ( (v316[8] & 3u) - 2 >= 2 && (v316[8] & 3) != 0 )
                {
                  --*(_QWORD *)&v316[8];
                  v316[0] = 3;
                  v317 = 1;
                  sub_1416BCB00(&v316[8]);
                }
                if ( v307.m512i_i64[0] )
                {
                  sub_140001660(v322, v307.m512i_i64[0], 1);
                  if ( ++v224 == 3 )
                    goto LABEL_258;
                }
                else
                {
LABEL_270:
                  if ( ++v224 == 3 )
                  {
LABEL_258:
                    v221 = v290;
                    goto LABEL_259;
                  }
                }
              }
              v225 = v220;
              v313 = v307.m512i_i64[0];
              v226 = v303.m256i_i64[0];
              if ( v303.m256i_i64[0] == v302.m128i_i64[0] )
                sub_14190F570(&v302);
              v227 = v302.m128i_i64[1];
              v228 = 32 * v226;
              *(_QWORD *)(v302.m128i_i64[1] + v228) = v313;
              *(_QWORD *)(v227 + v228 + 8) = v322;
              *(__m128i *)(v227 + v228 + 16) = _mm_loadu_si128((const __m128i *)&v307.m512i_u64[2]);
              v303.m256i_i64[0] = v226 + 1;
              v220 = v225;
              goto LABEL_270;
            }
            if ( v291.m256i_i8[16] != -1 )
            {
              *(_QWORD *)&v306[15] = v293;
              v35 = _mm_loadu_si128((const __m128i *)((char *)&v291.m256i_u64[2] + 1));
              *(__m128i *)v306 = _mm_loadu_si128((const __m128i *)((char *)&v292 + 1));
              v305 = v35;
            }
            v309.m128i_i64[0] = v291.m256i_i64[0];
            v309.m128i_i64[1] = v33;
            v310[0] = v291.m256i_i8[16];
            *(__m128i *)&v310[1] = v305;
            *(_OWORD *)&v310[17] = *(_OWORD *)v306;
            *(_QWORD *)&v310[32] = *(_QWORD *)&v306[15];
            *(_WORD *)&v310[40] = v294;
            v310[42] = v295;
            if ( v307.m512i_i8[16] != -1 )
            {
              *(__int64 *)((char *)&v303.m256i_i64[1] + 7) = v307.m512i_i64[6];
              *(_OWORD *)v303.m256i_i8 = *(_OWORD *)((char *)&v307.m512i_u64[4] + 1);
              v302 = *(__m128i *)((char *)&v307.m512i_u64[2] + 1);
            }
            *(_QWORD *)v316 = v307.m512i_i64[0];
            *(_QWORD *)&v316[8] = v34;
            v316[16] = v307.m512i_i8[16];
            si128 = _mm_load_si128((const __m128i *)&v303);
            *(__m128i *)&v316[17] = _mm_load_si128(&v302);
            *(__m128i *)&v316[33] = si128;
            *(_QWORD *)&v316[48] = *(__int64 *)((char *)&v303.m256i_i64[1] + 7);
            *(_WORD *)&v316[56] = v307.m512i_i16[28];
            v316[58] = v307.m512i_i8[58];
            v37 = sub_140D2A460(&v309, v316);
            v29 = v285;
            if ( v37 )
              goto LABEL_36;
          }
          v307.m512i_i64[0] = 0;
          *(_OWORD *)&v307.m512i_u64[1] = 8u;
          nullsub_1(v32);
          v128 = sub_140001650(24, 8);
          if ( !v128 )
            sub_141938D11(8, 24);
          v130 = (__m128i *)v128;
          nullsub_1(v129);
          v131 = sub_140001650(19, 1);
          if ( !v131 )
          {
            v322 = v130;
            sub_141938D2B(1, 19);
          }
          *(__m128i *)v131 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
          *(_DWORD *)(v131 + 15) = 1852795252;
          v130->m128i_i64[0] = 19;
          v130->m128i_i64[1] = v131;
          v130[1].m128i_i64[0] = 19;
          v309.m128i_i64[0] = 1;
          v309.m128i_i64[1] = (__int64)v130;
          *(_QWORD *)v310 = 1;
          nullsub_1(v132);
          v133 = sub_140001650(24, 8);
          if ( !v133 )
            sub_141938D11(8, 24);
          v119 = (__m128i *)v133;
          nullsub_1(v134);
          v135 = (_OWORD *)sub_140001650(108, 1);
          if ( !v135 )
          {
            v322 = v119;
            sub_141938D2B(1, 108);
          }
          *(_OWORD *)((char *)v135 + 92) = *(__int128 *)((char *)&xmmword_141A5D6DA + 12);
          v135[5] = xmmword_141A5D6DA;
          v135[4] = xmmword_141A5D6CA;
          v135[3] = xmmword_141A5D6BA;
          v135[2] = xmmword_141A5D6AA;
          v135[1] = xmmword_141A5D69A;
          *v135 = xmmword_141A5D68A;
          v119->m128i_i64[0] = 108;
          v119->m128i_i64[1] = (__int64)v135;
          v119[1].m128i_i64[0] = 108;
        }
        else
        {
          nullsub_1(v32);
          v112 = sub_140001650(24, 8);
          if ( !v112 )
            sub_141938D11(8, 24);
          v114 = (__m128i *)v112;
          nullsub_1(v113);
          v115 = sub_140001650(19, 1);
          if ( !v115 )
          {
            v322 = v114;
            sub_141938D2B(1, 19);
          }
          *(__m128i *)v115 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
          *(_DWORD *)(v115 + 15) = 1852795252;
          v114->m128i_i64[0] = 19;
          v114->m128i_i64[1] = v115;
          v114[1].m128i_i64[0] = 19;
          v307.m512i_i64[0] = 1;
          v307.m512i_i64[1] = (__int64)v114;
          v307.m512i_i64[2] = 1;
          v309.m128i_i64[0] = 0;
          v309.m128i_i64[1] = 8;
          *(_QWORD *)v310 = 0;
          nullsub_1(v116);
          v117 = sub_140001650(24, 8);
          if ( !v117 )
            sub_141938D11(8, 24);
          v119 = (__m128i *)v117;
          nullsub_1(v118);
          v120 = (_OWORD *)sub_140001650(45, 1);
          if ( !v120 )
          {
            v322 = v119;
            sub_141938D2B(1, 45);
          }
          *(_OWORD *)((char *)v120 + 29) = *(__int128 *)((char *)&xmmword_141A5D536 + 13);
          v120[1] = xmmword_141A5D536;
          *v120 = xmmword_141A5D526;
          v119->m128i_i64[0] = 45;
          v119->m128i_i64[1] = (__int64)v120;
          v119[1].m128i_i64[0] = 45;
        }
        *(_QWORD *)&v316[16] = v307.m512i_i64[2];
        v136 = _mm_loadu_si128((const __m128i *)&v307);
        *(__m128i *)v316 = v136;
        *(_QWORD *)&v316[40] = *(_QWORD *)v310;
        *(__m128i *)&v316[24] = _mm_loadu_si128(&v309);
        v137 = (__int64)v312;
        *(_OWORD *)(v312 + 5) = *(_OWORD *)&v316[32];
        *(_OWORD *)(v137 + 24) = *(_OWORD *)&v316[16];
        *(__m128i *)(v137 + 8) = v136;
        *(_QWORD *)(v137 + 56) = 1;
        *(_QWORD *)(v137 + 64) = v119;
        *(_QWORD *)(v137 + 72) = 1;
        *(_QWORD *)v137 = -1;
        goto LABEL_149;
      case 20LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A557C0),
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a4 + 16)), (__m128i)xmmword_141A557B0))) != 0xFFFF )
          goto LABEL_79;
        sub_140F0E1B0(a1, a2[9], a2[10], a3, a6, *(_QWORD *)(a7 + 40));
        return a1;
      case 21LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A556C0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 5)), (__m128i)xmmword_141A556B0))) != 0xFFFF )
          goto LABEL_79;
        sub_140F10150(
          a1,
          (_DWORD)a2,
          *(unsigned __int8 *)(a3 + 364),
          *(unsigned __int8 *)(a3 + 382),
          a6,
          *(_QWORD *)(a7 + 40));
        return a1;
      case 22LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A556E0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_141A556D0))) == 0xFFFF )
        {
          sub_140F23360(a1, a2, *(unsigned __int8 *)(a3 + 364));
        }
        else
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55700),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 6)), (__m128i)xmmword_141A556F0))) != 0xFFFF )
            goto LABEL_79;
          sub_140F22610(a1, a2, v14, a6);
        }
        return a1;
      case 23LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55720),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141A55710))) == 0xFFFF )
        {
          sub_140F25A20(a1, (_DWORD)a2, a3, a6, *(_QWORD *)(a7 + 40));
        }
        else if ( _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A41E20),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141A41E10))) == 0xFFFF )
        {
          sub_140F2CFD0(a1, a2, v14, a6);
        }
        else if ( _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55740),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141A55730))) == 0xFFFF )
        {
          sub_140F2AD80(a1, a2, *(unsigned __int8 *)(a3 + 364), a6);
        }
        else
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55760),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 7)), (__m128i)xmmword_141A55750))) != 0xFFFF )
            goto LABEL_79;
          sub_140F2C350(a1, a2, v14, a6);
        }
        return a1;
      case 24LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55600),
                 _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(a4 + 16)), (__m128i)xmmword_141A555F0))) != 0xFFFF )
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A41F30),
                   _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(a4 + 16)), (__m128i)xmmword_141A41F20))) == 0xFFFF )
          {
LABEL_74:
            sub_140F2BD30(a1, a2, a3, a9);
            return a1;
          }
LABEL_79:
          v309.m128i_i64[0] = (__int64)v270;
          v309.m128i_i64[1] = (__int64)sub_140186EE0;
          v15 = &unk_141A6267C;
          goto LABEL_80;
        }
        v68 = v316;
        sub_140F3DA20((__int64)v316, (__int64)a2);
        v69 = *(_QWORD *)v316;
        v309 = *(__m128i *)&v316[8];
        *(_OWORD *)v310 = *(_OWORD *)&v316[24];
        *(_OWORD *)&v310[16] = *(_OWORD *)&v316[40];
        *(_QWORD *)&v310[32] = *(_QWORD *)&v316[56];
        if ( *(_QWORD *)v316 != -1 )
        {
          v70 = *(_OWORD *)&v316[64];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v316[80];
          *(_OWORD *)(a1 + 64) = v70;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)&v310[32];
          v71 = _mm_load_si128(&v309);
          v72 = _mm_load_si128((const __m128i *)v310);
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&v310[16];
          *(__m128i *)(a1 + 24) = v72;
          *(__m128i *)(a1 + 8) = v71;
          *(_QWORD *)a1 = v69;
          return a1;
        }
        v84 = _mm_load_si128((const __m128i *)v310);
        *(__m128i *)v303.m256i_i8 = v84;
        v302 = _mm_load_si128(&v309);
        *(_OWORD *)&v303.m256i_u64[2] = *(_OWORD *)&v310[16];
        v304 = *(_QWORD *)&v310[32];
        if ( !v84.m128i_i64[0] )
        {
          v145 = v303.m256i_i64[3];
          if ( v303.m256i_i64[3] )
          {
            v299.m128i_i64[0] = 0;
            v299.m128i_i64[1] = 8;
            v300 = 0;
            nullsub_1(*(_QWORD *)&v316[56]);
            v146 = sub_140001650(24, 8);
            if ( !v146 )
              sub_141938D11(8, 24);
            v148 = (__m128i *)v146;
            nullsub_1(v147);
            v149 = (__m128i *)sub_140001650(24, 1);
            if ( !v149 )
            {
              v322 = v148;
              sub_141938D2B(1, 24);
            }
            *v149 = _mm_loadu_si128((const __m128i *)aThreadResponse);
            v149[1].m128i_i64[0] = 0x7364695F6D657469LL;
            v148->m128i_i64[0] = 24;
            v148->m128i_i64[1] = (__int64)v149;
            v148[1].m128i_i64[0] = 24;
            v305.m128i_i64[0] = 1;
            v305.m128i_i64[1] = (__int64)v148;
            *(_QWORD *)v306 = 1;
            nullsub_1(0x7364695F6D657469LL);
            v322 = (__m128i *)sub_140001650(24, 8);
            if ( !v322 )
              sub_141938D11(8, 24);
            v286.m128i_i64[0] = v145;
            *(_QWORD *)v316 = v303.m256i_i64[2];
            *(_QWORD *)&v316[8] = v303.m256i_i64[2] + 24 * v145;
            *(_QWORD *)&v316[16] = 5;
            sub_1403EC7B0((unsigned __int64 *)&v309, v316);
            v150 = v309.m128i_i64[1];
            sub_140D1EE10((unsigned int)v316, v309.m128i_i32[2], *(_DWORD *)v310, (unsigned int)&unk_141A5D1EC, 3);
            v307.m512i_i64[2] = *(_QWORD *)&v316[16];
            *(__m128i *)v307.m512i_i8 = _mm_loadu_si128((const __m128i *)v316);
            *(_QWORD *)v316 = &v286;
            *(_QWORD *)&v316[8] = sub_1416BCB10;
            *(_QWORD *)&v316[16] = &v307;
            *(_QWORD *)&v316[24] = sub_1400015F0;
            sub_1416ABFD0(&v291, &unk_141A5F1F6, v316);
            v313 = v150;
            if ( v307.m512i_i64[0] )
              sub_140001660(v307.m512i_i64[1], v307.m512i_i64[0], 1);
            sub_1403FAE40(&v309);
            if ( v309.m128i_i64[0] )
              sub_140001660(v313, 24 * v309.m128i_i64[0], 8);
            v151 = v322;
            v322[1].m128i_i64[0] = v291.m256i_i64[2];
            *v151 = *(__m128i *)v291.m256i_i8;
            v152 = _mm_loadu_si128(&v299);
            *(__m128i *)v316 = v152;
            *(_QWORD *)&v316[16] = v300;
            *(__m128i *)&v316[24] = _mm_loadu_si128(&v305);
            *(_QWORD *)&v316[40] = *(_QWORD *)v306;
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
            *(__m128i *)(a1 + 8) = v152;
            *(_QWORD *)(a1 + 56) = 1;
            *(_QWORD *)(a1 + 64) = v151;
          }
          else
          {
            nullsub_1(*(_QWORD *)&v316[56]);
            v171 = sub_140001650(24, 8);
            if ( !v171 )
            {
              v321 = 1;
              sub_141938D11(8, 24);
            }
            v173 = (__m128i *)v171;
            nullsub_1(v172);
            v174 = (__m128i *)sub_140001650(24, 1);
            if ( !v174 )
            {
              v322 = v173;
              sub_141938D2B(1, 24);
            }
            *v174 = _mm_loadu_si128((const __m128i *)aThreadResponse);
            v174[1].m128i_i64[0] = 0x7364695F6D657469LL;
            v173->m128i_i64[0] = 24;
            v173->m128i_i64[1] = (__int64)v174;
            v173[1].m128i_i64[0] = 24;
            v307.m512i_i64[0] = 1;
            v307.m512i_i64[1] = (__int64)v173;
            v307.m512i_i64[2] = 1;
            v309.m128i_i64[0] = 0;
            v309.m128i_i64[1] = 8;
            *(_QWORD *)v310 = 0;
            nullsub_1(0x7364695F6D657469LL);
            v175 = sub_140001650(24, 8);
            if ( !v175 )
              sub_141938D11(8, 24);
            v177 = (__m128i *)v175;
            nullsub_1(v176);
            v178 = sub_140001650(39, 1);
            if ( !v178 )
            {
              v322 = v177;
              sub_141938D2B(1, 39);
            }
            *(_OWORD *)(v178 + 16) = xmmword_141A5F1DF;
            *(_OWORD *)v178 = xmmword_141A5F1CF;
            *(_QWORD *)(v178 + 31) = 0x444920B9A1E9A894LL;
            v177->m128i_i64[0] = 39;
            v177->m128i_i64[1] = v178;
            v177[1].m128i_i64[0] = 39;
            *(_QWORD *)&v316[16] = v307.m512i_i64[2];
            v179 = _mm_loadu_si128((const __m128i *)&v307);
            *(__m128i *)v316 = v179;
            *(_QWORD *)&v316[40] = *(_QWORD *)v310;
            *(__m128i *)&v316[24] = _mm_loadu_si128(&v309);
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
            *(__m128i *)(a1 + 8) = v179;
            *(_QWORD *)(a1 + 56) = 1;
            *(_QWORD *)(a1 + 64) = v177;
          }
          *(_QWORD *)(a1 + 72) = 1;
          *(_QWORD *)a1 = -1;
          sub_1403FBDC0((__int64)&v302);
          if ( v302.m128i_i64[0] )
          {
            v180 = v302.m128i_i64[1];
            v181 = v302.m128i_i64[0] << 6;
            v182 = 8;
LABEL_298:
            sub_140001660(v180, v181, v182);
            goto LABEL_299;
          }
          goto LABEL_299;
        }
        v85 = a2[97];
        v86 = a2[98];
        v321 = 1;
        sub_1416828D0((unsigned int)&v277, v85, v86, (unsigned int)&unk_141A5F251, 38);
        v282 = 0;
        v296 = nullptr;
        v297 = 8;
        v298 = nullptr;
        v87 = v302.m128i_i64[1];
        v88 = v302.m128i_i64[1] + (v84.m128i_i64[0] << 6);
        v286.m128i_i64[0] = v302.m128i_i64[1];
        v286.m128i_i64[1] = v302.m128i_i64[1];
        v287 = v302.m128i_i64[0];
        v288 = v88;
        v312 = (_QWORD *)v277.m128i_i64[1];
        v289 = (__int64 *)v278;
        while ( v87 != v88 )
        {
          v89 = v87 + 64;
          v286.m128i_i64[1] = v87 + 64;
          v90 = *(_QWORD *)v87;
          v293 = *(_QWORD *)(v87 + 56);
          v292 = *(_OWORD *)(v87 + 40);
          v291 = *(__m256i *)(v87 + 8);
          if ( v90 == -1 )
            break;
          v307.m512i_i64[0] = v90;
          v307.m512i_i64[7] = v293;
          v91 = _mm_load_si128((const __m128i *)&v291);
          v92 = _mm_load_si128((const __m128i *)&v291.m256i_u64[2]);
          *(_OWORD *)&v307.m512i_u64[5] = v292;
          *(__m128i *)&v307.m512i_u64[3] = v92;
          *(__m128i *)&v307.m512i_u64[1] = v91;
          v319 = 1;
          sub_14026FA40((__int64)&v309, v92.m128i_i64[1], v292, (__int64)v312, (__int64)v289);
          if ( v309.m128i_i32[0] == -1 )
          {
            v282 += v309.m128i_i64[1];
            if ( v307.m512i_i64[0] )
              sub_140001660(v307.m512i_i64[1], v307.m512i_i64[0], 1);
          }
          else
          {
            *(__m128i *)&v316[80] = v311[1];
            *(__m128i *)&v316[64] = v311[0];
            v93 = _mm_loadu_si128(&v309);
            v94 = _mm_loadu_si128((const __m128i *)v310);
            *(_OWORD *)&v316[48] = *(_OWORD *)&v310[32];
            *(_OWORD *)&v316[32] = *(_OWORD *)&v310[16];
            *(__m128i *)&v316[16] = v94;
            *(__m128i *)v316 = v93;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v299.m128i_i64[0] = (__int64)&v307;
              v299.m128i_i64[1] = (__int64)sub_1400015F0;
              v300 = (__int64)v68;
              v301 = sub_14104A7D0;
              v305.m128i_i64[0] = (__int64)aCodexmateLibCo_42;
              v305.m128i_i64[1] = 44;
              *(_QWORD *)v306 = aCodexmateLibCo_42;
              *(_QWORD *)&v306[8] = 44;
              *(_QWORD *)&v306[16] = &off_141A5F3B0;
              v315 = 1;
              sub_140BAD520(&unk_141A5F368, &v299, 2, &v305);
            }
            v95 = v68;
            v313 = v307.m512i_i64[1];
            v322 = (__m128i *)v307.m512i_i64[0];
            v96 = v307.m512i_i64[2];
            v97 = v298;
            if ( v298 == v296 )
              sub_14190FDC0(&v296);
            v98 = v297;
            v99 = 3LL * (_QWORD)v97;
            *(_QWORD *)(v297 + 8 * v99) = v322;
            *(_QWORD *)(v98 + 8 * v99 + 8) = v313;
            *(_QWORD *)(v98 + 8 * v99 + 16) = v96;
            v298 = v97 + 1;
            v319 = 0;
            v68 = v95;
            sub_140E97700(v95);
          }
          if ( v307.m512i_i64[3] )
            sub_140001660(v307.m512i_i64[4], v307.m512i_i64[3], 1);
          v87 = v89;
        }
        sub_1403F9A40(&v286);
        sub_140F3DA20((__int64)v316, (__int64)a2);
        v124 = *(_QWORD *)v316;
        v309 = *(__m128i *)&v316[8];
        *(_OWORD *)v310 = *(_OWORD *)&v316[24];
        *(_OWORD *)&v310[16] = *(_OWORD *)&v316[40];
        *(_QWORD *)&v310[32] = *(_QWORD *)&v316[56];
        if ( *(_QWORD *)v316 != -1 )
        {
          v125 = *(_OWORD *)&v316[64];
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v316[80];
          *(_OWORD *)(a1 + 64) = v125;
          *(_QWORD *)(a1 + 56) = *(_QWORD *)&v310[32];
          v126 = _mm_load_si128(&v309);
          v127 = _mm_load_si128((const __m128i *)v310);
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&v310[16];
          *(__m128i *)(a1 + 24) = v127;
          *(__m128i *)(a1 + 8) = v126;
          *(_QWORD *)a1 = v124;
          goto LABEL_294;
        }
        v159 = _mm_load_si128(&v309);
        v160 = _mm_load_si128((const __m128i *)v310);
        *(__m128i *)&v307.m512i_u64[2] = v160;
        *(__m128i *)v307.m512i_i8 = v159;
        *(_OWORD *)&v307.m512i_u64[4] = *(_OWORD *)&v310[16];
        v307.m512i_i64[6] = *(_QWORD *)&v310[32];
        if ( v298 )
        {
          if ( !v160.m128i_i64[0] )
            goto LABEL_281;
        }
        else if ( !v160.m128i_i64[0] )
        {
          if ( !v307.m512i_i64[5] )
          {
            v322 = (__m128i *)sub_140C23890(24);
            nullsub_1(v263);
            v264 = (__m128i *)sub_140001650(24, 1);
            if ( !v264 )
              sub_141938D2B(1, 24);
            *v264 = _mm_loadu_si128((const __m128i *)aThreadResponse);
            v264[1].m128i_i64[0] = 0x7364695F6D657469LL;
            v265 = (__int64)v322;
            v322->m128i_i64[0] = 24;
            *(_QWORD *)(v265 + 8) = v264;
            *(_QWORD *)(v265 + 16) = 24;
            v305.m128i_i64[0] = 1;
            v305.m128i_i64[1] = v265;
            *(_QWORD *)v306 = 1;
            v291.m256i_i64[0] = 0;
            *(_OWORD *)&v291.m256i_u64[1] = 8u;
            v322 = (__m128i *)sub_140C23890(24);
            *(_QWORD *)v316 = &v282;
            *(_QWORD *)&v316[8] = sub_1416BCB10;
            sub_1416ABFD0(&v309, &unk_141A5F277, v316);
            v266 = v322;
            v322[1].m128i_i64[0] = *(_QWORD *)v310;
            *v266 = v309;
            v267 = _mm_loadu_si128(&v305);
            *(__m128i *)v316 = v267;
            *(_QWORD *)&v316[16] = *(_QWORD *)v306;
            *(_QWORD *)&v316[40] = v291.m256i_i64[2];
            *(__m128i *)&v316[24] = _mm_loadu_si128((const __m128i *)&v291);
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
            *(__m128i *)(a1 + 8) = v267;
            *(_QWORD *)(a1 + 56) = 1;
            *(_QWORD *)(a1 + 64) = v266;
            *(_QWORD *)(a1 + 72) = 1;
            *(_QWORD *)a1 = -1;
            sub_140E98320(&v307);
            sub_140025530(&v296);
            if ( v277.m128i_i64[0] )
              sub_140001660(v312, v277.m128i_i64[0], 1);
            sub_140025530(&v303.m256i_u64[1]);
            return a1;
          }
LABEL_281:
          v203 = 0;
          v279.m128i_i64[0] = 0;
          v206 = v307.m512i_i64[5];
          if ( !v307.m512i_i64[5] )
            goto LABEL_282;
          goto LABEL_221;
        }
        if ( (unsigned __int64)(v160.m128i_i64[0] - 1) >= 3 )
        {
          v204 = (_QWORD *)(v307.m512i_i64[1] + 248);
          v202 = 0;
          v203 = 0;
          do
          {
            v203 += *v204 + *(v204 - 8) + *(v204 - 16) + *(v204 - 24);
            v202 += 4;
            v204 += 32;
          }
          while ( (v160.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL) != v202 );
          if ( (v160.m128i_i8[0] & 3) == 0 )
          {
LABEL_220:
            v279.m128i_i64[0] = v203;
            v206 = v307.m512i_i64[5];
            if ( !v307.m512i_i64[5] )
            {
LABEL_282:
              v286.m128i_i64[0] = 0;
              v286.m128i_i64[1] = 1;
              v287 = 0;
LABEL_283:
              v299.m128i_i64[0] = 0;
              v299.m128i_i64[1] = 8;
              v300 = 0;
              nullsub_1(v203);
              v241 = sub_140001650(24, 8);
              if ( !v241 )
                sub_141938D11(8, 24);
              v243 = (__m128i *)v241;
              nullsub_1(v242);
              v244 = (__m128i *)sub_140001650(24, 1);
              if ( !v244 )
              {
                v322 = v243;
                sub_141938D2B(1, 24);
              }
              *v244 = _mm_loadu_si128((const __m128i *)aThreadResponse);
              v244[1].m128i_i64[0] = 0x7364695F6D657469LL;
              v243->m128i_i64[0] = 24;
              v243->m128i_i64[1] = (__int64)v244;
              v243[1].m128i_i64[0] = 24;
              v305.m128i_i64[0] = 1;
              v305.m128i_i64[1] = (__int64)v243;
              *(_QWORD *)v306 = 1;
              nullsub_1(0x7364695F6D657469LL);
              v322 = (__m128i *)sub_140001650(24, 8);
              if ( !v322 )
                sub_141938D11(8, 24);
              sub_140D1EE10((unsigned int)v316, v297, (_DWORD)v298, (unsigned int)&unk_141A5D1EC, 3);
              *(_QWORD *)v310 = *(_QWORD *)&v316[16];
              v309 = _mm_loadu_si128((const __m128i *)v316);
              *(_QWORD *)v316 = &v282;
              *(_QWORD *)&v316[8] = sub_1416BCB10;
              *(_QWORD *)&v316[16] = &v279;
              *(_QWORD *)&v316[24] = sub_1416BCB10;
              *(_QWORD *)&v316[32] = &v309;
              *(_QWORD *)&v316[40] = sub_1400015F0;
              *(_QWORD *)&v316[48] = &v286;
              *(_QWORD *)&v316[56] = sub_1400015F0;
              sub_1416ABFD0(&v291, &unk_141A5F30E, v316);
              if ( v309.m128i_i64[0] )
                sub_140001660(v309.m128i_i64[1], v309.m128i_i64[0], 1);
              v245 = v322;
              v322[1].m128i_i64[0] = v291.m256i_i64[2];
              *v245 = *(__m128i *)v291.m256i_i8;
              v246 = _mm_loadu_si128(&v299);
              *(__m128i *)v316 = v246;
              *(_QWORD *)&v316[16] = v300;
              *(_QWORD *)&v316[40] = *(_QWORD *)v306;
              *(__m128i *)&v316[24] = _mm_loadu_si128(&v305);
              *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
              *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
              *(__m128i *)(a1 + 8) = v246;
              *(_QWORD *)(a1 + 56) = 1;
              *(_QWORD *)(a1 + 64) = v245;
              *(_QWORD *)(a1 + 72) = 1;
              *(_QWORD *)a1 = -1;
              if ( v286.m128i_i64[0] )
                sub_140001660(v286.m128i_i64[1], v286.m128i_i64[0], 1);
              sub_1403FBDC0((__int64)&v307);
              if ( v307.m512i_i64[0] )
                sub_140001660(v307.m512i_i64[1], v307.m512i_i64[0] << 6, 8);
              sub_1403FAE40(&v307.m512i_u64[3]);
              if ( v307.m512i_i64[3] )
                sub_140001660(v307.m512i_i64[4], 24 * v307.m512i_i64[3], 8);
LABEL_294:
              sub_1403FAE40(&v296);
              if ( v296 )
                sub_140001660(v297, 24LL * (_QWORD)v296, 8);
              v181 = v277.m128i_i64[0];
              if ( v277.m128i_i64[0] )
              {
                v182 = 1;
                v180 = (__int64)v312;
                goto LABEL_298;
              }
LABEL_299:
              sub_1403FAE40(&v303.m256i_u64[1]);
              v247 = v303.m256i_i64[1];
              if ( !v303.m256i_i64[1] )
                return a1;
              v248 = v303.m256i_i64[2];
LABEL_301:
              sub_140001660(v248, 24 * v247, 8);
              return a1;
            }
LABEL_221:
            v299.m128i_i64[0] = v206;
            *(_QWORD *)v316 = v307.m512i_i64[4];
            *(_QWORD *)&v316[8] = v307.m512i_i64[4] + 24 * v206;
            *(_QWORD *)&v316[16] = 5;
            sub_1403EC7B0((unsigned __int64 *)&v309, v316);
            v207 = v309.m128i_i64[1];
            sub_140D1EE10((unsigned int)v316, v309.m128i_i32[2], *(_DWORD *)v310, (unsigned int)&unk_141A5D1EC, 3);
            v291.m256i_i64[2] = *(_QWORD *)&v316[16];
            *(__m128i *)v291.m256i_i8 = _mm_loadu_si128((const __m128i *)v316);
            *(_QWORD *)v316 = &v299;
            *(_QWORD *)&v316[8] = sub_1416BCB10;
            *(_QWORD *)&v316[16] = &v291;
            *(_QWORD *)&v316[24] = sub_1400015F0;
            sub_1416ABFD0(&v305, &unk_141A5F2ED, v316);
            v322 = (__m128i *)v207;
            if ( v291.m256i_i64[0] )
              sub_140001660(v291.m256i_i64[1], v291.m256i_i64[0], 1);
            sub_1403FAE40(&v309);
            if ( v309.m128i_i64[0] )
              sub_140001660(v322, 24 * v309.m128i_i64[0], 8);
            v286 = _mm_loadu_si128(&v305);
            v287 = *(_QWORD *)v306;
            goto LABEL_283;
          }
        }
        else
        {
          v202 = 0;
          v203 = 0;
        }
        v205 = 0;
        do
        {
          v203 += *(_QWORD *)((v202 << 6) + v307.m512i_i64[1] + 56 + v205);
          v205 += 64;
        }
        while ( (v160.m128i_i8[0] & 3) << 6 != v205 );
        goto LABEL_220;
      case 26LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A556A0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 10)), (__m128i)xmmword_141A55690))) != 0xFFFF )
          goto LABEL_79;
        sub_140F32530(a1, a2, *(unsigned __int8 *)(a3 + 364), *(unsigned __int8 *)(a3 + 382));
        return a1;
      case 27LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55660),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 11)), (__m128i)xmmword_141A55650))) != 0xFFFF )
          goto LABEL_79;
        sub_140F35E20(a1, a2, *(unsigned __int8 *)(a3 + 364), a6);
        return a1;
      case 28LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55620),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 12)), (__m128i)xmmword_141A55610))) != 0xFFFF )
          goto LABEL_79;
        sub_140F39BB0(a1, (__int64)a2);
        return a1;
      case 32LL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a4), (__m128i)xmmword_141A55640),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a4 + 16)), (__m128i)xmmword_141A55630))) != 0xFFFF )
          goto LABEL_79;
        if ( !*(_BYTE *)(a3 + 364) )
        {
          nullsub_1(a7);
          v73 = sub_140001650(24, 8);
          if ( v73 )
          {
            v75 = (__m128i *)v73;
            nullsub_1(v74);
            v76 = sub_140001650(32, 1);
            if ( !v76 )
            {
              v322 = v75;
              sub_141938D2B(1, 32);
            }
            *(_OWORD *)(v76 + 16) = xmmword_141A5DFCC;
            *(__m128i *)v76 = _mm_loadu_si128((const __m128i *)&xmmword_141A5DFBC);
            v75->m128i_i64[0] = 32;
            v75->m128i_i64[1] = v76;
            v75[1].m128i_i64[0] = 32;
            v307.m512i_i64[0] = 1;
            v307.m512i_i64[1] = (__int64)v75;
            v307.m512i_i64[2] = 1;
            v309.m128i_i64[0] = 0;
            v309.m128i_i64[1] = 8;
            *(_QWORD *)v310 = 0;
            nullsub_1(v77);
            v78 = sub_140001650(24, 8);
            if ( !v78 )
              sub_141938D11(8, 24);
            v25 = (__m128i *)v78;
            nullsub_1(v79);
            v80 = (_OWORD *)sub_140001650(60, 1);
            if ( !v80 )
            {
              v322 = v25;
              sub_141938D2B(1, 60);
            }
            *(_OWORD *)((char *)v80 + 44) = *(__int128 *)((char *)&xmmword_141A61922 + 12);
            v80[2] = xmmword_141A61922;
            v80[1] = xmmword_141A61912;
            *v80 = xmmword_141A61902;
            v25->m128i_i64[0] = 60;
            v25->m128i_i64[1] = (__int64)v80;
            v25[1].m128i_i64[0] = 60;
            goto LABEL_103;
          }
LABEL_342:
          sub_141938D11(8, 24);
        }
        v16 = *(void (__fastcall **)(_BYTE *, __int64))(a7 + 40);
        sub_14024C500(v316, a2);
        if ( !(*(_QWORD *)&v316[64] | *(_QWORD *)&v316[16]) )
        {
          sub_1403FAE40(v316);
          if ( *(_QWORD *)v316 )
            sub_140001660(*(_QWORD *)&v316[8], 24LL * *(_QWORD *)v316, 8);
          sub_1403FAE40(&v316[24]);
          if ( *(_QWORD *)&v316[24] )
            sub_140001660(*(_QWORD *)&v316[32], 24LL * *(_QWORD *)&v316[24], 8);
          nullsub_1(v17);
          v18 = sub_140001650(24, 8);
          if ( v18 )
          {
            v20 = (__m128i *)v18;
            nullsub_1(v19);
            v21 = sub_140001650(32, 1);
            if ( !v21 )
            {
              v322 = v20;
              sub_141938D2B(1, 32);
            }
            *(_OWORD *)(v21 + 16) = xmmword_141A5DFCC;
            *(__m128i *)v21 = _mm_loadu_si128((const __m128i *)&xmmword_141A5DFBC);
            v20->m128i_i64[0] = 32;
            v20->m128i_i64[1] = v21;
            v20[1].m128i_i64[0] = 32;
            v307.m512i_i64[0] = 1;
            v307.m512i_i64[1] = (__int64)v20;
            v307.m512i_i64[2] = 1;
            v309.m128i_i64[0] = 0;
            v309.m128i_i64[1] = 8;
            *(_QWORD *)v310 = 0;
            nullsub_1(v22);
            v23 = sub_140001650(24, 8);
            if ( !v23 )
              sub_141938D11(8, 24);
            v25 = (__m128i *)v23;
            nullsub_1(v24);
            v26 = (_OWORD *)sub_140001650(58, 1);
            if ( !v26 )
            {
              v322 = v25;
              sub_141938D2B(1, 58);
            }
            *(_OWORD *)((char *)v26 + 42) = *(__int128 *)((char *)&xmmword_141A619F4 + 10);
            v26[2] = xmmword_141A619F4;
            v26[1] = xmmword_141A619E4;
            *v26 = xmmword_141A619D4;
            v25->m128i_i64[0] = 58;
            v25->m128i_i64[1] = (__int64)v26;
            v25[1].m128i_i64[0] = 58;
LABEL_103:
            *(_QWORD *)&v316[16] = v307.m512i_i64[2];
            v81 = _mm_loadu_si128((const __m128i *)&v307);
            *(__m128i *)v316 = v81;
            *(_QWORD *)&v316[40] = *(_QWORD *)v310;
            *(__m128i *)&v316[24] = _mm_loadu_si128(&v309);
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v316[32];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v316[16];
            *(__m128i *)(a1 + 8) = v81;
            *(_QWORD *)(a1 + 56) = 1;
            *(_QWORD *)(a1 + 64) = v25;
            *(_QWORD *)(a1 + 72) = 1;
            *(_QWORD *)a1 = -1;
            return a1;
          }
          goto LABEL_342;
        }
        sub_1403FAE40(v316);
        if ( *(_QWORD *)v316 )
          sub_140001660(*(_QWORD *)&v316[8], 24LL * *(_QWORD *)v316, 8);
        sub_1403FAE40(&v316[24]);
        if ( *(_QWORD *)&v316[24] )
          sub_140001660(*(_QWORD *)&v316[32], 24LL * *(_QWORD *)&v316[24], 8);
        v16(v316, a6);
        if ( *(_DWORD *)v316 != -1 )
        {
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v316[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v316[64];
          v121 = _mm_loadu_si128((const __m128i *)v316);
          v122 = _mm_loadu_si128((const __m128i *)&v316[16]);
          v123 = *(_OWORD *)&v316[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v316[48];
          *(_OWORD *)(a1 + 32) = v123;
          *(__m128i *)(a1 + 16) = v122;
          *(__m128i *)a1 = v121;
          return a1;
        }
        sub_1402620D0(v316, a2, 0);
        v154 = *(_QWORD *)v316;
        v309 = *(__m128i *)&v316[8];
        *(_OWORD *)v310 = *(_OWORD *)&v316[24];
        *(_OWORD *)&v310[16] = *(_OWORD *)&v316[40];
        *(_OWORD *)&v310[32] = *(_OWORD *)&v316[56];
        v311[0] = *(__m128i *)&v316[72];
        if ( *(_QWORD *)v316 != -1 )
        {
          v155 = *(_QWORD *)&v316[88];
          *(__m128i *)(a1 + 72) = v311[0];
          v156 = _mm_load_si128(&v309);
          v157 = _mm_load_si128((const __m128i *)v310);
          v158 = *(_OWORD *)&v310[16];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v310[32];
          *(_OWORD *)(a1 + 40) = v158;
          *(__m128i *)(a1 + 24) = v157;
          *(__m128i *)(a1 + 8) = v156;
          *(_QWORD *)a1 = v154;
          *(_QWORD *)(a1 + 88) = v155;
          return a1;
        }
        *(__m128i *)v307.m512i_i8 = v309;
        *(__m128i *)&v307.m512i_u64[2] = _mm_load_si128((const __m128i *)v310);
        *(_OWORD *)&v307.m512i_u64[4] = *(_OWORD *)&v310[16];
        *(_OWORD *)&v307.m512i_u64[6] = *(_OWORD *)&v310[32];
        v308 = _mm_load_si128(v311);
        LOBYTE(v153) = 1;
        sub_140F41CE0(v316, a2, v153);
        if ( *(_QWORD *)&v316[40] == 2 && (v195 = *(_QWORD *)&v316[32], **(_WORD **)&v316[32] == 27503) )
        {
          v320 = 1;
          v322 = (__m128i *)sub_140C23890(24);
          v309.m128i_i64[0] = (__int64)&v307.m512i_i64[6];
          v309.m128i_i64[1] = (__int64)sub_1416BCB10;
          *(_QWORD *)v310 = &v307.m512i_i64[7];
          *(_QWORD *)&v310[8] = sub_1416BCB10;
          sub_1416ABFD0(&v277, &unk_141A6197B, &v309);
          v259 = v322;
          v322[1].m128i_i64[0] = v278;
          *v259 = _mm_loadu_si128(&v277);
          v305.m128i_i64[0] = 1;
          v305.m128i_i64[1] = (__int64)v259;
          *(_QWORD *)v306 = 1;
          if ( v308.m128i_i64[1] )
          {
            sub_140D1EE10((unsigned int)&v309, v307.m512i_i32[2], v307.m512i_i32[4], (unsigned int)&unk_141A5B7F2, 3);
            v291.m256i_i64[2] = *(_QWORD *)v310;
            *(__m128i *)v291.m256i_i8 = _mm_loadu_si128(&v309);
            v309.m128i_i64[0] = (__int64)&v308.m128i_i64[1];
            v309.m128i_i64[1] = (__int64)sub_1416BCB10;
            *(_QWORD *)v310 = &v291;
            *(_QWORD *)&v310[8] = sub_1400015F0;
            sub_1416ABFD0(&v286, &unk_141A619B1, &v309);
            if ( v291.m256i_i64[0] )
              sub_140001660(v291.m256i_i64[1], v291.m256i_i64[0], 1);
            sub_1401F4600(&v305, &v286);
          }
          v322 = (__m128i *)sub_140C23890(24);
          nullsub_1(v260);
          v261 = (void *)sub_140001650(32, 1);
          if ( !v261 )
            sub_141938D2B(1, 32);
          qmemcpy(v261, "thread_model_catalog_consistency", 32);
          v262 = v322;
          v322->m128i_i64[0] = 32;
          v262->m128i_i64[1] = (__int64)v261;
          v262[1].m128i_i64[0] = 32;
          *(__m128i *)(a1 + 56) = _mm_loadu_si128(&v305);
          *(_QWORD *)(a1 + 72) = *(_QWORD *)v306;
          *(_QWORD *)(a1 + 8) = 1;
          *(_QWORD *)(a1 + 16) = v262;
          *(_QWORD *)(a1 + 24) = 1;
          *(_QWORD *)(a1 + 32) = 0;
          *(_QWORD *)(a1 + 40) = 8;
          *(_QWORD *)(a1 + 48) = 0;
          *(_QWORD *)a1 = -1;
          if ( *(_QWORD *)v316 )
            sub_140001660(*(_QWORD *)&v316[8], *(_QWORD *)v316, 1);
          if ( *(_QWORD *)&v316[24] )
            sub_140001660(v195, *(_QWORD *)&v316[24], 1);
          if ( *(_QWORD *)&v316[48] )
            sub_140001660(*(_QWORD *)&v316[56], *(_QWORD *)&v316[48], 1);
          v251 = *(_QWORD *)&v316[72];
          if ( (unsigned __int64)(*(_QWORD *)&v316[72] - 1LL) >= 0xFFFFFFFFFFFFFFFEuLL )
            goto LABEL_310;
          v252 = &v316[80];
        }
        else
        {
          v299.m128i_i64[0] = 0;
          v299.m128i_i64[1] = 8;
          v300 = 0;
          nullsub_1(v194);
          v196 = sub_140001650(24, 8);
          if ( !v196 )
          {
            v318 = 1;
            sub_141938D11(8, 24);
          }
          v198 = (__m128i *)v196;
          nullsub_1(v197);
          v199 = sub_140001650(32, 1);
          if ( !v199 )
          {
            v322 = v198;
            sub_141938D2B(1, 32);
          }
          *(_OWORD *)(v199 + 16) = xmmword_141A5DFCC;
          *(__m128i *)v199 = _mm_loadu_si128((const __m128i *)&xmmword_141A5DFBC);
          v198->m128i_i64[0] = 32;
          v198->m128i_i64[1] = v199;
          v198[1].m128i_i64[0] = 32;
          v305.m128i_i64[0] = 1;
          v305.m128i_i64[1] = (__int64)v198;
          *(_QWORD *)v306 = 1;
          nullsub_1(v200);
          v201 = sub_140001650(24, 8);
          if ( !v201 )
          {
            v314 = 1;
            sub_141938D11(8, 24);
          }
          v322 = (__m128i *)v201;
          if ( *(_QWORD *)&v316[72] == -1 )
          {
            v291.m256i_i64[2] = *(_QWORD *)&v316[64];
            *(__m128i *)v291.m256i_i8 = _mm_loadu_si128((const __m128i *)&v316[48]);
          }
          else
          {
            v291.m256i_i64[0] = *(_QWORD *)&v316[72];
            *(__m128i *)&v291.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v316[80]);
            if ( *(_QWORD *)&v316[48] )
              sub_140001660(*(_QWORD *)&v316[56], *(_QWORD *)&v316[48], 1);
          }
          v309.m128i_i64[0] = (__int64)&v307.m512i_i64[6];
          v309.m128i_i64[1] = (__int64)sub_1416BCB10;
          *(_QWORD *)v310 = &v291;
          *(_QWORD *)&v310[8] = sub_1400015F0;
          sub_1416ABFD0(&v302, &unk_141A6193E, &v309);
          if ( v291.m256i_i64[0] )
            sub_140001660(v291.m256i_i64[1], v291.m256i_i64[0], 1);
          v249 = v322;
          v322[1].m128i_i64[0] = v303.m256i_i64[0];
          *v249 = v302;
          v250 = _mm_loadu_si128(&v299);
          v309 = v250;
          *(_QWORD *)v310 = v300;
          *(_QWORD *)&v310[24] = *(_QWORD *)v306;
          *(__m128i *)&v310[8] = _mm_loadu_si128(&v305);
          *(_OWORD *)(a1 + 40) = __PAIR128__(*(unsigned __int64 *)v306, *(unsigned __int64 *)&v310[16]);
          *(_OWORD *)(a1 + 24) = *(_OWORD *)v310;
          *(__m128i *)(a1 + 8) = v250;
          *(_QWORD *)(a1 + 56) = 1;
          *(_QWORD *)(a1 + 64) = v249;
          *(_QWORD *)(a1 + 72) = 1;
          *(_QWORD *)a1 = -1;
          if ( *(_QWORD *)v316 )
            sub_140001660(*(_QWORD *)&v316[8], *(_QWORD *)v316, 1);
          v251 = *(_QWORD *)&v316[24];
          if ( !*(_QWORD *)&v316[24] )
            goto LABEL_310;
          v252 = &v316[32];
        }
        sub_140001660(*(_QWORD *)v252, v251, 1);
LABEL_310:
        sub_1403FAE40(&v307);
        v247 = v307.m512i_i64[0];
        if ( !v307.m512i_i64[0] )
          return a1;
        v248 = v307.m512i_i64[1];
        goto LABEL_301;
      default:
        goto LABEL_79;
    }
  }
  v309.m128i_i64[0] = (__int64)v270;
  v309.m128i_i64[1] = (__int64)sub_140186EE0;
  v15 = &unk_141A62640;
LABEL_80:
  sub_1416ABFD0(v316, v15, &v309);
  *(_QWORD *)a1 = 10;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)v316);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v316[16];
  return a1;
}
