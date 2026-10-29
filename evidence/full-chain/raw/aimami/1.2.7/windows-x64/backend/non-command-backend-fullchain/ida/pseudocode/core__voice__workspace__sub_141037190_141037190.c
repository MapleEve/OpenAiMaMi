// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x141037190 | name sub_141037190
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141037190(__int64 a1, __int64 a2, _QWORD *a3)
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
  __int64 v14; // r14
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _QWORD *v18; // rbx
  const __m128i *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rcx
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  __int64 v34; // rax
  char *v35; // rdi
  char v36; // al
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 v42; // rbx
  __int64 v43; // r14
  __int64 v44; // r13
  __m128i *v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // r12
  signed __int64 v48; // rbx
  __m128i *v49; // rax
  __int64 v50; // r15
  __m128i *v51; // rax
  __m128i *v52; // r14
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm2
  unsigned __int64 v62; // rbx
  __int64 v63; // r14
  __int64 v64; // r15
  __int64 v65; // rdx
  unsigned __int64 v66; // rbx
  __int64 v67; // r14
  __int64 v68; // r15
  __int64 v69; // rdx
  unsigned __int64 v70; // rbx
  __int64 v71; // r14
  __int64 v72; // r15
  __int64 v73; // rdx
  int v74; // edx
  __int64 v75; // rax
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm2
  __int64 v79; // rcx
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
  __int128 v103; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v104; // [rsp+170h] [rbp+F0h]
  __int128 v105; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v106; // [rsp+188h] [rbp+108h]
  const __m128i *v107; // [rsp+190h] [rbp+110h]
  const __m128i *v108; // [rsp+198h] [rbp+118h]
  __int64 v109; // [rsp+1A0h] [rbp+120h]
  __m128i *v110; // [rsp+1A8h] [rbp+128h]
  _BYTE v111[144]; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v112; // [rsp+240h] [rbp+1C0h]
  __int128 v113; // [rsp+250h] [rbp+1D0h]
  __int128 v114; // [rsp+260h] [rbp+1E0h]
  __int128 v115; // [rsp+270h] [rbp+1F0h]
  __int128 v116; // [rsp+280h] [rbp+200h]
  __int128 v117; // [rsp+290h] [rbp+210h]
  __int64 v118; // [rsp+2A8h] [rbp+228h]
  unsigned __int64 v119; // [rsp+2B0h] [rbp+230h]
  __int64 v120; // [rsp+2B8h] [rbp+238h]
  __int128 v121; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v122; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v123; // [rsp+2E0h] [rbp+260h]
  __int128 v124; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v125; // [rsp+300h] [rbp+280h] BYREF
  __int128 v126; // [rsp+310h] [rbp+290h]
  __int128 v127; // [rsp+320h] [rbp+2A0h]
  __int128 v128; // [rsp+330h] [rbp+2B0h]
  _QWORD *v129; // [rsp+340h] [rbp+2C0h]
  PVOID Address; // [rsp+348h] [rbp+2C8h]
  __int64 v131; // [rsp+350h] [rbp+2D0h]
  __int64 v132; // [rsp+358h] [rbp+2D8h]
  __int64 v133; // [rsp+360h] [rbp+2E0h]
  char v134; // [rsp+36Eh] [rbp+2EEh] BYREF
  char v135; // [rsp+36Fh] [rbp+2EFh]
  __int64 v136; // [rsp+370h] [rbp+2F0h]

  v136 = -2;
  v129 = a3;
  sub_14103FB60(v111);
  v5 = *(_OWORD *)v111;
  v6 = v111[16];
  if ( *(_QWORD *)v111 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v111[80];
    v7 = *(_OWORD *)&v111[17];
    v8 = *(_OWORD *)&v111[33];
    v9 = *(_OWORD *)&v111[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v111[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    goto LABEL_35;
  }
  v135 = v111[16];
  Address = *(PVOID *)&v111[8];
  sub_14103B320(v111);
  v121 = *(_OWORD *)&v111[8];
  v122 = *(_OWORD *)&v111[24];
  v123 = *(_OWORD *)&v111[40];
  v124 = *(_OWORD *)&v111[56];
  v125 = *(_OWORD *)&v111[72];
  v126 = *(_OWORD *)&v111[88];
  if ( *(_QWORD *)v111 == -1 )
  {
    *(_OWORD *)(a1 + 88) = v126;
    *(_OWORD *)(a1 + 72) = v125;
    v15 = v121;
    v16 = v122;
    v17 = v123;
    *(_OWORD *)(a1 + 56) = v124;
    *(_OWORD *)(a1 + 40) = v17;
    *(_OWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = -1;
    goto LABEL_31;
  }
  v91 = *(_QWORD *)&v111[136];
  v90 = *(_OWORD *)&v111[120];
  v89 = *(_OWORD *)&v111[104];
  v83 = v121;
  v84 = v122;
  v85 = v123;
  v86 = v124;
  v87 = v125;
  v88 = v126;
  v82 = *(_QWORD *)v111;
  LODWORD(v121) = sub_141683E80(*(_QWORD *)&v111[136], v10, v12);
  DWORD1(v121) = v13;
  sub_141683E30(v111, &v121, 3577643008LL, 27111902);
  if ( v111[0] )
    v14 = 0;
  else
    v14 = *(_QWORD *)&v111[8];
  v18 = v129;
  v19 = (const __m128i *)sub_140E91160(v129[1], v129[2]);
  v21 = v20;
  v107 = (const __m128i *)sub_140E91160(v18[4], v18[5]);
  v118 = v22;
  v108 = (const __m128i *)sub_140E91160(v18[7], v18[8]);
  v131 = v21;
  if ( !v21 )
  {
    nullsub_1(v24);
    v32 = (void *)sub_140001650(30, 1);
    if ( !v32 )
      sub_141938D2B(1, 30);
    qmemcpy(v32, "Template title cannot be empty", 30);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 30;
    *(_QWORD *)(a1 + 24) = v32;
    *(_QWORD *)(a1 + 32) = 30;
    goto LABEL_29;
  }
  if ( !v23 )
  {
    nullsub_1(v24);
    v33 = (void *)sub_140001650(32, 1);
    if ( !v33 )
      sub_141938D2B(1, 32);
    qmemcpy(v33, "Template content cannot be empty", 32);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 32;
    *(_QWORD *)(a1 + 24) = v33;
    *(_QWORD *)(a1 + 32) = 32;
    goto LABEL_29;
  }
  v119 = v23;
  v109 = v14;
  if ( v18[9] == -1 || (v25 = v18[10], v26 = v18[11], sub_140E91160(v25, v26), !v27) )
  {
    sub_141568C20(&v103);
    *(_QWORD *)&v121 = 0;
    *((_QWORD *)&v121 + 1) = 1;
    *(_QWORD *)&v122 = 0;
    *(_QWORD *)&v111[16] = 1610612768;
    *(_QWORD *)v111 = &v121;
    *(_QWORD *)&v111[8] = &off_141A72708;
    if ( (unsigned __int8)sub_141569D80(&v103, v111) )
      sub_141939040(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v134,
        (unsigned int)&unk_141A6D618,
        (__int64)&off_141A727C0);
    v132 = *((_QWORD *)&v121 + 1);
    v133 = v121;
    if ( (unsigned __int64)v122 <= 8 )
    {
      if ( (_QWORD)v122 != 8 )
LABEL_25:
        sub_141938F40(DWORD2(v121), v122, 0, 8, (__int64)&off_141A713B8);
    }
    else if ( *(char *)(*((_QWORD *)&v121 + 1) + 8LL) <= -65 )
    {
      goto LABEL_25;
    }
    *(_QWORD *)&v105 = *((_QWORD *)&v121 + 1);
    *((_QWORD *)&v105 + 1) = 8;
    *(_QWORD *)&v121 = &v105;
    *((_QWORD *)&v121 + 1) = sub_140186EE0;
    sub_1416ABFD0(v111, &unk_141A713D0, &v121);
    if ( v133 )
      sub_140001660(v132, v133, 1);
    v42 = v131;
    v132 = *(_QWORD *)&v111[8];
    v133 = *(_QWORD *)v111;
    if ( v131 < 0 )
    {
      v43 = 0;
      goto LABEL_50;
    }
    v44 = *(_QWORD *)&v111[16];
    nullsub_1(*(_QWORD *)&v111[8]);
    v43 = 1;
    v45 = (__m128i *)sub_140001650(v42, 1);
    if ( !v45 )
LABEL_50:
      sub_141938D2B(v43, v42);
    v110 = v45;
    sub_1418F44E0(v45, v19, v42);
    v47 = v118;
    v48 = v119;
    if ( v118 < 0 )
    {
      v43 = 0;
      goto LABEL_54;
    }
    if ( v118 )
    {
      nullsub_1(v46);
      v49 = (__m128i *)sub_140001650(v47, 1);
      if ( !v49 )
LABEL_54:
        sub_141938D2B(v43, v47);
      v120 = (__int64)v49;
      sub_1418F44E0(v49, v107, v47);
    }
    else
    {
      v120 = 1;
    }
    if ( v48 >= 0 )
    {
      nullsub_1(v46);
      v50 = 1;
      v51 = (__m128i *)sub_140001650(v48, 1);
      if ( v51 )
      {
        v52 = v51;
        sub_1418F44E0(v51, v108, v48);
        *(_QWORD *)&v121 = v133;
        *((_QWORD *)&v121 + 1) = v132;
        *(_QWORD *)&v122 = v44;
        *((_QWORD *)&v122 + 1) = v131;
        *(_QWORD *)&v123 = v110;
        *((_QWORD *)&v123 + 1) = v131;
        *(_QWORD *)&v124 = v47;
        *((_QWORD *)&v124 + 1) = v120;
        *(_QWORD *)&v125 = v47;
        *((_QWORD *)&v125 + 1) = v48;
        *(_QWORD *)&v126 = v52;
        *((_QWORD *)&v126 + 1) = v48;
        WORD4(v127) = 1280;
        v53 = v109;
        *(_QWORD *)&v127 = v109;
        sub_1416AC440(&v94, &v121);
        sub_1416AC440(&v92, (char *)&v122 + 8);
        sub_1416AC440(&v105, &v124);
        sub_1416AC440(&v103, (char *)&v125 + 8);
        *(_QWORD *)&v111[16] = v95;
        *(_OWORD *)v111 = v94;
        *(_OWORD *)&v111[24] = v92;
        *(_QWORD *)&v111[40] = v93;
        *(_OWORD *)&v111[48] = v105;
        *(_QWORD *)&v111[64] = v106;
        *(_OWORD *)&v111[72] = v103;
        *(_QWORD *)&v111[88] = v104;
        *(_WORD *)&v111[104] = 1280;
        *(_QWORD *)&v111[96] = v53;
        v56 = *((_QWORD *)&v83 + 1);
        if ( *((_QWORD *)&v83 + 1) == v82 )
          sub_14190F500(&v82);
        v57 = v83;
        v58 = 112 * v56;
        *(_OWORD *)(v83 + v58 + 96) = *(_OWORD *)&v111[96];
        *(_OWORD *)(v57 + v58 + 80) = *(_OWORD *)&v111[80];
        *(_OWORD *)(v57 + v58 + 64) = *(_OWORD *)&v111[64];
        v59 = *(_OWORD *)v111;
        v60 = *(_OWORD *)&v111[16];
        v61 = *(_OWORD *)&v111[32];
        *(_OWORD *)(v57 + v58 + 48) = *(_OWORD *)&v111[48];
        *(_OWORD *)(v57 + v58 + 32) = v61;
        *(_OWORD *)(v57 + v58 + 16) = v60;
        *(_OWORD *)(v57 + v58) = v59;
        *((_QWORD *)&v83 + 1) = v56 + 1;
        v96 = v121;
        v97 = v122;
        v98 = v123;
        v99 = v124;
        v100 = v125;
        v101 = v126;
        v102 = v127;
        goto LABEL_78;
      }
    }
    else
    {
      v50 = 0;
    }
    sub_141938D2B(v50, v48);
  }
  *(_QWORD *)&v103 = v18 + 9;
  if ( !*((_QWORD *)&v83 + 1) )
  {
LABEL_28:
    *(_QWORD *)&v121 = &v103;
    *((_QWORD *)&v121 + 1) = sub_140369D80;
    sub_1416ABFD0(&v111[8], &unk_141A6D281, &v121);
    *(_QWORD *)v111 = 8;
    v34 = *(_QWORD *)&v111[8];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v111[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v111[64];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v111[48];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v111[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v111[16];
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = v34;
LABEL_29:
    *(_QWORD *)a1 = -1;
LABEL_30:
    sub_140FA5420((__int64)&v82);
LABEL_31:
    v35 = (char *)Address;
    if ( (v135 & 1) == 0 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v11) )
      v35[1] = 1;
    v36 = *v35;
    *v35 = 0;
    if ( v36 == 2 )
      WakeByAddressSingle(v35);
    goto LABEL_35;
  }
  v28 = v83;
  v29 = 112LL * *((_QWORD *)&v83 + 1);
  while ( *(_QWORD *)(v28 + 16) != v26 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v28 + 8), v25) )
  {
    v28 += 112;
    v29 -= 112;
    if ( !v29 )
      goto LABEL_28;
  }
  if ( *(_BYTE *)(v28 + 104) )
  {
    nullsub_1(v30);
    v31 = (void *)sub_140001650(41, 1);
    if ( !v31 )
      sub_141938D2B(1, 41);
    qmemcpy(v31, "Built-in voice templates cannot be edited", 41);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 41;
    *(_QWORD *)(a1 + 24) = v31;
    *(_QWORD *)(a1 + 32) = 41;
    goto LABEL_29;
  }
  v62 = v131;
  sub_14072C410((unsigned int)v111, v131, 0, 1, 1);
  v63 = *(_QWORD *)&v111[8];
  if ( v111[0] )
    sub_141938D2B(*(_QWORD *)&v111[8], *(_QWORD *)&v111[16]);
  v64 = *(_QWORD *)&v111[16];
  sub_1418F44E0(*(__m128i **)&v111[16], v19, v62);
  v65 = *(_QWORD *)(v28 + 24);
  if ( v65 )
    sub_140001660(*(_QWORD *)(v28 + 32), v65, 1);
  *(_QWORD *)(v28 + 24) = v63;
  *(_QWORD *)(v28 + 32) = v64;
  *(_QWORD *)(v28 + 40) = v62;
  v66 = v118;
  sub_14072C410((unsigned int)v111, v118, 0, 1, 1);
  v67 = *(_QWORD *)&v111[8];
  if ( *(_DWORD *)v111 == 1 )
    sub_141938D2B(*(_QWORD *)&v111[8], *(_QWORD *)&v111[16]);
  v68 = *(_QWORD *)&v111[16];
  if ( v66 )
    sub_1418F44E0(*(__m128i **)&v111[16], v107, v66);
  v69 = *(_QWORD *)(v28 + 48);
  if ( v69 )
    sub_140001660(*(_QWORD *)(v28 + 56), v69, 1);
  *(_QWORD *)(v28 + 48) = v67;
  *(_QWORD *)(v28 + 56) = v68;
  *(_QWORD *)(v28 + 64) = v66;
  v70 = v119;
  sub_14072C410((unsigned int)v111, v119, 0, 1, 1);
  v71 = *(_QWORD *)&v111[8];
  if ( *(_DWORD *)v111 == 1 )
    sub_141938D2B(*(_QWORD *)&v111[8], *(_QWORD *)&v111[16]);
  v72 = *(_QWORD *)&v111[16];
  sub_1418F44E0(*(__m128i **)&v111[16], v108, v70);
  v73 = *(_QWORD *)(v28 + 72);
  if ( v73 )
    sub_140001660(*(_QWORD *)(v28 + 80), v73, 1);
  *(_QWORD *)(v28 + 72) = v71;
  *(_QWORD *)(v28 + 80) = v72;
  *(_QWORD *)(v28 + 88) = v119;
  *(_QWORD *)(v28 + 96) = v109;
  sub_14104A1C0(&v96, v28);
LABEL_78:
  LODWORD(v91) = 1;
  LODWORD(v121) = sub_141683E80(v58, v54, v55);
  DWORD1(v121) = v74;
  sub_141683E30(v111, &v121, 3577643008LL, 27111902);
  if ( v111[0] )
    v75 = 0;
  else
    v75 = *(_QWORD *)&v111[8];
  *((_QWORD *)&v90 + 1) = v75;
  sub_14102FC50(&v82);
  sub_14103CBF0(v111, a2, &v82);
  if ( *(_DWORD *)v111 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v111[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v111[64];
    v76 = *(_OWORD *)v111;
    v77 = *(_OWORD *)&v111[16];
    v78 = *(_OWORD *)&v111[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v111[48];
    *(_OWORD *)(a1 + 40) = v78;
    *(_OWORD *)(a1 + 24) = v77;
    *(_OWORD *)(a1 + 8) = v76;
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
  sub_14102FA30(&v121, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), &v82);
  v117 = v102;
  v116 = v101;
  v115 = v100;
  v114 = v99;
  v113 = v98;
  v112 = v97;
  *(_OWORD *)&v111[128] = v96;
  *(_OWORD *)v111 = v121;
  *(_OWORD *)&v111[16] = v122;
  *(_OWORD *)&v111[32] = v123;
  *(_OWORD *)&v111[48] = v124;
  *(_OWORD *)&v111[64] = v125;
  *(_OWORD *)&v111[80] = v126;
  *(_OWORD *)&v111[96] = v127;
  *(_OWORD *)&v111[112] = v128;
  sub_1418F44E0((__m128i *)a1, (const __m128i *)v111, 0xF0u);
  sub_140FA5420((__int64)&v82);
  if ( (v135 & 1) == 0 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v79) )
    *((_BYTE *)Address + 1) = 1;
  v80 = Address;
  v81 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v81 == 2 )
    WakeByAddressSingle(v80);
LABEL_35:
  v37 = v129;
  v38 = v129[9];
  if ( v38 != -1 && v38 )
    sub_140001660(v129[10], v38, 1);
  if ( *v37 )
    sub_140001660(v37[1], *v37, 1);
  v39 = v37[3];
  if ( v39 )
    sub_140001660(v37[4], v39, 1);
  v40 = v37[6];
  if ( v40 )
    sub_140001660(v37[7], v40, 1);
  return a1;
}
