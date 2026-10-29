// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f39bb0 | name sub_140F39BB0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F39BB0(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  _BYTE *v9; // rdi
  __int64 result; // rax
  __int128 v11; // xmm0
  __m128i v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rcx
  const __m128i *v25; // r14
  signed __int64 v26; // rbx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r12
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __m128i *v32; // rax
  __m128i *v33; // rax
  __int64 v34; // r15
  unsigned __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 (__fastcall *v46)(); // r14
  __int64 v47; // rax
  __int64 v48; // r13
  signed __int64 v49; // r15
  _BYTE *v50; // rsi
  __int64 (__fastcall *v51)(); // rdi
  const __m128i *v52; // r12
  __int64 v53; // r14
  __m128i *v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rbx
  char v57; // al
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  char v61; // al
  int v62; // ebx
  int v63; // r12d
  __int64 v64; // r15
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rbx
  __m128i v76; // xmm0
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  int v81; // ebx
  int v82; // r14d
  __m128i v83; // xmm0
  _OWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned __int128 v87; // kr00_16
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 (__fastcall *v95)(unsigned __int64); // rax
  __int64 v96; // r15
  __int64 v97; // r14
  __int64 v98; // rdi
  unsigned __int64 v99; // rdi
  _QWORD *v100; // r13
  __int64 v101; // rdx
  __int64 *v102; // rax
  __int64 v103; // r12
  __int64 v104; // rax
  __m128i v105; // xmm0
  __int64 v106; // rax
  unsigned __int64 v107; // r8
  _BYTE *v108; // rdx
  _BYTE *v109; // rcx
  _BYTE *v110; // rax
  _BYTE *v111; // rdx
  unsigned __int64 v112; // rcx
  __int64 v113; // r10
  __int64 v114; // r11
  unsigned __int64 v115; // rdi
  __int64 v116; // rcx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // r9
  unsigned __int64 v119; // rax
  __int64 v120; // rdx
  unsigned __int64 v121; // r13
  __int64 v122; // r9
  unsigned __int64 v123; // r8
  __int64 v124; // rax
  unsigned __int8 *v125; // r9
  const __m128i *v126; // r13
  char v127; // al
  unsigned __int64 v128; // rsi
  __m128i *v129; // rax
  unsigned __int64 v130; // r8
  unsigned int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // r13
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rdx
  unsigned __int8 *v142; // rax
  __int128 v143; // xmm1
  __int64 v144; // rcx
  char v145; // al
  __int64 v146; // rdx
  __int64 v147; // rdi
  unsigned __int64 v148; // rdi
  __int64 v149; // rdx
  __int64 v150; // rdi
  const char *v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rcx
  _QWORD *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rax
  _OWORD *v159; // rcx
  __m128i v160; // xmm0
  __int64 v161; // rsi
  _QWORD *v162; // rdi
  __int64 v163; // rdx
  __int64 v164; // rsi
  __int64 v165; // rdi
  __int64 v166; // rbx
  const __m128i *v167; // r14
  __m128i v169; // xmm0
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rsi
  __int64 v175; // rcx
  __int64 v176; // rsi
  _QWORD *v177; // rdi
  __int64 v178; // rcx
  __int64 v179; // rax
  _OWORD *v180; // rcx
  __m128i v181; // xmm0
  __int64 v182; // rcx
  __int64 v183; // [rsp+30h] [rbp-50h]
  _BYTE v184[48]; // [rsp+80h] [rbp+0h] BYREF
  __m128i v185; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v186; // [rsp+C0h] [rbp+40h]
  __m128i v187; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v188; // [rsp+2E0h] [rbp+260h]
  __int64 v189; // [rsp+540h] [rbp+4C0h]
  __int64 v190; // [rsp+548h] [rbp+4C8h]
  __m128i v191[38]; // [rsp+550h] [rbp+4D0h] BYREF
  __int128 v192; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v193; // [rsp+7C0h] [rbp+740h]
  __int128 v194; // [rsp+7C8h] [rbp+748h] BYREF
  __int64 v195; // [rsp+7D8h] [rbp+758h]
  __m256i v196; // [rsp+7E0h] [rbp+760h] BYREF
  __int128 v197; // [rsp+800h] [rbp+780h]
  __m128i v198; // [rsp+810h] [rbp+790h]
  __int128 v199; // [rsp+820h] [rbp+7A0h]
  __m128i v200; // [rsp+830h] [rbp+7B0h]
  _BYTE v201[48]; // [rsp+A40h] [rbp+9C0h] BYREF
  __m128i v202; // [rsp+A70h] [rbp+9F0h]
  __int128 v203; // [rsp+A80h] [rbp+A00h]
  __m128i v204; // [rsp+A90h] [rbp+A10h]
  __int64 v205; // [rsp+CB0h] [rbp+C30h]
  _BYTE *v206; // [rsp+CB8h] [rbp+C38h]
  _BYTE *v207; // [rsp+CC0h] [rbp+C40h]
  __int64 v208; // [rsp+CC8h] [rbp+C48h]
  __int64 v209; // [rsp+CD0h] [rbp+C50h] BYREF
  __int64 v210; // [rsp+CD8h] [rbp+C58h]
  __int64 v211; // [rsp+CE0h] [rbp+C60h]
  char v212; // [rsp+CF0h] [rbp+C70h] BYREF
  _BYTE v213[31]; // [rsp+CF1h] [rbp+C71h]
  __int64 v214; // [rsp+D10h] [rbp+C90h]
  unsigned __int64 v215; // [rsp+D18h] [rbp+C98h]
  __m128i si128; // [rsp+D20h] [rbp+CA0h] BYREF
  __int64 v217; // [rsp+D30h] [rbp+CB0h]
  __m128i v218; // [rsp+D40h] [rbp+CC0h] BYREF
  __int64 v219; // [rsp+D50h] [rbp+CD0h]
  __m128i v220; // [rsp+D60h] [rbp+CE0h] BYREF
  __int128 v221; // [rsp+D70h] [rbp+CF0h]
  __int64 v222; // [rsp+D80h] [rbp+D00h]
  __int64 v223; // [rsp+D88h] [rbp+D08h]
  __int64 v224; // [rsp+D98h] [rbp+D18h] BYREF
  __int64 v225; // [rsp+DA0h] [rbp+D20h] BYREF
  __int64 v226; // [rsp+DA8h] [rbp+D28h]
  __int64 v227; // [rsp+DB0h] [rbp+D30h]
  __int64 v228; // [rsp+DB8h] [rbp+D38h]
  __int64 v229; // [rsp+DC0h] [rbp+D40h] BYREF
  __int64 v230; // [rsp+DC8h] [rbp+D48h]
  __int64 v231; // [rsp+DD0h] [rbp+D50h]
  _QWORD v232[4]; // [rsp+DE0h] [rbp+D60h] BYREF
  __int128 v233; // [rsp+E00h] [rbp+D80h] BYREF
  __int64 v234; // [rsp+E10h] [rbp+D90h]
  __int64 v235; // [rsp+E18h] [rbp+D98h]
  _BYTE v236[31]; // [rsp+E20h] [rbp+DA0h] BYREF
  __int64 v237; // [rsp+E40h] [rbp+DC0h]
  __int64 v238; // [rsp+E48h] [rbp+DC8h]
  __int64 v239; // [rsp+E50h] [rbp+DD0h]
  __int64 v240; // [rsp+E58h] [rbp+DD8h]
  __int128 v241; // [rsp+E60h] [rbp+DE0h]
  unsigned __int64 v242; // [rsp+E70h] [rbp+DF0h]
  __m128i v243; // [rsp+E78h] [rbp+DF8h] BYREF
  __m128i v244; // [rsp+E88h] [rbp+E08h] BYREF
  unsigned __int8 *v245; // [rsp+E98h] [rbp+E18h]
  __int64 v246; // [rsp+EA0h] [rbp+E20h] BYREF
  __int64 v247; // [rsp+EA8h] [rbp+E28h]
  __int64 v248; // [rsp+EB0h] [rbp+E30h]
  __int64 v249; // [rsp+EB8h] [rbp+E38h]
  __int64 v250; // [rsp+EC0h] [rbp+E40h]
  unsigned __int64 v251; // [rsp+EC8h] [rbp+E48h]
  char v252; // [rsp+ED0h] [rbp+E50h]
  char v253; // [rsp+ED1h] [rbp+E51h]
  char v254; // [rsp+ED2h] [rbp+E52h]
  char v255; // [rsp+ED3h] [rbp+E53h]
  _BYTE v256[3]; // [rsp+ED4h] [rbp+E54h] BYREF
  char v257; // [rsp+ED7h] [rbp+E57h]
  __int64 v258; // [rsp+ED8h] [rbp+E58h]
  char v259; // [rsp+EE5h] [rbp+E65h]
  char v260; // [rsp+EE6h] [rbp+E66h]
  char v261; // [rsp+EE7h] [rbp+E67h]
  __int64 v262; // [rsp+EE8h] [rbp+E68h]

  v262 = -2;
  sub_1401B7010(v184);
  if ( !*(_QWORD *)&v184[16] )
  {
    if ( *(_QWORD *)v184 )
      sub_140001660(*(_QWORD *)&v184[8], 32LL * *(_QWORD *)v184, 8);
    nullsub_1(v4);
    v14 = sub_140001650(24, 8);
    if ( !v14 )
      sub_141938D11(8, 24);
    v16 = (_QWORD *)v14;
    nullsub_1(v15);
    v17 = sub_140001650(28, 1);
    if ( !v17 )
    {
      v258 = (__int64)v16;
      sub_141938D2B(1, 28);
    }
    *(_OWORD *)(v17 + 12) = *(__int128 *)((char *)&xmmword_141A5DFDC + 12);
    *(__m128i *)v17 = _mm_loadu_si128((const __m128i *)&xmmword_141A5DFDC);
    *v16 = 28;
    v16[1] = v17;
    v16[2] = 28;
    v196.m256i_i64[0] = 1;
    v196.m256i_i64[1] = (__int64)v16;
    v196.m256i_i64[2] = 1;
    *(_QWORD *)v201 = 0;
    *(_QWORD *)&v201[8] = 8;
    *(_QWORD *)&v201[16] = 0;
    nullsub_1(v18);
    v19 = sub_140001650(24, 8);
    if ( !v19 )
      sub_141938D11(8, 24);
    v21 = (_QWORD *)v19;
    nullsub_1(v20);
    v22 = sub_140001650(33, 1);
    if ( !v22 )
    {
      v258 = (__int64)v21;
      sub_141938D2B(1, 33);
    }
    *(_OWORD *)(v22 + 16) = xmmword_141A5EDBC;
    *(_OWORD *)v22 = xmmword_141A5EDAC;
    *(_BYTE *)(v22 + 32) = -115;
    *v21 = 33;
    v21[1] = v22;
    v21[2] = 33;
    *(_QWORD *)&v184[16] = v196.m256i_i64[2];
    v23 = _mm_loadu_si128((const __m128i *)&v196);
    *(__m128i *)v184 = v23;
    *(_QWORD *)&v184[40] = *(_QWORD *)&v201[16];
    *(_OWORD *)&v184[24] = *(_OWORD *)v201;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v201[8];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v184[40];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v184[16];
    result = *(_QWORD *)&v184[24];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v184[24];
    *(__m128i *)(a1 + 8) = v23;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v21;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    return result;
  }
  v5 = *(_QWORD *)&v184[8];
  v6 = 32LL * *(_QWORD *)&v184[16];
  v7 = 0;
  do
  {
    v8 = *(_QWORD *)(v5 + v7);
    if ( v8 )
      sub_140001660(*(_QWORD *)(v5 + v7 + 8), v8, 1);
    v7 += 32;
  }
  while ( v6 != v7 );
  if ( *(_QWORD *)v184 )
    sub_140001660(v5, 32LL * *(_QWORD *)v184, 8);
  v9 = v184;
  sub_140F33330(v184, a2);
  result = *(_QWORD *)v184;
  *(_OWORD *)v201 = *(_OWORD *)&v184[8];
  *(_QWORD *)&v201[16] = *(_QWORD *)&v184[24];
  if ( *(_QWORD *)v184 != -1 )
  {
    v11 = *(_OWORD *)&v184[32];
    v12 = v185;
    v13 = v186;
    *(__m128i *)(a1 + 80) = v187;
    *(_OWORD *)(a1 + 64) = v13;
    *(__m128i *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v201[16];
    *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)v201);
    *(_QWORD *)a1 = result;
    return result;
  }
  si128 = _mm_load_si128((const __m128i *)v201);
  v217 = *(_QWORD *)&v201[16];
  sub_140235060(&v243, a2);
  v237 = v243.m128i_i64[0];
  if ( v243.m128i_i64[0] == -1 )
  {
    v220.m128i_i64[0] = 0;
    *(_QWORD *)&v221 = 0;
    nullsub_1(v24);
    v30 = (_DWORD *)sub_140001650(4, 1);
    if ( !v30 )
      sub_141938D2B(1, 4);
    *v30 = 1954047348;
    v196.m256i_i64[0] = 4;
    v196.m256i_i64[1] = (__int64)v30;
    v196.m256i_i64[2] = 4;
    nullsub_1(v31);
    v32 = (__m128i *)sub_140001650(91, 1);
    v258 = (__int64)v32;
    if ( !v32 )
      sub_141938D2B(1, 91);
    qmemcpy(&v32[1], "s instructions carefully. Respond helpfully and use tools when appropriate.", 75);
    *v32 = _mm_loadu_si128((const __m128i *)&xmmword_141A5C607);
    v184[0] = 3;
    *(_QWORD *)&v184[8] = 91;
    *(_QWORD *)&v184[16] = v32;
    *(_QWORD *)&v184[24] = 91;
    sub_140E72AA0(v201, &v220, &v196, v184);
    if ( v201[0] != 0xFF )
      sub_14002F9D0(v201);
    *(__m128i *)&v184[7] = v220;
    *(_QWORD *)&v184[23] = v221;
    *(_OWORD *)v201 = *(_OWORD *)v184;
    *(_OWORD *)&v201[15] = __PAIR128__(v221, v220.m128i_u64[1]);
  }
  else
  {
    v25 = (const __m128i *)v243.m128i_i64[1];
    v26 = v244.m128i_i64[0];
    v220.m128i_i64[0] = 0;
    *(_QWORD *)&v221 = 0;
    nullsub_1(v24);
    v27 = (_DWORD *)sub_140001650(4, 1);
    v258 = (__int64)v25;
    if ( !v27 )
      sub_141938D2B(1, 4);
    *v27 = 1954047348;
    v196.m256i_i64[0] = 4;
    v196.m256i_i64[1] = (__int64)v27;
    v196.m256i_i64[2] = 4;
    if ( v26 < 0 )
    {
      v29 = 0;
      goto LABEL_22;
    }
    if ( v26 )
    {
      nullsub_1(v28);
      v29 = 1;
      v33 = (__m128i *)sub_140001650(v26, 1);
      if ( !v33 )
      {
LABEL_22:
        v255 = 1;
        sub_141938D2B(v29, v26);
      }
      v34 = (__int64)v33;
      sub_1418F44E0(v33, v25, v26);
    }
    else
    {
      v34 = 1;
    }
    v184[0] = 3;
    *(_QWORD *)&v184[8] = v26;
    *(_QWORD *)&v184[16] = v34;
    *(_QWORD *)&v184[24] = v26;
    v255 = 0;
    sub_140E72AA0(v201, &v220, &v196, v184);
    if ( v201[0] != 0xFF )
      sub_14002F9D0(v201);
    *(_QWORD *)&v184[23] = v221;
    *(__m128i *)&v184[7] = v220;
    *(_OWORD *)v201 = *(_OWORD *)v184;
    *(_OWORD *)&v201[15] = __PAIR128__(v221, v220.m128i_u64[1]);
    if ( v237 )
      sub_140001660(v258, v237, 1);
  }
  v212 = 5;
  *(__m128i *)v213 = _mm_load_si128((const __m128i *)v201);
  *(_OWORD *)&v213[15] = *(_OWORD *)&v201[15];
  v35 = *(_QWORD *)(a2 + 776);
  v36 = *(_QWORD *)(a2 + 784);
  sub_1416828D0((unsigned int)&v209, v35, v36, (unsigned int)&unk_141A610AE, 26);
  v38 = sub_14167F170(v37);
  v39 = v38;
  v40 = *(_BYTE *)(v38 + 16) == 1;
  v205 = a2;
  v242 = v35;
  v235 = v36;
  if ( v40 )
  {
    v41 = *(_QWORD *)v38;
    v42 = *(_QWORD *)(v39 + 8);
  }
  else
  {
    v41 = sub_141696260();
    *(_QWORD *)v39 = v41;
    *(_QWORD *)(v39 + 8) = v42;
    *(_BYTE *)(v39 + 16) = 1;
  }
  v43 = v41 + 1;
  *(_QWORD *)v39 = v41 + 1;
  v221 = *(&off_141A56DB0 + 1);
  v220 = _mm_loadu_si128((const __m128i *)&off_141A56DB0);
  v222 = v41;
  v223 = v42;
  v225 = 0;
  v246 = 0;
  v247 = 8;
  v248 = 0;
  v44 = si128.m128i_i64[1];
  v45 = si128.m128i_i64[1] + 192 * v217;
  v46 = sub_1400015F0;
  while ( v44 != v45 )
  {
    v48 = v44;
    v44 += 192;
    if ( *(_QWORD *)(v48 + 80) == -1 )
    {
      sub_1416AC440(v9, v48 + 32);
      v56 = v248;
      if ( v248 != v246 )
        goto LABEL_39;
LABEL_47:
      sub_14190FDC0(&v246);
      goto LABEL_39;
    }
    v258 = v44;
    v49 = *(_QWORD *)(v48 + 96);
    if ( v49 < 0 )
    {
      v53 = 0;
LABEL_92:
      sub_141938D2B(v53, v49);
    }
    if ( v49 )
    {
      v250 = v45;
      v251 = a1;
      v50 = v9;
      v51 = v46;
      v52 = *(const __m128i **)(v48 + 88);
      nullsub_1(v43);
      v53 = 1;
      v54 = (__m128i *)sub_140001650(v49, 1);
      if ( !v54 )
        goto LABEL_92;
      v55 = (__int64)v54;
      sub_1418F44E0(v54, v52, v49);
      v46 = v51;
      v9 = v50;
      a1 = v251;
      v45 = v250;
    }
    else
    {
      v55 = 1;
    }
    v57 = *(_BYTE *)(v48 + 104);
    *(_QWORD *)v184 = v49;
    *(_QWORD *)&v184[8] = v55;
    *(_QWORD *)&v184[16] = v49;
    v184[24] = v57;
    v44 = v48 + 192;
    if ( !(unsigned __int8)sub_1403A6F90(&v220, v9) )
    {
      sub_140237500(&v196, *(_QWORD *)(v48 + 88), *(_QWORD *)(v48 + 96));
      if ( v196.m256i_i32[0] == -1 )
      {
        if ( v196.m256i_i64[1] == -1 )
        {
          sub_1416AC440(v9, v48 + 32);
          v56 = v248;
          if ( v248 == v246 )
            goto LABEL_47;
LABEL_39:
          v47 = v247;
          v43 = 3 * v56;
          *(_QWORD *)(v247 + 8 * v43 + 16) = *(_QWORD *)&v184[16];
          *(__m128i *)(v47 + 8 * v43) = _mm_loadu_si128((const __m128i *)v184);
          v248 = v56 + 1;
        }
        else
        {
          v251 = v196.m256i_u64[1];
          v250 = v45;
          v241 = *(_OWORD *)&v196.m256i_u64[2];
          v61 = sub_140F331B0(v196.m256i_i64[2]);
          v45 = v250;
          v44 = v48 + 192;
          if ( v61 != 2 )
          {
            v184[0] = 1;
            v62 = v210;
            v63 = v211;
            v64 = sub_14168A790(v9, v210, v211);
            if ( v64 )
              goto LABEL_64;
            v239 = v48 + 32;
            *(_QWORD *)v184 = v48 + 32;
            *(_QWORD *)&v184[8] = v46;
            sub_1416ABFD0(v201, &unk_141A57E79, v9);
            v249 = *(_QWORD *)&v201[8];
            sub_1416828D0((_DWORD)v9, v62, v63, *(_DWORD *)&v201[8], *(__int64 *)&v201[16]);
            if ( *(_QWORD *)v201 )
              sub_140001660(v249, *(_QWORD *)v201, 1);
            v249 = *(_QWORD *)&v184[8];
            v64 = sub_14169D690(*(_QWORD *)&v184[8], *(_QWORD *)&v184[16], v241, *((_QWORD *)&v241 + 1));
            if ( *(_QWORD *)v184 )
              sub_140001660(v249, *(_QWORD *)v184, 1);
            if ( v64 )
            {
LABEL_64:
              v196.m256i_i64[0] = v64;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                *(_QWORD *)v201 = v48 + 32;
                *(_QWORD *)&v201[8] = v46;
                *(_QWORD *)&v201[16] = &v196;
                *(_QWORD *)&v201[24] = sub_1416BB0B0;
                v185.m128i_i64[0] = 2;
                v185.m128i_i64[1] = (__int64)aCodexmateLibCo_42;
                *(_QWORD *)&v186 = 44;
                v187.m128i_i64[0] = (__int64)&unk_141A610C8;
                v187.m128i_i64[1] = (__int64)v201;
                *(_QWORD *)v184 = 0;
                *(_QWORD *)&v184[8] = aCodexmateLibCo_42;
                *(_OWORD *)&v184[16] = 0x2Cu;
                *(_QWORD *)&v184[32] = aSrcCoreRelayCo_3;
                *(_QWORD *)&v184[40] = 34;
                *((_QWORD *)&v186 + 1) = 0x180400000001LL;
                sub_1414D53A0(v256, v9);
              }
              sub_1416AC440(v9, v48 + 32);
              v65 = v248;
              if ( v248 == v246 )
                sub_14190FDC0(&v246);
              v66 = v247;
              v67 = 3 * v65;
              *(_QWORD *)(v247 + 8 * v67 + 16) = *(_QWORD *)&v184[16];
              *(__m128i *)(v66 + 8 * v67) = _mm_loadu_si128((const __m128i *)v184);
              v248 = v65 + 1;
              v43 = v196.m256i_i8[0] & 3;
              if ( (unsigned int)(v43 - 2) >= 2 && (v196.m256i_i8[0] & 3) != 0 )
              {
                *(_QWORD *)&v184[8] = v196.m256i_i64[0] - 1;
                v184[0] = 3;
                sub_1416BCB00(&v184[8]);
              }
LABEL_79:
              v45 = v250;
              v44 = v258;
              goto LABEL_80;
            }
            sub_140F423D0(v201, v241, *((_QWORD *)&v241 + 1), &v212);
            if ( *(_DWORD *)v201 != -1 )
            {
              v187 = v204;
              v186 = v203;
              v68 = _mm_loadu_si128((const __m128i *)v201);
              v185 = v202;
              *(_OWORD *)&v184[32] = *(_OWORD *)&v201[32];
              *(_OWORD *)&v184[16] = *(_OWORD *)&v201[16];
              *(__m128i *)v184 = v68;
              v69 = v239;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v243.m128i_i64[0] = v239;
                v243.m128i_i64[1] = (__int64)v46;
                v244.m128i_i64[0] = (__int64)v9;
                v244.m128i_i64[1] = (__int64)sub_14104A7D0;
                v196.m256i_i64[0] = (__int64)aCodexmateLibCo_42;
                v196.m256i_i64[1] = 44;
                v196.m256i_i64[2] = (__int64)aCodexmateLibCo_42;
                v196.m256i_i64[3] = 44;
                *(_QWORD *)&v197 = &off_141A61190;
                sub_140BAD520(&unk_141A61158, &v243, 2, &v196);
              }
              sub_1416AC440(&v196, v69);
              v70 = v248;
              if ( v248 == v246 )
                sub_14190FDC0(&v246);
              v71 = v247;
              v72 = 3 * v70;
              *(_QWORD *)(v247 + 8 * v72 + 16) = v196.m256i_i64[2];
              *(__m128i *)(v71 + 8 * v72) = _mm_loadu_si128((const __m128i *)&v196);
              v248 = v70 + 1;
              sub_140E97700(v9);
              goto LABEL_79;
            }
            v249 = *(_QWORD *)&v201[8];
            v73 = *(_QWORD *)(v48 + 88);
            v74 = *(_QWORD *)(v48 + 96);
            v183 = *((_QWORD *)&v241 + 1);
            *((_QWORD *)&v241 + 1) = *(_QWORD *)&v201[16];
            sub_14023D390((unsigned int)v201, v73, v74, *(_DWORD *)&v201[16], *(__int64 *)&v201[24], v241, v183);
            v45 = v250;
            v44 = v258;
            v75 = v239;
            if ( *(_DWORD *)v201 == -1 )
            {
              ++v225;
            }
            else
            {
              v187 = v204;
              v186 = v203;
              v76 = _mm_loadu_si128((const __m128i *)v201);
              v185 = v202;
              *(_OWORD *)&v184[32] = *(_OWORD *)&v201[32];
              *(_OWORD *)&v184[16] = *(_OWORD *)&v201[16];
              *(__m128i *)v184 = v76;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v243.m128i_i64[0] = v239;
                v243.m128i_i64[1] = (__int64)v46;
                v244.m128i_i64[0] = (__int64)v9;
                v244.m128i_i64[1] = (__int64)sub_14104A7D0;
                v196.m256i_i64[0] = (__int64)aCodexmateLibCo_42;
                v196.m256i_i64[1] = 44;
                v196.m256i_i64[2] = (__int64)aCodexmateLibCo_42;
                v196.m256i_i64[3] = 44;
                *(_QWORD *)&v197 = &off_141A61140;
                sub_140BAD520(&unk_141A61109, &v243, 2, &v196);
              }
              sub_1416AC440(&v196, v75);
              v77 = v248;
              if ( v248 == v246 )
                sub_14190FDC0(&v246);
              v78 = v247;
              v79 = 3 * v77;
              *(_QWORD *)(v247 + 8 * v79 + 16) = v196.m256i_i64[2];
              *(__m128i *)(v78 + 8 * v79) = _mm_loadu_si128((const __m128i *)&v196);
              v248 = v77 + 1;
              sub_140E97700(v9);
            }
            if ( v249 )
              sub_140001660(*((_QWORD *)&v241 + 1), v249, 1);
          }
LABEL_80:
          if ( v251 )
            sub_140001660(v241, v251, 1);
        }
      }
      else
      {
        v204 = v200;
        v203 = v199;
        v202 = v198;
        *(_OWORD *)&v201[32] = v197;
        *(__m256i *)v201 = v196;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          v243.m128i_i64[0] = v48 + 32;
          v243.m128i_i64[1] = (__int64)v46;
          v244.m128i_i64[0] = (__int64)v201;
          v244.m128i_i64[1] = (__int64)sub_14104A7D0;
          v185.m128i_i64[0] = 2;
          v185.m128i_i64[1] = (__int64)aCodexmateLibCo_42;
          *(_QWORD *)&v186 = 44;
          v187.m128i_i64[0] = (__int64)&unk_141A611A8;
          v187.m128i_i64[1] = (__int64)&v243;
          *(_QWORD *)v184 = 0;
          *(_QWORD *)&v184[8] = aCodexmateLibCo_42;
          *(_OWORD *)&v184[16] = 0x2Cu;
          *(_QWORD *)&v184[32] = aSrcCoreRelayCo_3;
          *(_QWORD *)&v184[40] = 34;
          *((_QWORD *)&v186 + 1) = 0x17F100000001LL;
          sub_1414D53A0(v256, v9);
        }
        sub_1416AC440(v9, v48 + 32);
        v58 = v248;
        if ( v248 == v246 )
          sub_14190FDC0(&v246);
        v59 = v247;
        v60 = 3 * v58;
        *(_QWORD *)(v247 + 8 * v60 + 16) = *(_QWORD *)&v184[16];
        *(__m128i *)(v59 + 8 * v60) = _mm_loadu_si128((const __m128i *)v184);
        v248 = v58 + 1;
        sub_140E97700(v201);
      }
    }
  }
  sub_1416828D0((unsigned int)&v229, v242, v235, (unsigned int)&unk_141A5C5AC, 24);
  nullsub_1(v80);
  v258 = sub_140001650(32, 8);
  if ( !v258 )
    sub_141938D11(8, 32);
  v81 = v230;
  v82 = v231;
  sub_1416828D0((unsigned int)v184, v230, v231, (unsigned int)&unk_141A5CB1B, 12);
  v83 = _mm_loadu_si128((const __m128i *)v184);
  v84 = (_OWORD *)v258;
  *(_OWORD *)(v258 + 16) = *(_OWORD *)&v184[16];
  *v84 = v83;
  *(_QWORD *)&v233 = 1;
  *((_QWORD *)&v233 + 1) = v84;
  v234 = 1;
  v254 = 1;
  sub_1416828D0((unsigned int)&v218, v81, v82, (unsigned int)&unk_141A5CB59, 7);
  memset(v232, 0, 24);
  v261 = 1;
  sub_141695AF0(v201, v218.m128i_i64[1], v219);
  v87 = *(_OWORD *)v201;
  if ( *(_QWORD *)v201 != 2 )
  {
    sub_1418F44E0(v191, (const __m128i *)&v201[16], 0x260u);
    v242 = v87;
    v251 = v87 >> 64;
    v189 = v87;
    v190 = *((_QWORD *)&v87 + 1);
    *(_QWORD *)v184 = 0;
    v188 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_140289710(&v196, v184);
        if ( !v196.m256i_i64[0] )
        {
          v260 = 1;
          sub_140191C80(v184);
          goto LABEL_122;
        }
        sub_1418F44E0((__m128i *)v201, (const __m128i *)&v196, 0x258u);
        sub_14168A660(&v243, v201);
        v257 = 1;
        v258 = v243.m128i_i64[1];
        v90 = sub_141682BC0(v243.m128i_i64[1], v244.m128i_i64[0]);
        if ( v90 )
        {
          v257 = 1;
          sub_1416B3AE0(v236, v90, v91);
          if ( *(_DWORD *)v236 != 1 && *(_QWORD *)&v236[16] == 4 && **(_DWORD **)&v236[8] == 1852797802 )
            break;
        }
        if ( v243.m128i_i64[0] )
          sub_140001660(v258, v243.m128i_i64[0], 1);
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v201) )
          goto LABEL_106;
      }
      v250 = v243.m128i_i64[0];
      v92 = v234;
      if ( v234 == (_QWORD)v233 )
        sub_14190F570(&v233);
      v93 = *((_QWORD *)&v233 + 1);
      v94 = 32 * v92;
      *(_QWORD *)(*((_QWORD *)&v233 + 1) + v94) = v250;
      *(_QWORD *)(v93 + v94 + 8) = v258;
      *(__m128i *)(v93 + v94 + 16) = _mm_loadu_si128(&v244);
      v234 = v92 + 1;
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v201) )
LABEL_106:
        sub_14119A730(v201);
    }
  }
  v88 = v201[8] & 3;
  switch ( v201[8] & 3 )
  {
    case 0:
      LOBYTE(v89) = *(_BYTE *)(*(_QWORD *)&v201[8] + 16LL);
      break;
    case 1:
      LOBYTE(v89) = *(_BYTE *)(*(_QWORD *)&v201[8] + 31LL);
      break;
    case 2:
      v251 = *(_QWORD *)&v201[8];
      v242 = *(_QWORD *)v201;
      v260 = 1;
      v95 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v86, v85) + 8);
      v260 = 1;
      LOBYTE(v89) = v95(HIDWORD(v251));
      v87 = __PAIR128__(v251, v242);
      break;
    case 3:
      v89 = HIDWORD(*(_QWORD *)&v201[8]);
      break;
  }
  if ( (_BYTE)v89 )
  {
    v232[1] = 1;
    if ( (unsigned int)(v88 - 2) >= 2 && v88 )
    {
      *(_QWORD *)&v184[8] = *((_QWORD *)&v87 + 1) - 1LL;
      v184[0] = 3;
      v261 = 1;
      sub_1416BCB00(&v184[8]);
    }
  }
  else
  {
    v251 = v87 >> 64;
    v242 = v87;
    if ( (unsigned int)(v88 - 2) >= 2 && v88 )
    {
      *(_QWORD *)&v184[8] = v251 - 1;
      v184[0] = 3;
      v260 = 0;
      sub_1416BCB00(&v184[8]);
    }
  }
LABEL_122:
  v96 = *((_QWORD *)&v233 + 1);
  v97 = *((_QWORD *)&v233 + 1) + 32 * v234;
  v243.m128i_i64[0] = *((_QWORD *)&v233 + 1);
  v241 = v233;
  v244.m128i_i64[0] = v233;
  v244.m128i_i64[1] = v97;
  v98 = v97 - 32;
  v249 = v97 - 32;
LABEL_123:
  v99 = v98 - v96;
  v100 = (_QWORD *)(v96 + 40);
  while ( 1 )
  {
    if ( v96 == v97 )
      goto LABEL_231;
    v102 = (__int64 *)v96;
    v96 += 32;
    v243.m128i_i64[1] = v96;
    v258 = *v102;
    if ( v258 == -1 )
      break;
    v103 = v102[2];
    v250 = v102[1];
    sub_141695A00(v184, v250, v103);
    if ( *(_DWORD *)v184 == 2 )
    {
      if ( (v184[8] & 3u) - 2 >= 2 && (v184[8] & 3) != 0 )
      {
        --*(_QWORD *)&v184[8];
        v184[0] = 3;
        sub_1416BCB00(&v184[8]);
      }
    }
    else
    {
      sub_14169D1D0(v184, v250, v103);
      if ( *(_QWORD *)v184 == -1 )
      {
        ++v232[1];
        if ( (v184[8] & 3u) - 2 >= 2 && (v184[8] & 3) != 0 )
        {
          *(_QWORD *)&v201[8] = *(_QWORD *)&v184[8] - 1LL;
          v201[0] = 3;
          sub_1416BCB00(&v201[8]);
        }
      }
      else
      {
        v242 = *(_QWORD *)v184;
        v104 = *(_QWORD *)&v184[16];
        *(_OWORD *)v184 = *(_OWORD *)&v184[8];
        *(_OWORD *)&v184[16] = 0;
        v235 = *(_QWORD *)v184;
        *(_QWORD *)&v184[32] = *(_QWORD *)v184;
        *(_QWORD *)&v184[40] = v104;
        sub_14062D280(v201, v184);
        if ( v201[0] != 0xFF )
        {
          v105 = _mm_loadu_si128((const __m128i *)v201);
          *(_OWORD *)&v196.m256i_u64[2] = *(_OWORD *)&v201[16];
          *(__m128i *)v196.m256i_i8 = v105;
          v106 = sub_1416419F0(aEntries_1, 7, &v196);
          if ( v106 && *(_BYTE *)v106 == 4 )
          {
            v108 = *(_BYTE **)(v106 + 16);
            v109 = &v108[32 * *(_QWORD *)(v106 + 24)];
            v226 = 0;
LABEL_143:
            v110 = v108;
            while ( 2 )
            {
              if ( v110 != v109 )
              {
                v111 = v110 + 32;
                v40 = *v110 == 5;
                v110 += 32;
                if ( !v40 )
                  continue;
                v206 = v109;
                v112 = *((_QWORD *)v111 - 3);
                v207 = v111;
                if ( v112 )
                {
                  v107 = *((_QWORD *)v111 - 2);
                  v113 = *((_QWORD *)v111 - 1);
                  v114 = 1;
                }
                else
                {
                  v113 = 0;
                  v114 = 0;
                }
                v115 = 0;
                while ( 1 )
                {
LABEL_150:
                  if ( !v113 )
                  {
                    v109 = v206;
                    v108 = v207;
                    goto LABEL_143;
                  }
                  if ( (v114 & 1) == 0 || v115 != 0 )
                  {
                    if ( (v114 & 1) == 0 )
                      sub_141939020(&off_141A599F0);
                  }
                  else
                  {
                    v114 = 1;
                    if ( v107 )
                    {
                      v115 = v112;
                      if ( (v107 & 7) != 0 )
                      {
                        v116 = 0;
                        do
                        {
                          v115 = *(_QWORD *)(v115 + 632);
                          ++v116;
                        }
                        while ( (v107 & 7) != v116 );
                        v117 = v107 - v116;
                      }
                      else
                      {
                        v117 = v107;
                      }
                      if ( v107 >= 8 )
                      {
                        do
                        {
                          v115 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v115 + 632) + 632LL) + 632LL)
                                                                                           + 632LL)
                                                                               + 632LL)
                                                                   + 632LL)
                                                       + 632LL)
                                           + 632LL);
                          v117 -= 8LL;
                        }
                        while ( v117 );
                      }
                    }
                    else
                    {
                      v115 = v112;
                    }
                    v107 = 0;
                    v112 = 0;
                  }
                  if ( v107 >= *(unsigned __int16 *)(v115 + 626) )
                  {
                    do
                    {
                      v118 = *(_QWORD *)(v115 + 352);
                      if ( !v118 )
                        sub_141939020(&off_141A571C8);
                      ++v112;
                      v119 = *(unsigned __int16 *)(v115 + 624);
                      v115 = *(_QWORD *)(v115 + 352);
                    }
                    while ( (unsigned __int16)v119 >= *(_WORD *)(v118 + 626) );
                  }
                  else
                  {
                    v118 = v115;
                    v119 = v107;
                  }
                  if ( v112 )
                  {
                    v120 = v118 + 8 * v119 + 640;
                    if ( (v112 & 7) != 0 )
                    {
                      v121 = v118;
                      v122 = 0;
                      do
                      {
                        v115 = *(_QWORD *)v120;
                        v120 = *(_QWORD *)v120 + 632LL;
                        ++v122;
                      }
                      while ( (v112 & 7) != v122 );
                      v123 = v112 - v122;
                      v118 = v121;
                    }
                    else
                    {
                      v123 = v112;
                    }
                    if ( v112 >= 8 )
                    {
                      do
                      {
                        v115 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v120 + 632LL) + 632LL)
                                                                                         + 632LL)
                                                                             + 632LL)
                                                                 + 632LL)
                                                     + 632LL)
                                         + 632LL);
                        v120 = v115 + 632;
                        v123 -= 8LL;
                      }
                      while ( v123 );
                    }
                    v107 = 0;
                  }
                  else
                  {
                    v107 = v119 + 1;
                    v115 = v118;
                  }
                  --v113;
                  v124 = 32 * v119;
                  v112 = 0;
                  if ( *(_BYTE *)(v118 + v124) == 3 )
                  {
                    v215 = v107;
                    v214 = v114;
                    v239 = v113;
                    v125 = (unsigned __int8 *)(v124 + v118);
                    v126 = *((const __m128i **)v125 + 2);
                    v245 = v125;
                    v240 = *((_QWORD *)v125 + 3);
                    v127 = sub_140F331B0(v126);
                    v112 = 0;
                    v113 = v239;
                    v114 = v214;
                    v107 = v215;
                    if ( v127 != 2 )
                      break;
                  }
                }
                if ( v240 < 0 )
                {
                  v182 = 0;
                  goto LABEL_305;
                }
                v251 = a1;
                if ( v240 )
                {
                  nullsub_1(0);
                  v128 = v240;
                  v129 = (__m128i *)sub_140001650(v240, 1);
                  if ( !v129 )
                  {
                    v238 = v128;
                    v182 = 1;
LABEL_305:
                    sub_141938D2B(v182, v238);
                  }
                  v238 = (__int64)v129;
                  sub_1418F44E0(v129, v126, v128);
                  v130 = v128;
                }
                else
                {
                  v238 = 1;
                  v130 = 0;
                }
                sub_140F423D0(v184, v238, v130, &v212);
                if ( *(_DWORD *)v184 == -1 )
                {
                  *(_QWORD *)&v236[23] = *(_QWORD *)&v184[24];
                  *(__m128i *)&v236[7] = _mm_loadu_si128((const __m128i *)&v184[8]);
                  v131 = *v245;
                  if ( v131 >= 3 )
                  {
                    if ( v131 == 3 )
                    {
                      v134 = *((_QWORD *)v245 + 1);
                      if ( v134 )
                      {
                        v135 = *((_QWORD *)v245 + 2);
                        v136 = 1;
                        goto LABEL_198;
                      }
                    }
                    else if ( v131 == 4 )
                    {
                      v132 = *((_QWORD *)v245 + 2);
                      v228 = *((_QWORD *)v245 + 3);
                      v208 = v132;
                      v227 = 0;
                      while ( v228 != v227 )
                      {
                        ++v227;
                        v133 = v132 + 32;
                        sub_1403880E0(v132);
                        v132 = v133;
                      }
                      v141 = *((_QWORD *)v245 + 1);
                      if ( v141 )
                      {
                        v135 = *((_QWORD *)v245 + 2);
                        v134 = 32 * v141;
                        v136 = 8;
LABEL_198:
                        sub_140001660(v135, v134, v136);
                      }
                    }
                    else
                    {
                      v137 = *((_QWORD *)v245 + 1);
                      if ( v137 )
                      {
                        v138 = *((_QWORD *)v245 + 2);
                        v139 = *((_QWORD *)v245 + 3);
                        *(_QWORD *)&v201[8] = 0;
                        *(_QWORD *)&v201[16] = v137;
                        *(_QWORD *)&v201[24] = v138;
                        *(_QWORD *)&v201[40] = 0;
                        v202.m128i_i64[0] = v137;
                        v202.m128i_i64[1] = v138;
                        v140 = 1;
                      }
                      else
                      {
                        v140 = 0;
                        v139 = 0;
                      }
                      *(_QWORD *)v201 = v140;
                      *(_QWORD *)&v201[32] = v140;
                      *(_QWORD *)&v203 = v139;
                      sub_140DF2FD0(v201);
                    }
                  }
                  v142 = v245;
                  *v245 = 3;
                  v143 = *(_OWORD *)&v236[15];
                  *(__m128i *)(v142 + 1) = _mm_loadu_si128((const __m128i *)v236);
                  *((_OWORD *)v142 + 1) = v143;
                  ++v226;
                }
                if ( v240 )
                  sub_140001660(v238, v240, 1);
                a1 = v251;
                if ( *(_DWORD *)v184 != -1 )
                  sub_140E97700(v184);
                v112 = 0;
                v113 = v239;
                v114 = v214;
                v107 = v215;
                goto LABEL_150;
              }
              break;
            }
            if ( v226 )
            {
              sub_140E99260(v184, &v196);
              v144 = *(_QWORD *)v184;
              if ( *(_QWORD *)v184 == -1 )
              {
                LOBYTE(v144) = 41;
                v147 = sub_14163D190(v144, *(_QWORD *)&v184[8]);
              }
              else
              {
                v239 = *(_QWORD *)&v184[8];
                v251 = *(_QWORD *)v184;
                v145 = sub_140222E10(v250, v103, *(_QWORD *)&v184[8], *(_QWORD *)&v184[16]);
                v147 = v146;
                if ( (v145 & 1) == 0 )
                {
                  sub_1401BD710(v146);
                  v147 = 0;
                }
                if ( v251 )
                  sub_140001660(v239, v251, 1);
                if ( !v147 )
                {
                  v232[0] += v226;
                  goto LABEL_222;
                }
              }
              ++v232[2];
              v224 = v147;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                *(_QWORD *)v236 = v250;
                *(_QWORD *)&v236[8] = v103;
                *(_QWORD *)v201 = v236;
                *(_QWORD *)&v201[8] = sub_14169F630;
                *(_QWORD *)&v201[16] = &v224;
                *(_QWORD *)&v201[24] = sub_1416BB0B0;
                v185.m128i_i64[0] = 2;
                v185.m128i_i64[1] = (__int64)aCodexmateLibCo_42;
                *(_QWORD *)&v186 = 44;
                v187.m128i_i64[0] = (__int64)&unk_141A6168A;
                v187.m128i_i64[1] = (__int64)v201;
                *(_QWORD *)v184 = 0;
                *(_QWORD *)&v184[8] = aCodexmateLibCo_42;
                *(_OWORD *)&v184[16] = 0x2Cu;
                *(_QWORD *)&v184[32] = aSrcCoreRelayCo_3;
                *(_QWORD *)&v184[40] = 34;
                *((_QWORD *)&v186 + 1) = 0x163400000001LL;
                sub_1414D53A0(v256, v184);
                v147 = v224;
              }
              if ( (unsigned int)(v147 & 3) - 2 >= 2 && (v147 & 3) != 0 )
              {
                *(_QWORD *)&v184[8] = v147 - 1;
                v184[0] = 3;
                sub_1416BCB00(&v184[8]);
              }
            }
          }
LABEL_222:
          sub_14002F9D0(&v196);
          if ( v242 )
            sub_140001660(v235, v242, 1);
          v101 = v258;
          v98 = v249;
          if ( v258 )
            goto LABEL_139;
          goto LABEL_123;
        }
        ++v232[1];
        sub_14002F910(&v201[8]);
        if ( v242 )
          sub_140001660(v235, v242, 1);
      }
    }
    v99 -= 32LL;
    v100 += 4;
    v101 = v258;
    if ( v258 )
    {
      v98 = v249;
LABEL_139:
      sub_140001660(v250, v101, 1);
      goto LABEL_123;
    }
  }
  if ( v97 != v96 )
  {
    v148 = v99 >> 5;
    do
    {
      v149 = *(v100 - 1);
      if ( v149 )
        sub_140001660(*v100, v149, 1);
      v100 += 4;
      --v148;
    }
    while ( v148 );
  }
LABEL_231:
  if ( (_QWORD)v241 )
    sub_140001660(*((_QWORD *)&v241 + 1), 32 * v241, 8);
  v150 = v205;
  if ( v218.m128i_i64[0] )
    sub_140001660(v218.m128i_i64[1], v218.m128i_i64[0], 1);
  if ( v229 )
    sub_140001660(v230, v229, 1);
  sub_140F3F940(v184, v150);
  v151 = asc_141A61221;
  if ( v237 == -1 )
    v151 = (const char *)&unk_141A611D9;
  v152 = 42;
  if ( v237 == -1 )
    v152 = 72;
  *(_QWORD *)&v233 = v151;
  *((_QWORD *)&v233 + 1) = v152;
  if ( v248 )
  {
    v218.m128i_i64[0] = v248;
    v256[2] = 1;
    sub_140D1EE10((unsigned int)v201, v247, v248, (unsigned int)&unk_141A5D1EC, 3);
    v196.m256i_i64[2] = *(_QWORD *)&v201[16];
    *(__m128i *)v196.m256i_i8 = _mm_loadu_si128((const __m128i *)v201);
    *(_QWORD *)v201 = &v218;
    *(_QWORD *)&v201[8] = sub_1416BCB10;
    *(_QWORD *)&v201[16] = &v196;
    *(_QWORD *)&v201[24] = sub_1400015F0;
    sub_1416ABFD0(&v243, &unk_141A6124B, v201);
    if ( v196.m256i_i64[0] )
      sub_140001660(v196.m256i_i64[1], v196.m256i_i64[0], 1);
    *(__m128i *)v236 = _mm_loadu_si128(&v243);
    *(_QWORD *)&v236[16] = v244.m128i_i64[0];
  }
  else
  {
    *(_QWORD *)v236 = 0;
    *(_QWORD *)&v236[8] = 1;
    *(_QWORD *)&v236[16] = 0;
  }
  if ( *(_OWORD *)&v232[1] == 0 )
  {
    v229 = 0;
    v230 = 1;
    v231 = 0;
  }
  else
  {
    *(_QWORD *)v201 = &v232[1];
    *(_QWORD *)&v201[8] = sub_1416BCB10;
    *(_QWORD *)&v201[16] = &v232[2];
    *(_QWORD *)&v201[24] = sub_1416BCB10;
    v253 = 1;
    sub_1416ABFD0(&v229, &unk_141A5982F, v201);
  }
  if ( *(_QWORD *)&v184[40] == 2 && **(_WORD **)&v184[32] == 27503 && !v248 && *(_OWORD *)&v232[1] == 0 )
  {
    v259 = 1;
    v177 = (_QWORD *)sub_140C23890(24);
    nullsub_1(v178);
    v179 = sub_140001650(28, 1);
    if ( !v179 )
    {
      v258 = (__int64)v177;
      sub_141938D2B(1, 28);
    }
    *(_OWORD *)(v179 + 12) = *(__int128 *)((char *)&xmmword_141A5DFDC + 12);
    *(__m128i *)v179 = _mm_loadu_si128((const __m128i *)&xmmword_141A5DFDC);
    *v177 = 28;
    v177[1] = v179;
    v177[2] = 28;
    v243.m128i_i64[0] = 1;
    v243.m128i_i64[1] = (__int64)v177;
    v244.m128i_i64[0] = 1;
    v196.m256i_i64[0] = 0;
    *(_OWORD *)&v196.m256i_u64[1] = 8u;
    v258 = sub_140C23890(24);
    *(_QWORD *)v201 = &v225;
    *(_QWORD *)&v201[8] = sub_1416BCB10;
    *(_QWORD *)&v201[16] = &v233;
    *(_QWORD *)&v201[24] = sub_140186EE0;
    *(_QWORD *)&v201[32] = v232;
    *(_QWORD *)&v201[40] = sub_1416BCB10;
    sub_1416ABFD0(&v192, &unk_141A6126C, v201);
    v180 = (_OWORD *)v258;
    *(_QWORD *)(v258 + 16) = v193;
    *v180 = v192;
    v181 = _mm_loadu_si128(&v243);
    *(__m128i *)v201 = v181;
    *(_QWORD *)&v201[16] = v244.m128i_i64[0];
    *(_QWORD *)&v201[40] = v196.m256i_i64[2];
    *(_OWORD *)&v201[24] = *(_OWORD *)v196.m256i_i8;
    *(_QWORD *)(a1 + 40) = v196.m256i_i64[1];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v201[40];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v201[16];
    *(__m128i *)(a1 + 8) = v181;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v180;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( v229 )
      sub_140001660(v230, v229, 1);
    if ( *(_QWORD *)v236 )
      sub_140001660(*(_QWORD *)&v236[8], *(_QWORD *)v236, 1);
    sub_140E98050(v184);
    sub_140025530(&v246);
    sub_14029A870(&v220);
    if ( v209 )
      sub_140001660(v210, v209, 1);
    sub_14002F9D0(&v212);
    return sub_140E95B30(&si128);
  }
  else
  {
    v218.m128i_i64[0] = 0;
    v218.m128i_i64[1] = 8;
    v219 = 0;
    nullsub_1(v151);
    v153 = sub_140001650(24, 8);
    if ( !v153 )
    {
      v256[1] = 1;
      sub_141938D11(8, 24);
    }
    v155 = (_QWORD *)v153;
    nullsub_1(v154);
    v156 = sub_140001650(28, 1);
    if ( !v156 )
    {
      v258 = (__int64)v155;
      sub_141938D2B(1, 28);
    }
    *(_OWORD *)(v156 + 12) = *(__int128 *)((char *)&xmmword_141A5DFDC + 12);
    *(__m128i *)v156 = _mm_loadu_si128((const __m128i *)&xmmword_141A5DFDC);
    *v155 = 28;
    v155[1] = v156;
    v155[2] = 28;
    v243.m128i_i64[0] = 1;
    v243.m128i_i64[1] = (__int64)v155;
    v244.m128i_i64[0] = 1;
    nullsub_1(v157);
    v158 = sub_140001650(24, 8);
    if ( !v158 )
    {
      v252 = 1;
      sub_141938D11(8, 24);
    }
    v258 = v158;
    if ( *((_QWORD *)&v186 + 1) == -1 )
    {
      v196.m256i_i64[2] = v186;
      *(__m128i *)v196.m256i_i8 = _mm_loadu_si128(&v185);
    }
    else
    {
      v196.m256i_i64[0] = *((_QWORD *)&v186 + 1);
      *(__m128i *)&v196.m256i_u64[1] = _mm_loadu_si128(&v187);
      if ( v185.m128i_i64[0] )
        sub_140001660(v185.m128i_i64[1], v185.m128i_i64[0], 1);
    }
    *(_QWORD *)v201 = &v225;
    *(_QWORD *)&v201[8] = sub_1416BCB10;
    *(_QWORD *)&v201[16] = v232;
    *(_QWORD *)&v201[24] = sub_1416BCB10;
    *(_QWORD *)&v201[32] = &v196;
    *(_QWORD *)&v201[40] = sub_1400015F0;
    v202.m128i_i64[0] = (__int64)v236;
    v202.m128i_i64[1] = (__int64)sub_1400015F0;
    *(_QWORD *)&v203 = &v229;
    *((_QWORD *)&v203 + 1) = sub_1400015F0;
    sub_1416ABFD0(&v194, &unk_141A6131E, v201);
    if ( v196.m256i_i64[0] )
      sub_140001660(v196.m256i_i64[1], v196.m256i_i64[0], 1);
    v159 = (_OWORD *)v258;
    *(_QWORD *)(v258 + 16) = v195;
    *v159 = v194;
    v160 = _mm_loadu_si128(&v218);
    *(__m128i *)v201 = v160;
    *(_QWORD *)&v201[16] = v219;
    *(_QWORD *)&v201[40] = v244.m128i_i64[0];
    *(__m128i *)&v201[24] = v243;
    *(_QWORD *)(a1 + 40) = v243.m128i_i64[1];
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v201[40];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v201[16];
    *(__m128i *)(a1 + 8) = v160;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v159;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    if ( v229 )
      sub_140001660(v230, v229, 1);
    if ( *(_QWORD *)v236 )
      sub_140001660(*(_QWORD *)&v236[8], *(_QWORD *)v236, 1);
    if ( *(_QWORD *)v184 )
      sub_140001660(*(_QWORD *)&v184[8], *(_QWORD *)v184, 1);
    if ( *(_QWORD *)&v184[24] )
      sub_140001660(*(_QWORD *)&v184[32], *(_QWORD *)&v184[24], 1);
    v161 = v248;
    if ( v248 )
    {
      v162 = (_QWORD *)(v247 + 8);
      do
      {
        v163 = *(v162 - 1);
        if ( v163 )
          sub_140001660(*v162, v163, 1);
        v162 += 3;
        --v161;
      }
      while ( v161 );
    }
    if ( v246 )
      sub_140001660(v247, 24 * v246, 8);
    v164 = v220.m128i_i64[1];
    if ( v220.m128i_i64[1] )
    {
      v165 = *((_QWORD *)&v221 + 1);
      if ( *((_QWORD *)&v221 + 1) )
      {
        v166 = v220.m128i_i64[0];
        v167 = (const __m128i *)(v220.m128i_i64[0] + 16);
        _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v220.m128i_i64[0]));
        do
        {
          if ( !(_WORD)_R15D )
          {
            do
            {
              v169 = _mm_load_si128(v167);
              v166 -= 512;
              ++v167;
              _R15D = _mm_movemask_epi8(v169) ^ 0xFFFF;
            }
            while ( !_R15D );
          }
          __asm { tzcnt   ecx, r15d }
          v171 = v166 - (unsigned int)(32 * _ECX);
          v172 = *(_QWORD *)(v171 - 32);
          if ( v172 )
            sub_140001660(*(_QWORD *)(v171 - 24), v172, 1);
          --v165;
          _R15D &= _R15D - 1;
        }
        while ( v165 );
      }
      v173 = 32 * v164;
      v174 = 33 * v164 + 49;
      if ( v174 )
        sub_140001660(v220.m128i_i64[0] - v173 - 32, v174, 16);
    }
    if ( v209 )
      sub_140001660(v210, v209, 1);
    sub_14002F9D0(&v212);
    v175 = si128.m128i_i64[1];
    v237 = v217;
    v258 = 0;
    v250 = si128.m128i_i64[1];
    while ( v237 != v258 )
    {
      ++v258;
      v176 = v175 + 192;
      sub_14038C9C0();
      v175 = v176;
    }
    result = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] )
      return sub_140001660(v250, 192 * si128.m128i_i64[0], 8);
  }
  return result;
}
