// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d07a90 | successor of pre-update 0x1401d3ff0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.862, "str_ov": 0.444, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140D07A90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm6_8
  __int64 v3; // xmm7_8
  __m128 v4; // xmm8
  __m128 v5; // xmm9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned __int64 v18; // rdi
  __int64 *v19; // r13
  __int128 v20; // kr00_16
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rsi
  void *v27; // r15
  __int64 v28; // rsi
  void *v29; // r15
  __int64 *v30; // rcx
  __int64 v31; // rsi
  void *v32; // r14
  _QWORD *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r15
  char *v42; // r14
  __int64 v43; // r13
  __int64 v44; // rdi
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rbx
  __int64 v51; // rdx
  void *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rbx
  __int64 v55; // rdi
  char *v56; // rdx
  __int64 v57; // rdi
  _QWORD *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  char *v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int64 v72; // rcx
  __int64 v73; // r14
  _QWORD *v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rax
  char *v77; // rdi
  __int64 v78; // rbx
  _QWORD *v79; // rax
  char *v80; // r12
  char *v81; // rdx
  _QWORD *v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // r15
  __int64 v85; // r12
  __int64 v86; // r13
  __int64 v87; // rsi
  __int64 v88; // r14
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rax
  int v92; // r9d
  __int64 v93; // r10
  __int64 v94; // r11
  char v95; // r13
  __int64 v96; // rcx
  unsigned int v97; // eax
  unsigned int v98; // edx
  __int64 v99; // r8
  unsigned int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rsi
  int v103; // edx
  __int64 v104; // rax
  _QWORD *v105; // rdi
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // rbx
  __int64 v110; // rdi
  __int64 v111; // rax
  char *v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rcx
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int64 result; // rax
  void *v119; // r13
  __int64 v120; // r14
  char *v121; // rax
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rcx
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  int v127; // [rsp+28h] [rbp-58h] BYREF
  __int128 v128; // [rsp+30h] [rbp-50h]
  __int128 v129; // [rsp+40h] [rbp-40h]
  __int64 v130; // [rsp+50h] [rbp-30h]
  __int128 v131; // [rsp+88h] [rbp+8h] BYREF
  __int64 v132; // [rsp+98h] [rbp+18h]
  __int128 v133; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v134; // [rsp+B0h] [rbp+30h]
  __int128 v135; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v136; // [rsp+C8h] [rbp+48h]
  __int64 v137; // [rsp+D0h] [rbp+50h] BYREF
  char *v138; // [rsp+D8h] [rbp+58h]
  __int64 v139; // [rsp+E0h] [rbp+60h]
  __int64 v140; // [rsp+E8h] [rbp+68h]
  __int128 v141; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v142; // [rsp+100h] [rbp+80h]
  __int128 v143; // [rsp+110h] [rbp+90h]
  __int128 v144; // [rsp+120h] [rbp+A0h]
  __int128 v145; // [rsp+130h] [rbp+B0h]
  __int128 v146; // [rsp+140h] [rbp+C0h]
  __int128 v147; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v148; // [rsp+1B0h] [rbp+130h]
  __int128 v149; // [rsp+1C0h] [rbp+140h]
  __int128 v150; // [rsp+1D0h] [rbp+150h]
  __int128 v151; // [rsp+1E0h] [rbp+160h]
  __int64 v152; // [rsp+1F0h] [rbp+170h]
  __int64 v153; // [rsp+1F8h] [rbp+178h]
  __int128 v154; // [rsp+200h] [rbp+180h] BYREF
  _BYTE v155[80]; // [rsp+210h] [rbp+190h]
  __int64 v156; // [rsp+2B0h] [rbp+230h]
  __int64 v157; // [rsp+2B8h] [rbp+238h]
  __int128 v158; // [rsp+2C0h] [rbp+240h]
  __int128 v159; // [rsp+2D0h] [rbp+250h]
  __int128 v160; // [rsp+2E0h] [rbp+260h]
  __int128 v161; // [rsp+2F0h] [rbp+270h]
  __int128 v162; // [rsp+300h] [rbp+280h]
  __int64 v163; // [rsp+310h] [rbp+290h]
  HANDLE hObject[2]; // [rsp+318h] [rbp+298h] BYREF
  char v165; // [rsp+32Fh] [rbp+2AFh] BYREF
  HANDLE v166; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v167; // [rsp+338h] [rbp+2B8h]
  __int64 v168; // [rsp+340h] [rbp+2C0h]
  _QWORD *v169; // [rsp+348h] [rbp+2C8h]
  __int64 v170; // [rsp+350h] [rbp+2D0h] BYREF
  _BYTE v171[88]; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v172; // [rsp+3B0h] [rbp+330h]
  __int128 v173; // [rsp+3E0h] [rbp+360h]
  __int64 v174; // [rsp+3F0h] [rbp+370h]
  int v175; // [rsp+3F8h] [rbp+378h]
  __int64 v176; // [rsp+400h] [rbp+380h]
  char v177; // [rsp+408h] [rbp+388h]
  __int64 v178; // [rsp+410h] [rbp+390h]
  __int128 v179; // [rsp+418h] [rbp+398h] BYREF
  __int64 v180; // [rsp+428h] [rbp+3A8h]
  _BYTE v181[96]; // [rsp+430h] [rbp+3B0h] BYREF
  char *v182; // [rsp+490h] [rbp+410h]
  unsigned __int64 v183; // [rsp+498h] [rbp+418h]
  _QWORD *v184; // [rsp+4A0h] [rbp+420h]
  HANDLE v185; // [rsp+4A8h] [rbp+428h] BYREF
  char *v186; // [rsp+4B0h] [rbp+430h]
  char *v187; // [rsp+4B8h] [rbp+438h]
  char v188; // [rsp+4C7h] [rbp+447h]
  __int64 v189; // [rsp+4C8h] [rbp+448h]

  v189 = -2;
  v140 = a1;
  *(_QWORD *)&v179 = 0;
  *((_QWORD *)&v179 + 1) = 8;
  v180 = 0;
  v7 = a2[34];
  v169 = (_QWORD *)a2[33];
  v156 = v7;
  sub_1416B18A0((unsigned int)&v154, (_DWORD)v169, v7, (unsigned int)&unk_141A944A3, 26);
  v187 = *((char **)&v154 + 1);
  sub_1416C49D0(&v170, *((_QWORD *)&v154 + 1), *(_QWORD *)v155);
  v184 = a2;
  if ( (_DWORD)v170 == 2 )
  {
    v8 = v171[0] & 3;
    if ( (unsigned int)(v8 - 2) >= 2 && (v171[0] & 3) != 0 )
    {
      --*(_QWORD *)v171;
      LOBYTE(v170) = 3;
      sub_1416EBAD0(v171);
    }
    if ( (_QWORD)v154 )
      sub_140001660(v187, v154, 1);
    goto LABEL_11;
  }
  if ( (_QWORD)v154 )
    sub_140001660(v187, v154, 1);
  v9 = a2[38];
  v167 = a2[37];
  v168 = v9;
  sub_140CFB3B0(&v170, v167, v9);
  if ( (_DWORD)v170 != -1 )
  {
    sub_140CB96B0(&v170);
LABEL_11:
    v10 = 8;
    v11 = 0;
    v12 = 0;
    goto LABEL_12;
  }
  *(_QWORD *)&v146 = *(_QWORD *)&v171[80];
  v145 = *(_OWORD *)&v171[64];
  v144 = *(_OWORD *)&v171[48];
  v143 = *(_OWORD *)&v171[32];
  v142 = *(_OWORD *)&v171[16];
  v141 = *(_OWORD *)v171;
  v41 = *(_QWORD *)&v171[16];
  v178 = *(_QWORD *)&v171[8];
  sub_140228470(&v137, *(_QWORD *)&v171[8], *(_QWORD *)&v171[8] + 424LL * *(_QWORD *)&v171[16]);
  v42 = v138;
  v43 = v139;
  v182 = &v138[32 * v139];
  v44 = a2[41];
  v45 = a2[42];
  v46 = v138;
  v187 = v138;
  if ( v138 != v182 )
  {
    while ( 1 )
    {
      sub_14071E1C0((unsigned int)&v170, *((_QWORD *)v46 + 1), *((_QWORD *)v46 + 2), v44, v45);
      v48 = v170;
      if ( v170 != -1 )
        break;
      v46 = v187 + 32;
      v187 += 32;
      if ( v187 == v182 )
        goto LABEL_81;
    }
    v186 = *(char **)&v171[8];
    v183 = *(_QWORD *)v171;
    v57 = *(_QWORD *)&v171[16];
    v158 = *(_OWORD *)&v171[24];
    v159 = *(_OWORD *)&v171[40];
    v160 = *(_OWORD *)&v171[56];
    v161 = *(_OWORD *)&v171[72];
    if ( v43 )
    {
      v58 = v42 + 8;
      do
      {
        v59 = *(v58 - 1);
        if ( v59 )
          sub_140001660(*v58, v59, 1);
        v58 += 4;
        --v43;
      }
      while ( v43 );
    }
    if ( v137 )
      sub_140001660(v42, 32 * v137, 8);
    v50 = v178;
    v49 = v57;
    v51 = *((_QWORD *)&v142 + 1);
    if ( *((_QWORD *)&v142 + 1) == -1 )
      goto LABEL_238;
    goto LABEL_236;
  }
LABEL_81:
  sub_140C69CD0(&v170, &v137);
  v48 = v170;
  v49 = *(_QWORD *)&v171[16];
  v186 = *(char **)&v171[8];
  v183 = *(_QWORD *)v171;
  if ( v170 != -1 )
  {
    v161 = *(_OWORD *)&v171[72];
    v160 = *(_OWORD *)&v171[56];
    v159 = *(_OWORD *)&v171[40];
    v158 = *(_OWORD *)&v171[24];
    v50 = v178;
    v51 = *((_QWORD *)&v142 + 1);
    if ( *((_QWORD *)&v142 + 1) == -1 )
    {
LABEL_238:
      if ( v41 )
      {
        v120 = v50;
        do
        {
          sub_1401AE3E0(v120);
          v120 += 424;
          --v41;
        }
        while ( v41 );
      }
      if ( (_QWORD)v141 )
        sub_140001660(v50, 424 * v141, 8);
      v170 = v48;
      *(_QWORD *)v171 = v183;
      *(_QWORD *)&v171[8] = v186;
      *(_QWORD *)&v171[16] = v49;
      *(_OWORD *)&v171[24] = v158;
      *(_OWORD *)&v171[40] = v159;
      *(_OWORD *)&v171[56] = v160;
      *(_OWORD *)&v171[72] = v161;
      nullsub_1(v47, v51);
      v121 = (char *)sub_140001650(33, 1);
      if ( !v121 )
        sub_14196B2DB(1, 33);
      qmemcpy(v121, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
      v187 = v121;
      *(_QWORD *)&v154 = &v170;
      *((_QWORD *)&v154 + 1) = sub_140D76130;
      sub_1416DAFA0(&v135, &unk_141A95131, &v154);
      *(_QWORD *)&v154 = 33;
      *((_QWORD *)&v154 + 1) = v187;
      *(_QWORD *)v155 = 33;
      *(_OWORD *)&v155[8] = v135;
      *(_QWORD *)&v155[24] = v136;
      v122 = v180;
      if ( v180 == (_QWORD)v179 )
        sub_1419396D0(&v179);
      v123 = *((_QWORD *)&v179 + 1);
      v124 = 48 * v122;
      v125 = v154;
      v126 = *(_OWORD *)v155;
      *(_OWORD *)(*((_QWORD *)&v179 + 1) + v124 + 32) = *(_OWORD *)&v155[16];
      *(_OWORD *)(v123 + v124 + 16) = v126;
      *(_OWORD *)(v123 + v124) = v125;
      v180 = v122 + 1;
      sub_140CB96B0(&v170);
      v15 = v184;
      goto LABEL_18;
    }
LABEL_236:
    if ( v51 )
      sub_140001660(v143, v51, 1);
    goto LABEL_238;
  }
  v147 = *(_OWORD *)v171;
  *(_QWORD *)&v148 = *(_QWORD *)&v171[16];
  sub_1416B18A0((unsigned int)v181, (_DWORD)v169, v156, (unsigned int)aAccountDomainL, 20);
  v50 = v178;
  v157 = *(_QWORD *)&v181[8];
  sub_140C97180((unsigned int)&v170, *(_DWORD *)&v181[8], *(_DWORD *)&v181[16], (unsigned int)&aAccountDomainL[20], 13);
  v48 = v170;
  if ( v170 != -1 )
  {
    v42 = *(char **)&v171[8];
    v153 = *(_QWORD *)&v171[16];
    v154 = *(_OWORD *)&v171[24];
    *(_OWORD *)v155 = *(_OWORD *)&v171[40];
    *(_OWORD *)&v155[16] = *(_OWORD *)&v171[56];
    *(_OWORD *)&v155[32] = *(_OWORD *)&v171[72];
  }
  v119 = *(void **)v171;
  if ( *(_QWORD *)v181 )
    sub_140001660(v157, *(_QWORD *)v181, 1);
  if ( (_DWORD)v48 != -1 )
  {
    v161 = *(_OWORD *)&v155[32];
    v160 = *(_OWORD *)&v155[16];
    v159 = *(_OWORD *)v155;
    v158 = v154;
    goto LABEL_233;
  }
  hObject[0] = v119;
  sub_140CFB3B0(&v170, v167, v168);
  v48 = v170;
  v42 = *(char **)&v171[8];
  v119 = *(void **)v171;
  *(_OWORD *)v181 = *(_OWORD *)&v171[24];
  *(_OWORD *)&v181[16] = *(_OWORD *)&v171[40];
  *(_OWORD *)&v181[32] = *(_OWORD *)&v171[56];
  *(_OWORD *)&v181[48] = *(_OWORD *)&v171[72];
  if ( v170 != -1 )
  {
    v153 = *(_QWORD *)&v171[16];
    v161 = *(_OWORD *)&v181[48];
    v160 = *(_OWORD *)&v181[32];
    v159 = *(_OWORD *)&v181[16];
    v158 = *(_OWORD *)v181;
    sub_1401AF000(hObject);
LABEL_233:
    sub_1402350E0(&v147);
    if ( v183 )
      sub_140001660(v186, 8 * v183, 8);
    v186 = v42;
    v183 = (unsigned __int64)v119;
    v49 = v153;
    v51 = *((_QWORD *)&v142 + 1);
    if ( *((_QWORD *)&v142 + 1) == -1 )
      goto LABEL_238;
    goto LABEL_236;
  }
  v154 = *(_OWORD *)v171;
  *(_QWORD *)v155 = *(_QWORD *)&v171[16];
  *(_OWORD *)&v155[8] = *(_OWORD *)v181;
  *(_OWORD *)&v155[24] = *(_OWORD *)&v181[16];
  *(_OWORD *)&v155[40] = *(_OWORD *)&v181[32];
  *(_OWORD *)&v155[56] = *(_OWORD *)&v181[48];
  sub_140D20050(&v170, v184, *(_QWORD *)&v171[8], *(_QWORD *)&v171[16]);
  v11 = v170;
  v12 = *(_QWORD *)&v171[8];
  v10 = *(_QWORD *)v171;
  sub_140037470(&v154);
  sub_1401AF000(hObject);
  sub_140902BA0(&v147);
  sub_140037470(&v141);
LABEL_12:
  v170 = v11;
  *(_QWORD *)v171 = v10;
  *(_QWORD *)&v171[8] = v12;
  v13 = v180;
  if ( v12 > (__int64)v179 - v180 )
  {
    sub_141939070((unsigned int)&v179, v180, v12, 8, 48);
    v13 = v180;
    goto LABEL_14;
  }
  if ( v12 )
  {
LABEL_14:
    sub_1419234B0(*((_QWORD *)&v179 + 1) + 48 * v13, v10, 48 * v12);
    v13 = v180;
  }
  v14 = v12 + v13;
  v180 = v14;
  if ( v11 )
    sub_140001660(v10, 48 * v11, 8);
  v15 = v184;
  v167 = v184[37];
  v168 = v184[38];
LABEL_18:
  v16 = v15[5];
  v17 = v15[6];
  v18 = 0;
  v19 = &v170;
  v178 = v16;
  v153 = v17;
  while ( 1 )
  {
    if ( v18 >= 3 )
    {
      nullsub_1(v8, v14);
      v52 = (void *)sub_140001650(67, 1);
      if ( !v52 )
        sub_14196B2DB(1, 67);
      qmemcpy(v52, "auth.json ownership kept changing while synchronizing account state", 67);
      *(_QWORD *)v181 = 10;
      *(_QWORD *)&v181[8] = 67;
      *(_QWORD *)&v181[16] = v52;
      *(_QWORD *)&v181[24] = 67;
      goto LABEL_143;
    }
    sub_140D12000(v19, v16, v17);
    if ( (_DWORD)v170 == 2 )
      goto LABEL_147;
    sub_1419234B0(&v141, v19, 176);
    sub_140D12540(v19, v167, v168);
    v158 = *(_OWORD *)v171;
    v159 = *(_OWORD *)&v171[16];
    v160 = *(_OWORD *)&v171[32];
    v161 = *(_OWORD *)&v171[48];
    v162 = *(_OWORD *)&v171[64];
    v163 = *(_QWORD *)&v171[80];
    if ( v170 != -1 )
    {
      *(_QWORD *)&v181[88] = v163;
      *(_OWORD *)&v181[72] = v162;
      *(_OWORD *)&v181[56] = v161;
      *(_OWORD *)&v181[40] = v160;
      *(_OWORD *)&v181[24] = v159;
      *(_OWORD *)&v181[8] = v158;
      *(_QWORD *)v181 = v170;
LABEL_95:
      v15 = v184;
      goto LABEL_142;
    }
    v183 = v18;
    v152 = v163;
    v151 = v162;
    v150 = v161;
    v149 = v160;
    v148 = v159;
    v147 = v158;
    v20 = v144;
    sub_140944210((unsigned int)&v154, (_DWORD)v15, (unsigned int)&v147, v144, *((__int64 *)&v144 + 1));
    v21 = *(_QWORD *)&v155[8];
    v187 = *(char **)v155;
    if ( (_QWORD)v154 != -1 )
    {
      *(_OWORD *)&v181[40] = *(_OWORD *)&v155[24];
      *(_OWORD *)&v181[56] = *(_OWORD *)&v155[40];
      *(_OWORD *)&v181[72] = *(_OWORD *)&v155[56];
      *(_QWORD *)&v181[88] = *(_QWORD *)&v155[72];
      *(_OWORD *)&v181[16] = __PAIR128__(*(unsigned __int64 *)&v155[8], (unsigned __int64)v187);
      *(_QWORD *)&v181[32] = *(_QWORD *)&v155[16];
      *(_OWORD *)v181 = v154;
      if ( *((_QWORD *)&v148 + 1) != -1 && *((_QWORD *)&v148 + 1) )
        sub_140001660(v149, *((_QWORD *)&v148 + 1), 1);
      v53 = *((_QWORD *)&v147 + 1);
      v54 = v148;
      if ( (_QWORD)v148 )
      {
        v55 = *((_QWORD *)&v147 + 1);
        do
        {
          sub_1401AE3E0(v55);
          v55 += 424;
          --v54;
        }
        while ( v54 );
      }
      if ( (_QWORD)v147 )
        sub_140001660(v53, 424 * v147, 8);
      goto LABEL_95;
    }
    v182 = *((char **)&v154 + 1);
    v22 = v19;
    if ( *((_QWORD *)&v148 + 1) != -1 && *((_QWORD *)&v148 + 1) )
      sub_140001660(v149, *((_QWORD *)&v148 + 1), 1);
    v23 = *((_QWORD *)&v147 + 1);
    v24 = v148;
    if ( (_QWORD)v148 )
    {
      v25 = *((_QWORD *)&v147 + 1);
      do
      {
        sub_1401AE3E0(v25);
        v25 += 424;
        --v24;
      }
      while ( v24 );
    }
    if ( (_QWORD)v147 )
      sub_140001660(v23, 424 * v147, 8);
    sub_140CA6050(v181, v187, v21);
    v19 = v22;
    v186 = *(char **)&v181[8];
    sub_140C97180((_DWORD)v22, *(_DWORD *)&v181[8], *(_DWORD *)&v181[16], (unsigned int)aAccountCredent, 18);
    v26 = v170;
    if ( v170 != -1 )
    {
      *(_OWORD *)&v155[48] = *(_OWORD *)&v171[72];
      *(_OWORD *)&v155[32] = *(_OWORD *)&v171[56];
      *(_OWORD *)&v155[16] = *(_OWORD *)&v171[40];
      *(_OWORD *)v155 = *(_OWORD *)&v171[24];
      v154 = *(_OWORD *)&v171[8];
    }
    v27 = *(void **)v171;
    if ( *(_QWORD *)v181 )
      sub_140001660(v186, *(_QWORD *)v181, 1);
    if ( (_DWORD)v26 != -1 )
    {
      *(_OWORD *)&v181[80] = *(_OWORD *)&v155[48];
      *(_OWORD *)&v181[64] = *(_OWORD *)&v155[32];
      *(_OWORD *)&v181[48] = *(_OWORD *)&v155[16];
      *(_OWORD *)&v181[32] = *(_OWORD *)v155;
      *(_OWORD *)&v181[16] = v154;
      *(_QWORD *)v181 = v26;
      *(_QWORD *)&v181[8] = v27;
      v15 = v184;
      v56 = v182;
      if ( !v182 )
        goto LABEL_142;
LABEL_141:
      sub_140001660(v187, v56, 1);
      goto LABEL_142;
    }
    v166 = v27;
    sub_1416B18A0((unsigned int)v181, (_DWORD)v169, v156, (unsigned int)aLiveAuthLockli, 15);
    v186 = *(char **)&v181[8];
    sub_140C97180((_DWORD)v22, *(_DWORD *)&v181[8], *(_DWORD *)&v181[16], (unsigned int)&aLiveAuthLockli[15], 9);
    v28 = v170;
    if ( v170 != -1 )
    {
      *(_OWORD *)&v155[48] = *(_OWORD *)&v171[72];
      *(_OWORD *)&v155[32] = *(_OWORD *)&v171[56];
      *(_OWORD *)&v155[16] = *(_OWORD *)&v171[40];
      *(_OWORD *)v155 = *(_OWORD *)&v171[24];
      v154 = *(_OWORD *)&v171[8];
    }
    v29 = *(void **)v171;
    if ( *(_QWORD *)v181 )
      sub_140001660(v186, *(_QWORD *)v181, 1);
    if ( (_DWORD)v28 != -1 )
    {
      *(_OWORD *)&v181[80] = *(_OWORD *)&v155[48];
      *(_OWORD *)&v181[64] = *(_OWORD *)&v155[32];
      *(_OWORD *)&v181[48] = *(_OWORD *)&v155[16];
      *(_OWORD *)&v181[32] = *(_OWORD *)v155;
      *(_OWORD *)&v181[16] = v154;
      *(_QWORD *)v181 = v28;
      *(_QWORD *)&v181[8] = v29;
      v15 = v184;
      goto LABEL_136;
    }
    v185 = v29;
    v30 = v22;
    v16 = v178;
    v17 = v153;
    sub_140D12000(v30, v178, v153);
    v15 = v184;
    if ( (_DWORD)v170 == 2 )
    {
      *(_QWORD *)v181 = -1;
      goto LABEL_131;
    }
    sub_1419234B0(&v154, v19, 176);
    if ( *(_QWORD *)&v155[40] == *((_QWORD *)&v20 + 1)
      && !(unsigned int)sub_141923B40(*(_QWORD *)&v155[32], v20, *((_QWORD *)&v20 + 1)) )
    {
      break;
    }
LABEL_68:
    sub_140037800(&v154);
    v38 = sub_14143F370(&v185);
    v39 = v183;
    if ( v38 && (unsigned int)(v38 & 3) - 2 >= 2 && (v38 & 3) != 0 )
    {
      *(_QWORD *)v171 = v38 - 1;
      LOBYTE(v170) = 3;
      sub_1416EBAD0(v171);
    }
    CloseHandle(v185);
    v40 = sub_14143F370(&v166);
    if ( v40 && (unsigned int)(v40 & 3) - 2 >= 2 && (v40 & 3) != 0 )
    {
      *(_QWORD *)v171 = v40 - 1;
      LOBYTE(v170) = 3;
      sub_1416EBAD0(v171);
    }
    CloseHandle(v166);
    if ( v182 )
      sub_140001660(v187, v182, 1);
    v18 = v39 + 1;
    sub_140037800(&v141);
  }
  sub_1416B18A0((unsigned int)v181, (_DWORD)v169, v156, (unsigned int)aAccountDomainL, 20);
  v186 = *(char **)&v181[8];
  sub_140C97180((_DWORD)v19, *(_DWORD *)&v181[8], *(_DWORD *)&v181[16], (unsigned int)&aAccountDomainL[20], 13);
  v31 = v170;
  if ( v170 != -1 )
  {
    v162 = *(_OWORD *)&v171[72];
    v161 = *(_OWORD *)&v171[56];
    v160 = *(_OWORD *)&v171[40];
    v159 = *(_OWORD *)&v171[24];
    v158 = *(_OWORD *)&v171[8];
  }
  v32 = *(void **)v171;
  if ( *(_QWORD *)v181 )
    sub_140001660(v186, *(_QWORD *)v181, 1);
  if ( (_DWORD)v31 == -1 )
  {
    hObject[0] = v32;
    sub_140D12540(v19, v167, v168);
    v158 = *(_OWORD *)v171;
    v159 = *(_OWORD *)&v171[16];
    v160 = *(_OWORD *)&v171[32];
    v161 = *(_OWORD *)&v171[48];
    v162 = *(_OWORD *)&v171[64];
    v163 = *(_QWORD *)&v171[80];
    v33 = v184;
    if ( v170 == -1 )
    {
      v152 = v163;
      v151 = v162;
      v150 = v161;
      v149 = v160;
      v148 = v159;
      v147 = v158;
      sub_140944210((_DWORD)v19, (_DWORD)v184, (unsigned int)&v147, *(_DWORD *)&v155[32], *(__int64 *)&v155[40]);
      if ( v170 == -1 )
      {
        v157 = *(_QWORD *)&v171[8];
        v186 = *(char **)v171;
        if ( !(unsigned __int8)sub_140222930(*(_QWORD *)&v171[8], *(_QWORD *)&v171[16], v187, v21) )
        {
          if ( v186 )
            sub_140001660(v157, v186, 1);
          if ( *((_QWORD *)&v148 + 1) != -1 && *((_QWORD *)&v148 + 1) )
            sub_140001660(v149, *((_QWORD *)&v148 + 1), 1);
          v34 = *((_QWORD *)&v147 + 1);
          v35 = v148;
          if ( (_QWORD)v148 )
          {
            v36 = *((_QWORD *)&v147 + 1);
            do
            {
              sub_1401AE3E0(v36);
              v36 += 424;
              --v35;
            }
            while ( v35 );
          }
          if ( (_QWORD)v147 )
            sub_140001660(v34, 424 * v147, 8);
          v37 = sub_14143F370(hObject);
          if ( v37 && (unsigned int)(v37 & 3) - 2 >= 2 && (v37 & 3) != 0 )
          {
            *(_QWORD *)v171 = v37 - 1;
            LOBYTE(v170) = 3;
            sub_1416EBAD0(v171);
          }
          CloseHandle(hObject[0]);
          v15 = v184;
          goto LABEL_68;
        }
        if ( v186 )
          sub_140001660(v157, v186, 1);
        sub_140D1F100(v181, v33, &v147, &v154);
      }
      else
      {
        *(_OWORD *)&v181[40] = *(_OWORD *)&v171[32];
        *(_OWORD *)&v181[56] = *(_OWORD *)&v171[48];
        *(_OWORD *)&v181[72] = *(_OWORD *)&v171[64];
        *(_QWORD *)&v181[88] = *(_QWORD *)&v171[80];
        *(_OWORD *)&v181[8] = *(_OWORD *)v171;
        *(_OWORD *)&v181[24] = *(_OWORD *)&v171[16];
        *(_QWORD *)v181 = v170;
      }
      if ( *((_QWORD *)&v148 + 1) != -1 && *((_QWORD *)&v148 + 1) )
        sub_140001660(v149, *((_QWORD *)&v148 + 1), 1);
      v60 = *((_QWORD *)&v147 + 1);
      v61 = v148;
      if ( (_QWORD)v148 )
      {
        v62 = *((_QWORD *)&v147 + 1);
        do
        {
          sub_1401AE3E0(v62);
          v62 += 424;
          --v61;
        }
        while ( v61 );
      }
      if ( (_QWORD)v147 )
        sub_140001660(v60, 424 * v147, 8);
    }
    else
    {
      *(_QWORD *)&v181[88] = v163;
      *(_OWORD *)&v181[72] = v162;
      *(_OWORD *)&v181[56] = v161;
      *(_OWORD *)&v181[40] = v160;
      *(_OWORD *)&v181[24] = v159;
      *(_OWORD *)&v181[8] = v158;
      *(_QWORD *)v181 = v170;
    }
    v63 = sub_14143F370(hObject);
    if ( v63 && (unsigned int)(v63 & 3) - 2 >= 2 && (v63 & 3) != 0 )
    {
      *(_QWORD *)v171 = v63 - 1;
      LOBYTE(v170) = 3;
      sub_1416EBAD0(v171);
    }
    CloseHandle(hObject[0]);
    goto LABEL_130;
  }
  *(_OWORD *)&v181[80] = v162;
  *(_OWORD *)&v181[64] = v161;
  *(_OWORD *)&v181[48] = v160;
  *(_OWORD *)&v181[32] = v159;
  *(_OWORD *)&v181[16] = v158;
  *(_QWORD *)v181 = v31;
  *(_QWORD *)&v181[8] = v32;
LABEL_130:
  sub_140037800(&v154);
  v15 = v184;
LABEL_131:
  v64 = sub_14143F370(&v185);
  if ( v64 && (unsigned int)(v64 & 3) - 2 >= 2 && (v64 & 3) != 0 )
  {
    *(_QWORD *)v171 = v64 - 1;
    LOBYTE(v170) = 3;
    sub_1416EBAD0(v171);
  }
  CloseHandle(v185);
LABEL_136:
  v65 = sub_14143F370(&v166);
  if ( v65 && (unsigned int)(v65 & 3) - 2 >= 2 && (v65 & 3) != 0 )
  {
    *(_QWORD *)v171 = v65 - 1;
    LOBYTE(v170) = 3;
    sub_1416EBAD0(v171);
  }
  CloseHandle(v166);
  v56 = v182;
  if ( v182 )
    goto LABEL_141;
LABEL_142:
  sub_140037800(&v141);
  if ( *(_QWORD *)v181 == -1 )
    goto LABEL_147;
LABEL_143:
  *(_OWORD *)&v171[72] = *(_OWORD *)&v181[80];
  *(_OWORD *)&v171[56] = *(_OWORD *)&v181[64];
  *(_OWORD *)&v171[40] = *(_OWORD *)&v181[48];
  *(_OWORD *)&v171[24] = *(_OWORD *)&v181[32];
  *(_QWORD *)&v171[16] = *(_QWORD *)&v181[24];
  v170 = *(_QWORD *)v181;
  *(_OWORD *)v171 = *(_OWORD *)&v181[8];
  nullsub_1(*(_QWORD *)&v181[8], *(_QWORD *)&v181[16]);
  v66 = (char *)sub_140001650(24, 1);
  if ( !v66 )
    sub_14196B2DB(1, 24);
  qmemcpy(v66, "CURRENT_AUTH_SYNC_FAILED", 24);
  v187 = v66;
  *(_QWORD *)&v154 = v19;
  *((_QWORD *)&v154 + 1) = sub_140D76130;
  sub_1416DAFA0(&v133, &unk_141A95176, &v154);
  *(_QWORD *)&v154 = 24;
  *((_QWORD *)&v154 + 1) = v187;
  *(_QWORD *)v155 = 24;
  *(_OWORD *)&v155[8] = v133;
  *(_QWORD *)&v155[24] = v134;
  v67 = v180;
  if ( v180 == (_QWORD)v179 )
    sub_1419396D0(&v179);
  v68 = *((_QWORD *)&v179 + 1);
  v69 = 48 * v67;
  v70 = v154;
  v71 = *(_OWORD *)v155;
  *(_OWORD *)(*((_QWORD *)&v179 + 1) + v69 + 32) = *(_OWORD *)&v155[16];
  *(_OWORD *)(v68 + v69 + 16) = v71;
  *(_OWORD *)(v68 + v69) = v70;
  v180 = v67 + 1;
  sub_140CB96B0(&v170);
  v15 = v184;
LABEL_147:
  sub_1416B18A0((unsigned int)&v141, (_DWORD)v169, v156, (unsigned int)aAccountDomainL, 20);
  v187 = *((char **)&v141 + 1);
  sub_140C97180((unsigned int)&v170, DWORD2(v141), v142, (unsigned int)&aAccountDomainL[20], 13);
  v73 = v170;
  if ( v170 != -1 )
  {
    *(_OWORD *)&v155[48] = *(_OWORD *)&v171[72];
    *(_OWORD *)&v155[32] = *(_OWORD *)&v171[56];
    *(_OWORD *)&v155[16] = *(_OWORD *)&v171[40];
    *(_OWORD *)v155 = *(_OWORD *)&v171[24];
    v154 = *(_OWORD *)&v171[8];
  }
  v74 = *(_QWORD **)v171;
  v75 = v141;
  if ( (_QWORD)v141 )
    sub_140001660(v187, v141, 1);
  if ( (_DWORD)v73 != -1 )
  {
    v145 = *(_OWORD *)&v155[48];
    v144 = *(_OWORD *)&v155[32];
    v143 = *(_OWORD *)&v155[16];
    v142 = *(_OWORD *)v155;
    v141 = v154;
    goto LABEL_222;
  }
  v185 = v74;
  sub_140D12540(&v170, v167, v168);
  v73 = v170;
  v74 = *(_QWORD **)v171;
  v154 = *(_OWORD *)&v171[8];
  *(_OWORD *)v155 = *(_OWORD *)&v171[24];
  *(_OWORD *)&v155[16] = *(_OWORD *)&v171[40];
  *(_OWORD *)&v155[32] = *(_OWORD *)&v171[56];
  *(_OWORD *)&v155[48] = *(_OWORD *)&v171[72];
  if ( v170 != -1 )
  {
    v145 = *(_OWORD *)&v155[48];
    v144 = *(_OWORD *)&v155[32];
    v143 = *(_OWORD *)&v155[16];
    v142 = *(_OWORD *)v155;
    v141 = v154;
    v76 = sub_14143F370(&v185);
    if ( v76 && (unsigned int)(v76 & 3) - 2 >= 2 && (v76 & 3) != 0 )
    {
      *(_QWORD *)v171 = v76 - 1;
      LOBYTE(v170) = 3;
      sub_1416EBAD0(v171);
    }
    CloseHandle(v185);
    goto LABEL_222;
  }
  *(_QWORD *)v181 = *(_QWORD *)v171;
  *(_OWORD *)&v181[8] = v154;
  *(_OWORD *)&v181[24] = *(_OWORD *)v155;
  *(_OWORD *)&v181[40] = *(_OWORD *)&v155[16];
  *(_OWORD *)&v181[56] = *(_OWORD *)&v155[32];
  *(_OWORD *)&v181[72] = *(_OWORD *)&v155[48];
  v77 = (char *)v15[69];
  v78 = v15[70];
  sub_140D36BB0(&v127, v77);
  if ( v127 == -1 )
  {
    *(_QWORD *)&v149 = v130;
    v148 = v129;
    v147 = v128;
  }
  else
  {
    LODWORD(v149) = 3;
    *(_QWORD *)&v147 = 0;
    *((_QWORD *)&v147 + 1) = 8;
    v148 = 0;
    sub_140CB96B0(&v127);
  }
  v178 = v78;
  v186 = v77;
  v79 = *(_QWORD **)&v181[8];
  v74 = (_QWORD *)(*(_QWORD *)&v181[8] + 424LL * *(_QWORD *)&v181[16]);
  v80 = nullptr;
  v81 = nullptr;
  v169 = v74;
  while ( v79 != v74 )
  {
    v82 = v79;
    v83 = v79[14];
    if ( v83 == 2 )
    {
      v79 += 53;
      if ( *((_DWORD *)v82 + 38) == 2 )
        continue;
    }
    v182 = v81;
    v187 = v80;
    if ( (_QWORD)v148 )
    {
      v84 = v82[25];
      v85 = v82[26];
      v86 = *((_QWORD *)&v147 + 1);
      v87 = 192 * v148;
      v88 = 0;
      while ( *(_QWORD *)(v86 + v88 + 160) != v85 || (unsigned int)sub_141923B40(*(_QWORD *)(v86 + v88 + 152), v84, v85) )
      {
        v88 += 192;
        if ( v87 == v88 )
          goto LABEL_172;
      }
      v15 = v184;
      v80 = v187;
      v74 = v169;
      v81 = v182;
    }
    else
    {
LABEL_172:
      v89 = 16LL * v82[12] + 88;
      if ( !(v82[10] | v82[12]) )
        v89 = 408;
      v90 = *(_QWORD *)((char *)v82 + v89);
      sub_1416DB410(&v154, v82 + 24);
      v15 = v184;
      v80 = v187;
      v91 = v82[14];
      v92 = v183;
      v93 = v167;
      v94 = v168;
      v95 = (char)v182;
      if ( v91 != 2 )
      {
        v2 = v82[17];
        v92 = *((_DWORD *)v82 + 36);
        v4 = (__m128)(unsigned __int64)v82[16];
        v93 = v82[15];
      }
      v96 = v82[19];
      if ( v96 != 2 )
      {
        v3 = v82[22];
        LODWORD(v156) = *((_DWORD *)v82 + 46);
        v5 = (__m128)(unsigned __int64)v82[21];
        v94 = v82[20];
      }
      v174 = *(_QWORD *)v155;
      v173 = v154;
      v170 = 0;
      *(_QWORD *)&v171[8] = v91;
      v167 = v93;
      *(_QWORD *)&v171[16] = v93;
      _mm_storel_ps((double *)&v171[24], v4);
      *(_QWORD *)&v171[32] = v2;
      LODWORD(v183) = v92;
      *(_DWORD *)&v171[40] = v92;
      *(_QWORD *)&v171[48] = v96;
      v168 = v94;
      *(_QWORD *)&v171[56] = v94;
      _mm_storel_ps((double *)&v171[64], v5);
      *(_QWORD *)&v171[72] = v3;
      *(_DWORD *)&v171[80] = v156;
      v172 = 2;
      v175 = 0;
      v176 = v90;
      v177 = 1;
      v188 = 1;
      v97 = sub_1416B2E50();
      v74 = v169;
      *(_QWORD *)&v141 = __PAIR64__(v98, v97);
      v188 = 1;
      sub_1416B2E00(&v154, &v141, 3577643008LL, 27111902);
      if ( (_BYTE)v154 )
        v99 = 0;
      else
        v99 = *((_QWORD *)&v154 + 1);
      v188 = 0;
      v100 = sub_140D36570(&v147, &v170, v99);
      LOBYTE(v100) = (v95 | v100) & 1;
      v83 = v82[14];
      v81 = (char *)v100;
    }
    v79 = v82 + 53;
    v82[14] = 2;
    v101 = v82[19];
    v82[19] = 2;
    LOBYTE(v80) = ((v83 ^ 2 | v101 ^ 2) != 0) | (unsigned __int8)v80;
  }
  if ( ((unsigned __int8)v81 & 1) == 0 )
    goto LABEL_190;
  sub_140D36EF0(&v141, v186, v178, &v147);
  if ( (_DWORD)v141 == -1 )
    goto LABEL_190;
  *(_OWORD *)&v155[64] = v146;
  *(_OWORD *)&v155[48] = v145;
  *(_OWORD *)&v155[32] = v144;
  *(_OWORD *)&v155[16] = v143;
  *(_OWORD *)v155 = v142;
  v154 = v141;
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    hObject[0] = &v154;
    hObject[1] = sub_140D76130;
    *(_QWORD *)&v171[40] = 2;
    *(_QWORD *)&v171[48] = aCodexmateLibCo_44;
    *(_QWORD *)&v171[56] = 31;
    *(_QWORD *)&v171[72] = &unk_141A94BB1;
    *(_QWORD *)&v171[80] = hObject;
    v170 = 0;
    *(_QWORD *)v171 = aCodexmateLibCo_44;
    *(_QWORD *)&v171[8] = 31;
    *(_QWORD *)&v171[16] = 0;
    *(_QWORD *)&v171[24] = aSrcCoreReposit;
    *(_QWORD *)&v171[32] = 22;
    *(_QWORD *)&v171[64] = 0x9F300000001LL;
    sub_141503E20(&v165, &v170);
  }
  v74 = *((_QWORD **)&v154 + 1);
  v73 = v154;
  v158 = *(_OWORD *)v155;
  v159 = *(_OWORD *)&v155[16];
  v160 = *(_OWORD *)&v155[32];
  v161 = *(_OWORD *)&v155[48];
  v162 = *(_OWORD *)&v155[64];
  if ( (_QWORD)v154 == -1 )
  {
LABEL_190:
    v73 = -1;
    if ( ((unsigned __int8)v80 & 1) != 0 )
    {
      LODWORD(v154) = sub_1416B2E50();
      DWORD1(v154) = v103;
      sub_1416B2E00(&v170, &v154, 3577643008LL, 27111902);
      if ( (_BYTE)v170 )
        v104 = 0;
      else
        v104 = *(_QWORD *)v171;
      *(_QWORD *)&v181[72] = v104;
      sub_140D02DF0(&v170, v15, v181, 0);
      v73 = v170;
      if ( v170 == -1 )
      {
        v73 = -1;
        v102 = v148;
        if ( !(_QWORD)v148 )
          goto LABEL_207;
        goto LABEL_200;
      }
      v74 = *(_QWORD **)v171;
      v141 = *(_OWORD *)&v171[8];
      v142 = *(_OWORD *)&v171[24];
      v143 = *(_OWORD *)&v171[40];
      v144 = *(_OWORD *)&v171[56];
      v145 = *(_OWORD *)&v171[72];
      v102 = v148;
      if ( (_QWORD)v148 )
        goto LABEL_200;
    }
    else
    {
      v102 = v148;
      if ( (_QWORD)v148 )
        goto LABEL_200;
    }
  }
  else
  {
    v145 = v162;
    v144 = v161;
    v143 = v160;
    v142 = v159;
    v141 = v158;
    v102 = v148;
    if ( !(_QWORD)v148 )
      goto LABEL_207;
LABEL_200:
    v105 = (_QWORD *)(*((_QWORD *)&v147 + 1) + 152LL);
    do
    {
      v106 = *(v105 - 1);
      if ( v106 )
        sub_140001660(*v105, v106, 1);
      if ( *((_DWORD *)v105 - 14) != 2 )
      {
        v107 = *(v105 - 5);
        if ( v107 > 0 )
          sub_140001660(*(v105 - 4), v107, 1);
      }
      v105 += 24;
      --v102;
    }
    while ( v102 );
  }
LABEL_207:
  if ( (_QWORD)v147 )
    sub_140001660(*((_QWORD *)&v147 + 1), 192 * v147, 8);
  if ( *(_QWORD *)&v181[24] != -1 && *(_QWORD *)&v181[24] )
    sub_140001660(*(_QWORD *)&v181[32], *(_QWORD *)&v181[24], 1);
  v108 = *(_QWORD *)&v181[8];
  v109 = *(_QWORD *)&v181[16];
  if ( *(_QWORD *)&v181[16] )
  {
    v110 = *(_QWORD *)&v181[8];
    do
    {
      sub_1401AE3E0(v110);
      v110 += 424;
      --v109;
    }
    while ( v109 );
  }
  if ( *(_QWORD *)v181 )
    sub_140001660(v108, 424LL * *(_QWORD *)v181, 8);
  v111 = sub_14143F370(&v185);
  if ( v111 && (unsigned int)(v111 & 3) - 2 >= 2 && (v111 & 3) != 0 )
  {
    *(_QWORD *)v171 = v111 - 1;
    LOBYTE(v170) = 3;
    sub_1416EBAD0(v171);
  }
  CloseHandle(v185);
  if ( v73 != -1 )
  {
LABEL_222:
    v170 = v73;
    *(_QWORD *)v171 = v74;
    *(_OWORD *)&v171[8] = v141;
    *(_OWORD *)&v171[24] = v142;
    *(_OWORD *)&v171[40] = v143;
    *(_OWORD *)&v171[56] = v144;
    *(_OWORD *)&v171[72] = v145;
    nullsub_1(v72, v75);
    v112 = (char *)sub_140001650(29, 1);
    if ( !v112 )
      sub_14196B2DB(1, 29);
    v187 = v112;
    qmemcpy(v112, "LEGACY_QUOTA_MIGRATION_FAILED", 29);
    *(_QWORD *)&v154 = &v170;
    *((_QWORD *)&v154 + 1) = sub_140D76130;
    sub_1416DAFA0(&v131, &unk_141A951D1, &v154);
    *(_QWORD *)&v154 = 29;
    *((_QWORD *)&v154 + 1) = v187;
    *(_QWORD *)v155 = 29;
    *(_OWORD *)&v155[8] = v131;
    *(_QWORD *)&v155[24] = v132;
    v113 = v180;
    if ( v180 == (_QWORD)v179 )
      sub_1419396D0(&v179);
    v114 = *((_QWORD *)&v179 + 1);
    v115 = 48 * v113;
    v116 = v154;
    v117 = *(_OWORD *)v155;
    *(_OWORD *)(*((_QWORD *)&v179 + 1) + v115 + 32) = *(_OWORD *)&v155[16];
    *(_OWORD *)(v114 + v115 + 16) = v117;
    *(_OWORD *)(v114 + v115) = v116;
    v180 = v113 + 1;
    sub_140CB96B0(&v170);
  }
  result = v140;
  *(_QWORD *)(v140 + 24) = v180;
  *(_OWORD *)(result + 8) = v179;
  *(_QWORD *)result = -1;
  return result;
}
