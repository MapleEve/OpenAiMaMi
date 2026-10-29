// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x1409ce980 | successor of pre-update 0x140f39bb0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1409CE980(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm0
  __m128i v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rbx
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r14
  _DWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  bool v50; // zf
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // r12
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdi
  char v63; // al
  __int64 v64; // r8
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r12
  int v69; // edi
  int v70; // r13d
  __int64 v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rcx
  __m128i v75; // xmm0
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rdi
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int32 v89; // edi
  int v90; // ebx
  __m128i v91; // xmm0
  _OWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rdi
  _OWORD *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 (__fastcall *v103)(unsigned __int64); // rax
  unsigned __int64 v104; // rax
  __int64 *v105; // r15
  __int64 *v106; // rdi
  char *v107; // rsi
  unsigned __int64 v108; // rsi
  _QWORD *v109; // rbx
  __int64 v110; // rdx
  __int64 *v111; // rax
  __int64 v112; // r12
  __int64 v113; // rax
  __m128i v114; // xmm0
  __int64 v115; // rax
  _BYTE *v116; // rcx
  _BYTE *v117; // rdx
  _BYTE *v118; // rax
  _BYTE *v119; // r8
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rbx
  __int64 v122; // r11
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // r14
  __int64 v128; // rdx
  __int64 v129; // r9
  __int64 v130; // rax
  _QWORD *v131; // rdx
  __int64 v132; // r14
  char v133; // al
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r14
  __int64 v139; // rdx
  _BYTE *v140; // rdx
  _QWORD *v141; // r14
  unsigned int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // r14
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int128 v153; // xmm1
  __int64 v154; // rcx
  char v155; // al
  __int64 v156; // rdx
  __int64 v157; // r14
  unsigned __int64 v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // rsi
  const char *v161; // rcx
  __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  _QWORD *v166; // rsi
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rax
  _OWORD *v171; // rcx
  __m128i v172; // xmm0
  __int64 v173; // rsi
  _QWORD *v174; // rdi
  __int64 v175; // rdx
  __int64 v176; // rdi
  __int64 v177; // rsi
  __int64 v178; // rbx
  const __m128i *v179; // r14
  __m128i v181; // xmm0
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rax
  __int64 v186; // rdi
  __int64 v187; // rdi
  __int64 v188; // rdi
  __int64 v189; // rsi
  _QWORD *v190; // rbx
  _QWORD *v192; // rsi
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rax
  _OWORD *v196; // rcx
  __m128i v197; // xmm0
  __int64 v198; // rcx
  _BYTE v199[24]; // [rsp+78h] [rbp-8h] BYREF
  __int64 *v200; // [rsp+90h] [rbp+10h]
  _BYTE v201[48]; // [rsp+2D0h] [rbp+250h] BYREF
  __m128i v202; // [rsp+300h] [rbp+280h] BYREF
  __int128 v203; // [rsp+310h] [rbp+290h]
  __m128i v204; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v205; // [rsp+530h] [rbp+4B0h]
  char v206[624]; // [rsp+790h] [rbp+710h] BYREF
  __int128 v207; // [rsp+A00h] [rbp+980h] BYREF
  __int64 v208; // [rsp+A10h] [rbp+990h]
  __int128 v209; // [rsp+A18h] [rbp+998h] BYREF
  __int64 v210; // [rsp+A28h] [rbp+9A8h]
  __m256i v211; // [rsp+A30h] [rbp+9B0h] BYREF
  __int128 v212; // [rsp+A50h] [rbp+9D0h]
  __m128i v213; // [rsp+A60h] [rbp+9E0h]
  __int128 v214; // [rsp+A70h] [rbp+9F0h]
  __m128i v215; // [rsp+A80h] [rbp+A00h]
  _BYTE v216[48]; // [rsp+C90h] [rbp+C10h] BYREF
  __m128i v217; // [rsp+CC0h] [rbp+C40h]
  __int128 v218; // [rsp+CD0h] [rbp+C50h]
  __m128i v219; // [rsp+CE0h] [rbp+C60h]
  __int64 v220; // [rsp+F08h] [rbp+E88h]
  _OWORD *v221; // [rsp+F10h] [rbp+E90h]
  _BYTE *v222; // [rsp+F18h] [rbp+E98h]
  _BYTE *v223; // [rsp+F20h] [rbp+EA0h]
  __int64 v224; // [rsp+F28h] [rbp+EA8h]
  __int64 v225; // [rsp+F30h] [rbp+EB0h] BYREF
  __int64 v226; // [rsp+F38h] [rbp+EB8h]
  __int64 v227; // [rsp+F40h] [rbp+EC0h]
  char v228; // [rsp+F50h] [rbp+ED0h] BYREF
  _BYTE v229[31]; // [rsp+F51h] [rbp+ED1h]
  __m128i v230; // [rsp+F70h] [rbp+EF0h] BYREF
  __int128 v231; // [rsp+F80h] [rbp+F00h]
  __int64 v232; // [rsp+F90h] [rbp+F10h]
  __int64 v233; // [rsp+F98h] [rbp+F18h]
  char *v234; // [rsp+FA0h] [rbp+F20h]
  __int64 v235; // [rsp+FA8h] [rbp+F28h]
  __m128i si128; // [rsp+FB0h] [rbp+F30h] BYREF
  __int64 v237; // [rsp+FC0h] [rbp+F40h]
  __int64 v238; // [rsp+FD0h] [rbp+F50h] BYREF
  _DWORD *v239; // [rsp+FD8h] [rbp+F58h]
  __int64 v240; // [rsp+FE0h] [rbp+F60h]
  __int64 v241; // [rsp+FE8h] [rbp+F68h] BYREF
  __int64 v242; // [rsp+FF0h] [rbp+F70h]
  __int64 v243; // [rsp+FF8h] [rbp+F78h]
  __int64 v244; // [rsp+1000h] [rbp+F80h]
  __int64 v245; // [rsp+1008h] [rbp+F88h] BYREF
  __int64 v246; // [rsp+1010h] [rbp+F90h]
  __int64 v247; // [rsp+1018h] [rbp+F98h]
  __int64 v248; // [rsp+1028h] [rbp+FA8h] BYREF
  _OWORD *v249; // [rsp+1030h] [rbp+FB0h]
  __int64 v250; // [rsp+1038h] [rbp+FB8h]
  __m128i v251; // [rsp+1040h] [rbp+FC0h] BYREF
  __int64 v252; // [rsp+1050h] [rbp+FD0h]
  __int64 v253; // [rsp+1068h] [rbp+FE8h]
  _QWORD v254[4]; // [rsp+1070h] [rbp+FF0h] BYREF
  _BYTE v255[31]; // [rsp+1090h] [rbp+1010h] BYREF
  __int64 v256; // [rsp+10B0h] [rbp+1030h]
  __int64 v257; // [rsp+10B8h] [rbp+1038h]
  __int64 v258; // [rsp+10C0h] [rbp+1040h]
  __int64 v259; // [rsp+10C8h] [rbp+1048h]
  _QWORD *v260; // [rsp+10D0h] [rbp+1050h]
  __int128 v261; // [rsp+10D8h] [rbp+1058h]
  __int64 v262; // [rsp+10E8h] [rbp+1068h] BYREF
  __int64 v263; // [rsp+10F0h] [rbp+1070h]
  __int64 v264; // [rsp+10F8h] [rbp+1078h]
  __int64 v265; // [rsp+1100h] [rbp+1080h]
  __int64 v266; // [rsp+1108h] [rbp+1088h]
  char v267; // [rsp+1110h] [rbp+1090h]
  char v268; // [rsp+1111h] [rbp+1091h]
  char v269; // [rsp+1112h] [rbp+1092h]
  char v270; // [rsp+1113h] [rbp+1093h]
  _BYTE v271[3]; // [rsp+1114h] [rbp+1094h] BYREF
  char v272; // [rsp+1117h] [rbp+1097h]
  __int64 v273; // [rsp+1118h] [rbp+1098h]
  char v274; // [rsp+1125h] [rbp+10A5h]
  char v275; // [rsp+1126h] [rbp+10A6h]
  char v276; // [rsp+1127h] [rbp+10A7h]
  __int64 v277; // [rsp+1128h] [rbp+10A8h]

  v277 = -2;
  sub_140A2C460(v201, a2);
  if ( !*(_QWORD *)&v201[16] )
  {
    v13 = *(_QWORD *)v201;
    if ( *(_QWORD *)v201 )
      sub_140001660(*(_QWORD *)&v201[8], 32LL * *(_QWORD *)v201, 8);
    nullsub_1(v4, v13);
    v14 = sub_140001650(24, 8);
    if ( !v14 )
      sub_14196B2C1(8, 24);
    v17 = (_QWORD *)v14;
    nullsub_1(v16, v15);
    v18 = sub_140001650(28, 1);
    if ( !v18 )
    {
      v273 = (__int64)v17;
      sub_14196B2DB(1, 28);
    }
    *(_OWORD *)(v18 + 12) = *(__int128 *)((char *)&xmmword_141A60455 + 12);
    *(__m128i *)v18 = _mm_loadu_si128((const __m128i *)&xmmword_141A60455);
    *v17 = 28;
    v17[1] = v18;
    v17[2] = 28;
    v211.m256i_i64[0] = 1;
    v211.m256i_i64[1] = (__int64)v17;
    v211.m256i_i64[2] = 1;
    *(_QWORD *)v216 = 0;
    *(_QWORD *)&v216[8] = 8;
    *(_QWORD *)&v216[16] = 0;
    nullsub_1(v20, v19);
    v21 = sub_140001650(24, 8);
    if ( !v21 )
      sub_14196B2C1(8, 24);
    v24 = (_QWORD *)v21;
    nullsub_1(v23, v22);
    v25 = sub_140001650(33, 1);
    if ( !v25 )
    {
      v273 = (__int64)v24;
      sub_14196B2DB(1, 33);
    }
    *(_OWORD *)(v25 + 16) = xmmword_141A61238;
    *(_OWORD *)v25 = xmmword_141A61228;
    *(_BYTE *)(v25 + 32) = -115;
    *v24 = 33;
    v24[1] = v25;
    v24[2] = 33;
    *(_QWORD *)&v201[16] = v211.m256i_i64[2];
    v26 = _mm_loadu_si128((const __m128i *)&v211);
    *(__m128i *)v201 = v26;
    *(_QWORD *)&v201[40] = *(_QWORD *)&v216[16];
    *(_OWORD *)&v201[24] = *(_OWORD *)v216;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v216[8];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v201[40];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v201[16];
    *(__m128i *)(a1 + 8) = v26;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v24;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v5 = *(_QWORD *)&v201[8];
  v6 = 32LL * *(_QWORD *)&v201[16];
  v7 = 0;
  do
  {
    v8 = *(_QWORD *)(v5 + v7);
    if ( v8 )
      sub_140001660(*(_QWORD *)(v5 + v7 + 8), v8, 1);
    v7 += 32;
  }
  while ( v6 != v7 );
  if ( *(_QWORD *)v201 )
    sub_140001660(v5, 32LL * *(_QWORD *)v201, 8);
  sub_1409C81C0(v201, a2);
  v9 = *(_QWORD *)v201;
  *(_OWORD *)v216 = *(_OWORD *)&v201[8];
  *(_QWORD *)&v216[16] = *(_QWORD *)&v201[24];
  if ( *(_QWORD *)v201 != -1 )
  {
    v10 = *(_OWORD *)&v201[32];
    v11 = v202;
    v12 = v203;
    *(__m128i *)(a1 + 80) = v204;
    *(_OWORD *)(a1 + 64) = v12;
    *(__m128i *)(a1 + 48) = v11;
    *(_OWORD *)(a1 + 32) = v10;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v216[16];
    *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)v216);
    *(_QWORD *)a1 = v9;
    return a1;
  }
  si128 = _mm_load_si128((const __m128i *)v216);
  v237 = *(_QWORD *)&v216[16];
  sub_1407DCFB0(&v230, a2);
  v253 = v230.m128i_i64[0];
  if ( v230.m128i_i64[0] == -1 )
  {
    *(_QWORD *)v199 = 0;
    *(_QWORD *)&v199[16] = 0;
    nullsub_1(v28, v27);
    v35 = (_DWORD *)sub_140001650(4, 1);
    if ( !v35 )
      sub_14196B2DB(1, 4);
    *v35 = 1954047348;
    v211.m256i_i64[0] = 4;
    v211.m256i_i64[1] = (__int64)v35;
    v211.m256i_i64[2] = 4;
    nullsub_1(v37, v36);
    v38 = (__m128i *)sub_140001650(91, 1);
    v273 = (__int64)v38;
    if ( !v38 )
      sub_14196B2DB(1, 91);
    qmemcpy(&v38[1], "s instructions carefully. Respond helpfully and use tools when appropriate.", 75);
    *v38 = _mm_loadu_si128((const __m128i *)&xmmword_141A5E9FC);
    v201[0] = 3;
    *(_QWORD *)&v201[8] = 91;
    *(_QWORD *)&v201[16] = v38;
    *(_QWORD *)&v201[24] = 91;
    sub_140A68320(v216, v199, &v211, v201);
    if ( v216[0] != 0xFF )
      sub_140032FF0(v216);
    *(_OWORD *)&v201[7] = *(_OWORD *)v199;
    *(_QWORD *)&v201[23] = *(_QWORD *)&v199[16];
    *(_OWORD *)v216 = *(_OWORD *)v201;
    *(_OWORD *)&v216[15] = *(_OWORD *)&v199[8];
  }
  else
  {
    v29 = v230.m128i_i64[1];
    v30 = v231;
    *(_QWORD *)v199 = 0;
    *(_QWORD *)&v199[16] = 0;
    nullsub_1(v28, v27);
    v31 = (_DWORD *)sub_140001650(4, 1);
    v273 = v29;
    if ( !v31 )
      sub_14196B2DB(1, 4);
    *v31 = 1954047348;
    v211.m256i_i64[0] = 4;
    v211.m256i_i64[1] = (__int64)v31;
    v211.m256i_i64[2] = 4;
    if ( v30 < 0 )
    {
      v34 = 0;
      goto LABEL_21;
    }
    if ( v30 )
    {
      nullsub_1(v33, v32);
      v34 = 1;
      v39 = sub_140001650(v30, 1);
      if ( !v39 )
      {
LABEL_21:
        v270 = 1;
        sub_14196B2DB(v34, v30);
      }
      v40 = v39;
      sub_1419234B0(v39, v29, v30);
    }
    else
    {
      v40 = 1;
    }
    v201[0] = 3;
    *(_QWORD *)&v201[8] = v30;
    *(_QWORD *)&v201[16] = v40;
    *(_QWORD *)&v201[24] = v30;
    v270 = 0;
    sub_140A68320(v216, v199, &v211, v201);
    if ( v216[0] != 0xFF )
      sub_140032FF0(v216);
    *(_QWORD *)&v201[23] = *(_QWORD *)&v199[16];
    *(_OWORD *)&v201[7] = *(_OWORD *)v199;
    *(_OWORD *)v216 = *(_OWORD *)v201;
    *(_OWORD *)&v216[15] = *(_OWORD *)&v199[8];
    if ( v253 )
      sub_140001660(v273, v253, 1);
  }
  v228 = 5;
  *(__m128i *)v229 = _mm_load_si128((const __m128i *)v216);
  *(_OWORD *)&v229[15] = *(_OWORD *)&v216[15];
  v41 = *(_QWORD *)(a2 + 776);
  v42 = *(_QWORD *)(a2 + 784);
  sub_1416B18A0((unsigned int)&v225, v41, v42, (unsigned int)&unk_141A63509, 26);
  v44 = sub_1416AE140(v43);
  v49 = v44;
  v50 = *(_BYTE *)(v44 + 16) == 1;
  v242 = a1;
  v256 = v41;
  v257 = v42;
  if ( v50 )
  {
    v51 = *(_QWORD *)v44;
    v52 = *(_QWORD *)(v49 + 8);
  }
  else
  {
    v51 = sub_1416C5230(v46, v45, v47, v48);
    *(_QWORD *)v49 = v51;
    *(_QWORD *)(v49 + 8) = v52;
    *(_BYTE *)(v49 + 16) = 1;
  }
  v53 = v51 + 1;
  *(_QWORD *)v49 = v51 + 1;
  v231 = xmmword_141A57990;
  v230 = _mm_loadu_si128((const __m128i *)&off_141A57980);
  v232 = v51;
  v233 = v52;
  v241 = 0;
  v262 = 0;
  v263 = 8;
  v264 = 0;
  v54 = si128.m128i_i64[1];
  v55 = si128.m128i_i64[1] + 192 * v237;
  v220 = a2;
  while ( v54 != v55 )
  {
    v57 = v54;
    v54 += 192;
    if ( *(_QWORD *)(v57 + 80) == -1 )
    {
      sub_1416DB410(v201, v57 + 32);
      v62 = v264;
      if ( v264 != v262 )
        goto LABEL_38;
LABEL_45:
      sub_141939F90(&v262);
      goto LABEL_38;
    }
    v58 = *(_QWORD *)(v57 + 96);
    if ( v58 )
    {
      v59 = *(_QWORD *)(v57 + 88);
      nullsub_1(v53, v52);
      v60 = sub_140001650(v58, 1);
      if ( !v60 )
        sub_14196B2DB(1, v58);
      v61 = v60;
      sub_1419234B0(v60, v59, v58);
    }
    else
    {
      v61 = 1;
    }
    v63 = *(_BYTE *)(v57 + 104);
    *(_QWORD *)v201 = v58;
    *(_QWORD *)&v201[8] = v61;
    *(_QWORD *)&v201[16] = v58;
    v201[24] = v63;
    if ( !(unsigned __int8)sub_14086D5C0(&v230, v201) )
    {
      sub_1407DF3C0(&v211);
      if ( v211.m256i_i32[0] == -1 )
      {
        if ( v211.m256i_i64[1] == -1 )
        {
          sub_1416DB410(v201, v57 + 32);
          v62 = v264;
          if ( v264 == v262 )
            goto LABEL_45;
LABEL_38:
          v56 = v263;
          v53 = 3 * v62;
          v52 = *(_QWORD *)&v201[16];
          *(_QWORD *)(v263 + 8 * v53 + 16) = *(_QWORD *)&v201[16];
          *(__m128i *)(v56 + 8 * v53) = _mm_loadu_si128((const __m128i *)v201);
          v264 = v62 + 1;
        }
        else
        {
          v273 = v211.m256i_i64[1];
          v68 = v211.m256i_i64[3];
          v266 = v211.m256i_i64[2];
          if ( (unsigned __int8)sub_1409C8040(v211.m256i_i64[2], v211.m256i_i64[3], v64) == 2 )
          {
LABEL_78:
            v52 = v273;
            if ( v273 )
              goto LABEL_79;
          }
          else
          {
            v201[0] = 1;
            v69 = v226;
            v70 = v227;
            v71 = sub_1416B9760(v201, v226, v227);
            if ( v71 )
              goto LABEL_65;
            *(_QWORD *)&v261 = v57 + 32;
            *(_QWORD *)v201 = v57 + 32;
            *(_QWORD *)&v201[8] = sub_1400015F0;
            sub_1416DAFA0(v216, &unk_141A5A131, v201);
            v265 = *(_QWORD *)&v216[8];
            sub_1416B18A0((unsigned int)v201, v69, v70, *(_DWORD *)&v216[8], *(__int64 *)&v216[16]);
            if ( *(_QWORD *)v216 )
              sub_140001660(v265, *(_QWORD *)v216, 1);
            v265 = *(_QWORD *)&v201[8];
            v71 = sub_1416CC660(*(_QWORD *)&v201[8], *(_QWORD *)&v201[16], v266, v68);
            if ( *(_QWORD *)v201 )
              sub_140001660(v265, *(_QWORD *)v201, 1);
            if ( v71 )
            {
LABEL_65:
              v211.m256i_i64[0] = v71;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                *(_QWORD *)v216 = v57 + 32;
                *(_QWORD *)&v216[8] = sub_1400015F0;
                *(_QWORD *)&v216[16] = &v211;
                *(_QWORD *)&v216[24] = sub_1416EA080;
                v202.m128i_i64[0] = 2;
                v202.m128i_i64[1] = (__int64)aCodexmateLibCo_36;
                *(_QWORD *)&v203 = 44;
                v204.m128i_i64[0] = (__int64)&unk_141A63523;
                v204.m128i_i64[1] = (__int64)v216;
                *(_QWORD *)v201 = 0;
                *(_QWORD *)&v201[8] = aCodexmateLibCo_36;
                *(_OWORD *)&v201[16] = 0x2Cu;
                *(_QWORD *)&v201[32] = aSrcCoreRelayCo_2;
                *(_QWORD *)&v201[40] = 34;
                *((_QWORD *)&v203 + 1) = 0x182500000001LL;
                sub_141503E20(v271, v201);
              }
              sub_1416DB410(v201, v57 + 32);
              v72 = v264;
              if ( v264 == v262 )
                sub_141939F90(&v262);
              v73 = v263;
              v74 = 3 * v72;
              *(_QWORD *)(v263 + 8 * v74 + 16) = *(_QWORD *)&v201[16];
              *(__m128i *)(v73 + 8 * v74) = _mm_loadu_si128((const __m128i *)v201);
              v264 = v72 + 1;
              v53 = v211.m256i_i8[0] & 3;
              if ( (unsigned int)(v53 - 2) >= 2 && (v211.m256i_i8[0] & 3) != 0 )
              {
                *(_QWORD *)&v201[8] = v211.m256i_i64[0] - 1;
                v201[0] = 3;
                sub_1416EBAD0(&v201[8]);
              }
              goto LABEL_78;
            }
            sub_1409D8260(v216, v266, v68, &v228);
            if ( *(_DWORD *)v216 != -1 )
            {
              v204 = v219;
              v203 = v218;
              v75 = _mm_loadu_si128((const __m128i *)v216);
              v202 = v217;
              *(_OWORD *)&v201[32] = *(_OWORD *)&v216[32];
              *(_OWORD *)&v201[16] = *(_OWORD *)&v216[16];
              *(__m128i *)v201 = v75;
              v76 = v261;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                *(_QWORD *)v199 = v261;
                *(_QWORD *)&v199[8] = sub_1400015F0;
                *(_QWORD *)&v199[16] = v201;
                v200 = (__int64 *)sub_140D76130;
                v211.m256i_i64[0] = (__int64)aCodexmateLibCo_36;
                v211.m256i_i64[1] = 44;
                v211.m256i_i64[2] = (__int64)aCodexmateLibCo_36;
                v211.m256i_i64[3] = 44;
                *(_QWORD *)&v212 = &off_141A635E8;
                sub_140AF72B0(&unk_141A635B0, v199, 2, &v211);
              }
              sub_1416DB410(&v211, v76);
              v77 = v264;
              if ( v264 == v262 )
                sub_141939F90(&v262);
              v78 = v263;
              v79 = 3 * v77;
              *(_QWORD *)(v263 + 8 * v79 + 16) = v211.m256i_i64[2];
              *(__m128i *)(v78 + 8 * v79) = _mm_loadu_si128((const __m128i *)&v211);
              v264 = v77 + 1;
              sub_140906570(v201);
              goto LABEL_78;
            }
            v265 = *(_QWORD *)&v216[8];
            v80 = *(_QWORD *)(v57 + 88);
            v81 = *(_QWORD *)(v57 + 96);
            *((_QWORD *)&v261 + 1) = *(_QWORD *)&v216[16];
            sub_1407E4EE0((__int64)v216, v80, v81, *(__int64 *)&v216[16], *(__int64 *)&v216[24], v266, v68);
            v82 = v261;
            if ( *(_DWORD *)v216 == -1 )
            {
              ++v241;
            }
            else
            {
              v204 = v219;
              v203 = v218;
              v83 = _mm_loadu_si128((const __m128i *)v216);
              v202 = v217;
              *(_OWORD *)&v201[32] = *(_OWORD *)&v216[32];
              *(_OWORD *)&v201[16] = *(_OWORD *)&v216[16];
              *(__m128i *)v201 = v83;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                *(_QWORD *)v199 = v261;
                *(_QWORD *)&v199[8] = sub_1400015F0;
                *(_QWORD *)&v199[16] = v201;
                v200 = (__int64 *)sub_140D76130;
                v211.m256i_i64[0] = (__int64)aCodexmateLibCo_36;
                v211.m256i_i64[1] = 44;
                v211.m256i_i64[2] = (__int64)aCodexmateLibCo_36;
                v211.m256i_i64[3] = 44;
                *(_QWORD *)&v212 = &off_141A63598;
                sub_140AF72B0(&unk_141A63564, v199, 2, &v211);
              }
              sub_1416DB410(&v211, v82);
              v84 = v264;
              if ( v264 == v262 )
                sub_141939F90(&v262);
              v85 = v263;
              v86 = 3 * v84;
              *(_QWORD *)(v263 + 8 * v86 + 16) = v211.m256i_i64[2];
              *(__m128i *)(v85 + 8 * v86) = _mm_loadu_si128((const __m128i *)&v211);
              v264 = v84 + 1;
              sub_140906570(v201);
            }
            if ( v265 )
              sub_140001660(*((_QWORD *)&v261 + 1), v265, 1);
            v52 = v273;
            if ( v273 )
LABEL_79:
              sub_140001660(v266, v52, 1);
          }
        }
      }
      else
      {
        v219 = v215;
        v218 = v214;
        v217 = v213;
        *(_OWORD *)&v216[32] = v212;
        *(__m256i *)v216 = v211;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          *(_QWORD *)v199 = v57 + 32;
          *(_QWORD *)&v199[8] = sub_1400015F0;
          *(_QWORD *)&v199[16] = v216;
          v200 = (__int64 *)sub_140D76130;
          v202.m128i_i64[0] = 2;
          v202.m128i_i64[1] = (__int64)aCodexmateLibCo_36;
          *(_QWORD *)&v203 = 44;
          v204.m128i_i64[0] = (__int64)&unk_141A63600;
          v204.m128i_i64[1] = (__int64)v199;
          *(_QWORD *)v201 = 0;
          *(_QWORD *)&v201[8] = aCodexmateLibCo_36;
          *(_OWORD *)&v201[16] = 0x2Cu;
          *(_QWORD *)&v201[32] = aSrcCoreRelayCo_2;
          *(_QWORD *)&v201[40] = 34;
          *((_QWORD *)&v203 + 1) = 0x181200000001LL;
          sub_141503E20(v271, v201);
        }
        sub_1416DB410(v201, v57 + 32);
        v65 = v264;
        if ( v264 == v262 )
          sub_141939F90(&v262);
        v66 = v263;
        v67 = 3 * v65;
        *(_QWORD *)(v263 + 8 * v67 + 16) = *(_QWORD *)&v201[16];
        *(__m128i *)(v66 + 8 * v67) = _mm_loadu_si128((const __m128i *)v201);
        v264 = v65 + 1;
        sub_140906570(v216);
      }
    }
  }
  sub_1416B18A0((unsigned int)&v251, v256, v257, (unsigned int)&unk_141A5E9A5, 24);
  nullsub_1(v88, v87);
  v273 = sub_140001650(32, 8);
  if ( !v273 )
    sub_14196B2C1(8, 32);
  v89 = v251.m128i_i32[2];
  v90 = v252;
  sub_1416B18A0((unsigned int)v201, v251.m128i_i32[2], v252, (unsigned int)&unk_141A5EF9D, 12);
  v91 = _mm_loadu_si128((const __m128i *)v201);
  v92 = (_OWORD *)v273;
  *(_OWORD *)(v273 + 16) = *(_OWORD *)&v201[16];
  *v92 = v91;
  v248 = 1;
  v249 = v92;
  v250 = 1;
  v269 = 1;
  sub_1416B18A0((unsigned int)&v245, v89, v90, (unsigned int)&unk_141A5EFDB, 7);
  memset(v254, 0, 24);
  v276 = 1;
  sub_1416C4AC0(v201, v246, v247);
  if ( *(_DWORD *)v201 == 2 )
  {
    v95 = *(_QWORD *)&v201[8];
    *(_QWORD *)&v216[8] = *(_QWORD *)&v201[8];
    *(_QWORD *)v216 = 2;
    v96 = v201[8] & 3;
    switch ( v201[8] & 3 )
    {
      case 0:
        goto LABEL_96;
      case 1:
        goto LABEL_121;
      case 2:
        goto LABEL_115;
      case 3:
        goto LABEL_116;
    }
  }
  sub_1419234B0(v216, v201, 624);
  if ( *(_QWORD *)v216 != 2 )
  {
    sub_1419234B0(v206, v216, 624);
    *(_QWORD *)v201 = 0;
    v205 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_140841050(v199, v201);
        if ( !*(_QWORD *)v199 )
        {
          v275 = 1;
          sub_1401A6690(v201);
          if ( *(_DWORD *)v216 != 2 )
            goto LABEL_125;
          v95 = *(_QWORD *)&v216[8];
          v102 = v216[8] & 3;
          if ( (unsigned int)(v102 - 2) < 2 )
            goto LABEL_125;
          goto LABEL_119;
        }
        sub_1419234B0(&v211, v199, 600);
        sub_1416B9630(v255, &v211);
        v272 = 1;
        v273 = *(_QWORD *)&v255[8];
        v97 = sub_1416B1B90(*(_QWORD *)&v255[8], *(_QWORD *)&v255[16]);
        if ( v97 )
        {
          v272 = 1;
          sub_1416E2AB0(&v238, v97, v98);
          if ( (_DWORD)v238 != 1 && v240 == 4 && *v239 == 1852797802 )
            break;
        }
        if ( *(_QWORD *)v255 )
          sub_140001660(v273, *(_QWORD *)v255, 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v211.m256i_i64[0]) )
          goto LABEL_107;
      }
      v266 = *(_QWORD *)v255;
      v99 = v250;
      if ( v250 == v248 )
        sub_1419397B0(&v248);
      v100 = v249;
      v101 = 2 * v99;
      *(_QWORD *)&v249[v101] = v266;
      *((_QWORD *)&v100[v101] + 1) = v273;
      v100[v101 + 1] = _mm_loadu_si128((const __m128i *)&v255[16]);
      v250 = v99 + 1;
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v211.m256i_i64[0]) )
LABEL_107:
        sub_141141760(&v211);
    }
  }
  v95 = *(_QWORD *)&v216[8];
  v96 = v216[8] & 3;
  switch ( v216[8] & 3 )
  {
    case 0:
LABEL_96:
      if ( *(_BYTE *)(v95 + 16) )
        goto LABEL_118;
      goto LABEL_122;
    case 1:
LABEL_121:
      if ( !*(_BYTE *)(v95 + 31) )
        goto LABEL_122;
      goto LABEL_118;
    case 2:
LABEL_115:
      v275 = 1;
      v103 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v94, v93) + 8);
      v275 = 1;
      LOBYTE(v104) = v103(HIDWORD(v95));
      goto LABEL_117;
    case 3:
LABEL_116:
      v104 = HIDWORD(v95);
LABEL_117:
      if ( !(_BYTE)v104 )
      {
LABEL_122:
        if ( (unsigned int)(v96 - 2) >= 2 && v96 )
        {
          *(_QWORD *)&v201[8] = v95 - 1;
          v201[0] = 3;
          v275 = 0;
          sub_1416EBAD0(&v201[8]);
        }
        goto LABEL_125;
      }
LABEL_118:
      v254[1] = 1;
      v102 = v95 & 3;
      if ( (unsigned int)(v102 - 2) < 2 )
        goto LABEL_125;
      break;
  }
LABEL_119:
  if ( v102 )
  {
    *(_QWORD *)&v201[8] = v95 - 1;
    v201[0] = 3;
    v276 = 1;
    sub_1416EBAD0(&v201[8]);
  }
LABEL_125:
  v105 = (__int64 *)v249;
  v106 = (__int64 *)&v249[2 * v250];
  *(_QWORD *)v199 = v249;
  v265 = v248;
  *(_QWORD *)&v199[16] = v248;
  v200 = v106;
  v107 = (char *)(v106 - 4);
  v221 = v249;
  v234 = (char *)(v106 - 4);
LABEL_126:
  v108 = v107 - (char *)v105;
  v109 = v105 + 5;
  while ( 1 )
  {
    if ( v105 == v106 )
      goto LABEL_233;
    v111 = v105;
    v105 += 4;
    *(_QWORD *)&v199[8] = v105;
    if ( *v111 == -1 )
      break;
    v273 = *v111;
    v112 = v111[2];
    v266 = v111[1];
    sub_1416C49D0(v201, v266, v112);
    if ( *(_DWORD *)v201 == 2 )
    {
      if ( (v201[8] & 3u) - 2 >= 2 && (v201[8] & 3) != 0 )
      {
        --*(_QWORD *)&v201[8];
        v201[0] = 3;
        sub_1416EBAD0(&v201[8]);
      }
    }
    else
    {
      sub_1416CC1A0(v201, v266, v112);
      if ( *(_QWORD *)v201 == -1 )
      {
        ++v254[1];
        if ( (v201[8] & 3u) - 2 >= 2 && (v201[8] & 3) != 0 )
        {
          *(_QWORD *)&v216[8] = *(_QWORD *)&v201[8] - 1LL;
          v216[0] = 3;
          sub_1416EBAD0(&v216[8]);
        }
      }
      else
      {
        v256 = *(_QWORD *)v201;
        v113 = *(_QWORD *)&v201[16];
        *(_OWORD *)v201 = *(_OWORD *)&v201[8];
        *(_OWORD *)&v201[16] = 0;
        v257 = *(_QWORD *)v201;
        *(_QWORD *)&v201[32] = *(_QWORD *)v201;
        *(_QWORD *)&v201[40] = v113;
        sub_140D8B500(v216, (__int128 *)v201);
        if ( v216[0] != 0xFF )
        {
          v114 = _mm_loadu_si128((const __m128i *)v216);
          *(_OWORD *)&v211.m256i_u64[2] = *(_OWORD *)&v216[16];
          *(__m128i *)v211.m256i_i8 = v114;
          v115 = sub_1416724D0(aEntries_0, 7, &v211);
          if ( v115 && *(_BYTE *)v115 == 4 )
          {
            v116 = *(_BYTE **)(v115 + 16);
            v117 = &v116[32 * *(_QWORD *)(v115 + 24)];
            v243 = 0;
LABEL_146:
            v118 = v116;
            while ( 2 )
            {
              if ( v118 != v117 )
              {
                v119 = v118 + 32;
                v50 = *v118 == 5;
                v118 += 32;
                if ( !v50 )
                  continue;
                v120 = *((_QWORD *)v119 - 3);
                v222 = v117;
                v223 = v119;
                if ( v120 )
                {
                  v108 = *((_QWORD *)v119 - 2);
                  *(_QWORD *)&v261 = *((_QWORD *)v119 - 1);
                  *((_QWORD *)&v261 + 1) = 1;
                }
                else
                {
                  v261 = 0u;
                }
                v121 = 0;
                while ( 2 )
                {
                  while ( 2 )
                  {
                    while ( 2 )
                    {
                      if ( !(_QWORD)v261 )
                      {
                        v117 = v222;
                        v116 = v223;
                        goto LABEL_146;
                      }
                      v122 = *((_QWORD *)&v261 + 1);
                      if ( (BYTE8(v261) & 1) != 0 && v121 == 0 )
                      {
                        v122 = 1;
                        if ( !v108 )
                        {
                          v121 = v120;
                          goto LABEL_167;
                        }
                        v121 = v120;
                        if ( (v108 & 7) != 0 )
                        {
                          v123 = 0;
                          do
                          {
                            v121 = *(_QWORD *)(v121 + 632);
                            ++v123;
                          }
                          while ( (v108 & 7) != v123 );
                          v124 = v108 - v123;
                          if ( v108 < 8 )
                          {
LABEL_167:
                            v108 = 0;
                            v120 = 0;
                            if ( !*(_WORD *)(v121 + 626) )
                              goto LABEL_168;
LABEL_163:
                            v125 = v121;
                            v126 = v108;
                            goto LABEL_170;
                          }
                        }
                        else
                        {
                          v124 = v108;
                          if ( v108 < 8 )
                            goto LABEL_167;
                        }
                        do
                        {
                          v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v121 + 632) + 632LL) + 632LL)
                                                                                           + 632LL)
                                                                               + 632LL)
                                                                   + 632LL)
                                                       + 632LL)
                                           + 632LL);
                          v124 -= 8LL;
                        }
                        while ( v124 );
                        goto LABEL_167;
                      }
                      if ( (BYTE8(v261) & 1) == 0 )
                        sub_14196B5D0(&off_141A5B2D0);
                      if ( v108 < *(unsigned __int16 *)(v121 + 626) )
                        goto LABEL_163;
                      do
                      {
LABEL_168:
                        v125 = *(_QWORD *)(v121 + 352);
                        if ( !v125 )
                          sub_14196B5D0(&off_141A591E0);
                        ++v120;
                        v126 = *(unsigned __int16 *)(v121 + 624);
                        v121 = *(_QWORD *)(v121 + 352);
                      }
                      while ( (unsigned __int16)v126 >= *(_WORD *)(v125 + 626) );
LABEL_170:
                      *((_QWORD *)&v261 + 1) = v122;
                      if ( v120 )
                      {
                        v127 = v125;
                        v128 = v125 + 8 * v126 + 640;
                        if ( (v120 & 7) != 0 )
                        {
                          v129 = 0;
                          do
                          {
                            v121 = *(_QWORD *)v128;
                            v128 = *(_QWORD *)v128 + 632LL;
                            ++v129;
                          }
                          while ( (v120 & 7) != v129 );
                          v119 = (_BYTE *)(v120 - v129);
                          if ( v120 >= 8 )
                          {
                            do
                            {
LABEL_175:
                              v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v128 + 632LL) + 632LL)
                                                                                               + 632LL)
                                                                                   + 632LL)
                                                                       + 632LL)
                                                           + 632LL)
                                               + 632LL);
                              v128 = v121 + 632;
                              v119 -= 8;
                            }
                            while ( v119 );
                          }
                        }
                        else
                        {
                          v119 = (_BYTE *)v120;
                          if ( v120 >= 8 )
                            goto LABEL_175;
                        }
                        v108 = 0;
                        v125 = v127;
                      }
                      else
                      {
                        v108 = v126 + 1;
                        v121 = v125;
                      }
                      *(_QWORD *)&v261 = v261 - 1;
                      v130 = 32 * v126;
                      v120 = 0;
                      if ( *(_BYTE *)(v125 + v130) != 3 )
                        continue;
                      break;
                    }
                    v131 = (_QWORD *)(v130 + v125);
                    v132 = v131[2];
                    v260 = v131;
                    v259 = v131[3];
                    v133 = sub_1409C8040(v132, v259, v119);
                    v120 = 0;
                    if ( v133 == 2 )
                      continue;
                    break;
                  }
                  v135 = v259;
                  if ( v259 < 0 )
                  {
                    v198 = 0;
                    goto LABEL_305;
                  }
                  if ( v259 )
                  {
                    nullsub_1(0, v134);
                    v136 = sub_140001650(v259, 1);
                    if ( !v136 )
                    {
                      v258 = v259;
                      v198 = 1;
LABEL_305:
                      sub_14196B2DB(v198, v258);
                    }
                    v137 = v132;
                    v138 = v259;
                    v258 = v136;
                    sub_1419234B0(v136, v137, v259);
                    v139 = v258;
                    v135 = v138;
                  }
                  else
                  {
                    v139 = 1;
                  }
                  v258 = v139;
                  sub_1409D8260(v201, v139, v135, &v228);
                  if ( *(_DWORD *)v201 == -1 )
                  {
                    v140 = &v255[7];
                    *(_QWORD *)&v255[23] = *(_QWORD *)&v201[24];
                    *(__m128i *)&v255[7] = _mm_loadu_si128((const __m128i *)&v201[8]);
                    v141 = v260;
                    v142 = *(unsigned __int8 *)v260;
                    if ( v142 >= 3 )
                    {
                      if ( v142 == 3 )
                      {
                        v141 = v260;
                        v145 = v260[1];
                        if ( v145 )
                        {
                          v146 = v260[2];
                          v147 = 1;
                          goto LABEL_200;
                        }
                      }
                      else if ( v142 == 4 )
                      {
                        v143 = v260[2];
                        v235 = v260[3];
                        v224 = v143;
                        v244 = 0;
                        while ( v235 != v244 )
                        {
                          ++v244;
                          v144 = v143 + 32;
                          sub_1401AB4D0(v143, v140);
                          v143 = v144;
                        }
                        v141 = v260;
                        v152 = v260[1];
                        if ( v152 )
                        {
                          v146 = v260[2];
                          v145 = 32 * v152;
                          v147 = 8;
LABEL_200:
                          sub_140001660(v146, v145, v147);
                        }
                      }
                      else
                      {
                        v148 = v260[1];
                        if ( v148 )
                        {
                          v149 = v260[2];
                          v150 = v260[3];
                          *(_QWORD *)&v216[8] = 0;
                          *(_QWORD *)&v216[16] = v148;
                          *(_QWORD *)&v216[24] = v149;
                          *(_QWORD *)&v216[40] = 0;
                          v217.m128i_i64[0] = v148;
                          v217.m128i_i64[1] = v149;
                          v151 = 1;
                        }
                        else
                        {
                          v151 = 0;
                          v150 = 0;
                        }
                        *(_QWORD *)v216 = v151;
                        *(_QWORD *)&v216[32] = v151;
                        *(_QWORD *)&v218 = v150;
                        sub_140A17C60(v216);
                        v141 = v260;
                      }
                    }
                    *(_BYTE *)v141 = 3;
                    v153 = *(_OWORD *)&v255[15];
                    *(__m128i *)((char *)v141 + 1) = _mm_loadu_si128((const __m128i *)v255);
                    *((_OWORD *)v141 + 1) = v153;
                    ++v243;
                  }
                  if ( v259 )
                    sub_140001660(v258, v259, 1);
                  if ( *(_DWORD *)v201 != -1 )
                    sub_140906570(v201);
                  v120 = 0;
                  continue;
                }
              }
              break;
            }
            if ( v243 )
            {
              sub_1409080F0(v201, &v211);
              v154 = *(_QWORD *)v201;
              if ( *(_QWORD *)v201 == -1 )
              {
                LOBYTE(v154) = 41;
                v157 = sub_14166CD20(v154, *(_QWORD *)&v201[8]);
              }
              else
              {
                v261 = *(_OWORD *)v201;
                v155 = sub_1407C8880(v266, v112, *(_QWORD *)&v201[8], *(_QWORD *)&v201[16]);
                v157 = v156;
                if ( (v155 & 1) == 0 )
                {
                  sub_1407B9160(v156);
                  v157 = 0;
                }
                if ( (_QWORD)v261 )
                  sub_140001660(*((_QWORD *)&v261 + 1), v261, 1);
                if ( !v157 )
                {
                  v254[0] += v243;
                  goto LABEL_224;
                }
              }
              ++v254[2];
              v238 = v157;
              if ( *(_QWORD *)off_14223FF10 >= 2u )
              {
                *(_QWORD *)v255 = v266;
                *(_QWORD *)&v255[8] = v112;
                *(_QWORD *)v216 = v255;
                *(_QWORD *)&v216[8] = sub_1416CE600;
                *(_QWORD *)&v216[16] = &v238;
                *(_QWORD *)&v216[24] = sub_1416EA080;
                v202.m128i_i64[0] = 2;
                v202.m128i_i64[1] = (__int64)aCodexmateLibCo_36;
                *(_QWORD *)&v203 = 44;
                v204.m128i_i64[0] = (__int64)&unk_141A63AE2;
                v204.m128i_i64[1] = (__int64)v216;
                *(_QWORD *)v201 = 0;
                *(_QWORD *)&v201[8] = aCodexmateLibCo_36;
                *(_OWORD *)&v201[16] = 0x2Cu;
                *(_QWORD *)&v201[32] = aSrcCoreRelayCo_2;
                *(_QWORD *)&v201[40] = 34;
                *((_QWORD *)&v203 + 1) = 0x165500000001LL;
                sub_141503E20(v271, v201);
                v157 = v238;
              }
              if ( (unsigned int)(v157 & 3) - 2 >= 2 && (v157 & 3) != 0 )
              {
                *(_QWORD *)&v201[8] = v157 - 1;
                v201[0] = 3;
                sub_1416EBAD0(&v201[8]);
              }
            }
          }
LABEL_224:
          sub_140032FF0(&v211);
          if ( v256 )
            sub_140001660(v257, v256, 1);
          v110 = v273;
          v107 = v234;
          if ( v273 )
            goto LABEL_142;
          goto LABEL_126;
        }
        ++v254[1];
        sub_140032F30(&v216[8]);
        if ( v256 )
          sub_140001660(v257, v256, 1);
      }
    }
    v108 -= 32LL;
    v109 += 4;
    v110 = v273;
    if ( v273 )
    {
      v107 = v234;
LABEL_142:
      sub_140001660(v266, v110, 1);
      goto LABEL_126;
    }
  }
  if ( v106 != v105 )
  {
    v158 = v108 >> 5;
    do
    {
      v159 = *(v109 - 1);
      if ( v159 )
        sub_140001660(*v109, v159, 1);
      v109 += 4;
      --v158;
    }
    while ( v158 );
  }
LABEL_233:
  if ( v265 )
    sub_140001660(v221, 32 * v265, 8);
  v160 = v220;
  if ( v245 )
    sub_140001660(v246, v245, 1);
  if ( v251.m128i_i64[0] )
    sub_140001660(v251.m128i_i64[1], v251.m128i_i64[0], 1);
  sub_1409D4810(v201, v160);
  v161 = asc_141A63679;
  if ( v253 == -1 )
    v161 = (const char *)&unk_141A63631;
  v162 = 42;
  if ( v253 == -1 )
    v162 = 72;
  v238 = (__int64)v161;
  v239 = (_DWORD *)v162;
  if ( v264 )
  {
    *(_QWORD *)v255 = v264;
    v271[2] = 1;
    sub_1406C5480((unsigned int)v216, v263, v264, (unsigned int)&unk_141A5C001, 3);
    a1 = v242;
    v211.m256i_i64[2] = *(_QWORD *)&v216[16];
    *(__m128i *)v211.m256i_i8 = _mm_loadu_si128((const __m128i *)v216);
    *(_QWORD *)v216 = v255;
    *(_QWORD *)&v216[8] = sub_1416EBAE0;
    *(_QWORD *)&v216[16] = &v211;
    *(_QWORD *)&v216[24] = sub_1400015F0;
    sub_1416DAFA0(v199, &unk_141A636A3, v216);
    v162 = v211.m256i_i64[0];
    if ( v211.m256i_i64[0] )
      sub_140001660(v211.m256i_i64[1], v211.m256i_i64[0], 1);
    v251 = _mm_loadu_si128((const __m128i *)v199);
    v252 = *(_QWORD *)&v199[16];
    if ( *(_OWORD *)&v254[1] != 0 )
    {
LABEL_247:
      *(_QWORD *)v216 = &v254[1];
      *(_QWORD *)&v216[8] = sub_1416EBAE0;
      *(_QWORD *)&v216[16] = &v254[2];
      *(_QWORD *)&v216[24] = sub_1416EBAE0;
      v268 = 1;
      sub_1416DAFA0(&v245, &unk_141A5B27C, v216);
      if ( *(_QWORD *)&v201[40] != 2 )
        goto LABEL_254;
      goto LABEL_251;
    }
  }
  else
  {
    v251.m128i_i64[0] = 0;
    v251.m128i_i64[1] = 1;
    v252 = 0;
    a1 = v242;
    if ( *(_OWORD *)&v254[1] != 0 )
      goto LABEL_247;
  }
  v245 = 0;
  v246 = 1;
  v247 = 0;
  if ( *(_QWORD *)&v201[40] != 2 )
    goto LABEL_254;
LABEL_251:
  if ( **(_WORD **)&v201[32] == 27503 && !v264 && *(_OWORD *)&v254[1] == 0 )
  {
    v274 = 1;
    v192 = (_QWORD *)sub_14017AA90();
    nullsub_1(v194, v193);
    v195 = sub_140001650(28, 1);
    if ( !v195 )
    {
      v273 = (__int64)v192;
      sub_14196B2DB(1, 28);
    }
    *(_OWORD *)(v195 + 12) = *(__int128 *)((char *)&xmmword_141A60455 + 12);
    *(__m128i *)v195 = _mm_loadu_si128((const __m128i *)&xmmword_141A60455);
    *v192 = 28;
    v192[1] = v195;
    v192[2] = 28;
    *(_QWORD *)v199 = 1;
    *(_QWORD *)&v199[8] = v192;
    *(_QWORD *)&v199[16] = 1;
    v211.m256i_i64[0] = 0;
    *(_OWORD *)&v211.m256i_u64[1] = 8u;
    v273 = sub_14017AA90();
    *(_QWORD *)v216 = &v241;
    *(_QWORD *)&v216[8] = sub_1416EBAE0;
    *(_QWORD *)&v216[16] = &v238;
    *(_QWORD *)&v216[24] = sub_140191200;
    *(_QWORD *)&v216[32] = v254;
    *(_QWORD *)&v216[40] = sub_1416EBAE0;
    sub_1416DAFA0(&v207, &unk_141A636C4, v216);
    v196 = (_OWORD *)v273;
    *(_QWORD *)(v273 + 16) = v208;
    *v196 = v207;
    v197 = _mm_loadu_si128((const __m128i *)v199);
    *(__m128i *)v216 = v197;
    *(_QWORD *)&v216[16] = *(_QWORD *)&v199[16];
    *(_QWORD *)&v216[40] = v211.m256i_i64[2];
    *(_OWORD *)&v216[24] = *(_OWORD *)v211.m256i_i8;
    *(_QWORD *)(a1 + 40) = v211.m256i_i64[1];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v216[40];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v216[16];
    *(__m128i *)(a1 + 8) = v197;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v196;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( v245 )
      sub_140001660(v246, v245, 1);
    if ( v251.m128i_i64[0] )
      sub_140001660(v251.m128i_i64[1], v251.m128i_i64[0], 1);
    sub_140906D60(v201);
    sub_1400290B0(&v262);
    sub_14018E920(&v230);
    if ( v225 )
      sub_140001660(v226, v225, 1);
    sub_140032FF0(&v228);
    sub_140902D50(&si128);
  }
  else
  {
LABEL_254:
    *(_QWORD *)v255 = 0;
    *(_QWORD *)&v255[8] = 8;
    *(_QWORD *)&v255[16] = 0;
    nullsub_1(v161, v162);
    v163 = sub_140001650(24, 8);
    if ( !v163 )
    {
      v271[1] = 1;
      sub_14196B2C1(8, 24);
    }
    v166 = (_QWORD *)v163;
    nullsub_1(v165, v164);
    v167 = sub_140001650(28, 1);
    if ( !v167 )
    {
      v273 = (__int64)v166;
      sub_14196B2DB(1, 28);
    }
    *(_OWORD *)(v167 + 12) = *(__int128 *)((char *)&xmmword_141A60455 + 12);
    *(__m128i *)v167 = _mm_loadu_si128((const __m128i *)&xmmword_141A60455);
    *v166 = 28;
    v166[1] = v167;
    v166[2] = 28;
    *(_QWORD *)v199 = 1;
    *(_QWORD *)&v199[8] = v166;
    *(_QWORD *)&v199[16] = 1;
    nullsub_1(v169, v168);
    v170 = sub_140001650(24, 8);
    if ( !v170 )
    {
      v267 = 1;
      sub_14196B2C1(8, 24);
    }
    v273 = v170;
    if ( *((_QWORD *)&v203 + 1) == -1 )
    {
      v211.m256i_i64[2] = v203;
      *(__m128i *)v211.m256i_i8 = _mm_loadu_si128(&v202);
    }
    else
    {
      v211.m256i_i64[0] = *((_QWORD *)&v203 + 1);
      *(__m128i *)&v211.m256i_u64[1] = _mm_loadu_si128(&v204);
      if ( v202.m128i_i64[0] )
        sub_140001660(v202.m128i_i64[1], v202.m128i_i64[0], 1);
    }
    *(_QWORD *)v216 = &v241;
    *(_QWORD *)&v216[8] = sub_1416EBAE0;
    *(_QWORD *)&v216[16] = v254;
    *(_QWORD *)&v216[24] = sub_1416EBAE0;
    *(_QWORD *)&v216[32] = &v211;
    *(_QWORD *)&v216[40] = sub_1400015F0;
    v217.m128i_i64[0] = (__int64)&v251;
    v217.m128i_i64[1] = (__int64)sub_1400015F0;
    *(_QWORD *)&v218 = &v245;
    *((_QWORD *)&v218 + 1) = sub_1400015F0;
    sub_1416DAFA0(&v209, &unk_141A63776, v216);
    if ( v211.m256i_i64[0] )
      sub_140001660(v211.m256i_i64[1], v211.m256i_i64[0], 1);
    v171 = (_OWORD *)v273;
    *(_QWORD *)(v273 + 16) = v210;
    *v171 = v209;
    v172 = _mm_loadu_si128((const __m128i *)v255);
    *(__m128i *)v216 = v172;
    *(_QWORD *)&v216[16] = *(_QWORD *)&v255[16];
    *(_QWORD *)&v216[40] = *(_QWORD *)&v199[16];
    *(_OWORD *)&v216[24] = *(_OWORD *)v199;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v199[8];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v216[40];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v216[16];
    *(__m128i *)(a1 + 8) = v172;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v171;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( v245 )
      sub_140001660(v246, v245, 1);
    if ( v251.m128i_i64[0] )
      sub_140001660(v251.m128i_i64[1], v251.m128i_i64[0], 1);
    if ( *(_QWORD *)v201 )
      sub_140001660(*(_QWORD *)&v201[8], *(_QWORD *)v201, 1);
    if ( *(_QWORD *)&v201[24] )
      sub_140001660(*(_QWORD *)&v201[32], *(_QWORD *)&v201[24], 1);
    v173 = v264;
    if ( v264 )
    {
      v174 = (_QWORD *)(v263 + 8);
      do
      {
        v175 = *(v174 - 1);
        if ( v175 )
          sub_140001660(*v174, v175, 1);
        v174 += 3;
        --v173;
      }
      while ( v173 );
    }
    if ( v262 )
      sub_140001660(v263, 24 * v262, 8);
    v176 = v230.m128i_i64[1];
    if ( v230.m128i_i64[1] )
    {
      v177 = *((_QWORD *)&v231 + 1);
      if ( *((_QWORD *)&v231 + 1) )
      {
        v178 = v230.m128i_i64[0];
        v179 = (const __m128i *)(v230.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v230.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v181 = _mm_load_si128(v179);
              v178 -= 512;
              ++v179;
              _R15D = _mm_movemask_epi8(v181) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   ecx, r15d }
          v183 = v178 - (unsigned int)(32 * _ECX);
          v184 = *(_QWORD *)(v183 - 32);
          if ( v184 )
            sub_140001660(*(_QWORD *)(v183 - 24), v184, 1);
          --v177;
          _R15D &= _R15D - 1;
        }
        while ( v177 );
      }
      v185 = 32 * v176;
      v186 = 33 * v176;
      v50 = v186 == -49;
      v187 = v186 + 49;
      a1 = v242;
      if ( !v50 )
        sub_140001660(v230.m128i_i64[0] - v185 - 32, v187, 16);
    }
    if ( v225 )
      sub_140001660(v226, v225, 1);
    sub_140032FF0(&v228);
    v188 = si128.m128i_i64[1];
    v189 = v237;
    if ( v237 )
    {
      v190 = (_QWORD *)si128.m128i_i64[1];
      do
      {
        sub_1401B0EA0(v190);
        v190 += 24;
        --v189;
      }
      while ( v189 );
    }
    if ( si128.m128i_i64[0] )
      sub_140001660(v188, 192 * si128.m128i_i64[0], 8);
  }
  return a1;
}
