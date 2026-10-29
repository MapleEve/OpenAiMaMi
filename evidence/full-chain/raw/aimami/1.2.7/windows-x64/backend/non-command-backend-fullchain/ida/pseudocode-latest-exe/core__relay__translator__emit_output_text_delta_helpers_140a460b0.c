__int64 __fastcall sub_140A460B0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  char v7; // r12
  __int128 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int128 *v27; // rdx
  __int64 v28; // r15
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _DWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _DWORD *v41; // rsi
  _DWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  _WORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r14
  unsigned __int64 v66; // rdi
  _QWORD *v67; // rsi
  __int64 v68; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  _DWORD *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _DWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  _DWORD *v84; // rax
  _DWORD *v85; // rbx
  unsigned __int64 v86; // r13
  _QWORD *v87; // rsi
  __int64 v88; // r12
  __int64 v89; // r12
  __int64 v90; // rdx
  __int64 v91; // rcx
  _DWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  _DWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  void *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r13
  _DWORD *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  void *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  _DWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  _DWORD *v114; // rsi
  _DWORD *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  _DWORD *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  _DWORD *v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  void *v124; // rax
  _DWORD *v125; // rbx
  unsigned __int64 v126; // r13
  _QWORD *v127; // rsi
  __int64 v128; // rax
  __int64 v129; // [rsp+28h] [rbp-58h] BYREF
  _DWORD *v130; // [rsp+30h] [rbp-50h]
  __int64 v131; // [rsp+38h] [rbp-48h]
  _QWORD *v132; // [rsp+40h] [rbp-40h]
  __int128 v133; // [rsp+48h] [rbp-38h] BYREF
  __int64 v134; // [rsp+58h] [rbp-28h]
  __int64 v135; // [rsp+60h] [rbp-20h]
  __int64 v136; // [rsp+68h] [rbp-18h]
  char v137; // [rsp+77h] [rbp-9h] BYREF
  _DWORD *v138; // [rsp+78h] [rbp-8h]
  __int64 v139; // [rsp+80h] [rbp+0h]
  __int128 *v140; // [rsp+88h] [rbp+8h]
  __int128 v141; // [rsp+90h] [rbp+10h] BYREF
  __int64 v142; // [rsp+A0h] [rbp+20h]
  _DWORD *v143; // [rsp+A8h] [rbp+28h]
  _DWORD *v144; // [rsp+B0h] [rbp+30h]
  __int128 *v145; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v146; // [rsp+C0h] [rbp+40h]
  __int64 v147; // [rsp+D0h] [rbp+50h]
  char v148; // [rsp+DAh] [rbp+5Ah]
  char v149; // [rsp+DBh] [rbp+5Bh]
  char v150; // [rsp+DCh] [rbp+5Ch]
  char v151; // [rsp+DDh] [rbp+5Dh]
  char v152; // [rsp+DEh] [rbp+5Eh]
  char v153; // [rsp+DFh] [rbp+5Fh]
  _BYTE v154[24]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v155; // [rsp+F8h] [rbp+78h]
  __int128 v156; // [rsp+100h] [rbp+80h] BYREF
  unsigned __int64 v157; // [rsp+110h] [rbp+90h]
  char v158; // [rsp+11Fh] [rbp+9Fh]
  __int64 v159; // [rsp+120h] [rbp+A0h]

  v159 = -2;
  v132 = a4;
  v135 = a2;
  v5 = a1;
  if ( *(_QWORD *)(a1 + 240) != -1 )
  {
    v6 = *(_QWORD *)(a1 + 280);
    if ( a3 <= (unsigned __int64)(*(_QWORD *)(a1 + 264) - v6) )
      goto LABEL_3;
LABEL_124:
    sub_141939070(v5 + 264, v6, a3, 1, 1);
    v6 = *(_QWORD *)(v5 + 280);
    goto LABEL_4;
  }
  v139 = *(unsigned int *)(a1 + 472);
  *(_DWORD *)(a1 + 472) = v139 + 1;
  sub_141597890(v154);
  v156 = *(_OWORD *)v154;
  v145 = nullptr;
  v146 = 1u;
  *(_QWORD *)&v154[16] = 1610612768;
  *(_QWORD *)v154 = &v145;
  *(_QWORD *)&v154[8] = &off_141A6D298;
  if ( (unsigned __int8)sub_141598A30(&v156, v154) )
    sub_14196B5F0(
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v137,
      (unsigned int)&unk_141A69A18,
      (__int64)&off_141A6D350);
  v140 = v145;
  v136 = v146;
  if ( *((_QWORD *)&v146 + 1) <= 0x10u )
  {
    if ( *((_QWORD *)&v146 + 1) != 16 )
LABEL_8:
      sub_14196B4F0(v146, DWORD2(v146), 0, 16, (__int64)&off_141A6A710);
  }
  else if ( *(char *)(v146 + 16) <= -65 )
  {
    goto LABEL_8;
  }
  *(_QWORD *)&v141 = v146;
  *((_QWORD *)&v141 + 1) = 16;
  v145 = &v141;
  *(_QWORD *)&v146 = sub_140191200;
  sub_1416DAFA0(v154, &unk_141A6A4D8, &v145);
  v27 = v140;
  if ( v140 )
    sub_140001660(v136, v140, 1);
  v140 = *(__int128 **)&v154[8];
  v136 = *(_QWORD *)v154;
  v28 = *(_QWORD *)&v154[16];
  *(_QWORD *)&v133 = 0;
  v134 = 0;
  nullsub_1(v26, v27);
  v29 = (_DWORD *)sub_140001650(4, 1);
  if ( !v29 )
    sub_14196B2DB(1, 4);
  *v29 = 1701869940;
  *(_QWORD *)&v156 = 4;
  v143 = v29;
  *((_QWORD *)&v156 + 1) = v29;
  v157 = 4;
  nullsub_1(v31, v30);
  v32 = (_DWORD *)sub_140001650(26, 1);
  v144 = v32;
  if ( !v32 )
    sub_14196B2DB(1, 26);
  qmemcpy(v32, "response.output_item.added", 26);
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 26;
  *(_QWORD *)&v154[16] = v32;
  v155 = 26;
  sub_140A68320(&v145, &v133, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v34, v33);
  v35 = (void *)sub_140001650(12, 1);
  if ( !v35 )
    sub_14196B2DB(1, 12);
  qmemcpy(v35, "output_index", 12);
  *(_QWORD *)&v156 = 12;
  *((_QWORD *)&v156 + 1) = v35;
  v157 = 12;
  v154[0] = 2;
  *(_QWORD *)&v154[8] = 0;
  *(_QWORD *)&v154[16] = v139;
  sub_140A68320(&v145, &v133, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v37, v36);
  v38 = (_DWORD *)sub_140001650(4, 1);
  if ( !v38 )
    sub_14196B2DB(1, 4);
  v41 = v38;
  *v38 = 1835365481;
  v129 = 4;
  v130 = v38;
  v131 = 4;
  *(_QWORD *)&v141 = 0;
  v142 = 0;
  nullsub_1(v40, v39);
  v42 = (_DWORD *)sub_140001650(4, 1);
  v144 = v41;
  if ( !v42 )
    sub_14196B2DB(1, 4);
  *v42 = 1701869940;
  *(_QWORD *)&v156 = 4;
  v138 = v42;
  *((_QWORD *)&v156 + 1) = v42;
  v157 = 4;
  nullsub_1(v44, v43);
  v45 = (_DWORD *)sub_140001650(7, 1);
  v143 = v45;
  if ( !v45 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v45 + 3) = 1701273971;
  *v45 = 1936942445;
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 7;
  *(_QWORD *)&v154[16] = v45;
  v155 = 7;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v47, v46);
  v48 = (_WORD *)sub_140001650(2, 1);
  if ( !v48 )
    sub_14196B2DB(1, 2);
  *v48 = 25705;
  *(_QWORD *)&v156 = 2;
  *((_QWORD *)&v156 + 1) = v48;
  v157 = 2;
  v143 = v48;
  if ( v28 < 0 )
  {
    v51 = 0;
    goto LABEL_42;
  }
  if ( v28 )
  {
    nullsub_1(v50, v49);
    v51 = 1;
    v52 = sub_140001650(v28, 1);
    if ( !v52 )
    {
LABEL_42:
      v153 = 1;
      sub_14196B2DB(v51, v28);
    }
    v53 = v52;
    sub_1419234B0(v52, v140, v28);
  }
  else
  {
    v53 = 1;
  }
  v154[0] = 3;
  *(_QWORD *)&v154[8] = v28;
  *(_QWORD *)&v154[16] = v53;
  v155 = v28;
  v153 = 0;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v71, v70);
  v72 = sub_140001650(6, 1);
  if ( !v72 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v72 + 4) = 29557;
  *(_DWORD *)v72 = 1952543859;
  *(_QWORD *)&v156 = 6;
  v138 = (_DWORD *)v72;
  *((_QWORD *)&v156 + 1) = v72;
  v157 = 6;
  nullsub_1(v74, v73);
  v75 = (_DWORD *)sub_140001650(11, 1);
  v143 = v75;
  if ( !v75 )
    sub_14196B2DB(1, 11);
  qmemcpy(v75, "in_progress", 11);
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 11;
  *(_QWORD *)&v154[16] = v75;
  v155 = 11;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v77, v76);
  v78 = (_DWORD *)sub_140001650(4, 1);
  if ( !v78 )
    sub_14196B2DB(1, 4);
  *v78 = 1701605234;
  *(_QWORD *)&v156 = 4;
  v138 = v78;
  *((_QWORD *)&v156 + 1) = v78;
  v157 = 4;
  nullsub_1(v80, v79);
  v81 = sub_140001650(9, 1);
  v143 = (_DWORD *)v81;
  if ( !v81 )
    sub_14196B2DB(1, 9);
  *(_QWORD *)v81 = 0x6E61747369737361LL;
  *(_BYTE *)(v81 + 8) = 116;
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 9;
  *(_QWORD *)&v154[16] = v81;
  v155 = 9;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v83, v82);
  v84 = (_DWORD *)sub_140001650(7, 1);
  if ( !v84 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v84 + 3) = 1953391988;
  *v84 = 1953394531;
  *(_QWORD *)&v156 = 7;
  *((_QWORD *)&v156 + 1) = v84;
  v157 = 7;
  *(_QWORD *)&v154[8] = 0;
  *(_QWORD *)&v154[16] = 8;
  v155 = 0;
  v154[0] = 4;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  *(_OWORD *)&v154[8] = v141;
  v155 = v142;
  v154[0] = 5;
  v152 = 0;
  sub_140A68320(&v145, &v133, &v129, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  v146 = v133;
  v147 = v134;
  LOBYTE(v145) = 5;
  *(_QWORD *)&v141 = &xmmword_141A6A728;
  *((_QWORD *)&v141 + 1) = 26;
  v129 = (__int64)&v145;
  *(_QWORD *)v154 = &v141;
  *(_QWORD *)&v154[8] = sub_140191200;
  *(_QWORD *)&v154[16] = &v129;
  v155 = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v156, &unk_141A6C33A, v154);
  v85 = *((_DWORD **)&v156 + 1);
  v86 = v157;
  v87 = v132;
  v88 = v132[2];
  if ( v157 > *v132 - v88 )
  {
    v144 = *((_DWORD **)&v156 + 1);
    sub_141939070((_DWORD)v132, v88, v157, 1, 1);
    v88 = v87[2];
    v85 = v144;
  }
  else if ( !v157 )
  {
    goto LABEL_86;
  }
  sub_1419234B0(v88 + v87[1], v85, v86);
LABEL_86:
  v89 = v86 + v88;
  v87[2] = v89;
  if ( (_QWORD)v156 )
    sub_140001660(v85, v156, 1);
  v158 = 1;
  sub_140A192F0(&v145);
  *(_QWORD *)&v133 = 0;
  v134 = 0;
  nullsub_1(v91, v90);
  v92 = (_DWORD *)sub_140001650(4, 1);
  if ( !v92 )
    sub_14196B2DB(1, 4);
  *v92 = 1701869940;
  *(_QWORD *)&v156 = 4;
  v143 = v92;
  *((_QWORD *)&v156 + 1) = v92;
  v157 = 4;
  nullsub_1(v94, v93);
  v95 = (_DWORD *)sub_140001650(27, 1);
  v144 = v95;
  if ( !v95 )
    sub_14196B2DB(1, 27);
  qmemcpy(v95, "response.content_part.added", 27);
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 27;
  *(_QWORD *)&v154[16] = v95;
  v155 = 27;
  sub_140A68320(&v145, &v133, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v97, v96);
  v98 = (void *)sub_140001650(12, 1);
  if ( !v98 )
    sub_14196B2DB(1, 12);
  qmemcpy(v98, "output_index", 12);
  *(_QWORD *)&v156 = 12;
  *((_QWORD *)&v156 + 1) = v98;
  v157 = 12;
  v154[0] = 2;
  *(_QWORD *)&v154[8] = 0;
  *(_QWORD *)&v154[16] = v139;
  sub_140A68320(&v145, &v133, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v100, v99);
  v101 = 1;
  v102 = (_DWORD *)sub_140001650(7, 1);
  if ( !v102 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v102 + 3) = 1684627309;
  *v102 = 1835365481;
  *(_QWORD *)&v156 = 7;
  v144 = v102;
  *((_QWORD *)&v156 + 1) = v102;
  v157 = 7;
  if ( v28 )
  {
    nullsub_1(v104, v103);
    v105 = sub_140001650(v28, 1);
    if ( !v105 )
    {
      v151 = 1;
      sub_14196B2DB(1, v28);
    }
    v101 = v105;
    sub_1419234B0(v105, v140, v28);
  }
  v154[0] = 3;
  *(_QWORD *)&v154[8] = v28;
  *(_QWORD *)&v154[16] = v101;
  v155 = v28;
  v151 = 0;
  sub_140A68320(&v145, &v133, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v107, v106);
  v108 = (void *)sub_140001650(13, 1);
  if ( !v108 )
    sub_14196B2DB(1, 13);
  qmemcpy(v108, "content_index", 13);
  *(_QWORD *)&v156 = 13;
  *((_QWORD *)&v156 + 1) = v108;
  v157 = 13;
  v154[0] = 2;
  *(_OWORD *)&v154[8] = 0;
  sub_140A68320(&v145, &v133, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v110, v109);
  v111 = (_DWORD *)sub_140001650(4, 1);
  if ( !v111 )
    sub_14196B2DB(1, 4);
  v114 = v111;
  *v111 = 1953653104;
  v129 = 4;
  v130 = v111;
  v131 = 4;
  *(_QWORD *)&v141 = 0;
  v142 = 0;
  nullsub_1(v113, v112);
  v115 = (_DWORD *)sub_140001650(4, 1);
  v144 = v114;
  if ( !v115 )
    sub_14196B2DB(1, 4);
  *v115 = 1701869940;
  *(_QWORD *)&v156 = 4;
  v138 = v115;
  *((_QWORD *)&v156 + 1) = v115;
  v157 = 4;
  nullsub_1(v117, v116);
  v118 = (_DWORD *)sub_140001650(11, 1);
  v143 = v118;
  if ( !v118 )
    sub_14196B2DB(1, 11);
  qmemcpy(v118, "output_text", 11);
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 11;
  *(_QWORD *)&v154[16] = v118;
  v155 = 11;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v120, v119);
  v121 = (_DWORD *)sub_140001650(4, 1);
  if ( !v121 )
    sub_14196B2DB(1, 4);
  *v121 = 1954047348;
  *(_QWORD *)&v156 = 4;
  *((_QWORD *)&v156 + 1) = v121;
  v157 = 4;
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 0;
  *(_QWORD *)&v154[16] = 1;
  v155 = 0;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v123, v122);
  v124 = (void *)sub_140001650(11, 1);
  if ( !v124 )
    sub_14196B2DB(1, 11);
  qmemcpy(v124, "annotations", 11);
  *(_QWORD *)&v156 = 11;
  *((_QWORD *)&v156 + 1) = v124;
  v157 = 11;
  *(_QWORD *)&v154[8] = 0;
  *(_QWORD *)&v154[16] = 8;
  v155 = 0;
  v154[0] = 4;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  *(_OWORD *)&v154[8] = v141;
  v155 = v142;
  v154[0] = 5;
  v150 = 0;
  sub_140A68320(&v145, &v133, &v129, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  v146 = v133;
  v147 = v134;
  LOBYTE(v145) = 5;
  *(_QWORD *)&v141 = &xmmword_141A6A742;
  *((_QWORD *)&v141 + 1) = 27;
  v129 = (__int64)&v145;
  *(_QWORD *)v154 = &v141;
  *(_QWORD *)&v154[8] = sub_140191200;
  *(_QWORD *)&v154[16] = &v129;
  v155 = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v156, &unk_141A6C33A, v154);
  v125 = *((_DWORD **)&v156 + 1);
  v126 = v157;
  v127 = v132;
  if ( v157 > *v132 - v89 )
  {
    v144 = *((_DWORD **)&v156 + 1);
    sub_141939070((_DWORD)v132, v89, v157, 1, 1);
    v89 = v127[2];
    v125 = v144;
  }
  else if ( !v157 )
  {
    goto LABEL_120;
  }
  sub_1419234B0(v89 + v127[1], v125, v126);
LABEL_120:
  v127[2] = v126 + v89;
  if ( (_QWORD)v156 )
    sub_140001660(v125, v156, 1);
  v158 = 1;
  sub_140A192F0(&v145);
  v128 = v136;
  *(_QWORD *)(v5 + 240) = v136;
  *(_QWORD *)(v5 + 248) = v140;
  *(_QWORD *)(v5 + 256) = v28;
  *(_QWORD *)(v5 + 264) = 0;
  *(_QWORD *)(v5 + 272) = 1;
  *(_QWORD *)(v5 + 280) = 0;
  a1 = v139;
  *(_DWORD *)(v5 + 288) = v139;
  if ( v128 == -1 )
  {
    v158 = 0;
    sub_14196B590(aJustSet, 8, &off_141A6A768);
  }
  v6 = 0;
  if ( a3 )
    goto LABEL_124;
LABEL_3:
  if ( a3 )
  {
LABEL_4:
    sub_1419234B0(v6 + *(_QWORD *)(v5 + 272), v135, a3);
    v7 = 0;
    goto LABEL_10;
  }
  v7 = 1;
LABEL_10:
  *(_QWORD *)(v5 + 280) = a3 + v6;
  *(_QWORD *)&v141 = 0;
  v142 = 0;
  nullsub_1(a1, a2);
  v8 = (__int128 *)sub_140001650(4, 1);
  if ( !v8 )
    sub_14196B2DB(1, 4);
  *(_DWORD *)v8 = 1701869940;
  *(_QWORD *)&v156 = 4;
  v140 = v8;
  *((_QWORD *)&v156 + 1) = v8;
  v157 = 4;
  nullsub_1(v10, v9);
  v11 = (void *)sub_140001650(26, 1);
  v139 = (__int64)v11;
  if ( !v11 )
    sub_14196B2DB(1, 26);
  qmemcpy(v11, "response.output_text.delta", 26);
  v154[0] = 3;
  *(_QWORD *)&v154[8] = 26;
  *(_QWORD *)&v154[16] = v11;
  v155 = 26;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v13, v12);
  v14 = (void *)sub_140001650(12, 1);
  if ( !v14 )
    sub_14196B2DB(1, 12);
  qmemcpy(v14, "output_index", 12);
  *(_QWORD *)&v156 = 12;
  *((_QWORD *)&v156 + 1) = v14;
  v157 = 12;
  v15 = *(unsigned int *)(v5 + 288);
  v154[0] = 2;
  *(_QWORD *)&v154[8] = 0;
  *(_QWORD *)&v154[16] = v15;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v17, v16);
  v18 = (_DWORD *)sub_140001650(7, 1);
  if ( !v18 )
    sub_14196B2DB(1, 7);
  *(_DWORD *)((char *)v18 + 3) = 1684627309;
  *v18 = 1835365481;
  *(_QWORD *)&v156 = 7;
  *((_QWORD *)&v156 + 1) = v18;
  v157 = 7;
  v21 = *(_QWORD *)(v5 + 256);
  v139 = (__int64)v18;
  if ( v21 < 0 )
  {
    v22 = 0;
    goto LABEL_20;
  }
  if ( v21 )
  {
    v23 = *(_QWORD *)(v5 + 248);
    nullsub_1(v20, v19);
    v22 = 1;
    v24 = sub_140001650(v21, 1);
    if ( !v24 )
    {
LABEL_20:
      v149 = 1;
      sub_14196B2DB(v22, v21);
    }
    v25 = v24;
    sub_1419234B0(v24, v23, v21);
  }
  else
  {
    v25 = 1;
  }
  v154[0] = 3;
  *(_QWORD *)&v154[8] = v21;
  *(_QWORD *)&v154[16] = v25;
  v155 = v21;
  v149 = 0;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v55, v54);
  v56 = (void *)sub_140001650(13, 1);
  if ( !v56 )
    sub_14196B2DB(1, 13);
  qmemcpy(v56, "content_index", 13);
  *(_QWORD *)&v156 = 13;
  *((_QWORD *)&v156 + 1) = v56;
  v157 = 13;
  v154[0] = 2;
  *(_OWORD *)&v154[8] = 0;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  nullsub_1(v58, v57);
  v59 = sub_140001650(5, 1);
  if ( !v59 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v59 + 4) = 97;
  *(_DWORD *)v59 = 1953260900;
  *(_QWORD *)&v156 = 5;
  *((_QWORD *)&v156 + 1) = v59;
  v157 = 5;
  v139 = v59;
  if ( a3 < 0 )
  {
    v62 = 0;
    goto LABEL_55;
  }
  v63 = 1;
  if ( !v7 )
  {
    nullsub_1(v61, v60);
    v62 = 1;
    v64 = sub_140001650(a3, 1);
    if ( !v64 )
    {
LABEL_55:
      v148 = 1;
      sub_14196B2DB(v62, a3);
    }
    v63 = v64;
    sub_1419234B0(v64, v135, a3);
  }
  v154[0] = 3;
  *(_QWORD *)&v154[8] = a3;
  *(_QWORD *)&v154[16] = v63;
  v155 = a3;
  v148 = 0;
  sub_140A68320(&v145, &v141, &v156, v154);
  if ( (_BYTE)v145 != 0xFF )
    sub_140A192F0(&v145);
  v146 = v141;
  v147 = v142;
  LOBYTE(v145) = 5;
  *(_QWORD *)&v141 = &xmmword_141A6A780;
  *((_QWORD *)&v141 + 1) = 26;
  v129 = (__int64)&v145;
  *(_QWORD *)v154 = &v141;
  *(_QWORD *)&v154[8] = sub_140191200;
  *(_QWORD *)&v154[16] = &v129;
  v155 = (__int64)sub_140BE6880;
  sub_1416DAFA0(&v156, &unk_141A6C33A, v154);
  v65 = *((_QWORD *)&v156 + 1);
  v66 = v157;
  v67 = v132;
  v68 = v132[2];
  if ( v157 > *v132 - v68 )
  {
    v135 = *((_QWORD *)&v156 + 1);
    sub_141939070((_DWORD)v132, v68, v157, 1, 1);
    v68 = v67[2];
    v65 = v135;
  }
  else if ( !v157 )
  {
    goto LABEL_64;
  }
  sub_1419234B0(v68 + v67[1], v65, v66);
LABEL_64:
  v67[2] = v66 + v68;
  if ( (_QWORD)v156 )
    sub_140001660(v65, v156, 1);
  return sub_140A192F0(&v145);
}
