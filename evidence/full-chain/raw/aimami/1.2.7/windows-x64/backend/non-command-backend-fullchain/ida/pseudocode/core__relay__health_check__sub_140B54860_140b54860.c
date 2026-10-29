// win 1.2.7 | module src/core/relay/health_check.rs | ea 0x140b54860 | name sub_140B54860
// win 1.2.7 | module src/core/relay/health_check.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B54860(__m128i *a1, __m128i *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rsi
  char v15; // r15
  __int64 v16; // r12
  char *v17; // rbx
  __m128i *v18; // rdi
  char v19; // al
  __m128i *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r9
  __m128i *v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rbx
  char *v30; // rax
  __int64 v31; // rcx
  char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  signed __int64 v35; // r15
  __int64 v36; // rdi
  __int8 v37; // di
  char v38; // al
  __int8 v39; // di
  int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // r8
  __int64 v45; // r15
  __int64 v46; // rbx
  __int64 v47; // rsi
  __m128i *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rdx
  const __m128i *v51; // r13
  __m128i *v52; // rax
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 *v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 (__fastcall *v62)(); // rax
  __int64 v63; // rcx
  __m128i *v64; // rax
  __int64 v65; // rcx
  _DWORD *v66; // rax
  __int64 v67; // rcx
  __m128i *v68; // rax
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r8
  __m128i *v76; // rax
  int v77; // r9d
  __m128i v78; // xmm1
  __m128i v79; // xmm1
  __m128i v80; // xmm2
  __m128i v81; // xmm3
  __int64 v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rbx
  __int64 v87; // rcx
  __int64 v88; // r12
  __int64 v89; // rsi
  __int64 v90; // rcx
  signed __int64 v91; // r14
  __int64 v92; // rbx
  const __m128i *v93; // rdi
  __m128i *v94; // rax
  __int64 v95; // r15
  void (__fastcall *v96)(__int64, __m512i *); // rax
  char *v97; // rbx
  __m128i *v98; // rdi
  __int64 v99; // rax
  __m128i *v100; // rcx
  int v101; // edx
  volatile signed __int64 *v102; // rdx
  const __m128i *v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // rdi
  __int16 v106; // r14
  const __m128i *v107; // rbx
  __m128i *v108; // rax
  __m128i *v109; // rdi
  __int64 v110; // rax
  __m128i *v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rdi
  __int64 v114; // rbx
  __m128i v115; // xmm6
  __int64 v116; // rcx
  __int64 v117; // rdx
  __m128i *v118; // r14
  __int64 v119; // rsi
  __m128i *v120; // rcx
  __m128i v121; // xmm1
  __m128i v122; // xmm2
  __m128i v123; // xmm3
  __int16 v124; // di
  __int64 v125; // rbx
  __m128i *v126; // r15
  __int64 v127; // r14
  char *v128; // r12
  __int64 v129; // rax
  unsigned int v130; // edx
  void (__fastcall *v131)(__int64, __m512i *); // rax
  const __m128i *v132; // rdx
  __m128i *v133; // rcx
  char *v134; // r14
  __m128i *v135; // rbx
  __int64 v136; // rax
  __m128i *v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rax
  unsigned int v142; // edx
  __int64 v143; // r8
  __m128i *v144; // rcx
  __m128i *v145; // rdi
  char *v146; // r14
  __int64 v147; // rsi
  __int64 v148; // rax
  unsigned int v149; // edx
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  const __m128i *v154; // rbx
  unsigned __int64 v155; // rdi
  __int64 v156; // r14
  __int64 v157; // r15
  __m128i *v158; // rcx
  char result; // al
  _QWORD *v160; // rdi
  __m128i *v161; // rbx
  __int64 v162; // rdx
  __m128i *v163; // rbx
  __int64 v164; // rdx
  __m128i *v165; // rcx
  __int64 v166; // rdi
  __int64 v167; // rbx
  __int64 v168; // rsi
  __int64 v169; // r15
  __int128 v170; // kr60_16
  __int64 v171; // rdi
  __int64 v172; // rcx
  __int64 v173; // r14
  void (__fastcall *v174)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v175; // rdi
  __int64 v176; // rsi
  __int64 v177; // r8
  __m128i *v178; // r12
  __m128i *v179; // rbx
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // r9
  __int64 v183; // r15
  bool v184; // sf
  __int64 v185; // rax
  unsigned int v186; // edx
  unsigned __int64 v187; // rdx
  __m128i *v188; // rax
  __int64 v189; // rcx
  __int64 v190; // rax
  void (__fastcall *v191)(__int64, __m512i *); // rax
  __int64 v192; // rcx
  __int64 v193; // rax
  void (__fastcall *v194)(__int64, __m512i *, __int64); // rax
  unsigned __int128 v195; // rax
  bool v196; // zf
  __int64 v197; // rbx
  _QWORD *v198; // r8
  __int64 v199; // rdx
  __m128i v200; // xmm0
  __m128i v201; // xmm1
  __m128i v202; // xmm2
  __m128i v203; // xmm3
  __m128i v204; // xmm4
  __m128i v205; // xmm5
  __m128i v206; // xmm6
  __m128i *v207; // rax
  __int64 *v208; // rdi
  __int64 *v209; // rdi
  char v210; // si
  __int64 v211; // rax
  unsigned int v212; // edx
  unsigned __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 v216; // r8
  void (__fastcall *v217)(__int64, __m512i *); // rax
  __m128i *v218; // rbx
  __int64 v219; // rcx
  const __m128i *v220; // r14
  unsigned __int64 v221; // rbx
  __int64 v222; // r15
  __int64 v223; // r12
  __int64 v224; // rax
  __int64 v225; // rdx
  void (__fastcall *v226)(unsigned __int64 *, __int64, __int64); // rax
  __int64 v227; // rdx
  __int64 v228; // rdx
  __int64 v229; // rdx
  __int64 v230; // rdx
  _QWORD v231[3]; // [rsp+58h] [rbp-28h] BYREF
  __m128i v232; // [rsp+70h] [rbp-10h] BYREF
  __m256i v233; // [rsp+80h] [rbp+0h] BYREF
  __m128i v234; // [rsp+A0h] [rbp+20h]
  __m128i v235; // [rsp+B0h] [rbp+30h]
  __m128i v236; // [rsp+C0h] [rbp+40h]
  __m128i v237[2]; // [rsp+D0h] [rbp+50h] BYREF
  __int64 *v238; // [rsp+F0h] [rbp+70h]
  __m128i v239; // [rsp+190h] [rbp+110h] BYREF
  __int64 v240; // [rsp+1A0h] [rbp+120h]
  __m128i *v241; // [rsp+1A8h] [rbp+128h]
  _BYTE v242[40]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v243; // [rsp+1D8h] [rbp+158h]
  __int128 v244; // [rsp+1E0h] [rbp+160h]
  __int64 v245; // [rsp+1F0h] [rbp+170h]
  __int64 v246; // [rsp+1F8h] [rbp+178h]
  __int64 v247; // [rsp+200h] [rbp+180h]
  __int16 v248; // [rsp+208h] [rbp+188h]
  __int128 v249; // [rsp+210h] [rbp+190h] BYREF
  __int64 v250; // [rsp+220h] [rbp+1A0h]
  __int64 *v251; // [rsp+228h] [rbp+1A8h]
  __m256i v252; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i v253; // [rsp+250h] [rbp+1D0h]
  __m128i v254; // [rsp+260h] [rbp+1E0h]
  __m128i v255; // [rsp+270h] [rbp+1F0h]
  __m128i v256; // [rsp+280h] [rbp+200h] BYREF
  __int64 v257; // [rsp+290h] [rbp+210h]
  __int64 v258; // [rsp+298h] [rbp+218h] BYREF
  __int64 (__fastcall *v259)(); // [rsp+2A0h] [rbp+220h]
  __int64 v260; // [rsp+2A8h] [rbp+228h]
  __m512i v261; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v262; // [rsp+2F0h] [rbp+270h]
  __m128i v263; // [rsp+300h] [rbp+280h]
  __m128i v264; // [rsp+310h] [rbp+290h]
  __m128i v265; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v266; // [rsp+330h] [rbp+2B0h]
  __m256i v267; // [rsp+3C0h] [rbp+340h] BYREF
  __m128i *v268; // [rsp+3E8h] [rbp+368h]
  char *v269; // [rsp+3F0h] [rbp+370h]
  __int64 v270; // [rsp+3F8h] [rbp+378h]
  __int64 v271; // [rsp+400h] [rbp+380h]
  __int64 v272; // [rsp+408h] [rbp+388h]
  __m128i *v273; // [rsp+410h] [rbp+390h]
  char *v274; // [rsp+418h] [rbp+398h]
  __m128i *v275; // [rsp+420h] [rbp+3A0h]
  char *v276; // [rsp+428h] [rbp+3A8h]
  __m128i *v277; // [rsp+430h] [rbp+3B0h]
  char *v278; // [rsp+438h] [rbp+3B8h]
  char v279; // [rsp+447h] [rbp+3C7h]
  __int64 *v280; // [rsp+448h] [rbp+3C8h]
  char v281; // [rsp+455h] [rbp+3D5h]
  char v282; // [rsp+456h] [rbp+3D6h]
  char v283; // [rsp+457h] [rbp+3D7h]
  __int64 v284; // [rsp+458h] [rbp+3D8h]
  __m128i *v285; // [rsp+460h] [rbp+3E0h]
  __int64 m128i_i64; // [rsp+468h] [rbp+3E8h]
  char *v287; // [rsp+470h] [rbp+3F0h]
  __m128i *v288; // [rsp+478h] [rbp+3F8h]
  char v289; // [rsp+487h] [rbp+407h]
  __int64 v290; // [rsp+488h] [rbp+408h]

  v290 = -2;
  v241 = a1;
  v5 = a2[46].m128i_u8[8];
  v288 = a2;
  v270 = a3;
  switch ( v5 )
  {
    case 0LL:
      v6 = a2->m128i_i64[0];
      v7 = a2->m128i_i64[1];
      v8 = a2[1].m128i_i64[0];
      a2[1].m128i_i64[1] = v7;
      a2[2].m128i_i64[0] = v8;
      sub_140FED540(v242, &unk_1421E05F0, 1000000000, *(unsigned __int8 *)(v6 + 253));
      if ( *(_QWORD *)v242 != -1 )
      {
        v252.m256i_i64[2] = *(_QWORD *)&v242[16];
        *(__m128i *)v252.m256i_i8 = _mm_loadu_si128((const __m128i *)v242);
        v9 = v288[1].m128i_i64[1];
        v10 = v288[2].m128i_i64[0];
        sub_1416AC440(&v233, &v252);
        v261.m512i_i64[5] = v233.m256i_i64[2];
        *(__m128i *)&v261.m512i_u64[3] = _mm_loadu_si128((const __m128i *)&v233);
        v261.m512i_i16[0] = 4;
        *(_OWORD *)&v261.m512i_u64[1] = -1;
        (*(void (__fastcall **)(__int64, __m512i *))(v10 + 40))(v9, &v261);
        v11 = v252.m256i_i64[0];
        v232 = _mm_loadu_si128((const __m128i *)&v242[8]);
        v3 = -1;
        v12 = 8;
        goto LABEL_4;
      }
      v26 = v288;
      v27 = (__int64)&v288[2].m128i_i64[1];
      v288[2].m128i_i64[1] = *(_QWORD *)&v242[8];
      v28 = *(unsigned __int8 *)(v6 + 254);
      m128i_i64 = v27;
      if ( v28 )
      {
        if ( v28 == 2 )
        {
          v284 = v8;
          v29 = v7;
          nullsub_1(v26);
          v30 = (char *)sub_140001650(12, 1);
          if ( !v30 )
            sub_141938D2B(1, 12);
          v32 = v30;
          qmemcpy(v30, "/v1/messages", 12);
          v239.m128i_i64[0] = 0;
          v240 = 0;
          nullsub_1(v31);
          v33 = sub_140001650(5, 1);
          v287 = v32;
          if ( !v33 )
            sub_141938D2B(1, 5);
          *(_BYTE *)(v33 + 4) = 108;
          *(_DWORD *)v33 = 1701080941;
          v252.m256i_i64[0] = 5;
          v252.m256i_i64[1] = v33;
          v252.m256i_i64[2] = 5;
          v35 = *(_QWORD *)(v6 + 112);
          if ( v35 < 0 )
          {
            v36 = 0;
            goto LABEL_13;
          }
          if ( v35 )
          {
            v51 = *(const __m128i **)(v6 + 104);
            nullsub_1(v34);
            v36 = 1;
            v52 = (__m128i *)sub_140001650(v35, 1);
            if ( !v52 )
            {
LABEL_13:
              v279 = 1;
              sub_141938D2B(v36, v35);
            }
            v53 = (__int64)v52;
            sub_1418F44E0(v52, v51, v35);
          }
          else
          {
            v53 = 1;
          }
          v261.m512i_i8[0] = 3;
          v261.m512i_i64[1] = v35;
          v261.m512i_i64[2] = v53;
          v261.m512i_i64[3] = v35;
          v279 = 0;
          sub_140E72AA0(&v233, &v239, &v252, &v261);
          v7 = v29;
          v8 = v284;
          if ( v233.m256i_i8[0] != -1 )
            sub_14002F9D0(&v233);
          nullsub_1(v57);
          v58 = (_QWORD *)sub_140001650(8, 1);
          if ( !v58 )
            sub_141938D2B(1, 8);
          *v58 = 0x736567617373656DLL;
          v231[0] = 8;
          v231[1] = v58;
          v231[2] = 8;
          nullsub_1(0x736567617373656DLL);
          v59 = sub_140001650(32, 8);
          if ( !v59 )
          {
            v283 = 1;
            sub_141938D11(8, 32);
          }
          v61 = v59;
          *(_QWORD *)&v249 = 0;
          v250 = 0;
          nullsub_1(v60);
          v62 = (__int64 (__fastcall *)())sub_140001650(4, 1);
          v280 = (__int64 *)v61;
          if ( !v62 )
            sub_141938D2B(1, 4);
          *(_DWORD *)v62 = 1701605234;
          v258 = 4;
          v259 = v62;
          v260 = 4;
          nullsub_1(v63);
          v64 = (__m128i *)sub_140001650(4, 1);
          v285 = v64;
          if ( !v64 )
            sub_141938D2B(1, 4);
          v64->m128i_i32[0] = 1919251317;
          v261.m512i_i8[0] = 3;
          v261.m512i_i64[1] = 4;
          v261.m512i_i64[2] = (__int64)v64;
          v261.m512i_i64[3] = 4;
          sub_140E72AA0(&v233, &v249, &v258, &v261);
          if ( v233.m256i_i8[0] != -1 )
            sub_14002F9D0(&v233);
          nullsub_1(v65);
          v66 = (_DWORD *)sub_140001650(7, 1);
          if ( !v66 )
            sub_141938D2B(1, 7);
          *(_DWORD *)((char *)v66 + 3) = 1953391988;
          *v66 = 1953394531;
          v258 = 7;
          v259 = (__int64 (__fastcall *)())v66;
          v260 = 7;
          nullsub_1(v67);
          v68 = (__m128i *)sub_140001650(2, 1);
          v285 = v68;
          if ( !v68 )
            sub_141938D2B(1, 2);
          v68->m128i_i16[0] = 26984;
          v261.m512i_i8[0] = 3;
          v261.m512i_i64[1] = 2;
          v261.m512i_i64[2] = (__int64)v68;
          v261.m512i_i64[3] = 2;
          sub_140E72AA0(&v233, &v249, &v258, &v261);
          if ( v233.m256i_i8[0] != -1 )
            sub_14002F9D0(&v233);
          *(_OWORD *)((char *)&v267.m256i_u32[1] + 3) = v249;
          *(__int64 *)((char *)&v267.m256i_i64[2] + 7) = v250;
          v69 = (__int64)v280;
          *(_BYTE *)v280 = 5;
          v70 = _mm_loadu_si128((const __m128i *)&v267);
          *(_OWORD *)(v69 + 16) = *(_OWORD *)((char *)&v267.m256i_u64[1] + 7);
          *(__m128i *)(v69 + 1) = v70;
          v252.m256i_i64[1] = 1;
          v252.m256i_i64[2] = v69;
          v252.m256i_i64[3] = 1;
          v252.m256i_i8[0] = 4;
          v283 = 0;
          sub_140E72AA0(&v261, &v239, v231, &v252);
          if ( v261.m512i_i8[0] != -1 )
            sub_14002F9D0(&v261);
          nullsub_1(v71);
          v72 = (void *)sub_140001650(10, 1);
          if ( !v72 )
            sub_141938D2B(1, 10);
          qmemcpy(v72, "max_tokens", 10);
          v252.m256i_i64[0] = 10;
          v252.m256i_i64[1] = (__int64)v72;
          v252.m256i_i64[2] = 10;
          v261.m512i_i8[0] = 2;
          v261.m512i_i64[1] = 0;
          v261.m512i_i64[2] = 16;
          sub_140E72AA0(&v233, &v239, &v252, &v261);
          if ( v233.m256i_i8[0] != -1 )
            sub_14002F9D0(&v233);
          nullsub_1(v73);
          v74 = sub_140001650(6, 1);
          if ( !v74 )
            sub_141938D2B(1, 6);
          *(_WORD *)(v74 + 4) = 28001;
          *(_DWORD *)v74 = 1701999731;
          v252.m256i_i64[0] = 6;
          v252.m256i_i64[1] = v74;
          v252.m256i_i64[2] = 6;
          v261.m512i_i16[0] = 257;
          sub_140E72AA0(&v233, &v239, &v252, &v261);
          if ( v233.m256i_i8[0] != -1 )
            sub_14002F9D0(&v233);
          *(__m128i *)&v242[8] = _mm_loadu_si128(&v239);
          *(_QWORD *)&v242[24] = v240;
          v242[0] = 5;
          LOBYTE(v4) = 1;
          LOBYTE(v75) = 1;
          sub_140DAA0F0(&v261, v6, v75);
          v267 = *(__m256i *)v242;
          v233 = *(__m256i *)v261.m512i_i8;
          v234 = *(__m128i *)&v261.m512i_u64[4];
          v235 = *(__m128i *)&v261.m512i_u64[6];
          v236 = v262;
          v237[0] = v263;
          v41 = 12;
          v42 = 12;
        }
        else
        {
          nullsub_1(v26);
          v43 = (void *)sub_140001650(10, 1);
          if ( !v43 )
            sub_141938D2B(1, 10);
          qmemcpy(v43, "/responses", 10);
          v287 = (char *)v43;
          sub_140DA6960(&v252, *(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112));
          LOBYTE(v4) = 1;
          LOBYTE(v44) = 1;
          sub_140DA99E0(&v261, v6, v44);
          v267 = v252;
          v233 = *(__m256i *)v261.m512i_i8;
          v234 = *(__m128i *)&v261.m512i_u64[4];
          v235 = *(__m128i *)&v261.m512i_u64[6];
          v236 = v262;
          v237[0] = v263;
          v41 = 10;
          v42 = 10;
        }
      }
      else
      {
        v40 = sub_140DAB130(*(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112));
        LOBYTE(v4) = v40 ^ 1;
        sub_140DA76D0((unsigned int)&v261, v40, *(_QWORD *)(v6 + 104), *(_QWORD *)(v6 + 112), v40 ^ 1);
        v287 = (char *)v261.m512i_i64[1];
        v284 = v261.m512i_i64[0];
        v41 = v261.m512i_i64[2];
        *(_OWORD *)&v252.m256i_u64[2] = *(_OWORD *)&v261.m512i_u64[5];
        *(__m128i *)v252.m256i_i8 = _mm_loadu_si128((const __m128i *)&v261.m512i_u64[3]);
        sub_140DA99E0(&v261, v6, v4);
        v267 = v252;
        v233 = *(__m256i *)v261.m512i_i8;
        v234 = *(__m128i *)&v261.m512i_u64[4];
        v235 = *(__m128i *)&v261.m512i_u64[6];
        v236 = v262;
        v237[0] = v263;
        v42 = v284;
      }
      v76 = v288;
      v288[3].m128i_i64[0] = v42;
      v77 = (int)v287;
      v76[3].m128i_i64[1] = (__int64)v287;
      v76[4].m128i_i64[0] = v41;
      v280 = &v76[4].m128i_i64[1];
      v78 = *(__m128i *)&v267.m256i_u64[2];
      *(__m128i *)((char *)v76 + 72) = *(__m128i *)v267.m256i_i8;
      *(__m128i *)((char *)v76 + 88) = v78;
      v284 = (__int64)&v76[6].m128i_i64[1];
      v79 = *(__m128i *)&v233.m256i_u64[2];
      v80 = v234;
      v81 = v235;
      *(__m128i *)((char *)v76 + 104) = *(__m128i *)v233.m256i_i8;
      *(__m128i *)((char *)v76 + 120) = v79;
      *(__m128i *)((char *)v76 + 136) = v80;
      *(__m128i *)((char *)v76 + 152) = v81;
      *(__m128i *)((char *)v76 + 168) = v236;
      *(__m128i *)((char *)v76 + 184) = _mm_load_si128(v237);
      sub_140EF68B0((unsigned int)&v233, *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64), v77, v41, 0);
      if ( v233.m256i_i32[0] == 1 )
      {
        *(_QWORD *)&v242[16] = v233.m256i_i64[3];
        *(__m128i *)v242 = _mm_loadu_si128((const __m128i *)&v233.m256i_u64[1]);
        v82 = v288[1].m128i_i64[1];
        v83 = v288[2].m128i_i64[0];
        sub_1416AC440(&v252, v242);
        v261.m512i_i64[5] = v252.m256i_i64[2];
        *(__m128i *)&v261.m512i_u64[3] = _mm_loadu_si128((const __m128i *)&v252);
        v261.m512i_i16[0] = 4;
        *(_OWORD *)&v261.m512i_u64[1] = -1;
        (*(void (__fastcall **)(__int64, __m512i *))(v83 + 40))(v82, &v261);
        v84 = *(_QWORD *)v242;
        v232 = _mm_loadu_si128((const __m128i *)&v233.m256i_u64[2]);
        sub_1400331B0(v284);
        sub_14002F9D0(v280);
        v85 = v288[3].m128i_i64[0];
        if ( v85 )
          sub_140001660(v288[3].m128i_i64[1], v85, 1);
        v86 = v84;
        v87 = m128i_i64;
        v3 = -1;
        v12 = 8;
        if ( _InterlockedDecrement64(*(volatile signed __int64 **)m128i_i64) )
        {
          v13 = 0;
          v14 = 0;
          v15 = 0;
          v11 = v86;
          goto LABEL_142;
        }
        sub_141242F50(v87);
        v11 = v86;
LABEL_4:
        v13 = 0;
        v14 = 0;
        v15 = 0;
LABEL_142:
        v165 = v241;
        v241->m128i_i64[0] = v13;
        v165->m128i_i64[1] = v12;
        v165[1].m128i_i64[0] = v14;
        v165[1].m128i_i64[1] = v11;
        v165[2] = _mm_load_si128(&v232);
        v165[3].m128i_i64[0] = v3;
        v165[3].m128i_i8[8] = v15;
        result = 1;
        v158 = v288;
        goto LABEL_143;
      }
      v20 = v288;
      v288[13].m128i_i64[1] = v233.m256i_i64[3];
      *(__m128i *)((char *)v20 + 200) = _mm_loadu_si128((const __m128i *)&v233.m256i_u64[1]);
      v19 = *(_BYTE *)(v6 + 254);
      v21 = v20[13].m128i_i64[0];
      v22 = v20[13].m128i_i64[1];
      v23 = *(_QWORD *)(v6 + 104);
      v24 = *(_QWORD *)(v6 + 112);
      v20[17].m128i_i64[0] = v21;
      v20[17].m128i_i64[1] = v22;
      v20[18].m128i_i64[0] = v23;
      v20[18].m128i_i64[1] = v24;
      v20[19].m128i_i64[0] = v7;
      v20[19].m128i_i64[1] = v8;
      v20[28].m128i_i64[1] = m128i_i64;
      v20[29].m128i_i64[0] = (__int64)v280;
      v20[29].m128i_i64[1] = v284;
      v25 = v8;
      v17 = &v20[30].m128i_i8[5];
      v20[30].m128i_i8[5] = 0;
      v20[30].m128i_i8[6] = v19;
      v20[30].m128i_i8[7] = v4;
      v18 = v20 + 14;
LABEL_70:
      v20[30].m128i_i8[4] = 0;
      v20[30].m128i_i8[2] = v19;
      v20[30].m128i_i8[3] = v4;
      v20[14].m128i_i64[0] = v23;
      v20[14].m128i_i64[1] = v24;
      v88 = v7;
      v20[15].m128i_i64[0] = v7;
      v89 = v25;
      v20[15].m128i_i64[1] = v25;
      v269 = v17;
      v268 = v18;
      v272 = v21;
      sub_140EF5FF0(&v261, v21, v22);
      v287 = v17;
      v285 = v18;
      v91 = v288[14].m128i_i64[1];
      if ( v91 < 0 )
      {
        v92 = 0;
        goto LABEL_72;
      }
      if ( v91 )
      {
        v93 = (const __m128i *)v288[14].m128i_i64[0];
        nullsub_1(v90);
        v92 = 1;
        v94 = (__m128i *)sub_140001650(v91, 1);
        if ( !v94 )
LABEL_72:
          sub_141938D2B(v92, v91);
        v95 = (__int64)v94;
        sub_1418F44E0(v94, v93, v91);
      }
      else
      {
        v95 = 1;
      }
      *(__int64 *)((char *)&v233.m256i_i64[2] + 7) = v261.m512i_i64[2];
      *(_OWORD *)((char *)&v233.m256i_u32[1] + 3) = *(_OWORD *)v261.m512i_i8;
      v261.m512i_i8[0] = 0;
      *(__m128i *)&v261.m512i_i8[1] = _mm_loadu_si128((const __m128i *)&v233);
      *(_OWORD *)&v261.m512i_u64[2] = *(_OWORD *)((char *)&v233.m256i_u64[1] + 7);
      v261.m512i_i64[4] = v91;
      v261.m512i_i64[5] = v95;
      v261.m512i_i64[6] = v91;
      v96 = *(void (__fastcall **)(__int64, __m512i *))(v89 + 40);
      v97 = v287;
      v269 = v287;
      v98 = v285;
      v268 = v285;
      v96(v88, &v261);
      v269 = v97;
      v268 = v98;
      v99 = sub_14167FC00();
      v100 = v288;
      v288[16].m128i_i64[0] = v99;
      v100[16].m128i_i32[2] = v101;
      v102 = *(volatile signed __int64 **)m128i_i64;
      v278 = v97;
      v277 = v98;
      sub_140CAF8C0((unsigned int)&v261, (_DWORD)v102, (unsigned int)&unk_141A433A0, v272, v22);
      v16 = v270;
      v103 = (const __m128i *)v284;
      v3 = *(_QWORD *)(v284 + 80);
      v104 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v104) = v3 >> 62 != 0 || 4 * v3 > 0x7FFFFFFFFFFFFFFELL;
      if ( (_BYTE)v104 )
      {
        v105 = 0;
        goto LABEL_80;
      }
      v106 = *(_WORD *)(v284 + 88);
      v271 = 4 * v3;
      m128i_i64 = v3;
      if ( 4 * v3 )
      {
        v107 = *(const __m128i **)(v284 + 72);
        nullsub_1(v104);
        v105 = 2;
        v108 = (__m128i *)sub_140001650(4 * v3, 2);
        if ( !v108 )
        {
LABEL_80:
          v282 = 1;
          sub_141938D2B(v105, 4 * v3);
        }
        v272 = (__int64)v108;
        if ( v3 )
          sub_1418F44E0(v108, v107, 4 * v3);
      }
      else
      {
        v272 = 2;
      }
      sub_1403F0BA0(&v267, &v103[1].m128i_u64[1]);
      sub_1403F09D0(&v233, &v103[3]);
      v248 = v106;
      v246 = v272;
      v247 = m128i_i64;
      *(_OWORD *)&v242[24] = *(_OWORD *)v267.m256i_i8;
      v243 = v267.m256i_i64[2];
      v245 = v233.m256i_i64[2];
      v244 = *(_OWORD *)v233.m256i_i8;
      *(__m128i *)v242 = _mm_loadu_si128(v103);
      *(_QWORD *)&v242[16] = v103[1].m128i_i64[0];
      v282 = 0;
      sub_141259870(&v233, &v261, v242);
      v278 = v287;
      v109 = v285;
      v277 = v285;
      sub_140CB5130(&v261, &v233, v280);
      v278 = v287;
      v277 = v109;
      v110 = sub_1412597A0(&v261);
      v111 = v288;
      v288[30].m128i_i64[1] = v110;
      v111[31].m128i_i64[0] = v112;
      a2 = v111;
LABEL_87:
      sub_14126C5E0(&v261, &a2[30].m128i_u64[1], v16);
      v113 = v261.m512i_i64[0];
      if ( v261.m512i_i64[0] == -2 )
      {
        v38 = 3;
        goto LABEL_129;
      }
      v114 = v261.m512i_i64[1];
      v115 = *(__m128i *)&v261.m512i_u64[2];
      v252 = *(__m256i *)&v261.m512i_u64[4];
      v253 = v262;
      v254 = v263;
      v255 = v264;
      v256 = _mm_loadu_si128(&v265);
      v257 = v266;
      v116 = v288[30].m128i_i64[1];
      v117 = v288[31].m128i_i64[0];
      v278 = v287;
      v118 = v285;
      v277 = v285;
      sub_1407AC3B0(v116, v117);
      if ( (_DWORD)v113 == -1 )
      {
        v278 = v287;
        v277 = v118;
        *(_QWORD *)v242 = sub_14122E700(v114);
        v233.m256i_i64[0] = (__int64)v242;
        v233.m256i_i64[1] = (__int64)sub_14122E940;
        sub_1416ABFD0(&v261, &unk_141A2A7D5, &v233);
        v278 = v287;
        v277 = v285;
        sub_140192750(*(_QWORD *)v242);
        v284 = v261.m512i_i64[1];
        v45 = v261.m512i_i64[0];
        v46 = v261.m512i_i64[2];
        v13 = -1;
        v48 = v288;
        goto LABEL_133;
      }
      v119 = v16;
      v120 = v288;
      v288[30].m128i_i8[4] = 1;
      v120[20].m128i_i64[0] = v113;
      v120[20].m128i_i64[1] = v114;
      v120[21] = v115;
      v120[26] = v255;
      v121 = *(__m128i *)&v252.m256i_u64[2];
      v122 = v253;
      v123 = v254;
      v120[22] = *(__m128i *)v252.m256i_i8;
      v120[23] = v121;
      v120[24] = v122;
      v120[25] = v123;
      v120[27] = _mm_load_si128(&v256);
      v120[28].m128i_i64[0] = v257;
      v124 = v120[26].m128i_i16[4];
      v120[30].m128i_i16[0] = v124;
      v125 = v120[15].m128i_i64[0];
      v126 = v118;
      v127 = v120[15].m128i_i64[1];
      v128 = v287;
      v274 = v287;
      v273 = v126;
      v129 = sub_14167FD50(&v120[16]);
      v261.m512i_i8[0] = 1;
      v261.m512i_i16[1] = v124;
      v261.m512i_i64[1] = 1000 * v129 + v130 / 0xF4240uLL;
      v131 = *(void (__fastcall **)(__int64, __m512i *))(v127 + 40);
      v274 = v128;
      v273 = v126;
      v131(v125, &v261);
      v132 = v288 + 20;
      v133 = v288;
      if ( (unsigned __int16)(v288[30].m128i_i16[0] - 200) > 0x63u )
      {
        v288[30].m128i_i64[1] = (__int64)v132;
        a2 = v133;
        v133[35].m128i_i8[0] = 0;
        v16 = v119;
LABEL_20:
        m128i_i64 = (__int64)&a2[30].m128i_i64[1];
        sub_140B54290((__int64)&v261, &a2[30].m128i_i64[1], v16);
        v39 = v261.m512i_i8[0];
        if ( v261.m512i_i64[0] == 2 )
        {
          v38 = 4;
          goto LABEL_129;
        }
        v45 = v261.m512i_i64[1];
        v46 = v261.m512i_i64[3];
        v47 = v261.m512i_i64[2];
        v48 = v288;
        if ( v288[35].m128i_i8[0] == 3 )
        {
          v49 = v288[31].m128i_i64[1];
          if ( v49 )
            sub_140001660(v288[32].m128i_i64[0], v49, 1);
        }
        v13 = -1;
        if ( (v39 & 1) != 0 )
        {
          v284 = v47;
        }
        else
        {
          m128i_i64 = v45;
          v280 = (__int64 *)v47;
          sub_1416A9D40(v242, v47, v46);
          v54 = v288[30].m128i_u16[0];
          v270 = *(_QWORD *)&v242[8];
          sub_140DAAF30(&v261, v54, *(_QWORD *)&v242[8], *(_QWORD *)&v242[16]);
          v45 = v261.m512i_i64[0];
          if ( v261.m512i_i64[0] == -1 )
          {
            v267.m256i_i16[0] = v288[30].m128i_i16[0];
            v261.m512i_i64[0] = (__int64)&v267;
            v261.m512i_i64[1] = (__int64)sub_1416BB1E0;
            sub_1416ABFD0(&v233, &unk_141A2A834, &v261);
            v45 = v233.m256i_i64[0];
          }
          else
          {
            *(__m128i *)&v233.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v261.m512i_u64[1]);
          }
          v46 = v233.m256i_i64[2];
          v284 = v233.m256i_i64[1];
          v147 = m128i_i64;
          if ( *(__int64 *)v242 > 0 )
            sub_140001660(v270, *(_QWORD *)v242, 1);
          v48 = v288;
          if ( v147 )
            sub_140001660(v280, v147, 1);
        }
LABEL_100:
        if ( !v48[30].m128i_i8[4] )
          goto LABEL_133;
        goto LABEL_130;
      }
      if ( v288[30].m128i_i8[3] )
      {
        v288[30].m128i_i8[4] = 0;
        sub_1418F44E0((__m128i *)&v261, v132, 0x88u);
        v134 = v287;
        v274 = v287;
        v135 = v285;
        v273 = v285;
        v136 = sub_1410D5D80(&v261);
        v137 = v288;
        v288[38].m128i_i64[1] = v136;
        v137[39].m128i_i64[0] = v138;
        v137[46].m128i_i8[3] = v137[30].m128i_i8[2];
        v137[40].m128i_i64[1] = 0;
        v137[41].m128i_i64[0] = 1;
        *(__m128i *)((char *)&v137[41] + 8) = 0;
        v137[42].m128i_i64[1] = 1;
        v137[43] = 0;
        v137[44].m128i_i64[0] = 1;
        v137[44].m128i_i64[1] = 0;
        v137[46].m128i_i16[0] = 256;
        v137[46].m128i_i8[2] = 0;
        v137[45] = 0;
        v137[30].m128i_i64[1] = -1;
        v276 = v134;
        v275 = v135;
        v139 = sub_141514620();
        v16 = v119;
        v276 = v287;
        v275 = v285;
        v141 = sub_141514FC0(v139, v140, 12, 0);
        v143 = v142;
        v144 = v288;
        v288[39].m128i_i64[1] = v141;
        v144[40].m128i_i32[0] = v142;
        v145 = v285;
        v146 = v287;
        while ( 1 )
        {
          v287 = v146;
          v276 = v146;
          v285 = v145;
          v275 = v145;
          sub_141514110(&v261, v141, v143, &off_141A461A0);
          a2 = v288;
          v200 = _mm_loadu_si128((const __m128i *)&v261);
          v201 = *(__m128i *)&v261.m512i_u64[2];
          v202 = *(__m128i *)&v261.m512i_u64[4];
          v203 = *(__m128i *)&v261.m512i_u64[6];
          *(__m128i *)v233.m256i_i8 = v200;
          *(_OWORD *)&v233.m256i_u64[2] = *(_OWORD *)&v261.m512i_u64[2];
          v234 = *(__m128i *)&v261.m512i_u64[4];
          v235 = *(__m128i *)&v261.m512i_u64[6];
          v204 = v262;
          v236 = v262;
          v205 = v263;
          v237[0] = v263;
          v206 = v264;
          v237[1] = v264;
          v238 = &v288[38].m128i_i64[1];
          v288[38].m128i_i64[0] = (__int64)&v288[38].m128i_i64[1];
          a2[37] = v206;
          a2[36] = v205;
          a2[35] = v204;
          a2[34] = v203;
          a2[33] = v202;
          a2[32] = v201;
          a2[31] = v200;
LABEL_146:
          m128i_i64 = (__int64)a2[31].m128i_i64;
          sub_140DD9550(&v261, &a2[31], v16);
          v168 = v261.m512i_i64[0];
          if ( v261.m512i_i64[0] == -1 )
          {
            v38 = 6;
            goto LABEL_129;
          }
          v169 = v261.m512i_i64[1];
          v170 = *(_OWORD *)&v261.m512i_u64[2];
          v171 = v261.m512i_i64[4];
          v276 = v287;
          v275 = v285;
          sub_14040CAE0(m128i_i64);
          if ( (_DWORD)v168 == 2 )
            break;
          *(_QWORD *)v242 = v168;
          *(_QWORD *)&v242[8] = v169;
          *(_OWORD *)&v242[16] = v170;
          *(_QWORD *)&v242[32] = v171;
          v272 = v168;
          if ( v168 == 1 )
          {
            if ( !v169 )
            {
              v289 = 0;
              *(_QWORD *)&v249 = sub_14122E700(v170);
              v258 = (__int64)&v249;
              v259 = sub_14122E940;
              sub_1416ABFD0(&v267, &unk_141A2A81D, &v258);
              v289 = 0;
              sub_140192750(v249);
              v173 = v267.m256i_i64[1];
              v45 = v267.m256i_i64[0];
              v46 = v267.m256i_i64[2];
LABEL_187:
              v208 = (__int64 *)v288;
              goto LABEL_188;
            }
            v261.m512i_i64[0] = v169;
            *(_OWORD *)&v261.m512i_u64[1] = v170;
            v261.m512i_i64[3] = v171;
            sub_140FE4DA0(&v233, &v288[40].m128i_u64[1], v170, *((_QWORD *)&v170 + 1));
            v45 = v233.m256i_i64[1];
            v46 = v233.m256i_i64[3];
            v173 = v233.m256i_i64[2];
            if ( v233.m256i_i8[0] )
            {
              v226 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v261.m512i_i64[0] + 32);
              v289 = 0;
              v226(&v261.m512i_u64[3], v261.m512i_i64[1], v261.m512i_i64[2]);
              goto LABEL_187;
            }
            v174 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v261.m512i_i64[0] + 32);
            v289 = 0;
            v174(&v261.m512i_u64[3], v261.m512i_i64[1], v261.m512i_i64[2]);
          }
          else
          {
            v289 = 1;
            sub_140FE5050(&v261, &v288[40].m128i_u64[1]);
            v45 = v261.m512i_i64[1];
            v46 = v261.m512i_i64[3];
            v173 = v261.m512i_i64[2];
            if ( v261.m512i_i32[0] == 1 )
              goto LABEL_187;
          }
          LOBYTE(v271) = v168 ^ 1;
          v175 = v173 + 24 * v46;
          v233.m256i_i64[0] = v173;
          v233.m256i_i64[1] = v173;
          v233.m256i_i64[2] = v45;
          v233.m256i_i64[3] = v175;
          v176 = v173;
          v177 = v173;
          v178 = v288;
          if ( v46 )
          {
            v3 = v45;
            v179 = v288 + 16;
            v180 = v173 + 24;
            do
            {
              v177 = v180;
              v181 = *(_QWORD *)(v180 - 24);
              if ( v181 == -1 )
                break;
              v182 = *(_QWORD *)(v180 - 16);
              m128i_i64 = v180;
              v183 = *(_QWORD *)(v180 - 8);
              v184 = v178[30].m128i_i64[1] < 0;
              v284 = v181;
              v280 = (__int64 *)v182;
              if ( v184 )
              {
                v281 = 0;
                v185 = sub_14167FD50(v179);
                v187 = 1000 * v185 + v186 / 0xF4240uLL;
                v188 = v288;
                v288[30].m128i_i64[1] = v187;
                v189 = v188[15].m128i_i64[0];
                v190 = v188[15].m128i_i64[1];
                v261.m512i_i8[0] = 2;
                v261.m512i_i64[1] = v187;
                v191 = *(void (__fastcall **)(__int64, __m512i *))(v190 + 40);
                v281 = 0;
                v191(v189, &v261);
                v178 = v288;
                v181 = v284;
                v182 = (__int64)v280;
              }
              v192 = v178[15].m128i_i64[0];
              v193 = v178[15].m128i_i64[1];
              v261.m512i_i8[0] = 3;
              v261.m512i_i64[1] = v181;
              v261.m512i_i64[2] = v182;
              v261.m512i_i64[3] = v183;
              v194 = *(void (__fastcall **)(__int64, __m512i *, __int64))(v193 + 40);
              v281 = 1;
              v194(v192, &v261, v177);
              v177 = m128i_i64;
              v180 = m128i_i64 + 24;
              v178 = v288;
            }
            while ( m128i_i64 != v175 );
            v233.m256i_i64[1] = v177;
            v45 = v3;
          }
          v195 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v175 - v177);
          v196 = v175 == v177;
          v145 = v285;
          v146 = v287;
          if ( !v196 )
          {
            v197 = *((_QWORD *)&v195 + 1) >> 4;
            v198 = (_QWORD *)(v177 + 8);
            do
            {
              v199 = *(v198 - 1);
              if ( v199 )
              {
                v3 = (unsigned __int64)v198;
                sub_140001660(*v198, v199, 1);
                v198 = (_QWORD *)v3;
              }
              v198 += 3;
              --v197;
            }
            while ( v197 );
          }
          if ( v45 )
            sub_140001660(v176, 24 * v45, 8);
          if ( v178[46].m128i_i8[2] )
          {
            v209 = &v178[40].m128i_i64[1];
            v210 = v271 & 1;
            v289 = v271 & 1;
            sub_140FE5050(&v261, &v178[40].m128i_u64[1]);
            v45 = v261.m512i_i64[1];
            v46 = v261.m512i_i64[3];
            v173 = v261.m512i_i64[2];
            if ( !v261.m512i_i8[0] )
            {
              LOBYTE(v271) = v210;
              v284 = v261.m512i_i64[2];
              v233.m256i_i64[0] = v261.m512i_i64[1];
              *(_OWORD *)&v233.m256i_u64[1] = *(_OWORD *)&v261.m512i_u64[2];
              m128i_i64 = v261.m512i_i64[1];
              sub_1403FAE40(&v233);
              if ( m128i_i64 )
                sub_140001660(v284, 24 * m128i_i64, 8);
              v276 = v287;
              v275 = v285;
              v211 = sub_14167FD50(&v288[16]);
              v213 = 1000 * v211 + v212 / 0xF4240uLL;
              v214 = v288[15].m128i_i64[0];
              v215 = v288[15].m128i_i64[1];
              v216 = v288[30].m128i_i64[1];
              v261.m512i_i16[0] = 260;
              v261.m512i_i64[1] = v216;
              v261.m512i_i64[2] = v213;
              v261.m512i_i64[3] = -1;
              v217 = *(void (__fastcall **)(__int64, __m512i *))(v215 + 40);
              v276 = v287;
              v275 = v285;
              v217(v214, &v261);
              v218 = v288;
              v3 = v288[30].m128i_u64[1];
              nullsub_1(v219);
              m128i_i64 = sub_140001650(24, 8);
              if ( !m128i_i64 )
              {
                v276 = v287;
                v275 = v285;
                sub_141938D11(8, 24);
              }
              v220 = (const __m128i *)v218[14].m128i_i64[0];
              v221 = v218[14].m128i_u64[1];
              sub_14072C410((unsigned int)&v261, v221, 0, 1, 1);
              v222 = v261.m512i_i64[1];
              if ( v261.m512i_i32[0] == 1 )
                sub_141938D2B(v261.m512i_i64[1], v261.m512i_i64[2]);
              v223 = v261.m512i_i64[2];
              if ( v221 )
                sub_1418F44E0((__m128i *)v261.m512i_i64[2], v220, v221);
              v224 = m128i_i64;
              *(_QWORD *)m128i_i64 = v222;
              v45 = v224;
              *(_QWORD *)(v224 + 8) = v223;
              *(_QWORD *)(v224 + 16) = v221;
              sub_140195490(v209);
              v284 = v288[38].m128i_i64[1];
              v280 = (__int64 *)v288[39].m128i_i64[0];
              if ( *v280 )
                ((void (__fastcall *)(__int64))*v280)(v284);
              v225 = v280[1];
              v46 = -1;
              v13 = 1;
              if ( v225 )
                sub_140001660(v284, v225, v280[2]);
              v284 = 1;
              v48 = v288;
              goto LABEL_133;
            }
            goto LABEL_187;
          }
          v141 = v178[39].m128i_i64[1];
          v143 = v178[40].m128i_u32[0];
          v16 = v270;
        }
        nullsub_1(v172);
        v45 = 53;
        v207 = (__m128i *)sub_140001650(53, 1);
        v208 = (__int64 *)v288;
        if ( !v207 )
        {
          v276 = v287;
          v275 = v285;
          sub_141938D2B(1, 53);
        }
        v173 = (__int64)v207;
        qmemcpy(&v207[1], "ed out before usable output completed", 37);
        *v207 = _mm_loadu_si128((const __m128i *)&xmmword_141A2A7E8);
        v46 = 53;
LABEL_188:
        v227 = v208[81];
        if ( v227 )
          sub_140001660(v208[82], v227, 1);
        v228 = v208[84];
        if ( v228 )
          sub_140001660(v208[85], v228, 1);
        v229 = v208[87];
        if ( v229 )
          sub_140001660(v208[88], v229, 1);
        m128i_i64 = v208[77];
        v280 = (__int64 *)v208[78];
        if ( *v280 )
          ((void (__fastcall *)(__int64))*v280)(m128i_i64);
        v284 = v173;
        v230 = v280[1];
        v13 = -1;
        if ( v230 )
          sub_140001660(m128i_i64, v230, v280[2]);
        v48 = v288;
        if ( v288[30].m128i_i8[4] )
          goto LABEL_130;
        goto LABEL_133;
      }
      v288[30].m128i_i64[1] = (__int64)v132;
      a2 = v133;
      v133[35].m128i_i8[0] = 0;
      v16 = v119;
LABEL_16:
      m128i_i64 = (__int64)&a2[30].m128i_i64[1];
      sub_140B54290((__int64)&v261, &a2[30].m128i_i64[1], v16);
      v37 = v261.m512i_i8[0];
      if ( v261.m512i_i64[0] != 2 )
      {
        v45 = v261.m512i_i64[1];
        v46 = v261.m512i_i64[3];
        v284 = v261.m512i_i64[2];
        v48 = v288;
        if ( v288[35].m128i_i8[0] == 3 )
        {
          v50 = v288[31].m128i_i64[1];
          if ( v50 )
            sub_140001660(v288[32].m128i_i64[0], v50, 1);
        }
        if ( (v37 & 1) == 0 )
        {
          m128i_i64 = v45;
          sub_1410426A0(&v261, v284, v46);
          v55 = (__int64 *)v261.m512i_i64[0];
          if ( v261.m512i_i64[0] == -1 )
          {
            v148 = sub_14167FD50(&v288[16]);
            v3 = 1000 * v148 + v149 / 0xF4240uLL;
            v150 = v288[15].m128i_i64[0];
            v151 = v288[15].m128i_i64[1];
            v261.m512i_i16[0] = 260;
            v261.m512i_i64[1] = v3;
            v261.m512i_i64[2] = v3;
            v261.m512i_i64[3] = -1;
            (*(void (__fastcall **)(__int64, __m512i *))(v151 + 40))(v150, &v261);
            nullsub_1(v152);
            v153 = sub_140001650(24, 8);
            if ( !v153 )
              sub_141938D11(8, 24);
            v55 = (__int64 *)v153;
            v48 = v288;
            v154 = (const __m128i *)v288[14].m128i_i64[0];
            v155 = v288[14].m128i_u64[1];
            sub_14072C410((unsigned int)&v261, v155, 0, 1, 1);
            v156 = v261.m512i_i64[1];
            if ( v261.m512i_i32[0] == 1 )
            {
              v280 = v55;
              sub_141938D2B(v261.m512i_i64[1], v261.m512i_i64[2]);
            }
            v157 = v261.m512i_i64[2];
            if ( v155 )
              sub_1418F44E0((__m128i *)v261.m512i_i64[2], v154, v155);
            *v55 = v156;
            v55[1] = v157;
            v55[2] = v155;
            v46 = -1;
            v13 = 1;
            v56 = 1;
          }
          else
          {
            v46 = v261.m512i_i64[2];
            v56 = v261.m512i_i64[1];
            v13 = -1;
            v48 = v288;
          }
          if ( m128i_i64 )
            sub_140001660(v284, m128i_i64, 1);
          v45 = (__int64)v55;
          v284 = v56;
          if ( v48[30].m128i_i8[4] )
          {
LABEL_130:
            sub_140757C80(&v48[20]);
            v48 = v288;
            v160 = (_QWORD *)v288[28].m128i_i64[0];
            if ( *v160 )
              sub_140001660(v160[1], *v160, 1);
            sub_140001660(v160, 88, 8);
          }
LABEL_133:
          m128i_i64 = v45;
          v48[30].m128i_i16[2] = 256;
          sub_140A3A290(v285);
          v15 = 1;
          v14 = v284;
          if ( (_DWORD)v13 == -1 )
          {
            v252.m256i_i64[0] = m128i_i64;
            v252.m256i_i64[1] = v284;
            v252.m256i_i64[2] = v46;
            v166 = v288[1].m128i_i64[1];
            v167 = v288[2].m128i_i64[0];
            sub_1416AC440(&v233, &v252);
            v261.m512i_i64[5] = v233.m256i_i64[2];
            *(__m128i *)&v261.m512i_u64[3] = _mm_loadu_si128((const __m128i *)&v233);
            v261.m512i_i16[0] = 4;
            *(_OWORD *)&v261.m512i_u64[1] = -1;
            (*(void (__fastcall **)(__int64, __m512i *))(v167 + 40))(v166, &v261);
            v232 = _mm_loadu_si128((const __m128i *)&v252.m256i_u64[1]);
            v3 = -1;
            v12 = 8;
            v13 = 0;
            v14 = 0;
            v15 = 0;
            v161 = v288;
            v162 = v288[12].m128i_i64[1];
            if ( !v162 )
              goto LABEL_136;
          }
          else
          {
            v12 = m128i_i64;
            m128i_i64 = v46;
            v161 = v288;
            v162 = v288[12].m128i_i64[1];
            if ( !v162 )
            {
LABEL_136:
              sub_1400331B0(&v161[6].m128i_u64[1]);
              sub_14002F9D0(&v288[4].m128i_u64[1]);
              v163 = v288;
              v164 = v288[3].m128i_i64[0];
              if ( v164 )
                sub_140001660(v288[3].m128i_i64[1], v164, 1);
              if ( !_InterlockedDecrement64((volatile signed __int64 *)v163[2].m128i_i64[1]) )
                sub_141242F50(&v163[2].m128i_u64[1]);
              v11 = m128i_i64;
              goto LABEL_142;
            }
          }
          sub_140001660(v161[13].m128i_i64[0], v162, 1);
          goto LABEL_136;
        }
        v13 = -1;
        goto LABEL_100;
      }
      v38 = 5;
LABEL_129:
      v158 = v288;
      *v287 = v38;
      v241->m128i_i64[0] = -1;
      result = 3;
LABEL_143:
      v158[46].m128i_i8[8] = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A2BE60);
    case 2LL:
      sub_141939400(&off_141A2BE60);
    case 3LL:
      v16 = a3;
      v17 = &a2[30].m128i_i8[5];
      v18 = a2 + 14;
      switch ( a2[30].m128i_i8[5] )
      {
        case 0:
          m128i_i64 = a2[28].m128i_i64[1];
          v19 = a2[30].m128i_i8[6];
          v20 = a2;
          v21 = a2[17].m128i_i64[0];
          v22 = v20[17].m128i_i64[1];
          v280 = (__int64 *)v20[29].m128i_i64[0];
          v284 = v20[29].m128i_i64[1];
          LOBYTE(v4) = v20[30].m128i_i8[7];
          v23 = v20[18].m128i_i64[0];
          v24 = v20[18].m128i_i64[1];
          v7 = v20[19].m128i_i64[0];
          v25 = v20[19].m128i_i64[1];
          goto LABEL_70;
        case 1:
          v251 = a2[14].m128i_i64;
          sub_1419393E0(&off_141A2BE48);
        case 2:
          v251 = a2[14].m128i_i64;
          sub_141939400(&off_141A2BE48);
        case 3:
          v287 = &a2[30].m128i_i8[5];
          v285 = a2 + 14;
          goto LABEL_87;
        case 4:
          v287 = &a2[30].m128i_i8[5];
          v285 = a2 + 14;
          goto LABEL_20;
        case 5:
          v287 = &a2[30].m128i_i8[5];
          v285 = a2 + 14;
          goto LABEL_16;
        case 6:
          v287 = &a2[30].m128i_i8[5];
          v285 = a2 + 14;
          goto LABEL_146;
      }
  }
}
