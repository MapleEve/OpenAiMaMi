// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140d05850
// name: sub_140D05850
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D05850(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __m128i v7; // xmm0
  char *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r12
  __m128i *v13; // r14
  __int64 v14; // rax
  int *v15; // rbx
  __m128i *v16; // rcx
  _QWORD *v17; // r13
  __int64 v18; // rdx
  __m128i *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  int *v22; // r15
  _QWORD *v23; // r13
  __int32 v24; // r14d
  __int64 v25; // rdi
  __int64 v26; // rbx
  __m128i *v27; // r15
  bool v28; // zf
  __int64 v29; // r14
  __m128i *v30; // rdi
  __int32 v31; // r14d
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int32 v35; // r14d
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rdx
  char v40; // al
  char v41; // al
  __int64 v42; // rbx
  __int64 v43; // rdx
  const __m128i *v44; // rdi
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int32 v51; // r15d
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int32 v55; // r15d
  __int64 v56; // rdi
  __int64 v57; // rbx
  __m128i *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rbx
  char v63; // al
  char result; // al
  char v65; // bl
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  _BYTE *v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // r14
  int v78; // eax
  __m128i v79; // xmm0
  __m128i *v80; // r8
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r9
  __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // r10
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r11
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rax
  void *v112; // rcx
  __int64 v113; // rax
  char v114; // r8
  __int64 v115; // r13
  __int64 v116; // rdx
  __int64 v117; // r14
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rbx
  _BYTE *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // rcx
  __int64 v127; // rax
  _QWORD *v128; // rdi
  __int64 v129; // rdx
  __int64 v130; // r15
  __int64 v131; // r15
  _BYTE *v132; // rax
  __int64 *v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 v138; // rax
  const char *v139; // rcx
  __int64 v140; // rax
  char v141; // r8
  __int64 v142; // r13
  __int64 v143; // rdx
  __int64 v144; // rcx
  const __m128i *v145; // rdi
  void *v146; // rbx
  __int64 v147; // rax
  __int64 v148; // r14
  __int64 v149; // rax
  __int64 v150; // rcx
  __m128i v151; // kr10_16
  __int64 v152; // r8
  int v153; // r9d
  __int64 v154; // rax
  __int64 v155; // rbx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  int v159; // r9d
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v164; // rcx
  const char *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rdi
  __int64 v169; // rcx
  __int32 v170; // r14d
  __int64 v171; // rdi
  __int64 v172; // rbx
  __int64 v173; // rax
  __int32 v174; // r14d
  __int64 v175; // rdi
  __int64 v176; // rbx
  __int32 v177; // ebx
  __int64 v178; // rsi
  __int64 v179; // rdi
  _QWORD *v180; // rsi
  __int64 v181; // rdx
  __int64 v182; // rdx
  __int64 v183; // rsi
  __int64 *v184; // rcx
  __int64 v185; // rsi
  __int64 v186; // rcx
  __int64 v187; // rcx
  __int64 v188; // r15
  __int64 v189; // rax
  __int64 v190; // rdi
  __int64 v191; // rax
  __int64 v192; // rdi
  const __m128i *v193; // r13
  __m128i v194; // kr30_16
  __int64 v195; // r8
  int v196; // r9d
  __int64 v197; // rax
  _QWORD *v198; // r14
  __int64 v199; // rax
  __int64 v200; // rbx
  __int64 v201; // rdx
  __int64 v202; // r8
  __int64 v203; // rbx
  _QWORD *v204; // r14
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // r8
  __int64 v208; // r9
  __int32 v209; // r14d
  __int64 v210; // rdi
  __int64 v211; // rbx
  __int64 v212; // rdx
  __int64 v213; // rdx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rax
  __m128i *v217; // r8
  const char *v218; // rax
  _DWORD v219[4]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v220; // [rsp+38h] [rbp-48h] BYREF
  __int64 v221; // [rsp+48h] [rbp-38h]
  __int64 v222; // [rsp+B0h] [rbp+30h]
  __int64 v223; // [rsp+B8h] [rbp+38h]
  __int64 v224; // [rsp+C0h] [rbp+40h]
  __int64 v225; // [rsp+C8h] [rbp+48h]
  __int64 v226; // [rsp+D0h] [rbp+50h]
  __int64 v227; // [rsp+D8h] [rbp+58h]
  __int64 *v228; // [rsp+E0h] [rbp+60h]
  __int64 v229; // [rsp+E8h] [rbp+68h]
  __int64 v230; // [rsp+F0h] [rbp+70h]
  __int64 v231; // [rsp+100h] [rbp+80h]
  __int64 v232; // [rsp+108h] [rbp+88h]
  unsigned __int128 v233; // [rsp+110h] [rbp+90h] BYREF
  __int64 v234; // [rsp+120h] [rbp+A0h]
  __int64 v235; // [rsp+128h] [rbp+A8h]
  __int64 *v236; // [rsp+130h] [rbp+B0h]
  __int64 v237; // [rsp+138h] [rbp+B8h]
  __int64 *v238; // [rsp+140h] [rbp+C0h]
  __int64 v239; // [rsp+148h] [rbp+C8h]
  __int64 *v240; // [rsp+150h] [rbp+D0h]
  __int64 v241; // [rsp+158h] [rbp+D8h]
  __int64 v242; // [rsp+160h] [rbp+E0h]
  __int64 v243; // [rsp+168h] [rbp+E8h]
  __int64 v244; // [rsp+170h] [rbp+F0h]
  __int64 *v245; // [rsp+178h] [rbp+F8h]
  __int64 v246; // [rsp+180h] [rbp+100h]
  __int64 *v247; // [rsp+188h] [rbp+108h]
  __int64 v248; // [rsp+190h] [rbp+110h]
  __m128i *v249; // [rsp+198h] [rbp+118h]
  __m128i *v250; // [rsp+1A0h] [rbp+120h]
  __int64 *v251; // [rsp+1A8h] [rbp+128h]
  __m128i *v252; // [rsp+1B0h] [rbp+130h]
  __m128i *v253; // [rsp+1B8h] [rbp+138h]
  __int64 v254; // [rsp+1C0h] [rbp+140h]
  __int64 *v255; // [rsp+1C8h] [rbp+148h]
  __m128i *v256; // [rsp+1D0h] [rbp+150h]
  __int64 *v257; // [rsp+1D8h] [rbp+158h]
  unsigned __int128 v258; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v259; // [rsp+1F0h] [rbp+170h]
  __int64 v260; // [rsp+200h] [rbp+180h]
  __int64 *v261; // [rsp+208h] [rbp+188h]
  unsigned __int128 v262; // [rsp+210h] [rbp+190h] BYREF
  __int128 v263; // [rsp+220h] [rbp+1A0h]
  __int64 v264; // [rsp+230h] [rbp+1B0h]
  __int64 v265; // [rsp+238h] [rbp+1B8h]
  const char *v266; // [rsp+240h] [rbp+1C0h]
  __m128i *v267; // [rsp+248h] [rbp+1C8h]
  __m128i *v268; // [rsp+250h] [rbp+1D0h]
  __int64 v269; // [rsp+258h] [rbp+1D8h]
  __int64 v270; // [rsp+260h] [rbp+1E0h]

  v270 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 433);
  v269 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_BYTE *)(a1 + 435) = 0;
      *(_BYTE *)(a1 + 434) = *(_BYTE *)(a1 + 432);
      v7 = _mm_loadu_si128((const __m128i *)a1);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 16);
      *(__m128i *)(a1 + 48) = v7;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 1;
      *(_OWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 96) = 1;
      *(_QWORD *)(a1 + 104) = 0;
      goto LABEL_98;
    case 1LL:
      sub_1416C3400(&off_1417BBF20, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BBF20, a2, a3, a4);
    case 3LL:
      v18 = *(_QWORD *)(a1 + 440);
      break;
    case 4LL:
      v13 = (__m128i *)(a1 + 546);
      v14 = *(unsigned __int8 *)(a1 + 546);
      v268 = (__m128i *)(a1 + 440);
      switch ( v14 )
      {
        case 0LL:
          v10 = *(_QWORD *)(a1 + 472);
          v11 = *(_QWORD *)(a1 + 480);
          v12 = *(_QWORD *)(a1 + 512);
          v15 = *(int **)(a1 + 520);
          v16 = *(__m128i **)(a1 + 528);
          v17 = *(_QWORD **)(v5 + 536);
          goto LABEL_126;
        case 1LL:
          v229 = (__int64)v268;
          sub_1416C3400(&off_1417BC0B0, a2, a3, a4);
        case 2LL:
          v229 = (__int64)v268;
          sub_1416C3420(&off_1417BC0B0, a2, a3, a4);
        case 3LL:
          goto LABEL_17;
        case 4LL:
          goto LABEL_10;
        case 5LL:
          goto LABEL_299;
      }
    case 5LL:
      v19 = (__m128i *)(a1 + 513);
      v20 = *(unsigned __int8 *)(a1 + 513);
      v268 = (__m128i *)(a1 + 440);
      switch ( v20 )
      {
        case 0LL:
          v10 = *(_QWORD *)(a1 + 472);
          v11 = *(_QWORD *)(a1 + 480);
          v12 = *(_QWORD *)(a1 + 488);
          v21 = a1;
          v22 = *(int **)(a1 + 496);
          v23 = *(_QWORD **)(a1 + 504);
          goto LABEL_116;
        case 1LL:
          v226 = (__int64)v268;
          sub_1416C3400(&off_1417BC060, a2, a3, a4);
        case 2LL:
          v226 = (__int64)v268;
          sub_1416C3420(&off_1417BC060, a2, a3, a4);
        case 3LL:
          goto LABEL_28;
        case 4LL:
          goto LABEL_26;
        case 5LL:
          goto LABEL_225;
      }
    case 6LL:
      v8 = (char *)(a1 + 538);
      v9 = *(unsigned __int8 *)(a1 + 538);
      v268 = (__m128i *)(a1 + 440);
      switch ( v9 )
      {
        case 0LL:
          v10 = *(_QWORD *)(a1 + 456);
          v11 = *(_QWORD *)(a1 + 464);
          v12 = *(_QWORD *)(a1 + 528);
          goto LABEL_48;
        case 1LL:
          v225 = (__int64)v268;
          sub_1416C3400(&off_1417BBF80, a2, a3, a4);
        case 2LL:
          v225 = (__int64)v268;
          sub_1416C3420(&off_1417BBF80, a2, a3, a4);
        case 3LL:
          goto LABEL_53;
        case 4LL:
          goto LABEL_62;
      }
    case 7LL:
      goto LABEL_239;
    case 8LL:
      goto LABEL_252;
  }
  while ( 1 )
  {
    sub_1406BBCA0(v219, v18, a2);
    if ( v219[0] == -3 )
    {
      result = 1;
      v65 = 3;
      goto LABEL_309;
    }
    v5 = v269;
    sub_141684120(v269 + 112, v219, 136);
    if ( *(_DWORD *)(v5 + 112) == -2 )
      goto LABEL_251;
    v268 = (__m128i *)(v5 + 440);
    *(_BYTE *)(v5 + 435) = 1;
    sub_141684120(v5 + 248, v219, 136);
    if ( *(_DWORD *)(v5 + 248) != -1 )
    {
      v155 = (__int64)v268;
      sub_141684120(v268, v219, 136);
      *(_QWORD *)&v258 = v155;
      *((_QWORD *)&v258 + 1) = sub_140F8DAB0;
      sub_14149C0F0(&v262, &unk_1417BBF38, &v258);
      v157 = *((_QWORD *)&v262 + 1);
      v156 = v262;
      v158 = v263;
      v159 = *(_DWORD *)(v269 + 48);
      v160 = *(_QWORD *)(v269 + 56);
      *(_QWORD *)(v269 + 48) = 0;
      if ( v159 == 1 )
      {
        v262 = __PAIR128__(v157, v156);
        *(_QWORD *)&v263 = v158;
        sub_140843D60(&v258, v160, &v262);
        v156 = v258;
        if ( (unsigned __int64)v258 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v258 )
        {
          v157 = *((_QWORD *)&v258 + 1);
          goto LABEL_237;
        }
      }
      else if ( (unsigned __int64)(v156 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_237:
        sub_140001660(v157, v156, 1);
      }
      *(_QWORD *)&v233 = v155;
      *((_QWORD *)&v233 + 1) = sub_140F8DAB0;
      sub_14149C0F0(&v262, &unk_1417BBF38, &v233);
      v5 = v269;
      v173 = v269 + 40;
      v258 = v262;
      v259.m128i_i64[0] = v263;
      *(_QWORD *)(v269 + 576) = 2;
      *(__m128i *)(v5 + 584) = _mm_load_si128((const __m128i *)&v258);
      *(_QWORD *)(v5 + 600) = v259.m128i_i64[0];
      *(_QWORD *)(v5 + 608) = v173;
      *(_BYTE *)(v5 + 776) = 0;
LABEL_239:
      v268 = (__m128i *)(v5 + 576);
      sub_140CF1670(&v262, v5 + 576, a2);
      v174 = v262;
      if ( (_QWORD)v262 == -2 )
      {
        result = 1;
        v65 = 7;
        goto LABEL_309;
      }
      v175 = *((_QWORD *)&v262 + 1);
      v176 = v263;
      sub_140527CF0((__int64)v268);
      if ( v174 != -1 && v174 != 3 && v175 )
        sub_140001660(v176, v175, 1);
      sub_140BEFB60(v269 + 440);
      v5 = v269;
      if ( *(_DWORD *)(v269 + 248) != -1 )
        goto LABEL_250;
      v73 = (_BYTE *)(v269 + 435);
      if ( !*(_BYTE *)(v269 + 435) )
      {
LABEL_249:
        *v73 = 0;
LABEL_250:
        *(_BYTE *)(v5 + 435) = 0;
LABEL_251:
        *(_QWORD *)(v5 + 440) = 3;
        *(_QWORD *)(v5 + 472) = v5 + 40;
        *(_BYTE *)(v5 + 640) = 0;
LABEL_252:
        v268 = (__m128i *)(v5 + 440);
        sub_140CF1670(&v262, v5 + 440, a2);
        v177 = v262;
        if ( (_QWORD)v262 == -2 )
        {
          result = 1;
          v65 = 8;
          goto LABEL_309;
        }
        v178 = *((_QWORD *)&v262 + 1);
        v179 = v263;
        sub_140527CF0((__int64)v268);
        if ( v177 != -1 && v177 != 3 && v178 )
          sub_140001660(v179, v178, 1);
        v180 = (_QWORD *)v269;
        v181 = *(_QWORD *)(v269 + 88);
        if ( v181 )
          sub_140001660(*(_QWORD *)(v269 + 96), v181, 1);
        v182 = v180[8];
        if ( v182 )
          sub_140001660(v180[9], v182, 1);
        if ( v180[6] )
        {
          v183 = *(_QWORD *)(v269 + 56);
          if ( v183 )
          {
            v268 = (__m128i *)(v269 + 56);
            if ( (sub_1412F1370(v183 + 48) & 5) == 1 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v183 + 32) + 16LL))(*(_QWORD *)(v183 + 40));
            v184 = (__int64 *)v268;
            if ( v268->m128i_i64[0] && !_InterlockedDecrement64((volatile signed __int64 *)v268->m128i_i64[0]) )
              sub_140573FA0(v184);
          }
        }
        v268 = (__m128i *)(v269 + 40);
        v185 = *(_QWORD *)(v269 + 40);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v185 + 496)) )
        {
          _InterlockedOr64(
            (volatile signed __int64 *)(sub_1406AE130(
                                          v185 + 128,
                                          _InterlockedExchangeAdd64((volatile signed __int64 *)(v185 + 136), 1u))
                                      + 1040),
            0x200000000uLL);
          sub_1411FE520(v185 + 256);
        }
        v186 = (__int64)v268;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v268->m128i_i64[0]) )
          sub_140574470(v186);
        v187 = v269;
        v65 = 1;
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v269 + 32)) )
        {
          sub_1405740A0(v187 + 32);
          result = 0;
          goto LABEL_309;
        }
        result = 0;
        goto LABEL_310;
      }
LABEL_247:
      if ( !__OFSUB__(0, *(_QWORD *)(v5 + 256)) )
        sub_14052DEF0(v5 + 256);
      goto LABEL_249;
    }
    v68 = *(_QWORD *)(v5 + 256);
    v71 = v68 ^ 0x8000000000000000uLL;
    v72 = 5;
    if ( v68 < 0 )
      v72 = *(_QWORD *)(v5 + 256) ^ 0x8000000000000000uLL;
    if ( v72 )
    {
      if ( v72 == 4 )
      {
        v73 = (_BYTE *)(v5 + 435);
        goto LABEL_247;
      }
      goto LABEL_87;
    }
    *(__m128i *)(v5 + 384) = _mm_loadu_si128(&v220);
    v11 = v221;
    *(_QWORD *)(v5 + 400) = v221;
    if ( v11 < 0 )
    {
      v74 = 0;
      goto LABEL_109;
    }
    v10 = 1;
    if ( v11 )
    {
      v75 = *(_QWORD *)(v5 + 392);
      nullsub_1(v71);
      v76 = sub_140001650(v11, 1);
      if ( !v76 )
      {
        v242 = v11;
        v74 = 1;
LABEL_109:
        sub_1416C2D4B(v74, v242);
      }
      v77 = v76;
      sub_141684120(v76, v75, v11);
      v10 = v77;
    }
    *(_QWORD *)(v5 + 408) = v11;
    *(_QWORD *)(v5 + 416) = v10;
    *(_QWORD *)(v5 + 424) = v11;
    v78 = *(unsigned __int8 *)(v5 + 434);
    v12 = v5 + 40;
    if ( v78 == 2 )
    {
      *(_QWORD *)(v5 + 456) = v10;
      *(_QWORD *)(v5 + 464) = v11;
      *(_QWORD *)(v5 + 528) = v12;
      v8 = (char *)(v5 + 538);
      *(_BYTE *)(v5 + 538) = 0;
LABEL_48:
      *(_WORD *)(v5 + 536) = 0;
      *(_QWORD *)(v5 + 440) = v10;
      *(_QWORD *)(v5 + 448) = v11;
      v42 = v5 + 472;
      v241 = (__int64)v268;
      v242 = v10;
      sub_1408AA840(v5 + 472, v10, v11);
      v5 = v269;
      *(_BYTE *)(v269 + 537) = 1;
      v43 = *(_QWORD *)(v5 + 472);
      if ( v43 == -1 )
      {
        *(_QWORD *)(v5 + 544) = *(_QWORD *)(v5 + 480);
        *(_QWORD *)&v262 = v5 + 544;
        *((_QWORD *)&v262 + 1) = sub_14142D3F0;
        *(_QWORD *)&v263 = v268;
        *((_QWORD *)&v263 + 1) = sub_14041F680;
        v230 = (__int64)v268;
        sub_14149C0F0(&v258, &unk_1417BBF54, &v262);
        v233 = v258;
        v234 = v259.m128i_i64[0];
        v5 = v269;
        *(_QWORD *)(v269 + 552) = 2;
        *(__m128i *)(v5 + 560) = _mm_load_si128((const __m128i *)&v233);
        *(_QWORD *)(v5 + 576) = v234;
        *(_QWORD *)(v5 + 584) = v12;
        *(_BYTE *)(v5 + 752) = 0;
LABEL_62:
        v267 = (__m128i *)(v5 + 552);
        sub_140CF1670(&v262, v5 + 552, a2);
        v55 = v262;
        if ( (_QWORD)v262 == -2 )
        {
          v63 = 4;
          goto LABEL_80;
        }
        v56 = *((_QWORD *)&v262 + 1);
        v57 = v263;
        v230 = (__int64)v268;
        sub_140527CF0((__int64)v267);
        if ( v55 != -1 && v55 != 3 && v56 )
          sub_140001660(v57, v56, 1);
        v58 = *(__m128i **)(v269 + 544);
        v59 = v58->m128i_i64[0];
        v28 = v58->m128i_i64[0] == 1;
        v267 = v58;
        if ( v28 )
        {
          sub_1401DD260(v58->m128i_i64[1]);
        }
        else if ( !v59 )
        {
          v60 = v267[1].m128i_i64[0];
          if ( v60 )
            sub_140001660(v267->m128i_i64[1], v60, 1);
        }
        sub_140001660(v267, 40, 8);
        v5 = v269;
      }
      else
      {
        v28 = *(_QWORD *)(v5 + 488) == 0;
        *(_BYTE *)(v5 + 537) = 0;
        if ( v28 )
        {
          v61 = *(_QWORD *)(v5 + 496);
          v62 = *(_QWORD *)(v5 + 504);
          if ( v43 )
            sub_140001660(*(_QWORD *)(v5 + 480), v43, 1);
          if ( v61 )
            sub_140001660(v62, v61, 1);
        }
        else
        {
          *(_BYTE *)(v5 + 536) = 1;
          v44 = (const __m128i *)(v5 + 544);
          v45 = *(_OWORD *)(v42 + 16);
          v46 = *(_OWORD *)(v42 + 32);
          *(__m128i *)(v5 + 544) = _mm_loadu_si128((const __m128i *)v42);
          *(_OWORD *)(v5 + 560) = v45;
          *(_OWORD *)(v5 + 576) = v46;
          v47 = *(_QWORD *)(v42 + 48);
          *(_QWORD *)(v5 + 592) = v47;
          v48 = 1;
          if ( (v47 & 1) == 0 )
          {
            v49 = *(_QWORD *)(v5 + 576);
            v50 = *(_QWORD *)(v5 + 584);
            v231 = (__int64)v268;
            v48 = (unsigned __int8)sub_140BA2780(v49, v50, aOffline, 7);
            v5 = v269;
          }
          *(_BYTE *)(v5 + 536) = 0;
          *(_QWORD *)(v5 + 600) = v48;
          *(__m128i *)(v5 + 608) = _mm_loadu_si128(v44);
          *(_QWORD *)(v5 + 624) = v44[1].m128i_i64[0];
          *(_QWORD *)(v5 + 632) = v12;
          *(_BYTE *)(v5 + 800) = 0;
LABEL_53:
          v267 = (__m128i *)(v5 + 600);
          sub_140CF1670(&v262, v5 + 600, a2);
          v51 = v262;
          if ( (_QWORD)v262 == -2 )
          {
            v63 = 3;
LABEL_80:
            *v8 = v63;
            result = 1;
            v65 = 6;
            goto LABEL_309;
          }
          v52 = *((_QWORD *)&v262 + 1);
          v53 = v263;
          v231 = (__int64)v268;
          sub_140527CF0((__int64)v267);
          if ( v51 != -1 && v51 != 3 && v52 )
            sub_140001660(v53, v52, 1);
          v5 = v269;
          v54 = *(_QWORD *)(v269 + 568);
          if ( v54 )
            sub_140001660(*(_QWORD *)(v269 + 576), v54, 1);
          *(_BYTE *)(v5 + 536) = 0;
        }
      }
      *(_WORD *)(v5 + 537) = 256;
      sub_140BEF450(v268);
      goto LABEL_81;
    }
    if ( v78 != 1 )
    {
      v15 = (int *)(v5 + 48);
      v16 = (__m128i *)(v5 + 64);
      v17 = (_QWORD *)(v5 + 88);
      *(_QWORD *)(v5 + 472) = v10;
      *(_QWORD *)(v5 + 480) = v11;
      *(_QWORD *)(v5 + 512) = v12;
      *(_QWORD *)(v5 + 520) = v5 + 48;
      *(_QWORD *)(v5 + 528) = v5 + 64;
      *(_QWORD *)(v5 + 536) = v5 + 88;
      v13 = (__m128i *)(v5 + 546);
      *(_BYTE *)(v5 + 546) = 0;
LABEL_126:
      v267 = v16;
      *(_WORD *)(v5 + 544) = 0;
      *(_QWORD *)&v262 = v10;
      *((_QWORD *)&v262 + 1) = v11;
      v263 = 0;
      v242 = v10;
      v264 = v10;
      v265 = v11;
      v249 = v13;
      v27 = v268;
      v248 = (__int64)v268;
      sub_1408A6200(&v258, &v262);
      v30 = v13;
      if ( (_BYTE)v258 == 0xFF )
      {
        v249 = v13;
        v248 = (__int64)v27;
        sub_140BA5680(&v258);
LABEL_306:
        v30->m128i_i8[0] = 1;
        sub_140BEF760(v27);
        goto LABEL_81;
      }
      v84 = _mm_loadu_si128((const __m128i *)&v258);
      v27[1] = v259;
      *v27 = v84;
      v257 = (__int64 *)v13;
      v256 = v27;
      v85 = sub_141433D50(aHeader_1, 6, v27);
      if ( !v85 || (v257 = (__int64 *)v13, v256 = v27, (v86 = sub_141433D50(aEvent_3, 5, v85)) == 0) )
      {
LABEL_139:
        v30 = v13;
        goto LABEL_305;
      }
      v87 = 0;
      v88 = 1;
      if ( *(_BYTE *)v86 == 3 )
      {
        v88 = *(_QWORD *)(v86 + 16);
        v87 = *(_QWORD *)(v86 + 24);
      }
      if ( v87 != 11 )
      {
        if ( v87 != 16 )
        {
          if ( v87 != 12 )
            goto LABEL_305;
          if ( *(_QWORD *)v88 ^ 0x6174732D6B736174LL | *(unsigned int *)(v88 + 8) ^ 0x64657472LL )
            goto LABEL_305;
          v89 = *v15;
          v90 = *((_QWORD *)v15 + 1);
          *(_QWORD *)v15 = 0;
          if ( v89 != 1 )
            goto LABEL_305;
          *(_QWORD *)&v262 = -1;
          v257 = (__int64 *)v13;
          v256 = v27;
          sub_140843D60(&v258, v90, &v262);
          if ( (unsigned __int64)v258 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v258 )
            sub_140001660(*((_QWORD *)&v258 + 1), v258, 1);
          goto LABEL_139;
        }
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v88), (__m128i)xmmword_1417B7670)) != 0xFFFF )
          goto LABEL_305;
        v257 = (__int64 *)v13;
        v256 = v27;
        v118 = sub_141433D50(aPayload_4, 7, v27);
        if ( v118 )
        {
          v257 = (__int64 *)v13;
          v256 = v27;
          v119 = sub_141433D50(aOutput_3, 6, v118);
          if ( v119 )
          {
            v257 = (__int64 *)v13;
            v256 = v27;
            v120 = sub_141433D50(aSentence, 8, v119);
            v121 = v120;
            if ( v120 )
            {
              v257 = (__int64 *)v13;
              v256 = v27;
              v122 = (_BYTE *)sub_141433D50(aHeartbeat, 9, v120);
              if ( !v122 || *v122 != 1 || (v122[1] & 1) == 0 )
              {
                v251 = (__int64 *)v13;
                v250 = v27;
                v123 = sub_141433D50(aText_13, 4, v121);
                v125 = 0;
                if ( v123 )
                {
                  v125 = 0;
                  v124 = *(_QWORD *)(v123 + 24);
                  if ( *(_BYTE *)v123 == 3 )
                    v125 = *(_QWORD *)(v123 + 16);
                }
                v126 = 1;
                if ( v125 )
                  v126 = v125;
                else
                  v124 = 0;
                v251 = (__int64 *)v13;
                v250 = v27;
                v127 = sub_14033BC10(v126, v124);
                v128 = (_QWORD *)(v269 + 488);
                v251 = (__int64 *)v13;
                v250 = v27;
                sub_1406B5480(v269 + 488, v127, v129);
                v130 = v269;
                *(_BYTE *)(v269 + 544) = 1;
                if ( *(_QWORD *)(v130 + 504) )
                {
                  v255 = (__int64 *)v13;
                  v131 = (__int64)v268;
                  v254 = (__int64)v268;
                  v132 = (_BYTE *)sub_141433D50(aSentenceEnd, 12, v121);
                  v133 = (__int64 *)v267;
                  if ( v132 && *v132 == 1 && (v132[1] & 1) != 0 )
                  {
                    v213 = v267->m128i_i64[1];
                    v214 = v267[1].m128i_i64[0];
                    v215 = *(_QWORD *)(v269 + 496);
                    v216 = *(_QWORD *)(v269 + 504);
                    v255 = (__int64 *)v13;
                    v254 = v131;
                    sub_140AEC150((__int64 *)&v262, v213, v214, v215, v216);
                    v217 = v267;
                    if ( v267->m128i_i64[0] )
                    {
                      sub_140001660(v267->m128i_i64[1], v267->m128i_i64[0], 1);
                      v217 = v267;
                    }
                    v217[1].m128i_i64[0] = v263;
                    *v217 = _mm_loadu_si128((const __m128i *)&v262);
                    v17[2] = 0;
                    v255 = (__int64 *)v13;
                    v254 = v131;
                    sub_14149C500(&v262, v217);
                    v259.m128i_i64[0] = v263;
                    v258 = v262;
                    v5 = v269;
                    *(_QWORD *)(v269 + 552) = 1;
                    *(__m128i *)(v5 + 560) = _mm_load_si128((const __m128i *)&v258);
                    *(_QWORD *)(v5 + 576) = v259.m128i_i64[0];
                    *(_QWORD *)(v5 + 584) = v12;
                    *(_BYTE *)(v5 + 752) = 0;
LABEL_17:
                    v267 = v13;
                    v266 = (const char *)(v5 + 552);
                    sub_140CF1670(&v262, v5 + 552, a2);
                    v31 = v262;
                    if ( (_QWORD)v262 != -2 )
                    {
                      v32 = *((_QWORD *)&v262 + 1);
                      v33 = v263;
                      v255 = (__int64 *)v267;
                      v27 = v268;
                      v254 = (__int64)v268;
                      sub_140527CF0((__int64)v266);
                      if ( v31 != -1 && v31 != 3 && v32 )
                        sub_140001660(v33, v32, 1);
                      goto LABEL_22;
                    }
                    v41 = 3;
                  }
                  else
                  {
                    *(_BYTE *)(v269 + 544) = 0;
                    *(_QWORD *)&v263 = v128[2];
                    v262 = *(_OWORD *)v128;
                    if ( *v17 )
                    {
                      sub_140001660(v17[1], *v17, 1);
                      v133 = (__int64 *)v267;
                    }
                    v17[2] = v263;
                    *(__m128i *)v17 = _mm_load_si128((const __m128i *)&v262);
                    v134 = v133[1];
                    v135 = v133[2];
                    v136 = v17[1];
                    v137 = v17[2];
                    v255 = (__int64 *)v13;
                    v254 = v131;
                    sub_140AEC150((__int64 *)&v233, v134, v135, v136, v137);
                    v5 = v269;
                    *(_QWORD *)(v269 + 552) = 0;
                    *(__m128i *)(v5 + 560) = _mm_loadu_si128((const __m128i *)&v233);
                    *(_QWORD *)(v5 + 576) = v234;
                    *(_QWORD *)(v5 + 584) = v12;
                    *(_BYTE *)(v5 + 752) = 0;
LABEL_10:
                    v267 = v13;
                    v266 = (const char *)(v5 + 552);
                    sub_140CF1670(&v262, v5 + 552, a2);
                    v24 = v262;
                    if ( (_QWORD)v262 != -2 )
                    {
                      v25 = *((_QWORD *)&v262 + 1);
                      v26 = v263;
                      v255 = (__int64 *)v267;
                      v27 = v268;
                      v254 = (__int64)v268;
                      sub_140527CF0((__int64)v266);
                      if ( v24 != -1 )
                      {
                        v28 = v24 == 3;
                        v29 = v269;
                        if ( !v28 && v25 )
                          sub_140001660(v26, v25, 1);
                        v30 = v267;
                        if ( !*(_BYTE *)(v29 + 544) )
                          goto LABEL_25;
                        goto LABEL_23;
                      }
LABEL_22:
                      v29 = v269;
                      v30 = v267;
                      if ( !*(_BYTE *)(v269 + 544) )
                      {
LABEL_25:
                        *(_BYTE *)(v29 + 544) = 0;
LABEL_305:
                        v249 = v30;
                        v248 = (__int64)v27;
                        sub_1400104F0(v27);
                        goto LABEL_306;
                      }
LABEL_23:
                      v34 = *(_QWORD *)(v29 + 488);
                      if ( v34 )
                        sub_140001660(*(_QWORD *)(v29 + 496), v34, 1);
                      goto LABEL_25;
                    }
                    v41 = 4;
                  }
LABEL_308:
                  v267->m128i_i8[0] = v41;
                  result = 1;
                  v65 = 4;
                  goto LABEL_309;
                }
                if ( *v128 )
                  sub_140001660(*(_QWORD *)(v130 + 496), *v128, 1);
                *(_BYTE *)(v130 + 544) = 0;
                v27 = v268;
              }
            }
          }
        }
        v30 = v13;
        v249 = v13;
        v248 = (__int64)v27;
        sub_1400104F0(v27);
        goto LABEL_306;
      }
      if ( *(_QWORD *)v88 ^ 0x6961662D6B736174LL | *(_QWORD *)(v88 + 3) ^ 0x64656C6961662D6BLL )
        goto LABEL_305;
      v253 = v13;
      v252 = v27;
      v138 = sub_141433D50(aHeader_1, 6, v27);
      if ( v138 && (v253 = v13, v252 = v27, (v140 = sub_141433D50(aErrorMessage_0, 13, v138)) != 0) )
      {
        v141 = *(_BYTE *)v140;
        v139 = *(const char **)(v140 + 16);
        v142 = 26;
        if ( *(_BYTE *)v140 == 3 )
          v142 = *(_QWORD *)(v140 + 24);
        v143 = v223;
        if ( v142 < 0 )
        {
          v144 = 0;
          goto LABEL_199;
        }
        v218 = aAliyunFunAsrTa;
        if ( v141 == 3 )
          v218 = v139;
        v266 = v218;
        v188 = v269;
        v267 = (__m128i *)(v269 + 552);
        v190 = 1;
        v191 = 0;
        if ( !v142 )
        {
LABEL_279:
          *(_QWORD *)(v188 + 552) = v191;
          v223 = v190;
          *(_QWORD *)(v188 + 560) = v190;
          *(_QWORD *)(v188 + 568) = v191;
          *(_BYTE *)(v188 + 545) = 1;
          v240 = (__int64 *)v13;
          v192 = (__int64)v268;
          v239 = (__int64)v268;
          v193 = v267;
          sub_14149C500(&v262, v267);
          v194 = (__m128i)v262;
          v195 = v263;
          v196 = *v15;
          v197 = *((_QWORD *)v15 + 1);
          *(_QWORD *)v15 = 0;
          if ( v196 == 1 )
          {
            v262 = (unsigned __int128)v194;
            *(_QWORD *)&v263 = v195;
            v240 = (__int64 *)v13;
            v239 = v192;
            sub_140843D60(&v258, v197, &v262);
            if ( (unsigned __int64)v258 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v258 )
              sub_140001660(*((_QWORD *)&v258 + 1), v258, 1);
            v5 = v269;
          }
          else
          {
            v5 = v269;
            if ( (unsigned __int64)(v194.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v194.m128i_i64[1], v194.m128i_i64[0], 1);
          }
          *(_BYTE *)(v5 + 545) = 0;
          *(_QWORD *)(v5 + 576) = 2;
          *(__m128i *)(v5 + 584) = _mm_loadu_si128(v193);
          *(_QWORD *)(v5 + 600) = v193[1].m128i_i64[0];
          *(_QWORD *)(v5 + 608) = v12;
          *(_BYTE *)(v5 + 776) = 0;
LABEL_299:
          v267 = v13;
          v266 = (const char *)(v5 + 576);
          sub_140CF1670(&v262, v5 + 576, a2);
          v209 = v262;
          if ( (_QWORD)v262 != -2 )
          {
            v210 = *((_QWORD *)&v262 + 1);
            v211 = v263;
            v240 = (__int64 *)v267;
            v27 = v268;
            v239 = (__int64)v268;
            sub_140527CF0((__int64)v266);
            if ( v209 != -1 && v209 != 3 && v210 )
              sub_140001660(v211, v210, 1);
            *(_BYTE *)(v269 + 545) = 0;
            v30 = v267;
            goto LABEL_305;
          }
          v41 = 5;
          goto LABEL_308;
        }
      }
      else
      {
        v188 = v269;
        v267 = (__m128i *)(v269 + 552);
        v142 = 26;
        v266 = aAliyunFunAsrTa;
      }
      nullsub_1(v139);
      v189 = sub_140001650(v142, 1);
      if ( !v189 )
      {
        v143 = v142;
        v27 = v268;
        v30 = v13;
        v144 = 1;
LABEL_199:
        v253 = v30;
        v252 = v27;
        sub_1416C2D4B(v144, v143);
      }
      v190 = v189;
      sub_141684120(v189, v266, v142);
      v191 = v142;
      goto LABEL_279;
    }
    v21 = v5;
    v22 = (int *)(v5 + 48);
    v23 = (_QWORD *)(v21 + 64);
    *(_QWORD *)(v21 + 472) = v10;
    *(_QWORD *)(v21 + 480) = v11;
    *(_QWORD *)(v21 + 488) = v12;
    *(_QWORD *)(v21 + 496) = v22;
    *(_QWORD *)(v21 + 504) = v21 + 64;
    v19 = (__m128i *)(v21 + 513);
    *(_BYTE *)(v21 + 513) = 0;
LABEL_116:
    *(_BYTE *)(v21 + 512) = 0;
    *(_QWORD *)&v262 = v10;
    *((_QWORD *)&v262 + 1) = v11;
    v263 = 0;
    v242 = v10;
    v264 = v10;
    v265 = v11;
    v245 = (__int64 *)v19;
    v244 = (__int64)v268;
    sub_1408A6200(&v258, &v262);
    if ( (_BYTE)v258 != 0xFF )
      break;
    v245 = (__int64 *)v19;
    v38 = (__int64)v268;
    v244 = (__int64)v268;
    sub_140BA5680(&v258);
LABEL_233:
    v19->m128i_i8[0] = 1;
    sub_140BEF600(v38);
LABEL_81:
    v5 = v269;
    v66 = *(_QWORD *)(v269 + 408);
    if ( v66 )
      sub_140001660(*(_QWORD *)(v269 + 416), v66, 1);
    v67 = *(_QWORD *)(v5 + 384);
    if ( v67 )
      sub_140001660(*(_QWORD *)(v5 + 392), v67, 1);
    if ( *(_DWORD *)(v5 + 248) != -1 )
      goto LABEL_97;
    v68 = *(_QWORD *)(v5 + 256);
LABEL_87:
    if ( !__OFSUB__(-v68, 1) )
    {
      v69 = 5;
      if ( v68 < 0 )
        v69 = v68 ^ 0x8000000000000000uLL;
      if ( v69 < 4 )
      {
        v68 = *(_QWORD *)(v5 + 264);
        v70 = 264;
LABEL_94:
        if ( v68 )
          sub_140001660(*(_QWORD *)(v5 + v70 + 8), v68, 1);
        goto LABEL_96;
      }
      v70 = 256;
      if ( v69 != 4 )
        goto LABEL_94;
      v68 = *(_QWORD *)(v5 + 264);
      v70 = 264;
      if ( (unsigned __int64)v68 <= 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_94;
    }
LABEL_96:
    *(_BYTE *)(v5 + 435) = 0;
LABEL_97:
    *(_BYTE *)(v5 + 435) = 0;
LABEL_98:
    v18 = v5 + 32;
    *(_QWORD *)(v5 + 440) = v5 + 32;
  }
  v79 = _mm_loadu_si128((const __m128i *)&v258);
  v80 = v268;
  v268[1] = v259;
  *v80 = v79;
  v261 = (__int64 *)v19;
  v260 = (__int64)v80;
  v81 = sub_141433D50(aType_11, 4, v80);
  if ( !v81 )
  {
LABEL_171:
    v38 = (__int64)v268;
LABEL_232:
    v245 = (__int64 *)v19;
    v244 = v38;
    sub_1400104F0(v38);
    goto LABEL_233;
  }
  v82 = 0;
  v83 = 1;
  if ( *(_BYTE *)v81 == 3 )
  {
    v83 = *(_QWORD *)(v81 + 16);
    v82 = *(_QWORD *)(v81 + 24);
  }
  switch ( v82 )
  {
    case 5LL:
      if ( !(*(_DWORD *)v83 ^ 0x6F727265 | *(unsigned __int8 *)(v83 + 4) ^ 0x72) )
        goto LABEL_163;
      goto LABEL_171;
    case 15LL:
      if ( !(*(_QWORD *)v83 ^ 0x2E6E6F6973736573LL | *(_QWORD *)(v83 + 7) ^ 0x646574616470752ELL) )
      {
        v109 = *v22;
        v110 = *((_QWORD *)v22 + 1);
        *(_QWORD *)v22 = 0;
        if ( v109 == 1 )
        {
          *(_QWORD *)&v262 = -1;
          v261 = (__int64 *)v19;
          v260 = (__int64)v268;
          sub_140843D60(&v258, v110, &v262);
          if ( (unsigned __int64)v258 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( (_QWORD)v258 )
              sub_140001660(*((_QWORD *)&v258 + 1), v258, 1);
          }
        }
      }
      goto LABEL_171;
    case 48LL:
      if ( (unsigned int)sub_1416847B0(v83, aConversationIt, 48) )
        goto LABEL_171;
      v261 = (__int64 *)v19;
      v260 = (__int64)v268;
      v91 = sub_141433D50(aText_13, 4, v268);
      v93 = 0;
      v94 = v269;
      v95 = (__int64)v268;
      if ( v91 )
      {
        v93 = 0;
        v92 = *(_QWORD *)(v91 + 24);
        if ( *(_BYTE *)v91 == 3 )
          v93 = *(_QWORD *)(v91 + 16);
      }
      v96 = 1;
      if ( v93 )
        v96 = v93;
      else
        v92 = 0;
      *(_QWORD *)(v269 + 544) = v96;
      *(_QWORD *)(v94 + 552) = v92;
      v261 = (__int64 *)v19;
      v260 = v95;
      v97 = sub_141433D50(aStash, 5, v95);
      v99 = v269;
      v100 = v269 + 544;
      v101 = 0;
      v102 = (__int64)v268;
      if ( v97 )
      {
        v101 = 0;
        v98 = *(_QWORD *)(v97 + 24);
        if ( *(_BYTE *)v97 == 3 )
          v101 = *(_QWORD *)(v97 + 16);
      }
      v103 = 1;
      if ( v101 )
        v103 = v101;
      else
        v98 = 0;
      *(_QWORD *)(v269 + 560) = v103;
      *(_QWORD *)(v99 + 568) = v98;
      *(_QWORD *)&v262 = v100;
      *((_QWORD *)&v262 + 1) = sub_14041F680;
      *(_QWORD *)&v263 = v99 + 560;
      *((_QWORD *)&v263 + 1) = sub_14041F680;
      v261 = (__int64 *)v19;
      v260 = v102;
      sub_14149C0F0(&v258, &unk_1417BC05D, &v262);
      v267 = v19;
      v224 = *((_QWORD *)&v258 + 1);
      v266 = (const char *)v258;
      v104 = sub_14033BC10(*((_QWORD *)&v258 + 1), v259.m128i_i64[0]);
      v107 = v105;
      if ( v105 < 0 )
      {
        v108 = 0;
        goto LABEL_156;
      }
      v203 = 1;
      v204 = (_QWORD *)v269;
      v38 = (__int64)v268;
      if ( v105 )
      {
        v243 = v104;
        nullsub_1(v106);
        v205 = sub_140001650(v107, 1);
        if ( !v205 )
        {
          v243 = v107;
          v108 = 1;
LABEL_156:
          sub_1416C2D4B(v108, v243);
        }
        v203 = v205;
        sub_141684120(v205, v243, v107);
      }
      v204[65] = v107;
      v204[66] = v203;
      v204[67] = v107;
      if ( v266 )
      {
        sub_140001660(v224, v266, 1);
        v107 = v204[67];
      }
      v243 = v203;
      if ( !v107 )
      {
        v212 = v204[65];
        if ( v212 )
          sub_140001660(v204[66], v212, 1);
        v19 = v267;
        goto LABEL_232;
      }
      v206 = v23[1];
      v207 = v23[2];
      v208 = v204[66];
      v228 = (__int64 *)v267;
      v227 = v38;
      sub_140AEC150((__int64 *)&v233, v206, v207, v208, v107);
      v5 = v269;
      *(_QWORD *)(v269 + 576) = 0;
      *(__m128i *)(v5 + 584) = _mm_loadu_si128((const __m128i *)&v233);
      *(_QWORD *)(v5 + 600) = v234;
      *(_QWORD *)(v5 + 608) = v12;
      *(_BYTE *)(v5 + 776) = 0;
      v19 = v267;
LABEL_28:
      v267 = v19;
      v266 = (const char *)(v5 + 576);
      sub_140CF1670(&v262, v5 + 576, a2);
      v35 = v262;
      if ( (_QWORD)v262 == -2 )
      {
        v40 = 3;
        goto LABEL_235;
      }
      v36 = *((_QWORD *)&v262 + 1);
      v37 = v263;
      v228 = (__int64 *)v267;
      v38 = (__int64)v268;
      v227 = (__int64)v268;
      sub_140527CF0((__int64)v266);
      goto LABEL_30;
    case 50LL:
      if ( (unsigned int)sub_1416847B0(v83, aConversationIt_1, 50) )
        goto LABEL_171;
LABEL_163:
      v247 = (__int64 *)v19;
      v246 = (__int64)v268;
      v111 = sub_141433D50(aError_44, 5, v268);
      if ( !v111 || (v247 = (__int64 *)v19, v246 = (__int64)v268, (v113 = sub_141433D50(aMessage_4, 7, v111)) == 0) )
      {
        v267 = v19;
        v145 = (const __m128i *)(v269 + 520);
        v115 = 27;
        v146 = &unk_1417BC033;
LABEL_202:
        nullsub_1(v112);
        v117 = 1;
        v147 = sub_140001650(v115, 1);
        if ( !v147 )
        {
          v116 = v115;
          v19 = v267;
LABEL_169:
          v247 = (__int64 *)v19;
          v246 = (__int64)v268;
          sub_1416C2D4B(v117, v116);
        }
        v148 = v147;
        sub_141684120(v147, v146, v115);
        v149 = v115;
        goto LABEL_204;
      }
      v114 = *(_BYTE *)v113;
      v112 = *(void **)(v113 + 16);
      v115 = 27;
      if ( *(_BYTE *)v113 == 3 )
        v115 = *(_QWORD *)(v113 + 24);
      v116 = v222;
      if ( v115 < 0 )
      {
        v117 = 0;
        goto LABEL_169;
      }
      v267 = v19;
      v146 = &unk_1417BC033;
      if ( v114 == 3 )
        v146 = v112;
      v145 = (const __m128i *)(v269 + 520);
      v148 = 1;
      v149 = 0;
      if ( v115 )
        goto LABEL_202;
LABEL_204:
      v150 = v269;
      *(_QWORD *)(v269 + 520) = v149;
      v222 = v148;
      *(_QWORD *)(v150 + 528) = v148;
      *(_QWORD *)(v150 + 536) = v149;
      *(_BYTE *)(v150 + 512) = 1;
      v238 = (__int64 *)v267;
      v237 = (__int64)v268;
      sub_14149C500(&v262, v145);
      v151 = (__m128i)v262;
      v152 = v263;
      v153 = *v22;
      v154 = *((_QWORD *)v22 + 1);
      *(_QWORD *)v22 = 0;
      if ( v153 == 1 )
      {
        v262 = (unsigned __int128)v151;
        *(_QWORD *)&v263 = v152;
        v238 = (__int64 *)v267;
        v237 = (__int64)v268;
        sub_140843D60(&v258, v154, &v262);
        if ( (unsigned __int64)v258 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v258 )
          sub_140001660(*((_QWORD *)&v258 + 1), v258, 1);
        v5 = v269;
        v19 = v267;
      }
      else
      {
        v5 = v269;
        v19 = v267;
        if ( (unsigned __int64)(v151.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v151.m128i_i64[1], v151.m128i_i64[0], 1);
      }
      *(_BYTE *)(v5 + 512) = 0;
      *(_QWORD *)(v5 + 544) = 2;
      *(__m128i *)(v5 + 552) = _mm_loadu_si128(v145);
      *(_QWORD *)(v5 + 568) = v145[1].m128i_i64[0];
      *(_QWORD *)(v5 + 576) = v12;
      *(_BYTE *)(v5 + 744) = 0;
LABEL_225:
      v267 = v19;
      v266 = (const char *)(v5 + 544);
      sub_140CF1670(&v262, v5 + 544, a2);
      v170 = v262;
      if ( (_QWORD)v262 != -2 )
      {
        v171 = *((_QWORD *)&v262 + 1);
        v172 = v263;
        v238 = (__int64 *)v267;
        v237 = (__int64)v268;
        sub_140527CF0((__int64)v266);
        if ( v170 != -1 && v170 != 3 && v171 )
          sub_140001660(v172, v171, 1);
        *(_BYTE *)(v269 + 512) = 0;
        v38 = (__int64)v268;
LABEL_231:
        v19 = v267;
        goto LABEL_232;
      }
      v40 = 5;
LABEL_235:
      v267->m128i_i8[0] = v40;
      result = 1;
      v65 = 5;
LABEL_309:
      v187 = v269;
LABEL_310:
      *(_BYTE *)(v187 + 433) = v65;
      return result;
    case 53LL:
      if ( (unsigned int)sub_1416847B0(v83, aConversationIt_0, 53) )
        goto LABEL_171;
      v261 = (__int64 *)v19;
      v260 = (__int64)v268;
      v161 = sub_141433D50(aTranscript, 10, v268);
      v163 = 0;
      if ( v161 )
      {
        v163 = 0;
        v162 = *(_QWORD *)(v161 + 24);
        if ( *(_BYTE *)v161 == 3 )
          v163 = *(_QWORD *)(v161 + 16);
      }
      v164 = 1;
      if ( v163 )
        v164 = v163;
      else
        v162 = 0;
      v261 = (__int64 *)v19;
      v260 = (__int64)v268;
      v165 = (const char *)sub_14033BC10(v164, v162);
      v168 = v166;
      if ( v166 >= 0 )
      {
        v198 = (_QWORD *)v269;
        v38 = (__int64)v268;
        if ( !v166 )
        {
          *(_QWORD *)(v269 + 520) = 0;
          v198[66] = 1;
          v198[67] = 0;
          v232 = 1;
          goto LABEL_232;
        }
        v267 = v19;
        v266 = v165;
        nullsub_1(v167);
        v199 = sub_140001650(v168, 1);
        if ( v199 )
        {
          v200 = v199;
          sub_141684120(v199, v266, v168);
          v198[65] = v168;
          v198[66] = v200;
          v198[67] = v168;
          v201 = v23[1];
          v202 = v23[2];
          v236 = (__int64 *)v267;
          v235 = v38;
          v232 = v200;
          sub_140AEC150((__int64 *)&v262, v201, v202, v200, v168);
          if ( *v23 )
            sub_140001660(v23[1], *v23, 1);
          v23[2] = v263;
          *(__m128i *)v23 = _mm_loadu_si128((const __m128i *)&v262);
          v236 = (__int64 *)v267;
          v235 = v38;
          sub_14149C500(&v262, v23);
          v259.m128i_i64[0] = v263;
          v258 = v262;
          v5 = v269;
          *(_QWORD *)(v269 + 544) = 1;
          *(__m128i *)(v5 + 552) = _mm_load_si128((const __m128i *)&v258);
          *(_QWORD *)(v5 + 568) = v259.m128i_i64[0];
          *(_QWORD *)(v5 + 576) = v12;
          *(_BYTE *)(v5 + 744) = 0;
          v19 = v267;
LABEL_26:
          v267 = v19;
          v266 = (const char *)(v5 + 544);
          sub_140CF1670(&v262, v5 + 544, a2);
          v35 = v262;
          if ( (_QWORD)v262 == -2 )
          {
            v40 = 4;
            goto LABEL_235;
          }
          v36 = *((_QWORD *)&v262 + 1);
          v37 = v263;
          v236 = (__int64 *)v267;
          v38 = (__int64)v268;
          v235 = (__int64)v268;
          sub_140527CF0((__int64)v266);
LABEL_30:
          if ( v35 != -1 && v35 != 3 && v36 )
            sub_140001660(v37, v36, 1);
          v39 = *(_QWORD *)(v269 + 520);
          if ( v39 )
            sub_140001660(*(_QWORD *)(v269 + 528), v39, 1);
          goto LABEL_231;
        }
        v232 = v168;
        v169 = 1;
        v19 = v267;
      }
      else
      {
        v169 = 0;
        v38 = (__int64)v268;
      }
      v261 = (__int64 *)v19;
      v260 = v38;
      sub_1416C2D4B(v169, v232);
    default:
      goto LABEL_171;
  }
}