// module: codexmate_lib/core/analytics
// addr: 0x14086c970
// name: compute_usage_analytics
// win 1.2.1 | module src/core/analytics.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::analytics::compute_usage_analytics | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall compute_usage_analytics(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __m128i v6; // xmm0
  int v7; // esi
  __int64 v8; // rsi
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int32 v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int32 v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __m128i v25; // xmm7
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // r12
  char v30; // bl
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // r15
  _BYTE *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdi
  __int128 v46; // rax
  __m128i v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // r10
  char v53; // r10
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // r8
  __int64 v56; // r14
  __int64 v57; // r14
  int v59; // edx
  __int64 v60; // rdx
  __int64 i; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v66; // rax
  __int128 v67; // kr10_16
  __m128i v68; // xmm0
  __m128i v69; // xmm6
  __int64 v70; // r12
  __int64 v71; // r15
  unsigned __int64 v72; // rax
  __m128i v73; // xmm8
  unsigned __int64 v75; // r13
  __int64 v76; // rsi
  int v77; // eax
  unsigned __int64 v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r11
  __int64 v83; // r11
  double v84; // xmm6_8
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r8
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rcx
  const __m128i *j; // rdx
  __m128i si128; // xmm0
  __int64 v98; // r10
  __int64 v99; // rsi
  int v100; // edx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v104; // r14
  __int64 v105; // r15
  const __m128i *k; // rcx
  __m128i v108; // xmm0
  __int16 v109; // r10
  __int64 v110; // r8
  __int64 v111; // rax
  __m128d v112; // xmm1
  double v113; // xmm6_8
  __int64 v114; // rsi
  __m128i v115; // xmm9
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // r12
  __int64 v119; // r14
  int v120; // ebx
  int v121; // r15d
  __int64 v122; // r13
  unsigned __int64 v123; // rax
  __m128i v124; // xmm0
  __m128i v125; // xmm15
  __int64 m; // rbx
  unsigned __int64 v128; // rax
  __m128i v129; // xmm7
  unsigned __int64 v131; // r13
  __int64 v132; // r15
  int v133; // eax
  unsigned __int64 v134; // r13
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __m128d v139; // xmm1
  double v140; // xmm0_8
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rcx
  _QWORD *v144; // rsi
  char v145; // al
  unsigned __int64 v147; // rdi
  __int64 v148; // rdi
  __int64 v149; // rdi
  int v150; // eax
  __int64 v151; // rdi
  __int64 v152; // rdi
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 *v155; // rdx
  __int64 v156; // r8
  __int64 v157; // r11
  __int64 v158; // r9
  __int64 v159; // r10
  __int64 v160; // rbx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rax
  _QWORD v164[2]; // [rsp+50h] [rbp-30h]
  _QWORD v165[3]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v166; // [rsp+78h] [rbp-8h]
  double v167; // [rsp+80h] [rbp+0h]
  __int64 v168; // [rsp+88h] [rbp+8h]
  __int64 v169; // [rsp+90h] [rbp+10h]
  __m128i v170; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v171; // [rsp+A8h] [rbp+28h]
  __m128i v172; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v173; // [rsp+C0h] [rbp+40h]
  __m128i v174; // [rsp+D0h] [rbp+50h]
  __int64 v175; // [rsp+E8h] [rbp+68h]
  __int64 v176; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v177; // [rsp+F8h] [rbp+78h]
  __int64 v178; // [rsp+100h] [rbp+80h]
  __int64 v179; // [rsp+108h] [rbp+88h]
  _BYTE v180[40]; // [rsp+110h] [rbp+90h] BYREF
  __m128i v181; // [rsp+138h] [rbp+B8h]
  __int64 v182; // [rsp+148h] [rbp+C8h]
  __m128i v183; // [rsp+150h] [rbp+D0h] BYREF
  unsigned __int64 v184; // [rsp+160h] [rbp+E0h]
  __int64 v185; // [rsp+168h] [rbp+E8h]
  __int64 v186; // [rsp+170h] [rbp+F0h]
  __int64 v187; // [rsp+178h] [rbp+F8h]
  _BYTE v188[48]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v189; // [rsp+1B0h] [rbp+130h]
  __m128i v190; // [rsp+1C0h] [rbp+140h]
  char *v191; // [rsp+1D0h] [rbp+150h]
  __int128 v192; // [rsp+1E0h] [rbp+160h] BYREF
  __m128i v193; // [rsp+1F0h] [rbp+170h]
  __int64 v194; // [rsp+200h] [rbp+180h]
  __int64 v195; // [rsp+208h] [rbp+188h]
  __int64 v196; // [rsp+210h] [rbp+190h] BYREF
  int v197; // [rsp+21Ch] [rbp+19Ch]
  __int64 v198; // [rsp+220h] [rbp+1A0h]
  __m128i v199; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v200; // [rsp+238h] [rbp+1B8h]
  __int128 v201; // [rsp+248h] [rbp+1C8h]
  __int128 v202; // [rsp+258h] [rbp+1D8h]
  __m128i v203; // [rsp+268h] [rbp+1E8h] BYREF
  char *v204; // [rsp+278h] [rbp+1F8h]
  __int64 v205; // [rsp+280h] [rbp+200h]
  __int64 v206; // [rsp+288h] [rbp+208h]
  __int64 v207; // [rsp+290h] [rbp+210h]
  __int64 v208; // [rsp+298h] [rbp+218h]
  char v209; // [rsp+2A3h] [rbp+223h]
  bool v210; // [rsp+2A4h] [rbp+224h]
  char v211; // [rsp+2A5h] [rbp+225h]
  char v212; // [rsp+2A6h] [rbp+226h] BYREF
  char v213; // [rsp+2A7h] [rbp+227h]
  __int64 v214; // [rsp+2A8h] [rbp+228h]

  v214 = -2;
  v176 = a1;
  if ( dword_141EC25C0 )
  {
    sub_1416983C6(&dword_141EC25C0);
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC25C4, 1, 0) )
      goto LABEL_3;
  }
  else
  {
    LOBYTE(a1) = 1;
    if ( !_InterlockedCompareExchange8(&byte_141EC25C4, 1, 0) )
      goto LABEL_3;
  }
  sub_1416C15B0(&byte_141EC25C4);
LABEL_3:
  if ( 2 * *off_141EC90B8 )
  {
    v150 = sub_1416C2250(a1, a2);
    LOBYTE(v150) = v150 ^ 1;
    v197 = v150;
  }
  else
  {
    v197 = 0;
  }
  v170.m128i_i64[0] = 0;
  v170.m128i_i64[1] = 8;
  v171 = 0;
  v4 = a2[57];
  v5 = a2[58];
  v213 = 1;
  v198 = v4;
  v185 = v5;
  sub_141473FA0(
    (unsigned int)&v199,
    v4,
    v5,
    (unsigned int)"usage-analytics-index-v1.json[AiMaMi][usage-analytics] ignored invalid incremental index",
    29);
  v208 = v199.m128i_i64[1];
  sub_14148D3C0(v188, v199.m128i_i64[1], v200);
  if ( v199.m128i_i64[0] )
    sub_140001660(v208, v199.m128i_i64[0], 1);
  if ( *(_QWORD *)v188 == -1 )
  {
    v213 = 1;
    sub_140018650(&v188[8]);
LABEL_26:
    v213 = 1;
    sub_140FFC490(&v199);
    v12 = v199.m128i_i32[3];
    v213 = 1;
    v15 = sub_141470CD0(v14, v13);
    if ( *(_BYTE *)(v15 + 16) == 1 )
    {
      v16 = *(_QWORD *)v15;
      v17 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      v213 = 1;
      v152 = v15;
      v16 = sub_141486EF0();
      v15 = v152;
      *(_QWORD *)v152 = v16;
      *(_QWORD *)(v152 + 8) = v17;
      *(_BYTE *)(v152 + 16) = 1;
    }
    *(_QWORD *)v15 = v16 + 1;
    v181.m128i_i32[2] = 1;
    v181.m128i_i32[3] = v12;
    *(_OWORD *)v180 = *(_OWORD *)&off_1417939C0;
    *(__m128i *)&v180[16] = _mm_loadu_si128((const __m128i *)&xmmword_1417939D0);
    *(_QWORD *)&v180[32] = v16;
    v181.m128i_i64[0] = v17;
    LOBYTE(v2) = 1;
    goto LABEL_29;
  }
  v206 = *(_QWORD *)&v188[8];
  v208 = *(_QWORD *)v188;
  *(_OWORD *)v188 = *(_OWORD *)&v188[8];
  *(_OWORD *)&v188[16] = 0;
  sub_1408A9E40(&v199, v188);
  if ( !v199.m128i_i64[0] )
  {
    v9 = *(_QWORD *)v199.m128i_i64[1];
    v10 = *(_QWORD *)v199.m128i_i64[1] == 1;
    v207 = v199.m128i_i64[1];
    if ( v10 )
    {
      sub_140018650(v199.m128i_i64[1] + 8);
    }
    else if ( !v9 )
    {
      v11 = *(_QWORD *)(v207 + 16);
      if ( v11 )
        sub_140001660(*(_QWORD *)(v207 + 8), v11, 1);
    }
    sub_140001660(v207, 40, 8);
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v199.m128i_i64[0] = 0;
      v199.m128i_i64[1] = (__int64)aCodexmateLibCo_32;
      v200 = 0x1Eu;
      *(_QWORD *)&v201 = aSrcCoreAnalyti;
      *((_QWORD *)&v201 + 1) = 21;
      *(_QWORD *)&v202 = 2;
      *((_QWORD *)&v202 + 1) = aCodexmateLibCo_32;
      v203.m128i_i64[0] = 30;
      v203.m128i_i64[1] = 0xF400000001LL;
      v204 = "[AiMaMi][usage-analytics] ignored invalid incremental index";
      v205 = 119;
      sub_1412C36A0(&v212, &v199);
    }
    goto LABEL_24;
  }
  *(_QWORD *)&v189 = v202;
  v6 = _mm_loadu_si128(&v199);
  *(_OWORD *)&v188[32] = v201;
  *(_OWORD *)&v188[16] = v200;
  *(__m128i *)v188 = v6;
  if ( (_DWORD)v202 != 1 || (v7 = DWORD1(v189), sub_140FFC490(&v199), v7 != v199.m128i_i32[3]) )
  {
    sub_14067FA70((const __m128i **)v188);
LABEL_24:
    if ( v208 )
      sub_140001660(v206, v208, 1);
    goto LABEL_26;
  }
  v8 = *(_QWORD *)v188;
  v172 = *(__m128i *)&v188[8];
  v173 = *(_OWORD *)&v188[24];
  v174 = _mm_loadu_si128((const __m128i *)&v188[40]);
  if ( v208 )
    sub_140001660(v206, v208, 1);
  if ( !v8 )
    goto LABEL_26;
  *(_QWORD *)v180 = v8;
  *(__m128i *)&v180[8] = _mm_load_si128(&v172);
  *(_OWORD *)&v180[24] = v173;
  v181 = v174;
  v2 = 0;
LABEL_29:
  v211 = 1;
  sub_140FFC490(&v199);
  v18 = v199.m128i_i32[3];
  v211 = 1;
  v21 = sub_141470CD0(v20, v19);
  if ( *(_BYTE *)(v21 + 16) == 1 )
  {
    v23 = *(_QWORD *)v21;
    v24 = *(_QWORD *)(v21 + 8);
  }
  else
  {
    v211 = 1;
    v151 = v21;
    v23 = sub_141486EF0();
    v21 = v151;
    *(_QWORD *)v151 = v23;
    *(_QWORD *)(v151 + 8) = v24;
    *(_BYTE *)(v151 + 16) = 1;
  }
  *(_QWORD *)v21 = v23 + 1;
  LODWORD(v196) = 1;
  HIDWORD(v196) = v18;
  v192 = *(_OWORD *)&off_1417939C0;
  v25 = _mm_loadu_si128((const __m128i *)&xmmword_1417939D0);
  v193 = v25;
  v194 = v23;
  v195 = v24;
  *(_DWORD *)v188 = sub_141475580(v23, v24, v23 + 1, v22);
  *(_DWORD *)&v188[4] = v26;
  sub_141475530(&v199, v188, 3577643008LL, 27111902);
  if ( v199.m128i_i8[0] )
    v27 = 0;
  else
    v27 = v199.m128i_i64[1];
  sub_14086FB20(v165, v27);
  LODWORD(v206) = v2;
  v164[0] = a2 + 20;
  v164[1] = a2 + 24;
  v207 = a2[1];
  v28 = a2[2];
  v208 = v165[1];
  v29 = v165[2];
  v30 = 1;
  v31 = 0;
  do
  {
    while ( 1 )
    {
      v33 = v164[v31];
      sub_141486710(&v199, *(_QWORD *)(v33 + 8), *(_QWORD *)(v33 + 16));
      ++v31;
      if ( v199.m128i_i32[0] != 2 )
        break;
      *(_QWORD *)&v188[8] = v199.m128i_i64[1];
      *(_QWORD *)v188 = 2;
LABEL_36:
      sub_140018650(&v188[8]);
      if ( v31 == 2 )
        goto LABEL_40;
    }
    *(__m128i *)v188 = v199;
    v191 = v204;
    v190 = _mm_loadu_si128(&v203);
    v189 = v202;
    *(_OWORD *)&v188[32] = v201;
    *(_OWORD *)&v188[16] = v200;
    if ( v199.m128i_i64[0] == 2 )
      goto LABEL_36;
    v30 &= sub_14086FE40(
             *(_QWORD *)(v33 + 8),
             *(_QWORD *)(v33 + 16),
             v207,
             v28,
             v208,
             v29,
             (__int64)v180,
             (__int64)&v192,
             (__int64)&v170);
  }
  while ( v31 != 2 );
LABEL_40:
  if ( (v30 & 1) != 0 )
  {
    if ( !(_BYTE)v206 && v196 == v181.m128i_i64[1] && (unsigned __int8)sub_1401C2DC0(&v192, v180) )
      goto LABEL_58;
    nullsub_1(v32);
    v34 = (_BYTE *)sub_140001650(128, 1);
    if ( !v34 )
      sub_1416C2D4B(1, 128);
    v199.m128i_i64[0] = 128;
    v199.m128i_i64[1] = (__int64)v34;
    v183.m128i_i64[0] = (__int64)&v199;
    *v34 = 123;
    *(_QWORD *)&v200 = 1;
    *(_WORD *)v188 = 256;
    *(_QWORD *)&v188[8] = &v183;
    v36 = sub_1404673D0(v188, aSchemaversion_3, 13, &v196);
    if ( v36 )
      goto LABEL_51;
    if ( v188[0] )
      goto LABEL_47;
    v36 = sub_140467220(v188, aTimezoneoffset, 21, (char *)&v196 + 4);
    if ( v36 )
    {
LABEL_51:
      if ( v199.m128i_i64[0] )
        sub_140001660(v199.m128i_i64[1], v199.m128i_i64[0], 1);
      goto LABEL_53;
    }
    if ( v188[0] )
    {
LABEL_47:
      v36 = sub_1416BF0E0();
      goto LABEL_51;
    }
    v36 = sub_14045DA60(v188, aFiles, 5, &v192);
    if ( v36 )
      goto LABEL_51;
    if ( (v188[0] & 1) == 0 && v188[1] )
      sub_140301CD0(**(_QWORD **)&v188[8], &unk_141794020, 1);
    v36 = v199.m128i_i64[1];
    if ( v199.m128i_i64[0] == -1 )
    {
LABEL_53:
      v199.m128i_i64[0] = v36;
      nullsub_1(v35);
      v37 = (__int64 *)sub_140001650(8, 8);
      if ( !v37 )
        sub_1416C2D31(8, 8);
      *v37 = v36;
      LOBYTE(v38) = 40;
      v39 = sub_141475210(v38, v37, &off_1417989E0);
    }
    else
    {
      v206 = v199.m128i_i64[1];
      v207 = v199.m128i_i64[0];
      v147 = v200;
      sub_141473FA0(
        (unsigned int)&v199,
        v198,
        v185,
        (unsigned int)"usage-analytics-index-v1.json[AiMaMi][usage-analytics] ignored invalid incremental index",
        29);
      v198 = v199.m128i_i64[1];
      v39 = sub_1408726C0(v199.m128i_i64[1], v200, v206, v147);
      if ( v207 )
      {
        v148 = v39;
        sub_140001660(v206, v207, 1);
        v39 = v148;
      }
      if ( v199.m128i_i64[0] )
      {
        v149 = v39;
        sub_140001660(v198, v199.m128i_i64[0], 1);
        v39 = v149;
      }
      if ( !v39 )
        goto LABEL_58;
    }
    v183.m128i_i64[0] = v39;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)v188 = &v183;
      *(_QWORD *)&v188[8] = sub_141490720;
      v199.m128i_i64[0] = 0;
      v199.m128i_i64[1] = (__int64)aCodexmateLibCo_32;
      v200 = 0x1Eu;
      *(_QWORD *)&v201 = aSrcCoreAnalyti;
      *((_QWORD *)&v201 + 1) = 21;
      *(_QWORD *)&v202 = 2;
      *((_QWORD *)&v202 + 1) = aCodexmateLibCo_32;
      v203.m128i_i64[0] = 30;
      v203.m128i_i64[1] = 0xAB00000001LL;
      v204 = (char *)&unk_141798922;
      v205 = (__int64)v188;
      sub_1412C36A0(&v212, &v199);
    }
    sub_140018650(&v183);
    goto LABEL_58;
  }
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    v199.m128i_i64[0] = 0;
    v199.m128i_i64[1] = (__int64)aCodexmateLibCo_32;
    v200 = 0x1Eu;
    *(_QWORD *)&v201 = aSrcCoreAnalyti;
    *((_QWORD *)&v201 + 1) = 21;
    *(_QWORD *)&v202 = 2;
    *((_QWORD *)&v202 + 1) = aCodexmateLibCo_32;
    v203.m128i_i64[0] = 30;
    v203.m128i_i64[1] = 0xB100000001LL;
    v204 = (char *)&unk_1417988A2;
    v205 = 153;
    sub_1412C36A0(&v212, &v199);
  }
LABEL_58:
  v184 = v171;
  v183 = _mm_loadu_si128(&v170);
  if ( v165[0] )
    sub_140001660(v208, v165[0], 1);
  v211 = 0;
  sub_14067FA70((const __m128i **)&v192);
  v213 = 0;
  sub_14067FA70((const __m128i **)v180);
  v42 = sub_141470CD0(v41, v40);
  v45 = v42;
  if ( *(_BYTE *)(v42 + 16) == 1 )
  {
    v46 = *(_OWORD *)v42;
  }
  else
  {
    *(_QWORD *)&v46 = sub_141486EF0();
    *(_OWORD *)v45 = v46;
    *(_BYTE *)(v45 + 16) = 1;
  }
  v47.m128i_i64[0] = v46 + 1;
  *(_QWORD *)v45 = v46 + 1;
  *(__m128i *)&v188[16] = v25;
  *(_OWORD *)v188 = *(_OWORD *)&off_1417939C0;
  *(_OWORD *)&v188[32] = v46;
  v48 = v183.m128i_i64[1];
  v198 = v184;
  v49 = v183.m128i_i64[1] + 40 * v184;
  v187 = v183.m128i_i64[1];
  while ( v48 != v49 )
  {
    sub_14086FB20(&v192, *(_QWORD *)(v48 + 32));
    sub_14046C9D0(&v199, v188, &v192);
    v47 = v199;
    if ( v199.m128i_i64[0] != -1 )
    {
      *(_QWORD *)&v46 = *((_QWORD *)&v200 + 1);
      *((_QWORD *)&v46 + 1) = **((_QWORD **)&v200 + 1);
      v44 = *(_QWORD *)(*((_QWORD *)&v200 + 1) + 8LL);
      v50 = v201 & v44;
      _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(**((_QWORD **)&v200 + 1) + (v201 & v44))));
      if ( !(_DWORD)_R11 )
      {
        v57 = 16;
        do
        {
          v50 = v44 & (v57 + v50);
          _R11 = (unsigned int)_mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(*((_QWORD *)&v46 + 1) + v50)));
          v57 += 16;
        }
        while ( !(_DWORD)_R11 );
      }
      __asm { tzcnt   r11d, r11d }
      _R11 = v44 & (v50 + _R11);
      v53 = *(_BYTE *)(*((_QWORD *)&v46 + 1) + _R11);
      if ( v53 >= 0 )
      {
        _R10D = _mm_movemask_epi8(_mm_load_si128(*((const __m128i **)&v46 + 1)));
        __asm { tzcnt   r11d, r10d }
        v53 = *(_BYTE *)(*((_QWORD *)&v46 + 1) + _R11);
      }
      v54 = v200;
      v55 = (unsigned __int64)v201 >> 57;
      *(_BYTE *)(*((_QWORD *)&v46 + 1) + _R11) = (unsigned __int64)v201 >> 57;
      *(_BYTE *)(*((_QWORD *)&v46 + 1) + (v44 & (_R11 - 16)) + 16) = v55;
      v43 = -48 * _R11;
      *(__m128i *)(*((_QWORD *)&v46 + 1) + v43 - 48) = v47;
      v47.m128i_i64[1] = *((_QWORD *)&v46 + 1) - 48 * _R11;
      *(_OWORD *)(*((_QWORD *)&v46 + 1) + v43 - 32) = v54;
      *(_OWORD *)(*((_QWORD *)&v46 + 1) + v43 - 16) = 8u;
      v47.m128i_i64[0] = v53 & 1;
      *(__m128i *)(v46 + 16) = _mm_sub_epi64(
                                 _mm_loadu_si128((const __m128i *)(v46 + 16)),
                                 (__m128i)_mm_shuffle_ps(
                                            (__m128)_mm_cvtsi32_si128(v47.m128i_u32[0]),
                                            (__m128)xmmword_141748CD0,
                                            228));
    }
    v56 = *(_QWORD *)(v47.m128i_i64[1] - 8);
    if ( v56 == *(_QWORD *)(v47.m128i_i64[1] - 24) )
      sub_141688EE0(v47.m128i_i64[1] - 24);
    *(_QWORD *)(*(_QWORD *)(v47.m128i_i64[1] - 16) + 8 * v56) = v48;
    v48 += 40;
    *(_QWORD *)(v47.m128i_i64[1] - 8) = v56 + 1;
  }
  LODWORD(v192) = sub_141475580(v47.m128i_i64[0], *((_QWORD *)&v46 + 1), v43, v44);
  DWORD1(v192) = v59;
  sub_141475530(&v199, &v192, 3577643008LL, 27111902);
  if ( v199.m128i_i8[0] )
    v60 = 0;
  else
    v60 = v199.m128i_i64[1];
  sub_14086FB20(&v172, v60);
  if ( !*(_QWORD *)&v188[24] )
  {
LABEL_87:
    v178 = 0;
    v177 = 0;
    v182 = 0;
    v78 = v198;
    if ( !v198 )
      goto LABEL_117;
LABEL_88:
    if ( v78 >= 4 )
    {
      i = v78 & 0x3FFFFFFFFFFFFFCLL;
      v63 = v187 + 144;
      _RCX = 0;
      v79 = 0;
      do
      {
        v79 += *(_QWORD *)v63 + *(_QWORD *)(v63 - 40) + *(_QWORD *)(v63 - 80) + *(_QWORD *)(v63 - 120);
        _RCX += 4;
        v63 += 160;
      }
      while ( i != _RCX );
      if ( (v78 & 3) == 0 )
      {
LABEL_98:
        v83 = *(_QWORD *)&v188[24];
        if ( *(int *)&v188[24] <= 0 )
          goto LABEL_118;
LABEL_99:
        v84 = (double)(int)v78 / (double)(int)v83;
        v166 = v83;
        if ( v83 )
          goto LABEL_119;
        goto LABEL_123;
      }
    }
    else
    {
      _RCX = 0;
      v79 = 0;
    }
    _RCX = v187 + 40 * _RCX + 24;
    i = 0;
    do
    {
      v79 += *(_QWORD *)(_RCX + i);
      i += 40;
    }
    while ( 40 * (v78 & 3) != i );
    goto LABEL_98;
  }
  v66 = sub_140378810(&v188[32], &v172);
  _RCX = v66 >> 57;
  v67 = *(_OWORD *)v188;
  v68 = _mm_cvtsi32_si128(v66 >> 57);
  v69 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v68, v68), 0), 68);
  v70 = v172.m128i_i64[1];
  v71 = v173;
  for ( i = 0; ; i += 16 )
  {
    v72 = *((_QWORD *)&v67 + 1) & v66;
    v73 = _mm_loadu_si128((const __m128i *)(v67 + v72));
    _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v73, v69));
    if ( _R14D )
      break;
LABEL_85:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v73, (__m128i)-1LL));
    if ( (_DWORD)_RCX )
      goto LABEL_87;
    v66 = i + v72 + 16;
  }
  v208 = i;
  while ( 1 )
  {
    __asm { tzcnt   ecx, r14d }
    v75 = v72;
    _RCX = -(__int64)(*((_QWORD *)&v67 + 1) & (v72 + _RCX));
    if ( v71 == *(_QWORD *)(v67 + 48 * _RCX - 32) )
    {
      v76 = v67 + 48 * _RCX;
      if ( !(unsigned int)sub_1416847B0(v70, *(_QWORD *)(v76 - 40), v71) )
        break;
    }
    v77 = _R14D - 1;
    LOWORD(v77) = _R14D & (_R14D - 1);
    v10 = (_WORD)v77 == 0;
    _R14D = v77;
    v72 = v75;
    i = v208;
    if ( v10 )
      goto LABEL_85;
  }
  v177 = *(_QWORD *)(v76 - 8);
  if ( v177 )
  {
    v80 = *(_QWORD *)(v76 - 16);
    if ( v177 < 4 )
    {
      v81 = 0;
      v82 = 0;
      goto LABEL_105;
    }
    v81 = 0;
    v82 = 0;
    do
    {
      v82 += *(_QWORD *)(*(_QWORD *)(v80 + 8 * v81 + 24) + 24LL)
           + *(_QWORD *)(*(_QWORD *)(v80 + 8 * v81 + 16) + 24LL)
           + *(_QWORD *)(*(_QWORD *)(v80 + 8 * v81 + 8) + 24LL)
           + *(_QWORD *)(*(_QWORD *)(v80 + 8 * v81) + 24LL);
      v81 += 4;
    }
    while ( (v177 & 0xFFFFFFFFFFFFFFCLL) != v81 );
    if ( (v177 & 3) != 0 )
    {
LABEL_105:
      v85 = v80 + 8 * v81;
      v86 = 0;
      do
        v82 += *(_QWORD *)(*(_QWORD *)(v85 + 8 * v86++) + 24LL);
      while ( (v177 & 3) != v86 );
    }
  }
  else
  {
    v82 = 0;
  }
  v178 = v82;
  *(_QWORD *)v180 = v70;
  *(_QWORD *)&v180[8] = v71;
  v87 = *(_QWORD *)(v76 - 16) + 8LL * *(_QWORD *)(v76 - 8);
  v199.m128i_i64[1] = *(_QWORD *)(v76 - 16);
  v200 = (unsigned __int64)v87;
  *((_QWORD *)&v201 + 1) = 0;
  v199.m128i_i64[0] = (__int64)v180;
  sub_14031FF60(&v192, &v199);
  v88 = v193.m128i_i64[0];
  if ( v193.m128i_i64[0] )
  {
    if ( v193.m128i_i64[0] == 1 )
    {
      v89 = **((_QWORD **)&v192 + 1);
      _RCX = 1;
      v90 = **((_QWORD **)&v192 + 1);
    }
    else
    {
      v153 = *((_QWORD *)&v192 + 1);
      if ( v193.m128i_i64[0] >= 0x15uLL )
      {
        sub_140B5B160(*((_QWORD *)&v192 + 1), v193.m128i_i64[0], &v212);
      }
      else
      {
        v154 = *((_QWORD *)&v192 + 1) + 8 * v193.m128i_i64[0];
        v155 = (__int64 *)(*((_QWORD *)&v192 + 1) + 8LL);
        v156 = 8;
        do
        {
          v157 = *(v155 - 1);
          v158 = *v155;
          if ( *v155 < v157 )
          {
            v159 = v156;
            do
            {
              *(_QWORD *)(v153 + v159) = v157;
              if ( v159 == 8 )
              {
                _R10 = v153;
                goto LABEL_200;
              }
              v157 = *(_QWORD *)(v153 + v159 - 16);
              v159 -= 8;
            }
            while ( v158 < v157 );
            _R10 = v153 + v159;
LABEL_200:
            *(_QWORD *)_R10 = v158;
          }
          ++v155;
          v156 += 8;
        }
        while ( v155 != (__int64 *)v154 );
        v88 = v193.m128i_i64[0];
        if ( !v193.m128i_i64[0] )
          sub_1416C30E3(0, 0, &off_141798A38);
      }
      v64 = *((_QWORD *)&v192 + 1);
      v90 = **((_QWORD **)&v192 + 1);
      v160 = 8 * v88;
      _RCX = 1;
      if ( v160 == 8 )
      {
        v89 = **((_QWORD **)&v192 + 1);
      }
      else
      {
        _R10 = 8;
        v161 = 0;
        v162 = **((_QWORD **)&v192 + 1);
        do
        {
          v89 = *(_QWORD *)(*((_QWORD *)&v192 + 1) + _R10);
          if ( v89 - v162 >= 301 )
          {
            v163 = v162 - v90;
            if ( v163 < 2 )
              v163 = 1;
            v161 += v163 / 0x3CuLL + 1;
            v90 = *(_QWORD *)(*((_QWORD *)&v192 + 1) + _R10);
          }
          _R10 += 8;
          v162 = v89;
        }
        while ( v160 != _R10 );
        _RCX = v161 + 1;
      }
    }
    v63 = v89 - v90;
    v91 = 1;
    if ( v63 >= 2 )
      v91 = v63;
    v92 = _RCX + v91 / 0x3C;
    v93 = 1440;
    if ( v92 < 1440 )
      v93 = v92;
    v182 = v93;
    i = v192;
    if ( (_QWORD)v192 )
LABEL_115:
      sub_140001660(*((_QWORD *)&v192 + 1), 8 * i, 8);
  }
  else
  {
    v182 = 0;
    i = v192;
    if ( (_QWORD)v192 )
      goto LABEL_115;
  }
  v187 = v183.m128i_i64[1];
  v78 = v184;
  if ( v184 )
    goto LABEL_88;
LABEL_117:
  v79 = 0;
  v83 = *(_QWORD *)&v188[24];
  if ( *(int *)&v188[24] > 0 )
    goto LABEL_99;
LABEL_118:
  v84 = 0.0;
  v166 = v83;
  if ( v83 )
  {
LABEL_119:
    v94 = *(_QWORD *)v188;
    _R8D = _mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v188)) ^ 0xFFFF;
    for ( j = (const __m128i *)(*(_QWORD *)v188 + 16LL); !_R8D; _R8D = _mm_movemask_epi8(si128) ^ 0xFFFF )
    {
      si128 = _mm_load_si128(j);
      v94 -= 768;
      ++j;
    }
    __asm { tzcnt   r10d, r8d }
    v98 = -48 * _R10;
    *(_QWORD *)&v192 = *(_QWORD *)(v94 + v98 - 8);
    *((_QWORD *)&v192 + 1) = v94 + v98 - 48;
    v193.m128i_i64[0] = v94 + v98 - 24;
    v199.m128i_i64[0] = v94;
    v199.m128i_i64[1] = (__int64)j;
    *(_QWORD *)&v200 = *(_QWORD *)v188 + *(_QWORD *)&v188[8] + 1LL;
    WORD4(v200) = _R8D & (_R8D - 1);
    sub_1405AC400(v180, &v199, v83 - 1, &v192, &v212);
    i = *(_QWORD *)&v180[8];
    if ( *(_QWORD *)&v180[8] )
    {
      v99 = *(_QWORD *)(*(_QWORD *)&v180[16] + 16LL);
      sub_14149C500(&v199, *(_QWORD *)&v180[8]);
      v179 = v199.m128i_i64[1];
      v186 = v199.m128i_i64[0];
      v169 = v200;
      goto LABEL_124;
    }
  }
LABEL_123:
  v99 = 0;
  v186 = -1;
LABEL_124:
  LODWORD(v192) = sub_141475580(_RCX, i, v63, v64);
  DWORD1(v192) = v100;
  sub_141475530(&v199, &v192, 3577643008LL, 27111902);
  if ( v199.m128i_i8[0] )
    v175 = 0;
  else
    v175 = v199.m128i_i64[1];
  nullsub_1(v101);
  v102 = sub_140001650(14600, 8);
  if ( !v102 )
    sub_1416C2D4B(8, 14600);
  *(_QWORD *)&v192 = 365;
  *((_QWORD *)&v192 + 1) = v102;
  v193.m128i_i64[0] = 0;
  v105 = *(_QWORD *)&v188[8];
  v104 = *(_QWORD *)v188;
  v167 = v84;
  v168 = v99;
  if ( *(_QWORD *)&v188[24] )
  {
    _R8D = _mm_movemask_epi8(_mm_load_si128(*(const __m128i **)v188)) ^ 0xFFFF;
    for ( k = (const __m128i *)(*(_QWORD *)v188 + 16LL); !_R8D; _R8D = _mm_movemask_epi8(v108) ^ 0xFFFF )
    {
      v108 = _mm_load_si128(k);
      v104 -= 768;
      ++k;
    }
    __asm { tzcnt   r9d, r8d }
    v109 = _R8D & (_R8D - 1);
    v110 = *(_QWORD *)(v104 - 48 * _R9 - 8);
    *(_QWORD *)v180 = &v212;
    v199.m128i_i64[0] = v104;
    v199.m128i_i64[1] = (__int64)k;
    *(_QWORD *)&v200 = *(_QWORD *)v188 + *(_QWORD *)&v188[8] + 1LL;
    WORD4(v200) = v109;
    v111 = sub_1405AC510(&v199, *(_QWORD *)&v188[24] - 1LL, v110, v180);
    v112 = _mm_sub_pd(
             (__m128d)_mm_unpacklo_epi32((__m128i)((unsigned __int64)(v111 == 0) + v111), (__m128i)xmmword_1416C6270),
             (__m128d)xmmword_1416C6280);
    v113 = log(_mm_unpackhi_pd(v112, v112).m128d_f64[0] + v112.m128d_f64[0] + 1.0);
    v210 = *(_QWORD *)&v188[24] == 0;
    v105 = *(_QWORD *)&v188[8];
    v104 = *(_QWORD *)v188;
  }
  else
  {
    v113 = 0.6931471805599453;
    v210 = 1;
  }
  v114 = 365;
  v115 = _mm_loadl_epi64((const __m128i *)&xmmword_1416C6270);
  v198 = v78;
  v207 = v104;
  v185 = v105;
  while ( 2 )
  {
    if ( v114 > 0 )
    {
      --v114;
      sub_14086FB20(&v199, v175 - 86400 * v114);
      if ( v210 )
      {
        v208 = v199.m128i_i64[1];
        v118 = v200;
LABEL_138:
        v119 = 0;
        v120 = 0;
LABEL_139:
        v121 = 0;
        goto LABEL_140;
      }
      v209 = 1;
      v123 = sub_140378810(&v188[32], &v199);
      v124 = _mm_cvtsi32_si128(v123 >> 57);
      v125 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v124, v124), 0), 68);
      HIDWORD(_RCX) = v199.m128i_i32[3];
      v208 = v199.m128i_i64[1];
      v118 = v200;
      for ( m = 0; ; m += 16 )
      {
        v128 = v105 & v123;
        v129 = _mm_loadu_si128((const __m128i *)(v104 + v128));
        _R14D = _mm_movemask_epi8(_mm_cmpeq_epi8(v129, v125));
        if ( _R14D )
          break;
LABEL_147:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v129, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_138;
        v123 = m + v128 + 16;
        v104 = v207;
      }
      while ( 1 )
      {
        __asm { tzcnt   ecx, r14d }
        v131 = v128;
        _RCX = -(__int64)(v105 & (v128 + _RCX));
        if ( v118 == *(_QWORD *)(v207 + 48 * _RCX - 32) )
        {
          v132 = v207 + 48 * _RCX;
          if ( !(unsigned int)sub_1416847B0(v208, *(_QWORD *)(v132 - 40), v118) )
            break;
        }
        v133 = _R14D - 1;
        LOWORD(v133) = _R14D & (_R14D - 1);
        v10 = (_WORD)v133 == 0;
        _R14D = v133;
        v128 = v131;
        v105 = v185;
        if ( v10 )
          goto LABEL_147;
      }
      v134 = *(_QWORD *)(v132 - 8);
      v120 = 0;
      if ( !v134 )
      {
        v119 = 0;
        goto LABEL_139;
      }
      v135 = *(_QWORD *)(v132 - 16);
      if ( v134 < 4 )
      {
        v136 = 0;
        v119 = 0;
        goto LABEL_156;
      }
      v136 = 0;
      v119 = 0;
      do
      {
        v119 += *(_QWORD *)(*(_QWORD *)(v135 + 8 * v136 + 24) + 24LL)
              + *(_QWORD *)(*(_QWORD *)(v135 + 8 * v136 + 16) + 24LL)
              + *(_QWORD *)(*(_QWORD *)(v135 + 8 * v136 + 8) + 24LL)
              + *(_QWORD *)(*(_QWORD *)(v135 + 8 * v136) + 24LL);
        v136 += 4;
      }
      while ( (v134 & 0xFFFFFFFFFFFFFFCLL) != v136 );
      if ( (v134 & 3) != 0 )
      {
LABEL_156:
        v137 = v135 + 8 * v136;
        v138 = 0;
        do
          v119 += *(_QWORD *)(*(_QWORD *)(v137 + 8 * v138++) + 24LL);
        while ( (*(_QWORD *)(v132 - 8) & 3LL) != v138 );
      }
      if ( !(_DWORD)v134 )
        goto LABEL_139;
      v139 = _mm_sub_pd(
               (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)(int)v134, v115),
               (__m128d)xmmword_1416C6280);
      v140 = log(_mm_unpackhi_pd(v139, v139).m128d_f64[0] + v139.m128d_f64[0] + 1.0);
      v121 = (int)fmin(fmax(fmin(fmax(floor(v140 * 4.0 / v113), 1.0), 4.0), -2147483648.0), 2147483647.0);
      v120 = v134;
LABEL_140:
      v206 = v199.m128i_i64[0];
      v122 = v193.m128i_i64[0];
      if ( v193.m128i_i64[0] == (_QWORD)v192 )
        sub_141689420(&v192);
      v116 = *((_QWORD *)&v192 + 1);
      v117 = 5 * v122;
      *(_QWORD *)(*((_QWORD *)&v192 + 1) + 8 * v117) = v206;
      *(_QWORD *)(v116 + 8 * v117 + 8) = v208;
      *(_QWORD *)(v116 + 8 * v117 + 16) = v118;
      *(_QWORD *)(v116 + 8 * v117 + 24) = v119;
      *(_DWORD *)(v116 + 8 * v117 + 32) = v120;
      *(_DWORD *)(v116 + 8 * v117 + 36) = v121;
      v193.m128i_i64[0] = v122 + 1;
      v78 = v198;
      v104 = v207;
      v105 = v185;
      continue;
    }
    break;
  }
  v141 = v176;
  *(_QWORD *)(v176 + 24) = v193.m128i_i64[0];
  *(_OWORD *)(v141 + 8) = v192;
  *(_QWORD *)(v141 + 32) = v186;
  *(_QWORD *)(v141 + 40) = v179;
  *(_QWORD *)(v141 + 48) = v169;
  *(_QWORD *)(v141 + 56) = v79;
  *(double *)(v141 + 64) = v167;
  *(_DWORD *)(v141 + 72) = v78;
  *(_DWORD *)(v141 + 76) = v166;
  *(_DWORD *)(v141 + 80) = v168;
  *(_QWORD *)(v141 + 88) = v178;
  *(_DWORD *)(v141 + 96) = v177;
  *(_DWORD *)(v141 + 100) = v182;
  *(_QWORD *)v141 = 0;
  if ( v172.m128i_i64[0] )
    sub_140001660(v172.m128i_i64[1], v172.m128i_i64[0], 1);
  sub_14067EDE0(v188);
  if ( v78 )
  {
    v144 = (_QWORD *)(v187 + 8);
    do
    {
      v142 = *(v144 - 1);
      if ( v142 )
        sub_140001660(*v144, 8 * v142, 8);
      v144 += 5;
      --v78;
    }
    while ( v78 );
  }
  if ( v183.m128i_i64[0] )
    sub_140001660(v187, 40 * v183.m128i_i64[0], 8);
  if ( !(_BYTE)v197 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v143, v142) )
    byte_141EC25C5 = 1;
  v145 = byte_141EC25C4;
  byte_141EC25C4 = 0;
  if ( v145 == 2 )
    WakeByAddressSingle(&byte_141EC25C4);
  return v176;
}