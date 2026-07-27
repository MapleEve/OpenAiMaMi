// module: codexmate_lib/core/voice/workspace
// addr: 0x1407a8500
// name: sub_1407A8500
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407A8500(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v5; // kr00_16
  char v6; // dl
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rbx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rcx
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  __int64 v35; // rax
  char *v36; // rdi
  char v37; // al
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v43; // r8
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  __int64 v60; // rbx
  __int64 v61; // r14
  __int64 v62; // rdx
  __int64 v63; // r15
  __int64 v64; // rbx
  __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r15
  __int64 v70; // r14
  __int64 v71; // rdx
  int v72; // edx
  __int64 v73; // rax
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm2
  __int64 v77; // rdx
  __int64 v78; // rcx
  PVOID v79; // rcx
  char v80; // al
  __int64 v81; // [rsp+30h] [rbp-50h] BYREF
  __int128 v82; // [rsp+38h] [rbp-48h]
  __int128 v83; // [rsp+48h] [rbp-38h]
  __int128 v84; // [rsp+58h] [rbp-28h]
  __int128 v85; // [rsp+68h] [rbp-18h]
  __int128 v86; // [rsp+78h] [rbp-8h]
  __int128 v87; // [rsp+88h] [rbp+8h]
  __int128 v88; // [rsp+98h] [rbp+18h]
  __int128 v89; // [rsp+A8h] [rbp+28h]
  __int64 v90; // [rsp+B8h] [rbp+38h]
  __int128 v91; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v92; // [rsp+D0h] [rbp+50h]
  __int128 v93; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v94; // [rsp+E8h] [rbp+68h]
  __int128 v95; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v96; // [rsp+100h] [rbp+80h]
  __int128 v97; // [rsp+110h] [rbp+90h]
  __int128 v98; // [rsp+120h] [rbp+A0h]
  __int128 v99; // [rsp+130h] [rbp+B0h]
  __int128 v100; // [rsp+140h] [rbp+C0h]
  __int128 v101; // [rsp+150h] [rbp+D0h]
  __int128 v102; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v103; // [rsp+178h] [rbp+F8h]
  __int128 v104; // [rsp+180h] [rbp+100h] BYREF
  __int64 v105; // [rsp+190h] [rbp+110h]
  __int64 v106; // [rsp+198h] [rbp+118h]
  _BYTE v107[144]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v108; // [rsp+230h] [rbp+1B0h]
  __int128 v109; // [rsp+240h] [rbp+1C0h]
  __int128 v110; // [rsp+250h] [rbp+1D0h]
  __int128 v111; // [rsp+260h] [rbp+1E0h]
  __int128 v112; // [rsp+270h] [rbp+1F0h]
  __int128 v113; // [rsp+280h] [rbp+200h]
  __int64 v114; // [rsp+298h] [rbp+218h]
  __int128 v115; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v116; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v117; // [rsp+2C0h] [rbp+240h]
  __int128 v118; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v119; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v120; // [rsp+2F0h] [rbp+270h]
  __int128 v121; // [rsp+300h] [rbp+280h]
  __int128 v122; // [rsp+310h] [rbp+290h]
  PVOID Address; // [rsp+320h] [rbp+2A0h]
  __int64 v124; // [rsp+328h] [rbp+2A8h]
  __int64 v125; // [rsp+330h] [rbp+2B0h]
  __int64 v126; // [rsp+338h] [rbp+2B8h]
  char v127; // [rsp+347h] [rbp+2C7h] BYREF
  __int64 v128; // [rsp+348h] [rbp+2C8h]
  __int64 v129; // [rsp+350h] [rbp+2D0h]
  _QWORD *v130; // [rsp+358h] [rbp+2D8h]
  __int64 v131; // [rsp+360h] [rbp+2E0h]
  char v132; // [rsp+36Fh] [rbp+2EFh]
  __int64 v133; // [rsp+370h] [rbp+2F0h]

  v133 = -2;
  v130 = a3;
  sub_1407B1010(v107);
  v5 = *(_OWORD *)v107;
  v6 = v107[16];
  if ( *(_QWORD *)v107 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v107[80];
    v7 = *(_OWORD *)&v107[17];
    v8 = *(_OWORD *)&v107[33];
    v9 = *(_OWORD *)&v107[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v107[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    goto LABEL_35;
  }
  v132 = v107[16];
  Address = *(PVOID *)&v107[8];
  read_workspace_file(v107);
  v115 = *(_OWORD *)&v107[8];
  v116 = *(_OWORD *)&v107[24];
  v117 = *(_OWORD *)&v107[40];
  v118 = *(_OWORD *)&v107[56];
  v119 = *(_OWORD *)&v107[72];
  v120 = *(_OWORD *)&v107[88];
  if ( *(_QWORD *)v107 == -1 )
  {
    *(_OWORD *)(a1 + 88) = v120;
    *(_OWORD *)(a1 + 72) = v119;
    v14 = v115;
    v15 = v116;
    v16 = v117;
    *(_OWORD *)(a1 + 56) = v118;
    *(_OWORD *)(a1 + 40) = v16;
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = -1;
    goto LABEL_31;
  }
  v90 = *(_QWORD *)&v107[136];
  v89 = *(_OWORD *)&v107[120];
  v88 = *(_OWORD *)&v107[104];
  v82 = v115;
  v83 = v116;
  v84 = v117;
  v85 = v118;
  v86 = v119;
  v87 = v120;
  v81 = *(_QWORD *)v107;
  LODWORD(v115) = sub_141475580();
  DWORD1(v115) = v12;
  sub_141475530(v107, &v115, 3577643008LL, 27111902);
  if ( v107[0] )
    v13 = 0;
  else
    v13 = *(_QWORD *)&v107[8];
  v17 = sub_14033BC10(v130[1], v130[2]);
  v129 = v18;
  v19 = v17;
  v106 = sub_14033BC10(v130[4], v130[5]);
  v126 = v20;
  v21 = sub_14033BC10(v130[7], v130[8]);
  if ( !v129 )
  {
    nullsub_1(v23);
    v33 = (void *)sub_140001650(30, 1);
    if ( !v33 )
      sub_1416C2D4B(1, 30);
    qmemcpy(v33, "Template title cannot be empty", 30);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 30;
    *(_QWORD *)(a1 + 24) = v33;
    *(_QWORD *)(a1 + 32) = 30;
    goto LABEL_29;
  }
  v24 = v22;
  if ( !v22 )
  {
    nullsub_1(v23);
    v34 = (void *)sub_140001650(32, 1);
    if ( !v34 )
      sub_1416C2D4B(1, 32);
    qmemcpy(v34, "Template content cannot be empty", 32);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 32;
    *(_QWORD *)(a1 + 24) = v34;
    *(_QWORD *)(a1 + 32) = 32;
    goto LABEL_29;
  }
  v25 = v21;
  if ( v130[9] == -1 || (sub_14033BC10(v130[10], v130[11]), !v26) )
  {
    sub_141356270(&v102);
    *(_QWORD *)&v115 = 0;
    *((_QWORD *)&v115 + 1) = 1;
    *(_QWORD *)&v116 = 0;
    *(_QWORD *)&v107[16] = 1610612768;
    *(_QWORD *)v107 = &v115;
    *(_QWORD *)&v107[8] = &off_141790AA0;
    if ( (unsigned __int8)sub_141356790(&v102, v107) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v127,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v128 = *((_QWORD *)&v115 + 1);
    v131 = v115;
    if ( (unsigned __int64)v116 <= 8 )
    {
      if ( (_QWORD)v116 != 8 )
LABEL_25:
        sub_1416C2F60(DWORD2(v115), v116, 0, 8, (__int64)&off_14178FEC8);
    }
    else if ( *(char *)(*((_QWORD *)&v115 + 1) + 8LL) <= -65 )
    {
      goto LABEL_25;
    }
    *(_QWORD *)&v104 = *((_QWORD *)&v115 + 1);
    *((_QWORD *)&v104 + 1) = 8;
    *(_QWORD *)&v115 = &v104;
    *((_QWORD *)&v115 + 1) = sub_14041F680;
    sub_14149C0F0(v107, &unk_14178FEE0, &v115);
    if ( v131 )
      sub_140001660(v128, v131, 1);
    v128 = *(_QWORD *)&v107[8];
    v43 = v129;
    v131 = *(_QWORD *)v107;
    if ( v129 < 0 )
    {
      v44 = 0;
      goto LABEL_50;
    }
    v45 = v25;
    v125 = *(_QWORD *)&v107[16];
    nullsub_1(*(_QWORD *)&v107[8]);
    v44 = 1;
    v46 = sub_140001650(v129, 1);
    v43 = v129;
    if ( !v46 )
LABEL_50:
      sub_1416C2D4B(v44, v43);
    v124 = v46;
    sub_141684120(v46, v19, v129);
    v48 = v126;
    if ( v126 < 0 )
    {
      v44 = 0;
      goto LABEL_54;
    }
    if ( v126 )
    {
      nullsub_1(v47);
      v49 = sub_140001650(v48, 1);
      if ( !v49 )
LABEL_54:
        sub_1416C2D4B(v44, v48);
      v114 = v49;
      sub_141684120(v49, v106, v48);
    }
    else
    {
      v114 = 1;
    }
    v50 = v24;
    if ( v24 >= 0 )
    {
      nullsub_1(v47);
      v51 = 1;
      v52 = sub_140001650(v50, 1);
      if ( v52 )
      {
        v53 = v52;
        sub_141684120(v52, v45, v50);
        *(_QWORD *)&v115 = v131;
        *((_QWORD *)&v115 + 1) = v128;
        *(_QWORD *)&v116 = v125;
        *((_QWORD *)&v116 + 1) = v129;
        *(_QWORD *)&v117 = v124;
        *((_QWORD *)&v117 + 1) = v129;
        *(_QWORD *)&v118 = v126;
        *((_QWORD *)&v118 + 1) = v114;
        *(_QWORD *)&v119 = v126;
        *((_QWORD *)&v119 + 1) = v50;
        *(_QWORD *)&v120 = v53;
        *((_QWORD *)&v120 + 1) = v50;
        WORD4(v121) = 1280;
        *(_QWORD *)&v121 = v13;
        sub_14149C500(&v93, &v115);
        sub_14149C500(&v91, (char *)&v116 + 8);
        sub_14149C500(&v104, &v118);
        sub_14149C500(&v102, (char *)&v119 + 8);
        *(_QWORD *)&v107[16] = v94;
        *(_OWORD *)v107 = v93;
        *(_OWORD *)&v107[24] = v91;
        *(_QWORD *)&v107[40] = v92;
        *(_OWORD *)&v107[48] = v104;
        *(_QWORD *)&v107[64] = v105;
        *(_OWORD *)&v107[72] = v102;
        *(_QWORD *)&v107[88] = v103;
        *(_WORD *)&v107[104] = 1280;
        *(_QWORD *)&v107[96] = v13;
        v54 = *((_QWORD *)&v82 + 1);
        if ( *((_QWORD *)&v82 + 1) == v81 )
          sub_141689030(&v81);
        v55 = v82;
        v56 = 112 * v54;
        *(_OWORD *)(v82 + v56 + 96) = *(_OWORD *)&v107[96];
        *(_OWORD *)(v55 + v56 + 80) = *(_OWORD *)&v107[80];
        *(_OWORD *)(v55 + v56 + 64) = *(_OWORD *)&v107[64];
        v57 = *(_OWORD *)v107;
        v58 = *(_OWORD *)&v107[16];
        v59 = *(_OWORD *)&v107[32];
        *(_OWORD *)(v55 + v56 + 48) = *(_OWORD *)&v107[48];
        *(_OWORD *)(v55 + v56 + 32) = v59;
        *(_OWORD *)(v55 + v56 + 16) = v58;
        *(_OWORD *)(v55 + v56) = v57;
        *((_QWORD *)&v82 + 1) = v54 + 1;
        v95 = v115;
        v96 = v116;
        v97 = v117;
        v98 = v118;
        v99 = v119;
        v100 = v120;
        v101 = v121;
        goto LABEL_78;
      }
    }
    else
    {
      v51 = 0;
    }
    sub_1416C2D4B(v51, v50);
  }
  v124 = v25;
  v131 = v24;
  v128 = v13;
  *(_QWORD *)&v102 = v130 + 9;
  if ( !*((_QWORD *)&v82 + 1) )
  {
LABEL_28:
    *(_QWORD *)&v115 = &v102;
    *((_QWORD *)&v115 + 1) = sub_1406B5450;
    sub_14149C0F0(&v107[8], &unk_141788E14, &v115);
    *(_QWORD *)v107 = 8;
    v35 = *(_QWORD *)&v107[8];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v107[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v107[64];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v107[48];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v107[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v107[16];
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = v35;
LABEL_29:
    *(_QWORD *)a1 = -1;
LABEL_30:
    sub_1406CE470((__int64)&v81);
LABEL_31:
    v36 = (char *)Address;
    if ( (v132 & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v11, v10) )
      v36[1] = 1;
    v37 = *v36;
    *v36 = 0;
    if ( v37 == 2 )
      WakeByAddressSingle(v36);
    goto LABEL_35;
  }
  v27 = v82;
  v28 = 112LL * *((_QWORD *)&v82 + 1);
  v29 = v130[10];
  v30 = v130[11];
  while ( *(_QWORD *)(v27 + 16) != v30 || (unsigned int)sub_1416847B0(*(_QWORD *)(v27 + 8), v29, v30) )
  {
    v27 += 112;
    v28 -= 112;
    if ( !v28 )
      goto LABEL_28;
  }
  if ( *(_BYTE *)(v27 + 104) )
  {
    nullsub_1(v31);
    v32 = (void *)sub_140001650(41, 1);
    if ( !v32 )
      sub_1416C2D4B(1, 41);
    qmemcpy(v32, "Built-in voice templates cannot be edited", 41);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 41;
    *(_QWORD *)(a1 + 24) = v32;
    *(_QWORD *)(a1 + 32) = 41;
    goto LABEL_29;
  }
  v60 = v129;
  sub_140388B60((unsigned int)v107, v129, 0, 1, 1);
  v125 = *(_QWORD *)&v107[8];
  if ( v107[0] )
    sub_1416C2D4B(v125, *(_QWORD *)&v107[16]);
  v61 = *(_QWORD *)&v107[16];
  sub_141684120(*(_QWORD *)&v107[16], v19, v60);
  v62 = *(_QWORD *)(v27 + 24);
  v63 = v131;
  if ( v62 )
    sub_140001660(*(_QWORD *)(v27 + 32), v62, 1);
  *(_QWORD *)(v27 + 24) = v125;
  *(_QWORD *)(v27 + 32) = v61;
  *(_QWORD *)(v27 + 40) = v129;
  v64 = v126;
  sub_140388B60((unsigned int)v107, v126, 0, 1, 1);
  v65 = *(_QWORD *)&v107[8];
  if ( *(_DWORD *)v107 == 1 )
    sub_1416C2D4B(*(_QWORD *)&v107[8], *(_QWORD *)&v107[16]);
  v66 = *(_QWORD *)&v107[16];
  if ( v64 )
    sub_141684120(*(_QWORD *)&v107[16], v106, v64);
  v67 = *(_QWORD *)(v27 + 48);
  if ( v67 )
    sub_140001660(*(_QWORD *)(v27 + 56), v67, 1);
  *(_QWORD *)(v27 + 48) = v65;
  *(_QWORD *)(v27 + 56) = v66;
  *(_QWORD *)(v27 + 64) = v126;
  sub_140388B60((unsigned int)v107, v63, 0, 1, 1);
  v68 = v63;
  v69 = *(_QWORD *)&v107[8];
  if ( *(_DWORD *)v107 == 1 )
    sub_1416C2D4B(*(_QWORD *)&v107[8], *(_QWORD *)&v107[16]);
  v70 = *(_QWORD *)&v107[16];
  sub_141684120(*(_QWORD *)&v107[16], v124, v68);
  v71 = *(_QWORD *)(v27 + 72);
  if ( v71 )
    sub_140001660(*(_QWORD *)(v27 + 80), v71, 1);
  *(_QWORD *)(v27 + 72) = v69;
  *(_QWORD *)(v27 + 80) = v70;
  *(_QWORD *)(v27 + 88) = v131;
  *(_QWORD *)(v27 + 96) = v128;
  sub_1407BA680(&v95, v27);
LABEL_78:
  LODWORD(v90) = 1;
  LODWORD(v115) = sub_141475580();
  DWORD1(v115) = v72;
  sub_141475530(v107, &v115, 3577643008LL, 27111902);
  if ( v107[0] )
    v73 = 0;
  else
    v73 = *(_QWORD *)&v107[8];
  *((_QWORD *)&v89 + 1) = v73;
  sub_1407A0EE0(&v81);
  serialize_2(v107, a2, &v81);
  if ( *(_DWORD *)v107 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v107[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v107[64];
    v74 = *(_OWORD *)v107;
    v75 = *(_OWORD *)&v107[16];
    v76 = *(_OWORD *)&v107[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v107[48];
    *(_OWORD *)(a1 + 40) = v76;
    *(_OWORD *)(a1 + 24) = v75;
    *(_OWORD *)(a1 + 8) = v74;
    *(_QWORD *)a1 = -1;
    if ( (_QWORD)v95 )
      sub_140001660(*((_QWORD *)&v95 + 1), v95, 1);
    if ( *((_QWORD *)&v96 + 1) )
      sub_140001660(v97, *((_QWORD *)&v96 + 1), 1);
    if ( (_QWORD)v98 )
      sub_140001660(*((_QWORD *)&v98 + 1), v98, 1);
    if ( *((_QWORD *)&v99 + 1) )
      sub_140001660(v100, *((_QWORD *)&v99 + 1), 1);
    goto LABEL_30;
  }
  sub_1407A0CC0(&v115, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), &v81);
  v113 = v101;
  v112 = v100;
  v111 = v99;
  v110 = v98;
  v109 = v97;
  v108 = v96;
  *(_OWORD *)&v107[128] = v95;
  *(_OWORD *)v107 = v115;
  *(_OWORD *)&v107[16] = v116;
  *(_OWORD *)&v107[32] = v117;
  *(_OWORD *)&v107[48] = v118;
  *(_OWORD *)&v107[64] = v119;
  *(_OWORD *)&v107[80] = v120;
  *(_OWORD *)&v107[96] = v121;
  *(_OWORD *)&v107[112] = v122;
  sub_141684120(a1, v107, 240);
  sub_1406CE470((__int64)&v81);
  if ( (v132 & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v78, v77) )
    *((_BYTE *)Address + 1) = 1;
  v79 = Address;
  v80 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v80 == 2 )
    WakeByAddressSingle(v79);
LABEL_35:
  v38 = v130;
  v39 = v130[9];
  if ( v39 != -1 && v39 )
    sub_140001660(v130[10], v39, 1);
  if ( *v38 )
    sub_140001660(v38[1], *v38, 1);
  v40 = v38[3];
  if ( v40 )
    sub_140001660(v38[4], v40, 1);
  v41 = v38[6];
  if ( v41 )
    sub_140001660(v38[7], v41, 1);
  return a1;
}