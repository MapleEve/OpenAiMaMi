// win 1.2.7 latest-exe | module src/core/voice/workspace.rs | ea 0x1408e4350 | successor of pre-update 0x141037190 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
__int64 __fastcall sub_1408E4350(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v5; // kr00_16
  char v6; // dl
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  __int64 v33; // rax
  char *v34; // rdi
  char v35; // al
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // rdx
  __int64 v69; // r14
  __int64 v70; // r15
  __int64 v71; // rdx
  int v72; // edx
  __int64 v73; // rax
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  PVOID v80; // rcx
  char v81; // al
  __int64 v82; // [rsp+30h] [rbp-50h] BYREF
  __int128 v83; // [rsp+38h] [rbp-48h]
  __int128 v84; // [rsp+48h] [rbp-38h]
  __int128 v85; // [rsp+58h] [rbp-28h]
  __int128 v86; // [rsp+68h] [rbp-18h]
  __int128 v87; // [rsp+78h] [rbp-8h]
  __int128 v88; // [rsp+88h] [rbp+8h]
  __int128 v89; // [rsp+98h] [rbp+18h]
  __int128 v90; // [rsp+A8h] [rbp+28h]
  __int64 v91; // [rsp+B8h] [rbp+38h]
  __int128 v92; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v93; // [rsp+D0h] [rbp+50h]
  __int128 v94; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v95; // [rsp+E8h] [rbp+68h]
  __int128 v96; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v97; // [rsp+100h] [rbp+80h]
  __int128 v98; // [rsp+110h] [rbp+90h]
  __int128 v99; // [rsp+120h] [rbp+A0h]
  __int128 v100; // [rsp+130h] [rbp+B0h]
  __int128 v101; // [rsp+140h] [rbp+C0h]
  __int128 v102; // [rsp+150h] [rbp+D0h]
  __int128 v103; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v104; // [rsp+178h] [rbp+F8h]
  __int128 v105; // [rsp+180h] [rbp+100h] BYREF
  __int64 v106; // [rsp+190h] [rbp+110h]
  __int64 v107; // [rsp+198h] [rbp+118h]
  __int64 v108; // [rsp+1A0h] [rbp+120h]
  __int64 v109; // [rsp+1A8h] [rbp+128h]
  _BYTE v110[144]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v111; // [rsp+240h] [rbp+1C0h]
  __int128 v112; // [rsp+250h] [rbp+1D0h]
  __int128 v113; // [rsp+260h] [rbp+1E0h]
  __int128 v114; // [rsp+270h] [rbp+1F0h]
  __int128 v115; // [rsp+280h] [rbp+200h]
  __int128 v116; // [rsp+290h] [rbp+210h]
  __int128 v117; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v118; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v119; // [rsp+2C0h] [rbp+240h]
  __int128 v120; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v121; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v122; // [rsp+2F0h] [rbp+270h]
  __int128 v123; // [rsp+300h] [rbp+280h]
  __int128 v124; // [rsp+310h] [rbp+290h]
  PVOID Address; // [rsp+328h] [rbp+2A8h]
  __int64 v126; // [rsp+330h] [rbp+2B0h]
  __int64 v127; // [rsp+338h] [rbp+2B8h]
  char v128; // [rsp+347h] [rbp+2C7h] BYREF
  __int64 v129; // [rsp+348h] [rbp+2C8h]
  _QWORD *v130; // [rsp+350h] [rbp+2D0h]
  __int64 v131; // [rsp+358h] [rbp+2D8h]
  __int64 v132; // [rsp+360h] [rbp+2E0h]
  char v133; // [rsp+36Fh] [rbp+2EFh]
  __int64 v134; // [rsp+370h] [rbp+2F0h]

  v134 = -2;
  v130 = a3;
  sub_1408ECC50(v110);
  v5 = *(_OWORD *)v110;
  v6 = v110[16];
  if ( *(_QWORD *)v110 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v110[80];
    v7 = *(_OWORD *)&v110[17];
    v8 = *(_OWORD *)&v110[33];
    v9 = *(_OWORD *)&v110[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v110[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    goto LABEL_35;
  }
  v133 = v110[16];
  Address = *(PVOID *)&v110[8];
  sub_1408E8540((__int64)v110, a2);
  v117 = *(_OWORD *)&v110[8];
  v118 = *(_OWORD *)&v110[24];
  v119 = *(_OWORD *)&v110[40];
  v120 = *(_OWORD *)&v110[56];
  v121 = *(_OWORD *)&v110[72];
  v122 = *(_OWORD *)&v110[88];
  if ( *(_QWORD *)v110 == -1 )
  {
    *(_OWORD *)(a1 + 88) = v122;
    *(_OWORD *)(a1 + 72) = v121;
    v15 = v117;
    v16 = v118;
    v17 = v119;
    *(_OWORD *)(a1 + 56) = v120;
    *(_OWORD *)(a1 + 40) = v17;
    *(_OWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = -1;
    goto LABEL_31;
  }
  v91 = *(_QWORD *)&v110[136];
  v90 = *(_OWORD *)&v110[120];
  v89 = *(_OWORD *)&v110[104];
  v83 = v117;
  v84 = v118;
  v85 = v119;
  v86 = v120;
  v87 = v121;
  v88 = v122;
  v82 = *(_QWORD *)v110;
  LODWORD(v117) = sub_1416B2E50(*(_QWORD *)&v110[136], v10, v12);
  DWORD1(v117) = v13;
  sub_1416B2E00(v110, &v117, 3577643008LL, 27111902);
  if ( v110[0] )
    v14 = 0;
  else
    v14 = *(_QWORD *)&v110[8];
  v127 = sub_1408FEA60(v130[1], v130[2]);
  v131 = v18;
  v107 = sub_1408FEA60(v130[4], v130[5]);
  v129 = v19;
  v108 = sub_1408FEA60(v130[7], v130[8]);
  if ( !v131 )
  {
    nullsub_1(v21, v20);
    v31 = (void *)sub_140001650(30, 1);
    if ( !v31 )
      sub_14196B2DB(1, 30);
    qmemcpy(v31, "Template title cannot be empty", 30);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 30;
    *(_QWORD *)(a1 + 24) = v31;
    *(_QWORD *)(a1 + 32) = 30;
    goto LABEL_29;
  }
  v22 = v20;
  if ( !v20 )
  {
    nullsub_1(v21, 0);
    v32 = (void *)sub_140001650(32, 1);
    if ( !v32 )
      sub_14196B2DB(1, 32);
    qmemcpy(v32, "Template content cannot be empty", 32);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 32;
    *(_QWORD *)(a1 + 24) = v32;
    *(_QWORD *)(a1 + 32) = 32;
    goto LABEL_29;
  }
  if ( v130[9] == -1 || (v23 = v130[10], v24 = v130[11], sub_1408FEA60(v23, v24), !v25) )
  {
    sub_141597890(&v103);
    *(_QWORD *)&v117 = 0;
    *((_QWORD *)&v117 + 1) = 1;
    *(_QWORD *)&v118 = 0;
    *(_QWORD *)&v110[16] = 1610612768;
    *(_QWORD *)v110 = &v117;
    *(_QWORD *)&v110[8] = &off_141A55F58;
    if ( (unsigned __int8)sub_1415989F0(&v103, v110) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_4,
        55,
        (unsigned int)&v128,
        (unsigned int)&unk_141A52978,
        (__int64)&off_141A56010);
    v126 = *((_QWORD *)&v117 + 1);
    v132 = v117;
    if ( (unsigned __int64)v118 <= 8 )
    {
      if ( (_QWORD)v118 != 8 )
LABEL_25:
        sub_14196B4F0(DWORD2(v117), v118, 0, 8, (__int64)&off_141A55118);
    }
    else if ( *(char *)(*((_QWORD *)&v117 + 1) + 8LL) <= -65 )
    {
      goto LABEL_25;
    }
    *(_QWORD *)&v105 = *((_QWORD *)&v117 + 1);
    *((_QWORD *)&v105 + 1) = 8;
    *(_QWORD *)&v117 = &v105;
    *((_QWORD *)&v117 + 1) = sub_140191200;
    sub_1416DAFA0(v110, &unk_141A55130, &v117);
    v41 = v132;
    if ( v132 )
      sub_140001660(v126, v132, 1);
    v126 = *(_QWORD *)&v110[8];
    v42 = v131;
    v132 = *(_QWORD *)v110;
    if ( v131 < 0 )
    {
      v43 = 0;
      goto LABEL_50;
    }
    v44 = *(_QWORD *)&v110[16];
    nullsub_1(*(_QWORD *)&v110[8], v41);
    v43 = 1;
    v45 = sub_140001650(v131, 1);
    v42 = v131;
    if ( !v45 )
LABEL_50:
      sub_14196B2DB(v43, v42);
    v109 = v45;
    sub_1419234B0(v45, v127, v131);
    v48 = v129;
    if ( v129 < 0 )
    {
      v43 = 0;
      goto LABEL_54;
    }
    if ( v129 )
    {
      nullsub_1(v47, v46);
      v48 = v129;
      v49 = sub_140001650(v129, 1);
      if ( !v49 )
LABEL_54:
        sub_14196B2DB(v43, v48);
      v127 = v49;
      sub_1419234B0(v49, v107, v48);
    }
    else
    {
      v127 = 1;
    }
    if ( v22 >= 0 )
    {
      nullsub_1(v47, v46);
      v50 = 1;
      v51 = sub_140001650(v22, 1);
      if ( v51 )
      {
        v52 = v51;
        sub_1419234B0(v51, v108, v22);
        *(_QWORD *)&v117 = v132;
        *((_QWORD *)&v117 + 1) = v126;
        *(_QWORD *)&v118 = v44;
        *((_QWORD *)&v118 + 1) = v131;
        *(_QWORD *)&v119 = v109;
        *((_QWORD *)&v119 + 1) = v131;
        *(_QWORD *)&v120 = v129;
        *((_QWORD *)&v120 + 1) = v127;
        *(_QWORD *)&v121 = v129;
        *((_QWORD *)&v121 + 1) = v22;
        *(_QWORD *)&v122 = v52;
        *((_QWORD *)&v122 + 1) = v22;
        WORD4(v123) = 1280;
        *(_QWORD *)&v123 = v14;
        sub_1416DB410(&v94, &v117);
        sub_1416DB410(&v92, (char *)&v118 + 8);
        sub_1416DB410(&v105, &v120);
        sub_1416DB410(&v103, (char *)&v121 + 8);
        *(_QWORD *)&v110[16] = v95;
        *(_OWORD *)v110 = v94;
        *(_OWORD *)&v110[24] = v92;
        *(_QWORD *)&v110[40] = v93;
        *(_OWORD *)&v110[48] = v105;
        *(_QWORD *)&v110[64] = v106;
        *(_OWORD *)&v110[72] = v103;
        *(_QWORD *)&v110[88] = v104;
        *(_WORD *)&v110[104] = 1280;
        *(_QWORD *)&v110[96] = v14;
        v55 = *((_QWORD *)&v83 + 1);
        if ( *((_QWORD *)&v83 + 1) == v82 )
          sub_141939740(&v82);
        v56 = v83;
        v57 = 112 * v55;
        *(_OWORD *)(v83 + v57 + 96) = *(_OWORD *)&v110[96];
        *(_OWORD *)(v56 + v57 + 80) = *(_OWORD *)&v110[80];
        *(_OWORD *)(v56 + v57 + 64) = *(_OWORD *)&v110[64];
        v58 = *(_OWORD *)v110;
        v59 = *(_OWORD *)&v110[16];
        v60 = *(_OWORD *)&v110[32];
        *(_OWORD *)(v56 + v57 + 48) = *(_OWORD *)&v110[48];
        *(_OWORD *)(v56 + v57 + 32) = v60;
        *(_OWORD *)(v56 + v57 + 16) = v59;
        *(_OWORD *)(v56 + v57) = v58;
        *((_QWORD *)&v83 + 1) = v55 + 1;
        v96 = v117;
        v97 = v118;
        v98 = v119;
        v99 = v120;
        v100 = v121;
        v101 = v122;
        v102 = v123;
        goto LABEL_78;
      }
    }
    else
    {
      v50 = 0;
    }
    sub_14196B2DB(v50, v22);
  }
  v132 = v14;
  *(_QWORD *)&v103 = v130 + 9;
  if ( !*((_QWORD *)&v83 + 1) )
  {
LABEL_28:
    *(_QWORD *)&v117 = &v103;
    *((_QWORD *)&v117 + 1) = sub_14021E5E0;
    sub_1416DAFA0(&v110[8], &unk_141A526CF, &v117);
    *(_QWORD *)v110 = 8;
    v33 = *(_QWORD *)&v110[8];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v110[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v110[64];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v110[48];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v110[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v110[16];
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = v33;
LABEL_29:
    *(_QWORD *)a1 = -1;
LABEL_30:
    sub_14084D1D0(&v82);
LABEL_31:
    v34 = (char *)Address;
    if ( (v133 & 1) == 0 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v11, v10, v12) )
      v34[1] = 1;
    v35 = *v34;
    *v34 = 0;
    if ( v35 == 2 )
      WakeByAddressSingle(v34);
    goto LABEL_35;
  }
  v26 = v83;
  v27 = 112LL * *((_QWORD *)&v83 + 1);
  while ( *(_QWORD *)(v26 + 16) != v24 || (unsigned int)sub_141923B40(*(_QWORD *)(v26 + 8), v23, v24) )
  {
    v26 += 112;
    v27 -= 112;
    if ( !v27 )
      goto LABEL_28;
  }
  if ( *(_BYTE *)(v26 + 104) )
  {
    nullsub_1(v29, v28);
    v30 = (void *)sub_140001650(41, 1);
    if ( !v30 )
      sub_14196B2DB(1, 41);
    qmemcpy(v30, "Built-in voice templates cannot be edited", 41);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 41;
    *(_QWORD *)(a1 + 24) = v30;
    *(_QWORD *)(a1 + 32) = 41;
    goto LABEL_29;
  }
  v61 = v131;
  sub_1401E7560((unsigned int)v110, v131, 0, 1, 1);
  v62 = *(_QWORD *)&v110[8];
  if ( v110[0] )
    sub_14196B2DB(*(_QWORD *)&v110[8], *(_QWORD *)&v110[16]);
  v63 = *(_QWORD *)&v110[16];
  sub_1419234B0(*(_QWORD *)&v110[16], v127, v61);
  v64 = *(_QWORD *)(v26 + 24);
  if ( v64 )
    sub_140001660(*(_QWORD *)(v26 + 32), v64, 1);
  *(_QWORD *)(v26 + 24) = v62;
  *(_QWORD *)(v26 + 32) = v63;
  *(_QWORD *)(v26 + 40) = v131;
  v65 = v129;
  sub_1401E7560((unsigned int)v110, v129, 0, 1, 1);
  v66 = *(_QWORD *)&v110[8];
  if ( *(_DWORD *)v110 == 1 )
    sub_14196B2DB(*(_QWORD *)&v110[8], *(_QWORD *)&v110[16]);
  v67 = *(_QWORD *)&v110[16];
  if ( v65 )
  {
    sub_1419234B0(*(_QWORD *)&v110[16], v107, v65);
    v65 = v129;
  }
  v68 = *(_QWORD *)(v26 + 48);
  if ( v68 )
  {
    sub_140001660(*(_QWORD *)(v26 + 56), v68, 1);
    v65 = v129;
  }
  *(_QWORD *)(v26 + 48) = v66;
  *(_QWORD *)(v26 + 56) = v67;
  *(_QWORD *)(v26 + 64) = v65;
  sub_1401E7560((unsigned int)v110, v22, 0, 1, 1);
  v69 = *(_QWORD *)&v110[8];
  if ( *(_DWORD *)v110 == 1 )
    sub_14196B2DB(*(_QWORD *)&v110[8], *(_QWORD *)&v110[16]);
  v70 = *(_QWORD *)&v110[16];
  sub_1419234B0(*(_QWORD *)&v110[16], v108, v22);
  v71 = *(_QWORD *)(v26 + 72);
  if ( v71 )
    sub_140001660(*(_QWORD *)(v26 + 80), v71, 1);
  *(_QWORD *)(v26 + 72) = v69;
  *(_QWORD *)(v26 + 80) = v70;
  *(_QWORD *)(v26 + 88) = v22;
  *(_QWORD *)(v26 + 96) = v132;
  sub_1408F8C10(&v96, v26);
LABEL_78:
  LODWORD(v91) = 1;
  LODWORD(v117) = sub_1416B2E50(v57, v53, v54);
  DWORD1(v117) = v72;
  sub_1416B2E00(v110, &v117, 3577643008LL, 27111902);
  if ( v110[0] )
    v73 = 0;
  else
    v73 = *(_QWORD *)&v110[8];
  *((_QWORD *)&v90 + 1) = v73;
  sub_1408DCE20(&v82);
  sub_1408E9DB0(v110, a2, &v82);
  if ( *(_DWORD *)v110 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v110[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v110[64];
    v74 = *(_OWORD *)v110;
    v75 = *(_OWORD *)&v110[16];
    v76 = *(_OWORD *)&v110[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v110[48];
    *(_OWORD *)(a1 + 40) = v76;
    *(_OWORD *)(a1 + 24) = v75;
    *(_OWORD *)(a1 + 8) = v74;
    *(_QWORD *)a1 = -1;
    if ( (_QWORD)v96 )
      sub_140001660(*((_QWORD *)&v96 + 1), v96, 1);
    if ( *((_QWORD *)&v97 + 1) )
      sub_140001660(v98, *((_QWORD *)&v97 + 1), 1);
    if ( (_QWORD)v99 )
      sub_140001660(*((_QWORD *)&v99 + 1), v99, 1);
    if ( *((_QWORD *)&v100 + 1) )
      sub_140001660(v101, *((_QWORD *)&v100 + 1), 1);
    goto LABEL_30;
  }
  sub_1408DCC00(&v117, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), &v82);
  v116 = v102;
  v115 = v101;
  v114 = v100;
  v113 = v99;
  v112 = v98;
  v111 = v97;
  *(_OWORD *)&v110[128] = v96;
  *(_OWORD *)v110 = v117;
  *(_OWORD *)&v110[16] = v118;
  *(_OWORD *)&v110[32] = v119;
  *(_OWORD *)&v110[48] = v120;
  *(_OWORD *)&v110[64] = v121;
  *(_OWORD *)&v110[80] = v122;
  *(_OWORD *)&v110[96] = v123;
  *(_OWORD *)&v110[112] = v124;
  sub_1419234B0(a1, v110, 240);
  sub_14084D1D0(&v82);
  if ( (v133 & 1) == 0 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v78, v77, v79) )
    *((_BYTE *)Address + 1) = 1;
  v80 = Address;
  v81 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v81 == 2 )
    WakeByAddressSingle(v80);
LABEL_35:
  v36 = v130;
  v37 = v130[9];
  if ( v37 != -1 && v37 )
    sub_140001660(v130[10], v37, 1);
  if ( *v36 )
    sub_140001660(v36[1], *v36, 1);
  v38 = v36[3];
  if ( v38 )
    sub_140001660(v36[4], v38, 1);
  v39 = v36[6];
  if ( v39 )
    sub_140001660(v36[7], v39, 1);
  return a1;
}
