// win 1.2.7 latest-exe | module src/core/relay/codex_diagnostic.rs | ea 0x1409d2920 | successor of pre-update 0x140f3da20 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.844, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1409D2920(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __m128i si128; // xmm0
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // r14
  __int64 v28; // r11
  __int64 v29; // rsi
  __int64 v30; // r10
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r15
  __int8 v37; // r12
  unsigned int *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // r15
  __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int64 v53; // rsi
  __int64 v54; // rsi
  unsigned __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // r8d
  __int64 v60; // rsi
  __int64 v61; // rax
  __int128 v62; // xmm0
  __int64 v63; // rdi
  __int64 v64; // r15
  unsigned __int64 v65; // r14
  __int128 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r9
  unsigned __int64 v72; // rbx
  unsigned __int64 v73; // r14
  __int64 *v74; // r15
  __int64 i; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rcx
  unsigned __int64 v80; // r13
  __int64 v81; // rdx
  unsigned __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // r14
  __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // rsi
  _QWORD *v88; // rax
  __int64 v89; // rsi
  __int64 v90; // r12
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rax
  char v94; // cl
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rcx
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm2
  unsigned __int64 v101; // r14
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  __int128 v106; // xmm1
  _QWORD *v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rbx
  const __m128i *v112; // r14
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rsi
  _QWORD *v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rdi
  __int128 v125; // [rsp+20h] [rbp-60h]
  __int128 v126; // [rsp+50h] [rbp-30h] BYREF
  __int128 v127; // [rsp+60h] [rbp-20h]
  __int64 v128; // [rsp+70h] [rbp-10h]
  __int64 v129; // [rsp+78h] [rbp-8h]
  __m128i v130; // [rsp+80h] [rbp+0h]
  __int64 v131; // [rsp+90h] [rbp+10h]
  __int64 v132; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v133; // [rsp+A8h] [rbp+28h]
  __int64 v134; // [rsp+B0h] [rbp+30h]
  __int64 v135; // [rsp+B8h] [rbp+38h]
  __m128i v136; // [rsp+C0h] [rbp+40h] BYREF
  __int64 *v137; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v138)(); // [rsp+D8h] [rbp+58h]
  __int64 v139; // [rsp+E0h] [rbp+60h]
  __int64 v140; // [rsp+E8h] [rbp+68h]
  __m128i v141; // [rsp+F0h] [rbp+70h] BYREF
  unsigned __int64 v142; // [rsp+100h] [rbp+80h]
  _BYTE v143[24]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v144; // [rsp+120h] [rbp+A0h]
  __int64 v145; // [rsp+128h] [rbp+A8h]
  __int64 v146; // [rsp+130h] [rbp+B0h]
  _BYTE v147[7]; // [rsp+138h] [rbp+B8h]
  __int64 v148; // [rsp+140h] [rbp+C0h]
  __int64 v149; // [rsp+148h] [rbp+C8h]
  __int64 v150; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v151; // [rsp+158h] [rbp+D8h]
  __int64 v152; // [rsp+168h] [rbp+E8h]
  __int64 v153; // [rsp+170h] [rbp+F0h]
  __int64 v154; // [rsp+178h] [rbp+F8h]
  __int64 v155; // [rsp+180h] [rbp+100h]
  __int64 v156; // [rsp+188h] [rbp+108h] BYREF
  __int64 v157; // [rsp+190h] [rbp+110h]
  __int64 v158; // [rsp+198h] [rbp+118h]
  __m256i v159; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v160; // [rsp+1C0h] [rbp+140h]
  __int128 v161; // [rsp+1D0h] [rbp+150h]
  __int128 v162; // [rsp+1E0h] [rbp+160h]
  __int128 v163; // [rsp+1F0h] [rbp+170h]
  __int64 v164; // [rsp+200h] [rbp+180h]
  unsigned __int64 v165; // [rsp+208h] [rbp+188h]
  __m128i v166; // [rsp+210h] [rbp+190h] BYREF
  __int128 v167; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v168[24]; // [rsp+230h] [rbp+1B0h]
  __int64 v169; // [rsp+250h] [rbp+1D0h]
  __int64 v170; // [rsp+258h] [rbp+1D8h]
  __int64 v171; // [rsp+260h] [rbp+1E0h]
  __int64 v172; // [rsp+268h] [rbp+1E8h]
  _BYTE v173[2]; // [rsp+275h] [rbp+1F5h] BYREF
  char v174; // [rsp+277h] [rbp+1F7h]
  char v175; // [rsp+278h] [rbp+1F8h]
  char v176; // [rsp+279h] [rbp+1F9h]
  char v177; // [rsp+27Ah] [rbp+1FAh]
  char v178; // [rsp+27Bh] [rbp+1FBh]
  char v179; // [rsp+27Ch] [rbp+1FCh]
  char v180; // [rsp+27Dh] [rbp+1FDh]
  char v181; // [rsp+27Eh] [rbp+1FEh]
  char v182; // [rsp+27Fh] [rbp+1FFh]
  __int64 v183; // [rsp+280h] [rbp+200h]

  v183 = -2;
  sub_1409C81C0(&v159, a2);
  v4 = v159.m256i_i64[0];
  v166 = *(__m128i *)&v159.m256i_u64[1];
  v5 = v159.m256i_i64[3];
  *(_QWORD *)&v167 = v159.m256i_i64[3];
  if ( v159.m256i_i64[0] != -1 )
  {
    v6 = v160;
    v7 = v161;
    v8 = v162;
    *(_OWORD *)(a1 + 80) = v163;
    *(_OWORD *)(a1 + 64) = v8;
    *(_OWORD *)(a1 + 48) = v7;
    *(_OWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 24) = v167;
    si128 = _mm_load_si128(&v166);
    *(__m128i *)(a1 + 8) = si128;
    *(_QWORD *)a1 = v4;
    return *(double *)si128.m128i_i64;
  }
  v130 = v166;
  v10 = v167;
  v131 = v167;
  if ( (_QWORD)v167 )
  {
    nullsub_1(v159.m256i_i64[3], v3);
    v11 = sub_140001650(32 * v10, 8);
    if ( !v11 )
    {
      v176 = 1;
      sub_14196B2DB(8, 32 * v10);
    }
  }
  else
  {
    v11 = 8;
  }
  v156 = v10;
  v157 = v11;
  v158 = 0;
  v150 = 0;
  v151 = 8u;
  v175 = 1;
  v174 = 1;
  v12 = sub_1416AE140(v5);
  v13 = *(_BYTE *)(v12 + 16) == 1;
  v134 = a1;
  if ( v13 )
  {
    v14 = *(_QWORD *)v12;
    v15 = *(_QWORD *)(v12 + 8);
  }
  else
  {
    v175 = 1;
    v174 = 1;
    v123 = v12;
    v14 = sub_1416C5230();
    v12 = v123;
    *(_QWORD *)v123 = v14;
    *(_QWORD *)(v123 + 8) = v15;
    *(_BYTE *)(v123 + 16) = 1;
  }
  *(_QWORD *)v12 = v14 + 1;
  v127 = xmmword_141A57990;
  v126 = *(_OWORD *)&off_141A57980;
  v128 = v14;
  v129 = v15;
  v16 = v130.m128i_i64[1];
  v17 = v130.m128i_i64[0];
  v18 = v10 << 6;
  v19 = v130.m128i_i64[1] + 3 * v18;
  v166.m128i_i64[0] = v130.m128i_i64[1];
  v133 = v130.m128i_i64[0];
  *(_QWORD *)&v167 = v130.m128i_i64[0];
  v140 = v19;
  *((_QWORD *)&v167 + 1) = v19;
  v20 = 3 * v18 - 192;
  v21 = v130.m128i_i64[1] + 192;
  v22 = 0x8000000000000000uLL;
  v135 = v130.m128i_i64[1];
  while ( v16 != v140 )
  {
    v19 = v16 + 192;
    v166.m128i_i64[1] = v16 + 192;
    v17 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 == -1 )
    {
      if ( v140 != v19 )
      {
        v65 = v20 / 0xC0;
        do
        {
          sub_1401B0EA0(v21);
          v21 += 192;
          --v65;
        }
        while ( v65 );
      }
      break;
    }
    v153 = v16 + 192;
    v165 = v20;
    v23 = v22;
    v169 = v17;
    v24 = *(_QWORD *)(v16 + 8);
    v25 = *(_QWORD *)(v16 + 32);
    v26 = *(_QWORD *)(v16 + 40);
    v27 = *(_QWORD *)(v16 + 48);
    v170 = *(_QWORD *)(v16 + 56);
    v28 = *(_QWORD *)(v16 + 64);
    v29 = *(_QWORD *)(v16 + 80);
    v171 = *(_QWORD *)(v16 + 112);
    v30 = *(_QWORD *)(v16 + 120);
    v31 = *(_QWORD *)(v16 + 136);
    v32 = *(_QWORD *)(v16 + 144);
    v33 = *(_QWORD *)(v16 + 160);
    v34 = *(_QWORD *)(v16 + 168);
    v139 = v34;
    v155 = v29;
    v172 = v33;
    v164 = v31;
    v145 = v32;
    v146 = v30;
    v152 = v28;
    v148 = v24;
    v154 = v25;
    v144 = v26;
    if ( v29 == -1 )
    {
      v159.m256i_i64[1] = v25;
      v159.m256i_i64[2] = v26;
      v159.m256i_i64[3] = v27;
      v22 = v23;
      v159.m256i_i64[0] = v23;
      v42 = v158;
      if ( v158 == v156 )
        sub_1419397B0(&v156);
      v43 = v157;
      v17 = 32 * v42;
      v44 = *(_OWORD *)v159.m256i_i8;
      *(_OWORD *)(v157 + v17 + 16) = *(_OWORD *)&v159.m256i_u64[2];
      *(_OWORD *)(v43 + v17) = v44;
      v158 = v42 + 1;
      v45 = v169;
      v46 = v164;
      v47 = v171;
      v48 = v153;
      if ( v169 )
      {
        v49 = v148;
        goto LABEL_32;
      }
LABEL_33:
      v19 = v170;
      if ( v170 )
        sub_140001660(v152, v170, 1);
      v54 = v172;
      if ( (unsigned __int64)(v47 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
      {
        sub_140001660(v146, v47, 1);
        if ( (unsigned __int64)(v46 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_37:
          v55 = v165;
          if ( (unsigned __int64)(v54 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
            goto LABEL_10;
          goto LABEL_11;
        }
      }
      else if ( (unsigned __int64)(v46 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
        goto LABEL_37;
      }
      sub_140001660(v145, v46, 1);
      v55 = v165;
      if ( (unsigned __int64)(v54 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
        goto LABEL_10;
      goto LABEL_11;
    }
    v35 = *(_QWORD *)(v16 + 88);
    v36 = *(_QWORD *)(v16 + 96);
    v37 = *(_BYTE *)(v16 + 104);
    v38 = (unsigned int *)(v16 + 105);
    v39 = *v38;
    *(_DWORD *)&v147[3] = *(unsigned int *)((char *)v38 + 3);
    *(_DWORD *)v147 = v39;
    v149 = v35;
    if ( v36 )
    {
      nullsub_1(v39, v34);
      v40 = sub_140001650(v36, 1);
      if ( !v40 )
      {
        v181 = 1;
        v180 = 1;
        sub_14196B2DB(1, v36);
      }
      v41 = v40;
      sub_1419234B0(v40, v35, v36);
    }
    else
    {
      v41 = 1;
    }
    v159.m256i_i64[0] = v36;
    v159.m256i_i64[1] = v41;
    v159.m256i_i64[2] = v36;
    v159.m256i_i8[24] = v37;
    v181 = 1;
    v180 = 1;
    if ( (unsigned __int8)sub_14086D5C0(&v126, &v159) )
    {
      v159.m256i_i64[0] = 0x8000000000000001uLL;
      v50 = v158;
      if ( v158 == v156 )
        sub_1419397B0(&v156);
      v51 = v157;
      v17 = 32 * v50;
      v52 = *(_OWORD *)v159.m256i_i8;
      *(_OWORD *)(v157 + v17 + 16) = *(_OWORD *)&v159.m256i_u64[2];
      *(_OWORD *)(v51 + v17) = v52;
      v158 = v50 + 1;
      v22 = 0x8000000000000000uLL;
      v48 = v153;
      if ( v155 )
        sub_140001660(v149, v155, 1);
      v46 = v164;
      v47 = v171;
      v53 = v144;
      if ( v169 )
        sub_140001660(v148, v169, 1);
      v45 = v154;
      if ( v154 )
      {
        v49 = v53;
LABEL_32:
        sub_140001660(v49, v45, 1);
      }
      goto LABEL_33;
    }
    v56 = *((_QWORD *)&v151 + 1);
    if ( *((_QWORD *)&v151 + 1) == v150 )
      sub_1419397B0(&v150);
    v57 = v151;
    v58 = 32 * v56;
    *(_QWORD *)(v151 + v58) = v155;
    *(_QWORD *)(v57 + v58 + 8) = v149;
    *(_QWORD *)(v57 + v58 + 16) = v36;
    *(_BYTE *)(v57 + v58 + 24) = v37;
    v59 = *(_DWORD *)&v147[3];
    *(_DWORD *)(v57 + v58 + 25) = *(_DWORD *)v147;
    *(_DWORD *)(v57 + v58 + 28) = v59;
    *((_QWORD *)&v151 + 1) = v56 + 1;
    v159.m256i_i64[0] = v154;
    v159.m256i_i64[1] = v144;
    v159.m256i_i64[2] = v27;
    v159.m256i_i64[3] = v56;
    v60 = v158;
    if ( v158 == v156 )
      sub_1419397B0(&v156);
    v61 = v157;
    v17 = 32 * v60;
    v62 = *(_OWORD *)v159.m256i_i8;
    *(_OWORD *)(v157 + v17 + 16) = *(_OWORD *)&v159.m256i_u64[2];
    *(_OWORD *)(v61 + v17) = v62;
    v158 = v60 + 1;
    v22 = 0x8000000000000000uLL;
    v48 = v153;
    if ( v169 )
      sub_140001660(v148, v169, 1);
    v19 = v170;
    v54 = v172;
    v63 = v164;
    v64 = v171;
    if ( v170 )
      sub_140001660(v152, v170, 1);
    if ( (unsigned __int64)(v64 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      sub_140001660(v146, v64, 1);
      if ( (unsigned __int64)(v63 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_52:
        v55 = v165;
        if ( (unsigned __int64)(v54 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          goto LABEL_10;
        goto LABEL_11;
      }
    }
    else if ( (unsigned __int64)(v63 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      goto LABEL_52;
    }
    sub_140001660(v145, v63, 1);
    v55 = v165;
    if ( (unsigned __int64)(v54 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_10:
      sub_140001660(v139, v54, 1);
LABEL_11:
    v20 = v55 - 192;
    v21 += 192;
    v16 = v48;
  }
  if ( v133 )
    sub_140001660(v135, 192 * v133, 8);
  v66 = v151;
  if ( *((_QWORD *)&v151 + 1) >= 8u )
  {
    v159.m256i_i64[0] = 0;
    *(_OWORD *)&v159.m256i_u64[2] = 4u;
    *((_QWORD *)&v160 + 1) = 1;
    *(_QWORD *)&v161 = &unk_141A049B0;
    *((_QWORD *)&v161 + 1) = 0;
    *((_QWORD *)&v162 + 1) = 0;
    WORD4(v163) = 0;
    v182 = 1;
    sub_140199620(&v166, &v159);
    v69 = v166.m128i_i64[1];
    if ( v166.m128i_i64[0] == -1 )
    {
      v166.m128i_i64[0] = v166.m128i_i64[1];
      *(_OWORD *)v159.m256i_i8 = v66;
      v159.m256i_i64[2] = (__int64)v173;
      sub_14019A9C0(&v141, v166.m128i_i64[1] + 128, &v159);
      sub_1411EE6A0(&v166, v122);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v166.m128i_i64[0]) )
      {
        v182 = 1;
        sub_1411ED250(&v166);
      }
    }
    else
    {
      v136 = v166;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v166.m128i_i64[0] = (__int64)&v136;
        v166.m128i_i64[1] = (__int64)sub_1411ED6B0;
        *(_QWORD *)&v161 = 2;
        *((_QWORD *)&v161 + 1) = aCodexmateLibCo_36;
        *(_QWORD *)&v162 = 44;
        *(_QWORD *)&v163 = &unk_141A60960;
        *((_QWORD *)&v163 + 1) = &v166;
        v159.m256i_i64[0] = 0;
        v159.m256i_i64[1] = (__int64)aCodexmateLibCo_36;
        *(_OWORD *)&v159.m256i_u64[2] = 0x2Cu;
        *(_QWORD *)&v160 = aSrcCoreRelayCo_2;
        *((_QWORD *)&v160 + 1) = 34;
        *((_QWORD *)&v162 + 1) = 0x16CC00000001LL;
        sub_141503E20(v173, &v159);
      }
      nullsub_1(v68, v69);
      v70 = sub_140001650(24LL * *((_QWORD *)&v66 + 1), 8);
      if ( !v70 )
        sub_14196B2DB(8, 24LL * *((_QWORD *)&v66 + 1));
      v166.m128i_i64[0] = *((_QWORD *)&v66 + 1);
      v166.m128i_i64[1] = v70;
      *(_QWORD *)&v167 = 0;
      v159.m256i_i64[2] = v70;
      *(_OWORD *)v159.m256i_i8 = (unsigned __int64)&v167;
      sub_140855BD0(v66, v66 + 32LL * *((_QWORD *)&v66 + 1), &v159);
      v141 = v166;
      v142 = v167;
      if ( v136.m128i_i32[0] >= 2u && (v136.m128i_i8[8] & 3u) - 2 >= 2 && (v136.m128i_i8[8] & 3) != 0 )
      {
        v159.m256i_i64[1] = v136.m128i_i64[1] - 1;
        v159.m256i_i8[0] = 3;
        v182 = 1;
        sub_1416EBAD0(&v159.m256i_u64[1]);
      }
    }
  }
  else
  {
    if ( *((_QWORD *)&v151 + 1) )
    {
      nullsub_1(v17, v19);
      v67 = sub_140001650(24LL * *((_QWORD *)&v66 + 1), 8);
      if ( !v67 )
      {
        v182 = 1;
        sub_14196B2DB(8, 24LL * *((_QWORD *)&v66 + 1));
      }
    }
    else
    {
      v67 = 8;
    }
    v166.m128i_i64[0] = *((_QWORD *)&v66 + 1);
    v166.m128i_i64[1] = v67;
    *(_QWORD *)&v167 = 0;
    v159.m256i_i64[2] = v67;
    *(_OWORD *)v159.m256i_i8 = (unsigned __int64)&v167;
    sub_140855BD0(v66, v66 + 32LL * *((_QWORD *)&v66 + 1), &v159);
    v141 = v166;
    v142 = v167;
  }
  v166.m128i_i64[0] = 0;
  v166.m128i_i64[1] = 8;
  v167 = 0;
  *(_QWORD *)v168 = 8;
  *(_OWORD *)&v168[8] = 0;
  v154 = v156;
  v164 = v157 + 32 * v158;
  v169 = v141.m128i_i64[1];
  v72 = v142;
  v73 = 32 * v158 - 32;
  v74 = (__int64 *)(v157 + 32);
  v152 = v157;
  for ( i = v157; ; i = v78 )
  {
    if ( i == v164 )
      goto LABEL_119;
    v78 = i + 32;
    v79 = *(_QWORD *)i;
    if ( *(_QWORD *)i == -1 )
      break;
    v80 = *(_QWORD *)(i + 24);
    v125 = *(_OWORD *)(i + 8);
    v81 = v22 ^ v79;
    if ( v79 >= 0 )
      v81 = 2;
    if ( v81 )
    {
      if ( v81 != 1 )
      {
        v171 = i + 32;
        *(_QWORD *)v143 = v79;
        ++*(_QWORD *)&v168[16];
        *(_OWORD *)&v143[8] = v125;
        if ( v80 >= *((_QWORD *)&v151 + 1) )
        {
          v179 = 1;
          sub_14196B673(v80, *((_QWORD *)&v151 + 1), &off_141A637C0);
        }
        v82 = v73;
        v83 = 32 * v80;
        v172 = *(_QWORD *)(v151 + 32 * v80 + 16);
        v84 = v172;
        v165 = v151;
        if ( v172 )
        {
          v85 = *(_QWORD *)(v151 + v83 + 8);
          nullsub_1(v79, *((_QWORD *)&v151 + 1));
          v86 = sub_140001650(v84, 1);
          if ( !v86 )
          {
            v179 = 1;
            sub_14196B2DB(1, v84);
          }
          v170 = v86;
          sub_1419234B0(v86, v85, v84);
          v22 = 0x8000000000000000uLL;
          if ( v80 >= v72 )
          {
LABEL_151:
            v178 = 1;
            v177 = 1;
            sub_14196B673(v80, v72, &off_141A637D8);
          }
        }
        else
        {
          v170 = 1;
          if ( v80 >= v72 )
            goto LABEL_151;
        }
        v73 = v82;
        v88 = (_QWORD *)(v169 + 24 * v80);
        v78 = v171;
        if ( *v88 == -1 )
        {
          v93 = v88[1];
          if ( v93 )
          {
            v94 = *(_BYTE *)(v83 + v165 + 24);
            v159.m256i_i64[2] = *(_QWORD *)&v143[16];
            *(_OWORD *)v159.m256i_i8 = *(_OWORD *)v143;
            v159.m256i_i64[3] = v172;
            *(_QWORD *)&v160 = v170;
            *((_QWORD *)&v160 + 1) = v172;
            LOBYTE(v161) = v94;
            *((_QWORD *)&v161 + 1) = v93;
            v95 = v167;
            if ( (_QWORD)v167 == v166.m128i_i64[0] )
              sub_141939C10(&v166, v172, v170, v71);
            v96 = v166.m128i_i64[1];
            v97 = v95 << 6;
            v98 = *(_OWORD *)v159.m256i_i8;
            v99 = *(_OWORD *)&v159.m256i_u64[2];
            v100 = v160;
            *(_OWORD *)(v166.m128i_i64[1] + v97 + 48) = v161;
            *(_OWORD *)(v96 + v97 + 32) = v100;
            *(_OWORD *)(v96 + v97 + 16) = v99;
            *(_OWORD *)(v96 + v97) = v98;
            *(_QWORD *)&v167 = v95 + 1;
          }
          else
          {
            if ( v172 )
              sub_140001660(v170, v172, 1);
            if ( *(_QWORD *)v143 )
              sub_140001660(*(_QWORD *)&v143[8], *(_QWORD *)v143, 1);
          }
        }
        else
        {
          v132 = v169 + 24 * v80;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            v136.m128i_i64[0] = (__int64)v143;
            v136.m128i_i64[1] = (__int64)sub_1400015F0;
            v137 = &v132;
            v138 = sub_14021E5E0;
            *(_QWORD *)&v161 = 2;
            *((_QWORD *)&v161 + 1) = aCodexmateLibCo_36;
            *(_QWORD *)&v162 = 44;
            *(_QWORD *)&v163 = &unk_141A637F0;
            *((_QWORD *)&v163 + 1) = &v136;
            v159.m256i_i64[0] = 0;
            v159.m256i_i64[1] = (__int64)aCodexmateLibCo_36;
            *(_OWORD *)&v159.m256i_u64[2] = 0x2Cu;
            *(_QWORD *)&v160 = aSrcCoreRelayCo_2;
            *((_QWORD *)&v160 + 1) = 34;
            *((_QWORD *)&v162 + 1) = 0x16AB00000001LL;
            v178 = 1;
            v177 = 1;
            sub_141503E20(v173, &v159);
          }
          v153 = *(_QWORD *)&v143[8];
          v165 = *(_QWORD *)v143;
          v89 = *(_QWORD *)&v143[16];
          v90 = *(_QWORD *)&v168[8];
          if ( *(_QWORD *)&v168[8] == *((_QWORD *)&v167 + 1) )
            sub_141939F90((char *)&v167 + 8);
          v91 = *(_QWORD *)v168;
          v92 = 3 * v90;
          *(_QWORD *)(*(_QWORD *)v168 + 8 * v92) = v165;
          *(_QWORD *)(v91 + 8 * v92 + 8) = v153;
          *(_QWORD *)(v91 + 8 * v92 + 16) = v89;
          *(_QWORD *)&v168[8] = v90 + 1;
          v22 = 0x8000000000000000uLL;
          if ( v172 )
            sub_140001660(v170, v172, 1);
        }
      }
    }
    else
    {
      v171 = *(_QWORD *)(i + 8);
      v172 = *(_QWORD *)(i + 16);
      v87 = *(_QWORD *)&v168[8];
      if ( *(_QWORD *)&v168[8] == *((_QWORD *)&v167 + 1) )
        sub_141939F90((char *)&v167 + 8);
      v76 = *(_QWORD *)v168;
      v77 = 3 * v87;
      *(_QWORD *)(*(_QWORD *)v168 + 8 * v77) = v171;
      *(_QWORD *)(v76 + 8 * v77 + 8) = v172;
      *(_QWORD *)(v76 + 8 * v77 + 16) = v80;
      *(_QWORD *)&v168[8] = v87 + 1;
    }
    v73 -= 32LL;
    v74 += 4;
  }
  if ( v164 != v78 )
  {
    v101 = v73 >> 5;
    while ( 1 )
    {
      v102 = *v74;
      v103 = v22 ^ *v74;
      if ( *v74 >= 0 )
        v103 = 2;
      if ( v103 )
        break;
      v102 = v74[1];
      v104 = 2;
      if ( v102 )
        goto LABEL_118;
LABEL_110:
      v74 += 4;
      if ( !--v101 )
        goto LABEL_119;
    }
    if ( v103 == 1 )
      goto LABEL_110;
    v104 = 1;
    if ( !v102 )
      goto LABEL_110;
LABEL_118:
    sub_140001660(v74[v104], v102, 1);
    goto LABEL_110;
  }
LABEL_119:
  if ( v154 )
    sub_140001660(v152, 32 * v154, 8);
  v105 = v134;
  *(_QWORD *)(v134 + 56) = *(_QWORD *)&v168[16];
  si128 = _mm_loadu_si128(&v166);
  v106 = v167;
  *(_OWORD *)(v105 + 40) = *(_OWORD *)v168;
  *(_OWORD *)(v105 + 24) = v106;
  *(__m128i *)(v105 + 8) = si128;
  *(_QWORD *)v105 = -1;
  if ( v72 )
  {
    v107 = (_QWORD *)(v169 + 8);
    do
    {
      v108 = *(v107 - 1);
      if ( v108 > 0 )
        *(double *)si128.m128i_i64 = sub_140001660(*v107, v108, 1);
      v107 += 3;
      --v72;
    }
    while ( v72 );
  }
  if ( v141.m128i_i64[0] )
    *(double *)si128.m128i_i64 = sub_140001660(v169, 24 * v141.m128i_i64[0], 8);
  v109 = *((_QWORD *)&v126 + 1);
  if ( *((_QWORD *)&v126 + 1) )
  {
    v110 = *((_QWORD *)&v127 + 1);
    if ( *((_QWORD *)&v127 + 1) )
    {
      v111 = v126;
      si128 = _mm_load_si128((const __m128i *)v126);
      v112 = (const __m128i *)(v126 + 16);
      _R15D = ~_mm_movemask_epi8(si128);
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v112);
            v111 -= 512;
            ++v112;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   ecx, r15d }
        v115 = v111 - (unsigned int)(32 * _ECX);
        v116 = *(_QWORD *)(v115 - 32);
        if ( v116 )
          *(double *)si128.m128i_i64 = sub_140001660(*(_QWORD *)(v115 - 24), v116, 1);
        --v110;
        _R15D &= _R15D - 1;
      }
      while ( v110 );
    }
    v117 = 32 * v109;
    v118 = 33 * v109 + 49;
    if ( v118 )
      *(double *)si128.m128i_i64 = sub_140001660(v126 - v117 - 32, v118, 16);
  }
  v119 = *((_QWORD *)&v151 + 1);
  if ( *((_QWORD *)&v151 + 1) )
  {
    v120 = (_QWORD *)(v151 + 8);
    do
    {
      v121 = *(v120 - 1);
      if ( v121 )
        *(double *)si128.m128i_i64 = sub_140001660(*v120, v121, 1);
      v120 += 4;
      --v119;
    }
    while ( v119 );
  }
  if ( v150 )
    *(double *)si128.m128i_i64 = sub_140001660(v151, 32 * v150, 8);
  return *(double *)si128.m128i_i64;
}
