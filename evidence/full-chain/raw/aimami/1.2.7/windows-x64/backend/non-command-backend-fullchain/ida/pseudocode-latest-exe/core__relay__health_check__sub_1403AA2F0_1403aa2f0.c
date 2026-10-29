// win 1.2.7 latest-exe | module src/core/relay/health_check.rs | ea 0x1403aa2f0 | successor of pre-update 0x140b54860 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
char __fastcall sub_1403AA2F0(__m128i *a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rsi
  char v16; // r15
  __int64 v17; // r12
  char *v18; // rbx
  __int64 v19; // rdi
  char v20; // al
  __int64 *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 *v27; // rcx
  volatile signed __int64 **v28; // rdi
  int v29; // eax
  __int64 v30; // rbx
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rdi
  __int8 v40; // di
  char v41; // al
  __int8 v42; // di
  int v43; // eax
  __int64 v44; // rdi
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // r8
  __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 *v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rdx
  _QWORD *v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 (__fastcall *v68)(); // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  char *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  _DWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  char *v77; // rax
  __int64 v78; // rcx
  __m128i v79; // xmm0
  __int64 v80; // rdx
  __int64 v81; // rcx
  void *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 *v87; // rax
  int v88; // r9d
  __int128 v89; // xmm1
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  __int128 v92; // xmm3
  __int64 v93; // rdi
  __int64 v94; // rbx
  __int64 v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rbx
  volatile signed __int64 **v98; // rcx
  __int64 v99; // r12
  __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r14
  __int64 v104; // rbx
  __int64 v105; // rdi
  __int64 v106; // rax
  __int64 v107; // r15
  void (__fastcall *v108)(__int64, __m512i *); // rax
  char *v109; // rbx
  __int64 v110; // rax
  __int64 *v111; // rcx
  int v112; // edx
  volatile signed __int64 *v113; // rdx
  __int64 v114; // rdx
  const __m128i *v115; // rsi
  __int64 v116; // rcx
  __int64 v117; // rdi
  __int16 v118; // r14
  __int64 v119; // rbx
  __int64 v120; // rax
  char *v121; // rdi
  __int64 v122; // rax
  __int64 *v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rdi
  __int64 v126; // rbx
  __int128 v127; // xmm6
  __int64 v128; // rcx
  __int64 v129; // rdx
  char *v130; // r14
  __int64 v131; // rsi
  __int64 *v132; // rcx
  __int128 v133; // xmm1
  __int128 v134; // xmm2
  __m128i v135; // xmm3
  __int16 v136; // di
  __int64 v137; // rbx
  char *v138; // r12
  __int64 v139; // r14
  __int64 v140; // r15
  __int64 v141; // rax
  unsigned int v142; // edx
  void (__fastcall *v143)(__int64, __m512i *); // rax
  __int64 *v144; // rdx
  __int64 *v145; // rcx
  char *v146; // r14
  __int64 v147; // rbx
  __int64 v148; // rax
  __int64 *v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rax
  unsigned int v154; // edx
  __int64 v155; // r8
  __int64 *v156; // rcx
  __int64 v157; // rdi
  char *v158; // r14
  volatile signed __int64 **v159; // rsi
  __int64 v160; // rax
  unsigned int v161; // edx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rbx
  __int64 v168; // rdi
  __int64 v169; // r14
  __int64 v170; // r15
  __int64 *v171; // rcx
  char result; // al
  _QWORD *v173; // rdi
  __int64 v174; // rcx
  __int64 *v175; // rbx
  __int64 v176; // rdx
  __int64 *v177; // rbx
  __int64 v178; // rdx
  __m128i *v179; // rcx
  __int64 v180; // rdi
  __int64 v181; // rbx
  __int64 v182; // rsi
  __int64 v183; // r15
  __int128 v184; // kr60_16
  __int64 v185; // rdi
  __int64 v186; // rdx
  __int64 v187; // rcx
  __m128i *v188; // r12
  void (__fastcall *v189)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v190; // rdi
  __m128i *v191; // rsi
  __int64 v192; // r8
  __int64 *v193; // r12
  __int64 *v194; // rbx
  volatile signed __int64 **v195; // rax
  __int64 v196; // rdx
  __int64 v197; // r9
  __int64 v198; // r15
  bool v199; // sf
  __int64 v200; // rax
  unsigned int v201; // edx
  unsigned __int64 v202; // rdx
  __int64 *v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rax
  void (__fastcall *v206)(__int64, __m512i *); // rax
  __int64 v207; // rcx
  __int64 v208; // rax
  void (__fastcall *v209)(__int64, __m512i *, __int64); // rax
  unsigned __int128 v210; // rax
  bool v211; // zf
  __int64 v212; // rbx
  _QWORD *v213; // r8
  __int64 v214; // rdx
  __m128i v215; // xmm0
  __int128 v216; // xmm1
  __int128 v217; // xmm2
  __int128 v218; // xmm3
  __int128 v219; // xmm4
  __m128i v220; // xmm5
  __m128i v221; // xmm6
  _QWORD *v222; // rdi
  __int64 *v223; // rdi
  __int64 *v224; // rbx
  char *v225; // r14
  __int64 v226; // rax
  unsigned int v227; // edx
  unsigned __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // rax
  __int64 v231; // r8
  void (__fastcall *v232)(__int64, __m512i *); // rax
  __int64 *v233; // rbx
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r14
  volatile signed __int64 *v237; // rbx
  __int64 v238; // r15
  __int64 v239; // r12
  volatile signed __int64 **v240; // rax
  __int64 v241; // rdx
  void (__fastcall *v242)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v243; // rdx
  __int64 v244; // rdx
  __int64 v245; // rdx
  __int64 v246; // rdx
  _QWORD v247[3]; // [rsp+58h] [rbp-28h] BYREF
  __m128i v248; // [rsp+70h] [rbp-10h] BYREF
  __m256i v249; // [rsp+80h] [rbp+0h] BYREF
  __int128 v250; // [rsp+A0h] [rbp+20h]
  __int128 v251; // [rsp+B0h] [rbp+30h]
  __int128 v252; // [rsp+C0h] [rbp+40h]
  __m128i v253[2]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 *v254; // [rsp+F0h] [rbp+70h]
  __m128i v255; // [rsp+190h] [rbp+110h] BYREF
  __int64 v256; // [rsp+1A0h] [rbp+120h]
  __m128i *v257; // [rsp+1A8h] [rbp+128h]
  _BYTE v258[40]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v259; // [rsp+1D8h] [rbp+158h]
  __int128 v260; // [rsp+1E0h] [rbp+160h]
  __int64 v261; // [rsp+1F0h] [rbp+170h]
  __int64 v262; // [rsp+1F8h] [rbp+178h]
  volatile signed __int64 **v263; // [rsp+200h] [rbp+180h]
  __int16 v264; // [rsp+208h] [rbp+188h]
  __int128 v265; // [rsp+218h] [rbp+198h] BYREF
  __int64 v266; // [rsp+228h] [rbp+1A8h]
  __int64 *v267; // [rsp+230h] [rbp+1B0h]
  __int64 v268; // [rsp+238h] [rbp+1B8h]
  __m256i v269; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v270; // [rsp+260h] [rbp+1E0h]
  __m128i v271; // [rsp+270h] [rbp+1F0h]
  __m128i v272; // [rsp+280h] [rbp+200h]
  __m128i v273; // [rsp+290h] [rbp+210h] BYREF
  __int64 v274; // [rsp+2A0h] [rbp+220h]
  __int64 v275; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 (__fastcall *v276)(); // [rsp+2B0h] [rbp+230h]
  __int64 v277; // [rsp+2B8h] [rbp+238h]
  __m512i v278; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v279; // [rsp+300h] [rbp+280h]
  __m128i v280; // [rsp+310h] [rbp+290h]
  __m128i v281; // [rsp+320h] [rbp+2A0h]
  __m128i v282; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v283; // [rsp+340h] [rbp+2C0h]
  __m256i v284; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v285; // [rsp+3F0h] [rbp+370h]
  char *v286; // [rsp+3F8h] [rbp+378h]
  __int64 v287; // [rsp+400h] [rbp+380h]
  __int64 v288; // [rsp+408h] [rbp+388h]
  __int64 v289; // [rsp+410h] [rbp+390h]
  char *v290; // [rsp+418h] [rbp+398h]
  __int64 v291; // [rsp+420h] [rbp+3A0h]
  char *v292; // [rsp+428h] [rbp+3A8h]
  __int64 v293; // [rsp+430h] [rbp+3B0h]
  char *v294; // [rsp+438h] [rbp+3B8h]
  char v295; // [rsp+447h] [rbp+3C7h]
  _QWORD *v296; // [rsp+448h] [rbp+3C8h]
  char v297; // [rsp+455h] [rbp+3D5h]
  char v298; // [rsp+456h] [rbp+3D6h]
  char v299; // [rsp+457h] [rbp+3D7h]
  __int64 v300; // [rsp+458h] [rbp+3D8h]
  volatile signed __int64 **v301; // [rsp+460h] [rbp+3E0h]
  char *v302; // [rsp+468h] [rbp+3E8h]
  __int64 v303; // [rsp+470h] [rbp+3F0h]
  __int64 *v304; // [rsp+478h] [rbp+3F8h]
  char v305; // [rsp+487h] [rbp+407h]
  __int64 v306; // [rsp+488h] [rbp+408h]

  v306 = -2;
  v257 = a1;
  v5 = *((unsigned __int8 *)a2 + 744);
  v304 = a2;
  v287 = a3;
  switch ( v5 )
  {
    case 0LL:
      v6 = *a2;
      v7 = a2[1];
      v8 = a2[2];
      a2[3] = v7;
      a2[4] = v8;
      sub_140BDDAE0(v258, &unk_142239380, 1000000000, *(unsigned __int8 *)(v6 + 253));
      if ( *(_QWORD *)v258 != -1 )
      {
        v269.m256i_i64[2] = *(_QWORD *)&v258[16];
        *(__m128i *)v269.m256i_i8 = _mm_loadu_si128((const __m128i *)v258);
        v10 = v304[3];
        v11 = v304[4];
        sub_1416DB410(&v249, &v269);
        v278.m512i_i64[5] = v249.m256i_i64[2];
        *(__m128i *)&v278.m512i_u64[3] = _mm_loadu_si128((const __m128i *)&v249);
        v278.m512i_i16[0] = 4;
        *(_OWORD *)&v278.m512i_u64[1] = -1;
        (*(void (__fastcall **)(__int64, __m512i *))(v11 + 40))(v10, &v278);
        v12 = v269.m256i_i64[0];
        v248 = _mm_loadu_si128((const __m128i *)&v258[8]);
        v3 = -1;
        v13 = 8;
        goto LABEL_4;
      }
      v27 = v304;
      v28 = (volatile signed __int64 **)(v304 + 5);
      v304[5] = *(_QWORD *)&v258[8];
      v29 = *(unsigned __int8 *)(v6 + 254);
      v301 = v28;
      if ( v29 )
      {
        if ( v29 == 2 )
        {
          v300 = v8;
          v30 = v7;
          nullsub_1(v27, v9);
          v31 = (void *)sub_140001650(12, 1);
          if ( !v31 )
            sub_14196B2DB(1, 12);
          v34 = (__int64)v31;
          qmemcpy(v31, "/v1/messages", 12);
          v255.m128i_i64[0] = 0;
          v256 = 0;
          nullsub_1(v33, v32);
          v35 = sub_140001650(5, 1);
          v303 = v34;
          if ( !v35 )
            sub_14196B2DB(1, 5);
          *(_BYTE *)(v35 + 4) = 108;
          *(_DWORD *)v35 = 1701080941;
          v269.m256i_i64[0] = 5;
          v269.m256i_i64[1] = v35;
          v269.m256i_i64[2] = 5;
          v38 = *(_QWORD *)(v6 + 112);
          if ( v38 < 0 )
          {
            v39 = 0;
            goto LABEL_13;
          }
          if ( v38 )
          {
            v54 = *(_QWORD *)(v6 + 104);
            nullsub_1(v37, v36);
            v39 = 1;
            v55 = sub_140001650(v38, 1);
            if ( !v55 )
            {
LABEL_13:
              v295 = 1;
              sub_14196B2DB(v39, v38);
            }
            v56 = v55;
            sub_1419234B0(v55, v54, v38);
          }
          else
          {
            v56 = 1;
          }
          v278.m512i_i8[0] = 3;
          v278.m512i_i64[1] = v38;
          v278.m512i_i64[2] = v56;
          v278.m512i_i64[3] = v38;
          v295 = 0;
          sub_140A68320(&v249, &v255, &v269, &v278);
          v7 = v30;
          v8 = v300;
          if ( v249.m256i_i8[0] != -1 )
            sub_140032FF0(&v249);
          nullsub_1(v61, v60);
          v62 = (_QWORD *)sub_140001650(8, 1);
          if ( !v62 )
            sub_14196B2DB(1, 8);
          *v62 = 0x736567617373656DLL;
          v247[0] = 8;
          v247[1] = v62;
          v247[2] = 8;
          nullsub_1(0x736567617373656DLL, v63);
          v64 = sub_140001650(32, 8);
          if ( !v64 )
          {
            v299 = 1;
            sub_14196B2C1(8, 32);
          }
          v67 = v64;
          *(_QWORD *)&v265 = 0;
          v266 = 0;
          nullsub_1(v66, v65);
          v68 = (__int64 (__fastcall *)())sub_140001650(4, 1);
          v296 = (_QWORD *)v67;
          if ( !v68 )
            sub_14196B2DB(1, 4);
          *(_DWORD *)v68 = 1701605234;
          v275 = 4;
          v276 = v68;
          v277 = 4;
          nullsub_1(v70, v69);
          v71 = (char *)sub_140001650(4, 1);
          v302 = v71;
          if ( !v71 )
            sub_14196B2DB(1, 4);
          *(_DWORD *)v71 = 1919251317;
          v278.m512i_i8[0] = 3;
          v278.m512i_i64[1] = 4;
          v278.m512i_i64[2] = (__int64)v71;
          v278.m512i_i64[3] = 4;
          sub_140A68320(&v249, &v265, &v275, &v278);
          if ( v249.m256i_i8[0] != -1 )
            sub_140032FF0(&v249);
          nullsub_1(v73, v72);
          v74 = (_DWORD *)sub_140001650(7, 1);
          if ( !v74 )
            sub_14196B2DB(1, 7);
          *(_DWORD *)((char *)v74 + 3) = 1953391988;
          *v74 = 1953394531;
          v275 = 7;
          v276 = (__int64 (__fastcall *)())v74;
          v277 = 7;
          nullsub_1(v76, v75);
          v77 = (char *)sub_140001650(2, 1);
          v302 = v77;
          if ( !v77 )
            sub_14196B2DB(1, 2);
          *(_WORD *)v77 = 26984;
          v278.m512i_i8[0] = 3;
          v278.m512i_i64[1] = 2;
          v278.m512i_i64[2] = (__int64)v77;
          v278.m512i_i64[3] = 2;
          sub_140A68320(&v249, &v265, &v275, &v278);
          if ( v249.m256i_i8[0] != -1 )
            sub_140032FF0(&v249);
          *(_OWORD *)((char *)&v284.m256i_u32[1] + 3) = v265;
          *(__int64 *)((char *)&v284.m256i_i64[2] + 7) = v266;
          v78 = (__int64)v296;
          *(_BYTE *)v296 = 5;
          v79 = _mm_loadu_si128((const __m128i *)&v284);
          *(_OWORD *)(v78 + 16) = *(_OWORD *)((char *)&v284.m256i_u64[1] + 7);
          *(__m128i *)(v78 + 1) = v79;
          v269.m256i_i64[1] = 1;
          v269.m256i_i64[2] = v78;
          v269.m256i_i64[3] = 1;
          v269.m256i_i8[0] = 4;
          v299 = 0;
          sub_140A68320(&v278, &v255, v247, &v269);
          if ( v278.m512i_i8[0] != -1 )
            sub_140032FF0(&v278);
          nullsub_1(v81, v80);
          v82 = (void *)sub_140001650(10, 1);
          if ( !v82 )
            sub_14196B2DB(1, 10);
          qmemcpy(v82, "max_tokens", 10);
          v269.m256i_i64[0] = 10;
          v269.m256i_i64[1] = (__int64)v82;
          v269.m256i_i64[2] = 10;
          v278.m512i_i8[0] = 2;
          v278.m512i_i64[1] = 0;
          v278.m512i_i64[2] = 16;
          sub_140A68320(&v249, &v255, &v269, &v278);
          if ( v249.m256i_i8[0] != -1 )
            sub_140032FF0(&v249);
          nullsub_1(v84, v83);
          v85 = sub_140001650(6, 1);
          if ( !v85 )
            sub_14196B2DB(1, 6);
          *(_WORD *)(v85 + 4) = 28001;
          *(_DWORD *)v85 = 1701999731;
          v269.m256i_i64[0] = 6;
          v269.m256i_i64[1] = v85;
          v269.m256i_i64[2] = 6;
          v278.m512i_i16[0] = 257;
          sub_140A68320(&v249, &v255, &v269, &v278);
          if ( v249.m256i_i8[0] != -1 )
            sub_140032FF0(&v249);
          *(__m128i *)&v258[8] = _mm_loadu_si128(&v255);
          *(_QWORD *)&v258[24] = v256;
          v258[0] = 5;
          LOBYTE(v4) = 1;
          LOBYTE(v86) = 1;
          sub_140731E10(&v278, v6, v86);
          v284 = *(__m256i *)v258;
          v249 = *(__m256i *)v278.m512i_i8;
          v250 = *(_OWORD *)&v278.m512i_u64[4];
          v251 = *(_OWORD *)&v278.m512i_u64[6];
          v252 = v279;
          v253[0] = v280;
          v44 = 12;
          v45 = 12;
        }
        else
        {
          nullsub_1(v27, v9);
          v46 = (void *)sub_140001650(10, 1);
          if ( !v46 )
            sub_14196B2DB(1, 10);
          qmemcpy(v46, "/responses", 10);
          v303 = (__int64)v46;
          sub_14072E680(&v269, *(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112));
          LOBYTE(v4) = 1;
          LOBYTE(v47) = 1;
          sub_140731700(&v278, v6, v47);
          v284 = v269;
          v249 = *(__m256i *)v278.m512i_i8;
          v250 = *(_OWORD *)&v278.m512i_u64[4];
          v251 = *(_OWORD *)&v278.m512i_u64[6];
          v252 = v279;
          v253[0] = v280;
          v44 = 10;
          v45 = 10;
        }
      }
      else
      {
        v43 = sub_140732E50(*(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112));
        LOBYTE(v4) = v43 ^ 1;
        sub_14072F3F0((unsigned int)&v278, v43, *(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112), v43 ^ 1);
        v303 = v278.m512i_i64[1];
        v300 = v278.m512i_i64[0];
        v44 = v278.m512i_i64[2];
        *(_OWORD *)&v269.m256i_u64[2] = *(_OWORD *)&v278.m512i_u64[5];
        *(__m128i *)v269.m256i_i8 = _mm_loadu_si128((const __m128i *)&v278.m512i_u64[3]);
        sub_140731700(&v278, v6, v4);
        v284 = v269;
        v249 = *(__m256i *)v278.m512i_i8;
        v250 = *(_OWORD *)&v278.m512i_u64[4];
        v251 = *(_OWORD *)&v278.m512i_u64[6];
        v252 = v279;
        v253[0] = v280;
        v45 = v300;
      }
      v87 = v304;
      v304[6] = v45;
      v88 = v303;
      v87[7] = v303;
      v87[8] = v44;
      v296 = v87 + 9;
      v89 = *(_OWORD *)&v284.m256i_u64[2];
      *(_OWORD *)(v87 + 9) = *(_OWORD *)v284.m256i_i8;
      *(_OWORD *)(v87 + 11) = v89;
      v300 = (__int64)(v87 + 13);
      v90 = *(_OWORD *)&v249.m256i_u64[2];
      v91 = v250;
      v92 = v251;
      *(_OWORD *)(v87 + 13) = *(_OWORD *)v249.m256i_i8;
      *(_OWORD *)(v87 + 15) = v90;
      *(_OWORD *)(v87 + 17) = v91;
      *(_OWORD *)(v87 + 19) = v92;
      *(_OWORD *)(v87 + 21) = v252;
      *(__m128i *)(v87 + 23) = _mm_load_si128(v253);
      sub_140992E20((unsigned int)&v249, *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64), v88, v44, 0);
      if ( v249.m256i_i32[0] == 1 )
      {
        *(_QWORD *)&v258[16] = v249.m256i_i64[3];
        *(__m128i *)v258 = _mm_loadu_si128((const __m128i *)&v249.m256i_u64[1]);
        v93 = v304[3];
        v94 = v304[4];
        sub_1416DB410(&v269, v258);
        v278.m512i_i64[5] = v269.m256i_i64[2];
        *(__m128i *)&v278.m512i_u64[3] = _mm_loadu_si128((const __m128i *)&v269);
        v278.m512i_i16[0] = 4;
        *(_OWORD *)&v278.m512i_u64[1] = -1;
        (*(void (__fastcall **)(__int64, __m512i *))(v94 + 40))(v93, &v278);
        v95 = *(_QWORD *)v258;
        v248 = _mm_loadu_si128((const __m128i *)&v249.m256i_u64[2]);
        sub_14028F5B0(v300);
        sub_140032FF0(v296);
        v96 = v304[6];
        if ( v96 )
          sub_140001660(v304[7], v96, 1);
        v97 = v95;
        v98 = v301;
        v3 = -1;
        v13 = 8;
        if ( _InterlockedDecrement64(*v301) )
        {
          v14 = 0;
          v15 = 0;
          v16 = 0;
          v12 = v97;
          goto LABEL_142;
        }
        sub_141258070(v98);
        v12 = v97;
LABEL_4:
        v14 = 0;
        v15 = 0;
        v16 = 0;
LABEL_142:
        v179 = v257;
        v257->m128i_i64[0] = v14;
        v179->m128i_i64[1] = v13;
        v179[1].m128i_i64[0] = v15;
        v179[1].m128i_i64[1] = v12;
        v179[2] = _mm_load_si128(&v248);
        v179[3].m128i_i64[0] = v3;
        v179[3].m128i_i8[8] = v16;
        result = 1;
        v171 = v304;
        goto LABEL_143;
      }
      v21 = v304;
      v304[27] = v249.m256i_i64[3];
      *(__m128i *)(v21 + 25) = _mm_loadu_si128((const __m128i *)&v249.m256i_u64[1]);
      v20 = *(_BYTE *)(v6 + 254);
      v22 = v21[26];
      v23 = v21[27];
      v24 = *(_QWORD *)(v6 + 104);
      v25 = *(_QWORD *)(v6 + 112);
      v21[34] = v22;
      v21[35] = v23;
      v21[36] = v24;
      v21[37] = v25;
      v21[38] = v7;
      v21[39] = v8;
      v21[57] = (__int64)v301;
      v21[58] = (__int64)v296;
      v21[59] = v300;
      v26 = v8;
      v18 = (char *)v21 + 485;
      *((_BYTE *)v21 + 485) = 0;
      *((_BYTE *)v21 + 486) = v20;
      *((_BYTE *)v21 + 487) = v4;
      v19 = (__int64)(v21 + 28);
LABEL_70:
      *((_BYTE *)v21 + 484) = 0;
      *((_BYTE *)v21 + 482) = v20;
      *((_BYTE *)v21 + 483) = v4;
      v21[28] = v24;
      v21[29] = v25;
      v99 = v7;
      v21[30] = v7;
      v100 = v26;
      v21[31] = v26;
      v286 = v18;
      v285 = v19;
      v288 = v22;
      sub_1409922F0(&v278, v22, v23);
      v302 = v18;
      v103 = v304[29];
      v303 = v19;
      if ( v103 < 0 )
      {
        v104 = 0;
        goto LABEL_72;
      }
      if ( v103 )
      {
        v105 = v304[28];
        nullsub_1(v102, v101);
        v104 = 1;
        v106 = sub_140001650(v103, 1);
        if ( !v106 )
LABEL_72:
          sub_14196B2DB(v104, v103);
        v107 = v106;
        sub_1419234B0(v106, v105, v103);
        v19 = v303;
      }
      else
      {
        v107 = 1;
      }
      *(__int64 *)((char *)&v249.m256i_i64[2] + 7) = v278.m512i_i64[2];
      *(_OWORD *)((char *)&v249.m256i_u32[1] + 3) = *(_OWORD *)v278.m512i_i8;
      v278.m512i_i8[0] = 0;
      *(__m128i *)&v278.m512i_i8[1] = _mm_loadu_si128((const __m128i *)&v249);
      *(_OWORD *)&v278.m512i_u64[2] = *(_OWORD *)((char *)&v249.m256i_u64[1] + 7);
      v278.m512i_i64[4] = v103;
      v278.m512i_i64[5] = v107;
      v278.m512i_i64[6] = v103;
      v108 = *(void (__fastcall **)(__int64, __m512i *))(v100 + 40);
      v109 = v302;
      v286 = v302;
      v285 = v19;
      v108(v99, &v278);
      v286 = v109;
      v285 = v19;
      v110 = sub_1416AEBD0();
      v111 = v304;
      v304[32] = v110;
      *((_DWORD *)v111 + 66) = v112;
      v113 = *v301;
      v294 = v109;
      v293 = v19;
      sub_140657900((unsigned int)&v278, (_DWORD)v113, (unsigned int)&unk_141A35958, v288, v23);
      v17 = v287;
      v115 = (const __m128i *)v300;
      v3 = *(_QWORD *)(v300 + 80);
      v116 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v116) = v3 >> 62 != 0 || 4 * v3 > 0x7FFFFFFFFFFFFFFELL;
      if ( (_BYTE)v116 )
      {
        v117 = 0;
        goto LABEL_80;
      }
      v118 = *(_WORD *)(v300 + 88);
      v268 = 4 * v3;
      v301 = (volatile signed __int64 **)v3;
      if ( 4 * v3 )
      {
        v119 = *(_QWORD *)(v300 + 72);
        nullsub_1(v116, v114);
        v117 = 2;
        v120 = sub_140001650(4 * v3, 2);
        if ( !v120 )
        {
LABEL_80:
          v298 = 1;
          sub_14196B2DB(v117, 4 * v3);
        }
        v288 = v120;
        if ( v3 )
          sub_1419234B0(v120, v119, 4 * v3);
      }
      else
      {
        v288 = 2;
      }
      sub_14022BA60(&v284, &v115[1].m128i_u64[1]);
      sub_14022B8C0(&v249, &v115[3]);
      v264 = v118;
      v262 = v288;
      v263 = v301;
      *(_OWORD *)&v258[24] = *(_OWORD *)v284.m256i_i8;
      v259 = v284.m256i_i64[2];
      v261 = v249.m256i_i64[2];
      v260 = *(_OWORD *)v249.m256i_i8;
      *(__m128i *)v258 = _mm_loadu_si128(v115);
      *(_QWORD *)&v258[16] = v115[1].m128i_i64[0];
      v298 = 0;
      sub_14126FD80(&v249, &v278, v258);
      v121 = v302;
      v294 = v302;
      v293 = v303;
      sub_14065F550(&v278, &v249, v296);
      v294 = v121;
      v293 = v303;
      v122 = sub_14126FCB0(&v278);
      v123 = v304;
      v304[61] = v122;
      v123[62] = v124;
      a2 = v123;
LABEL_87:
      sub_141298A20(&v278, a2 + 61, v17);
      v125 = v278.m512i_i64[0];
      if ( v278.m512i_i64[0] == -2 )
      {
        v41 = 3;
        goto LABEL_129;
      }
      v126 = v278.m512i_i64[1];
      v127 = *(_OWORD *)&v278.m512i_u64[2];
      v269 = *(__m256i *)&v278.m512i_u64[4];
      v270 = v279;
      v271 = v280;
      v272 = v281;
      v273 = _mm_loadu_si128(&v282);
      v274 = v283;
      v128 = v304[61];
      v129 = v304[62];
      v130 = v302;
      v294 = v302;
      v293 = v303;
      sub_140290050(v128, v129);
      if ( (_DWORD)v125 == -1 )
      {
        v294 = v130;
        v293 = v303;
        *(_QWORD *)v258 = sub_1412469C0(v126);
        v249.m256i_i64[0] = (__int64)v258;
        v249.m256i_i64[1] = (__int64)sub_141246C00;
        sub_1416DAFA0(&v278, &unk_141A0E545, &v249);
        v294 = v302;
        v293 = v303;
        sub_14028DCE0(*(_QWORD *)v258);
        v300 = v278.m512i_i64[1];
        v48 = v278.m512i_i64[0];
        v49 = v278.m512i_i64[2];
        v14 = -1;
        v51 = v304;
        goto LABEL_133;
      }
      v131 = v17;
      v132 = v304;
      *((_BYTE *)v304 + 484) = 1;
      v132[40] = v125;
      v132[41] = v126;
      *((_OWORD *)v132 + 21) = v127;
      *((__m128i *)v132 + 26) = v272;
      v133 = *(_OWORD *)&v269.m256i_u64[2];
      v134 = v270;
      v135 = v271;
      *((_OWORD *)v132 + 22) = *(_OWORD *)v269.m256i_i8;
      *((_OWORD *)v132 + 23) = v133;
      *((_OWORD *)v132 + 24) = v134;
      *((__m128i *)v132 + 25) = v135;
      *((__m128i *)v132 + 27) = _mm_load_si128(&v273);
      v132[56] = v274;
      v136 = *((_WORD *)v132 + 212);
      *((_WORD *)v132 + 240) = v136;
      v137 = v132[30];
      v138 = v130;
      v139 = v132[31];
      v290 = v138;
      v140 = v303;
      v289 = v303;
      v141 = sub_1416AED20(v132 + 32);
      v278.m512i_i8[0] = 1;
      v278.m512i_i16[1] = v136;
      v278.m512i_i64[1] = 1000 * v141 + v142 / 0xF4240uLL;
      v143 = *(void (__fastcall **)(__int64, __m512i *))(v139 + 40);
      v290 = v138;
      v289 = v140;
      v143(v137, &v278);
      v144 = v304 + 40;
      v145 = v304;
      if ( (unsigned __int16)(*((_WORD *)v304 + 240) - 200) > 0x63u )
      {
        v304[61] = (__int64)v144;
        a2 = v145;
        *((_BYTE *)v145 + 560) = 0;
        v17 = v131;
LABEL_20:
        v301 = (volatile signed __int64 **)(a2 + 61);
        sub_1403A9D20(&v278, a2 + 61, v17);
        v42 = v278.m512i_i8[0];
        if ( v278.m512i_i64[0] == 2 )
        {
          v41 = 4;
          goto LABEL_129;
        }
        v48 = v278.m512i_i64[1];
        v49 = v278.m512i_i64[3];
        v50 = v278.m512i_i64[2];
        v51 = v304;
        if ( *((_BYTE *)v304 + 560) == 3 )
        {
          v52 = v304[63];
          if ( v52 )
            sub_140001660(v304[64], v52, 1);
        }
        v14 = -1;
        if ( (v42 & 1) != 0 )
        {
          v300 = v50;
        }
        else
        {
          v301 = (volatile signed __int64 **)v48;
          v296 = (_QWORD *)v50;
          sub_1416D8D10(v258, v50, v49);
          v57 = *((unsigned __int16 *)v304 + 240);
          v287 = *(_QWORD *)&v258[8];
          sub_140732C50(&v278, v57, *(_QWORD *)&v258[8], *(_QWORD *)&v258[16]);
          v48 = v278.m512i_i64[0];
          if ( v278.m512i_i64[0] == -1 )
          {
            v284.m256i_i16[0] = *((_WORD *)v304 + 240);
            v278.m512i_i64[0] = (__int64)&v284;
            v278.m512i_i64[1] = (__int64)sub_1416EA1B0;
            sub_1416DAFA0(&v249, &unk_141A0E5A4, &v278);
            v48 = v249.m256i_i64[0];
          }
          else
          {
            *(__m128i *)&v249.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v278.m512i_u64[1]);
          }
          v49 = v249.m256i_i64[2];
          v300 = v249.m256i_i64[1];
          v159 = v301;
          if ( *(__int64 *)v258 > 0 )
            sub_140001660(v287, *(_QWORD *)v258, 1);
          v51 = v304;
          if ( v159 )
            sub_140001660(v296, v159, 1);
        }
LABEL_100:
        if ( !*((_BYTE *)v51 + 484) )
          goto LABEL_133;
        goto LABEL_130;
      }
      if ( *((_BYTE *)v304 + 483) )
      {
        *((_BYTE *)v304 + 484) = 0;
        sub_1419234B0(&v278, v144, 136);
        v146 = v302;
        v290 = v302;
        v147 = v303;
        v289 = v303;
        v148 = sub_14107D110(&v278);
        v149 = v304;
        v304[77] = v148;
        v149[78] = v150;
        *((_BYTE *)v149 + 739) = *((_BYTE *)v149 + 482);
        v149[81] = 0;
        v149[82] = 1;
        *(_OWORD *)(v149 + 83) = 0;
        v149[85] = 1;
        *((_OWORD *)v149 + 43) = 0;
        v149[88] = 1;
        v149[89] = 0;
        *((_WORD *)v149 + 368) = 256;
        *((_BYTE *)v149 + 738) = 0;
        *((_OWORD *)v149 + 45) = 0;
        v149[61] = -1;
        v292 = v146;
        v291 = v147;
        v151 = sub_1415460F0();
        v17 = v131;
        v292 = v302;
        v291 = v303;
        v153 = sub_141546A90(v151, v152, 12, 0);
        v155 = v154;
        v156 = v304;
        v304[79] = v153;
        *((_DWORD *)v156 + 160) = v154;
        v157 = v303;
        v158 = v302;
        while ( 1 )
        {
          v302 = v158;
          v292 = v158;
          v303 = v157;
          v291 = v157;
          sub_141549580(&v278, v153, v155, &off_141A38150);
          a2 = v304;
          v215 = _mm_loadu_si128((const __m128i *)&v278);
          v216 = *(_OWORD *)&v278.m512i_u64[2];
          v217 = *(_OWORD *)&v278.m512i_u64[4];
          v218 = *(_OWORD *)&v278.m512i_u64[6];
          *(__m128i *)v249.m256i_i8 = v215;
          *(_OWORD *)&v249.m256i_u64[2] = *(_OWORD *)&v278.m512i_u64[2];
          v250 = *(_OWORD *)&v278.m512i_u64[4];
          v251 = *(_OWORD *)&v278.m512i_u64[6];
          v219 = v279;
          v252 = v279;
          v220 = v280;
          v253[0] = v280;
          v221 = v281;
          v253[1] = v281;
          v254 = v304 + 77;
          v304[76] = (__int64)(v304 + 77);
          *((__m128i *)a2 + 37) = v221;
          *((__m128i *)a2 + 36) = v220;
          *((_OWORD *)a2 + 35) = v219;
          *((_OWORD *)a2 + 34) = v218;
          *((_OWORD *)a2 + 33) = v217;
          *((_OWORD *)a2 + 32) = v216;
          *((__m128i *)a2 + 31) = v215;
LABEL_146:
          v301 = (volatile signed __int64 **)(a2 + 62);
          sub_14076B260(&v278, a2 + 62, v17);
          v182 = v278.m512i_i64[0];
          if ( v278.m512i_i64[0] == -1 )
          {
            v41 = 6;
            goto LABEL_129;
          }
          v183 = v278.m512i_i64[1];
          v184 = *(_OWORD *)&v278.m512i_u64[2];
          v185 = v278.m512i_i64[4];
          v292 = v302;
          v291 = v303;
          sub_140291A70(v301);
          if ( (_DWORD)v182 == 2 )
            break;
          *(_QWORD *)v258 = v182;
          *(_QWORD *)&v258[8] = v183;
          *(_OWORD *)&v258[16] = v184;
          *(_QWORD *)&v258[32] = v185;
          v268 = v182;
          LOBYTE(v288) = v182;
          if ( v182 == 1 )
          {
            if ( !v183 )
            {
              v305 = 0;
              *(_QWORD *)&v265 = sub_1412469C0(v184);
              v275 = (__int64)&v265;
              v276 = sub_141246C00;
              sub_1416DAFA0(&v284, &unk_141A0E58D, &v275);
              v305 = 0;
              sub_14028DCE0(v265);
              v188 = (__m128i *)v284.m256i_i64[1];
              v48 = v284.m256i_i64[0];
              v49 = v284.m256i_i64[2];
LABEL_187:
              v222 = v304;
              goto LABEL_188;
            }
            v278.m512i_i64[0] = v183;
            *(_OWORD *)&v278.m512i_u64[1] = v184;
            v278.m512i_i64[3] = v185;
            sub_140CF2530(&v249, v304 + 81, v184, *((_QWORD *)&v184 + 1));
            v48 = v249.m256i_i64[1];
            v49 = v249.m256i_i64[3];
            v188 = (__m128i *)v249.m256i_i64[2];
            if ( v249.m256i_i8[0] )
            {
              v242 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v278.m512i_i64[0] + 32);
              v305 = 0;
              v242(&v278.m512i_u64[3], v278.m512i_i64[1], v278.m512i_i64[2]);
              goto LABEL_187;
            }
            v189 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v278.m512i_i64[0] + 32);
            v305 = 0;
            v189(&v278.m512i_u64[3], v278.m512i_i64[1], v278.m512i_i64[2]);
          }
          else
          {
            v305 = 1;
            sub_140CF27E0(&v278, v304 + 81);
            v48 = v278.m512i_i64[1];
            v49 = v278.m512i_i64[3];
            v188 = (__m128i *)v278.m512i_i64[2];
            if ( v278.m512i_i32[0] == 1 )
              goto LABEL_187;
          }
          LOBYTE(v288) = v288 ^ 1;
          v190 = (__int64)&v188->m128i_i64[3 * v49];
          v249.m256i_i64[0] = (__int64)v188;
          v249.m256i_i64[1] = (__int64)v188;
          v249.m256i_i64[2] = v48;
          v249.m256i_i64[3] = v190;
          v191 = v188;
          v192 = (__int64)v188;
          v193 = v304;
          if ( v49 )
          {
            v3 = v48;
            v194 = v304 + 32;
            v195 = (volatile signed __int64 **)&v191[1].m128i_i64[1];
            do
            {
              v192 = (__int64)v195;
              v196 = (__int64)*(v195 - 3);
              if ( v196 == -1 )
                break;
              v197 = (__int64)*(v195 - 2);
              v301 = v195;
              v198 = (__int64)*(v195 - 1);
              v199 = v193[61] < 0;
              v300 = v196;
              v296 = (_QWORD *)v197;
              if ( v199 )
              {
                v297 = 0;
                v200 = sub_1416AED20(v194);
                v202 = 1000 * v200 + v201 / 0xF4240uLL;
                v203 = v304;
                v304[61] = v202;
                v204 = v203[30];
                v205 = v203[31];
                v278.m512i_i8[0] = 2;
                v278.m512i_i64[1] = v202;
                v206 = *(void (__fastcall **)(__int64, __m512i *))(v205 + 40);
                v297 = 0;
                v206(v204, &v278);
                v193 = v304;
                v196 = v300;
                v197 = (__int64)v296;
              }
              v207 = v193[30];
              v208 = v193[31];
              v278.m512i_i8[0] = 3;
              v278.m512i_i64[1] = v196;
              v278.m512i_i64[2] = v197;
              v278.m512i_i64[3] = v198;
              v209 = *(void (__fastcall **)(__int64, __m512i *, __int64))(v208 + 40);
              v297 = 1;
              v209(v207, &v278, v192);
              v192 = (__int64)v301;
              v195 = v301 + 3;
              v193 = v304;
            }
            while ( v301 != (volatile signed __int64 **)v190 );
            v249.m256i_i64[1] = v192;
            v48 = v3;
          }
          v210 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v190 - v192);
          v211 = v190 == v192;
          v157 = v303;
          v158 = v302;
          if ( !v211 )
          {
            v212 = *((_QWORD *)&v210 + 1) >> 4;
            v213 = (_QWORD *)(v192 + 8);
            do
            {
              v214 = *(v213 - 1);
              if ( v214 )
              {
                v3 = (unsigned __int64)v213;
                sub_140001660(*v213, v214, 1);
                v213 = (_QWORD *)v3;
              }
              v213 += 3;
              --v212;
            }
            while ( v212 );
          }
          if ( v48 )
            sub_140001660(v191, 24 * v48, 8);
          if ( *((_BYTE *)v193 + 738) )
          {
            v223 = v193 + 81;
            v305 = v288 & 1;
            sub_140CF27E0(&v278, v193 + 81);
            v48 = v278.m512i_i64[1];
            v49 = v278.m512i_i64[3];
            v188 = (__m128i *)v278.m512i_i64[2];
            if ( !v278.m512i_i8[0] )
            {
              v249.m256i_i64[0] = v278.m512i_i64[1];
              *(_OWORD *)&v249.m256i_u64[1] = *(_OWORD *)&v278.m512i_u64[2];
              sub_1402346F0(&v249);
              v224 = v304;
              v225 = v302;
              if ( v48 )
                sub_140001660(v188, 24 * v48, 8);
              v292 = v225;
              v291 = v303;
              v226 = sub_1416AED20(v224 + 32);
              v228 = 1000 * v226 + v227 / 0xF4240uLL;
              v229 = v304[30];
              v230 = v304[31];
              v231 = v304[61];
              v278.m512i_i16[0] = 260;
              v278.m512i_i64[1] = v231;
              v278.m512i_i64[2] = v228;
              v278.m512i_i64[3] = -1;
              v232 = *(void (__fastcall **)(__int64, __m512i *))(v230 + 40);
              v292 = v302;
              v291 = v303;
              v232(v229, &v278);
              v233 = v304;
              v3 = v304[61];
              nullsub_1(v235, v234);
              v301 = (volatile signed __int64 **)sub_140001650(24, 8);
              if ( !v301 )
              {
                v292 = v302;
                v291 = v303;
                sub_14196B2C1(8, 24);
              }
              v236 = v233[28];
              v237 = (volatile signed __int64 *)v233[29];
              sub_1401E7560((unsigned int)&v278, (_DWORD)v237, 0, 1, 1);
              v238 = v278.m512i_i64[1];
              if ( v278.m512i_i32[0] == 1 )
                sub_14196B2DB(v278.m512i_i64[1], v278.m512i_i64[2]);
              v239 = v278.m512i_i64[2];
              if ( v237 )
                sub_1419234B0(v278.m512i_i64[2], v236, v237);
              v240 = v301;
              *v301 = (volatile signed __int64 *)v238;
              v48 = (__int64)v240;
              v240[1] = (volatile signed __int64 *)v239;
              v240[2] = v237;
              sub_140191FD0(v223);
              v300 = v304[77];
              v296 = (_QWORD *)v304[78];
              if ( *v296 )
                ((void (__fastcall *)(__int64))*v296)(v300);
              v241 = v296[1];
              v49 = -1;
              v14 = 1;
              if ( v241 )
                sub_140001660(v300, v241, v296[2]);
              v300 = 1;
              v51 = v304;
              goto LABEL_133;
            }
            goto LABEL_187;
          }
          v153 = v193[79];
          v155 = *((unsigned int *)v193 + 160);
          v17 = v287;
        }
        nullsub_1(v187, v186);
        v48 = 53;
        v188 = (__m128i *)sub_140001650(53, 1);
        v222 = v304;
        if ( !v188 )
        {
          v292 = v302;
          v291 = v303;
          sub_14196B2DB(1, 53);
        }
        qmemcpy(&v188[1], "ed out before usable output completed", 37);
        *v188 = _mm_loadu_si128((const __m128i *)&xmmword_141A0E558);
        v49 = 53;
LABEL_188:
        v243 = v222[81];
        if ( v243 )
          sub_140001660(v222[82], v243, 1);
        v244 = v222[84];
        if ( v244 )
          sub_140001660(v222[85], v244, 1);
        v245 = v222[87];
        if ( v245 )
          sub_140001660(v222[88], v245, 1);
        v301 = (volatile signed __int64 **)v222[77];
        v296 = (_QWORD *)v222[78];
        if ( *v296 )
          ((void (__fastcall *)(volatile signed __int64 **))*v296)(v301);
        v300 = (__int64)v188;
        v246 = v296[1];
        v14 = -1;
        if ( v246 )
          sub_140001660(v301, v246, v296[2]);
        v51 = v304;
        if ( *((_BYTE *)v304 + 484) )
          goto LABEL_130;
        goto LABEL_133;
      }
      v304[61] = (__int64)v144;
      a2 = v145;
      *((_BYTE *)v145 + 560) = 0;
      v17 = v131;
LABEL_16:
      v301 = (volatile signed __int64 **)(a2 + 61);
      sub_1403A9D20(&v278, a2 + 61, v17);
      v40 = v278.m512i_i8[0];
      if ( v278.m512i_i64[0] != 2 )
      {
        v48 = v278.m512i_i64[1];
        v49 = v278.m512i_i64[3];
        v300 = v278.m512i_i64[2];
        v51 = v304;
        if ( *((_BYTE *)v304 + 560) == 3 )
        {
          v53 = v304[63];
          if ( v53 )
            sub_140001660(v304[64], v53, 1);
        }
        if ( (v40 & 1) == 0 )
        {
          v301 = (volatile signed __int64 **)v48;
          sub_140D6EE00(&v278, v300, v49);
          v58 = (_QWORD *)v278.m512i_i64[0];
          if ( v278.m512i_i64[0] == -1 )
          {
            v160 = sub_1416AED20(v304 + 32);
            v3 = 1000 * v160 + v161 / 0xF4240uLL;
            v162 = v304[30];
            v163 = v304[31];
            v278.m512i_i16[0] = 260;
            v278.m512i_i64[1] = v3;
            v278.m512i_i64[2] = v3;
            v278.m512i_i64[3] = -1;
            (*(void (__fastcall **)(__int64, __m512i *))(v163 + 40))(v162, &v278);
            nullsub_1(v165, v164);
            v166 = sub_140001650(24, 8);
            if ( !v166 )
              sub_14196B2C1(8, 24);
            v58 = (_QWORD *)v166;
            v51 = v304;
            v167 = v304[28];
            v168 = v304[29];
            sub_1401E7560((unsigned int)&v278, v168, 0, 1, 1);
            v169 = v278.m512i_i64[1];
            if ( v278.m512i_i32[0] == 1 )
            {
              v296 = v58;
              sub_14196B2DB(v278.m512i_i64[1], v278.m512i_i64[2]);
            }
            v170 = v278.m512i_i64[2];
            if ( v168 )
              sub_1419234B0(v278.m512i_i64[2], v167, v168);
            *v58 = v169;
            v58[1] = v170;
            v58[2] = v168;
            v49 = -1;
            v14 = 1;
            v59 = 1;
          }
          else
          {
            v49 = v278.m512i_i64[2];
            v59 = v278.m512i_i64[1];
            v14 = -1;
            v51 = v304;
          }
          if ( v301 )
            sub_140001660(v300, v301, 1);
          v48 = (__int64)v58;
          v300 = v59;
          if ( *((_BYTE *)v51 + 484) )
          {
LABEL_130:
            sub_14023AEC0(v51 + 40);
            v51 = v304;
            v173 = (_QWORD *)v304[56];
            if ( *v173 )
              sub_140001660(v173[1], *v173, 1);
            sub_140001660(v173, 88, 8);
          }
LABEL_133:
          v174 = v303;
          v301 = (volatile signed __int64 **)v48;
          *((_WORD *)v51 + 242) = 256;
          sub_14028B610(v174);
          v16 = 1;
          v15 = v300;
          if ( (_DWORD)v14 == -1 )
          {
            v269.m256i_i64[0] = (__int64)v301;
            v269.m256i_i64[1] = v300;
            v269.m256i_i64[2] = v49;
            v180 = v304[3];
            v181 = v304[4];
            sub_1416DB410(&v249, &v269);
            v278.m512i_i64[5] = v249.m256i_i64[2];
            *(__m128i *)&v278.m512i_u64[3] = _mm_loadu_si128((const __m128i *)&v249);
            v278.m512i_i16[0] = 4;
            *(_OWORD *)&v278.m512i_u64[1] = -1;
            (*(void (__fastcall **)(__int64, __m512i *))(v181 + 40))(v180, &v278);
            v248 = _mm_loadu_si128((const __m128i *)&v269.m256i_u64[1]);
            v3 = -1;
            v13 = 8;
            v14 = 0;
            v15 = 0;
            v16 = 0;
            v175 = v304;
            v176 = v304[25];
            if ( !v176 )
              goto LABEL_136;
          }
          else
          {
            v13 = (__int64)v301;
            v301 = (volatile signed __int64 **)v49;
            v175 = v304;
            v176 = v304[25];
            if ( !v176 )
            {
LABEL_136:
              sub_14028F5B0(v175 + 13);
              sub_140032FF0(v304 + 9);
              v177 = v304;
              v178 = v304[6];
              if ( v178 )
                sub_140001660(v304[7], v178, 1);
              if ( !_InterlockedDecrement64((volatile signed __int64 *)v177[5]) )
                sub_141258070(v177 + 5);
              v12 = (__int64)v301;
              goto LABEL_142;
            }
          }
          sub_140001660(v175[26], v176, 1);
          goto LABEL_136;
        }
        v14 = -1;
        goto LABEL_100;
      }
      v41 = 5;
LABEL_129:
      v171 = v304;
      *v302 = v41;
      v257->m128i_i64[0] = -1;
      result = 3;
LABEL_143:
      *((_BYTE *)v171 + 744) = result;
      return result;
    case 1LL:
      sub_14196B990(&off_141A0FC40);
    case 2LL:
      sub_14196B9B0(&off_141A0FC40);
    case 3LL:
      v17 = a3;
      v18 = (char *)a2 + 485;
      v19 = (__int64)(a2 + 28);
      switch ( *((_BYTE *)a2 + 485) )
      {
        case 0:
          v301 = (volatile signed __int64 **)a2[57];
          v20 = *((_BYTE *)a2 + 486);
          v21 = a2;
          v22 = a2[34];
          v23 = v21[35];
          v296 = (_QWORD *)v21[58];
          v300 = v21[59];
          LOBYTE(v4) = *((_BYTE *)v21 + 487);
          v24 = v21[36];
          v25 = v21[37];
          v7 = v21[38];
          v26 = v21[39];
          goto LABEL_70;
        case 1:
          v267 = a2 + 28;
          sub_14196B990(&off_141A0FC28);
        case 2:
          v267 = a2 + 28;
          sub_14196B9B0(&off_141A0FC28);
        case 3:
          v302 = (char *)a2 + 485;
          v303 = (__int64)(a2 + 28);
          goto LABEL_87;
        case 4:
          v302 = (char *)a2 + 485;
          v303 = (__int64)(a2 + 28);
          goto LABEL_20;
        case 5:
          v302 = (char *)a2 + 485;
          v303 = (__int64)(a2 + 28);
          goto LABEL_16;
        case 6:
          v302 = (char *)a2 + 485;
          v303 = (__int64)(a2 + 28);
          goto LABEL_146;
      }
  }
}
