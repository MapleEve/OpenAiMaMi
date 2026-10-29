// win 1.2.7 latest-exe | module src/core/sessions/worktree.rs | ea 0x1401fb140 | successor of pre-update 0x140c8aa90 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
double __fastcall sub_1401FB140(__int64 *a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r13
  char v12; // di
  double result; // xmm0_8
  _OWORD *v14; // r14
  __int128 *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rcx
  char i; // al
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  _DWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int128 v30; // xmm6
  int v31; // r12d
  char v32; // al
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  void *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int128 v41; // xmm6
  __int64 v42; // r14
  __int64 v43; // rdx
  _OWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rdi
  __int64 v49; // r15
  __int64 *v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rbx
  _OWORD *v54; // rax
  _OWORD *v55; // r15
  __int128 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // r14
  _OWORD *v63; // rax
  __int128 v64; // kr20_16
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r12
  __int64 v69; // r14
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // r15
  __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // r12
  __int64 v78; // r15
  __int64 v79; // r14
  __int64 v80; // rsi
  __int64 v81; // rdi
  char v82; // cl
  HANDLE v83; // r8
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rdx
  int v93; // eax
  int v94; // edx
  unsigned __int64 v95; // rdi
  int v96; // edx
  unsigned __int64 v97; // rax
  unsigned int v98; // edx
  __int64 v99; // rax
  volatile signed __int64 *v100; // rsi
  volatile signed __int64 *v101; // rsi
  _OWORD *v102; // rdi
  HANDLE v103; // r13
  __int64 v104; // r12
  __int64 v105; // rax
  volatile signed __int64 *v106; // rsi
  volatile signed __int64 *v107; // rsi
  HANDLE v108; // rdi
  __int64 v109; // r8
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 v114; // r14
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 *v118; // rcx
  __int64 v119; // rax
  volatile signed __int64 *v120; // rsi
  __int64 v121; // rbx
  __int64 v122; // rdx
  __int64 v123; // rdi
  __int64 v124; // rdx
  __int64 v125; // rcx
  _OWORD *v126; // rax
  __int64 *v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r12
  __int64 v130; // rax
  __int64 v131; // rdi
  __int64 v132; // rbx
  __int64 v133; // rsi
  __int64 *v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rax
  __int128 v137; // [rsp+30h] [rbp-50h] BYREF
  __int64 v138; // [rsp+40h] [rbp-40h]
  _QWORD v139[3]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v140[4]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v141; // [rsp+70h] [rbp-10h] BYREF
  __int128 v142; // [rsp+80h] [rbp+0h]
  int v143; // [rsp+11Ch] [rbp+9Ch]
  __int128 v144; // [rsp+130h] [rbp+B0h]
  void *v145; // [rsp+140h] [rbp+C0h]
  _DWORD v146[2]; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v147; // [rsp+150h] [rbp+D0h]
  __int128 *v148; // [rsp+158h] [rbp+D8h] BYREF
  _QWORD v149[5]; // [rsp+160h] [rbp+E0h] BYREF
  int v150; // [rsp+188h] [rbp+108h]
  int v151; // [rsp+18Ch] [rbp+10Ch]
  __int128 v152; // [rsp+190h] [rbp+110h] BYREF
  void *v153; // [rsp+1A0h] [rbp+120h]
  __int64 v154; // [rsp+1B0h] [rbp+130h]
  const char *v155; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v156; // [rsp+1C0h] [rbp+140h]
  __int128 v157; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v158; // [rsp+1D8h] [rbp+158h] BYREF
  unsigned __int128 v159; // [rsp+1E8h] [rbp+168h]
  __int64 v160; // [rsp+1F8h] [rbp+178h]
  int v161; // [rsp+200h] [rbp+180h]
  int v162; // [rsp+204h] [rbp+184h]
  __int64 v163; // [rsp+208h] [rbp+188h]
  __int128 v164; // [rsp+210h] [rbp+190h]
  HANDLE v165; // [rsp+220h] [rbp+1A0h]
  __int128 v166; // [rsp+280h] [rbp+200h] BYREF
  __int128 *v167; // [rsp+290h] [rbp+210h]
  HANDLE v168; // [rsp+298h] [rbp+218h]
  __int64 v169; // [rsp+2A0h] [rbp+220h]
  HANDLE v170; // [rsp+2A8h] [rbp+228h]
  HANDLE v171[2]; // [rsp+2B0h] [rbp+230h]
  __int64 v172; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v173; // [rsp+2C8h] [rbp+248h]
  __int64 v174; // [rsp+2D0h] [rbp+250h]
  HANDLE v175; // [rsp+2D8h] [rbp+258h]
  __int128 v176; // [rsp+2E0h] [rbp+260h] BYREF
  HANDLE v177; // [rsp+2F0h] [rbp+270h]
  __int64 *v178; // [rsp+2F8h] [rbp+278h]
  __int128 v179; // [rsp+300h] [rbp+280h] BYREF
  HANDLE hObject; // [rsp+310h] [rbp+290h]
  __int64 (*v181)(void); // [rsp+318h] [rbp+298h]
  __int64 v182; // [rsp+320h] [rbp+2A0h]
  void *v183; // [rsp+328h] [rbp+2A8h]
  __int128 v184; // [rsp+330h] [rbp+2B0h]
  __int64 v185; // [rsp+340h] [rbp+2C0h]
  __int128 v186; // [rsp+348h] [rbp+2C8h]
  void *v187; // [rsp+358h] [rbp+2D8h]
  __int64 v188; // [rsp+368h] [rbp+2E8h]
  __int128 v189; // [rsp+370h] [rbp+2F0h] BYREF
  HANDLE v190; // [rsp+380h] [rbp+300h]
  __int64 v191; // [rsp+390h] [rbp+310h]
  __int64 v192; // [rsp+398h] [rbp+318h]
  __int64 v193; // [rsp+3A0h] [rbp+320h]
  __int64 v194; // [rsp+3A8h] [rbp+328h]
  __int64 v195; // [rsp+3B0h] [rbp+330h]
  __int64 v196; // [rsp+3B8h] [rbp+338h]
  char v197; // [rsp+3C6h] [rbp+346h]
  char v198; // [rsp+3C7h] [rbp+347h]
  __int64 v199; // [rsp+3C8h] [rbp+348h]
  _OWORD *v200; // [rsp+3D0h] [rbp+350h]
  char v201; // [rsp+3DEh] [rbp+35Eh]
  char v202; // [rsp+3DFh] [rbp+35Fh]
  char v203; // [rsp+3E0h] [rbp+360h]
  char v204; // [rsp+3E1h] [rbp+361h]
  char v205; // [rsp+3E2h] [rbp+362h]
  char v206; // [rsp+3E3h] [rbp+363h]
  char v207; // [rsp+3E4h] [rbp+364h]
  char v208; // [rsp+3E5h] [rbp+365h]
  char v209; // [rsp+3E6h] [rbp+366h]
  char v210; // [rsp+3E7h] [rbp+367h]
  __int64 v211; // [rsp+3E8h] [rbp+368h]

  v211 = -2;
  v8 = sub_1408FEA60(a4, a5);
  if ( !v9 )
    goto LABEL_27;
  v10 = v8;
  v11 = v9;
  sub_1416B18A0((unsigned int)&v157, a2, a3, (unsigned int)&unk_141A0A1AD, 9);
  v196 = *((_QWORD *)&v157 + 1);
  v12 = sub_1416B0D10(v10, v11, *((_QWORD *)&v157 + 1), v158);
  if ( (_QWORD)v157 )
    result = sub_140001660(v196, v157, 1);
  if ( !v12 )
  {
LABEL_27:
    *a1 = -1;
    return result;
  }
  sub_1416B18A0((unsigned int)&v166, v10, v11, (unsigned int)&unk_141A0A1B6, 4);
  v14 = *((_OWORD **)&v166 + 1);
  v15 = v167;
  if ( !(unsigned __int8)sub_1416B1B00(*((_QWORD *)&v166 + 1), v167) )
  {
    nullsub_1(v17, v16);
    v26 = 33;
    v27 = sub_140001650(33, 1);
    if ( !v27 )
      sub_14196B2DB(1, 33);
    v14 = (_OWORD *)v27;
    *(_OWORD *)(v27 + 16) = xmmword_141A0A1CA;
    *(_OWORD *)v27 = xmmword_141A0A1BA;
    *(_BYTE *)(v27 + 32) = -74;
    v28 = 9;
    v19 = 33;
LABEL_49:
    if ( (_QWORD)v166 )
      sub_140001660(*((_QWORD *)&v166 + 1), v166, 1);
    *(_QWORD *)&v157 = v28;
    *((_QWORD *)&v157 + 1) = v19;
    *(_QWORD *)&v158 = v14;
    *((_QWORD *)&v158 + 1) = v26;
    *(_QWORD *)&v141 = &v157;
    *((_QWORD *)&v141 + 1) = sub_140D76130;
    sub_1416DAFA0(v139, &unk_141A0A0FB, &v141);
    v47 = v139[0];
    v196 = v139[1];
    if ( v11 >= 0 )
    {
      v49 = v10;
      v50 = a1;
      v51 = v139[2];
      nullsub_1(v46, v45);
      v48 = 1;
      v52 = sub_140001650(v11, 1);
      if ( v52 )
      {
        v53 = v52;
        result = sub_1419234B0(v52, v49, v11);
        *v50 = v11;
        v50[1] = v53;
        v50[2] = v11;
        v50[3] = 0;
        v50[4] = 1;
        v50[5] = 0;
        v50[6] = v47;
        v50[7] = v196;
        v50[8] = v51;
        *((_WORD *)v50 + 36) = 1;
        sub_1401AF970(&v157);
        return result;
      }
    }
    else
    {
      v48 = 0;
    }
    v192 = v47;
    sub_14196B2DB(v48, v11);
  }
  sub_1416CC1A0(&v157, v14, v15);
  v19 = *((_QWORD *)&v157 + 1);
  v196 = v157;
  if ( (_QWORD)v157 == -1 )
  {
    v28 = 2;
    v26 = 30;
    goto LABEL_49;
  }
  v192 = v10;
  v178 = a1;
  v191 = v11;
  *(_QWORD *)&v157 = 0;
  *((_QWORD *)&v157 + 1) = v158;
  v20 = v19;
  v194 = v19;
  *(_QWORD *)&v158 = v19;
  *((_QWORD *)&v158 + 1) = *((_QWORD *)&v157 + 1);
  v159 = __PAIR128__(*((unsigned __int64 *)&v157 + 1), 0);
  v160 = 0xA0000000ALL;
  LOBYTE(v161) = 1;
  LOWORD(v163) = 0;
  for ( i = 0; ; i = BYTE1(v163) )
  {
    if ( (i & 1) != 0 )
      goto LABEL_45;
    v22 = v158;
    sub_140223420(&v141, &v158);
    if ( (_DWORD)v141 == 1 )
    {
      v23 = v157;
      *(_QWORD *)&v157 = v142;
      v18 = v142 - v23;
      v24 = v23 + v22;
      if ( (_QWORD)v142 == v23 )
        goto LABEL_22;
    }
    else
    {
      if ( BYTE1(v163) )
        goto LABEL_45;
      BYTE1(v163) = 1;
      v18 = *((_QWORD *)&v157 + 1) - v157;
      if ( ((unsigned __int8)v163 | (*((_QWORD *)&v157 + 1) != (_QWORD)v157)) != 1 )
        goto LABEL_45;
      v24 = v158 + v157;
      if ( !v18 )
        goto LABEL_22;
    }
    if ( *(_BYTE *)(v24 + v18 - 1) != 10 )
      goto LABEL_22;
    if ( v18 == 1 )
      break;
    if ( *(_BYTE *)(v24 + v18 - 2) == 13 )
    {
      v25 = (_DWORD *)sub_1408FEA60(v24, v18 - 2);
      if ( v18 < 7 )
        continue;
      goto LABEL_23;
    }
    v25 = (_DWORD *)sub_1408FEA60(v24, v18 - 1);
    if ( v18 >= 7 )
      goto LABEL_23;
LABEL_8:
    ;
  }
  v18 = 0;
LABEL_22:
  v25 = (_DWORD *)sub_1408FEA60(v24, v18);
  if ( v18 < 7 )
    goto LABEL_8;
LABEL_23:
  v20 = *v25 ^ 0x64746967u;
  if ( (unsigned int)v20 | *(_DWORD *)((char *)v25 + 3) ^ 0x3A726964 )
    goto LABEL_8;
  v29 = sub_1408FEA60((char *)v25 + 7, v18 - 7);
  if ( !v29 || !v18 )
  {
LABEL_45:
    nullsub_1(v20, v18);
    v26 = 30;
    v44 = (_OWORD *)sub_140001650(30, 1);
    if ( !v44 )
      sub_14196B2DB(1, 30);
    v14 = v44;
    *(_OWORD *)((char *)v44 + 14) = *(__int128 *)((char *)&xmmword_141A07B17 + 14);
    *v44 = xmmword_141A07B17;
    v28 = 9;
    v11 = v191;
    a1 = v178;
    v10 = v192;
    if ( v196 )
      sub_140001660(v194, v196, 1);
    v19 = 30;
    goto LABEL_49;
  }
  sub_1416DA980(&v157, v29, v18);
  v195 = v157;
  v30 = v158;
  v31 = v158;
  v201 = 1;
  v199 = *((_QWORD *)&v157 + 1);
  v32 = sub_1416B0BB0(*((_QWORD *)&v157 + 1), v158);
  v11 = v191;
  a1 = v178;
  v10 = v192;
  if ( !v32 )
  {
    v201 = 1;
    v33 = sub_1416B19D0(v14, v15);
    v35 = v34;
    v36 = &unk_141A0A14B;
    if ( v33 )
      LODWORD(v36) = v33;
    else
      v35 = 1;
    *(_QWORD *)&v157 = v195;
    *((_QWORD *)&v157 + 1) = v199;
    v158 = v30;
    v201 = 0;
    sub_140651B40((__int64)&v141, (int)v36, v35, &v157);
    v199 = *((_QWORD *)&v141 + 1);
    v195 = v141;
    v31 = v142;
  }
  if ( v196 )
    sub_140001660(v194, v196, 1);
  sub_1416B18A0((unsigned int)&v179, v199, v31, (unsigned int)&unk_141A0A132, 9);
  v196 = *((_QWORD *)&v179 + 1);
  sub_1416CC1A0(&v141, *((_QWORD *)&v179 + 1), hObject);
  v37 = v141;
  if ( (_QWORD)v141 == -1 )
  {
    *(_QWORD *)&v189 = *((_QWORD *)&v141 + 1);
    v148 = &v189;
    v149[0] = sub_1416EA080;
    sub_1416DAFA0(&v157, &unk_141A07AFA, &v148);
    v14 = *((_OWORD **)&v157 + 1);
    v19 = v157;
    v26 = v158;
    if ( (unsigned int)(v189 & 3) - 2 >= 2 && (v189 & 3) != 0 )
    {
      v149[0] = v189 - 1;
      LOBYTE(v148) = 3;
      sub_1416EBAD0(v149);
    }
    v28 = 10;
    goto LABEL_64;
  }
  v200 = *((_OWORD **)&v141 + 1);
  v38 = sub_1408FEA60(*((_QWORD *)&v141 + 1), v142);
  if ( !v39 )
  {
    nullsub_1(v40, 0);
    v19 = 16;
    v54 = (_OWORD *)sub_140001650(16, 1);
    if ( !v54 )
    {
      v193 = v37;
      sub_14196B2DB(1, 16);
    }
    v14 = v54;
    *v54 = xmmword_141A0A13B;
    v28 = 9;
    if ( v37 )
      sub_140001660(v200, v37, 1);
    v26 = 16;
LABEL_64:
    if ( (_QWORD)v179 )
      sub_140001660(v196, v179, 1);
    goto LABEL_86;
  }
  v193 = v37;
  sub_1416DA980(&v157, v38, v39);
  v188 = v157;
  v41 = v158;
  v42 = v158;
  v202 = 1;
  v174 = *((_QWORD *)&v157 + 1);
  if ( (unsigned __int8)sub_1416B0BB0(*((_QWORD *)&v157 + 1), v158) )
  {
    *(_QWORD *)&v141 = v188;
    v43 = v174;
  }
  else
  {
    *(_QWORD *)&v157 = v188;
    *((_QWORD *)&v157 + 1) = v174;
    v158 = v41;
    v202 = 0;
    sub_140651B40((__int64)&v141, v199, v31, &v157);
    v43 = *((_QWORD *)&v141 + 1);
    v42 = v142;
  }
  v198 = 1;
  v194 = v43;
  sub_1416C4200(&v157, v43, v42);
  v55 = (_OWORD *)v141;
  v56 = v157;
  if ( (_QWORD)v157 == -1 )
  {
    if ( (BYTE8(v157) & 3u) - 2 >= 2 && (BYTE8(v157) & 3) != 0 )
    {
      v149[0] = *((_QWORD *)&v157 + 1) - 1LL;
      LOBYTE(v148) = 3;
      v198 = 0;
      sub_1416EBAD0(v149);
    }
    v57 = v194;
  }
  else
  {
    v42 = v158;
    if ( (_QWORD)v141 )
      sub_140001660(v194, v141, 1);
    v55 = (_OWORD *)v56;
    v57 = *((_QWORD *)&v56 + 1);
  }
  v10 = v192;
  if ( v193 )
    sub_140001660(v200, v193, 1);
  v200 = v55;
  if ( (_QWORD)v179 )
    sub_140001660(v196, v179, 1);
  v194 = v57;
  v58 = sub_1416B19D0(v57, v42);
  v61 = v58;
  if ( !v58 )
  {
    nullsub_1(v60, v59);
    v26 = 46;
    v63 = (_OWORD *)sub_140001650(46, 1);
    if ( !v63 )
      sub_14196B2DB(1, 46);
    v14 = v63;
    *(_OWORD *)((char *)v63 + 30) = *(__int128 *)((char *)&xmmword_141A07B5B + 14);
    v63[1] = xmmword_141A07B5B;
    *v63 = xmmword_141A07B4B;
    v28 = 9;
    if ( v200 )
      sub_140001660(v194, v200, 1);
    v19 = 46;
LABEL_86:
    if ( v195 )
      sub_140001660(v199, v195, 1);
    goto LABEL_49;
  }
  v62 = v59;
  sub_1416C4200(&v157, v58, v59);
  if ( (_QWORD)v157 == -1 )
  {
    sub_1401DC990(&v141, v61, v62, *((_QWORD *)&v157 + 1));
  }
  else
  {
    v142 = v158;
    v141 = v157;
  }
  v64 = v141;
  v65 = v142;
  if ( v200 )
    sub_140001660(v194, v200, 1);
  if ( v195 )
    sub_140001660(v199, v195, 1);
  v194 = v64;
  if ( (_QWORD)v166 )
    sub_140001660(*((_QWORD *)&v166 + 1), v166, 1);
  v196 = *((_QWORD *)&v64 + 1);
  sub_1416DA570(&v157);
  v199 = *((_QWORD *)&v157 + 1);
  v68 = v157;
  v69 = v158;
  if ( (__int64)v158 < 0 )
  {
    v70 = 0;
    goto LABEL_97;
  }
  if ( (_QWORD)v158 )
  {
    nullsub_1(v67, v66);
    v70 = 1;
    v71 = sub_140001650(v69, 1);
    if ( !v71 )
    {
LABEL_97:
      v192 = v68;
      sub_14196B2DB(v70, v69);
    }
    v72 = v71;
    sub_1419234B0(v71, v199, v69);
  }
  else
  {
    v72 = 1;
  }
  v73 = v196;
  if ( v68 > 0 )
    sub_140001660(v199, v68, 1);
  if ( v69 == v11 && !(unsigned int)sub_141923B40(v72, v10, v11) )
  {
    *v178 = -1;
    result = sub_140001660(v72, v11, 1);
    v92 = v194;
    goto LABEL_122;
  }
  v195 = v72;
  v199 = v69;
  v204 = 1;
  if ( !(unsigned __int8)sub_1416B1940(v73, v65) )
  {
    v80 = v191;
    if ( v191 < 0 )
    {
      v81 = 0;
      goto LABEL_114;
    }
    nullsub_1(v75, v74);
    v81 = 1;
    v84 = sub_140001650(v80, 1);
    if ( !v84 )
    {
LABEL_114:
      v204 = 1;
      sub_14196B2DB(v81, v80);
    }
    v85 = v84;
    sub_1419234B0(v84, v192, v80);
    nullsub_1(v87, v86);
    v88 = sub_140001650(51, 1);
    v89 = v178;
    v90 = v199;
    v91 = v195;
    if ( !v88 )
    {
      v192 = v85;
      sub_14196B2DB(1, 51);
    }
    *(_OWORD *)(v88 + 32) = xmmword_141A0A06E;
    *(_OWORD *)(v88 + 16) = xmmword_141A0A05E;
    result = -5.577545946946351e-25;
    *(_OWORD *)v88 = xmmword_141A0A04E;
    *(_DWORD *)(v88 + 47) = -1399003473;
    *v89 = v80;
    v89[1] = v85;
    v89[2] = v80;
    v89[3] = v90;
    v89[4] = v91;
    v89[5] = v90;
    v89[6] = 51;
    v89[7] = v88;
    v89[8] = 51;
    *((_WORD *)v89 + 36) = 1;
    v92 = v194;
    v73 = v196;
LABEL_122:
    if ( v92 )
      return sub_140001660(v73, v92, 1);
    return result;
  }
  v204 = 1;
  sub_1416B94E0(&v141, aGit, 3);
  v143 = 0x8000000;
  v206 = 1;
  sub_1416B93C0(&v141, aC_4, 2);
  v206 = 1;
  sub_1416B93C0(&v141, v10, v191);
  *(_QWORD *)&v157 = aStatus_2;
  *((_QWORD *)&v157 + 1) = 6;
  *(_QWORD *)&v158 = aPorcelain;
  *((_QWORD *)&v158 + 1) = 11;
  v206 = 1;
  sub_140774560(&v141, &v157);
  LODWORD(v157) = 2;
  v206 = 1;
  sub_1416B9570(&v141, &v157);
  v140[0] = 3;
  v206 = 1;
  sub_1416B95F0(&v141, v140);
  v206 = 1;
  sub_1416B95B0(&v141, v140);
  v76 = (__int64)&v157;
  sub_1419234B0(&v157, &v141, 184);
  v155 = aGitStatus;
  v156 = 10;
  sub_1416BCAE0(&v179, &v157);
  if ( (_QWORD)v179 == 2 )
  {
    *(_QWORD *)&v176 = *((_QWORD *)&v179 + 1);
    *(_QWORD *)&v166 = &v155;
    *((_QWORD *)&v166 + 1) = sub_140191200;
    v167 = &v176;
    v168 = sub_1416EA080;
    sub_1416DAFA0(&v189, &unk_141A07B35, &v166);
    v77 = *((_QWORD *)&v189 + 1);
    v200 = (_OWORD *)v189;
    v78 = (__int64)v190;
    if ( (unsigned int)(v176 & 3) - 2 >= 2 && (v176 & 3) != 0 )
    {
      *((_QWORD *)&v166 + 1) = v176 - 1;
      LOBYTE(v166) = 3;
      sub_1416EBAD0((char *)&v166 + 8);
    }
    v79 = 10;
  }
  else
  {
    v82 = v182;
    v83 = v183;
    v166 = v179;
    v168 = v181;
    v169 = v182;
    v170 = v183;
    *(_OWORD *)v171 = v184;
    v167 = nullptr;
    if ( hObject == HANDLE_FLAG_INHERIT )
    {
      hObject = (HANDLE)-1LL;
      *(_QWORD *)&v179 = 0;
      LOBYTE(v183) = 0;
      sub_140B690E0(&v189, &v179, v181);
      if ( !(_QWORD)v189 )
      {
        *(_QWORD *)&v179 = *((_QWORD *)&v189 + 1);
        sub_14196B5F0(
          (unsigned int)aFailedToSpawnT_10,
          22,
          (unsigned int)&v179,
          (unsigned int)&off_141A07EA0,
          (__int64)&off_141A063C8);
      }
      v153 = v190;
      v152 = v189;
      v82 = v169;
      v83 = v170;
    }
    else
    {
      *(_QWORD *)&v152 = 0;
    }
    v169 = 0;
    if ( (v82 & 1) != 0 )
    {
      hObject = (HANDLE)-1LL;
      *(_QWORD *)&v179 = 0;
      LOBYTE(v183) = 0;
      v205 = 1;
      sub_140B69060(&v189, &v179, v83);
      if ( !(_QWORD)v189 )
      {
        *(_QWORD *)&v179 = *((_QWORD *)&v189 + 1);
        sub_14196B5F0(
          (unsigned int)aFailedToSpawnT_10,
          22,
          (unsigned int)&v179,
          (unsigned int)&off_141A07EA0,
          (__int64)&off_141A063C8);
      }
      v177 = v190;
      v176 = v189;
    }
    else
    {
      *(_QWORD *)&v176 = 0;
    }
    v210 = 1;
    v209 = 1;
    v93 = sub_1416AEBD0();
    v210 = 1;
    v209 = 1;
    v95 = sub_1416D0210(v93, v94, 3, 0, (__int64)&off_141A0A150);
    LODWORD(v65) = v96;
    while ( 1 )
    {
      v210 = 1;
      v209 = 1;
      sub_1416BA3E0(v146, &v166);
      if ( v146[0] == 1 )
      {
        v172 = v147;
        v208 = 1;
        v207 = 1;
        v105 = sub_1416BA2D0(&v166);
        if ( v105 && (unsigned int)(v105 & 3) - 2 >= 2 && (v105 & 3) != 0 )
        {
          *((_QWORD *)&v179 + 1) = v105 - 1;
          LOBYTE(v179) = 3;
          v208 = 1;
          v207 = 1;
          sub_1416EBAD0((char *)&v179 + 8);
        }
        v208 = 1;
        v207 = 1;
        sub_1416BA380(&v189, &v166);
        if ( (_DWORD)v189 && (BYTE8(v189) & 3u) - 2 >= 2 && (BYTE8(v189) & 3) != 0 )
        {
          *((_QWORD *)&v179 + 1) = *((_QWORD *)&v189 + 1) - 1LL;
          LOBYTE(v179) = 3;
          v208 = 1;
          v207 = 1;
          sub_1416EBAD0((char *)&v179 + 8);
        }
        v179 = v152;
        hObject = v153;
        v106 = (volatile signed __int64 *)v152;
        if ( (_QWORD)v152 )
        {
          CloseHandle(hObject);
          if ( !_InterlockedDecrement64(v106) )
            sub_1416C0140(&v179);
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v179 + 1)) )
          {
            v208 = 1;
            v207 = 0;
            sub_140CA3590((char *)&v179 + 8);
          }
        }
        v179 = v176;
        hObject = v177;
        v107 = (volatile signed __int64 *)v176;
        if ( (_QWORD)v176 )
        {
          CloseHandle(hObject);
          if ( !_InterlockedDecrement64(v107) )
            sub_1416C0140(&v179);
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v179 + 1)) )
          {
            v208 = 0;
            v207 = 0;
            sub_140CA3590((char *)&v179 + 8);
          }
        }
        *(_QWORD *)&v179 = &v155;
        *((_QWORD *)&v179 + 1) = sub_140191200;
        hObject = &v172;
        v181 = (__int64 (*)(void))sub_1416EA080;
        v208 = 0;
        v207 = 0;
        sub_1416DAFA0(&v189, &unk_141A0A191, &v179);
        v103 = *((HANDLE *)&v189 + 1);
        v102 = (_OWORD *)v189;
        v104 = (__int64)v190;
        if ( (unsigned int)(v172 & 3) - 2 >= 2 && (v172 & 3) != 0 )
        {
          *((_QWORD *)&v179 + 1) = v172 - 1;
          LOBYTE(v179) = 3;
          v210 = 0;
          v209 = 0;
          sub_1416EBAD0((char *)&v179 + 8);
        }
        v79 = 10;
        goto LABEL_177;
      }
      if ( v146[1] == 1 )
        break;
      v210 = 1;
      v209 = 1;
      v97 = sub_1416AEBD0();
      if ( v97 == v95 )
      {
        if ( v98 >= (unsigned int)v65 )
          goto LABEL_136;
      }
      else if ( v97 >= v95 )
      {
LABEL_136:
        v210 = 1;
        v209 = 1;
        v99 = sub_1416BA2D0(&v166);
        if ( v99 && (unsigned int)(v99 & 3) - 2 >= 2 && (v99 & 3) != 0 )
        {
          *((_QWORD *)&v179 + 1) = v99 - 1;
          LOBYTE(v179) = 3;
          v210 = 1;
          v209 = 1;
          sub_1416EBAD0((char *)&v179 + 8);
        }
        v210 = 1;
        v209 = 1;
        sub_1416BA380(&v189, &v166);
        if ( (_DWORD)v189 && (BYTE8(v189) & 3u) - 2 >= 2 && (BYTE8(v189) & 3) != 0 )
        {
          *((_QWORD *)&v179 + 1) = *((_QWORD *)&v189 + 1) - 1LL;
          LOBYTE(v179) = 3;
          v210 = 1;
          v209 = 1;
          sub_1416EBAD0((char *)&v179 + 8);
        }
        v179 = v152;
        hObject = v153;
        v100 = (volatile signed __int64 *)v152;
        if ( (_QWORD)v152 )
        {
          CloseHandle(hObject);
          if ( !_InterlockedDecrement64(v100) )
            sub_1416C0140(&v179);
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v179 + 1)) )
          {
            v210 = 1;
            v209 = 0;
            sub_140CA3590((char *)&v179 + 8);
          }
        }
        v179 = v176;
        hObject = v177;
        v101 = (volatile signed __int64 *)v176;
        if ( (_QWORD)v176 )
        {
          CloseHandle(hObject);
          if ( !_InterlockedDecrement64(v101) )
            sub_1416C0140(&v179);
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v179 + 1)) )
          {
            v210 = 0;
            v209 = 0;
            sub_140CA3590((char *)&v179 + 8);
          }
        }
        v172 = 3;
        *(_QWORD *)&v179 = &v155;
        *((_QWORD *)&v179 + 1) = sub_140191200;
        hObject = &v172;
        v181 = sub_1416EBAE0;
        v210 = 0;
        v209 = 0;
        sub_1416DAFA0(&v189, &unk_141A0A168, &v179);
        v103 = *((HANDLE *)&v189 + 1);
        v102 = (_OWORD *)v189;
        v79 = 10;
        v104 = (__int64)v190;
LABEL_177:
        v78 = v104;
        v77 = (__int64)v103;
        v200 = v102;
        goto LABEL_178;
      }
      v210 = 1;
      v209 = 1;
      sub_1416C57D0(0, 25000000);
    }
    LODWORD(v65) = v147;
    v210 = 1;
    v209 = 0;
    sub_1401FAEA0((unsigned int)&v179, (unsigned int)&v152, (_DWORD)v155, v156, (__int64)&unk_141A0A185);
    v200 = *((_OWORD **)&v179 + 1);
    v79 = v179;
    v175 = hObject;
    v78 = (__int64)v181;
    if ( (_QWORD)v179 == -1 )
    {
      v190 = v177;
      v189 = v176;
      sub_1401FAEA0((unsigned int)&v179, (unsigned int)&v189, (_DWORD)v155, v156, (__int64)&unk_141A0A18B);
      v102 = *((_OWORD **)&v179 + 1);
      v79 = v179;
      v103 = hObject;
      v104 = (__int64)v181;
      if ( (_QWORD)v179 == -1 )
      {
        v79 = -1;
        v154 = *((_QWORD *)&v179 + 1);
        v173 = (__int64)hObject;
        v193 = (__int64)v181;
        v104 = v78;
        v103 = v175;
        v102 = v200;
      }
      else
      {
        v154 = v182;
        v173 = (__int64)v183;
        v193 = v184;
        LODWORD(v65) = DWORD2(v184);
        LODWORD(v174) = HIDWORD(v184);
        v188 = v185;
        v144 = v186;
        v145 = v187;
        if ( v200 )
          sub_140001660(v175, v200, 1);
      }
      goto LABEL_177;
    }
    v154 = v182;
    v173 = (__int64)v183;
    v193 = v184;
    LODWORD(v65) = DWORD2(v184);
    LODWORD(v174) = HIDWORD(v184);
    v188 = v185;
    v144 = v186;
    v145 = v187;
    v120 = (volatile signed __int64 *)v176;
    if ( !(_QWORD)v176 )
      goto LABEL_216;
    CloseHandle(v177);
    if ( !_InterlockedDecrement64(v120) )
      sub_1416C0140(&v176);
    if ( _InterlockedDecrement64(*((volatile signed __int64 **)&v176 + 1)) )
    {
LABEL_216:
      v77 = (__int64)v175;
    }
    else
    {
      v205 = 0;
      sub_140CA3590((char *)&v176 + 8);
      v77 = (__int64)v175;
    }
LABEL_178:
    v108 = v171[1];
    CloseHandle(v171[0]);
    CloseHandle(v108);
    if ( (_QWORD)v166 )
      CloseHandle(*((HANDLE *)&v166 + 1));
    v10 = v154;
    v76 = v173;
    if ( v167 )
      CloseHandle(v168);
    if ( v169 )
      CloseHandle(v170);
  }
  v206 = 0;
  sub_1401AB9C0(&v157);
  v109 = v193;
  v110 = v188;
  v111 = (unsigned int)v174;
  if ( (_DWORD)v79 != -1 )
  {
    hObject = v145;
    v179 = v144;
    goto LABEL_186;
  }
  v148 = v200;
  v149[0] = v77;
  v149[1] = v78;
  v149[2] = v10;
  v149[3] = v76;
  v149[4] = v193;
  v150 = v65;
  v151 = v174;
  if ( (_DWORD)v65 )
  {
    v114 = v77;
    v173 = v76;
    sub_1416D8D10(&v157, v76, v193);
    v188 = *((_QWORD *)&v157 + 1);
    v193 = v157;
    v115 = sub_1408FEA60(*((_QWORD *)&v157 + 1), v158);
    v78 = v111;
    if ( v111 < 0 )
    {
      v65 = 0;
      goto LABEL_192;
    }
    if ( v111 )
    {
      v129 = v115;
      nullsub_1(v110, v111);
      v65 = 1;
      v130 = sub_140001650(v78, 1);
      if ( !v130 )
LABEL_192:
        sub_14196B2DB(v65, v78);
      v76 = v130;
      sub_1419234B0(v130, v129, v78);
    }
    else
    {
      v76 = 1;
    }
    if ( v193 > 0 )
      sub_140001660(v188, v193, 1);
    if ( !v78 )
    {
      nullsub_1(v110, v111);
      v78 = 23;
      v136 = sub_140001650(23, 1);
      if ( !v136 )
        sub_14196B2DB(1, 23);
      v76 = v136;
      *(_OWORD *)v136 = xmmword_141A0A037;
      *(_QWORD *)(v136 + 15) = 0xA5B4E8B1A4E59E9BuLL;
    }
    if ( v200 )
      sub_140001660(v114, v200, 1);
    v79 = 10;
    if ( v10 )
      sub_140001660(v173, v10, 1);
    v77 = v76;
    v200 = (_OWORD *)v78;
LABEL_186:
    *(_QWORD *)&v157 = v79;
    *((_QWORD *)&v157 + 1) = v200;
    *(_QWORD *)&v158 = v77;
    *((_QWORD *)&v158 + 1) = v78;
    *(_QWORD *)&v159 = v10;
    *((_QWORD *)&v159 + 1) = v76;
    v160 = v109;
    v161 = v65;
    v162 = v111;
    v163 = v110;
    v164 = v179;
    v165 = hObject;
    v112 = v191;
    if ( v191 < 0 )
    {
      v113 = 0;
      goto LABEL_188;
    }
    nullsub_1(v110, v111);
    v113 = 1;
    v116 = sub_140001650(v112, 1);
    if ( !v116 )
    {
LABEL_188:
      v197 = 1;
      sub_14196B2DB(v113, v112);
    }
    v117 = v192;
    v192 = v116;
    sub_1419234B0(v116, v117, v112);
    *(_QWORD *)&v141 = &v157;
    *((_QWORD *)&v141 + 1) = sub_140D76130;
    sub_1416DAFA0(&v137, &unk_141A0A0CD, &v141);
    v118 = v178;
    v178[8] = v138;
    result = *(double *)&v137;
    *((_OWORD *)v118 + 3) = v137;
    *v118 = v112;
    v118[1] = v192;
    v118[2] = v112;
    v119 = v199;
    v118[3] = v199;
    v118[4] = v195;
    v118[5] = v119;
    *((_WORD *)v118 + 36) = 1;
    v203 = 0;
    sub_1401AF970(&v157);
  }
  else
  {
    v121 = v76;
    sub_1416D8D10(&v157, v77, v78);
    sub_1408FEA60(*((_QWORD *)&v157 + 1), v158);
    v123 = v122;
    if ( v200 )
      sub_140001660(v77, v200, 1);
    if ( v10 )
      sub_140001660(v121, v10, 1);
    if ( (__int64)v157 > 0 )
      sub_140001660(*((_QWORD *)&v157 + 1), v157, 1);
    if ( v123 )
    {
      sub_1401E7560((unsigned int)&v157, v191, 0, 1, 1);
      v200 = *((_OWORD **)&v157 + 1);
      if ( (_BYTE)v157 )
      {
        v203 = 1;
        sub_14196B2DB(v200, v158);
      }
      v193 = v158;
      sub_1419234B0(v158, v192, v191);
      nullsub_1(v125, v124);
      v126 = (_OWORD *)sub_140001650(76, 1);
      if ( !v126 )
        sub_14196B2DB(1, 76);
      *(_OWORD *)((char *)v126 + 60) = *(__int128 *)((char *)&xmmword_141A0A0B1 + 12);
      v126[3] = xmmword_141A0A0B1;
      v126[2] = xmmword_141A0A0A1;
      v126[1] = xmmword_141A0A091;
      result = 6.736390218667567e265;
      *v126 = xmmword_141A0A081;
      v127 = v178;
      *v178 = (__int64)v200;
      v127[1] = v193;
      v127[2] = v191;
      v128 = v199;
      v127[3] = v199;
      v127[4] = v195;
      v127[5] = v128;
      v127[6] = 76;
      v127[7] = (__int64)v126;
      v127[8] = 76;
      *((_WORD *)v127 + 36) = 1;
    }
    else
    {
      sub_1401E7560((unsigned int)&v157, v191, 0, 1, 1);
      v131 = *((_QWORD *)&v157 + 1);
      if ( (_BYTE)v157 )
      {
        v203 = 1;
        sub_14196B2DB(*((_QWORD *)&v157 + 1), v158);
      }
      v132 = v158;
      v133 = v191;
      result = sub_1419234B0(v158, v192, v191);
      v134 = v178;
      *v178 = v131;
      v134[1] = v132;
      v134[2] = v133;
      v135 = v199;
      v134[3] = v199;
      v134[4] = v195;
      v134[5] = v135;
      v134[6] = -1;
      *((_WORD *)v134 + 36) = 256;
    }
  }
  if ( v194 )
    return sub_140001660(v196, v194, 1);
  return result;
}
