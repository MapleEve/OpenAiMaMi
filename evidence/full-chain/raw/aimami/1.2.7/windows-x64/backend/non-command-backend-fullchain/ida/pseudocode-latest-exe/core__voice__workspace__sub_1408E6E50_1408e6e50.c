// win 1.2.7 latest-exe | module src/core/voice/workspace.rs | ea 0x1408e6e50 | successor of pre-update 0x141039c70 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1408E6E50(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v5; // kr00_16
  char v6; // dl
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // r15
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  char *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  _QWORD *v26; // r12
  _QWORD *v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // r13
  _QWORD *v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // rdx
  _QWORD *v42; // rbx
  __int64 v43; // r12
  __int64 v44; // r15
  __int64 v45; // r15
  __int64 v46; // r14
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // rdx
  _QWORD *v52; // r13
  __int64 v53; // rbx
  __int64 v54; // r14
  void *v55; // rax
  void *v56; // rax
  __int64 v57; // r12
  __int64 v58; // r15
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  char v62; // al
  _QWORD *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v71; // rdx
  __int64 v72; // r13
  __int64 v73; // r14
  __int64 v74; // rbx
  __int64 v75; // r12
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // r13
  __int64 v80; // r15
  __int64 v81; // rax
  __int64 v82; // r14
  char v83; // al
  __int64 v84; // r14
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // r14
  __int64 v90; // rdx
  __int64 v91; // r14
  __int64 v92; // rdx
  __int64 v93; // rax
  int v94; // edx
  __int64 v95; // rax
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm2
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  PVOID v102; // rcx
  char v103; // al
  __int64 v104; // rdx
  _BYTE v105[160]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v106; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v107; // [rsp+D8h] [rbp+58h]
  __int128 v108; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v109; // [rsp+F8h] [rbp+78h]
  __int128 v110; // [rsp+108h] [rbp+88h]
  __m256i v111; // [rsp+118h] [rbp+98h]
  __int128 v112; // [rsp+138h] [rbp+B8h]
  __int128 v113; // [rsp+148h] [rbp+C8h]
  __int64 v114; // [rsp+158h] [rbp+D8h]
  _QWORD v115[2]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v116[2]; // [rsp+170h] [rbp+F0h] BYREF
  _BYTE v117[136]; // [rsp+180h] [rbp+100h] BYREF
  __int64 v118; // [rsp+208h] [rbp+188h]
  __int64 v119; // [rsp+2A0h] [rbp+220h]
  __int64 v120; // [rsp+2A8h] [rbp+228h]
  __int64 v121; // [rsp+2B0h] [rbp+230h]
  __int128 v122; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v123; // [rsp+2C8h] [rbp+248h]
  __int128 v124; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v125; // [rsp+2E0h] [rbp+260h]
  __int128 v126; // [rsp+2F0h] [rbp+270h]
  __int128 v127; // [rsp+300h] [rbp+280h]
  __m256i v128; // [rsp+310h] [rbp+290h]
  __int128 v129; // [rsp+330h] [rbp+2B0h]
  _BYTE v130[24]; // [rsp+340h] [rbp+2C0h]
  __int64 v131; // [rsp+358h] [rbp+2D8h]
  __int64 v132; // [rsp+360h] [rbp+2E0h]
  char v133; // [rsp+368h] [rbp+2E8h]
  __int128 v134; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v135; // [rsp+380h] [rbp+300h]
  __int128 v136; // [rsp+388h] [rbp+308h] BYREF
  __int64 v137; // [rsp+398h] [rbp+318h]
  _QWORD *v138; // [rsp+3A0h] [rbp+320h]
  __int64 v139; // [rsp+3A8h] [rbp+328h]
  PVOID Address; // [rsp+3B0h] [rbp+330h]
  __int64 v141; // [rsp+3B8h] [rbp+338h]
  __int64 v142; // [rsp+3C0h] [rbp+340h]
  char v143; // [rsp+3CFh] [rbp+34Fh] BYREF
  __int64 v144; // [rsp+3D0h] [rbp+350h]
  _QWORD *v145; // [rsp+3D8h] [rbp+358h]
  char v146; // [rsp+3E5h] [rbp+365h]
  char v147; // [rsp+3E6h] [rbp+366h]
  char v148; // [rsp+3E7h] [rbp+367h]
  char v149; // [rsp+3E8h] [rbp+368h]
  char v150; // [rsp+3E9h] [rbp+369h]
  char v151; // [rsp+3EAh] [rbp+36Ah]
  char v152; // [rsp+3EBh] [rbp+36Bh]
  char v153; // [rsp+3ECh] [rbp+36Ch]
  char v154; // [rsp+3EDh] [rbp+36Dh]
  char v155; // [rsp+3EEh] [rbp+36Eh]
  char v156; // [rsp+3EFh] [rbp+36Fh]
  __int64 v157; // [rsp+3F0h] [rbp+370h]

  v157 = -2;
  v145 = a3;
  v153 = 1;
  v152 = 1;
  sub_1408ECC50(v117);
  v5 = *(_OWORD *)v117;
  v6 = v117[16];
  if ( *(_QWORD *)v117 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v117[80];
    v7 = *(_OWORD *)&v117[17];
    v8 = *(_OWORD *)&v117[33];
    v9 = *(_OWORD *)&v117[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v117[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    v10 = 1;
    goto LABEL_57;
  }
  v149 = v117[16];
  Address = *(PVOID *)&v117[8];
  v151 = 1;
  v150 = 1;
  sub_1408E8540((__int64)v117, a2);
  v124 = *(_OWORD *)&v117[8];
  v125 = *(_OWORD *)&v117[24];
  v126 = *(_OWORD *)&v117[40];
  v127 = *(_OWORD *)&v117[56];
  v128 = *(__m256i *)&v117[72];
  if ( *(_QWORD *)v117 == -1 )
  {
    *(__m256i *)(a1 + 72) = v128;
    v16 = v124;
    v17 = v125;
    v18 = v126;
    *(_OWORD *)(a1 + 56) = v127;
    *(_OWORD *)(a1 + 40) = v18;
    *(_OWORD *)(a1 + 24) = v17;
    *(_OWORD *)(a1 + 8) = v16;
    *(_QWORD *)a1 = -1;
    v10 = 1;
    v19 = (char *)Address;
    if ( (v149 & 1) == 0 )
    {
LABEL_54:
      if ( 2 * *off_142240260 )
      {
        v153 = v10;
        v152 = v10;
        if ( !(unsigned __int8)sub_14196A710(v12, v11, v13) )
          v19[1] = 1;
      }
    }
LABEL_55:
    v62 = *v19;
    *v19 = 0;
    if ( v62 == 2 )
    {
      v153 = v10;
      v152 = v10;
      WakeByAddressSingle(v19);
    }
LABEL_57:
    v63 = v145;
    v64 = v145[6];
    if ( v64 != -1 && v64 )
      sub_140001660(v145[7], v64, 1);
    if ( *v63 )
      sub_140001660(v63[1], *v63, 1);
    v65 = v63[3];
    if ( v65 )
      sub_140001660(v63[4], v65, 1);
    if ( v10 )
    {
      v66 = v63[9];
      if ( v66 != -1 && v66 )
        sub_140001660(v63[10], v66, 1);
      v67 = v63[12];
      if ( v67 != -1 )
      {
        if ( v67 )
        {
          v68 = v63[13];
LABEL_71:
          sub_140001660(v68, v67, 1);
          goto LABEL_72;
        }
      }
    }
    goto LABEL_72;
  }
  v114 = v118;
  v113 = *(_OWORD *)&v117[120];
  v112 = *(_OWORD *)&v117[104];
  v107 = v124;
  v108 = v125;
  v109 = v126;
  v110 = v127;
  v111 = v128;
  v106 = *(_QWORD *)v117;
  v155 = 1;
  v154 = 1;
  LODWORD(v124) = sub_1416B2E50(v118, v11, v13);
  DWORD1(v124) = v14;
  v155 = 1;
  v154 = 1;
  sub_1416B2E00(v117, &v124, 3577643008LL, 27111902);
  if ( v117[0] )
    v15 = 0;
  else
    v15 = *(_QWORD *)&v117[8];
  v20 = v145[1];
  v21 = v145[2];
  v155 = 1;
  v154 = 1;
  v119 = sub_1408FEA60(v20, v21);
  v144 = v22;
  v23 = v145[4];
  v24 = v145[5];
  v155 = 1;
  v154 = 1;
  v120 = sub_1408FEA60(v23, v24);
  v26 = v25;
  v27 = v145;
  if ( v145[15] != -1
    && (v28 = v145[16], v29 = v145[17], v155 = 1, v154 = 1, v30 = sub_1408FEA60(v28, v29), v27 = v145, v30)
    && (v33 = v31) != 0 )
  {
    if ( v31 < 0 )
    {
      v34 = 0;
      goto LABEL_14;
    }
    v138 = v26;
    v57 = v15;
    v58 = v30;
    nullsub_1(v32, v31);
    v34 = 1;
    v59 = sub_140001650(v33, 1);
    if ( !v59 )
    {
LABEL_14:
      v155 = 1;
      v154 = 1;
      sub_14196B2DB(v34, v33);
    }
    v60 = v59;
    sub_1419234B0(v59, v58, v33);
    *(_QWORD *)&v136 = v33;
    *((_QWORD *)&v136 + 1) = v60;
    v137 = v33;
    v27 = v145;
    v15 = v57;
    v26 = v138;
  }
  else
  {
    *(_QWORD *)&v136 = -1;
  }
  v148 = 1;
  v147 = 1;
  v35 = v27;
  sub_1408E6D30(&v122, v27 + 9);
  v36 = v144;
  v146 = 1;
  sub_1408E6D30(&v134, v35 + 12);
  if ( !v36 )
  {
    nullsub_1(v38, v37);
    v55 = (void *)sub_140001650(33, 1);
    if ( !v55 )
    {
      v156 = 1;
      sub_14196B2DB(1, 33);
    }
    qmemcpy(v55, "Vocabulary source cannot be empty", 33);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 33;
    *(_QWORD *)(a1 + 24) = v55;
    *(_QWORD *)(a1 + 32) = 33;
    goto LABEL_44;
  }
  if ( !v26 )
  {
    nullsub_1(v38, v37);
    v56 = (void *)sub_140001650(38, 1);
    if ( !v56 )
    {
      v156 = 1;
      sub_14196B2DB(1, 38);
    }
    qmemcpy(v56, "Vocabulary replacement cannot be empty", 38);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 38;
    *(_QWORD *)(a1 + 24) = v56;
    *(_QWORD *)(a1 + 32) = 38;
    goto LABEL_44;
  }
  v138 = v145 + 6;
  if ( v145[6] == -1 || (v39 = v145[7], v40 = v145[8], v156 = 1, sub_1408FEA60(v39, v40), !v41) )
  {
    v156 = 1;
    sub_141597890(v116);
    *(_QWORD *)&v124 = 0;
    *((_QWORD *)&v124 + 1) = 1;
    *(_QWORD *)&v125 = 0;
    *(_QWORD *)&v117[16] = 1610612768;
    *(_QWORD *)v117 = &v124;
    *(_QWORD *)&v117[8] = &off_141A55F58;
    if ( (unsigned __int8)sub_1415989F0(v116, v117) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_4,
        55,
        (unsigned int)&v143,
        (unsigned int)&unk_141A52978,
        (__int64)&off_141A56010);
    v141 = *((_QWORD *)&v124 + 1);
    v142 = v124;
    if ( (unsigned __int64)v125 <= 8 )
    {
      if ( (_QWORD)v125 != 8 )
LABEL_38:
        sub_14196B4F0(DWORD2(v124), v125, 0, 8, (__int64)&off_141A556B0);
    }
    else if ( *(char *)(*((_QWORD *)&v124 + 1) + 8LL) <= -65 )
    {
      goto LABEL_38;
    }
    v115[0] = *((_QWORD *)&v124 + 1);
    v115[1] = 8;
    *(_QWORD *)&v124 = v115;
    *((_QWORD *)&v124 + 1) = sub_140191200;
    sub_1416DAFA0(v117, &unk_141A556C8, &v124);
    v71 = v142;
    if ( v142 )
      sub_140001660(v141, v142, 1);
    v141 = *(_QWORD *)&v117[8];
    v72 = v144;
    v142 = *(_QWORD *)v117;
    if ( v144 >= 0 )
    {
      v74 = (__int64)v26;
      v75 = *(_QWORD *)&v117[16];
      nullsub_1(*(_QWORD *)&v117[8], v71);
      v73 = 1;
      v76 = sub_140001650(v72, 1);
      if ( v76 )
      {
        v121 = v76;
        sub_1419234B0(v76, v119, v72);
        v79 = v145;
        if ( v74 >= 0 )
        {
          v139 = v15;
          nullsub_1(v78, v77);
          v80 = 1;
          v81 = sub_140001650(v74, 1);
          if ( v81 )
          {
            v82 = v81;
            sub_1419234B0(v81, v120, v74);
            v83 = *((_BYTE *)v79 + 144);
            *(_OWORD *)&v128.m256i_u64[1] = v122;
            v128.m256i_i64[3] = v123;
            *(_QWORD *)v130 = v135;
            v129 = v134;
            v131 = v137;
            *(_OWORD *)&v130[8] = v136;
            *(_QWORD *)&v124 = v142;
            *((_QWORD *)&v124 + 1) = v141;
            *(_QWORD *)&v125 = v75;
            *((_QWORD *)&v125 + 1) = v144;
            *(_QWORD *)&v126 = v121;
            *((_QWORD *)&v126 + 1) = v144;
            *(_QWORD *)&v127 = v74;
            *((_QWORD *)&v127 + 1) = v82;
            v128.m256i_i64[0] = v74;
            v133 = v83;
            v132 = v139;
            sub_1408F8D90(v117, &v124);
            v84 = v109;
            if ( (_QWORD)v109 == (_QWORD)v108 )
              sub_141939F20(&v108);
            sub_1419234B0(*((_QWORD *)&v108 + 1) + 160 * v84, v117, 160);
            *(_QWORD *)&v109 = v84 + 1;
            sub_1419234B0(v105, &v124, 160);
            LODWORD(v144) = 0;
            goto LABEL_107;
          }
        }
        else
        {
          v80 = 0;
        }
        sub_14196B2DB(v80, v74);
      }
    }
    else
    {
      v73 = 0;
    }
    sub_14196B2DB(v73, v72);
  }
  v139 = v15;
  v116[0] = v138;
  if ( !(_QWORD)v109 )
  {
LABEL_43:
    *(_QWORD *)&v124 = v116;
    *((_QWORD *)&v124 + 1) = sub_14021E5E0;
    v156 = 1;
    sub_1416DAFA0(&v117[8], &unk_141A526EC, &v124);
    *(_QWORD *)v117 = 8;
    v61 = *(_QWORD *)&v117[8];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v117[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v117[64];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v117[48];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v117[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v117[16];
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = v61;
LABEL_44:
    *(_QWORD *)a1 = -1;
LABEL_45:
    if ( (unsigned __int64)(v134 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
      sub_140001660(*((_QWORD *)&v134 + 1), v134, 1);
    if ( (_QWORD)v122 != -1 && (_QWORD)v122 )
      sub_140001660(*((_QWORD *)&v122 + 1), v122, 1);
    if ( (_QWORD)v136 != -1 && (_QWORD)v136 )
      sub_140001660(*((_QWORD *)&v136 + 1), v136, 1);
LABEL_53:
    v151 = 0;
    v150 = 0;
    sub_14084D1D0(&v106);
    v10 = 0;
    v19 = (char *)Address;
    if ( (v149 & 1) == 0 )
      goto LABEL_54;
    goto LABEL_55;
  }
  v42 = v26;
  v43 = *((_QWORD *)&v108 + 1);
  v44 = 160 * v109;
  while ( *(_QWORD *)(v43 + 16) != v40 || (unsigned int)sub_141923B40(*(_QWORD *)(v43 + 8), v39, v40) )
  {
    v43 += 160;
    v44 -= 160;
    if ( !v44 )
      goto LABEL_43;
  }
  v45 = v144;
  sub_1401E7560((unsigned int)v117, v144, 0, 1, 1);
  v46 = *(_QWORD *)&v117[8];
  if ( v117[0] )
  {
    v156 = 1;
    sub_14196B2DB(*(_QWORD *)&v117[8], *(_QWORD *)&v117[16]);
  }
  v47 = *(_QWORD *)&v117[16];
  sub_1419234B0(*(_QWORD *)&v117[16], v119, v45);
  v48 = *(_QWORD *)(v43 + 24);
  if ( v48 )
    sub_140001660(*(_QWORD *)(v43 + 32), v48, 1);
  *(_QWORD *)(v43 + 24) = v46;
  *(_QWORD *)(v43 + 32) = v47;
  *(_QWORD *)(v43 + 40) = v144;
  sub_1401E7560((unsigned int)v117, (_DWORD)v42, 0, 1, 1);
  v49 = *(_QWORD *)&v117[8];
  if ( *(_DWORD *)v117 == 1 )
  {
    v156 = 1;
    sub_14196B2DB(*(_QWORD *)&v117[8], *(_QWORD *)&v117[16]);
  }
  v50 = *(_QWORD *)&v117[16];
  sub_1419234B0(*(_QWORD *)&v117[16], v120, v42);
  v51 = *(_QWORD *)(v43 + 48);
  v52 = v145;
  if ( v51 )
    sub_140001660(*(_QWORD *)(v43 + 56), v51, 1);
  *(_QWORD *)(v43 + 48) = v49;
  *(_QWORD *)(v43 + 56) = v50;
  *(_QWORD *)(v43 + 64) = v42;
  *(_BYTE *)(v43 + 152) = *((_BYTE *)v52 + 144);
  if ( (_QWORD)v122 == -1 )
  {
    v54 = -1;
    v53 = v139;
  }
  else
  {
    v156 = 1;
    sub_1416DB410(v117, &v122);
    v53 = v139;
    v54 = *(_QWORD *)v117;
    v124 = *(_OWORD *)&v117[8];
  }
  v88 = *(_QWORD *)(v43 + 72);
  if ( v88 != -1 && v88 )
    sub_140001660(*(_QWORD *)(v43 + 80), v88, 1);
  *(_QWORD *)(v43 + 72) = v54;
  *(_OWORD *)(v43 + 80) = v124;
  if ( (_QWORD)v134 == -1 )
  {
    v89 = -1;
  }
  else
  {
    v156 = 1;
    sub_1416DB410(v117, &v134);
    v89 = *(_QWORD *)v117;
    v124 = *(_OWORD *)&v117[8];
  }
  v90 = *(_QWORD *)(v43 + 96);
  if ( v90 != -1 && v90 )
    sub_140001660(*(_QWORD *)(v43 + 104), v90, 1);
  *(_QWORD *)(v43 + 96) = v89;
  *(_OWORD *)(v43 + 104) = v124;
  if ( (_QWORD)v136 == -1 )
  {
    v91 = -1;
  }
  else
  {
    v156 = 1;
    sub_1416DB410(v117, &v136);
    v91 = *(_QWORD *)v117;
    v124 = *(_OWORD *)&v117[8];
  }
  v92 = *(_QWORD *)(v43 + 120);
  if ( v92 != -1 && v92 )
    sub_140001660(*(_QWORD *)(v43 + 128), v92, 1);
  *(_QWORD *)(v43 + 120) = v91;
  *(_OWORD *)(v43 + 128) = v124;
  *(_QWORD *)(v43 + 144) = v53;
  v156 = 1;
  v93 = sub_1408F8D90(v105, v43);
  LOBYTE(v93) = 1;
  LODWORD(v144) = v93;
LABEL_107:
  LODWORD(v114) = 1;
  LODWORD(v124) = sub_1416B2E50(v86, v85, v87);
  DWORD1(v124) = v94;
  sub_1416B2E00(v117, &v124, 3577643008LL, 27111902);
  if ( v117[0] )
    v95 = 0;
  else
    v95 = *(_QWORD *)&v117[8];
  *((_QWORD *)&v113 + 1) = v95;
  sub_1408DCE20(&v106);
  sub_1408E9DB0(v117, a2, &v106);
  if ( *(_DWORD *)v117 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v117[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v117[64];
    v96 = *(_OWORD *)v117;
    v97 = *(_OWORD *)&v117[16];
    v98 = *(_OWORD *)&v117[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v117[48];
    *(_OWORD *)(a1 + 40) = v98;
    *(_OWORD *)(a1 + 24) = v97;
    *(_OWORD *)(a1 + 8) = v96;
    *(_QWORD *)a1 = -1;
    sub_14084C7D0(v105);
    if ( !(_BYTE)v144 )
      goto LABEL_53;
    goto LABEL_45;
  }
  sub_1408DCC00(&v124, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), &v106);
  sub_1419234B0(&v117[128], v105, 160);
  *(_OWORD *)v117 = v124;
  *(_OWORD *)&v117[16] = v125;
  *(_OWORD *)&v117[32] = v126;
  *(_OWORD *)&v117[48] = v127;
  *(__m256i *)&v117[64] = v128;
  *(_OWORD *)&v117[96] = v129;
  *(_OWORD *)&v117[112] = *(_OWORD *)v130;
  sub_1419234B0(a1, v117, 288);
  if ( (_BYTE)v144 )
  {
    if ( (_QWORD)v134 != -1 && (_QWORD)v134 )
      sub_140001660(*((_QWORD *)&v134 + 1), v134, 1);
    if ( (_QWORD)v122 != -1 && (_QWORD)v122 )
      sub_140001660(*((_QWORD *)&v122 + 1), v122, 1);
    if ( (_QWORD)v136 != -1 && (_QWORD)v136 )
      sub_140001660(*((_QWORD *)&v136 + 1), v136, 1);
  }
  v151 = 0;
  v150 = 0;
  sub_14084D1D0(&v106);
  if ( (v149 & 1) == 0 )
  {
    if ( 2 * *off_142240260 )
    {
      v153 = 0;
      v152 = 0;
      if ( !(unsigned __int8)sub_14196A710(v100, v99, v101) )
        *((_BYTE *)Address + 1) = 1;
    }
  }
  v102 = Address;
  v103 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v103 == 2 )
  {
    v153 = 0;
    v152 = 0;
    WakeByAddressSingle(v102);
  }
  v104 = *v138;
  v63 = v145;
  if ( *v138 != -1 && v104 )
    sub_140001660(v145[7], v104, 1);
  if ( *v63 )
    sub_140001660(v63[1], *v63, 1);
  v67 = v63[3];
  if ( v67 )
  {
    v68 = v63[4];
    goto LABEL_71;
  }
LABEL_72:
  v69 = v63[15];
  if ( v69 != -1 && v69 )
    sub_140001660(v63[16], v69, 1);
  return a1;
}
