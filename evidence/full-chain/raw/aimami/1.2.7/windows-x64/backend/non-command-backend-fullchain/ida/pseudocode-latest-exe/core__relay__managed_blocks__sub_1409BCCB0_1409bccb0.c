// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1409bccb0 | successor of pre-update 0x140f296a0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_1409BCCB0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int128 v7; // kr00_16
  __int64 v8; // r8
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int64 v25; // rbx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _OWORD *v30; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rdi
  _BYTE *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  char *v53; // rbx
  __int64 v54; // r15
  __int128 *v55; // r13
  __int64 v56; // rcx
  char *v57; // rax
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // rbx
  _QWORD *v65; // r15
  __int64 v66; // rdx
  __int128 *v67; // r14
  unsigned __int64 v68; // rdx
  __int64 v69; // r15
  unsigned __int64 v70; // rbx
  __int64 v71; // r13
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // r15
  __int64 v75; // r12
  unsigned __int64 v76; // rdi
  _QWORD *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // r13
  __int64 v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rbx
  _QWORD *v87; // r14
  __int64 v88; // rax
  __int64 v89; // rbx
  char v90; // al
  __int64 v91; // rdx
  __int64 v92; // r14
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int128 *v100; // rax
  __int64 v101; // rdx
  __int128 v102; // xmm0
  _BYTE v103[104]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v104[152]; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v105; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v106; // [rsp+158h] [rbp+D8h] BYREF
  _BYTE v107[80]; // [rsp+168h] [rbp+E8h]
  _BYTE v108[144]; // [rsp+1B8h] [rbp+138h] BYREF
  __int64 v109; // [rsp+248h] [rbp+1C8h]
  __int128 v110; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v111; // [rsp+260h] [rbp+1E0h]
  __int128 v112; // [rsp+270h] [rbp+1F0h]
  __int128 v113; // [rsp+280h] [rbp+200h]
  __int128 v114; // [rsp+290h] [rbp+210h]
  __int128 v115; // [rsp+2A0h] [rbp+220h]
  __int64 v116; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v117; // [rsp+2C0h] [rbp+240h]
  unsigned __int64 v118; // [rsp+2C8h] [rbp+248h]
  char *v119; // [rsp+2D0h] [rbp+250h]
  __int64 v120; // [rsp+2D8h] [rbp+258h]
  __int64 v121; // [rsp+2E0h] [rbp+260h]
  char *v122; // [rsp+2E8h] [rbp+268h]
  char *v123; // [rsp+2F0h] [rbp+270h]
  __int64 v124; // [rsp+2F8h] [rbp+278h]
  _BYTE v125[48]; // [rsp+300h] [rbp+280h] BYREF
  __int128 v126; // [rsp+330h] [rbp+2B0h]
  __int128 v127; // [rsp+340h] [rbp+2C0h]
  __int128 v128; // [rsp+350h] [rbp+2D0h]
  __int128 v129; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v130; // [rsp+370h] [rbp+2F0h]
  __int128 v131; // [rsp+380h] [rbp+300h]
  __int128 v132; // [rsp+390h] [rbp+310h]
  __int128 v133; // [rsp+3A0h] [rbp+320h]
  __int128 v134; // [rsp+3B0h] [rbp+330h]
  __int64 v135; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v136; // [rsp+3D0h] [rbp+350h]
  __int64 v137; // [rsp+3D8h] [rbp+358h]
  __int64 v138; // [rsp+3E0h] [rbp+360h]
  __int64 v139; // [rsp+3E8h] [rbp+368h]
  __int64 v140; // [rsp+3F0h] [rbp+370h]
  char v141; // [rsp+3FFh] [rbp+37Fh]
  __int64 v142; // [rsp+400h] [rbp+380h]

  v142 = -2;
  v4 = a2[9];
  v5 = a2[10];
  sub_140999120(&v105, v4, v5);
  v6 = v105;
  v7 = v106;
  v8 = *(_QWORD *)v107;
  if ( v105 != -1 )
  {
    v9 = *(_OWORD *)&v107[8];
    v10 = *(_OWORD *)&v107[24];
    v11 = *(_OWORD *)&v107[40];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v107[56];
    *(_OWORD *)(a1 + 64) = v11;
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 24) = v8;
    *(_QWORD *)a1 = v6;
    return a1;
  }
  v121 = v4;
  v120 = v5;
  v124 = *((_QWORD *)&v106 + 1);
  v138 = v106;
  sub_1408C72F0(&v116, *((_QWORD *)&v106 + 1), *(_QWORD *)v107);
  v12 = v117;
  v13 = v118;
  sub_1411F7620(v103, v117, v118);
  v14 = *(_QWORD *)v103;
  v129 = *(_OWORD *)&v103[8];
  v130 = *(_OWORD *)&v103[24];
  v131 = *(_OWORD *)&v103[40];
  v132 = *(_OWORD *)&v103[56];
  v133 = *(_OWORD *)&v103[72];
  v134 = *(_OWORD *)&v103[88];
  if ( *(_QWORD *)v103 == 2 )
  {
    v112 = v131;
    v113 = v132;
    v114 = v133;
    *(_OWORD *)v125 = v129;
    *(_OWORD *)&v125[16] = v130;
    *(_OWORD *)&v125[32] = v131;
    v126 = v132;
    v127 = v133;
    v128 = v134;
    if ( (_QWORD)v129 == 2 )
      goto LABEL_23;
  }
  else
  {
    sub_1419234B0(v108, v104, 144);
    v110 = v129;
    v105 = v14;
    v106 = v129;
    *(_OWORD *)v107 = v130;
    *(_OWORD *)&v107[16] = v131;
    *(_OWORD *)&v107[32] = v132;
    *(_OWORD *)&v107[48] = v133;
    *(_OWORD *)&v107[64] = v134;
    sub_1401D25B0((__int128 *)v103, &v105);
    if ( *(_DWORD *)v103 == 2 )
    {
      *(_OWORD *)&v125[24] = *(_OWORD *)&v103[24];
      *(_OWORD *)&v125[8] = *(_OWORD *)&v103[8];
      *(_QWORD *)v125 = 2;
      goto LABEL_23;
    }
    v128 = *(_OWORD *)&v103[80];
    v127 = *(_OWORD *)&v103[64];
    v126 = *(_OWORD *)&v103[48];
    *(_OWORD *)&v125[32] = *(_OWORD *)&v103[32];
    *(_OWORD *)&v125[16] = *(_OWORD *)&v103[16];
    *(_OWORD *)v125 = *(_OWORD *)v103;
    if ( *(_QWORD *)v103 == 2 )
    {
LABEL_23:
      sub_14084C210(&v125[8]);
      v26 = sub_1407C8880(v121, v120, v12, v13);
      v25 = v138;
      if ( (v26 & 1) != 0 )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v27;
      }
      else
      {
        sub_1407B9160(v27);
        nullsub_1(v29, v28);
        v30 = (_OWORD *)sub_140001650(48, 1);
        v25 = v138;
        if ( !v30 )
          sub_14196B2DB(1, 48);
        v30[2] = xmmword_141A61160;
        v30[1] = xmmword_141A61150;
        *v30 = xmmword_141A61140;
        *(_QWORD *)(a1 + 8) = 48;
        *(_QWORD *)(a1 + 16) = v30;
        *(_QWORD *)(a1 + 24) = 48;
        *(_QWORD *)a1 = -1;
      }
      goto LABEL_27;
    }
  }
  if ( *(_QWORD *)&v125[24] )
    sub_140001660(*(_QWORD *)&v125[32], *(_QWORD *)&v125[24], 1);
  if ( *((_QWORD *)&v127 + 1) != -1 && *((_QWORD *)&v127 + 1) )
    sub_140001660(v128, *((_QWORD *)&v127 + 1), 1);
  v15 = *((_QWORD *)&v126 + 1);
  v16 = v127;
  if ( (_QWORD)v127 )
  {
    v17 = (_QWORD *)(*((_QWORD *)&v126 + 1) + 8LL);
    do
    {
      v18 = *(v17 - 1);
      if ( v18 )
        sub_140001660(*v17, v18, 1);
      v17 += 3;
      --v16;
    }
    while ( v16 );
  }
  if ( (_QWORD)v126 )
    sub_140001660(v15, 24 * v126, 8);
  sub_14099F2F0((__int64)&v105, a2);
  v19 = v105;
  v21 = *((_QWORD *)&v106 + 1);
  v20 = v106;
  if ( v105 == -1 )
  {
    if ( (unsigned __int64)(v106 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(*((_QWORD *)&v106 + 1), v106, 1);
    nullsub_1(v21, v20);
    v140 = 1;
    v32 = sub_140001650(226, 1);
    if ( !v32 )
      sub_14196B2DB(1, 226);
    v33 = v32;
    sub_1419234B0(v32, aRebuiltByAimam, 226);
    v135 = 226;
    v136 = v33;
    v137 = 226;
    *(_QWORD *)&v110 = 0;
    *((_QWORD *)&v110 + 1) = 8;
    *(_QWORD *)&v111 = 0;
    *(_QWORD *)&v129 = 0;
    *((_QWORD *)&v129 + 1) = 1;
    *(_QWORD *)&v130 = 0;
    v125[0] = 2;
    v105 = 0;
    *(_QWORD *)&v106 = v13;
    *((_QWORD *)&v106 + 1) = v12;
    *(_OWORD *)v107 = v13;
    *(_QWORD *)&v107[16] = v13;
    *(_QWORD *)&v107[24] = 0xA0000000ALL;
    v107[32] = 1;
    *(_WORD *)&v107[40] = 0;
    v34 = 0;
    while ( 1 )
    {
      v35 = *((_QWORD *)&v106 + 1);
      v141 = 1;
      sub_140A09020(v103, (char *)&v106 + 8);
      if ( *(_DWORD *)v103 == 1 )
        break;
      if ( v107[41] )
        goto LABEL_65;
      v107[41] = 1;
      v37 = v106 - v105;
      if ( (v107[40] | ((_QWORD)v106 != v105)) != 1 )
        goto LABEL_65;
      v38 = *((_QWORD *)&v106 + 1) + v105;
      if ( v37 )
        goto LABEL_42;
LABEL_48:
      v39 = (_BYTE *)sub_1408FEA60(v38, v37);
      v41 = v40;
      if ( ((unsigned __int8)toml_lexical_state_line_is_structural(v125, v38, v37) & (v40 != 0)) == 1
        && *v39 == 91
        && v39[v41 - 1] == 93 )
      {
        if ( v41 == 1 || (char)v39[1] <= -65 )
        {
          v141 = 1;
          sub_14196B4F0((_DWORD)v39, v41, 1, v41 - 1, (__int64)&off_141A496C8);
        }
        sub_1408FEA60(v140, v34);
        if ( v42 )
        {
          v139 = v129;
          *(_QWORD *)&v129 = 0;
          *((_QWORD *)&v129 + 1) = 1;
          *(_QWORD *)&v130 = 0;
          v43 = v111;
          if ( (_QWORD)v111 == (_QWORD)v110 )
            sub_141939F90(&v110);
          v44 = *((_QWORD *)&v110 + 1);
          v45 = 3 * v43;
          *(_QWORD *)(*((_QWORD *)&v110 + 1) + 8 * v45) = v139;
          *(_QWORD *)(v44 + 8 * v45 + 8) = v140;
          *(_QWORD *)(v44 + 8 * v45 + 16) = v34;
          *(_QWORD *)&v111 = v43 + 1;
          v140 = 1;
          v34 = 0;
        }
      }
      v46 = v129;
      if ( v37 > (__int64)v129 - v34 )
      {
        v141 = 1;
        sub_141939070((unsigned int)&v129, v34, v37, 1, 1);
        v140 = *((_QWORD *)&v129 + 1);
        v34 = v130;
LABEL_59:
        sub_1419234B0(v34 + v140, v38, v37);
        v46 = v129;
        goto LABEL_60;
      }
      if ( v37 )
        goto LABEL_59;
LABEL_60:
      v47 = v37 + v34;
      *(_QWORD *)&v130 = v47;
      if ( v46 == v47 )
      {
        v141 = 1;
        sub_141939070((unsigned int)&v129, v46, 1, 1, 1);
      }
      v140 = *((_QWORD *)&v129 + 1);
      *(_BYTE *)(*((_QWORD *)&v129 + 1) + v47) = 10;
      v34 = v47 + 1;
      *(_QWORD *)&v130 = v34;
      if ( (v107[41] & 1) != 0 )
      {
LABEL_65:
        sub_1408FEA60(v140, v34);
        if ( v48 )
        {
          v139 = v129;
          v49 = v111;
          if ( (_QWORD)v111 == (_QWORD)v110 )
            sub_141939F90(&v110);
          v50 = *((_QWORD *)&v110 + 1);
          v51 = 3 * v49;
          *(_QWORD *)(*((_QWORD *)&v110 + 1) + 8 * v51) = v139;
          *(_QWORD *)(v50 + 8 * v51 + 8) = v140;
          *(_QWORD *)(v50 + 8 * v51 + 16) = v34;
          v52 = v49 + 1;
          v53 = *((char **)&v110 + 1);
          v54 = v110;
        }
        else
        {
          v53 = *((char **)&v110 + 1);
          v54 = v110;
          v52 = v111;
          if ( (_QWORD)v129 )
            sub_140001660(v140, v129, 1);
        }
        v109 = v54;
        v119 = &v53[24 * v52];
        v122 = v53;
        if ( !v52 )
        {
LABEL_107:
          v74 = v120;
          v75 = v121;
          if ( v119 != v53 )
          {
            v76 = (v119 - v53) / 0x18uLL;
            v77 = v53 + 8;
            do
            {
              v78 = *(v77 - 1);
              if ( v78 )
                sub_140001660(*v77, v78, 1);
              v77 += 3;
              --v76;
            }
            while ( v76 );
          }
          if ( v109 )
            sub_140001660(v122, 24 * v109, 8);
          v79 = v136;
          v80 = v137;
          sub_1411F7620(v103, v136, v137);
          v82 = *(_QWORD *)v103;
          v129 = *(_OWORD *)&v103[8];
          v130 = *(_OWORD *)&v103[24];
          v131 = *(_OWORD *)&v103[40];
          v132 = *(_OWORD *)&v103[56];
          v133 = *(_OWORD *)&v103[72];
          v134 = *(_OWORD *)&v103[88];
          if ( *(_QWORD *)v103 == 2 )
          {
            v112 = v131;
            v113 = v132;
            v114 = v133;
            *(_OWORD *)v125 = v129;
            *(_OWORD *)&v125[16] = v130;
            *(_OWORD *)&v125[32] = v131;
            v126 = v132;
            v127 = v133;
            v128 = v134;
          }
          else
          {
            sub_1419234B0(v108, v104, 144);
            v110 = v129;
            v105 = v82;
            v106 = v129;
            *(_OWORD *)v107 = v130;
            *(_OWORD *)&v107[16] = v131;
            *(_OWORD *)&v107[32] = v132;
            *(_OWORD *)&v107[48] = v133;
            *(_OWORD *)&v107[64] = v134;
            sub_1401D25B0((__int128 *)v103, &v105);
            if ( *(_DWORD *)v103 == 2 )
            {
              *(_OWORD *)&v125[24] = *(_OWORD *)&v103[24];
              *(_OWORD *)&v125[8] = *(_OWORD *)&v103[8];
              *(_QWORD *)v125 = 2;
            }
            else
            {
              v128 = *(_OWORD *)&v103[80];
              v127 = *(_OWORD *)&v103[64];
              v126 = *(_OWORD *)&v103[48];
              *(_OWORD *)&v125[32] = *(_OWORD *)&v103[32];
              *(_OWORD *)&v125[16] = *(_OWORD *)&v103[16];
              *(_OWORD *)v125 = *(_OWORD *)v103;
            }
          }
          if ( *(_QWORD *)v125 == 2 )
          {
            sub_14084C210(&v125[8]);
            v83 = v135;
          }
          else
          {
            if ( *(_QWORD *)&v125[24] )
              sub_140001660(*(_QWORD *)&v125[32], *(_QWORD *)&v125[24], 1);
            v84 = *((_QWORD *)&v127 + 1);
            if ( *((_QWORD *)&v127 + 1) != -1 && *((_QWORD *)&v127 + 1) )
              sub_140001660(v128, *((_QWORD *)&v127 + 1), 1);
            v85 = *((_QWORD *)&v126 + 1);
            v86 = v127;
            if ( (_QWORD)v127 )
            {
              v87 = (_QWORD *)(*((_QWORD *)&v126 + 1) + 8LL);
              do
              {
                v84 = *(v87 - 1);
                if ( v84 )
                  sub_140001660(*v87, v84, 1);
                v87 += 3;
                --v86;
              }
              while ( v86 );
            }
            if ( (_QWORD)v126 )
              sub_140001660(v85, 24 * v126, 8);
            nullsub_1(v81, v84);
            v80 = 226;
            v88 = sub_140001650(226, 1);
            if ( !v88 )
              sub_14196B2DB(1, 226);
            v89 = v88;
            sub_1419234B0(v88, aRebuiltByAimam, 226);
            if ( v135 )
              sub_140001660(v79, v135, 1);
            v79 = v89;
            v83 = 226;
          }
          v140 = v83;
          v139 = v79;
          v90 = sub_1407C8880(v75, v74, v79, v80);
          v25 = v138;
          if ( (v90 & 1) != 0 )
          {
            *(_QWORD *)a1 = 2;
            *(_QWORD *)(a1 + 8) = v91;
            if ( v140 )
              sub_140001660(v139, v140, 1);
          }
          else
          {
            sub_1407B9160(v91);
            v92 = v139;
            v93 = sub_1408FEA60(v139, v80);
            v95 = v94;
            v96 = sub_1408FEA60(aRebuiltByAimam, 226);
            if ( v95 == v97 && !(unsigned int)sub_141923B40(v93, v96, v95) )
            {
              nullsub_1(v98, v97);
              v99 = 75;
              v100 = (__int128 *)sub_140001650(75, 1);
              v25 = v138;
              v101 = v140;
              if ( !v100 )
                sub_14196B2DB(1, 75);
              *(__int128 *)((char *)v100 + 59) = *(__int128 *)((char *)&xmmword_141A6120D + 11);
              v100[3] = xmmword_141A6120D;
              v100[2] = xmmword_141A611FD;
              v100[1] = xmmword_141A611ED;
              v102 = xmmword_141A611DD;
            }
            else
            {
              nullsub_1(v98, v97);
              v99 = 109;
              v100 = (__int128 *)sub_140001650(109, 1);
              v25 = v138;
              v101 = v140;
              if ( !v100 )
                sub_14196B2DB(1, 109);
              *(__int128 *)((char *)v100 + 93) = *(__int128 *)((char *)&xmmword_141A611C0 + 13);
              v100[5] = xmmword_141A611C0;
              v100[4] = xmmword_141A611B0;
              v100[3] = xmmword_141A611A0;
              v100[2] = xmmword_141A61190;
              v100[1] = xmmword_141A61180;
              v102 = xmmword_141A61170;
            }
            *v100 = v102;
            *(_QWORD *)(a1 + 8) = v99;
            *(_QWORD *)(a1 + 16) = v100;
            *(_QWORD *)(a1 + 24) = v99;
            *(_QWORD *)a1 = -1;
            if ( v101 )
              sub_140001660(v92, v101, 1);
          }
          goto LABEL_27;
        }
        v55 = (__int128 *)v103;
        v53 = v122;
        while ( 2 )
        {
          v57 = v53;
          v53 += 24;
          v58 = *(_QWORD *)v57;
          if ( *(_QWORD *)v57 == -1 )
            goto LABEL_107;
          v59 = *((_QWORD *)v57 + 1);
          v60 = *((_QWORD *)v57 + 2);
          sub_1408FEA60(v59, v60);
          if ( !v61 )
          {
            v56 = v59;
            if ( !v58 )
              goto LABEL_75;
            goto LABEL_74;
          }
          v139 = v58;
          v123 = v53;
          v140 = v59;
          sub_1411F7620(v55, v59, v60);
          v62 = *(_QWORD *)v103;
          v129 = *(_OWORD *)&v103[8];
          v130 = *(_OWORD *)&v103[24];
          v131 = *(_OWORD *)&v103[40];
          v132 = *(_OWORD *)&v103[56];
          v133 = *(_OWORD *)&v103[72];
          v134 = *(_OWORD *)&v103[88];
          if ( *(_QWORD *)v103 == 2 )
          {
            v112 = v131;
            v113 = v132;
            v114 = v133;
            *(_OWORD *)v125 = v129;
            *(_OWORD *)&v125[16] = v130;
            *(_OWORD *)&v125[32] = v131;
            v126 = v132;
            v127 = v133;
            v128 = v134;
            if ( (_QWORD)v129 == 2 )
              goto LABEL_98;
LABEL_83:
            v58 = v139;
            if ( *(_QWORD *)&v125[24] )
              sub_140001660(*(_QWORD *)&v125[32], *(_QWORD *)&v125[24], 1);
            if ( *((_QWORD *)&v127 + 1) != -1 && *((_QWORD *)&v127 + 1) )
              sub_140001660(v128, *((_QWORD *)&v127 + 1), 1);
            v63 = *((_QWORD *)&v126 + 1);
            v64 = v127;
            if ( (_QWORD)v127 )
            {
              v65 = (_QWORD *)(*((_QWORD *)&v126 + 1) + 8LL);
              do
              {
                v66 = *(v65 - 1);
                if ( v66 )
                  sub_140001660(*v65, v66, 1);
                v65 += 3;
                --v64;
              }
              while ( v64 );
            }
            if ( (_QWORD)v126 )
              sub_140001660(v63, 24 * v126, 8);
            v53 = v123;
            v56 = v140;
            if ( !v58 )
            {
LABEL_75:
              if ( v53 == v119 )
                goto LABEL_107;
              continue;
            }
LABEL_74:
            sub_140001660(v56, v58, 1);
            goto LABEL_75;
          }
          break;
        }
        sub_1419234B0(v108, v104, 144);
        v110 = v129;
        v115 = v134;
        v114 = v133;
        v113 = v132;
        v112 = v131;
        v111 = v130;
        v105 = v62;
        *(_OWORD *)&v107[64] = v134;
        *(_OWORD *)&v107[48] = v133;
        *(_OWORD *)&v107[32] = v132;
        *(_OWORD *)&v107[16] = v131;
        *(_OWORD *)v107 = v130;
        v106 = v129;
        sub_1401D25B0(v55, &v105);
        if ( *(_DWORD *)v103 == 2 )
        {
          *(_OWORD *)&v125[24] = *(_OWORD *)&v103[24];
          *(_OWORD *)&v125[8] = *(_OWORD *)&v103[8];
          *(_QWORD *)v125 = 2;
          goto LABEL_98;
        }
        v128 = *(_OWORD *)&v103[80];
        v127 = *(_OWORD *)&v103[64];
        v126 = *(_OWORD *)&v103[48];
        *(_OWORD *)&v125[32] = *(_OWORD *)&v103[32];
        *(_OWORD *)&v125[16] = *(_OWORD *)&v103[16];
        *(_OWORD *)v125 = *(_OWORD *)v103;
        if ( *(_QWORD *)v103 != 2 )
          goto LABEL_83;
LABEL_98:
        sub_14084C210(&v125[8]);
        v67 = v55;
        v69 = sub_1408FEE40(v140, v60);
        v70 = v68;
        v71 = v135;
        v72 = v137;
        if ( v68 > v135 - v137 )
        {
          sub_141939070((unsigned int)&v135, v137, v68, 1, 1);
          v71 = v135;
          v72 = v137;
LABEL_100:
          sub_1419234B0(v72 + v136, v69, v70);
        }
        else if ( v68 )
        {
          goto LABEL_100;
        }
        v73 = v70 + v72;
        v137 = v73;
        if ( (unsigned __int64)(v71 - v73) <= 1 )
        {
          sub_141939070((unsigned int)&v135, v73, 2, 1, 1);
          v55 = v67;
          v73 = v137;
        }
        else
        {
          v55 = v67;
        }
        *(_WORD *)(v136 + v73) = 2570;
        v137 = v73 + 2;
        v53 = v123;
        v58 = v139;
        v56 = v140;
        if ( !v139 )
          goto LABEL_75;
        goto LABEL_74;
      }
    }
    v36 = v105;
    v105 = *(_QWORD *)&v103[16];
    v37 = *(_QWORD *)&v103[16] - v36;
    v38 = v36 + v35;
    if ( *(_QWORD *)&v103[16] == v36 )
      goto LABEL_48;
LABEL_42:
    if ( *(_BYTE *)(v38 + v37 - 1) == 10 )
    {
      if ( v37 == 1 )
      {
        v37 = 0;
      }
      else if ( *(_BYTE *)(v38 + v37 - 2) == 13 )
      {
        v37 -= 2LL;
      }
      else
      {
        --v37;
      }
    }
    goto LABEL_48;
  }
  v22 = *(_OWORD *)&v107[16];
  v23 = *(_OWORD *)&v107[32];
  v24 = *(_OWORD *)&v107[48];
  *(_OWORD *)v103 = *(_OWORD *)v107;
  *(_QWORD *)(a1 + 88) = *(_QWORD *)&v107[64];
  *(_OWORD *)(a1 + 72) = v24;
  *(_OWORD *)(a1 + 56) = v23;
  *(_OWORD *)(a1 + 40) = v22;
  *(_QWORD *)(a1 + 8) = v20;
  *(_QWORD *)(a1 + 16) = v21;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)v103;
  *(_QWORD *)a1 = v19;
  v25 = v138;
LABEL_27:
  if ( v116 )
    sub_140001660(v117, v116, 1);
  if ( v25 )
    sub_140001660(v124, v25, 1);
  return a1;
}
