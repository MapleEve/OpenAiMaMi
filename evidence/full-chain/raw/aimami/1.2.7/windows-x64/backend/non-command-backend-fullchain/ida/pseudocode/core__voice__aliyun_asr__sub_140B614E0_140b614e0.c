// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x140b614e0 | name sub_140B614E0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B614E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __m128i v5; // xmm0
  volatile signed __int64 **v6; // rsi
  __int64 v7; // rbx
  signed __int64 v8; // r15
  __int64 v9; // rdi
  __m128i *v10; // r13
  __int64 v11; // rax
  int *v12; // r12
  __m128i *v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __m128i *v16; // r14
  __int64 v17; // rax
  int *v18; // r12
  _QWORD *v19; // r13
  __int32 v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rbx
  bool v23; // zf
  __int64 v24; // rsi
  __int32 v25; // esi
  __int64 v26; // rdi
  __int64 v27; // rbx
  __m128i *v28; // rbx
  __int64 v29; // rdx
  __int32 v30; // esi
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  char v34; // al
  char v35; // al
  __int64 v36; // r13
  __int64 v37; // rdx
  __m128i v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // rax
  __int64 v41; // r14
  _DWORD *v42; // rsi
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // r15
  __int32 v45; // esi
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int32 v50; // esi
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r12
  unsigned int v56; // ebx
  __m128i v57; // xmm6
  __m128i v58; // xmm7
  __int64 v59; // r8
  __int64 v60; // r8
  char v61; // al
  char result; // al
  char v63; // bl
  __m128i si128; // xmm6
  __m128i v65; // xmm7
  __int64 v66; // rdi
  __m128i v67; // xmm12
  __m128i v68; // xmm13
  __int64 v69; // r8
  __m128i v70; // xmm10
  __m128i v71; // xmm11
  __m128i v72; // xmm8
  __m128i v73; // xmm9
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  char v80; // al
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  _BYTE *v87; // rsi
  __int64 v88; // rcx
  const __m128i *v89; // rdi
  __m128i *v90; // rax
  int v91; // eax
  __m128i v92; // xmm0
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __m128i v96; // xmm0
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // r10
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rax
  char *v114; // rbx
  __int64 v115; // r12
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rcx
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  signed __int64 v125; // rdi
  signed __int64 v126; // rdx
  __int64 v127; // r15
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r8
  _QWORD *v131; // rsi
  __int64 v132; // r12
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // r12
  _BYTE *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // rsi
  __int64 v147; // rcx
  __int64 v148; // rax
  _QWORD *v149; // rdi
  __int64 v150; // rdx
  __int64 v151; // rsi
  _BYTE *v152; // rax
  __int64 *v153; // rcx
  volatile signed __int64 **v154; // rsi
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rax
  signed __int64 v162; // rdi
  signed __int64 v163; // rdx
  __int64 v164; // r15
  __m128i *v165; // r13
  const __m128i *v166; // rbx
  const __m128i *v167; // r14
  __m128i *v168; // rax
  __int64 v169; // r15
  signed __int64 v170; // rax
  __int64 v171; // rcx
  __m128i v172; // kr10_16
  __int64 v173; // r8
  int v174; // r9d
  __int64 v175; // rax
  __m128i v176; // rdi
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  int v180; // r9d
  __int64 v181; // rax
  __int32 v182; // esi
  __int64 v183; // rdi
  __int64 v184; // rbx
  __int64 v185; // rax
  __int32 v186; // esi
  __int64 v187; // rdi
  __int64 v188; // rbx
  __int32 v189; // ebx
  __int64 v190; // rsi
  __int64 v191; // rdi
  _QWORD *v192; // rsi
  __int64 v193; // rdx
  __int64 v194; // rdx
  __int64 v195; // rsi
  __int64 *v196; // rcx
  __int64 v197; // rsi
  __int64 v198; // rcx
  const __m128i *v199; // rbx
  const __m128i *v200; // r14
  __m128i *v201; // rax
  __int64 v202; // r15
  signed __int64 v203; // rax
  __int64 v204; // rcx
  __m128i v205; // kr30_16
  __int64 v206; // r8
  int v207; // r9d
  __int64 v208; // rax
  unsigned __int64 v209; // rdi
  const __m128i *v210; // rbx
  __m128i *v211; // rax
  __m128i *v212; // r14
  __int64 v213; // rdx
  __int64 v214; // r8
  int v215; // r9d
  __int64 v216; // rsi
  unsigned __int64 v217; // rdi
  __int64 v218; // r14
  _QWORD *v219; // rsi
  const __m128i *v220; // rbx
  __m128i *v221; // rax
  __int64 v222; // rdx
  __int64 v223; // r8
  __int64 v224; // r9
  __int32 v225; // esi
  __int64 v226; // rdi
  __int64 v227; // rbx
  __int64 v228; // rdx
  __int64 v229; // rdx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rax
  __m128i *v233; // r8
  __m128i v234; // [rsp+30h] [rbp-50h] BYREF
  __m128i v235; // [rsp+40h] [rbp-40h] BYREF
  signed __int64 v236; // [rsp+50h] [rbp-30h]
  __int64 v237; // [rsp+B8h] [rbp+38h]
  __int64 v238; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v239; // [rsp+C8h] [rbp+48h]
  __int64 v240; // [rsp+D0h] [rbp+50h]
  __int64 v241; // [rsp+D8h] [rbp+58h]
  volatile signed __int64 **v242; // [rsp+E0h] [rbp+60h]
  __int64 *v243; // [rsp+E8h] [rbp+68h]
  __int64 v244; // [rsp+F0h] [rbp+70h]
  volatile signed __int64 **v245; // [rsp+F8h] [rbp+78h]
  volatile signed __int64 **v246; // [rsp+100h] [rbp+80h]
  __int64 v247; // [rsp+108h] [rbp+88h]
  unsigned __int128 v248; // [rsp+110h] [rbp+90h] BYREF
  __int64 v249; // [rsp+120h] [rbp+A0h]
  volatile signed __int64 **v250; // [rsp+130h] [rbp+B0h]
  __int64 *v251; // [rsp+138h] [rbp+B8h]
  volatile signed __int64 **v252; // [rsp+140h] [rbp+C0h]
  __int64 *v253; // [rsp+148h] [rbp+C8h]
  volatile signed __int64 **v254; // [rsp+150h] [rbp+D0h]
  __int64 *v255; // [rsp+158h] [rbp+D8h]
  volatile signed __int64 **v256; // [rsp+160h] [rbp+E0h]
  __int64 *v257; // [rsp+168h] [rbp+E8h]
  volatile signed __int64 **v258; // [rsp+170h] [rbp+F0h]
  signed __int64 v259; // [rsp+178h] [rbp+F8h]
  volatile signed __int64 **v260; // [rsp+180h] [rbp+100h]
  __int64 *v261; // [rsp+188h] [rbp+108h]
  volatile signed __int64 **v262; // [rsp+190h] [rbp+110h]
  __int64 *v263; // [rsp+198h] [rbp+118h]
  volatile signed __int64 **v264; // [rsp+1A0h] [rbp+120h]
  __m128i *v265; // [rsp+1A8h] [rbp+128h]
  volatile signed __int64 **v266; // [rsp+1B0h] [rbp+130h]
  __m128i *v267; // [rsp+1B8h] [rbp+138h]
  volatile signed __int64 **v268; // [rsp+1C0h] [rbp+140h]
  __int64 *v269; // [rsp+1C8h] [rbp+148h]
  volatile signed __int64 **v270; // [rsp+1D0h] [rbp+150h]
  __int64 *v271; // [rsp+1D8h] [rbp+158h]
  __int64 v272; // [rsp+1E0h] [rbp+160h]
  __int64 v273; // [rsp+1E8h] [rbp+168h]
  unsigned __int128 v274; // [rsp+1F0h] [rbp+170h] BYREF
  __m128i v275; // [rsp+200h] [rbp+180h] BYREF
  volatile signed __int64 **v276; // [rsp+210h] [rbp+190h]
  __int64 *v277; // [rsp+218h] [rbp+198h]
  unsigned __int128 v278; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v279; // [rsp+230h] [rbp+1B0h]
  __int64 v280; // [rsp+240h] [rbp+1C0h]
  signed __int64 v281; // [rsp+248h] [rbp+1C8h]
  char *v282; // [rsp+258h] [rbp+1D8h]
  __m128i *v283; // [rsp+260h] [rbp+1E0h]
  volatile signed __int64 **v284; // [rsp+268h] [rbp+1E8h]
  __int64 v285; // [rsp+270h] [rbp+1F0h]
  __int64 v286; // [rsp+278h] [rbp+1F8h]

  v286 = -2;
  v2 = a2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 433);
  v285 = a1;
  v272 = a2;
  switch ( v4 )
  {
    case 0LL:
      *(_BYTE *)(a1 + 435) = 0;
      *(_BYTE *)(a1 + 434) = *(_BYTE *)(a1 + 432);
      v5 = _mm_loadu_si128((const __m128i *)a1);
      *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(__m128i *)(a1 + 48) = v5;
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 1;
      *(_OWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 96) = 1;
      *(_QWORD *)(a1 + 104) = 0;
      goto LABEL_130;
    case 1LL:
      sub_1419393E0(&off_141A2C6E0);
    case 2LL:
      sub_141939400(&off_141A2C6E0);
    case 3LL:
      v15 = *(_QWORD *)(a1 + 440);
      break;
    case 4LL:
      v10 = (__m128i *)(a1 + 546);
      v6 = (volatile signed __int64 **)(a1 + 440);
      switch ( *(_BYTE *)(a1 + 546) )
      {
        case 0:
          v7 = *(_QWORD *)(a1 + 472);
          v8 = *(_QWORD *)(a1 + 480);
          v9 = *(_QWORD *)(a1 + 512);
          v11 = a1;
          v12 = *(int **)(a1 + 520);
          v13 = *(__m128i **)(a1 + 528);
          v14 = *(_QWORD **)(a1 + 536);
          goto LABEL_158;
        case 1:
          v244 = a1 + 440;
          sub_1419393E0(&off_141A2C870);
        case 2:
          v244 = a1 + 440;
          sub_141939400(&off_141A2C870);
        case 3:
          goto LABEL_17;
        case 4:
          goto LABEL_12;
        case 5:
          goto LABEL_330;
      }
    case 5LL:
      v16 = (__m128i *)(a1 + 513);
      v6 = (volatile signed __int64 **)(a1 + 440);
      switch ( *(_BYTE *)(a1 + 513) )
      {
        case 0:
          v7 = *(_QWORD *)(a1 + 472);
          v8 = *(_QWORD *)(a1 + 480);
          v9 = *(_QWORD *)(a1 + 488);
          v17 = a1;
          v18 = *(int **)(a1 + 496);
          v19 = *(_QWORD **)(a1 + 504);
          goto LABEL_148;
        case 1:
          v241 = a1 + 440;
          sub_1419393E0(&off_141A2C820);
        case 2:
          v241 = a1 + 440;
          sub_141939400(&off_141A2C820);
        case 3:
          goto LABEL_29;
        case 4:
          goto LABEL_27;
        case 5:
          goto LABEL_256;
      }
    case 6LL:
      v282 = (char *)(a1 + 538);
      v6 = (volatile signed __int64 **)(a1 + 440);
      switch ( *(_BYTE *)(a1 + 538) )
      {
        case 0:
          v7 = *(_QWORD *)(a1 + 456);
          v8 = *(_QWORD *)(a1 + 464);
          v9 = *(_QWORD *)(a1 + 528);
          goto LABEL_49;
        case 1:
          v240 = a1 + 440;
          sub_1419393E0(&off_141A2C740);
        case 2:
          v240 = a1 + 440;
          sub_141939400(&off_141A2C740);
        case 3:
          v284 = (volatile signed __int64 **)(a1 + 440);
          goto LABEL_73;
        case 4:
          v284 = (volatile signed __int64 **)(a1 + 440);
          goto LABEL_59;
      }
    case 7LL:
      goto LABEL_270;
    case 8LL:
      goto LABEL_283;
  }
  while ( 1 )
  {
    sub_14094BC30(&v234, v15, v2);
    if ( v234.m128i_i32[0] == -3 )
    {
      result = 1;
      v63 = 3;
      goto LABEL_340;
    }
    v3 = v285;
    sub_1418F44E0((__m128i *)(v285 + 112), &v234, 0x88u);
    if ( *(_DWORD *)(v3 + 112) == -2 )
      goto LABEL_282;
    v6 = (volatile signed __int64 **)(v3 + 440);
    *(_BYTE *)(v3 + 435) = 1;
    sub_1418F44E0((__m128i *)(v3 + 248), &v234, 0x88u);
    if ( *(_DWORD *)(v3 + 248) != -1 )
    {
      sub_1418F44E0((__m128i *)(v3 + 440), &v234, 0x88u);
      v176.m128i_i64[0] = v3 + 440;
      *(_QWORD *)&v274 = v3 + 440;
      v176.m128i_i64[1] = (__int64)sub_14119C700;
      *((_QWORD *)&v274 + 1) = sub_14119C700;
      sub_1416ABFD0(&v278, &unk_141A2C6F8, &v274);
      v178 = *((_QWORD *)&v278 + 1);
      v177 = v278;
      v179 = v279;
      v180 = *(_DWORD *)(v285 + 48);
      v181 = *(_QWORD *)(v285 + 56);
      *(_QWORD *)(v285 + 48) = 0;
      if ( v180 == 1 )
      {
        v278 = __PAIR128__(v178, v177);
        *(_QWORD *)&v279 = v179;
        sub_14092A4D0(&v274, v181, &v278);
        v177 = v274;
        if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v274 )
        {
          v178 = *((_QWORD *)&v274 + 1);
          goto LABEL_268;
        }
      }
      else if ( (unsigned __int64)(v177 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_268:
        sub_140001660(v178, v177, 1);
      }
      v248 = (unsigned __int128)v176;
      sub_1416ABFD0(&v278, &unk_141A2C6F8, &v248);
      v3 = v285;
      v185 = v285 + 40;
      v274 = v278;
      v275.m128i_i64[0] = v279;
      *(_QWORD *)(v285 + 576) = 2;
      *(__m128i *)(v3 + 584) = _mm_load_si128((const __m128i *)&v274);
      *(_QWORD *)(v3 + 600) = v275.m128i_i64[0];
      *(_QWORD *)(v3 + 608) = v185;
      *(_BYTE *)(v3 + 776) = 0;
LABEL_270:
      v284 = (volatile signed __int64 **)(v3 + 576);
      sub_140B4C8D0(&v278, v3 + 576, v2);
      v186 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        result = 1;
        v63 = 7;
        goto LABEL_340;
      }
      v187 = *((_QWORD *)&v278 + 1);
      v188 = v279;
      sub_1407A91D0((__int64)v284);
      if ( v186 != -1 && v186 != 3 && v187 )
        sub_140001660(v188, v187, 1);
      sub_140A3C290(v285 + 440);
      v3 = v285;
      if ( *(_DWORD *)(v285 + 248) != -1 )
        goto LABEL_281;
      v87 = (_BYTE *)(v285 + 435);
      if ( !*(_BYTE *)(v285 + 435) )
      {
LABEL_280:
        *v87 = 0;
LABEL_281:
        *(_BYTE *)(v3 + 435) = 0;
LABEL_282:
        *(_QWORD *)(v3 + 440) = 3;
        *(_QWORD *)(v3 + 472) = v3 + 40;
        *(_BYTE *)(v3 + 640) = 0;
LABEL_283:
        v284 = (volatile signed __int64 **)(v3 + 440);
        sub_140B4C8D0(&v278, v3 + 440, v2);
        v189 = v278;
        if ( (_QWORD)v278 == -2 )
        {
          result = 1;
          v63 = 8;
          goto LABEL_340;
        }
        v190 = *((_QWORD *)&v278 + 1);
        v191 = v279;
        sub_1407A91D0((__int64)v284);
        if ( v189 != -1 && v189 != 3 && v190 )
          sub_140001660(v191, v190, 1);
        v192 = (_QWORD *)v285;
        v193 = *(_QWORD *)(v285 + 88);
        if ( v193 )
          sub_140001660(*(_QWORD *)(v285 + 96), v193, 1);
        v194 = v192[8];
        if ( v194 )
          sub_140001660(v192[9], v194, 1);
        if ( v192[6] )
        {
          v195 = *(_QWORD *)(v285 + 56);
          if ( v195 )
          {
            v284 = (volatile signed __int64 **)(v285 + 56);
            if ( (sub_1414FEB50(v195 + 48) & 5) == 1 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v195 + 32) + 16LL))(*(_QWORD *)(v195 + 40));
            v196 = (__int64 *)v284;
            if ( *v284 && !_InterlockedDecrement64(*v284) )
              sub_1409E3B60(v196);
          }
        }
        v284 = (volatile signed __int64 **)(v285 + 40);
        v197 = *(_QWORD *)(v285 + 40);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v197 + 496)) )
        {
          sub_140478710(v197 + 128);
          sub_1413FFF30(v197 + 256);
        }
        if ( !_InterlockedDecrement64(*v284) )
          sub_1409E44B0();
        v198 = v285;
        v63 = 1;
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v285 + 32)) )
        {
          sub_1409E4200(v198 + 32);
          result = 0;
          goto LABEL_340;
        }
        result = 0;
        goto LABEL_341;
      }
LABEL_278:
      if ( !__OFSUB__(0, *(_QWORD *)(v3 + 256)) )
        sub_14040C610(v3 + 256);
      goto LABEL_280;
    }
    v83 = *(_QWORD *)(v3 + 256);
    v86 = 5;
    if ( v83 < 0 )
      v86 = *(_QWORD *)(v3 + 256) ^ 0x8000000000000000uLL;
    if ( v86 )
    {
      if ( v86 == 4 )
      {
        v87 = (_BYTE *)(v3 + 435);
        goto LABEL_278;
      }
      goto LABEL_119;
    }
    *(__m128i *)(v3 + 384) = _mm_loadu_si128(&v235);
    v8 = v236;
    *(_QWORD *)(v3 + 400) = v236;
    if ( v8 < 0 )
    {
      v88 = 0;
      goto LABEL_141;
    }
    v7 = 1;
    if ( v8 )
    {
      v89 = *(const __m128i **)(v3 + 392);
      nullsub_1(v83 ^ 0x8000000000000000uLL);
      v90 = (__m128i *)sub_140001650(v8, 1);
      if ( !v90 )
      {
        v259 = v8;
        v88 = 1;
LABEL_141:
        sub_141938D2B(v88, v259);
      }
      v7 = (__int64)v90;
      sub_1418F44E0(v90, v89, v8);
    }
    *(_QWORD *)(v3 + 408) = v8;
    *(_QWORD *)(v3 + 416) = v7;
    *(_QWORD *)(v3 + 424) = v8;
    v91 = *(unsigned __int8 *)(v3 + 434);
    v9 = v3 + 40;
    if ( v91 != 2 )
      break;
    *(_QWORD *)(v3 + 456) = v7;
    *(_QWORD *)(v3 + 464) = v8;
    *(_QWORD *)(v3 + 528) = v9;
    v282 = (char *)(v3 + 538);
    *(_BYTE *)(v3 + 538) = 0;
LABEL_49:
    *(_WORD *)(v3 + 536) = 0;
    *(_QWORD *)(v3 + 440) = v7;
    *(_QWORD *)(v3 + 448) = v8;
    v36 = v3 + 472;
    v258 = v6;
    v259 = v7;
    sub_140632050(v3 + 472, v7, v8);
    v2 = v272;
    v284 = v6;
    v3 = v285;
    *(_BYTE *)(v285 + 537) = 1;
    v37 = *(_QWORD *)(v3 + 472);
    if ( v37 == -1 )
    {
      *(_QWORD *)(v3 + 544) = *(_QWORD *)(v3 + 480);
      *(_QWORD *)&v278 = v3 + 544;
      *((_QWORD *)&v278 + 1) = sub_14163CE40;
      *(_QWORD *)&v279 = v6;
      *((_QWORD *)&v279 + 1) = sub_140186EE0;
      v245 = v6;
      sub_1416ABFD0(&v274, &unk_141A2C714, &v278);
      v248 = v274;
      v249 = v275.m128i_i64[0];
      v3 = v285;
      *(_QWORD *)(v285 + 552) = 2;
      *(__m128i *)(v3 + 560) = _mm_load_si128((const __m128i *)&v248);
      *(_QWORD *)(v3 + 576) = v249;
      *(_QWORD *)(v3 + 584) = v9;
      *(_BYTE *)(v3 + 752) = 0;
LABEL_59:
      v283 = (__m128i *)(v3 + 552);
      sub_140B4C8D0(&v278, v3 + 552, v2);
      v45 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        v61 = 4;
LABEL_96:
        *v282 = v61;
        result = 1;
        v63 = 6;
        goto LABEL_340;
      }
      v46 = *((_QWORD *)&v278 + 1);
      v47 = v279;
      v245 = v284;
      sub_1407A91D0((__int64)v283);
      if ( v45 != -1 && v45 != 3 && v46 )
        sub_140001660(v47, v46, 1);
      v6 = v284;
      v246 = v284;
      sub_14002F910(v285 + 544);
      goto LABEL_81;
    }
    v23 = *(_QWORD *)(v3 + 488) == 0;
    *(_BYTE *)(v3 + 537) = 0;
    if ( !v23 )
    {
      *(_BYTE *)(v3 + 536) = 1;
      v38 = _mm_loadu_si128((const __m128i *)(v36 + 16));
      v39 = *(_OWORD *)(v36 + 32);
      *(__m128i *)(v3 + 544) = _mm_loadu_si128((const __m128i *)v36);
      *(__m128i *)(v3 + 560) = v38;
      *(_OWORD *)(v3 + 576) = v39;
      v40 = *(_QWORD *)(v36 + 48);
      *(_QWORD *)(v3 + 592) = v40;
      v41 = 1;
      if ( (v40 & 1) != 0 )
        goto LABEL_72;
      v42 = *(_DWORD **)(v3 + 576);
      v43 = *(_QWORD *)(v3 + 584);
      if ( v43 <= 7 )
      {
        if ( v43 != 7 || *v42 ^ 0x6C66666F | *(_DWORD *)((char *)v42 + 3) ^ 0x656E696C )
          goto LABEL_71;
      }
      else
      {
        if ( v43 <= 0x15 )
        {
          v44 = v43 + 1;
          while ( *v42 ^ 0x6C66666F | *(_DWORD *)((char *)v42 + 3) ^ 0x656E696C )
          {
            v42 = (_DWORD *)((char *)v42 + 1);
            if ( --v44 < 8 )
              goto LABEL_71;
          }
          goto LABEL_72;
        }
        v273 = v9;
        *(_QWORD *)&v278 = v42;
        *((_QWORD *)&v278 + 1) = v43;
        *(_QWORD *)&v279 = aFfline;
        *((_QWORD *)&v279 + 1) = 6;
        v55 = 0;
        v56 = 0;
        if ( v43 >= 0x47 )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_141A08340);
          v65 = _mm_load_si128((const __m128i *)&xmmword_141A08280);
          v66 = 0;
          do
          {
            v67 = _mm_loadu_si128((const __m128i *)((char *)v42 + v66 + 16));
            v68 = _mm_loadu_si128((const __m128i *)((char *)v42 + v66 + 22));
            v69 = (unsigned int)_mm_movemask_epi8(
                                  _mm_and_si128(
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v42 + v66 + 6)), v65),
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v42 + v66)), si128)));
            v70 = _mm_loadu_si128((const __m128i *)((char *)v42 + v66 + 32));
            v71 = _mm_loadu_si128((const __m128i *)((char *)v42 + v66 + 38));
            v72 = _mm_loadu_si128((const __m128i *)((char *)v42 + v66 + 48));
            v73 = _mm_loadu_si128((const __m128i *)((char *)v42 + v66 + 54));
            if ( (_DWORD)v69 )
              v56 = sub_1418F6DD0(&v278, v66, v69, 0);
            else
              v56 = 0;
            v74 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v68, v65), _mm_cmpeq_epi8(v67, si128)));
            if ( (_WORD)v74 )
            {
              v77 = sub_1418F6DD0(&v278, v66 + 16, v74, v56);
              LOBYTE(v77) = v56 | v77;
              v56 = v77;
            }
            v75 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v71, v65), _mm_cmpeq_epi8(v70, si128)));
            if ( (_WORD)v75 )
            {
              v78 = sub_1418F6DD0(&v278, v66 + 32, v75, v56);
              LOBYTE(v78) = v56 | v78;
              v56 = v78;
            }
            v76 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v73, v65), _mm_cmpeq_epi8(v72, si128)));
            if ( (_WORD)v76 )
            {
              v79 = sub_1418F6DD0(&v278, v66 + 48, v76, v56);
              LOBYTE(v79) = v56 | v79;
              v56 = v79;
              v55 = v66 + 64;
              if ( v66 + 134 >= v43 )
                break;
            }
            else
            {
              v55 = v66 + 64;
              if ( v66 + 134 >= v43 )
                break;
            }
            v66 = v55;
          }
          while ( !(_BYTE)v56 );
        }
        if ( v55 + 22 < v43 && !(_BYTE)v56 )
        {
          v57 = _mm_load_si128((const __m128i *)&xmmword_141A08340);
          v58 = _mm_load_si128((const __m128i *)&xmmword_141A08280);
          do
          {
            v59 = (unsigned int)_mm_movemask_epi8(
                                  _mm_and_si128(
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v42 + v55 + 6)), v58),
                                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v42 + v55)), v57)));
            if ( (_DWORD)v59 )
            {
              v56 = sub_1418F6DD0(&v278, v55, v59, 0);
              if ( v55 + 38 >= v43 )
                break;
            }
            else
            {
              v56 = 0;
              if ( v55 + 38 >= v43 )
                break;
            }
            v55 += 16;
          }
          while ( !(_BYTE)v56 );
        }
        v60 = (unsigned int)_mm_movemask_epi8(
                              _mm_and_si128(
                                _mm_cmpeq_epi8(
                                  _mm_loadu_si128((const __m128i *)((char *)v42 + v43 - 16)),
                                  (__m128i)xmmword_141A08280),
                                _mm_cmpeq_epi8(
                                  _mm_loadu_si128((const __m128i *)((char *)v42 + v43 - 22)),
                                  (__m128i)xmmword_141A08340)));
        if ( !(_DWORD)v60 )
        {
          v3 = v285;
          v9 = v273;
          if ( (_BYTE)v56 )
            goto LABEL_72;
LABEL_71:
          v41 = 0;
          goto LABEL_72;
        }
        v80 = v56 | sub_1418F6DD0(&v278, v43 - 22, v60, v56);
        v3 = v285;
        v9 = v273;
        if ( !v80 )
          goto LABEL_71;
      }
LABEL_72:
      *(_BYTE *)(v3 + 536) = 0;
      *(_QWORD *)(v3 + 600) = v41;
      *(__m128i *)(v3 + 608) = _mm_loadu_si128((const __m128i *)v36);
      *(_QWORD *)(v3 + 624) = *(_QWORD *)(v36 + 16);
      *(_QWORD *)(v3 + 632) = v9;
      *(_BYTE *)(v3 + 800) = 0;
      v2 = v272;
LABEL_73:
      v283 = (__m128i *)(v3 + 600);
      sub_140B4C8D0(&v278, v3 + 600, v2);
      v50 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        v61 = 3;
        goto LABEL_96;
      }
      v51 = *((_QWORD *)&v278 + 1);
      v52 = v279;
      sub_1407A91D0((__int64)v283);
      if ( v50 != -1 && v50 != 3 && v51 )
        sub_140001660(v52, v51, 1);
      v53 = v285;
      v54 = *(_QWORD *)(v285 + 568);
      if ( v54 )
        sub_140001660(*(_QWORD *)(v285 + 576), v54, 1);
      *(_BYTE *)(v53 + 536) = 0;
      v6 = v284;
      goto LABEL_81;
    }
    v48 = *(_QWORD *)(v3 + 496);
    v49 = *(_QWORD *)(v3 + 504);
    if ( v37 )
      sub_140001660(*(_QWORD *)(v3 + 480), v37, 1);
    if ( v48 )
      sub_140001660(v49, v48, 1);
LABEL_81:
    *(_WORD *)(v285 + 537) = 256;
    sub_140A3B530(v6);
LABEL_113:
    v3 = v285;
    v81 = *(_QWORD *)(v285 + 408);
    if ( v81 )
      sub_140001660(*(_QWORD *)(v285 + 416), v81, 1);
    v82 = *(_QWORD *)(v3 + 384);
    if ( v82 )
      sub_140001660(*(_QWORD *)(v3 + 392), v82, 1);
    if ( *(_DWORD *)(v3 + 248) != -1 )
      goto LABEL_129;
    v83 = *(_QWORD *)(v3 + 256);
LABEL_119:
    if ( !__OFSUB__(-v83, 1) )
    {
      v84 = 5;
      if ( v83 < 0 )
        v84 = v83 ^ 0x8000000000000000uLL;
      if ( v84 < 4 )
      {
        v83 = *(_QWORD *)(v3 + 264);
        v85 = 264;
LABEL_126:
        if ( v83 )
          sub_140001660(*(_QWORD *)(v3 + v85 + 8), v83, 1);
        goto LABEL_128;
      }
      v85 = 256;
      if ( v84 != 4 )
        goto LABEL_126;
      v83 = *(_QWORD *)(v3 + 264);
      v85 = 264;
      if ( (unsigned __int64)v83 <= 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_126;
    }
LABEL_128:
    *(_BYTE *)(v3 + 435) = 0;
LABEL_129:
    *(_BYTE *)(v3 + 435) = 0;
LABEL_130:
    v15 = v3 + 32;
    *(_QWORD *)(v3 + 440) = v3 + 32;
  }
  if ( v91 != 1 )
  {
    v11 = v3;
    v12 = (int *)(v3 + 48);
    v13 = (__m128i *)(v11 + 64);
    v14 = (_QWORD *)(v11 + 88);
    *(_QWORD *)(v11 + 472) = v7;
    *(_QWORD *)(v11 + 480) = v8;
    *(_QWORD *)(v11 + 512) = v9;
    *(_QWORD *)(v11 + 520) = v12;
    *(_QWORD *)(v11 + 528) = v11 + 64;
    *(_QWORD *)(v11 + 536) = v11 + 88;
    v10 = (__m128i *)(v11 + 546);
    *(_BYTE *)(v11 + 546) = 0;
LABEL_158:
    v283 = v13;
    *(_WORD *)(v11 + 544) = 0;
    *(_QWORD *)&v278 = v7;
    *((_QWORD *)&v278 + 1) = v8;
    v279 = 0;
    v259 = v7;
    v280 = v7;
    v281 = v8;
    v265 = v10;
    v264 = v6;
    sub_14062D280(&v274, &v278);
    v2 = v272;
    v28 = v10;
    if ( (_BYTE)v274 == 0xFF )
    {
      v265 = v10;
      v264 = v6;
      sub_14002F910((char *)&v274 + 8);
LABEL_337:
      v28->m128i_i8[0] = 1;
      sub_140A3B7B0(v6);
      goto LABEL_113;
    }
    v96 = _mm_loadu_si128((const __m128i *)&v274);
    *((__m128i *)v6 + 1) = _mm_loadu_si128(&v275);
    *(__m128i *)v6 = v96;
    v271 = (__int64 *)v10;
    v270 = v6;
    v97 = sub_1416419F0(aHeader_0, 6, v6);
    if ( !v97 || (v271 = (__int64 *)v10, v270 = v6, (v98 = sub_1416419F0(aEvent_2, 5, v97)) == 0) )
    {
LABEL_171:
      v28 = v10;
LABEL_336:
      v265 = v28;
      v264 = v6;
      sub_14002F9D0(v6);
      goto LABEL_337;
    }
    v99 = 0;
    v100 = 1;
    if ( *(_BYTE *)v98 == 3 )
    {
      v100 = *(_QWORD *)(v98 + 16);
      v99 = *(_QWORD *)(v98 + 24);
    }
    if ( v99 != 11 )
    {
      if ( v99 != 16 )
      {
        if ( v99 != 12 )
          goto LABEL_336;
        if ( *(_QWORD *)v100 ^ 0x6174732D6B736174LL | *(unsigned int *)(v100 + 8) ^ 0x64657472LL )
          goto LABEL_336;
        v101 = *v12;
        v102 = *((_QWORD *)v12 + 1);
        *(_QWORD *)v12 = 0;
        if ( v101 != 1 )
          goto LABEL_336;
        *(_QWORD *)&v278 = -1;
        v271 = (__int64 *)v10;
        v270 = v6;
        sub_14092A4D0(&v274, v102, &v278);
        if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v274 )
          sub_140001660(*((_QWORD *)&v274 + 1), v274, 1);
        goto LABEL_171;
      }
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v100), (__m128i)xmmword_141A27B10)) != 0xFFFF )
        goto LABEL_336;
      v271 = (__int64 *)v10;
      v270 = v6;
      v138 = sub_1416419F0(aPayload_2, 7, v6);
      if ( v138 )
      {
        v271 = (__int64 *)v10;
        v270 = v6;
        v139 = sub_1416419F0(aOutput_3, 6, v138);
        if ( v139 )
        {
          v271 = (__int64 *)v10;
          v270 = v6;
          v140 = sub_1416419F0(aSentence, 8, v139);
          v141 = v140;
          if ( v140 )
          {
            v271 = (__int64 *)v10;
            v270 = v6;
            v142 = (_BYTE *)sub_1416419F0(aHeartbeat, 9, v140);
            if ( !v142 || *v142 != 1 || (v142[1] & 1) == 0 )
            {
              v273 = v9;
              v255 = (__int64 *)v10;
              v284 = v6;
              v254 = v6;
              v143 = sub_1416419F0(aText_9, 4, v141);
              v145 = 0;
              v146 = v285;
              if ( v143 )
              {
                v145 = 0;
                v144 = *(_QWORD *)(v143 + 24);
                if ( *(_BYTE *)v143 == 3 )
                  v145 = *(_QWORD *)(v143 + 16);
              }
              v147 = 1;
              if ( v145 )
                v147 = v145;
              else
                v144 = 0;
              v148 = sub_140E91160(v147, v144);
              v149 = (_QWORD *)(v146 + 488);
              v255 = (__int64 *)v10;
              v254 = v284;
              sub_1404806C0(v146 + 488, v148, v150);
              v151 = v285;
              *(_BYTE *)(v285 + 544) = 1;
              if ( *(_QWORD *)(v151 + 504) )
              {
                v269 = (__int64 *)v10;
                v268 = v284;
                v152 = (_BYTE *)sub_1416419F0(aSentenceEnd, 12, v141);
                v153 = (__int64 *)v283;
                if ( v152 && *v152 == 1 && (v152[1] & 1) != 0 )
                {
                  v229 = v283->m128i_i64[1];
                  v230 = v283[1].m128i_i64[0];
                  v231 = *(_QWORD *)(v285 + 496);
                  v232 = *(_QWORD *)(v285 + 504);
                  v269 = (__int64 *)v10;
                  v268 = v284;
                  sub_140DC0730((unsigned int)&v278, v229, v230, v231, v232);
                  v233 = v283;
                  if ( v283->m128i_i64[0] )
                  {
                    sub_140001660(v283->m128i_i64[1], v283->m128i_i64[0], 1);
                    v233 = v283;
                  }
                  v233[1].m128i_i64[0] = v279;
                  *v233 = _mm_loadu_si128((const __m128i *)&v278);
                  v14[2] = 0;
                  v269 = (__int64 *)v10;
                  v268 = v284;
                  sub_1416AC440(&v278, v233);
                  v275.m128i_i64[0] = v279;
                  v274 = v278;
                  v3 = v285;
                  *(_QWORD *)(v285 + 552) = 1;
                  *(__m128i *)(v3 + 560) = _mm_load_si128((const __m128i *)&v274);
                  *(_QWORD *)(v3 + 576) = v275.m128i_i64[0];
                  *(_QWORD *)(v3 + 584) = v273;
                  *(_BYTE *)(v3 + 752) = 0;
                  v6 = v284;
LABEL_17:
                  v283 = v10;
                  v284 = v6;
                  v282 = (char *)(v3 + 552);
                  sub_140B4C8D0(&v278, v3 + 552, v2);
                  v25 = v278;
                  if ( (_QWORD)v278 != -2 )
                  {
                    v26 = *((_QWORD *)&v278 + 1);
                    v27 = v279;
                    v269 = (__int64 *)v283;
                    v268 = v284;
                    sub_1407A91D0((__int64)v282);
                    if ( v25 != -1 && v25 != 3 && v26 )
                      sub_140001660(v27, v26, 1);
                    goto LABEL_22;
                  }
                  v35 = 3;
                }
                else
                {
                  *(_BYTE *)(v285 + 544) = 0;
                  *(_QWORD *)&v279 = v149[2];
                  v278 = *(_OWORD *)v149;
                  v154 = v284;
                  if ( *v14 )
                  {
                    sub_140001660(v14[1], *v14, 1);
                    v153 = (__int64 *)v283;
                  }
                  v14[2] = v279;
                  *(__m128i *)v14 = _mm_load_si128((const __m128i *)&v278);
                  v155 = v153[1];
                  v156 = v153[2];
                  v157 = v14[1];
                  v158 = v14[2];
                  v269 = (__int64 *)v10;
                  v268 = v154;
                  sub_140DC0730((unsigned int)&v248, v155, v156, v157, v158);
                  v3 = v285;
                  *(_QWORD *)(v285 + 552) = 0;
                  *(__m128i *)(v3 + 560) = _mm_loadu_si128((const __m128i *)&v248);
                  *(_QWORD *)(v3 + 576) = v249;
                  *(_QWORD *)(v3 + 584) = v273;
                  *(_BYTE *)(v3 + 752) = 0;
                  v6 = v284;
LABEL_12:
                  v283 = v10;
                  v284 = v6;
                  v282 = (char *)(v3 + 552);
                  sub_140B4C8D0(&v278, v3 + 552, v2);
                  v20 = v278;
                  if ( (_QWORD)v278 != -2 )
                  {
                    v21 = *((_QWORD *)&v278 + 1);
                    v22 = v279;
                    v269 = (__int64 *)v283;
                    v268 = v284;
                    sub_1407A91D0((__int64)v282);
                    if ( v20 != -1 )
                    {
                      v23 = v20 == 3;
                      v24 = v285;
                      if ( !v23 && v21 )
                        sub_140001660(v22, v21, 1);
                      goto LABEL_23;
                    }
LABEL_22:
                    v24 = v285;
LABEL_23:
                    v28 = v283;
                    if ( *(_BYTE *)(v24 + 544) )
                    {
                      v29 = *(_QWORD *)(v24 + 488);
                      if ( v29 )
                        sub_140001660(*(_QWORD *)(v24 + 496), v29, 1);
                    }
                    *(_BYTE *)(v24 + 544) = 0;
                    v6 = v284;
                    goto LABEL_336;
                  }
                  v35 = 4;
                }
LABEL_339:
                v283->m128i_i8[0] = v35;
                result = 1;
                v63 = 4;
                goto LABEL_340;
              }
              if ( *v149 )
                sub_140001660(*(_QWORD *)(v151 + 496), *v149, 1);
              *(_BYTE *)(v151 + 544) = 0;
              v6 = v284;
            }
          }
        }
      }
      v28 = v10;
      v265 = v10;
      v264 = v6;
      sub_14002F9D0(v6);
      goto LABEL_337;
    }
    if ( *(_QWORD *)v100 ^ 0x6961662D6B736174LL | *(_QWORD *)(v100 + 3) ^ 0x64656C6961662D6BLL )
      goto LABEL_336;
    v267 = v10;
    v266 = v6;
    v159 = sub_1416419F0(aHeader_0, 6, v6);
    v273 = v9;
    if ( v159 && (v267 = v10, v266 = v6, (v161 = sub_1416419F0(aErrorMessage_0, 13, v159)) != 0) )
    {
      v160 = *(_QWORD *)(v161 + 16);
      v162 = 26;
      if ( *(_BYTE *)v161 == 3 )
        v162 = *(_QWORD *)(v161 + 24);
      v163 = v238;
      if ( v162 < 0 )
      {
        v164 = 0;
        goto LABEL_239;
      }
      v200 = (const __m128i *)aAliyunFunAsrTa;
      if ( *(_BYTE *)v161 == 3 )
        v200 = *(const __m128i **)(v161 + 16);
      v199 = (const __m128i *)(v285 + 552);
      v202 = 1;
      v203 = 0;
      if ( !v162 )
      {
LABEL_310:
        v204 = v285;
        *(_QWORD *)(v285 + 552) = v203;
        v238 = v202;
        *(_QWORD *)(v204 + 560) = v202;
        *(_QWORD *)(v204 + 568) = v203;
        *(_BYTE *)(v204 + 545) = 1;
        v257 = (__int64 *)v10;
        v256 = v6;
        sub_1416AC440(&v278, v199);
        v2 = v272;
        v205 = (__m128i)v278;
        v206 = v279;
        v207 = *v12;
        v208 = *((_QWORD *)v12 + 1);
        *(_QWORD *)v12 = 0;
        if ( v207 == 1 )
        {
          v278 = (unsigned __int128)v205;
          *(_QWORD *)&v279 = v206;
          v257 = (__int64 *)v10;
          v256 = v6;
          sub_14092A4D0(&v274, v208, &v278);
          if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v274 )
            sub_140001660(*((_QWORD *)&v274 + 1), v274, 1);
          v3 = v285;
        }
        else
        {
          v3 = v285;
          if ( (unsigned __int64)(v205.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v205.m128i_i64[1], v205.m128i_i64[0], 1);
        }
        *(_BYTE *)(v3 + 545) = 0;
        *(_QWORD *)(v3 + 576) = 2;
        *(__m128i *)(v3 + 584) = _mm_loadu_si128(v199);
        *(_QWORD *)(v3 + 600) = v199[1].m128i_i64[0];
        *(_QWORD *)(v3 + 608) = v273;
        *(_BYTE *)(v3 + 776) = 0;
LABEL_330:
        v283 = v10;
        v284 = v6;
        v282 = (char *)(v3 + 576);
        sub_140B4C8D0(&v278, v3 + 576, v2);
        v225 = v278;
        if ( (_QWORD)v278 != -2 )
        {
          v226 = *((_QWORD *)&v278 + 1);
          v227 = v279;
          v257 = (__int64 *)v283;
          v256 = v284;
          sub_1407A91D0((__int64)v282);
          if ( v225 != -1 && v225 != 3 && v226 )
            sub_140001660(v227, v226, 1);
          *(_BYTE *)(v285 + 545) = 0;
          v6 = v284;
          v28 = v283;
          goto LABEL_336;
        }
        v35 = 5;
        goto LABEL_339;
      }
    }
    else
    {
      v199 = (const __m128i *)(v285 + 552);
      v162 = 26;
      v200 = (const __m128i *)aAliyunFunAsrTa;
    }
    nullsub_1(v160);
    v164 = 1;
    v201 = (__m128i *)sub_140001650(v162, 1);
    if ( !v201 )
    {
      v163 = v162;
      v28 = v10;
LABEL_239:
      v267 = v28;
      v266 = v6;
      sub_141938D2B(v164, v163);
    }
    v202 = (__int64)v201;
    sub_1418F44E0(v201, v200, v162);
    v203 = v162;
    goto LABEL_310;
  }
  v17 = v3;
  v18 = (int *)(v3 + 48);
  v19 = (_QWORD *)(v17 + 64);
  *(_QWORD *)(v17 + 472) = v7;
  *(_QWORD *)(v17 + 480) = v8;
  *(_QWORD *)(v17 + 488) = v9;
  *(_QWORD *)(v17 + 496) = v18;
  *(_QWORD *)(v17 + 504) = v17 + 64;
  v16 = (__m128i *)(v17 + 513);
  *(_BYTE *)(v17 + 513) = 0;
LABEL_148:
  *(_BYTE *)(v17 + 512) = 0;
  *(_QWORD *)&v278 = v7;
  *((_QWORD *)&v278 + 1) = v8;
  v279 = 0;
  v259 = v7;
  v280 = v7;
  v281 = v8;
  v261 = (__int64 *)v16;
  v260 = v6;
  sub_14062D280(&v274, &v278);
  v2 = v272;
  v273 = v9;
  if ( (_BYTE)v274 == 0xFF )
  {
    v261 = (__int64 *)v16;
    v260 = v6;
    sub_14002F910((char *)&v274 + 8);
LABEL_264:
    v16->m128i_i8[0] = 1;
    sub_140A3B650(v6);
    goto LABEL_113;
  }
  v92 = _mm_loadu_si128((const __m128i *)&v274);
  *((__m128i *)v6 + 1) = _mm_loadu_si128(&v275);
  *(__m128i *)v6 = v92;
  v277 = (__int64 *)v16;
  v276 = v6;
  v93 = sub_1416419F0(aType_8, 4, v6);
  if ( !v93 )
  {
LABEL_263:
    v261 = (__int64 *)v16;
    v260 = v6;
    sub_14002F9D0(v6);
    goto LABEL_264;
  }
  v94 = 0;
  v95 = 1;
  if ( *(_BYTE *)v93 == 3 )
  {
    v95 = *(_QWORD *)(v93 + 16);
    v94 = *(_QWORD *)(v93 + 24);
  }
  switch ( v94 )
  {
    case 5LL:
      if ( !(*(_DWORD *)v95 ^ 0x6F727265 | *(unsigned __int8 *)(v95 + 4) ^ 0x72) )
        goto LABEL_195;
      goto LABEL_263;
    case 15LL:
      if ( !(*(_QWORD *)v95 ^ 0x2E6E6F6973736573LL | *(_QWORD *)(v95 + 7) ^ 0x646574616470752ELL) )
      {
        v120 = *v18;
        v121 = *((_QWORD *)v18 + 1);
        *(_QWORD *)v18 = 0;
        if ( v120 == 1 )
        {
          *(_QWORD *)&v278 = -1;
          v277 = (__int64 *)v16;
          v276 = v6;
          sub_14092A4D0(&v274, v121, &v278);
          if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( (_QWORD)v274 )
              sub_140001660(*((_QWORD *)&v274 + 1), v274, 1);
          }
        }
      }
      goto LABEL_263;
    case 48LL:
      if ( (unsigned int)sub_1418F4B70(v95, aConversationIt) )
        goto LABEL_263;
      v277 = (__int64 *)v16;
      v276 = v6;
      v103 = sub_1416419F0(aText_9, 4, v6);
      v105 = 0;
      v106 = v285;
      if ( v103 )
      {
        v105 = 0;
        v104 = *(_QWORD *)(v103 + 24);
        if ( *(_BYTE *)v103 == 3 )
          v105 = *(_QWORD *)(v103 + 16);
      }
      v107 = 1;
      if ( v105 )
        v107 = v105;
      else
        v104 = 0;
      *(_QWORD *)(v285 + 544) = v107;
      *(_QWORD *)(v106 + 552) = v104;
      v277 = (__int64 *)v16;
      v276 = v6;
      v108 = sub_1416419F0(aStash, 5, v6);
      v110 = v285;
      v111 = v285 + 544;
      v112 = 0;
      if ( v108 )
      {
        v112 = 0;
        v109 = *(_QWORD *)(v108 + 24);
        if ( *(_BYTE *)v108 == 3 )
          v112 = *(_QWORD *)(v108 + 16);
      }
      v113 = 1;
      if ( v112 )
        v113 = v112;
      else
        v109 = 0;
      *(_QWORD *)(v285 + 560) = v113;
      *(_QWORD *)(v110 + 568) = v109;
      *(_QWORD *)&v278 = v111;
      *((_QWORD *)&v278 + 1) = sub_140186EE0;
      *(_QWORD *)&v279 = v110 + 560;
      *((_QWORD *)&v279 + 1) = sub_140186EE0;
      v277 = (__int64 *)v16;
      v276 = v6;
      sub_1416ABFD0(&v274, &unk_141A2C81D, &v278);
      v114 = *((char **)&v274 + 1);
      v115 = v274;
      v116 = sub_140E91160(*((_QWORD *)&v274 + 1), v275.m128i_i64[0]);
      v284 = v6;
      v283 = v16;
      if ( v117 < 0 )
      {
        v282 = v114;
        v272 = v115;
        v119 = 0;
        goto LABEL_188;
      }
      v217 = v117;
      v218 = 1;
      v219 = (_QWORD *)v285;
      if ( v117 )
      {
        v282 = v114;
        v220 = (const __m128i *)v116;
        nullsub_1(v118);
        v221 = (__m128i *)sub_140001650(v217, 1);
        if ( !v221 )
        {
          v272 = v115;
          v239 = v217;
          v119 = 1;
LABEL_188:
          sub_141938D2B(v119, v239);
        }
        v218 = (__int64)v221;
        sub_1418F44E0(v221, v220, v217);
        v114 = v282;
      }
      v219[65] = v217;
      v219[66] = v218;
      v219[67] = v217;
      if ( v115 )
      {
        sub_140001660(v114, v115, 1);
        v217 = v219[67];
      }
      v239 = v218;
      if ( !v217 )
      {
        v228 = v219[65];
        if ( v228 )
          sub_140001660(v219[66], v228, 1);
        v16 = v283;
        goto LABEL_346;
      }
      v222 = v19[1];
      v223 = v19[2];
      v224 = v219[66];
      v16 = v283;
      v243 = (__int64 *)v283;
      v242 = v284;
      sub_140DC0730((unsigned int)&v248, v222, v223, v224, v217);
      v3 = v285;
      *(_QWORD *)(v285 + 576) = 0;
      *(__m128i *)(v3 + 584) = _mm_loadu_si128((const __m128i *)&v248);
      *(_QWORD *)(v3 + 600) = v249;
      *(_QWORD *)(v3 + 608) = v273;
      *(_BYTE *)(v3 + 776) = 0;
      v6 = v284;
LABEL_29:
      v283 = v16;
      v284 = v6;
      v282 = (char *)(v3 + 576);
      sub_140B4C8D0(&v278, v3 + 576, v2);
      v30 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        v34 = 3;
        goto LABEL_266;
      }
      v31 = *((_QWORD *)&v278 + 1);
      v32 = v279;
      v16 = v283;
      v243 = (__int64 *)v283;
      v242 = v284;
      sub_1407A91D0((__int64)v282);
      goto LABEL_31;
    case 50LL:
      if ( (unsigned int)sub_1418F4B70(v95, aConversationIt_1) )
        goto LABEL_263;
LABEL_195:
      v263 = (__int64 *)v16;
      v262 = v6;
      v122 = sub_1416419F0(aError_42, 5, v6);
      if ( !v122 || (v263 = (__int64 *)v16, v262 = v6, (v124 = sub_1416419F0(aMessage_4, 7, v122)) == 0) )
      {
        v165 = v16;
        v166 = (const __m128i *)(v285 + 520);
        v125 = 27;
        v167 = (const __m128i *)&unk_141A2C7F3;
LABEL_242:
        nullsub_1(v123);
        v127 = 1;
        v168 = (__m128i *)sub_140001650(v125, 1);
        if ( !v168 )
        {
          v126 = v125;
          v16 = v165;
LABEL_201:
          v263 = (__int64 *)v16;
          v262 = v6;
          sub_141938D2B(v127, v126);
        }
        v169 = (__int64)v168;
        sub_1418F44E0(v168, v167, v125);
        v170 = v125;
        goto LABEL_244;
      }
      v123 = *(_QWORD *)(v124 + 16);
      v125 = 27;
      if ( *(_BYTE *)v124 == 3 )
        v125 = *(_QWORD *)(v124 + 24);
      v126 = v237;
      if ( v125 < 0 )
      {
        v127 = 0;
        goto LABEL_201;
      }
      v165 = v16;
      v167 = (const __m128i *)&unk_141A2C7F3;
      if ( *(_BYTE *)v124 == 3 )
        v167 = *(const __m128i **)(v124 + 16);
      v166 = (const __m128i *)(v285 + 520);
      v169 = 1;
      v170 = 0;
      if ( v125 )
        goto LABEL_242;
LABEL_244:
      v171 = v285;
      *(_QWORD *)(v285 + 520) = v170;
      v237 = v169;
      *(_QWORD *)(v171 + 528) = v169;
      *(_QWORD *)(v171 + 536) = v170;
      *(_BYTE *)(v171 + 512) = 1;
      v16 = v165;
      v253 = (__int64 *)v165;
      v252 = v6;
      sub_1416AC440(&v278, v166);
      v2 = v272;
      v172 = (__m128i)v278;
      v173 = v279;
      v174 = *v18;
      v175 = *((_QWORD *)v18 + 1);
      *(_QWORD *)v18 = 0;
      if ( v174 == 1 )
      {
        v278 = (unsigned __int128)v172;
        *(_QWORD *)&v279 = v173;
        v253 = (__int64 *)v165;
        v252 = v6;
        sub_14092A4D0(&v274, v175, &v278);
        if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v274 )
          sub_140001660(*((_QWORD *)&v274 + 1), v274, 1);
        v3 = v285;
      }
      else
      {
        v3 = v285;
        if ( (unsigned __int64)(v172.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v172.m128i_i64[1], v172.m128i_i64[0], 1);
      }
      *(_BYTE *)(v3 + 512) = 0;
      *(_QWORD *)(v3 + 544) = 2;
      *(__m128i *)(v3 + 552) = _mm_loadu_si128(v166);
      *(_QWORD *)(v3 + 568) = v166[1].m128i_i64[0];
      *(_QWORD *)(v3 + 576) = v273;
      *(_BYTE *)(v3 + 744) = 0;
LABEL_256:
      v283 = v16;
      v284 = v6;
      v282 = (char *)(v3 + 544);
      sub_140B4C8D0(&v278, v3 + 544, v2);
      v182 = v278;
      if ( (_QWORD)v278 != -2 )
      {
        v183 = *((_QWORD *)&v278 + 1);
        v184 = v279;
        v16 = v283;
        v253 = (__int64 *)v283;
        v252 = v284;
        sub_1407A91D0((__int64)v282);
        if ( v182 != -1 && v182 != 3 && v183 )
          sub_140001660(v184, v183, 1);
        *(_BYTE *)(v285 + 512) = 0;
LABEL_262:
        v6 = v284;
        goto LABEL_263;
      }
      v34 = 5;
LABEL_266:
      v283->m128i_i8[0] = v34;
      result = 1;
      v63 = 5;
LABEL_340:
      v198 = v285;
LABEL_341:
      *(_BYTE *)(v198 + 433) = v63;
      return result;
    case 53LL:
      if ( (unsigned int)sub_1418F4B70(v95, aConversationIt_0) )
        goto LABEL_263;
      v277 = (__int64 *)v16;
      v276 = v6;
      v128 = sub_1416419F0(aTranscript, 10, v6);
      v284 = v6;
      v130 = 0;
      v131 = (_QWORD *)v285;
      if ( v128 )
      {
        v130 = 0;
        v129 = *(_QWORD *)(v128 + 24);
        if ( *(_BYTE *)v128 == 3 )
          v130 = *(_QWORD *)(v128 + 16);
      }
      v132 = v9;
      v133 = 1;
      if ( v130 )
        v133 = v130;
      else
        v129 = 0;
      v134 = sub_140E91160(v133, v129);
      if ( v135 >= 0 )
      {
        if ( !v135 )
        {
          v131[65] = 0;
          v131[66] = 1;
          v131[67] = 0;
          v247 = 1;
LABEL_346:
          v261 = (__int64 *)v16;
          v6 = v284;
          v260 = v284;
          sub_14002F9D0(v284);
          goto LABEL_264;
        }
        v209 = v135;
        v283 = v16;
        v210 = (const __m128i *)v134;
        nullsub_1(v136);
        v211 = (__m128i *)sub_140001650(v209, 1);
        if ( v211 )
        {
          v212 = v211;
          sub_1418F44E0(v211, v210, v209);
          v131[65] = v209;
          v131[66] = v212;
          v131[67] = v209;
          v213 = v19[1];
          v214 = v19[2];
          v251 = (__int64 *)v283;
          v250 = v284;
          v247 = (__int64)v212;
          v215 = (int)v212;
          v16 = v283;
          sub_140DC0730((unsigned int)&v278, v213, v214, v215, v209);
          v216 = v132;
          if ( *v19 )
            sub_140001660(v19[1], *v19, 1);
          v19[2] = v279;
          *(__m128i *)v19 = _mm_loadu_si128((const __m128i *)&v278);
          v251 = (__int64 *)v16;
          v250 = v284;
          sub_1416AC440(&v278, v19);
          v275.m128i_i64[0] = v279;
          v274 = v278;
          v3 = v285;
          *(_QWORD *)(v285 + 544) = 1;
          *(__m128i *)(v3 + 552) = _mm_load_si128((const __m128i *)&v274);
          *(_QWORD *)(v3 + 568) = v275.m128i_i64[0];
          *(_QWORD *)(v3 + 576) = v216;
          *(_BYTE *)(v3 + 744) = 0;
          v6 = v284;
LABEL_27:
          v283 = v16;
          v284 = v6;
          v282 = (char *)(v3 + 544);
          sub_140B4C8D0(&v278, v3 + 544, v2);
          v30 = v278;
          if ( (_QWORD)v278 == -2 )
          {
            v34 = 4;
            goto LABEL_266;
          }
          v31 = *((_QWORD *)&v278 + 1);
          v32 = v279;
          v16 = v283;
          v251 = (__int64 *)v283;
          v250 = v284;
          sub_1407A91D0((__int64)v282);
LABEL_31:
          if ( v30 != -1 && v30 != 3 && v31 )
            sub_140001660(v32, v31, 1);
          v33 = *(_QWORD *)(v285 + 520);
          if ( v33 )
            sub_140001660(*(_QWORD *)(v285 + 528), v33, 1);
          goto LABEL_262;
        }
        v247 = v209;
        v137 = 1;
        v16 = v283;
      }
      else
      {
        v137 = 0;
      }
      v277 = (__int64 *)v16;
      v276 = v284;
      sub_141938D2B(v137, v247);
    default:
      goto LABEL_263;
  }
}
