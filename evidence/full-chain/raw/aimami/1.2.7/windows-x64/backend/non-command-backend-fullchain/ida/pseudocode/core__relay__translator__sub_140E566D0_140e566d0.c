// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e566d0 | name sub_140E566D0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E566D0(const __m128i *a1, _QWORD *a2, const __m128i *a3, signed __int64 a4, _QWORD *a5)
{
  const __m128i *v8; // r14
  __int128 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i *v14; // rax
  __int64 v15; // r14
  const __m128i *v16; // rcx
  const __m128i *v17; // r14
  __int64 v18; // rcx
  __m128i *v19; // rax
  __int64 v20; // rcx
  __m128i *v21; // rax
  __int64 v22; // rcx
  __m128i *v23; // rax
  signed __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int128 v27; // kr20_16
  __m128i *v28; // rax
  __int64 v29; // rcx
  __m128i *v30; // rax
  __int64 v31; // rcx
  __m128i *v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // r12
  __int64 v35; // rsi
  __int8 v36; // si
  signed __int64 v37; // r15
  const __m128i *v38; // rbx
  const __m128i *v39; // r13
  __m128i *v40; // rax
  __int64 v41; // rdi
  __m128i *v42; // rax
  __int64 v43; // rcx
  __m128i *v44; // rax
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  const __m128i *v50; // rcx
  signed __int64 v51; // r12
  __int64 v52; // rsi
  __m128i *v53; // rax
  __int64 v54; // rcx
  __m128i *v55; // rax
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  const __m128i *v61; // rcx
  signed __int64 v62; // r12
  __int64 v63; // rsi
  __int64 v64; // rcx
  signed __int64 v65; // r15
  const __m128i *v66; // rbx
  const __m128i *v67; // r13
  __m128i *v68; // rax
  __int64 v69; // rdi
  const __m128i *v70; // rbx
  const __m128i *v71; // r13
  __m128i *v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rcx
  __m128i *v75; // rax
  __int64 v76; // rcx
  __m128i *v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // rax
  signed __int64 v81; // r14
  __int64 v82; // rsi
  const __m128i *v83; // r12
  const __m128i *v84; // r15
  __m128i *v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __m128i *v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rax
  signed __int64 v94; // r14
  __int64 v95; // rsi
  const __m128i *v96; // r12
  const __m128i *v97; // r15
  __m128i *v98; // rax
  __int64 v99; // rdi
  __m128i *v100; // rax
  __int64 v101; // rcx
  __m128i *v102; // rax
  __int64 v103; // rcx
  __m128i *v104; // rax
  signed __int64 v105; // r12
  __int64 v106; // rsi
  const __m128i *v107; // r14
  signed __int64 v108; // r15
  const __m128i *v109; // rbx
  const __m128i *v110; // r13
  __m128i *v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rcx
  __m128i *v114; // rax
  __int64 v115; // rcx
  __m128i *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rcx
  __int64 v119; // rax
  signed __int64 v120; // r14
  __int64 v121; // rsi
  const __m128i *v122; // r12
  const __m128i *v123; // r15
  __m128i *v124; // rax
  __int64 v125; // rdi
  signed __int64 v126; // r15
  const __m128i *v127; // rbx
  const __m128i *v128; // r13
  __m128i *v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rcx
  __m128i *v132; // rax
  __m128i *v133; // rax
  __int64 v134; // rcx
  __m128i *v135; // rax
  const __m128i *v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rcx
  __m128i *v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rsi
  __m128i *v142; // rax
  __int64 v143; // rdi
  __int64 v144; // rcx
  __m128i *v145; // rax
  __int64 v146; // r14
  __int64 v147; // rsi
  const __m128i *v148; // r12
  __m128i *v149; // rax
  __int64 v150; // rdi
  __int64 v151; // rcx
  __m128i *v152; // rax
  __int64 v153; // rsi
  __m128i *v154; // rax
  __int64 v155; // rdi
  __int64 v156; // rcx
  __m128i *v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rsi
  __m128i *v160; // rax
  __int64 v161; // rdi
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rcx
  const __m128i *v165; // rsi
  const __m128i *v166; // rdi
  __m128i *v167; // rax
  __int64 v168; // r12
  unsigned __int64 v169; // r12
  __int64 v170; // rdi
  _QWORD *v171; // rsi
  __m128i *v172; // rax
  __int64 v173; // rcx
  __m128i *v174; // rax
  __int64 v175; // rcx
  void *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rax
  const __m128i *v180; // rcx
  signed __int64 v181; // r12
  __int64 v182; // rsi
  signed __int64 v183; // r15
  const __m128i *v184; // rbx
  const __m128i *v185; // r13
  __m128i *v186; // rax
  __int64 v187; // rdi
  __int64 v188; // rcx
  __int64 v189; // rdi
  __m128i *v190; // rax
  __int64 v191; // rcx
  const __m128i *v192; // r12
  const __m128i *v193; // rsi
  __m128i *v194; // rax
  unsigned __int64 v195; // r12
  __int64 v196; // rdi
  _QWORD *v197; // rsi
  __m128i v198; // xmm0
  __m128i *v199; // rax
  __int64 v200; // r8
  __int64 v202; // rcx
  const __m128i *v203; // r12
  const __m128i *v204; // r15
  __m128i *v205; // rax
  __int64 v206; // rcx
  unsigned __int64 v207; // r13
  __int64 v208; // rsi
  __m128i *v209; // rax
  __int64 v210; // rdi
  const __m128i *v211; // rsi
  unsigned __int64 v212; // r12
  __int64 v213; // r13
  _QWORD *v214; // rdi
  __int64 v215; // rcx
  __m128i *v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rsi
  __m128i *v219; // rax
  __int64 v220; // rdi
  __int64 v221; // [rsp+38h] [rbp-48h]
  signed __int64 v222; // [rsp+40h] [rbp-40h]
  __int64 v223; // [rsp+48h] [rbp-38h]
  __int64 v224; // [rsp+50h] [rbp-30h]
  __int64 v225; // [rsp+60h] [rbp-20h]
  __int128 v226; // [rsp+70h] [rbp-10h] BYREF
  const __m128i *v227; // [rsp+80h] [rbp+0h]
  const __m128i *v228; // [rsp+88h] [rbp+8h]
  const __m128i *v229; // [rsp+90h] [rbp+10h]
  __int128 v230; // [rsp+98h] [rbp+18h] BYREF
  __int64 v231; // [rsp+A8h] [rbp+28h]
  const __m128i *v232; // [rsp+B0h] [rbp+30h]
  char v233; // [rsp+BFh] [rbp+3Fh]
  char v234; // [rsp+C0h] [rbp+40h]
  char v235; // [rsp+C1h] [rbp+41h]
  char v236; // [rsp+C2h] [rbp+42h]
  char v237; // [rsp+C3h] [rbp+43h]
  char v238; // [rsp+C4h] [rbp+44h]
  char v239; // [rsp+C5h] [rbp+45h]
  char v240; // [rsp+C6h] [rbp+46h]
  char v241; // [rsp+C7h] [rbp+47h]
  char v242; // [rsp+C8h] [rbp+48h]
  char v243; // [rsp+C9h] [rbp+49h]
  char v244; // [rsp+CAh] [rbp+4Ah]
  char v245; // [rsp+CBh] [rbp+4Bh]
  char v246; // [rsp+CCh] [rbp+4Ch]
  char v247; // [rsp+CDh] [rbp+4Dh]
  char v248; // [rsp+CEh] [rbp+4Eh]
  char v249; // [rsp+CFh] [rbp+4Fh]
  __m256i v250; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v251; // [rsp+F0h] [rbp+70h]
  __int128 v252; // [rsp+100h] [rbp+80h]
  const __m128i *v253; // [rsp+110h] [rbp+90h]
  _QWORD *v254; // [rsp+118h] [rbp+98h]
  const __m128i *v255; // [rsp+120h] [rbp+A0h]
  __m128i *v256; // [rsp+128h] [rbp+A8h]
  __m256i v257; // [rsp+130h] [rbp+B0h] BYREF
  const __m128i *v258; // [rsp+158h] [rbp+D8h]
  __m256i v259; // [rsp+160h] [rbp+E0h] BYREF
  char v260; // [rsp+18Eh] [rbp+10Eh]
  char v261; // [rsp+18Fh] [rbp+10Fh]
  __int64 v262; // [rsp+190h] [rbp+110h]

  v262 = -2;
  v8 = (const __m128i *)a2[10];
  v254 = a2;
  *((_QWORD *)&v9 + 1) = a2[11];
  sub_140E91160(v8, *((_QWORD *)&v9 + 1));
  if ( v11
    || (v8 = (const __m128i *)v254[13], *((_QWORD *)&v9 + 1) = v254[14], sub_140E91160(v8, *((_QWORD *)&v9 + 1)), v12) )
  {
    if ( v9 < 0 )
    {
      v13 = 0;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)&v9 + 1) )
    {
      v9 = 1u;
      goto LABEL_11;
    }
  }
  else
  {
    v8 = (const __m128i *)&unk_141A53B20;
    *((_QWORD *)&v9 + 1) = 2;
  }
  nullsub_1(v10);
  v14 = (__m128i *)sub_140001650(*((_QWORD *)&v9 + 1), 1);
  if ( !v14 )
  {
    v13 = 1;
LABEL_5:
    sub_141938D2B(v13, *((_QWORD *)&v9 + 1));
  }
  *(_QWORD *)&v9 = v14;
  sub_1418F44E0(v14, v8, *((unsigned __int64 *)&v9 + 1));
LABEL_11:
  v15 = 0;
  v16 = (const __m128i *)aIncomplete_0;
  if ( !a3 )
    v16 = (const __m128i *)aCompleted_2;
  v256 = (__m128i *)v16;
  LOBYTE(v15) = a3 != nullptr;
  v17 = (const __m128i *)(v15 + 9);
  v223 = *((_QWORD *)&v9 + 1);
  v224 = v9;
  if ( !*((_BYTE *)v254 + 125) )
  {
    v221 = (__int64)&a1[17].m128i_i64[1];
    sub_14032D7A0(
      v250.m256i_i64,
      (__m128i *)v254[7],
      v254[8],
      (const __m128i *)v9,
      *((__int64 *)&v9 + 1),
      (__int64)&a1[17].m128i_i64[1]);
    v229 = (const __m128i *)v250.m256i_i64[1];
    v255 = (const __m128i *)v250.m256i_i64[0];
    v258 = (const __m128i *)v250.m256i_i64[3];
    v225 = v250.m256i_i64[2];
    v27 = v251;
    if ( a3 )
      goto LABEL_25;
    *(_QWORD *)&v230 = 0;
    v231 = 0;
    nullsub_1(v26);
    v53 = (__m128i *)sub_140001650(4, 1);
    if ( !v53 )
      sub_141938D2B(1, 4);
    v53->m128i_i32[0] = 1701869940;
    v259.m256i_i64[0] = 4;
    v228 = v53;
    v259.m256i_i64[1] = (__int64)v53;
    v259.m256i_i64[2] = 4;
    nullsub_1(v54);
    v55 = (__m128i *)sub_140001650(37, 1);
    v232 = v55;
    if ( !v55 )
      sub_141938D2B(1, 37);
    qmemcpy(v55, "response.function_call_arguments.done", 37);
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = 37;
    v250.m256i_i64[2] = (__int64)v55;
    v250.m256i_i64[3] = 37;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v56);
    v57 = (void *)sub_140001650(12, 1);
    if ( !v57 )
      sub_141938D2B(1, 12);
    qmemcpy(v57, "output_index", 12);
    v259.m256i_i64[0] = 12;
    v259.m256i_i64[1] = (__int64)v57;
    v259.m256i_i64[2] = 12;
    v58 = *((unsigned int *)v254 + 30);
    v250.m256i_i8[0] = 2;
    v250.m256i_i64[1] = 0;
    v250.m256i_i64[2] = v58;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v59);
    v60 = sub_140001650(7, 1);
    if ( !v60 )
      sub_141938D2B(1, 7);
    v61 = a1 + 48;
    *(_DWORD *)(v60 + 3) = 1684627309;
    *(_DWORD *)v60 = 1835365481;
    v259.m256i_i64[0] = 7;
    v232 = (const __m128i *)v60;
    v259.m256i_i64[1] = v60;
    v259.m256i_i64[2] = 7;
    v62 = v254[2];
    if ( v62 < 0 )
    {
      v63 = 0;
      goto LABEL_63;
    }
    v228 = a1 + 48;
    if ( v62 )
    {
      v222 = a4;
      v70 = a1;
      v71 = (const __m128i *)v254[1];
      nullsub_1(v61);
      v63 = 1;
      v72 = (__m128i *)sub_140001650(v62, 1);
      if ( !v72 )
      {
LABEL_63:
        v249 = 1;
        sub_141938D2B(v63, v62);
      }
      v73 = (__int64)v72;
      sub_1418F44E0(v72, v71, v62);
      a1 = v70;
      a4 = v222;
    }
    else
    {
      v73 = 1;
    }
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = v62;
    v250.m256i_i64[2] = v73;
    v250.m256i_i64[3] = v62;
    v249 = 0;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v151);
    v152 = (__m128i *)sub_140001650(9, 1);
    if ( !v152 )
      sub_141938D2B(1, 9);
    v152->m128i_i64[0] = 0x746E656D75677261LL;
    v152->m128i_i8[8] = 115;
    v259.m256i_i64[0] = 9;
    v259.m256i_i64[1] = (__int64)v152;
    v259.m256i_i64[2] = 9;
    v232 = v152;
    if ( v27 < 0 )
    {
      v153 = 0;
      goto LABEL_171;
    }
    if ( *((_QWORD *)&v27 + 1) )
    {
      nullsub_1(0x746E656D75677261LL);
      v153 = 1;
      v154 = (__m128i *)sub_140001650(*((_QWORD *)&v27 + 1), 1);
      if ( !v154 )
      {
LABEL_171:
        v248 = 1;
        sub_141938D2B(v153, *((_QWORD *)&v27 + 1));
      }
      v155 = (__int64)v154;
      sub_1418F44E0(v154, (const __m128i *)v27, *((unsigned __int64 *)&v27 + 1));
    }
    else
    {
      v155 = 1;
    }
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = *((_QWORD *)&v27 + 1);
    v250.m256i_i64[2] = v155;
    v250.m256i_i64[3] = *((_QWORD *)&v27 + 1);
    v248 = 0;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    v211 = a1;
    *(_OWORD *)&v250.m256i_u64[1] = v230;
    v250.m256i_i64[3] = v231;
    v250.m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)&v257, (_DWORD)v228, (unsigned int)&xmmword_141A535E8, 37, (__int64)&v250);
    v212 = v257.m256i_u64[2];
    v232 = (const __m128i *)v257.m256i_i64[1];
    v213 = a5[2];
    if ( v257.m256i_i64[2] > (unsigned __int64)(*a5 - v213) )
    {
      sub_14190D590((_DWORD)a5, v213, v257.m256i_i32[4], 1, 1);
      v214 = a5;
      v213 = a5[2];
    }
    else
    {
      v214 = a5;
      if ( !v257.m256i_i64[2] )
      {
LABEL_252:
        v214[2] = v212 + v213;
        if ( v257.m256i_i64[0] )
          sub_140001660(v232, v257.m256i_i64[0], 1);
        sub_140DF44E0(&v250);
        a1 = v211;
LABEL_25:
        *(_QWORD *)&v230 = 0;
        v231 = 0;
        nullsub_1(v26);
        v28 = (__m128i *)sub_140001650(4, 1);
        if ( !v28 )
          sub_141938D2B(1, 4);
        v28->m128i_i32[0] = 1701869940;
        v259.m256i_i64[0] = 4;
        v228 = v28;
        v259.m256i_i64[1] = (__int64)v28;
        v259.m256i_i64[2] = 4;
        nullsub_1(v29);
        v30 = (__m128i *)sub_140001650(13, 1);
        v232 = v30;
        if ( !v30 )
          sub_141938D2B(1, 13);
        qmemcpy(v30, "function_call", 13);
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = 13;
        v250.m256i_i64[2] = (__int64)v30;
        v250.m256i_i64[3] = 13;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v31);
        v32 = (__m128i *)sub_140001650(2, 1);
        if ( !v32 )
          sub_141938D2B(1, 2);
        v32->m128i_i16[0] = 25705;
        v259.m256i_i64[0] = 2;
        v228 = v32;
        v259.m256i_i64[1] = (__int64)v32;
        v259.m256i_i64[2] = 2;
        v34 = v254[2];
        if ( v34 < 0 )
        {
          v35 = 0;
          goto LABEL_32;
        }
        if ( v34 )
        {
          v232 = a3;
          v65 = a4;
          v66 = a1;
          v67 = (const __m128i *)v254[1];
          nullsub_1(v33);
          v35 = 1;
          v68 = (__m128i *)sub_140001650(v34, 1);
          if ( !v68 )
          {
LABEL_32:
            v247 = 1;
            sub_141938D2B(v35, v34);
          }
          v69 = (__int64)v68;
          sub_1418F44E0(v68, v67, v34);
          a1 = v66;
          a4 = v65;
          a3 = v232;
        }
        else
        {
          v69 = 1;
        }
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = v34;
        v250.m256i_i64[2] = v69;
        v250.m256i_i64[3] = v34;
        v247 = 0;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v87);
        v88 = sub_140001650(6, 1);
        if ( !v88 )
          sub_141938D2B(1, 6);
        *(_WORD *)(v88 + 4) = 29557;
        *(_DWORD *)v88 = 1952543859;
        v259.m256i_i64[0] = 6;
        v228 = (const __m128i *)v88;
        v259.m256i_i64[1] = v88;
        v259.m256i_i64[2] = 6;
        nullsub_1(v89);
        v90 = (__m128i *)sub_140001650(v17, 1);
        v232 = v90;
        if ( !v90 )
          sub_141938D2B(1, v17);
        v91 = (__int64)v90;
        sub_1418F44E0(v90, v256, (unsigned __int64)v17);
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = (__int64)v17;
        v250.m256i_i64[2] = v91;
        v250.m256i_i64[3] = (__int64)v17;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v92);
        v93 = sub_140001650(7, 1);
        if ( !v93 )
          sub_141938D2B(1, 7);
        *(_DWORD *)(v93 + 3) = 1684627308;
        *(_DWORD *)v93 = 1819042147;
        v259.m256i_i64[0] = 7;
        v259.m256i_i64[1] = v93;
        v259.m256i_i64[2] = 7;
        v94 = v254[5];
        v256 = (__m128i *)v93;
        if ( v94 < 0 )
        {
          v95 = 0;
          goto LABEL_95;
        }
        if ( v94 )
        {
          v96 = a3;
          v97 = (const __m128i *)v254[4];
          nullsub_1(v254);
          v95 = 1;
          v98 = (__m128i *)sub_140001650(v94, 1);
          if ( !v98 )
          {
LABEL_95:
            v246 = 1;
            sub_141938D2B(v95, v94);
          }
          v99 = (__int64)v98;
          sub_1418F44E0(v98, v97, v94);
          a3 = v96;
        }
        else
        {
          v99 = 1;
        }
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = v94;
        v250.m256i_i64[2] = v99;
        v250.m256i_i64[3] = v94;
        v246 = 0;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v156);
        v157 = (__m128i *)sub_140001650(4, 1);
        if ( !v157 )
          sub_141938D2B(1, 4);
        v157->m128i_i32[0] = 1701667182;
        v259.m256i_i64[0] = 4;
        v259.m256i_i64[1] = (__int64)v157;
        v259.m256i_i64[2] = 4;
        v256 = v157;
        if ( v225 < 0 )
        {
          v159 = 0;
          goto LABEL_181;
        }
        if ( v225 )
        {
          nullsub_1(v158);
          v159 = 1;
          v160 = (__m128i *)sub_140001650(v225, 1);
          if ( !v160 )
          {
LABEL_181:
            v245 = 1;
            sub_141938D2B(v159, v225);
          }
          v161 = (__int64)v160;
          sub_1418F44E0(v160, v229, v225);
        }
        else
        {
          v161 = 1;
        }
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = v225;
        v250.m256i_i64[2] = v161;
        v250.m256i_i64[3] = v225;
        v245 = 0;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v215);
        v216 = (__m128i *)sub_140001650(9, 1);
        if ( !v216 )
          sub_141938D2B(1, 9);
        v216->m128i_i64[0] = 0x746E656D75677261LL;
        v216->m128i_i8[8] = 115;
        v259.m256i_i64[0] = 9;
        v259.m256i_i64[1] = (__int64)v216;
        v259.m256i_i64[2] = 9;
        v256 = v216;
        if ( v27 < 0 )
        {
          v218 = 0;
          goto LABEL_261;
        }
        if ( *((_QWORD *)&v27 + 1) )
        {
          nullsub_1(v217);
          v218 = 1;
          v219 = (__m128i *)sub_140001650(*((_QWORD *)&v27 + 1), 1);
          if ( !v219 )
          {
LABEL_261:
            v244 = 1;
            sub_141938D2B(v218, *((_QWORD *)&v27 + 1));
          }
          v220 = (__int64)v219;
          sub_1418F44E0(v219, (const __m128i *)v27, *((unsigned __int64 *)&v27 + 1));
        }
        else
        {
          v220 = 1;
        }
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = *((_QWORD *)&v27 + 1);
        v250.m256i_i64[2] = v220;
        v250.m256i_i64[3] = *((_QWORD *)&v27 + 1);
        v244 = 0;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        *(_OWORD *)&v250.m256i_u64[1] = v230;
        v250.m256i_i64[3] = v231;
        v250.m256i_i8[0] = 5;
        sub_1402B8770(v221, (__int64)&v250, (__int64)v229, v225);
        v259 = v250;
        if ( v258 )
          sub_140001660(v27, v258, 1);
        if ( v255 )
          sub_140001660(v229, v255, 1);
        goto LABEL_147;
      }
    }
    sub_1418F44E0((__m128i *)(v213 + v214[1]), v232, v212);
    goto LABEL_252;
  }
  if ( *((_BYTE *)v254 + 125) != 1 )
  {
    *(_OWORD *)v250.m256i_i8 = v9;
    *(_OWORD *)&v250.m256i_u64[2] = 0;
    v251 = v9;
    sub_14062D280(&v257, &v250);
    v36 = v257.m256i_i8[0];
    if ( v257.m256i_i8[0] == -1 )
    {
      sub_14002F910(&v257.m256i_u64[1]);
    }
    else
    {
      v250 = v257;
      if ( v257.m256i_i8[0] == 5 )
      {
        if ( v250.m256i_i64[3] )
        {
          if ( !v250.m256i_i64[1] )
            sub_141939020(&off_141A54900);
          sub_140E11B90(&v257, v250.m256i_i64[1], v250.m256i_i64[2]);
        }
        else
        {
          v257.m256i_i64[0] = 0;
          v257.m256i_i64[2] = 0;
        }
        v259.m256i_i64[2] = v257.m256i_i64[2];
        *(_OWORD *)v259.m256i_i8 = *(_OWORD *)v257.m256i_i8;
      }
      sub_140DF44E0(&v250);
      if ( v36 == 5 )
      {
        v227 = (const __m128i *)v259.m256i_i64[2];
        v226 = *(_OWORD *)v259.m256i_i8;
        goto LABEL_104;
      }
    }
    *(_QWORD *)&v226 = 0;
    v227 = nullptr;
LABEL_104:
    *(_QWORD *)&v230 = 0;
    v231 = 0;
    nullsub_1(v64);
    v100 = (__m128i *)sub_140001650(4, 1);
    if ( !v100 )
      sub_141938D2B(1, 4);
    v100->m128i_i32[0] = 1701869940;
    v259.m256i_i64[0] = 4;
    v258 = v100;
    v259.m256i_i64[1] = (__int64)v100;
    v259.m256i_i64[2] = 4;
    nullsub_1(v101);
    v102 = (__m128i *)sub_140001650(16, 1);
    v255 = v102;
    if ( !v102 )
      sub_141938D2B(1, 16);
    *v102 = *(__m128i *)"tool_search_call";
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = 16;
    v250.m256i_i64[2] = (__int64)v102;
    v250.m256i_i64[3] = 16;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v103);
    v104 = (__m128i *)sub_140001650(2, 1);
    if ( !v104 )
      sub_141938D2B(1, 2);
    v104->m128i_i16[0] = 25705;
    v259.m256i_i64[0] = 2;
    v259.m256i_i64[1] = (__int64)v104;
    v259.m256i_i64[2] = 2;
    v105 = v254[2];
    v255 = v104;
    if ( v105 < 0 )
    {
      v106 = 0;
      goto LABEL_111;
    }
    if ( v105 )
    {
      v258 = v17;
      v107 = a3;
      v108 = a4;
      v109 = a1;
      v110 = (const __m128i *)v254[1];
      nullsub_1(v104);
      v106 = 1;
      v111 = (__m128i *)sub_140001650(v105, 1);
      if ( !v111 )
      {
LABEL_111:
        v236 = 1;
        sub_141938D2B(v106, v105);
      }
      v112 = (__int64)v111;
      sub_1418F44E0(v111, v110, v105);
      a1 = v109;
      a4 = v108;
      a3 = v107;
      v17 = v258;
    }
    else
    {
      v112 = 1;
    }
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = v105;
    v250.m256i_i64[2] = v112;
    v250.m256i_i64[3] = v105;
    v236 = 0;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v113);
    v114 = (__m128i *)sub_140001650(6, 1);
    if ( !v114 )
      sub_141938D2B(1, 6);
    v114->m128i_i16[2] = 29557;
    v114->m128i_i32[0] = 1952543859;
    v259.m256i_i64[0] = 6;
    v258 = v114;
    v259.m256i_i64[1] = (__int64)v114;
    v259.m256i_i64[2] = 6;
    nullsub_1(v115);
    v116 = (__m128i *)sub_140001650(v17, 1);
    v255 = v116;
    if ( !v116 )
      sub_141938D2B(1, v17);
    v117 = (__int64)v116;
    sub_1418F44E0(v116, v256, (unsigned __int64)v17);
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = (__int64)v17;
    v250.m256i_i64[2] = v117;
    v250.m256i_i64[3] = (__int64)v17;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v118);
    v119 = sub_140001650(7, 1);
    if ( !v119 )
      sub_141938D2B(1, 7);
    *(_DWORD *)(v119 + 3) = 1684627308;
    *(_DWORD *)v119 = 1819042147;
    v259.m256i_i64[0] = 7;
    v259.m256i_i64[1] = v119;
    v259.m256i_i64[2] = 7;
    v120 = v254[5];
    v256 = (__m128i *)v119;
    if ( v120 < 0 )
    {
      v121 = 0;
      goto LABEL_125;
    }
    if ( v120 )
    {
      v122 = a3;
      v123 = (const __m128i *)v254[4];
      nullsub_1(v254);
      v121 = 1;
      v124 = (__m128i *)sub_140001650(v120, 1);
      if ( !v124 )
      {
LABEL_125:
        v235 = 1;
        sub_141938D2B(v121, v120);
      }
      v125 = (__int64)v124;
      sub_1418F44E0(v124, v123, v120);
      a3 = v122;
    }
    else
    {
      v125 = 1;
    }
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = v120;
    v250.m256i_i64[2] = v125;
    v250.m256i_i64[3] = v120;
    v235 = 0;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v131);
    v132 = (__m128i *)sub_140001650(9, 1);
    if ( !v132 )
      sub_141938D2B(1, 9);
    v132->m128i_i64[0] = 0x6F69747563657865LL;
    v132->m128i_i8[8] = 110;
    v259.m256i_i64[0] = 9;
    v255 = v132;
    v259.m256i_i64[1] = (__int64)v132;
    v259.m256i_i64[2] = 9;
    nullsub_1(0x6F69747563657865LL);
    v133 = (__m128i *)sub_140001650(6, 1);
    v256 = v133;
    if ( !v133 )
      sub_141938D2B(1, 6);
    v133->m128i_i16[2] = 29806;
    v133->m128i_i32[0] = 1701407843;
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = 6;
    v250.m256i_i64[2] = (__int64)v133;
    v250.m256i_i64[3] = 6;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v134);
    v135 = (__m128i *)sub_140001650(9, 1);
    if ( !v135 )
      sub_141938D2B(1, 9);
    v135->m128i_i64[0] = 0x746E656D75677261LL;
    v135->m128i_i8[8] = 115;
    v259.m256i_i64[0] = 9;
    v256 = v135;
    v259.m256i_i64[1] = (__int64)v135;
    v259.m256i_i64[2] = 9;
    v260 = 1;
    sub_14040F630(&v250, &v226);
    if ( v250.m256i_i8[0] == -1 )
    {
      v257.m256i_i64[0] = v250.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_16,
        43,
        (unsigned int)&v257,
        (unsigned int)&off_141A52FE8,
        (__int64)&off_141A54340);
    }
    v257 = v250;
    v260 = 0;
    sub_140E72AA0(&v250, &v230, &v259, &v257);
    if ( v250.m256i_i8[0] != -1 )
      sub_140DF44E0(&v250);
    *(_OWORD *)&v259.m256i_u64[1] = v230;
    v259.m256i_i64[3] = v231;
    v259.m256i_i8[0] = 5;
    if ( (_QWORD)v226 )
    {
      v136 = v227;
      v250.m256i_i64[1] = 0;
      *(_OWORD *)&v250.m256i_u64[2] = v226;
      *((_QWORD *)&v251 + 1) = 0;
      v252 = v226;
      v137 = 1;
    }
    else
    {
      v137 = 0;
      v136 = nullptr;
    }
    v250.m256i_i64[0] = v137;
    *(_QWORD *)&v251 = v137;
    v253 = v136;
    sub_140DF2FD0(&v250);
    goto LABEL_147;
  }
  sub_1402E34C0((signed __int64 *)&v226, (const __m128i *)v9, *((signed __int64 *)&v9 + 1));
  if ( !a3 )
  {
    v255 = v227;
    if ( !v227 )
      goto LABEL_198;
    *(_QWORD *)&v230 = 0;
    v231 = 0;
    nullsub_1(v18);
    v42 = (__m128i *)sub_140001650(4, 1);
    if ( !v42 )
      sub_141938D2B(1, 4);
    v42->m128i_i32[0] = 1701869940;
    v259.m256i_i64[0] = 4;
    v229 = v42;
    v259.m256i_i64[1] = (__int64)v42;
    v259.m256i_i64[2] = 4;
    nullsub_1(v43);
    v44 = (__m128i *)sub_140001650(37, 1);
    v258 = v44;
    if ( !v44 )
      sub_141938D2B(1, 37);
    qmemcpy(v44, "response.custom_tool_call_input.delta", 37);
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = 37;
    v250.m256i_i64[2] = (__int64)v44;
    v250.m256i_i64[3] = 37;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v45);
    v46 = (void *)sub_140001650(12, 1);
    if ( !v46 )
      sub_141938D2B(1, 12);
    qmemcpy(v46, "output_index", 12);
    v259.m256i_i64[0] = 12;
    v259.m256i_i64[1] = (__int64)v46;
    v259.m256i_i64[2] = 12;
    v47 = *((unsigned int *)v254 + 30);
    v250.m256i_i8[0] = 2;
    v250.m256i_i64[1] = 0;
    v250.m256i_i64[2] = v47;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v48);
    v49 = sub_140001650(7, 1);
    if ( !v49 )
      sub_141938D2B(1, 7);
    v50 = a1 + 48;
    *(_DWORD *)(v49 + 3) = 1684627309;
    *(_DWORD *)v49 = 1835365481;
    v259.m256i_i64[0] = 7;
    v258 = (const __m128i *)v49;
    v259.m256i_i64[1] = v49;
    v259.m256i_i64[2] = 7;
    v51 = v254[2];
    if ( v51 < 0 )
    {
      v52 = 0;
      goto LABEL_52;
    }
    v229 = a1 + 48;
    if ( v51 )
    {
      v232 = nullptr;
      v126 = a4;
      v127 = a1;
      v128 = (const __m128i *)v254[1];
      nullsub_1(v50);
      v52 = 1;
      v129 = (__m128i *)sub_140001650(v51, 1);
      if ( !v129 )
      {
LABEL_52:
        v243 = 1;
        sub_141938D2B(v52, v51);
      }
      v130 = (__int64)v129;
      sub_1418F44E0(v129, v128, v51);
      a1 = v127;
      a4 = v126;
      a3 = v232;
    }
    else
    {
      v130 = 1;
    }
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = v51;
    v250.m256i_i64[2] = v130;
    v250.m256i_i64[3] = v51;
    v243 = 0;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    nullsub_1(v162);
    v163 = sub_140001650(5, 1);
    if ( !v163 )
      sub_141938D2B(1, 5);
    *(_BYTE *)(v163 + 4) = 97;
    *(_DWORD *)v163 = 1953260900;
    v259.m256i_i64[0] = 5;
    v259.m256i_i64[1] = v163;
    v259.m256i_i64[2] = 5;
    v165 = *((const __m128i **)&v226 + 1);
    nullsub_1(v164);
    v166 = v255;
    v167 = (__m128i *)sub_140001650(v255, 1);
    v258 = v167;
    if ( !v167 )
      sub_141938D2B(1, v166);
    v168 = (__int64)v167;
    sub_1418F44E0(v167, v165, (unsigned __int64)v166);
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = (__int64)v166;
    v250.m256i_i64[2] = v168;
    v250.m256i_i64[3] = (__int64)v166;
    sub_140E72AA0(&v257, &v230, &v259, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    *(_OWORD *)&v250.m256i_u64[1] = v230;
    v250.m256i_i64[3] = v231;
    v250.m256i_i8[0] = 5;
    sub_140E4D190((unsigned int)&v257, (_DWORD)v229, (unsigned int)&xmmword_141A53630, 37, (__int64)&v250);
    v169 = v257.m256i_u64[2];
    v258 = (const __m128i *)v257.m256i_i64[1];
    v170 = a5[2];
    if ( v257.m256i_i64[2] > (unsigned __int64)(*a5 - v170) )
    {
      sub_14190D590((_DWORD)a5, v170, v257.m256i_i32[4], 1, 1);
      v171 = a5;
      v170 = a5[2];
    }
    else
    {
      v171 = a5;
      if ( !v257.m256i_i64[2] )
      {
LABEL_195:
        v171[2] = v169 + v170;
        if ( v257.m256i_i64[0] )
          sub_140001660(v258, v257.m256i_i64[0], 1);
        sub_140DF44E0(&v250);
LABEL_198:
        *(_QWORD *)&v230 = 0;
        v231 = 0;
        nullsub_1(v18);
        v172 = (__m128i *)sub_140001650(4, 1);
        if ( !v172 )
          sub_141938D2B(1, 4);
        v172->m128i_i32[0] = 1701869940;
        v259.m256i_i64[0] = 4;
        v229 = v172;
        v259.m256i_i64[1] = (__int64)v172;
        v259.m256i_i64[2] = 4;
        nullsub_1(v173);
        v174 = (__m128i *)sub_140001650(36, 1);
        v258 = v174;
        if ( !v174 )
          sub_141938D2B(1, 36);
        qmemcpy(v174, "response.custom_tool_call_input.done", 36);
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = 36;
        v250.m256i_i64[2] = (__int64)v174;
        v250.m256i_i64[3] = 36;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v175);
        v176 = (void *)sub_140001650(12, 1);
        if ( !v176 )
          sub_141938D2B(1, 12);
        qmemcpy(v176, "output_index", 12);
        v259.m256i_i64[0] = 12;
        v259.m256i_i64[1] = (__int64)v176;
        v259.m256i_i64[2] = 12;
        v177 = *((unsigned int *)v254 + 30);
        v250.m256i_i8[0] = 2;
        v250.m256i_i64[1] = 0;
        v250.m256i_i64[2] = v177;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v178);
        v179 = sub_140001650(7, 1);
        if ( !v179 )
          sub_141938D2B(1, 7);
        v180 = a1 + 48;
        *(_DWORD *)(v179 + 3) = 1684627309;
        *(_DWORD *)v179 = 1835365481;
        v259.m256i_i64[0] = 7;
        v259.m256i_i64[1] = v179;
        v259.m256i_i64[2] = 7;
        v181 = v254[2];
        v258 = (const __m128i *)v179;
        if ( v181 < 0 )
        {
          v182 = 0;
          goto LABEL_208;
        }
        v229 = a1 + 48;
        if ( v181 )
        {
          v232 = a3;
          v183 = a4;
          v184 = a1;
          v185 = (const __m128i *)v254[1];
          nullsub_1(v180);
          v182 = 1;
          v186 = (__m128i *)sub_140001650(v181, 1);
          if ( !v186 )
          {
LABEL_208:
            v242 = 1;
            sub_141938D2B(v182, v181);
          }
          v187 = (__int64)v186;
          sub_1418F44E0(v186, v185, v181);
          a1 = v184;
          a4 = v183;
          a3 = v232;
        }
        else
        {
          v187 = 1;
        }
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = v181;
        v250.m256i_i64[2] = v187;
        v250.m256i_i64[3] = v181;
        v242 = 0;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        nullsub_1(v188);
        v189 = 1;
        v190 = (__m128i *)sub_140001650(5, 1);
        if ( !v190 )
          sub_141938D2B(1, 5);
        v190->m128i_i8[4] = 116;
        v190->m128i_i32[0] = 1970302569;
        v259.m256i_i64[0] = 5;
        v258 = v190;
        v259.m256i_i64[1] = (__int64)v190;
        v259.m256i_i64[2] = 5;
        v192 = v255;
        if ( v255 )
        {
          v193 = *((const __m128i **)&v226 + 1);
          nullsub_1(v191);
          v194 = (__m128i *)sub_140001650(v192, 1);
          if ( !v194 )
          {
            v241 = 1;
            sub_141938D2B(1, v192);
          }
          v189 = (__int64)v194;
          sub_1418F44E0(v194, v193, (unsigned __int64)v192);
        }
        v250.m256i_i8[0] = 3;
        v250.m256i_i64[1] = (__int64)v192;
        v250.m256i_i64[2] = v189;
        v250.m256i_i64[3] = (__int64)v192;
        v241 = 0;
        sub_140E72AA0(&v257, &v230, &v259, &v250);
        if ( v257.m256i_i8[0] != -1 )
          sub_140DF44E0(&v257);
        *(_OWORD *)&v250.m256i_u64[1] = v230;
        v250.m256i_i64[3] = v231;
        v250.m256i_i8[0] = 5;
        sub_140E4D190((unsigned int)&v257, (_DWORD)v229, (unsigned int)&xmmword_141A53655, 36, (__int64)&v250);
        v195 = v257.m256i_u64[2];
        v255 = (const __m128i *)v257.m256i_i64[1];
        v196 = a5[2];
        if ( v257.m256i_i64[2] > (unsigned __int64)(*a5 - v196) )
        {
          sub_14190D590((_DWORD)a5, v196, v257.m256i_i32[4], 1, 1);
          v197 = a5;
          v196 = a5[2];
        }
        else
        {
          v197 = a5;
          if ( !v257.m256i_i64[2] )
          {
LABEL_224:
            v197[2] = v195 + v196;
            if ( v257.m256i_i64[0] )
              sub_140001660(v255, v257.m256i_i64[0], 1);
            sub_140DF44E0(&v250);
            goto LABEL_16;
          }
        }
        sub_1418F44E0((__m128i *)(v196 + v197[1]), v255, v195);
        goto LABEL_224;
      }
    }
    sub_1418F44E0((__m128i *)(v170 + v171[1]), v258, v169);
    goto LABEL_195;
  }
LABEL_16:
  *(_QWORD *)&v230 = 0;
  v231 = 0;
  nullsub_1(v18);
  v19 = (__m128i *)sub_140001650(4, 1);
  if ( !v19 )
    sub_141938D2B(1, 4);
  v19->m128i_i32[0] = 1701869940;
  v259.m256i_i64[0] = 4;
  v258 = v19;
  v259.m256i_i64[1] = (__int64)v19;
  v259.m256i_i64[2] = 4;
  nullsub_1(v20);
  v21 = (__m128i *)sub_140001650(16, 1);
  v255 = v21;
  if ( !v21 )
    sub_141938D2B(1, 16);
  *v21 = *(__m128i *)"custom_tool_call";
  v250.m256i_i8[0] = 3;
  v250.m256i_i64[1] = 16;
  v250.m256i_i64[2] = (__int64)v21;
  v250.m256i_i64[3] = 16;
  sub_140E72AA0(&v257, &v230, &v259, &v250);
  if ( v257.m256i_i8[0] != -1 )
    sub_140DF44E0(&v257);
  nullsub_1(v22);
  v23 = (__m128i *)sub_140001650(2, 1);
  if ( !v23 )
    sub_141938D2B(1, 2);
  v23->m128i_i16[0] = 25705;
  v259.m256i_i64[0] = 2;
  v259.m256i_i64[1] = (__int64)v23;
  v259.m256i_i64[2] = 2;
  v24 = v254[2];
  v255 = v23;
  if ( v24 < 0 )
  {
    v25 = 0;
    goto LABEL_23;
  }
  if ( v24 )
  {
    v232 = a3;
    v37 = a4;
    v38 = a1;
    v39 = (const __m128i *)v254[1];
    nullsub_1(v23);
    v25 = 1;
    v40 = (__m128i *)sub_140001650(v24, 1);
    if ( !v40 )
    {
LABEL_23:
      v240 = 1;
      sub_141938D2B(v25, v24);
    }
    v41 = (__int64)v40;
    sub_1418F44E0(v40, v39, v24);
    a1 = v38;
    a4 = v37;
    a3 = v232;
  }
  else
  {
    v41 = 1;
  }
  v250.m256i_i8[0] = 3;
  v250.m256i_i64[1] = v24;
  v250.m256i_i64[2] = v41;
  v250.m256i_i64[3] = v24;
  v240 = 0;
  sub_140E72AA0(&v257, &v230, &v259, &v250);
  if ( v257.m256i_i8[0] != -1 )
    sub_140DF44E0(&v257);
  nullsub_1(v74);
  v75 = (__m128i *)sub_140001650(6, 1);
  if ( !v75 )
    sub_141938D2B(1, 6);
  v75->m128i_i16[2] = 29557;
  v75->m128i_i32[0] = 1952543859;
  v259.m256i_i64[0] = 6;
  v258 = v75;
  v259.m256i_i64[1] = (__int64)v75;
  v259.m256i_i64[2] = 6;
  nullsub_1(v76);
  v77 = (__m128i *)sub_140001650(v17, 1);
  v255 = v77;
  if ( !v77 )
    sub_141938D2B(1, v17);
  v78 = (__int64)v77;
  sub_1418F44E0(v77, v256, (unsigned __int64)v17);
  v250.m256i_i8[0] = 3;
  v250.m256i_i64[1] = (__int64)v17;
  v250.m256i_i64[2] = v78;
  v250.m256i_i64[3] = (__int64)v17;
  sub_140E72AA0(&v257, &v230, &v259, &v250);
  if ( v257.m256i_i8[0] != -1 )
    sub_140DF44E0(&v257);
  nullsub_1(v79);
  v80 = sub_140001650(7, 1);
  if ( !v80 )
    sub_141938D2B(1, 7);
  *(_DWORD *)(v80 + 3) = 1684627308;
  *(_DWORD *)v80 = 1819042147;
  v259.m256i_i64[0] = 7;
  v259.m256i_i64[1] = v80;
  v259.m256i_i64[2] = 7;
  v81 = v254[5];
  v256 = (__m128i *)v80;
  if ( v81 < 0 )
  {
    v82 = 0;
    goto LABEL_81;
  }
  if ( v81 )
  {
    v83 = a3;
    v84 = (const __m128i *)v254[4];
    nullsub_1(v254);
    v82 = 1;
    v85 = (__m128i *)sub_140001650(v81, 1);
    if ( !v85 )
    {
LABEL_81:
      v239 = 1;
      sub_141938D2B(v82, v81);
    }
    v86 = (__int64)v85;
    sub_1418F44E0(v85, v84, v81);
    a3 = v83;
  }
  else
  {
    v86 = 1;
  }
  v250.m256i_i8[0] = 3;
  v250.m256i_i64[1] = v81;
  v250.m256i_i64[2] = v86;
  v250.m256i_i64[3] = v81;
  v239 = 0;
  sub_140E72AA0(&v257, &v230, &v259, &v250);
  if ( v257.m256i_i8[0] != -1 )
    sub_140DF44E0(&v257);
  nullsub_1(v144);
  v145 = (__m128i *)sub_140001650(4, 1);
  if ( !v145 )
    sub_141938D2B(1, 4);
  v145->m128i_i32[0] = 1701667182;
  v259.m256i_i64[0] = 4;
  v259.m256i_i64[1] = (__int64)v145;
  v259.m256i_i64[2] = 4;
  v146 = v254[8];
  v256 = v145;
  if ( v146 < 0 )
  {
    v147 = 0;
    goto LABEL_161;
  }
  v148 = (const __m128i *)v254[7];
  if ( v146 )
  {
    nullsub_1(v254);
    v147 = 1;
    v149 = (__m128i *)sub_140001650(v146, 1);
    if ( !v149 )
    {
LABEL_161:
      v238 = 1;
      sub_141938D2B(v147, v146);
    }
    v150 = (__int64)v149;
    sub_1418F44E0(v149, v148, v146);
  }
  else
  {
    v150 = 1;
  }
  v255 = v148;
  v250.m256i_i8[0] = 3;
  v250.m256i_i64[1] = v146;
  v250.m256i_i64[2] = v150;
  v250.m256i_i64[3] = v146;
  v238 = 0;
  sub_140E72AA0(&v257, &v230, &v259, &v250);
  if ( v257.m256i_i8[0] != -1 )
    sub_140DF44E0(&v257);
  v203 = a3;
  v204 = a1;
  nullsub_1(v202);
  v205 = (__m128i *)sub_140001650(5, 1);
  if ( !v205 )
    sub_141938D2B(1, 5);
  v205->m128i_i8[4] = 116;
  v205->m128i_i32[0] = 1970302569;
  v259.m256i_i64[0] = 5;
  v259.m256i_i64[1] = (__int64)v205;
  v259.m256i_i64[2] = 5;
  v207 = (unsigned __int64)v227;
  v256 = v205;
  if ( (__int64)v227 < 0 )
  {
    v208 = 0;
    goto LABEL_242;
  }
  v258 = *((const __m128i **)&v226 + 1);
  if ( v227 )
  {
    nullsub_1(v206);
    v208 = 1;
    v209 = (__m128i *)sub_140001650(v207, 1);
    if ( !v209 )
    {
LABEL_242:
      v237 = 1;
      sub_141938D2B(v208, v207);
    }
    v210 = (__int64)v209;
    sub_1418F44E0(v209, v258, v207);
  }
  else
  {
    v210 = 1;
  }
  v250.m256i_i8[0] = 3;
  v250.m256i_i64[1] = v207;
  v250.m256i_i64[2] = v210;
  v250.m256i_i64[3] = v207;
  v237 = 0;
  sub_140E72AA0(&v257, &v230, &v259, &v250);
  a1 = v204;
  a3 = v203;
  if ( v257.m256i_i8[0] != -1 )
    sub_140DF44E0(&v257);
  *(_OWORD *)&v259.m256i_u64[1] = v230;
  v259.m256i_i64[3] = v231;
  v259.m256i_i8[0] = 5;
  if ( (_QWORD)v226 )
    sub_140001660(v258, v226, 1);
  v261 = 1;
  sub_1402B8770((__int64)&a1[17].m128i_i64[1], (__int64)&v259, (__int64)v255, v146);
LABEL_147:
  if ( a3 )
  {
    *(_QWORD *)&v226 = 0;
    v227 = nullptr;
    nullsub_1(v138);
    v139 = (__m128i *)sub_140001650(6, 1);
    if ( !v139 )
      sub_141938D2B(1, 6);
    v139->m128i_i16[2] = 28271;
    v139->m128i_i32[0] = 1935762802;
    *(_QWORD *)&v230 = 6;
    *((_QWORD *)&v230 + 1) = v139;
    v231 = 6;
    v256 = v139;
    if ( a4 < 0 )
    {
      v141 = 0;
      goto LABEL_151;
    }
    if ( a4 )
    {
      nullsub_1(v140);
      v141 = 1;
      v142 = (__m128i *)sub_140001650(a4, 1);
      if ( !v142 )
      {
LABEL_151:
        v234 = 1;
        sub_141938D2B(v141, a4);
      }
      v143 = (__int64)v142;
      sub_1418F44E0(v142, a3, a4);
    }
    else
    {
      v143 = 1;
    }
    v250.m256i_i8[0] = 3;
    v250.m256i_i64[1] = a4;
    v250.m256i_i64[2] = v143;
    v250.m256i_i64[3] = a4;
    v234 = 0;
    sub_140E72AA0(&v257, &v226, &v230, &v250);
    if ( v257.m256i_i8[0] != -1 )
      sub_140DF44E0(&v257);
    *(_OWORD *)&v250.m256i_u64[1] = v226;
    v250.m256i_i64[3] = (__int64)v227;
    v250.m256i_i8[0] = 5;
    v233 = 1;
    v256 = (__m128i *)sub_141641AF0("incomplete_detailsUpstream Anthropic stream ended before message_stop", 18, &v259);
    sub_140DF44E0(v256);
    v198 = *(__m128i *)v250.m256i_i8;
    v199 = v256;
    v256[1] = *(__m128i *)&v250.m256i_u64[2];
    *v199 = v198;
  }
  v200 = *((unsigned int *)v254 + 30);
  v250 = v259;
  v261 = 0;
  sub_140E7D900(&v257, &a1[46].m128i_u64[1], v200, &v250);
  if ( v257.m256i_i8[0] != -1 )
  {
    v261 = 0;
    sub_140DF44E0(&v257);
  }
  if ( v223 )
    sub_140001660(v224, v223, 1);
  return sub_14038D8C0(v254);
}
