// module: codexmate_lib/core/relay/health_check
// addr: 0x140cf8fe0
// name: sub_140CF8FE0
// win 1.2.1 | module src/core/relay/health_check.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CF8FE0(__int64 *a1, const __m128i *a2, const __m128i *a3, __int64 a4)
{
  __m128i *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // of
  volatile signed __int64 *v10; // rax
  __int64 *v11; // r11
  __int8 v12; // al
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 m128i_i64; // r8
  __m128i *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rt0
  const __m128i *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // bl
  __int16 *v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  int v30; // eax
  __int16 *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rcx
  const __m128i *v34; // rdi
  __m128i *v35; // rcx
  __m128i *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r15
  const __m128i *v42; // rdx
  const __m128i *v43; // r8
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // rax
  __int64 v54; // rcx
  __int16 *v55; // rax
  __int64 v56; // rcx
  _DWORD *v57; // rax
  __int64 v58; // rcx
  __int16 *v59; // rax
  __int64 v60; // rcx
  __m128i v61; // xmm0
  __int64 v62; // rcx
  void *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r8
  const __m128i *v67; // rsi
  __m128i v68; // xmm1
  __m128i v69; // xmm1
  __m128i v70; // xmm2
  __m128i v71; // xmm3
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdi
  __m128i *v77; // r15
  __int64 v78; // r14
  __int16 *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // rax
  __int64 v85; // rdi
  void (__fastcall *v86)(__int64, _BYTE *); // rax
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  const __m128i *v92; // rcx
  __int32 v93; // edx
  __int64 v94; // rdx
  __int16 *v95; // r12
  __int64 v96; // rcx
  __int64 v97; // rdi
  __int16 v98; // si
  __int64 v99; // r13
  __int64 v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rax
  const __m128i *v103; // rcx
  __int64 v104; // rdx
  __int8 *v105; // r14
  const __m128i *v106; // rsi
  __int64 v107; // rdi
  __m128i v108; // xmm6
  __int8 v109; // bl
  __int64 v110; // rcx
  __int64 v111; // rdx
  const __m128i *v112; // rdx
  __int32 v113; // eax
  __m128i v114; // xmm1
  __m128i v115; // xmm2
  __m128i v116; // xmm3
  __int16 v117; // si
  __int64 v118; // rbx
  __int64 v119; // rdi
  __int64 v120; // rax
  unsigned int v121; // edx
  void (__fastcall *v122)(__int64, _BYTE *); // rax
  const __m128i *v123; // rdx
  __int64 v124; // rax
  const __m128i *v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // r8
  int v128; // eax
  int v129; // edx
  __int64 v130; // rax
  const __m128i *v131; // rcx
  __int32 v132; // edx
  __int64 v133; // r12
  __int64 v134; // r14
  __int64 v135; // rdi
  __int64 v136; // r13
  __int64 v137; // rbx
  __int64 v138; // r14
  __int64 v139; // rbx
  _QWORD *v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // r14
  __int64 v143; // rbx
  _QWORD *v144; // rdi
  __int16 *v145; // rdx
  __int64 v146; // rax
  unsigned int v147; // edx
  unsigned __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r14
  __int64 v157; // rax
  __int64 v158; // rdi
  __int64 v159; // rax
  _QWORD *v160; // rax
  char v161; // al
  __int64 v162; // rax
  __int64 v163; // rdx
  const __m128i *v164; // rcx
  __int64 v165; // rdi
  __int64 v166; // rsi
  const __m128i *v167; // rax
  __int64 v168; // rsi
  _QWORD *v169; // r14
  __int64 v170; // rdx
  const __m128i *v171; // rsi
  __int64 v172; // rax
  __int64 v173; // r9
  __int64 v174; // r14
  char v175; // r8
  const __m128i *v176; // rsi
  __int64 v177; // rdx
  __int64 v178; // rdi
  __int64 v179; // rsi
  const __m128i *v180; // r15
  __int64 v181; // rdx
  __int64 v182; // rsi
  _QWORD *v183; // r14
  __int64 v184; // rdx
  const __m128i *v185; // rsi
  __int64 v186; // rax
  signed __int64 v187; // rt0
  __int64 *v188; // rdx
  __int64 v189; // rcx
  char result; // al
  __int64 v191; // rcx
  __int128 v192; // kr40_16
  const __m128i *v193; // r12
  __int16 *v194; // rdi
  __int64 v195; // rbx
  __int64 v196; // rdx
  const __m128i *v197; // rsi
  const __m128i *v198; // rax
  const __m128i *v199; // rcx
  __int64 v200; // rsi
  unsigned __int64 v201; // rbx
  unsigned __int64 v202; // r14
  unsigned __int64 v203; // r8
  unsigned __int64 v204; // rdx
  unsigned __int64 v205; // rax
  unsigned __int64 v206; // r8
  unsigned __int64 v207; // rdx
  __int64 v208; // rax
  __int64 v209; // rax
  unsigned __int64 v210; // rdx
  unsigned __int32 v211; // ecx
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rbx
  __int64 v215; // r14
  __m128i v216; // xmm0
  __int128 v217; // rcx
  bool v218; // sf
  __int64 v219; // rax
  unsigned int v220; // edx
  unsigned __int64 v221; // rdx
  const __m128i *v222; // rax
  __int64 v223; // rcx
  __int64 v224; // rax
  void (__fastcall *v225)(__int64, _BYTE *); // rax
  __int64 v226; // rax
  const __m128i *v227; // rdx
  __int64 v228; // rax
  void (__fastcall *v229)(_QWORD, _BYTE *); // rax
  unsigned __int64 v230; // rax
  unsigned __int32 v231; // edx
  bool v232; // cl
  void (__fastcall *v233)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v234; // rax
  unsigned int v235; // edx
  unsigned __int64 v236; // rsi
  const __m128i *v237; // rdx
  __int64 v238; // rax
  __int64 v239; // rcx
  __int64 v240; // rax
  void (__fastcall *v241)(__int64, _BYTE *); // rax
  __int64 v242; // rcx
  __int64 v243; // rdx
  void (__fastcall *v244)(__int64, _BYTE *); // rax
  const __m128i *v245; // rsi
  __int64 v246; // rcx
  __int64 v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rcx
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rdx
  __int64 v253; // rsi
  __int64 v254; // rdi
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rdx
  void (__fastcall *v258)(unsigned __int64 *, __int64, __int64); // rax
  void (__fastcall *v259)(unsigned __int64 *, __int64, __int64); // rax
  __m128i v260; // [rsp+50h] [rbp-30h]
  __m128i v261; // [rsp+60h] [rbp-20h]
  _QWORD v262[3]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v263; // [rsp+90h] [rbp+10h]
  __int64 v264; // [rsp+A0h] [rbp+20h]
  __int64 v265; // [rsp+A8h] [rbp+28h]
  __m256i v266; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v267; // [rsp+D0h] [rbp+50h]
  __int128 v268; // [rsp+E0h] [rbp+60h]
  __int128 v269; // [rsp+F0h] [rbp+70h]
  __int128 v270; // [rsp+100h] [rbp+80h]
  __m128i v271; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 v272; // [rsp+1D8h] [rbp+158h]
  __int64 *v273; // [rsp+1E0h] [rbp+160h]
  __int64 v274; // [rsp+1E8h] [rbp+168h]
  __int64 v275; // [rsp+1F0h] [rbp+170h]
  _QWORD v276[2]; // [rsp+1F8h] [rbp+178h]
  __int128 v277; // [rsp+208h] [rbp+188h] BYREF
  __int64 v278; // [rsp+218h] [rbp+198h]
  _BYTE v279[40]; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v280; // [rsp+248h] [rbp+1C8h]
  __int128 v281; // [rsp+250h] [rbp+1D0h]
  __int64 v282; // [rsp+260h] [rbp+1E0h]
  __int64 v283; // [rsp+268h] [rbp+1E8h]
  __int16 *v284; // [rsp+270h] [rbp+1F0h]
  __int16 v285; // [rsp+278h] [rbp+1F8h]
  _BYTE v286[103]; // [rsp+280h] [rbp+200h] BYREF
  __int64 v287; // [rsp+2E8h] [rbp+268h]
  _BYTE v288[120]; // [rsp+2F0h] [rbp+270h] BYREF
  __m128i v289; // [rsp+368h] [rbp+2E8h]
  __m128i v290; // [rsp+378h] [rbp+2F8h]
  __int64 v291; // [rsp+400h] [rbp+380h]
  __int64 v292; // [rsp+408h] [rbp+388h] BYREF
  _DWORD *v293; // [rsp+410h] [rbp+390h]
  __int64 v294; // [rsp+418h] [rbp+398h]
  __m256i v295; // [rsp+420h] [rbp+3A0h] BYREF
  const __m128i *v296; // [rsp+440h] [rbp+3C0h]
  __int64 v297; // [rsp+448h] [rbp+3C8h]
  __int64 v298; // [rsp+450h] [rbp+3D0h]
  __int64 v299; // [rsp+458h] [rbp+3D8h]
  __int64 v300; // [rsp+460h] [rbp+3E0h]
  _QWORD *v301; // [rsp+468h] [rbp+3E8h]
  char v302; // [rsp+476h] [rbp+3F6h]
  __int64 v303; // [rsp+478h] [rbp+3F8h]
  char v304; // [rsp+486h] [rbp+406h]
  char v305; // [rsp+487h] [rbp+407h]
  __int16 *m128i_i16; // [rsp+488h] [rbp+408h]
  char v307; // [rsp+497h] [rbp+417h]
  __int64 v308; // [rsp+498h] [rbp+418h]
  const __m128i *v309; // [rsp+4A0h] [rbp+420h]
  __int64 v310; // [rsp+4A8h] [rbp+428h]

  v310 = -2;
  v296 = a3;
  v4 = (__m128i *)a2;
  v273 = a1;
  v5 = a2[70].m128i_u8[2];
  v309 = a2;
  switch ( v5 )
  {
    case 0LL:
      a2[70].m128i_i8[1] = 0;
      v6 = a2[69].m128i_i64[1];
      a2[63].m128i_i64[0] = v6;
      v7 = a2[62].m128i_i64[0];
      v8 = a2[62].m128i_i64[1];
      v4[60].m128i_i64[0] = v7;
      v4[60].m128i_i64[1] = v8;
      v4[61].m128i_i64[0] = v7;
      v4[61].m128i_i64[1] = v8;
      if ( *(_BYTE *)(v6 + 229) == 1 )
      {
        v9 = 0;
        if ( dword_141EC2558 )
          sub_1416985C7(&qword_141EC2550);
        v10 = (volatile signed __int64 *)qword_141EC2550;
      }
      else
      {
        v9 = 0;
        if ( dword_141EC2548 )
          sub_14169857E(&qword_141EC2540);
        v10 = (volatile signed __int64 *)qword_141EC2540;
      }
      v22 = _InterlockedIncrement64(v10);
      if ( (v22 < 0) ^ v9 | (v22 == 0) )
        BUG();
      v23 = v309;
      v309[63].m128i_i64[1] = (__int64)v10;
      v24 = v23[63].m128i_i64[0];
      v25 = *(unsigned __int8 *)(v24 + 230);
      if ( !*(_BYTE *)(v24 + 230) )
      {
        v30 = classify_openai_chat_endpoint(*(_QWORD *)(v24 + 104), *(_QWORD *)(v24 + 112));
        v26 = v30 ^ 1;
        sub_140663630(
          (unsigned int)v288,
          v30,
          *(_QWORD *)(v309[63].m128i_i64[0] + 104),
          *(_QWORD *)(v309[63].m128i_i64[0] + 112),
          v30 ^ 1);
        v31 = *(__int16 **)&v288[8];
        v308 = *(_QWORD *)v288;
        v32 = *(_QWORD *)&v288[16];
        v260 = *(__m128i *)&v288[24];
        v261 = _mm_loadu_si128((const __m128i *)&v288[40]);
        nullsub_1(v33);
        v303 = sub_140001650(24, 8);
        m128i_i16 = v31;
        if ( !v303 )
          sub_1416C2D31(8, 24);
        v34 = v309;
        sub_140A49320(
          (unsigned int)v288,
          *(_QWORD *)(v309[63].m128i_i64[0] + 56),
          *(_QWORD *)(v309[63].m128i_i64[0] + 64),
          (_DWORD)v31,
          v32);
        v35 = (__m128i *)v303;
        *(_QWORD *)(v303 + 16) = *(_QWORD *)&v288[16];
        *v35 = _mm_loadu_si128((const __m128i *)v288);
        *(_QWORD *)v286 = 1;
        *(_QWORD *)&v286[8] = v35;
        *(_QWORD *)&v286[16] = 1;
        build_openai_headers(&v266, v34[63].m128i_i64[0], v26);
        *(_QWORD *)&v288[112] = *(_QWORD *)&v286[16];
        *(_OWORD *)&v288[96] = *(_OWORD *)v286;
        v289 = v260;
        v290 = v261;
        *(__m256i *)v288 = v266;
        *(_OWORD *)&v288[32] = v267;
        *(_OWORD *)&v288[48] = v268;
        *(_OWORD *)&v288[64] = v269;
        *(_OWORD *)&v288[80] = v270;
        v27 = m128i_i16;
        if ( v308 )
          sub_140001660(m128i_i16, v308, 1);
        goto LABEL_50;
      }
      if ( (_DWORD)v25 != 1 )
      {
        nullsub_1(v25);
        v308 = sub_140001650(24, 8);
        if ( !v308 )
          sub_1416C2D31(8, 24);
        sub_140A49320(
          (unsigned int)v288,
          *(_QWORD *)(v309[63].m128i_i64[0] + 56),
          *(_QWORD *)(v309[63].m128i_i64[0] + 64),
          (unsigned int)"/v1/messagesno valid endpoint found",
          12);
        v36 = (__m128i *)v308;
        *(_QWORD *)(v308 + 16) = *(_QWORD *)&v288[16];
        *v36 = _mm_loadu_si128((const __m128i *)v288);
        *(_QWORD *)&v263 = 1;
        *((_QWORD *)&v263 + 1) = v36;
        v264 = 1;
        v271.m128i_i64[0] = 0;
        v272 = 0;
        nullsub_1(v36);
        v37 = sub_140001650(5, 1);
        if ( !v37 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v37 + 4) = 108;
        *(_DWORD *)v37 = 1701080941;
        *(_QWORD *)v286 = 5;
        *(_QWORD *)&v286[8] = v37;
        *(_QWORD *)&v286[16] = 5;
        v39 = v309[63].m128i_i64[0];
        v40 = *(_QWORD *)(v39 + 112);
        if ( v40 < 0 )
        {
          v41 = 0;
          goto LABEL_22;
        }
        if ( v40 )
        {
          v45 = *(_QWORD *)(v39 + 104);
          nullsub_1(v38);
          v41 = 1;
          v46 = sub_140001650(v40, 1);
          if ( !v46 )
          {
LABEL_22:
            v302 = 1;
            sub_1416C2D4B(v41, v40);
          }
          v47 = v46;
          sub_141684120(v46, v45, v40);
        }
        else
        {
          v47 = 1;
        }
        v288[0] = 3;
        *(_QWORD *)&v288[8] = v40;
        *(_QWORD *)&v288[16] = v47;
        *(_QWORD *)&v288[24] = v40;
        v302 = 0;
        sub_140307860(&v266, &v271, v286, v288);
        if ( v266.m256i_i8[0] != -1 )
          sub_1400104F0(&v266);
        nullsub_1(v48);
        v49 = (_QWORD *)sub_140001650(8, 1);
        if ( !v49 )
          sub_1416C2D4B(1, 8);
        *v49 = 0x736567617373656DLL;
        v262[0] = 8;
        v262[1] = v49;
        v262[2] = 8;
        nullsub_1(0x736567617373656DLL);
        v50 = sub_140001650(32, 8);
        if ( !v50 )
        {
          v305 = 1;
          sub_1416C2D31(8, 32);
        }
        v52 = v50;
        *(_QWORD *)&v277 = 0;
        v278 = 0;
        nullsub_1(v51);
        v53 = (_DWORD *)sub_140001650(4, 1);
        v308 = v52;
        if ( !v53 )
          sub_1416C2D4B(1, 4);
        *v53 = 1701605234;
        v292 = 4;
        v293 = v53;
        v294 = 4;
        nullsub_1(v54);
        v55 = (__int16 *)sub_140001650(4, 1);
        m128i_i16 = v55;
        if ( !v55 )
          sub_1416C2D4B(1, 4);
        *(_DWORD *)v55 = 1919251317;
        v288[0] = 3;
        *(_QWORD *)&v288[8] = 4;
        *(_QWORD *)&v288[16] = v55;
        *(_QWORD *)&v288[24] = 4;
        sub_140307860(&v266, &v277, &v292, v288);
        if ( v266.m256i_i8[0] != -1 )
          sub_1400104F0(&v266);
        nullsub_1(v56);
        v57 = (_DWORD *)sub_140001650(7, 1);
        if ( !v57 )
          sub_1416C2D4B(1, 7);
        *(_DWORD *)((char *)v57 + 3) = 1953391988;
        *v57 = 1953394531;
        v292 = 7;
        v293 = v57;
        v294 = 7;
        nullsub_1(v58);
        v59 = (__int16 *)sub_140001650(2, 1);
        m128i_i16 = v59;
        if ( !v59 )
          sub_1416C2D4B(1, 2);
        *v59 = 26984;
        v288[0] = 3;
        *(_QWORD *)&v288[8] = 2;
        *(_QWORD *)&v288[16] = v59;
        *(_QWORD *)&v288[24] = 2;
        sub_140307860(&v266, &v277, &v292, v288);
        if ( v266.m256i_i8[0] != -1 )
          sub_1400104F0(&v266);
        *(_OWORD *)((char *)&v295.m256i_u32[1] + 3) = v277;
        *(__int64 *)((char *)&v295.m256i_i64[2] + 7) = v278;
        v60 = v308;
        *(_BYTE *)v308 = 5;
        v61 = _mm_loadu_si128((const __m128i *)&v295);
        *(_QWORD *)(v60 + 16) = *(__int64 *)((char *)&v295.m256i_i64[1] + 7);
        *(_QWORD *)(v60 + 24) = *(__int64 *)((char *)&v295.m256i_i64[2] + 7);
        *(__m128i *)(v60 + 1) = v61;
        *(_QWORD *)&v286[8] = 1;
        *(_QWORD *)&v286[16] = v60;
        *(_QWORD *)&v286[24] = 1;
        v286[0] = 4;
        v305 = 0;
        sub_140307860(v288, &v271, v262, v286);
        if ( v288[0] != 0xFF )
          sub_1400104F0(v288);
        nullsub_1(v62);
        v63 = (void *)sub_140001650(10, 1);
        if ( !v63 )
          sub_1416C2D4B(1, 10);
        qmemcpy(v63, "max_tokens", 10);
        *(_QWORD *)v286 = 10;
        *(_QWORD *)&v286[8] = v63;
        *(_QWORD *)&v286[16] = 10;
        v288[0] = 2;
        *(_QWORD *)&v288[8] = 0;
        *(_QWORD *)&v288[16] = 16;
        sub_140307860(&v266, &v271, v286, v288);
        if ( v266.m256i_i8[0] != -1 )
          sub_1400104F0(&v266);
        nullsub_1(v64);
        v65 = sub_140001650(6, 1);
        if ( !v65 )
          sub_1416C2D4B(1, 6);
        *(_WORD *)(v65 + 4) = 28001;
        *(_DWORD *)v65 = 1701999731;
        *(_QWORD *)v286 = 6;
        *(_QWORD *)&v286[8] = v65;
        *(_QWORD *)&v286[16] = 6;
        *(_WORD *)v288 = 257;
        sub_140307860(&v266, &v271, v286, v288);
        if ( v266.m256i_i8[0] != -1 )
          sub_1400104F0(&v266);
        *(__m128i *)&v279[8] = _mm_loadu_si128(&v271);
        *(_QWORD *)&v279[24] = v272;
        v279[0] = 5;
        v26 = 1;
        LOBYTE(v66) = 1;
        sub_140666330(&v266, v309[63].m128i_i64[0], v66);
        *(_QWORD *)&v288[112] = v264;
        *(_OWORD *)&v288[96] = v263;
        v28 = *(__m128i *)v279;
        v29 = *(__m128i *)&v279[16];
        goto LABEL_49;
      }
      sub_140666030(v279, *(_QWORD *)(v24 + 56), *(_QWORD *)(v24 + 64));
      handle_event((__int64)v286, *(_QWORD *)(v309[63].m128i_i64[0] + 104), *(_QWORD *)(v309[63].m128i_i64[0] + 112));
      v26 = 1;
      build_openai_headers(&v266, v309[63].m128i_i64[0], 1);
      *(_QWORD *)&v288[112] = *(_QWORD *)&v279[16];
      *(_OWORD *)&v288[96] = *(_OWORD *)v279;
      v28 = *(__m128i *)v286;
      v29 = *(__m128i *)&v286[16];
LABEL_49:
      v289 = v28;
      v290 = v29;
      *(__m256i *)v288 = v266;
      *(_OWORD *)&v288[32] = v267;
      *(_OWORD *)&v288[48] = v268;
      *(_OWORD *)&v288[64] = v269;
      *(_OWORD *)&v288[80] = v270;
LABEL_50:
      v67 = v309;
      v309[65].m128i_i64[0] = *(_QWORD *)&v288[112];
      v67[64] = *(const __m128i *)&v288[96];
      v68 = v290;
      v67[52] = v289;
      v67[53] = v68;
      v69 = *(__m128i *)&v288[16];
      v70 = *(__m128i *)&v288[32];
      v71 = *(__m128i *)&v288[48];
      v67[54] = *(const __m128i *)v288;
      v67[55] = v69;
      v67[56] = v70;
      v67[57] = v71;
      v67[58] = *(const __m128i *)&v288[64];
      v67[59] = _mm_load_si128((const __m128i *)&v288[80]);
      v67[70].m128i_i8[0] = v26;
      v67[65].m128i_i64[1] = v67[65].m128i_i64[0];
      nullsub_1(v27);
      v72 = sub_140001650(23, 1);
      if ( !v72 )
        sub_1416C2D4B(1, 23);
      *(__m128i *)v72 = _mm_loadu_si128((const __m128i *)"no valid endpoint found");
      *(_QWORD *)(v72 + 15) = 0x646E756F6620746ELL;
      v67[66].m128i_i64[0] = 23;
      v67[66].m128i_i64[1] = v72;
      v67[67].m128i_i64[0] = 23;
      v67[70].m128i_i8[1] = 1;
      v73 = v67[64].m128i_i64[1];
      v74 = v73 + 24 * v67[65].m128i_i64[0];
      v67[67].m128i_i64[1] = v73;
      v67[68].m128i_i64[0] = v74;
      v67[68].m128i_i64[1] = 0;
      while ( 2 )
      {
        if ( v73 == v74 )
        {
          v164 = v309;
          v309[70].m128i_i8[1] = 0;
          *(_QWORD *)&v286[16] = v164[67].m128i_i64[0];
          *(__m128i *)v286 = _mm_loadu_si128(v164 + 66);
          v165 = v164[61].m128i_i64[0];
          v166 = v164[61].m128i_i64[1];
          sub_14149C500(&v266, v286);
          *(_QWORD *)&v288[40] = v266.m256i_i64[2];
          *(__m128i *)&v288[24] = _mm_loadu_si128((const __m128i *)&v266);
          *(_WORD *)v288 = 4;
          *(_OWORD *)&v288[8] = -1;
          (*(void (__fastcall **)(__int64, _BYTE *))(v166 + 40))(v165, v288);
          v135 = *(_QWORD *)v286;
          LOBYTE(v137) = v286[8];
          v276[0] = *(_QWORD *)&v286[9];
          *(_QWORD *)((char *)v276 + 7) = *(_QWORD *)&v286[16];
          v167 = v309;
          v309[70].m128i_i8[1] = 0;
          sub_14034FA40(&v167[54]);
          sub_1400104F0(&v309[52]);
          v168 = v309[65].m128i_i64[0];
          if ( v168 )
          {
            v169 = (_QWORD *)(v309[64].m128i_i64[1] + 8);
            do
            {
              v170 = *(v169 - 1);
              if ( v170 )
                sub_140001660(*v169, v170, 1);
              v169 += 3;
              --v168;
            }
            while ( v168 );
          }
          v171 = v309;
          v172 = v309[64].m128i_i64[0];
          if ( v172 )
            sub_140001660(v309[64].m128i_i64[1], 24 * v172, 8);
          v173 = -1;
          v174 = 8;
          if ( !_InterlockedDecrement64((volatile signed __int64 *)v171[63].m128i_i64[1]) )
          {
            sub_141018B80(&v171[63].m128i_u64[1]);
            v173 = -1;
          }
          v136 = 0;
          v133 = 0;
          v175 = 0;
          goto LABEL_173;
        }
        v4 = (__m128i *)v309;
        v309[67].m128i_i64[1] = v73 + 24;
        v162 = v4[68].m128i_i64[1];
        v4[68].m128i_i64[1] = v162 + 1;
        v4[69].m128i_i64[0] = v162;
        v11 = &v4[63].m128i_i64[1];
        v163 = v4[63].m128i_i64[0];
        v12 = *(_BYTE *)(v163 + 230);
        v13 = *(_QWORD *)(v73 + 8);
        v14 = *(_QWORD *)(v73 + 16);
        v17 = v4[70].m128i_u8[0];
        v18 = *(_QWORD *)(v163 + 104);
        v19 = *(_QWORD *)(v163 + 112);
        v16 = v4 + 54;
        m128i_i64 = (__int64)v4[52].m128i_i64;
        v20 = v4[60].m128i_i64[0];
        v21 = v4[60].m128i_i64[1];
        v4[3].m128i_i64[0] = v13;
        v4[3].m128i_i64[1] = v14;
        v4[4].m128i_i64[0] = v18;
        v4[4].m128i_i64[1] = v19;
        v4[5].m128i_i64[0] = v20;
        v4[5].m128i_i64[1] = v21;
        v4[14].m128i_i64[1] = (__int64)&v4[63].m128i_i64[1];
        v4[15].m128i_i64[0] = (__int64)v4[52].m128i_i64;
        v4[15].m128i_i64[1] = (__int64)v4[54].m128i_i64;
        v308 = (__int64)v4[16].m128i_i64 + 5;
        v4[16].m128i_i8[5] = 0;
        v4[16].m128i_i8[6] = v12;
        v4[16].m128i_i8[7] = v17;
LABEL_68:
        v4[16].m128i_i8[4] = 0;
        v4[16].m128i_i8[2] = v12;
        v4[16].m128i_i8[3] = v17;
        v4->m128i_i64[0] = v18;
        v4->m128i_i64[1] = v19;
        v4[1].m128i_i64[0] = v20;
        v4[1].m128i_i64[1] = v21;
        if ( v14 < 0 )
        {
          v75 = 0;
          goto LABEL_70;
        }
        v303 = v13;
        m128i_i16 = (__int16 *)v14;
        v76 = 1;
        v301 = v11;
        if ( v14 )
        {
          v77 = v16;
          v78 = m128i_i64;
          nullsub_1(v17);
          v79 = m128i_i16;
          v80 = sub_140001650(m128i_i16, 1);
          if ( !v80 )
          {
            v287 = (__int64)v79;
            v75 = 1;
LABEL_70:
            v291 = v308;
            sub_1416C2D4B(v75, v287);
          }
          v76 = v80;
          sub_141684120(v80, v303, v79);
          v18 = v309->m128i_i64[0];
          v19 = v309->m128i_i64[1];
          m128i_i64 = v78;
          v16 = v77;
        }
        v287 = v76;
        if ( v19 < 0 )
        {
          v81 = 0;
          goto LABEL_76;
        }
        v297 = m128i_i64;
        v82 = 1;
        v83 = (__int64)m128i_i16;
        if ( v19 )
        {
          nullsub_1(v17);
          v81 = 1;
          v84 = sub_140001650(v19, 1);
          if ( !v84 )
          {
            v274 = v19;
LABEL_76:
            sub_1416C2D4B(v81, v274);
          }
          v85 = v84;
          sub_141684120(v84, v18, v19);
          v82 = v85;
          v76 = v287;
        }
        v288[0] = 0;
        *(_QWORD *)&v288[8] = v83;
        *(_QWORD *)&v288[16] = v76;
        *(_QWORD *)&v288[24] = v83;
        *(_QWORD *)&v288[32] = v19;
        v274 = v82;
        *(_QWORD *)&v288[40] = v82;
        *(_QWORD *)&v288[48] = v19;
        v86 = *(void (__fastcall **)(__int64, _BYTE *))(v21 + 40);
        v87 = v308;
        v291 = v308;
        v86(v20, v288);
        v291 = v87;
        v91 = sub_141471910(v89, v88, v90);
        v92 = v309;
        v309[2].m128i_i64[0] = v91;
        v92[2].m128i_i32[2] = v93;
        v94 = *v301;
        v298 = v87;
        sub_1405A48C0((unsigned int)v288, v94, (unsigned int)&unk_141764700, v303, v83);
        v95 = (__int16 *)v16[5].m128i_i64[0];
        v96 = 0x7FFFFFFFFFFFFFFELL;
        LOBYTE(v96) = (unsigned __int64)v95 >> 62 != 0 || (unsigned __int64)(4LL * (_QWORD)v95) > 0x7FFFFFFFFFFFFFFELL;
        if ( (_BYTE)v96 )
        {
          v97 = 0;
          goto LABEL_82;
        }
        v98 = v16[5].m128i_i16[4];
        v99 = 2;
        if ( 4LL * (_QWORD)v95 )
        {
          v100 = v16[4].m128i_i64[1];
          nullsub_1(v96);
          v97 = 2;
          v101 = sub_140001650(4LL * (_QWORD)v95, 2);
          if ( !v101 )
          {
LABEL_82:
            v304 = 1;
            sub_1416C2D4B(v97, 4LL * (_QWORD)v95);
          }
          v99 = v101;
          if ( v95 )
            sub_141684120(v101, v100, 4LL * (_QWORD)v95);
        }
        v303 = v99;
        m128i_i16 = v95;
        v301 = (_QWORD *)(4LL * (_QWORD)v95);
        sub_14032BA10(&v295, &v16[1].m128i_u64[1]);
        sub_14032B840(&v266, &v16[3]);
        v285 = v98;
        v283 = v303;
        v284 = m128i_i16;
        *(_OWORD *)&v279[24] = *(_OWORD *)v295.m256i_i8;
        v280 = v295.m256i_i64[2];
        v282 = v266.m256i_i64[2];
        v281 = *(_OWORD *)v266.m256i_i8;
        *(__m128i *)v279 = *v16;
        *(_QWORD *)&v279[16] = v16[1].m128i_i64[0];
        v304 = 0;
        sub_14103C250(&v266, v288, v279);
        v298 = v308;
        sub_1406C67E0(v288, &v266, v297);
        v298 = v308;
        v102 = sub_14103C180(v288);
        v103 = v309;
        v309[16].m128i_i64[1] = v102;
        v103[17].m128i_i64[0] = v104;
LABEL_88:
        v105 = &v309[16].m128i_i8[8];
        sub_14104DCF0(v288, &v309[16].m128i_u64[1], v296);
        v106 = *(const __m128i **)v288;
        if ( *(_QWORD *)v288 == -2 )
        {
          v161 = 3;
          goto LABEL_176;
        }
        v107 = *(_QWORD *)&v288[8];
        v108 = *(__m128i *)&v288[16];
        v109 = v288[32];
        *(_OWORD *)v286 = *(_OWORD *)&v288[33];
        *(_OWORD *)&v286[16] = *(_OWORD *)&v288[49];
        *(_OWORD *)&v286[32] = *(_OWORD *)&v288[65];
        *(_OWORD *)&v286[48] = *(_OWORD *)&v288[81];
        *(_OWORD *)&v286[64] = *(_OWORD *)&v288[97];
        *(__m128i *)&v286[80] = _mm_loadu_si128((const __m128i *)&v288[113]);
        *(_QWORD *)&v286[95] = v289.m128i_i64[1];
        v110 = v309[16].m128i_i64[1];
        v111 = v309[17].m128i_i64[0];
        v298 = v308;
        sub_140BF25D0(v110, v111);
        if ( (_DWORD)v106 == -1 )
        {
          *(_QWORD *)v279 = v107;
          v266.m256i_i64[0] = (__int64)v279;
          v266.m256i_i64[1] = (__int64)sub_141031F10;
          sub_14149C0F0(v288, &unk_1417BA1BA, &v266);
          v133 = *(_QWORD *)&v288[8];
          v134 = *(_QWORD *)v288;
          v135 = *(_QWORD *)&v288[16];
          v298 = v308;
          sub_140528900(*(_QWORD *)v279);
          v136 = -1;
          LOBYTE(v137) = 0;
          goto LABEL_154;
        }
        v112 = v309;
        v309[16].m128i_i8[4] = 1;
        v112[6].m128i_i64[0] = (__int64)v106;
        v112[6].m128i_i64[1] = v107;
        v112[7] = v108;
        v112[8].m128i_i8[0] = v109;
        v113 = *(_DWORD *)v286;
        v112[8].m128i_i32[1] = *(_DWORD *)&v286[3];
        *(__int32 *)((char *)v112[8].m128i_i32 + 1) = v113;
        v114 = *(__m128i *)&v286[23];
        v115 = *(__m128i *)&v286[39];
        v116 = *(__m128i *)&v286[55];
        *(const __m128i *)((char *)v112 + 136) = *(const __m128i *)&v286[7];
        *(__m128i *)((char *)v112 + 152) = v114;
        *(__m128i *)((char *)v112 + 168) = v115;
        *(__m128i *)((char *)v112 + 184) = v116;
        *(const __m128i *)((char *)v112 + 200) = *(const __m128i *)&v286[71];
        *(const __m128i *)((char *)&v112[13] + 8) = _mm_loadu_si128((const __m128i *)&v286[87]);
        v117 = v112[12].m128i_i16[4];
        v112[16].m128i_i16[0] = v117;
        v118 = v112[1].m128i_i64[0];
        v119 = v112[1].m128i_i64[1];
        v299 = v308;
        v120 = sub_141471AC0(&v112[2]);
        v288[0] = 1;
        *(_WORD *)&v288[2] = v117;
        *(_QWORD *)&v288[8] = 1000 * v120 + v121 / 0xF4240uLL;
        v122 = *(void (__fastcall **)(__int64, _BYTE *))(v119 + 40);
        v299 = v308;
        v122(v118, v288);
        v4 = (__m128i *)v309;
        v123 = v309 + 6;
        if ( (unsigned __int16)(v309[16].m128i_i16[0] - 200) > 0x63u )
        {
          v309[16].m128i_i8[4] = 0;
          sub_141684120(v105, v123, 136);
          v4[51].m128i_i8[8] = 0;
LABEL_95:
          m128i_i16 = &v4[16].m128i_i16[4];
          sub_140CF0F50(v288, &v4[16].m128i_u64[1], v296);
          v106 = *(const __m128i **)v288;
          if ( *(_QWORD *)v288 != -2 )
          {
            v138 = *(_QWORD *)&v288[8];
            v139 = *(_QWORD *)&v288[16];
            if ( v309[51].m128i_i8[8] == 3 )
            {
              v299 = v308;
              sub_140BE80E0(&v309[25]);
            }
            else if ( !v309[51].m128i_i8[8] )
            {
              sub_140BA5F10(m128i_i16);
              v140 = (_QWORD *)v309[24].m128i_i64[1];
              if ( *v140 )
                sub_140001660(v140[1], *v140, 1);
              sub_140001660(v140, 88, 8);
            }
            if ( v106 == (const __m128i *)-1LL )
            {
              v299 = v308;
              v106 = nullptr;
              sub_140528900(v138);
              v138 = 1;
              v139 = 0;
            }
            m128i_i16 = (__int16 *)v106;
            v141 = v309[16].m128i_u16[0];
            v303 = v138;
            sub_140667250(v288, v141, v138, v139);
            v134 = *(_QWORD *)v288;
            if ( *(_QWORD *)v288 == -1 )
            {
              *(_WORD *)v279 = v309[16].m128i_i16[0];
              *(_QWORD *)v288 = v279;
              *(_QWORD *)&v288[8] = sub_1414AAE30;
              sub_14149C0F0(&v266, &unk_1417BA1F6, v288);
              v134 = v266.m256i_i64[0];
            }
            else
            {
              *(__m128i *)&v266.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v288[8]);
            }
            v135 = v266.m256i_i64[2];
            v133 = v266.m256i_i64[1];
            LOBYTE(v137) = v309[16].m128i_i16[0] == 404;
            v136 = -1;
            if ( m128i_i16 )
              sub_140001660(v303, m128i_i16, 1);
            goto LABEL_154;
          }
          v161 = 4;
          goto LABEL_176;
        }
        if ( !v309[16].m128i_i8[3] )
        {
          v309[16].m128i_i8[4] = 0;
          sub_141684120(v105, v123, 136);
          v4[51].m128i_i8[8] = 0;
LABEL_111:
          m128i_i16 = &v309[16].m128i_i16[4];
          sub_140CF0F50(v288, &v309[16].m128i_u64[1], v296);
          v106 = *(const __m128i **)v288;
          if ( *(_QWORD *)v288 != -2 )
          {
            v142 = *(_QWORD *)&v288[8];
            v143 = *(_QWORD *)&v288[16];
            if ( v309[51].m128i_i8[8] == 3 )
            {
              v299 = v308;
              sub_140BE80E0(&v309[25]);
            }
            else if ( !v309[51].m128i_i8[8] )
            {
              sub_140BA5F10(m128i_i16);
              v144 = (_QWORD *)v309[24].m128i_i64[1];
              if ( *v144 )
                sub_140001660(v144[1], *v144, 1);
              sub_140001660(v144, 88, 8);
            }
            if ( v106 == (const __m128i *)-1LL )
            {
              v299 = v308;
              v106 = nullptr;
              sub_140528900(v142);
              v142 = 1;
              v143 = 0;
            }
            m128i_i16 = (__int16 *)v106;
            v303 = v142;
            sub_1406626E0(v279, v142, v143);
            if ( *(_QWORD *)v279 != -1 )
            {
              v266.m256i_i64[2] = *(_QWORD *)&v279[16];
              *(__m128i *)v266.m256i_i8 = _mm_loadu_si128((const __m128i *)v279);
              v295.m256i_i64[0] = (__int64)&v266;
              v295.m256i_i64[1] = (__int64)sub_1400015F0;
              sub_14149C0F0(v288, &unk_1417BB620, &v295);
              v133 = *(_QWORD *)&v288[8];
              v134 = *(_QWORD *)v288;
              v135 = *(_QWORD *)&v288[16];
              if ( v266.m256i_i64[0] )
                sub_140001660(v266.m256i_i64[1], v266.m256i_i64[0], 1);
              v136 = -1;
              v145 = m128i_i16;
              LOBYTE(v137) = 0;
              if ( !m128i_i16 )
                goto LABEL_154;
LABEL_133:
              sub_140001660(v303, v145, 1);
              LOBYTE(v137) = 0;
              goto LABEL_154;
            }
            v146 = sub_141471AC0(&v309[2]);
            v148 = 1000 * v146 + v147 / 0xF4240uLL;
            v149 = v309[1].m128i_i64[0];
            v150 = v309[1].m128i_i64[1];
            *(_WORD *)v288 = 260;
            *(_QWORD *)&v288[8] = v148;
            v297 = v148;
            *(_QWORD *)&v288[16] = v148;
            *(_QWORD *)&v288[24] = -1;
            (*(void (__fastcall **)(__int64, _BYTE *))(v150 + 40))(v149, v288);
            nullsub_1(v151);
            v152 = sub_140001650(24, 8);
            if ( !v152 )
              sub_1416C2D31(8, 24);
            v153 = v152;
            v137 = v309->m128i_i64[1];
            v154 = v265;
            v301 = (_QWORD *)v152;
            if ( v137 < 0 )
            {
              v155 = 0;
              goto LABEL_128;
            }
            v136 = 1;
            v156 = 1;
            v157 = 1;
            v145 = m128i_i16;
            if ( v137 )
            {
              v106 = (const __m128i *)m128i_i16;
              v158 = v309->m128i_i64[0];
              nullsub_1(v153);
              v159 = sub_140001650(v137, 1);
              if ( !v159 )
              {
                v154 = v137;
                v155 = 1;
LABEL_128:
                sub_1416C2D4B(v155, v154);
              }
              v156 = v159;
              sub_141684120(v159, v158, v137);
              v157 = v156;
              v145 = (__int16 *)v106;
            }
            v265 = v157;
            v160 = v301;
            *v301 = v137;
            v160[1] = v156;
            v134 = (__int64)v160;
            v160[2] = v137;
            v135 = -1;
            v133 = 1;
            LOBYTE(v137) = 0;
            if ( !v145 )
              goto LABEL_154;
            goto LABEL_133;
          }
          v161 = 5;
LABEL_176:
          *(_BYTE *)v308 = v161;
          *v273 = -1;
          result = 3;
          goto LABEL_177;
        }
        v309[16].m128i_i8[4] = 0;
        sub_141684120(v288, v123, 136);
        v299 = v308;
        v124 = sub_140EA3B00(v288);
        v125 = v309;
        v309[20].m128i_i64[0] = v124;
        v125[20].m128i_i64[1] = v126;
        v125[17].m128i_i64[0] = 0;
        v125[17].m128i_i64[1] = 1;
        v125[18].m128i_i64[0] = 0;
        v125[18].m128i_i64[1] = -1;
        v125[19].m128i_i64[0] = 0;
        v125[16].m128i_i8[8] = 0;
        v300 = v308;
        v128 = sub_141471910(v125, v126, v127);
        v300 = v308;
        v130 = sub_141491390(v128, v129, 12, 0, (__int64)&off_1417BB608);
        v131 = v309;
        v309[21].m128i_i64[0] = v130;
        v131[21].m128i_i32[2] = v132;
        while ( 1 )
        {
          v43 = v296;
          v44 = v308;
          v42 = v131 + 20;
          v131[19].m128i_i64[1] = (__int64)v131[20].m128i_i64;
LABEL_178:
          v308 = v44;
          v300 = v44;
          sub_1406B6140(v288, v42, v43);
          if ( *(_QWORD *)v288 == 2 )
          {
            v161 = 6;
            goto LABEL_176;
          }
          v191 = *(_QWORD *)&v288[8];
          v192 = *(_OWORD *)&v288[16];
          if ( *(_DWORD *)v288 != 1 )
            goto LABEL_237;
          if ( !*(_QWORD *)&v288[8] )
          {
            *(_QWORD *)v279 = *(_QWORD *)&v288[16];
            v266.m256i_i64[0] = (__int64)v279;
            v266.m256i_i64[1] = (__int64)sub_141031F10;
            sub_14149C0F0(v288, &unk_1417BA1DF, &v266);
            v133 = *(_QWORD *)&v288[8];
            v134 = *(_QWORD *)v288;
            v135 = *(_QWORD *)&v288[16];
            v300 = v308;
            sub_140528900(*(_QWORD *)v279);
LABEL_247:
            v106 = v309;
            v251 = v309[17].m128i_i64[0];
            if ( v251 )
              sub_140001660(v309[17].m128i_i64[1], v251, 1);
            m128i_i16 = (__int16 *)v106[20].m128i_i64[0];
            v303 = v106[20].m128i_i64[1];
            if ( *(_QWORD *)v303 )
              (*(void (__fastcall **)(__int16 *))v303)(m128i_i16);
            v252 = *(_QWORD *)(v303 + 8);
            v136 = -1;
            if ( v252 )
              sub_140001660(m128i_i16, v252, *(_QWORD *)(v303 + 16));
            LOBYTE(v137) = 0;
            goto LABEL_154;
          }
          v295 = *(__m256i *)&v288[8];
          if ( *(_QWORD *)&v288[24] )
            v309[16].m128i_i8[8] = 1;
          sub_141499F00(v288, v192, *((_QWORD *)&v192 + 1));
          v193 = v309 + 17;
          v194 = *(__int16 **)&v288[8];
          v195 = *(_QWORD *)&v288[16];
          v196 = v309[18].m128i_i64[0];
          if ( *(_QWORD *)&v288[16] > (unsigned __int64)(v309[17].m128i_i64[0] - v196) )
          {
            m128i_i16 = *(__int16 **)&v288[8];
            sub_141688D30((_DWORD)v309 + 272, v196, *(_DWORD *)&v288[16], 1, 1);
            v197 = v309;
            v196 = v309[18].m128i_i64[0];
            v194 = m128i_i16;
LABEL_185:
            sub_141684120(v197[17].m128i_i64[1] + v196, v194, v195);
            v196 = v197[18].m128i_i64[0];
            goto LABEL_186;
          }
          v197 = v309;
          if ( *(_QWORD *)&v288[16] )
            goto LABEL_185;
LABEL_186:
          v197[18].m128i_i64[0] = v195 + v196;
          if ( *(__int64 *)v288 > 0 )
            sub_140001660(v194, *(_QWORD *)v288, 1);
          v198 = v309;
          v199 = v309 + 2;
          m128i_i16 = v309[2].m128i_i16;
LABEL_189:
          v200 = v198[17].m128i_i64[1];
          v201 = v198[18].m128i_u64[0];
          v202 = 0;
LABEL_191:
          v203 = v201 - v202;
          if ( v201 - v202 >= 0x10 )
            break;
          v204 = 0;
          if ( v203 )
          {
            do
            {
              if ( *(_BYTE *)(v200 + v202 + v204) == 10 )
                goto LABEL_198;
              ++v204;
            }
            while ( v203 != v204 );
            v204 = v201 - v202;
          }
LABEL_233:
          v230 = sub_141471910(v199, v204, v203);
          v232 = v231 >= v309[21].m128i_i32[2];
          if ( v230 != v309[21].m128i_i64[0] )
            v232 = v230 >= v309[21].m128i_i64[0];
          if ( v232 )
            goto LABEL_236;
          v258 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v295.m256i_i64[0] + 32);
          v300 = v308;
          v258(&v295.m256i_u64[3], v295.m256i_i64[1], v295.m256i_i64[2]);
          v131 = v309;
        }
        LOBYTE(v199) = 10;
        if ( sub_1414A3EA0(v199, v200 + v202, v203) != 1 )
          goto LABEL_233;
LABEL_198:
        v205 = v204 + v202 + 1;
        v204 += v202;
        if ( v204 >= v201 )
        {
          v202 = v205;
          if ( v205 > v201 )
            goto LABEL_233;
          goto LABEL_191;
        }
        v199 = (const __m128i *)*(unsigned __int8 *)(v200 + v204);
        if ( v205 <= v201 )
        {
          v202 = v205;
          if ( (_BYTE)v199 != 10 )
            goto LABEL_191;
        }
        if ( (_BYTE)v199 != 10 )
          goto LABEL_233;
        v206 = v309[18].m128i_u64[0];
        if ( v204 >= v206 )
          sub_1416C32F0(0, v204, v206, &off_1417A66A0);
        v207 = v204 + 1;
        v208 = v309[17].m128i_i64[1];
        if ( v207 < v206 && *(char *)(v208 + v207) <= -65 )
          sub_1416C32A0(aAssertionFaile_18, 44, &off_1417BB640);
        *(_OWORD *)&v288[16] = (unsigned __int64)v193;
        *(_QWORD *)&v288[32] = v207;
        *(_QWORD *)v288 = v208;
        *(_QWORD *)&v288[8] = v208 + v207;
        sub_1408CDA20(&v292, v288);
        v303 = (__int64)v293;
        v209 = sub_14033BC10(v293, v294);
        if ( v210 < 5
          || ((v211 = _byteswap_ulong(*(_DWORD *)v209), v211 != 1684108385)
            ? (v199 = (const __m128i *)(v211 < 0x64617462 ? 1 : -1))
            : (v199 = (const __m128i *)(58 - (unsigned int)*(unsigned __int8 *)(v209 + 4))),
              (_DWORD)v199 || (v212 = sub_14033BC10(v209 + 5, v210 - 5), (v214 = v213) == 0)) )
        {
LABEL_212:
          if ( v292 )
            sub_140001660(v303, v292, 1);
          v198 = v309;
          goto LABEL_189;
        }
        v215 = v212;
        if ( v213 == 6 && !(*(_DWORD *)v212 ^ 0x4E4F445B | *(unsigned __int16 *)(v212 + 4) ^ 0x5D45) )
          goto LABEL_274;
        sub_140666980(v279, v212, v213);
        if ( *(_QWORD *)v279 != -1 )
        {
          v266.m256i_i64[2] = *(_QWORD *)&v279[16];
          *(__m128i *)v266.m256i_i8 = _mm_loadu_si128((const __m128i *)v279);
          *(_QWORD *)&v277 = &v266;
          *((_QWORD *)&v277 + 1) = sub_1400015F0;
          sub_14149C0F0(v288, &unk_1417BB620, &v277);
          v133 = *(_QWORD *)&v288[8];
          v134 = *(_QWORD *)v288;
          v135 = *(_QWORD *)&v288[16];
          if ( v266.m256i_i64[0] )
            sub_140001660(v266.m256i_i64[1], v266.m256i_i64[0], 1);
          if ( v292 )
            sub_140001660(v303, v292, 1);
          v259 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v295.m256i_i64[0] + 32);
          v300 = v308;
          v259(&v295.m256i_u64[3], v295.m256i_i64[1], v295.m256i_i64[2]);
          goto LABEL_247;
        }
        *(_QWORD *)v288 = v215;
        *(_QWORD *)&v288[8] = v214;
        *(_OWORD *)&v288[16] = 0;
        *(_QWORD *)&v288[32] = v215;
        *(_QWORD *)&v288[40] = v214;
        sub_1408A6200(&v266, v288);
        if ( v266.m256i_i8[0] == -1 )
        {
          sub_140BA5680(&v266);
          goto LABEL_212;
        }
        v216 = _mm_loadu_si128((const __m128i *)&v266);
        *(_OWORD *)&v279[16] = *(_OWORD *)&v266.m256i_u64[2];
        *(__m128i *)v279 = v216;
        extract_stream_text_delta(v266.m256i_i64, v309[16].m128i_i8[2], (__int64)v279);
        if ( v266.m256i_i64[0] == -1 )
          goto LABEL_231;
        v217 = *(_OWORD *)&v266.m256i_u64[1];
        if ( v266.m256i_i64[2] )
        {
          v297 = v266.m256i_i64[0];
          v218 = v309[18].m128i_i64[1] < 0;
          v301 = (_QWORD *)v266.m256i_i64[1];
          if ( v218 )
          {
            v307 = 1;
            v219 = sub_141471AC0(m128i_i16);
            v221 = 1000 * v219 + v220 / 0xF4240uLL;
            v222 = v309;
            v309[18].m128i_i64[1] = v221;
            v223 = v222[1].m128i_i64[0];
            v224 = v222[1].m128i_i64[1];
            v288[0] = 2;
            *(_QWORD *)&v288[8] = v221;
            v225 = *(void (__fastcall **)(__int64, _BYTE *))(v224 + 40);
            v307 = 1;
            v225(v223, v288);
            *(_QWORD *)&v217 = v301;
          }
          v307 = 1;
          if ( *((_QWORD *)&v217 + 1) >= 0x20u )
            v226 = sub_1414A35B0(v217, *((_QWORD *)&v217 + 1));
          else
            v226 = sub_1414A3BD0(v217, *((_QWORD *)&v217 + 1));
          v227 = v309;
          v309[19].m128i_i64[0] += v226;
          *(_QWORD *)&v217 = v227[1].m128i_i64[0];
          v228 = v227[1].m128i_i64[1];
          v288[0] = 3;
          *(_QWORD *)&v288[8] = v297;
          *(_QWORD *)&v288[16] = v301;
          *(_QWORD *)&v288[24] = *((_QWORD *)&v217 + 1);
          v229 = *(void (__fastcall **)(_QWORD, _BYTE *))(v228 + 40);
          v307 = 0;
          v229(v217, v288);
          if ( v309[19].m128i_i64[0] < 0x190uLL )
            goto LABEL_231;
          goto LABEL_273;
        }
        if ( v266.m256i_i64[0] )
          sub_140001660(v266.m256i_i64[1], v266.m256i_i64[0], 1);
LABEL_231:
        if ( !(unsigned __int8)sub_140666E90(v309[16].m128i_u8[2], v279) )
        {
          sub_1400104F0(v279);
          goto LABEL_212;
        }
LABEL_273:
        sub_1400104F0(v279);
LABEL_274:
        if ( v292 )
          sub_140001660(v303, v292, 1);
LABEL_236:
        v233 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v295.m256i_i64[0] + 32);
        v300 = v308;
        v233(&v295.m256i_u64[3], v295.m256i_i64[1], v295.m256i_i64[2]);
LABEL_237:
        if ( !v309[16].m128i_i8[8] )
        {
          nullsub_1(v191);
          v134 = 25;
          v250 = sub_140001650(25, 1);
          if ( !v250 )
          {
            v300 = v308;
            sub_1416C2D4B(1, 25);
          }
          v133 = v250;
          *(_OWORD *)(v250 + 9) = *(__int128 *)((char *)&xmmword_1417BB658 + 9);
          *(__m128i *)v250 = _mm_loadu_si128((const __m128i *)&xmmword_1417BB658);
          v135 = 25;
          goto LABEL_247;
        }
        v300 = v308;
        v234 = sub_141471AC0(&v309[2]);
        v236 = 1000 * v234 + v235 / 0xF4240uLL;
        v237 = v309;
        v238 = v309[18].m128i_i64[1];
        if ( v238 < 0 )
        {
          v309[18].m128i_i64[1] = v236;
          v239 = v237[1].m128i_i64[0];
          v240 = v237[1].m128i_i64[1];
          v288[0] = 2;
          *(_QWORD *)&v288[8] = v236;
          v241 = *(void (__fastcall **)(__int64, _BYTE *))(v240 + 40);
          v300 = v308;
          v241(v239, v288);
          v237 = v309;
          v238 = v309[18].m128i_i64[1];
        }
        v242 = v237[1].m128i_i64[0];
        v243 = v237[1].m128i_i64[1];
        *(_WORD *)v288 = 260;
        *(_QWORD *)&v288[8] = v238;
        *(_QWORD *)&v288[16] = v236;
        *(_QWORD *)&v288[24] = -1;
        v244 = *(void (__fastcall **)(__int64, _BYTE *))(v243 + 40);
        v300 = v308;
        v244(v242, v288);
        v245 = v309;
        v297 = v309[18].m128i_i64[1];
        nullsub_1(v246);
        v247 = sub_140001650(24, 8);
        if ( !v247 )
        {
          v300 = v308;
          sub_1416C2D31(8, 24);
        }
        v134 = v247;
        v137 = v245->m128i_i64[1];
        if ( v137 < 0 )
        {
          v301 = (_QWORD *)v247;
          v249 = 0;
          goto LABEL_243;
        }
        v253 = 1;
        if ( v137 )
        {
          v254 = v309->m128i_i64[0];
          nullsub_1(v248);
          v255 = sub_140001650(v137, 1);
          if ( !v255 )
          {
            v301 = (_QWORD *)v134;
            v275 = v137;
            v249 = 1;
LABEL_243:
            sub_1416C2D4B(v249, v275);
          }
          v253 = v255;
          sub_141684120(v255, v254, v137);
        }
        *(_QWORD *)v134 = v137;
        v275 = v253;
        *(_QWORD *)(v134 + 8) = v253;
        *(_QWORD *)(v134 + 16) = v137;
        v106 = v309;
        v256 = v309[17].m128i_i64[0];
        if ( v256 )
          sub_140001660(v309[17].m128i_i64[1], v256, 1);
        m128i_i16 = (__int16 *)v106[20].m128i_i64[0];
        v303 = v106[20].m128i_i64[1];
        if ( *(_QWORD *)v303 )
          (*(void (__fastcall **)(__int16 *))v303)(m128i_i16);
        v257 = *(_QWORD *)(v303 + 8);
        v135 = -1;
        v136 = 1;
        if ( v257 )
          sub_140001660(m128i_i16, v257, *(_QWORD *)(v303 + 16));
        v133 = 1;
LABEL_154:
        v309[16].m128i_i16[2] = 256;
        sub_140BEDF60();
        if ( (_DWORD)v136 == -1 )
        {
          v176 = v309;
          if ( (v137 & 1) != 0 && (unsigned __int64)(v309[69].m128i_i64[0] + 1) < v309[65].m128i_i64[1] )
          {
            v177 = v309[66].m128i_i64[0];
            if ( v177 )
              sub_140001660(v309[66].m128i_i64[1], v177, 1);
            v176[70].m128i_i8[1] = 1;
            v176[66].m128i_i64[0] = v134;
            v176[66].m128i_i64[1] = v133;
            v176[67].m128i_i64[0] = v135;
            v73 = v176[67].m128i_i64[1];
            v74 = v176[68].m128i_i64[0];
            continue;
          }
          v301 = (_QWORD *)v134;
          *(_QWORD *)v286 = v134;
          *(_QWORD *)&v286[8] = v133;
          *(_QWORD *)&v286[16] = v135;
          v178 = v309[61].m128i_i64[0];
          v179 = v309[61].m128i_i64[1];
          sub_14149C500(&v266, v286);
          *(_QWORD *)&v288[40] = v266.m256i_i64[2];
          *(__m128i *)&v288[24] = _mm_loadu_si128((const __m128i *)&v266);
          *(_WORD *)v288 = 4;
          *(_OWORD *)&v288[8] = -1;
          (*(void (__fastcall **)(__int64, _BYTE *))(v179 + 40))(v178, v288);
          LOBYTE(v137) = v286[8];
          v276[0] = *(_QWORD *)&v286[9];
          *(_QWORD *)((char *)v276 + 7) = *(_QWORD *)&v286[16];
          v297 = -1;
          v134 = 8;
          v136 = 0;
          v133 = 0;
          v135 = (__int64)v301;
          v106 = nullptr;
          v180 = v309;
          v181 = v309[66].m128i_i64[0];
          if ( v181 )
LABEL_161:
            sub_140001660(v180[66].m128i_i64[1], v181, 1);
        }
        else
        {
          LOBYTE(v106) = 1;
          v180 = v309;
          v181 = v309[66].m128i_i64[0];
          if ( v181 )
            goto LABEL_161;
        }
        break;
      }
      v180[70].m128i_i8[1] = 0;
      sub_14034FA40(&v180[54]);
      v296 = v106;
      v308 = v134;
      sub_1400104F0(&v309[52]);
      v182 = v309[65].m128i_i64[0];
      if ( v182 )
      {
        v183 = (_QWORD *)(v309[64].m128i_i64[1] + 8);
        do
        {
          v184 = *(v183 - 1);
          if ( v184 )
            sub_140001660(*v183, v184, 1);
          v183 += 3;
          --v182;
        }
        while ( v182 );
      }
      v185 = v309;
      v186 = v309[64].m128i_i64[0];
      if ( v186 )
        sub_140001660(v309[64].m128i_i64[1], 24 * v186, 8);
      v187 = _InterlockedDecrement64((volatile signed __int64 *)v185[63].m128i_i64[1]);
      v174 = v308;
      if ( !v187 )
        sub_141018B80(&v185[63].m128i_u64[1]);
      v175 = (char)v296;
      v173 = v297;
LABEL_173:
      v188 = v273;
      *v273 = v136;
      v188[1] = v174;
      v188[2] = v133;
      v188[3] = v135;
      *((_BYTE *)v188 + 32) = v137;
      v189 = *(_QWORD *)((char *)v276 + 7);
      *(__int64 *)((char *)v188 + 33) = v276[0];
      v188[5] = v189;
      v188[6] = v173;
      *((_BYTE *)v188 + 56) = v175;
      result = 1;
LABEL_177:
      v309[70].m128i_i8[2] = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_1417BB698, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BB698, a2, a3, a4);
    case 3LL:
      v308 = (__int64)a2[16].m128i_i64 + 5;
      switch ( a2[16].m128i_i8[5] )
      {
        case 0:
          v11 = (__int64 *)a2[14].m128i_i64[1];
          v12 = a2[16].m128i_i8[6];
          v13 = a2[3].m128i_i64[0];
          v14 = a2[3].m128i_i64[1];
          m128i_i64 = a2[15].m128i_i64[0];
          v16 = (__m128i *)a2[15].m128i_i64[1];
          v17 = a2[16].m128i_u8[7];
          v18 = a2[4].m128i_i64[0];
          v19 = a2[4].m128i_i64[1];
          v20 = a2[5].m128i_i64[0];
          v21 = a2[5].m128i_i64[1];
          goto LABEL_68;
        case 1:
          sub_1416C3400(&off_1417BB5F0, a2, a3, a4);
        case 2:
          sub_1416C3420(&off_1417BB5F0, a2, a3, a4);
        case 3:
          goto LABEL_88;
        case 4:
          goto LABEL_95;
        case 5:
          goto LABEL_111;
        case 6:
          v42 = (const __m128i *)a2[19].m128i_i64[1];
          v43 = v296;
          v44 = v308;
          goto LABEL_178;
      }
  }
}