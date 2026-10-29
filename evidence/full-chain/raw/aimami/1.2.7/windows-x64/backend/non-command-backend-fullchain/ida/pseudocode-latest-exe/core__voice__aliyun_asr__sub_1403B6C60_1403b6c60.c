// win 1.2.7 latest-exe | module src/core/voice/aliyun_asr.rs | ea 0x1403b6c60 | successor of pre-update 0x140b614e0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
char __fastcall sub_1403B6C60(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rax
  __m128i v5; // xmm0
  char *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdi
  __m128i *v11; // rbx
  __int64 v12; // rax
  int *v13; // r12
  __m128i *v14; // r8
  _QWORD *v15; // r14
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
  __int64 v28; // rdx
  __int32 v29; // esi
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rdx
  char v33; // al
  char v34; // al
  __int64 v35; // r13
  __int64 v36; // rdx
  __m128i v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rax
  __int64 v40; // r14
  _DWORD *v41; // rsi
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r15
  __int32 v44; // esi
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int32 v49; // esi
  __int64 v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // r12
  unsigned int v55; // ebx
  __m128i v56; // xmm6
  __m128i v57; // xmm7
  __int64 v58; // r8
  __int64 v59; // r8
  char v60; // al
  char result; // al
  char v62; // bl
  __m128i si128; // xmm6
  __m128i v64; // xmm7
  __int64 v65; // rdi
  __m128i v66; // xmm12
  __m128i v67; // xmm13
  __int64 v68; // r8
  __m128i v69; // xmm10
  __m128i v70; // xmm11
  __m128i v71; // xmm8
  __m128i v72; // xmm9
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  unsigned int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rax
  _BYTE *v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rbx
  int v91; // eax
  __m128i v92; // xmm0
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __m128i v96; // xmm0
  __m128i *v97; // r13
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r10
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // r12
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // r15
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  _QWORD *v132; // rsi
  __int64 v133; // r12
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // r12
  _BYTE *v143; // rax
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // rsi
  __int64 v148; // rcx
  __int64 v149; // rax
  _QWORD *v150; // rdi
  __int64 v151; // rdx
  __int64 v152; // rsi
  _BYTE *v153; // rax
  __m128i *v154; // rcx
  volatile signed __int64 **v155; // rsi
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rdi
  __int64 v165; // r15
  __m128i *v166; // r13
  const __m128i *v167; // rbx
  void *v168; // r14
  __int64 v169; // rax
  __int64 v170; // r15
  __int64 v171; // rax
  __int64 v172; // rcx
  __m128i v173; // kr10_16
  __int64 v174; // r8
  int v175; // r9d
  __int64 v176; // rax
  __m128i v177; // rdi
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  int v181; // r9d
  __int64 v182; // rax
  __int32 v183; // esi
  __int64 v184; // rdi
  __int64 v185; // rbx
  __int64 v186; // rax
  __int32 v187; // esi
  __int64 v188; // rdi
  __int64 v189; // rbx
  __int32 v190; // ebx
  __int64 v191; // rsi
  __int64 v192; // rdi
  _QWORD *v193; // rsi
  __int64 v194; // rdx
  __int64 v195; // rdx
  __int64 v196; // rsi
  __int64 v197; // rsi
  __int64 v198; // rcx
  const __m128i *v199; // rbx
  const char *v200; // r14
  __int64 v201; // rax
  __int64 v202; // r15
  __int64 v203; // rax
  __int64 v204; // rcx
  __m128i v205; // kr30_16
  __int64 v206; // r8
  int v207; // r9d
  __int64 v208; // rax
  __int64 v209; // rdi
  __int64 v210; // rbx
  __int64 v211; // rax
  __int64 v212; // r14
  __int64 v213; // rdx
  __int64 v214; // r8
  int v215; // r9d
  __int64 v216; // rsi
  __int64 v217; // rdi
  __int64 v218; // r14
  _QWORD *v219; // rsi
  __int64 v220; // rbx
  __int64 v221; // rax
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
  _DWORD v234[4]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v235; // [rsp+38h] [rbp-48h] BYREF
  __int64 v236; // [rsp+48h] [rbp-38h]
  __int64 v237; // [rsp+B0h] [rbp+30h]
  __int64 v238; // [rsp+B8h] [rbp+38h]
  __int64 v239; // [rsp+C0h] [rbp+40h]
  __int64 v240; // [rsp+C8h] [rbp+48h]
  __int64 v241; // [rsp+D0h] [rbp+50h]
  volatile signed __int64 **v242; // [rsp+D8h] [rbp+58h]
  __m128i *v243; // [rsp+E0h] [rbp+60h]
  __int64 v244; // [rsp+E8h] [rbp+68h]
  __int64 v245; // [rsp+F0h] [rbp+70h]
  volatile signed __int64 **v246; // [rsp+F8h] [rbp+78h]
  __int64 v247; // [rsp+100h] [rbp+80h]
  __int64 v248; // [rsp+108h] [rbp+88h]
  unsigned __int128 v249; // [rsp+110h] [rbp+90h] BYREF
  __int64 v250; // [rsp+120h] [rbp+A0h]
  volatile signed __int64 **v251; // [rsp+128h] [rbp+A8h]
  __m128i *v252; // [rsp+130h] [rbp+B0h]
  __int64 v253; // [rsp+138h] [rbp+B8h]
  __m128i *v254; // [rsp+140h] [rbp+C0h]
  __int64 v255; // [rsp+148h] [rbp+C8h]
  __m128i *v256; // [rsp+150h] [rbp+D0h]
  __int64 v257; // [rsp+158h] [rbp+D8h]
  __m128i *v258; // [rsp+160h] [rbp+E0h]
  __int64 v259; // [rsp+168h] [rbp+E8h]
  __int64 v260; // [rsp+170h] [rbp+F0h]
  __int64 v261; // [rsp+178h] [rbp+F8h]
  __m128i *v262; // [rsp+180h] [rbp+100h]
  __int64 v263; // [rsp+188h] [rbp+108h]
  __m128i *v264; // [rsp+190h] [rbp+110h]
  __int64 v265; // [rsp+198h] [rbp+118h]
  __m128i *v266; // [rsp+1A0h] [rbp+120h]
  __int64 v267; // [rsp+1A8h] [rbp+128h]
  __m128i *v268; // [rsp+1B0h] [rbp+130h]
  volatile signed __int64 **v269; // [rsp+1B8h] [rbp+138h]
  __m128i *v270; // [rsp+1C0h] [rbp+140h]
  __int64 v271; // [rsp+1C8h] [rbp+148h]
  __m128i *v272; // [rsp+1D0h] [rbp+150h]
  __int64 v273; // [rsp+1D8h] [rbp+158h]
  unsigned __int128 v274; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v275; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v276; // [rsp+200h] [rbp+180h]
  __m128i *v277; // [rsp+208h] [rbp+188h]
  unsigned __int128 v278; // [rsp+210h] [rbp+190h] BYREF
  __int128 v279; // [rsp+220h] [rbp+1A0h]
  __int64 v280; // [rsp+230h] [rbp+1B0h]
  __int64 v281; // [rsp+238h] [rbp+1B8h]
  __int64 v282; // [rsp+248h] [rbp+1C8h]
  __m128i *v283; // [rsp+250h] [rbp+1D0h]
  volatile signed __int64 **v284; // [rsp+258h] [rbp+1D8h]
  __int64 v285; // [rsp+260h] [rbp+1E0h]
  __int64 v286; // [rsp+268h] [rbp+1E8h]

  v286 = -2;
  v2 = a2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 433);
  v285 = a1;
  v273 = a2;
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
      goto LABEL_128;
    case 1LL:
      sub_14196B990(&off_141A104C0);
    case 2LL:
      sub_14196B9B0(&off_141A104C0);
    case 3LL:
      goto LABEL_129;
    case 4LL:
      v11 = (__m128i *)(a1 + 546);
      v7 = a1 + 440;
      switch ( *(_BYTE *)(a1 + 546) )
      {
        case 0:
          v8 = *(_QWORD *)(a1 + 472);
          v9 = *(_QWORD *)(a1 + 480);
          v10 = *(_QWORD *)(a1 + 512);
          v12 = a1;
          v13 = *(int **)(a1 + 520);
          v14 = *(__m128i **)(a1 + 528);
          v15 = *(_QWORD **)(a1 + 536);
          goto LABEL_156;
        case 1:
          v244 = a1 + 440;
          sub_14196B990(&off_141A10650);
        case 2:
          v244 = a1 + 440;
          sub_14196B9B0(&off_141A10650);
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_11;
        case 5:
          goto LABEL_328;
      }
    case 5LL:
      v16 = (__m128i *)(a1 + 513);
      v7 = a1 + 440;
      switch ( *(_BYTE *)(a1 + 513) )
      {
        case 0:
          v8 = *(_QWORD *)(a1 + 472);
          v9 = *(_QWORD *)(a1 + 480);
          v10 = *(_QWORD *)(a1 + 488);
          v17 = a1;
          v18 = *(int **)(a1 + 496);
          v19 = *(_QWORD **)(a1 + 504);
          goto LABEL_146;
        case 1:
          v241 = a1 + 440;
          sub_14196B990(&off_141A10600);
        case 2:
          v241 = a1 + 440;
          sub_14196B9B0(&off_141A10600);
        case 3:
          goto LABEL_28;
        case 4:
          goto LABEL_26;
        case 5:
          goto LABEL_254;
      }
    case 6LL:
      v6 = (char *)(a1 + 538);
      v7 = a1 + 440;
      switch ( *(_BYTE *)(a1 + 538) )
      {
        case 0:
          v8 = *(_QWORD *)(a1 + 456);
          v9 = *(_QWORD *)(a1 + 464);
          v10 = *(_QWORD *)(a1 + 528);
          goto LABEL_48;
        case 1:
          v240 = a1 + 440;
          sub_14196B990(&off_141A10520);
        case 2:
          v240 = a1 + 440;
          sub_14196B9B0(&off_141A10520);
        case 3:
          v284 = (volatile signed __int64 **)(a1 + 440);
          goto LABEL_72;
        case 4:
          v284 = (volatile signed __int64 **)(a1 + 440);
          goto LABEL_58;
      }
    case 7LL:
      goto LABEL_268;
    case 8LL:
      goto LABEL_281;
  }
  while ( 1 )
  {
LABEL_129:
    v7 = v3 + 440;
    sub_140B50AC0(v234, v3 + 440, v2);
    if ( v234[0] == -3 )
    {
      result = 1;
      v62 = 3;
      goto LABEL_338;
    }
    v3 = v285;
    sub_1419234B0(v285 + 112, v234, 136);
    if ( *(_DWORD *)(v3 + 112) == -2 )
      goto LABEL_280;
    *(_BYTE *)(v3 + 435) = 1;
    sub_1419234B0(v3 + 248, v234, 136);
    if ( *(_DWORD *)(v3 + 248) != -1 )
    {
      sub_1419234B0(v7, v234, 136);
      v177.m128i_i64[0] = v7;
      *(_QWORD *)&v274 = v7;
      v177.m128i_i64[1] = (__int64)sub_1411437C0;
      *((_QWORD *)&v274 + 1) = sub_1411437C0;
      sub_1416DAFA0(&v278, &unk_141A104D8, &v274);
      v179 = *((_QWORD *)&v278 + 1);
      v178 = v278;
      v180 = v279;
      v181 = *(_DWORD *)(v285 + 48);
      v182 = *(_QWORD *)(v285 + 56);
      *(_QWORD *)(v285 + 48) = 0;
      if ( v181 == 1 )
      {
        v278 = __PAIR128__(v179, v178);
        *(_QWORD *)&v279 = v180;
        sub_140B38700(&v274, v182, &v278);
        v178 = v274;
        if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v274 )
        {
          v179 = *((_QWORD *)&v274 + 1);
          goto LABEL_266;
        }
      }
      else if ( (unsigned __int64)(v178 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_266:
        sub_140001660(v179, v178, 1);
      }
      v249 = (unsigned __int128)v177;
      sub_1416DAFA0(&v278, &unk_141A104D8, &v249);
      v3 = v285;
      v186 = v285 + 40;
      v274 = v278;
      v275.m128i_i64[0] = v279;
      *(_QWORD *)(v285 + 576) = 2;
      *(__m128i *)(v3 + 584) = _mm_load_si128((const __m128i *)&v274);
      *(_QWORD *)(v3 + 600) = v275.m128i_i64[0];
      *(_QWORD *)(v3 + 608) = v186;
      *(_BYTE *)(v3 + 776) = 0;
LABEL_268:
      v284 = (volatile signed __int64 **)(v3 + 576);
      sub_1403A2380(&v278, v3 + 576, v2);
      v187 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        result = 1;
        v62 = 7;
        goto LABEL_338;
      }
      v188 = *((_QWORD *)&v278 + 1);
      v189 = v279;
      sub_1402852F0(v284);
      if ( v187 != -1 && v187 != 3 && v188 )
        sub_140001660(v189, v188, 1);
      sub_14028EDD0(v285 + 440);
      v3 = v285;
      if ( *(_DWORD *)(v285 + 248) != -1 )
        goto LABEL_279;
      v86 = (_BYTE *)(v285 + 435);
      if ( !*(_BYTE *)(v285 + 435) )
      {
LABEL_278:
        *v86 = 0;
LABEL_279:
        *(_BYTE *)(v3 + 435) = 0;
LABEL_280:
        *(_QWORD *)(v3 + 440) = 3;
        *(_QWORD *)(v3 + 472) = v3 + 40;
        *(_BYTE *)(v3 + 640) = 0;
LABEL_281:
        v284 = (volatile signed __int64 **)(v3 + 440);
        sub_1403A2380(&v278, v3 + 440, v2);
        v190 = v278;
        if ( (_QWORD)v278 == -2 )
        {
          result = 1;
          v62 = 8;
          goto LABEL_338;
        }
        v191 = *((_QWORD *)&v278 + 1);
        v192 = v279;
        sub_1402852F0(v284);
        if ( v190 != -1 && v190 != 3 && v191 )
          sub_140001660(v192, v191, 1);
        v193 = (_QWORD *)v285;
        v194 = *(_QWORD *)(v285 + 88);
        if ( v194 )
          sub_140001660(*(_QWORD *)(v285 + 96), v194, 1);
        v195 = v193[8];
        if ( v195 )
          sub_140001660(v193[9], v195, 1);
        if ( v193[6] )
        {
          v196 = *(_QWORD *)(v285 + 56);
          if ( v196 )
          {
            v284 = (volatile signed __int64 **)(v285 + 56);
            if ( (sub_141538190(v196 + 48) & 5) == 1 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v196 + 32) + 16LL))(*(_QWORD *)(v196 + 40));
            if ( *v284 && !_InterlockedDecrement64(*v284) )
              sub_140CA3370();
          }
        }
        v284 = (volatile signed __int64 **)(v285 + 40);
        v197 = *(_QWORD *)(v285 + 40);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v197 + 496)) )
        {
          sub_1401676E0(v197 + 128);
          sub_14142C420(v197 + 256);
        }
        if ( !_InterlockedDecrement64(*v284) )
          sub_140CA3CC0();
        v198 = v285;
        v62 = 1;
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v285 + 32)) )
        {
          sub_140CA3A10(v198 + 32);
          result = 0;
          goto LABEL_338;
        }
        result = 0;
        goto LABEL_339;
      }
LABEL_276:
      if ( !__OFSUB__(0, *(_QWORD *)(v3 + 256)) )
        sub_140291900(v3 + 256);
      goto LABEL_278;
    }
    v81 = *(_QWORD *)(v3 + 256);
    v84 = v81 ^ 0x8000000000000000uLL;
    v85 = 5;
    if ( v81 < 0 )
      v85 = *(_QWORD *)(v3 + 256) ^ 0x8000000000000000uLL;
    if ( v85 )
    {
      if ( v85 == 4 )
      {
        v86 = (_BYTE *)(v3 + 435);
        goto LABEL_276;
      }
      goto LABEL_117;
    }
    *(__m128i *)(v3 + 384) = _mm_loadu_si128(&v235);
    v9 = v236;
    *(_QWORD *)(v3 + 400) = v236;
    if ( v9 < 0 )
    {
      v87 = 0;
      goto LABEL_139;
    }
    v8 = 1;
    if ( v9 )
    {
      v88 = *(_QWORD *)(v3 + 392);
      nullsub_1(v84, 1);
      v89 = sub_140001650(v9, 1);
      if ( !v89 )
      {
        v260 = v9;
        v87 = 1;
LABEL_139:
        sub_14196B2DB(v87, v260);
      }
      v90 = v89;
      sub_1419234B0(v89, v88, v9);
      v8 = v90;
    }
    *(_QWORD *)(v3 + 408) = v9;
    *(_QWORD *)(v3 + 416) = v8;
    *(_QWORD *)(v3 + 424) = v9;
    v91 = *(unsigned __int8 *)(v3 + 434);
    v10 = v3 + 40;
    if ( v91 != 2 )
      break;
    *(_QWORD *)(v3 + 456) = v8;
    *(_QWORD *)(v3 + 464) = v9;
    *(_QWORD *)(v3 + 528) = v10;
    v6 = (char *)(v3 + 538);
    *(_BYTE *)(v3 + 538) = 0;
LABEL_48:
    *(_WORD *)(v3 + 536) = 0;
    *(_QWORD *)(v3 + 440) = v8;
    *(_QWORD *)(v3 + 448) = v9;
    v35 = v3 + 472;
    v259 = v7;
    v260 = v8;
    sub_140D90460(v3 + 472, v8, v9);
    v2 = v273;
    v284 = (volatile signed __int64 **)v7;
    v3 = v285;
    *(_BYTE *)(v285 + 537) = 1;
    v36 = *(_QWORD *)(v3 + 472);
    if ( v36 == -1 )
    {
      *(_QWORD *)(v3 + 544) = *(_QWORD *)(v3 + 480);
      *(_QWORD *)&v278 = v3 + 544;
      *((_QWORD *)&v278 + 1) = sub_14166FAD0;
      *(_QWORD *)&v279 = v7;
      *((_QWORD *)&v279 + 1) = sub_140191200;
      v245 = v7;
      sub_1416DAFA0(&v274, &unk_141A104F4, &v278);
      v249 = v274;
      v250 = v275.m128i_i64[0];
      v3 = v285;
      *(_QWORD *)(v285 + 552) = 2;
      *(__m128i *)(v3 + 560) = _mm_load_si128((const __m128i *)&v249);
      *(_QWORD *)(v3 + 576) = v250;
      *(_QWORD *)(v3 + 584) = v10;
      *(_BYTE *)(v3 + 752) = 0;
LABEL_58:
      v283 = (__m128i *)(v3 + 552);
      sub_1403A2380(&v278, v3 + 552, v2);
      v44 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        v60 = 4;
LABEL_96:
        *v6 = v60;
        result = 1;
        v62 = 6;
        goto LABEL_338;
      }
      v45 = *((_QWORD *)&v278 + 1);
      v46 = v279;
      v245 = (__int64)v284;
      sub_1402852F0(v283);
      if ( v44 != -1 && v44 != 3 && v45 )
        sub_140001660(v46, v45, 1);
      v7 = (__int64)v284;
      v246 = v284;
      sub_140032F30(v285 + 544);
      goto LABEL_80;
    }
    v23 = *(_QWORD *)(v3 + 488) == 0;
    *(_BYTE *)(v3 + 537) = 0;
    if ( !v23 )
    {
      *(_BYTE *)(v3 + 536) = 1;
      v37 = _mm_loadu_si128((const __m128i *)(v35 + 16));
      v38 = *(_OWORD *)(v35 + 32);
      *(__m128i *)(v3 + 544) = _mm_loadu_si128((const __m128i *)v35);
      *(__m128i *)(v3 + 560) = v37;
      *(_OWORD *)(v3 + 576) = v38;
      v39 = *(_QWORD *)(v35 + 48);
      *(_QWORD *)(v3 + 592) = v39;
      v40 = 1;
      if ( (v39 & 1) == 0 )
      {
        v41 = *(_DWORD **)(v3 + 576);
        v42 = *(_QWORD *)(v3 + 584);
        if ( v42 <= 7 )
        {
          if ( v42 != 7 || *v41 ^ 0x6C66666F | *(_DWORD *)((char *)v41 + 3) ^ 0x656E696C )
            goto LABEL_70;
        }
        else
        {
          if ( v42 <= 0x15 )
          {
            v43 = v42 + 1;
            while ( *v41 ^ 0x6C66666F | *(_DWORD *)((char *)v41 + 3) ^ 0x656E696C )
            {
              v41 = (_DWORD *)((char *)v41 + 1);
              if ( --v43 < 8 )
                goto LABEL_70;
            }
            goto LABEL_71;
          }
          v283 = (__m128i *)v6;
          v282 = v10;
          *(_QWORD *)&v278 = v41;
          *((_QWORD *)&v278 + 1) = v42;
          *(_QWORD *)&v279 = aFfline;
          *((_QWORD *)&v279 + 1) = 6;
          v54 = 0;
          v55 = 0;
          if ( v42 >= 0x47 )
          {
            si128 = _mm_load_si128((const __m128i *)&xmmword_141A0B860);
            v64 = _mm_load_si128((const __m128i *)&xmmword_141A0B870);
            v65 = 0;
            do
            {
              v66 = _mm_loadu_si128((const __m128i *)((char *)v41 + v65 + 16));
              v67 = _mm_loadu_si128((const __m128i *)((char *)v41 + v65 + 22));
              v68 = (unsigned int)_mm_movemask_epi8(
                                    _mm_and_si128(
                                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v41 + v65 + 6)), v64),
                                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v41 + v65)), si128)));
              v69 = _mm_loadu_si128((const __m128i *)((char *)v41 + v65 + 32));
              v70 = _mm_loadu_si128((const __m128i *)((char *)v41 + v65 + 38));
              v71 = _mm_loadu_si128((const __m128i *)((char *)v41 + v65 + 48));
              v72 = _mm_loadu_si128((const __m128i *)((char *)v41 + v65 + 54));
              if ( (_DWORD)v68 )
                v55 = sub_1419393B0(&v278, v65, v68, 0);
              else
                v55 = 0;
              v73 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v67, v64), _mm_cmpeq_epi8(v66, si128)));
              if ( (_WORD)v73 )
              {
                v76 = sub_1419393B0(&v278, v65 + 16, v73, v55);
                LOBYTE(v76) = v55 | v76;
                v55 = v76;
              }
              v74 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v70, v64), _mm_cmpeq_epi8(v69, si128)));
              if ( (_WORD)v74 )
              {
                v77 = sub_1419393B0(&v278, v65 + 32, v74, v55);
                LOBYTE(v77) = v55 | v77;
                v55 = v77;
              }
              v75 = (unsigned int)_mm_movemask_epi8(_mm_and_si128(_mm_cmpeq_epi8(v72, v64), _mm_cmpeq_epi8(v71, si128)));
              if ( (_WORD)v75 )
              {
                v78 = sub_1419393B0(&v278, v65 + 48, v75, v55);
                LOBYTE(v78) = v55 | v78;
                v55 = v78;
                v54 = v65 + 64;
                if ( v65 + 134 >= v42 )
                  break;
              }
              else
              {
                v54 = v65 + 64;
                if ( v65 + 134 >= v42 )
                  break;
              }
              v65 = v54;
            }
            while ( !(_BYTE)v55 );
          }
          if ( v54 + 22 < v42 && !(_BYTE)v55 )
          {
            v56 = _mm_load_si128((const __m128i *)&xmmword_141A0B860);
            v57 = _mm_load_si128((const __m128i *)&xmmword_141A0B870);
            do
            {
              v58 = (unsigned int)_mm_movemask_epi8(
                                    _mm_and_si128(
                                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v41 + v54 + 6)), v57),
                                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)((char *)v41 + v54)), v56)));
              if ( (_DWORD)v58 )
              {
                v55 = sub_1419393B0(&v278, v54, v58, 0);
                if ( v54 + 38 >= v42 )
                  break;
              }
              else
              {
                v55 = 0;
                if ( v54 + 38 >= v42 )
                  break;
              }
              v54 += 16;
            }
            while ( !(_BYTE)v55 );
          }
          v59 = (unsigned int)_mm_movemask_epi8(
                                _mm_and_si128(
                                  _mm_cmpeq_epi8(
                                    _mm_loadu_si128((const __m128i *)((char *)v41 + v42 - 16)),
                                    (__m128i)xmmword_141A0B870),
                                  _mm_cmpeq_epi8(
                                    _mm_loadu_si128((const __m128i *)((char *)v41 + v42 - 22)),
                                    (__m128i)xmmword_141A0B860)));
          if ( (_DWORD)v59 )
            LOBYTE(v55) = v55 | sub_1419393B0(&v278, v42 - 22, v59, v55);
          v23 = (_BYTE)v55 == 0;
          v3 = v285;
          v10 = v282;
          v6 = (char *)v283;
          if ( !v23 )
            goto LABEL_71;
LABEL_70:
          v40 = 0;
        }
      }
LABEL_71:
      *(_BYTE *)(v3 + 536) = 0;
      *(_QWORD *)(v3 + 600) = v40;
      *(__m128i *)(v3 + 608) = _mm_loadu_si128((const __m128i *)v35);
      *(_QWORD *)(v3 + 624) = *(_QWORD *)(v35 + 16);
      *(_QWORD *)(v3 + 632) = v10;
      *(_BYTE *)(v3 + 800) = 0;
      v2 = v273;
LABEL_72:
      v283 = (__m128i *)(v3 + 600);
      sub_1403A2380(&v278, v3 + 600, v2);
      v49 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        v60 = 3;
        goto LABEL_96;
      }
      v50 = *((_QWORD *)&v278 + 1);
      v51 = v279;
      sub_1402852F0(v283);
      if ( v49 != -1 && v49 != 3 && v50 )
        sub_140001660(v51, v50, 1);
      v52 = v285;
      v53 = *(_QWORD *)(v285 + 568);
      if ( v53 )
        sub_140001660(*(_QWORD *)(v285 + 576), v53, 1);
      *(_BYTE *)(v52 + 536) = 0;
      v7 = (__int64)v284;
      goto LABEL_80;
    }
    v47 = *(_QWORD *)(v3 + 496);
    v48 = *(_QWORD *)(v3 + 504);
    if ( v36 )
      sub_140001660(*(_QWORD *)(v3 + 480), v36, 1);
    if ( v47 )
      sub_140001660(v48, v47, 1);
LABEL_80:
    *(_WORD *)(v285 + 537) = 256;
    sub_14028CB50(v7);
LABEL_111:
    v3 = v285;
    v79 = *(_QWORD *)(v285 + 408);
    if ( v79 )
      sub_140001660(*(_QWORD *)(v285 + 416), v79, 1);
    v80 = *(_QWORD *)(v3 + 384);
    if ( v80 )
      sub_140001660(*(_QWORD *)(v3 + 392), v80, 1);
    if ( *(_DWORD *)(v3 + 248) != -1 )
      goto LABEL_127;
    v81 = *(_QWORD *)(v3 + 256);
LABEL_117:
    if ( !__OFSUB__(-v81, 1) )
    {
      v82 = 5;
      if ( v81 < 0 )
        v82 = v81 ^ 0x8000000000000000uLL;
      if ( v82 < 4 )
      {
        v81 = *(_QWORD *)(v3 + 264);
        v83 = 264;
LABEL_124:
        if ( v81 )
          sub_140001660(*(_QWORD *)(v3 + v83 + 8), v81, 1);
        goto LABEL_126;
      }
      v83 = 256;
      if ( v82 != 4 )
        goto LABEL_124;
      v81 = *(_QWORD *)(v3 + 264);
      v83 = 264;
      if ( (unsigned __int64)v81 <= 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_124;
    }
LABEL_126:
    *(_BYTE *)(v3 + 435) = 0;
LABEL_127:
    *(_BYTE *)(v3 + 435) = 0;
LABEL_128:
    *(_QWORD *)(v3 + 440) = v3 + 32;
  }
  if ( v91 != 1 )
  {
    v12 = v3;
    v13 = (int *)(v3 + 48);
    v14 = (__m128i *)(v12 + 64);
    v15 = (_QWORD *)(v12 + 88);
    *(_QWORD *)(v12 + 472) = v8;
    *(_QWORD *)(v12 + 480) = v9;
    *(_QWORD *)(v12 + 512) = v10;
    *(_QWORD *)(v12 + 520) = v13;
    *(_QWORD *)(v12 + 528) = v12 + 64;
    *(_QWORD *)(v12 + 536) = v12 + 88;
    v11 = (__m128i *)(v12 + 546);
    *(_BYTE *)(v12 + 546) = 0;
LABEL_156:
    v283 = v14;
    *(_WORD *)(v12 + 544) = 0;
    *(_QWORD *)&v278 = v8;
    *((_QWORD *)&v278 + 1) = v9;
    v279 = 0;
    v260 = v8;
    v280 = v8;
    v281 = v9;
    v266 = v11;
    v265 = v7;
    sub_140D8B500(&v274, (__int128 *)&v278);
    v2 = v273;
    if ( (_BYTE)v274 == 0xFF )
    {
      v266 = v11;
      v265 = v7;
      sub_140032F30((char *)&v274 + 8);
LABEL_335:
      v11->m128i_i8[0] = 1;
      sub_14028CDD0(v7);
      goto LABEL_111;
    }
    v96 = _mm_loadu_si128((const __m128i *)&v274);
    *(__m128i *)(v7 + 16) = _mm_loadu_si128(&v275);
    *(__m128i *)v7 = v96;
    v97 = v11;
    v272 = v11;
    v271 = v7;
    v98 = sub_1416724D0(aHeader_0, 6, v7);
    if ( !v98 )
      goto LABEL_334;
    v272 = v11;
    v271 = v7;
    v99 = sub_1416724D0(aEvent_0, 5, v98);
    if ( !v99 )
      goto LABEL_334;
    v100 = 0;
    v101 = 1;
    if ( *(_BYTE *)v99 == 3 )
    {
      v101 = *(_QWORD *)(v99 + 16);
      v100 = *(_QWORD *)(v99 + 24);
    }
    if ( v100 != 11 )
    {
      if ( v100 != 16 )
      {
        if ( v100 == 12 && !(*(_QWORD *)v101 ^ 0x6174732D6B736174LL | *(unsigned int *)(v101 + 8) ^ 0x64657472LL) )
        {
          v102 = *v13;
          v103 = *((_QWORD *)v13 + 1);
          *(_QWORD *)v13 = 0;
          if ( v102 == 1 )
          {
            *(_QWORD *)&v278 = -1;
            v272 = v11;
            v271 = v7;
            sub_140B38700(&v274, v103, &v278);
            if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( (_QWORD)v274 )
                sub_140001660(*((_QWORD *)&v274 + 1), v274, 1);
            }
          }
        }
        goto LABEL_334;
      }
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v101), (__m128i)xmmword_141A0B880)) == 0xFFFF )
      {
        v272 = v11;
        v271 = v7;
        v139 = sub_1416724D0(aPayload_1, 7, v7);
        if ( v139 )
        {
          v272 = v11;
          v271 = v7;
          v140 = sub_1416724D0(aOutput_0, 6, v139);
          if ( v140 )
          {
            v272 = v11;
            v271 = v7;
            v141 = sub_1416724D0(aSentence, 8, v140);
            v142 = v141;
            if ( v141 )
            {
              v272 = v11;
              v271 = v7;
              v143 = (_BYTE *)sub_1416724D0(aHeartbeat, 9, v141);
              if ( !v143 || *v143 != 1 || (v143[1] & 1) == 0 )
              {
                v282 = v10;
                v256 = v11;
                v284 = (volatile signed __int64 **)v7;
                v255 = v7;
                v144 = sub_1416724D0(aText_4, 4, v142);
                v146 = 0;
                v147 = v285;
                if ( v144 )
                {
                  v146 = 0;
                  v145 = *(_QWORD *)(v144 + 24);
                  if ( *(_BYTE *)v144 == 3 )
                    v146 = *(_QWORD *)(v144 + 16);
                }
                v148 = 1;
                if ( v146 )
                  v148 = v146;
                else
                  v145 = 0;
                v149 = sub_1408FEA60(v148, v145);
                v150 = (_QWORD *)(v147 + 488);
                v256 = v11;
                v255 = (__int64)v284;
                sub_1403F7D50(v147 + 488, v149, v151);
                v152 = v285;
                *(_BYTE *)(v285 + 544) = 1;
                if ( !*(_QWORD *)(v152 + 504) )
                {
                  if ( *v150 )
                    sub_140001660(*(_QWORD *)(v152 + 496), *v150, 1);
                  *(_BYTE *)(v152 + 544) = 0;
                  v7 = (__int64)v284;
                  goto LABEL_334;
                }
                v270 = v11;
                v269 = v284;
                v153 = (_BYTE *)sub_1416724D0(aSentenceEnd, 12, v142);
                v154 = v283;
                if ( v153 && *v153 == 1 && (v153[1] & 1) != 0 )
                {
                  v229 = v283->m128i_i64[1];
                  v230 = v283[1].m128i_i64[0];
                  v231 = *(_QWORD *)(v285 + 496);
                  v232 = *(_QWORD *)(v285 + 504);
                  v270 = v11;
                  v269 = v284;
                  sub_1408DBF10((unsigned int)&v278, v229, v230, v231, v232);
                  v233 = v283;
                  if ( v283->m128i_i64[0] )
                  {
                    sub_140001660(v283->m128i_i64[1], v283->m128i_i64[0], 1);
                    v233 = v283;
                  }
                  v233[1].m128i_i64[0] = v279;
                  *v233 = _mm_loadu_si128((const __m128i *)&v278);
                  v15[2] = 0;
                  v270 = v11;
                  v269 = v284;
                  sub_1416DB410(&v278, v233);
                  v275.m128i_i64[0] = v279;
                  v274 = v278;
                  v3 = v285;
                  *(_QWORD *)(v285 + 552) = 1;
                  *(__m128i *)(v3 + 560) = _mm_load_si128((const __m128i *)&v274);
                  *(_QWORD *)(v3 + 576) = v275.m128i_i64[0];
                  *(_QWORD *)(v3 + 584) = v282;
                  *(_BYTE *)(v3 + 752) = 0;
                  v7 = (__int64)v284;
LABEL_16:
                  v283 = v11;
                  v284 = (volatile signed __int64 **)v7;
                  v282 = v3 + 552;
                  sub_1403A2380(&v278, v3 + 552, v2);
                  v25 = v278;
                  if ( (_QWORD)v278 != -2 )
                  {
                    v26 = *((_QWORD *)&v278 + 1);
                    v27 = v279;
                    v270 = v283;
                    v269 = v284;
                    sub_1402852F0(v282);
                    if ( v25 != -1 && v25 != 3 && v26 )
                      sub_140001660(v27, v26, 1);
                    goto LABEL_21;
                  }
                  v34 = 3;
                }
                else
                {
                  *(_BYTE *)(v285 + 544) = 0;
                  *(_QWORD *)&v279 = v150[2];
                  v278 = *(_OWORD *)v150;
                  v155 = v284;
                  if ( *v15 )
                  {
                    sub_140001660(v15[1], *v15, 1);
                    v154 = v283;
                  }
                  v15[2] = v279;
                  *(__m128i *)v15 = _mm_load_si128((const __m128i *)&v278);
                  v156 = v154->m128i_i64[1];
                  v157 = v154[1].m128i_i64[0];
                  v158 = v15[1];
                  v159 = v15[2];
                  v270 = v11;
                  v269 = v155;
                  sub_1408DBF10((unsigned int)&v249, v156, v157, v158, v159);
                  v3 = v285;
                  *(_QWORD *)(v285 + 552) = 0;
                  *(__m128i *)(v3 + 560) = _mm_loadu_si128((const __m128i *)&v249);
                  *(_QWORD *)(v3 + 576) = v250;
                  *(_QWORD *)(v3 + 584) = v282;
                  *(_BYTE *)(v3 + 752) = 0;
                  v7 = (__int64)v284;
LABEL_11:
                  v283 = v11;
                  v284 = (volatile signed __int64 **)v7;
                  v282 = v3 + 552;
                  sub_1403A2380(&v278, v3 + 552, v2);
                  v20 = v278;
                  if ( (_QWORD)v278 != -2 )
                  {
                    v21 = *((_QWORD *)&v278 + 1);
                    v22 = v279;
                    v270 = v283;
                    v269 = v284;
                    sub_1402852F0(v282);
                    if ( v20 != -1 )
                    {
                      v23 = v20 == 3;
                      v24 = v285;
                      if ( !v23 && v21 )
                        sub_140001660(v22, v21, 1);
                      goto LABEL_22;
                    }
LABEL_21:
                    v24 = v285;
LABEL_22:
                    v11 = v283;
                    if ( *(_BYTE *)(v24 + 544) )
                    {
                      v28 = *(_QWORD *)(v24 + 488);
                      if ( v28 )
                        sub_140001660(*(_QWORD *)(v24 + 496), v28, 1);
                    }
                    *(_BYTE *)(v24 + 544) = 0;
                    v7 = (__int64)v284;
                    goto LABEL_334;
                  }
                  v34 = 4;
                }
LABEL_337:
                v283->m128i_i8[0] = v34;
                result = 1;
                v62 = 4;
                goto LABEL_338;
              }
            }
          }
        }
      }
LABEL_334:
      v266 = v11;
      v265 = v7;
      sub_140032FF0(v7);
      goto LABEL_335;
    }
    if ( *(_QWORD *)v101 ^ 0x6961662D6B736174LL | *(_QWORD *)(v101 + 3) ^ 0x64656C6961662D6BLL )
      goto LABEL_334;
    v268 = v11;
    v267 = v7;
    v160 = sub_1416724D0(aHeader_0, 6, v7);
    v282 = v10;
    if ( v160 && (v268 = v11, v267 = v7, (v163 = sub_1416724D0(aErrorMessage, 13, v160)) != 0) )
    {
      v162 = *(_QWORD *)(v163 + 16);
      v164 = 26;
      if ( *(_BYTE *)v163 == 3 )
        v164 = *(_QWORD *)(v163 + 24);
      v161 = v238;
      if ( v164 < 0 )
      {
        v165 = 0;
        goto LABEL_237;
      }
      v200 = aAliyunFunAsrTa;
      if ( *(_BYTE *)v163 == 3 )
        v200 = *(const char **)(v163 + 16);
      v199 = (const __m128i *)(v285 + 552);
      v202 = 1;
      v203 = 0;
      if ( !v164 )
      {
LABEL_308:
        v204 = v285;
        *(_QWORD *)(v285 + 552) = v203;
        v238 = v202;
        *(_QWORD *)(v204 + 560) = v202;
        *(_QWORD *)(v204 + 568) = v203;
        *(_BYTE *)(v204 + 545) = 1;
        v258 = v97;
        v257 = v7;
        sub_1416DB410(&v278, v199);
        v2 = v273;
        v205 = (__m128i)v278;
        v206 = v279;
        v207 = *v13;
        v208 = *((_QWORD *)v13 + 1);
        *(_QWORD *)v13 = 0;
        if ( v207 == 1 )
        {
          v278 = (unsigned __int128)v205;
          *(_QWORD *)&v279 = v206;
          v258 = v97;
          v257 = v7;
          sub_140B38700(&v274, v208, &v278);
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
        *(_QWORD *)(v3 + 608) = v282;
        *(_BYTE *)(v3 + 776) = 0;
        v11 = v97;
LABEL_328:
        v283 = v11;
        v284 = (volatile signed __int64 **)v7;
        v282 = v3 + 576;
        sub_1403A2380(&v278, v3 + 576, v2);
        v225 = v278;
        if ( (_QWORD)v278 != -2 )
        {
          v226 = *((_QWORD *)&v278 + 1);
          v227 = v279;
          v258 = v283;
          v257 = (__int64)v284;
          sub_1402852F0(v282);
          if ( v225 != -1 && v225 != 3 && v226 )
            sub_140001660(v227, v226, 1);
          *(_BYTE *)(v285 + 545) = 0;
          v7 = (__int64)v284;
          v11 = v283;
          goto LABEL_334;
        }
        v34 = 5;
        goto LABEL_337;
      }
    }
    else
    {
      v199 = (const __m128i *)(v285 + 552);
      v164 = 26;
      v200 = aAliyunFunAsrTa;
    }
    nullsub_1(v162, v161);
    v165 = 1;
    v201 = sub_140001650(v164, 1);
    if ( !v201 )
    {
      v161 = v164;
      v11 = v97;
LABEL_237:
      v268 = v11;
      v267 = v7;
      sub_14196B2DB(v165, v161);
    }
    v202 = v201;
    sub_1419234B0(v201, v200, v164);
    v203 = v164;
    goto LABEL_308;
  }
  v17 = v3;
  v18 = (int *)(v3 + 48);
  v19 = (_QWORD *)(v17 + 64);
  *(_QWORD *)(v17 + 472) = v8;
  *(_QWORD *)(v17 + 480) = v9;
  *(_QWORD *)(v17 + 488) = v10;
  *(_QWORD *)(v17 + 496) = v18;
  *(_QWORD *)(v17 + 504) = v17 + 64;
  v16 = (__m128i *)(v17 + 513);
  *(_BYTE *)(v17 + 513) = 0;
LABEL_146:
  *(_BYTE *)(v17 + 512) = 0;
  *(_QWORD *)&v278 = v8;
  *((_QWORD *)&v278 + 1) = v9;
  v279 = 0;
  v260 = v8;
  v280 = v8;
  v281 = v9;
  v262 = v16;
  v261 = v7;
  sub_140D8B500(&v274, (__int128 *)&v278);
  v2 = v273;
  v282 = v10;
  if ( (_BYTE)v274 == 0xFF )
  {
    v262 = v16;
    v261 = v7;
    sub_140032F30((char *)&v274 + 8);
LABEL_262:
    v16->m128i_i8[0] = 1;
    sub_14028CC70(v7);
    goto LABEL_111;
  }
  v92 = _mm_loadu_si128((const __m128i *)&v274);
  *(__m128i *)(v7 + 16) = _mm_loadu_si128(&v275);
  *(__m128i *)v7 = v92;
  v277 = v16;
  v276 = v7;
  v93 = sub_1416724D0(aType_3, 4, v7);
  if ( !v93 )
  {
LABEL_261:
    v262 = v16;
    v261 = v7;
    sub_140032FF0(v7);
    goto LABEL_262;
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
        goto LABEL_193;
      goto LABEL_261;
    case 15LL:
      if ( !(*(_QWORD *)v95 ^ 0x2E6E6F6973736573LL | *(_QWORD *)(v95 + 7) ^ 0x646574616470752ELL) )
      {
        v121 = *v18;
        v122 = *((_QWORD *)v18 + 1);
        *(_QWORD *)v18 = 0;
        if ( v121 == 1 )
        {
          *(_QWORD *)&v278 = -1;
          v277 = v16;
          v276 = v7;
          sub_140B38700(&v274, v122, &v278);
          if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( (_QWORD)v274 )
              sub_140001660(*((_QWORD *)&v274 + 1), v274, 1);
          }
        }
      }
      goto LABEL_261;
    case 48LL:
      if ( (unsigned int)sub_141923B40(v95, aConversationIt, 48) )
        goto LABEL_261;
      v277 = v16;
      v276 = v7;
      v104 = sub_1416724D0(aText_4, 4, v7);
      v106 = 0;
      v107 = v285;
      if ( v104 )
      {
        v106 = 0;
        v105 = *(_QWORD *)(v104 + 24);
        if ( *(_BYTE *)v104 == 3 )
          v106 = *(_QWORD *)(v104 + 16);
      }
      v108 = 1;
      if ( v106 )
        v108 = v106;
      else
        v105 = 0;
      *(_QWORD *)(v285 + 544) = v108;
      *(_QWORD *)(v107 + 552) = v105;
      v277 = v16;
      v276 = v7;
      v109 = sub_1416724D0(aStash, 5, v7);
      v111 = v285;
      v112 = v285 + 544;
      v113 = 0;
      if ( v109 )
      {
        v113 = 0;
        v110 = *(_QWORD *)(v109 + 24);
        if ( *(_BYTE *)v109 == 3 )
          v113 = *(_QWORD *)(v109 + 16);
      }
      v114 = 1;
      if ( v113 )
        v114 = v113;
      else
        v110 = 0;
      *(_QWORD *)(v285 + 560) = v114;
      *(_QWORD *)(v111 + 568) = v110;
      *(_QWORD *)&v278 = v112;
      *((_QWORD *)&v278 + 1) = sub_140191200;
      *(_QWORD *)&v279 = v111 + 560;
      *((_QWORD *)&v279 + 1) = sub_140191200;
      v277 = v16;
      v276 = v7;
      sub_1416DAFA0(&v274, &unk_141A105FD, &v278);
      v115 = *((_QWORD *)&v274 + 1);
      v116 = v274;
      v117 = sub_1408FEA60(*((_QWORD *)&v274 + 1), v275.m128i_i64[0]);
      v284 = (volatile signed __int64 **)v7;
      v283 = v16;
      if ( v118 < 0 )
      {
        v247 = v115;
        v273 = v116;
        v120 = 0;
        goto LABEL_186;
      }
      v217 = v118;
      v218 = 1;
      v219 = (_QWORD *)v285;
      if ( v118 )
      {
        v247 = v115;
        v220 = v117;
        nullsub_1(v119, v118);
        v221 = sub_140001650(v217, 1);
        if ( !v221 )
        {
          v273 = v116;
          v239 = v217;
          v120 = 1;
LABEL_186:
          sub_14196B2DB(v120, v239);
        }
        v218 = v221;
        sub_1419234B0(v221, v220, v217);
        v115 = v247;
      }
      v219[65] = v217;
      v219[66] = v218;
      v219[67] = v217;
      if ( v116 )
      {
        sub_140001660(v115, v116, 1);
        v217 = v219[67];
      }
      v239 = v218;
      if ( !v217 )
      {
        v228 = v219[65];
        if ( v228 )
          sub_140001660(v219[66], v228, 1);
        v16 = v283;
        goto LABEL_344;
      }
      v222 = v19[1];
      v223 = v19[2];
      v224 = v219[66];
      v16 = v283;
      v243 = v283;
      v242 = v284;
      sub_1408DBF10((unsigned int)&v249, v222, v223, v224, v217);
      v3 = v285;
      *(_QWORD *)(v285 + 576) = 0;
      *(__m128i *)(v3 + 584) = _mm_loadu_si128((const __m128i *)&v249);
      *(_QWORD *)(v3 + 600) = v250;
      *(_QWORD *)(v3 + 608) = v282;
      *(_BYTE *)(v3 + 776) = 0;
      v7 = (__int64)v284;
LABEL_28:
      v283 = v16;
      v284 = (volatile signed __int64 **)v7;
      v282 = v3 + 576;
      sub_1403A2380(&v278, v3 + 576, v2);
      v29 = v278;
      if ( (_QWORD)v278 == -2 )
      {
        v33 = 3;
        goto LABEL_264;
      }
      v30 = *((_QWORD *)&v278 + 1);
      v31 = v279;
      v16 = v283;
      v243 = v283;
      v242 = v284;
      sub_1402852F0(v282);
      goto LABEL_30;
    case 50LL:
      if ( (unsigned int)sub_141923B40(v95, aConversationIt_1, 50) )
        goto LABEL_261;
LABEL_193:
      v264 = v16;
      v263 = v7;
      v123 = sub_1416724D0(aError_36, 5, v7);
      if ( !v123 || (v264 = v16, v263 = v7, (v126 = sub_1416724D0(aMessage_0, 7, v123)) == 0) )
      {
        v166 = v16;
        v167 = (const __m128i *)(v285 + 520);
        v127 = 27;
        v168 = &unk_141A105D3;
LABEL_240:
        nullsub_1(v125, v124);
        v128 = 1;
        v169 = sub_140001650(v127, 1);
        if ( !v169 )
        {
          v124 = v127;
          v16 = v166;
LABEL_199:
          v264 = v16;
          v263 = v7;
          sub_14196B2DB(v128, v124);
        }
        v170 = v169;
        sub_1419234B0(v169, v168, v127);
        v171 = v127;
        goto LABEL_242;
      }
      v125 = *(_QWORD *)(v126 + 16);
      v127 = 27;
      if ( *(_BYTE *)v126 == 3 )
        v127 = *(_QWORD *)(v126 + 24);
      v124 = v237;
      if ( v127 < 0 )
      {
        v128 = 0;
        goto LABEL_199;
      }
      v166 = v16;
      v168 = &unk_141A105D3;
      if ( *(_BYTE *)v126 == 3 )
        v168 = *(void **)(v126 + 16);
      v167 = (const __m128i *)(v285 + 520);
      v170 = 1;
      v171 = 0;
      if ( v127 )
        goto LABEL_240;
LABEL_242:
      v172 = v285;
      *(_QWORD *)(v285 + 520) = v171;
      v237 = v170;
      *(_QWORD *)(v172 + 528) = v170;
      *(_QWORD *)(v172 + 536) = v171;
      *(_BYTE *)(v172 + 512) = 1;
      v16 = v166;
      v254 = v166;
      v253 = v7;
      sub_1416DB410(&v278, v167);
      v2 = v273;
      v173 = (__m128i)v278;
      v174 = v279;
      v175 = *v18;
      v176 = *((_QWORD *)v18 + 1);
      *(_QWORD *)v18 = 0;
      if ( v175 == 1 )
      {
        v278 = (unsigned __int128)v173;
        *(_QWORD *)&v279 = v174;
        v254 = v166;
        v253 = v7;
        sub_140B38700(&v274, v176, &v278);
        if ( (unsigned __int64)v274 <= 0xFFFFFFFFFFFFFFFDuLL && (_QWORD)v274 )
          sub_140001660(*((_QWORD *)&v274 + 1), v274, 1);
        v3 = v285;
      }
      else
      {
        v3 = v285;
        if ( (unsigned __int64)(v173.m128i_i64[0] - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v173.m128i_i64[1], v173.m128i_i64[0], 1);
      }
      *(_BYTE *)(v3 + 512) = 0;
      *(_QWORD *)(v3 + 544) = 2;
      *(__m128i *)(v3 + 552) = _mm_loadu_si128(v167);
      *(_QWORD *)(v3 + 568) = v167[1].m128i_i64[0];
      *(_QWORD *)(v3 + 576) = v282;
      *(_BYTE *)(v3 + 744) = 0;
LABEL_254:
      v283 = v16;
      v284 = (volatile signed __int64 **)v7;
      v282 = v3 + 544;
      sub_1403A2380(&v278, v3 + 544, v2);
      v183 = v278;
      if ( (_QWORD)v278 != -2 )
      {
        v184 = *((_QWORD *)&v278 + 1);
        v185 = v279;
        v16 = v283;
        v254 = v283;
        v253 = (__int64)v284;
        sub_1402852F0(v282);
        if ( v183 != -1 && v183 != 3 && v184 )
          sub_140001660(v185, v184, 1);
        *(_BYTE *)(v285 + 512) = 0;
LABEL_260:
        v7 = (__int64)v284;
        goto LABEL_261;
      }
      v33 = 5;
LABEL_264:
      v283->m128i_i8[0] = v33;
      result = 1;
      v62 = 5;
LABEL_338:
      v198 = v285;
LABEL_339:
      *(_BYTE *)(v198 + 433) = v62;
      return result;
    case 53LL:
      if ( (unsigned int)sub_141923B40(v95, aConversationIt_0, 53) )
        goto LABEL_261;
      v277 = v16;
      v276 = v7;
      v129 = sub_1416724D0(aTranscript, 10, v7);
      v284 = (volatile signed __int64 **)v7;
      v131 = 0;
      v132 = (_QWORD *)v285;
      if ( v129 )
      {
        v131 = 0;
        v130 = *(_QWORD *)(v129 + 24);
        if ( *(_BYTE *)v129 == 3 )
          v131 = *(_QWORD *)(v129 + 16);
      }
      v133 = v10;
      v134 = 1;
      if ( v131 )
        v134 = v131;
      else
        v130 = 0;
      v135 = sub_1408FEA60(v134, v130);
      if ( v136 >= 0 )
      {
        if ( !v136 )
        {
          v132[65] = 0;
          v132[66] = 1;
          v132[67] = 0;
          v248 = 1;
LABEL_344:
          v262 = v16;
          v7 = (__int64)v284;
          v261 = (__int64)v284;
          sub_140032FF0(v284);
          goto LABEL_262;
        }
        v209 = v136;
        v283 = v16;
        v210 = v135;
        nullsub_1(v137, v136);
        v211 = sub_140001650(v209, 1);
        if ( v211 )
        {
          v212 = v211;
          sub_1419234B0(v211, v210, v209);
          v132[65] = v209;
          v132[66] = v212;
          v132[67] = v209;
          v213 = v19[1];
          v214 = v19[2];
          v252 = v283;
          v251 = v284;
          v248 = v212;
          v215 = v212;
          v16 = v283;
          sub_1408DBF10((unsigned int)&v278, v213, v214, v215, v209);
          v216 = v133;
          if ( *v19 )
            sub_140001660(v19[1], *v19, 1);
          v19[2] = v279;
          *(__m128i *)v19 = _mm_loadu_si128((const __m128i *)&v278);
          v252 = v16;
          v251 = v284;
          sub_1416DB410(&v278, v19);
          v275.m128i_i64[0] = v279;
          v274 = v278;
          v3 = v285;
          *(_QWORD *)(v285 + 544) = 1;
          *(__m128i *)(v3 + 552) = _mm_load_si128((const __m128i *)&v274);
          *(_QWORD *)(v3 + 568) = v275.m128i_i64[0];
          *(_QWORD *)(v3 + 576) = v216;
          *(_BYTE *)(v3 + 744) = 0;
          v7 = (__int64)v284;
LABEL_26:
          v283 = v16;
          v284 = (volatile signed __int64 **)v7;
          v282 = v3 + 544;
          sub_1403A2380(&v278, v3 + 544, v2);
          v29 = v278;
          if ( (_QWORD)v278 == -2 )
          {
            v33 = 4;
            goto LABEL_264;
          }
          v30 = *((_QWORD *)&v278 + 1);
          v31 = v279;
          v16 = v283;
          v252 = v283;
          v251 = v284;
          sub_1402852F0(v282);
LABEL_30:
          if ( v29 != -1 && v29 != 3 && v30 )
            sub_140001660(v31, v30, 1);
          v32 = *(_QWORD *)(v285 + 520);
          if ( v32 )
            sub_140001660(*(_QWORD *)(v285 + 528), v32, 1);
          goto LABEL_260;
        }
        v248 = v209;
        v138 = 1;
        v16 = v283;
      }
      else
      {
        v138 = 0;
      }
      v277 = v16;
      v276 = (__int64)v284;
      sub_14196B2DB(v138, v248);
    default:
      goto LABEL_261;
  }
}
