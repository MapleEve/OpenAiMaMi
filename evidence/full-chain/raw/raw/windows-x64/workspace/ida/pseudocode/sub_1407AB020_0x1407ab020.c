// module: codexmate_lib/core/voice/workspace
// addr: 0x1407ab020
// name: sub_1407AB020
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407AB020(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // kr00_16
  char v6; // dl
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // r15
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  char *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 *v35; // r14
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // r14
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 *v51; // r13
  __int64 v52; // rbx
  __int64 v53; // r14
  void *v54; // rax
  void *v55; // rax
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  char v60; // al
  _QWORD *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v69; // rbx
  __int64 v70; // r14
  __int64 v71; // r13
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r15
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // r14
  char v79; // al
  __int64 v80; // r14
  __int64 v81; // rdx
  __int64 v82; // r14
  __int64 v83; // rdx
  __int64 v84; // r14
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rax
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm2
  __int64 v92; // rdx
  __int64 v93; // rcx
  PVOID v94; // rcx
  char v95; // al
  __int64 v96; // rdx
  _QWORD v97[20]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v98; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v99; // [rsp+D8h] [rbp+58h]
  __int128 v100; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v101; // [rsp+F8h] [rbp+78h]
  __int128 v102; // [rsp+108h] [rbp+88h]
  __m256i v103; // [rsp+118h] [rbp+98h]
  __int128 v104; // [rsp+138h] [rbp+B8h]
  __int128 v105; // [rsp+148h] [rbp+C8h]
  __int64 v106; // [rsp+158h] [rbp+D8h]
  _QWORD v107[2]; // [rsp+160h] [rbp+E0h] BYREF
  _QWORD v108[2]; // [rsp+170h] [rbp+F0h] BYREF
  _BYTE v109[136]; // [rsp+180h] [rbp+100h] BYREF
  __int64 v110; // [rsp+208h] [rbp+188h]
  __int64 v111; // [rsp+2A0h] [rbp+220h]
  __int64 v112; // [rsp+2A8h] [rbp+228h]
  __int64 v113; // [rsp+2B0h] [rbp+230h]
  __int128 v114; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v115; // [rsp+2C8h] [rbp+248h]
  __int128 v116; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v117; // [rsp+2E0h] [rbp+260h]
  __int128 v118; // [rsp+2F0h] [rbp+270h]
  __int128 v119; // [rsp+300h] [rbp+280h]
  __m256i v120; // [rsp+310h] [rbp+290h]
  __int128 v121; // [rsp+330h] [rbp+2B0h]
  _BYTE v122[24]; // [rsp+340h] [rbp+2C0h]
  __int64 v123; // [rsp+358h] [rbp+2D8h]
  __int64 v124; // [rsp+360h] [rbp+2E0h]
  char v125; // [rsp+368h] [rbp+2E8h]
  __int128 v126; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v127; // [rsp+388h] [rbp+308h]
  __int64 *v128; // [rsp+390h] [rbp+310h]
  __int128 v129; // [rsp+398h] [rbp+318h] BYREF
  __int64 v130; // [rsp+3A8h] [rbp+328h]
  PVOID Address; // [rsp+3B0h] [rbp+330h]
  __int64 v132; // [rsp+3B8h] [rbp+338h]
  char v133; // [rsp+3C7h] [rbp+347h] BYREF
  __int64 v134; // [rsp+3C8h] [rbp+348h]
  __int64 v135; // [rsp+3D0h] [rbp+350h]
  __int64 v136; // [rsp+3D8h] [rbp+358h]
  char v137; // [rsp+3E5h] [rbp+365h]
  char v138; // [rsp+3E6h] [rbp+366h]
  char v139; // [rsp+3E7h] [rbp+367h]
  char v140; // [rsp+3E8h] [rbp+368h]
  char v141; // [rsp+3E9h] [rbp+369h]
  char v142; // [rsp+3EAh] [rbp+36Ah]
  char v143; // [rsp+3EBh] [rbp+36Bh]
  char v144; // [rsp+3ECh] [rbp+36Ch]
  char v145; // [rsp+3EDh] [rbp+36Dh]
  char v146; // [rsp+3EEh] [rbp+36Eh]
  char v147; // [rsp+3EFh] [rbp+36Fh]
  __int64 v148; // [rsp+3F0h] [rbp+370h]

  v148 = -2;
  v136 = a3;
  v144 = 1;
  v143 = 1;
  sub_1407B1010(v109);
  v5 = *(_OWORD *)v109;
  v6 = v109[16];
  if ( *(_QWORD *)v109 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v109[80];
    v7 = *(_OWORD *)&v109[17];
    v8 = *(_OWORD *)&v109[33];
    v9 = *(_OWORD *)&v109[49];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v109[65];
    *(_OWORD *)(a1 + 57) = v9;
    *(_OWORD *)(a1 + 41) = v8;
    *(_OWORD *)(a1 + 25) = v7;
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    v10 = 1;
    goto LABEL_57;
  }
  v140 = v109[16];
  Address = *(PVOID *)&v109[8];
  v142 = 1;
  v141 = 1;
  read_workspace_file(v109);
  v116 = *(_OWORD *)&v109[8];
  v117 = *(_OWORD *)&v109[24];
  v118 = *(_OWORD *)&v109[40];
  v119 = *(_OWORD *)&v109[56];
  v120 = *(__m256i *)&v109[72];
  if ( *(_QWORD *)v109 == -1 )
  {
    *(__m256i *)(a1 + 72) = v120;
    v15 = v116;
    v16 = v117;
    v17 = v118;
    *(_OWORD *)(a1 + 56) = v119;
    *(_OWORD *)(a1 + 40) = v17;
    *(_OWORD *)(a1 + 24) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)a1 = -1;
    v10 = 1;
    v18 = (char *)Address;
    if ( (v140 & 1) == 0 )
    {
LABEL_54:
      if ( 2 * *off_141EC90B8 )
      {
        v144 = v10;
        v143 = v10;
        if ( !(unsigned __int8)sub_1416C2250(v12, v11) )
          v18[1] = 1;
      }
    }
LABEL_55:
    v60 = *v18;
    *v18 = 0;
    if ( v60 == 2 )
    {
      v144 = v10;
      v143 = v10;
      WakeByAddressSingle(v18);
    }
LABEL_57:
    v61 = (_QWORD *)v136;
    v62 = *(_QWORD *)(v136 + 48);
    if ( v62 != -1 && v62 )
      sub_140001660(*(_QWORD *)(v136 + 56), v62, 1);
    if ( *v61 )
      sub_140001660(v61[1], *v61, 1);
    v63 = v61[3];
    if ( v63 )
      sub_140001660(v61[4], v63, 1);
    if ( v10 )
    {
      v64 = v61[9];
      if ( v64 != -1 && v64 )
        sub_140001660(v61[10], v64, 1);
      v65 = v61[12];
      if ( v65 != -1 )
      {
        if ( v65 )
        {
          v66 = v61[13];
LABEL_71:
          sub_140001660(v66, v65, 1);
          goto LABEL_72;
        }
      }
    }
    goto LABEL_72;
  }
  v106 = v110;
  v105 = *(_OWORD *)&v109[120];
  v104 = *(_OWORD *)&v109[104];
  v99 = v116;
  v100 = v117;
  v101 = v118;
  v102 = v119;
  v103 = v120;
  v98 = *(_QWORD *)v109;
  v146 = 1;
  v145 = 1;
  LODWORD(v116) = sub_141475580();
  DWORD1(v116) = v13;
  v146 = 1;
  v145 = 1;
  sub_141475530(v109, &v116, 3577643008LL, 27111902);
  if ( v109[0] )
    v14 = 0;
  else
    v14 = *(_QWORD *)&v109[8];
  v19 = *(_QWORD *)(v136 + 8);
  v20 = *(_QWORD *)(v136 + 16);
  v146 = 1;
  v145 = 1;
  v111 = sub_14033BC10(v19, v20);
  v134 = v21;
  v22 = *(_QWORD *)(v136 + 32);
  v23 = *(_QWORD *)(v136 + 40);
  v146 = 1;
  v145 = 1;
  v112 = sub_14033BC10(v22, v23);
  v25 = v24;
  if ( *(_QWORD *)(v136 + 120) != -1
    && (v26 = *(_QWORD *)(v136 + 128),
        v27 = *(_QWORD *)(v136 + 136),
        v146 = 1,
        v145 = 1,
        (v30 = sub_14033BC10(v26, v27)) != 0)
    && (v31 = v28) != 0 )
  {
    if ( v28 < 0 )
    {
      v32 = 0;
      goto LABEL_14;
    }
    v135 = v25;
    v56 = v14;
    nullsub_1(v29);
    v32 = 1;
    v57 = sub_140001650(v31, 1);
    if ( !v57 )
    {
LABEL_14:
      v146 = 1;
      v145 = 1;
      sub_1416C2D4B(v32, v31);
    }
    v58 = v57;
    sub_141684120(v57, v30, v31);
    *(_QWORD *)&v129 = v31;
    *((_QWORD *)&v129 + 1) = v58;
    v130 = v31;
    v14 = v56;
    v25 = v135;
  }
  else
  {
    *(_QWORD *)&v129 = -1;
  }
  v33 = v136;
  *(_QWORD *)&v109[16] = *(_QWORD *)(v136 + 88);
  *(_OWORD *)v109 = *(_OWORD *)(v136 + 72);
  v139 = 1;
  v138 = 1;
  sub_1407AAF00((__int64 *)&v114, (__int64 *)v109);
  *(_QWORD *)&v109[16] = *(_QWORD *)(v33 + 112);
  *(_OWORD *)v109 = *(_OWORD *)(v33 + 96);
  v137 = 1;
  sub_1407AAF00((__int64 *)&v126, (__int64 *)v109);
  if ( !v134 )
  {
    nullsub_1(v34);
    v54 = (void *)sub_140001650(33, 1);
    if ( !v54 )
    {
      v147 = 1;
      sub_1416C2D4B(1, 33);
    }
    qmemcpy(v54, "Vocabulary source cannot be empty", 33);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 33;
    *(_QWORD *)(a1 + 24) = v54;
    *(_QWORD *)(a1 + 32) = 33;
    goto LABEL_44;
  }
  if ( !v25 )
  {
    nullsub_1(v34);
    v55 = (void *)sub_140001650(38, 1);
    if ( !v55 )
    {
      v147 = 1;
      sub_1416C2D4B(1, 38);
    }
    qmemcpy(v55, "Vocabulary replacement cannot be empty", 38);
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 38;
    *(_QWORD *)(a1 + 24) = v55;
    *(_QWORD *)(a1 + 32) = 38;
    goto LABEL_44;
  }
  v35 = (__int64 *)(v136 + 48);
  if ( *(_QWORD *)(v136 + 48) == -1
    || (v36 = *(_QWORD *)(v136 + 56), v37 = *(_QWORD *)(v136 + 64), v147 = 1, sub_14033BC10(v36, v37), !v38) )
  {
    v147 = 1;
    sub_141356270(v108);
    *(_QWORD *)&v116 = 0;
    *((_QWORD *)&v116 + 1) = 1;
    *(_QWORD *)&v117 = 0;
    *(_QWORD *)&v109[16] = 1610612768;
    *(_QWORD *)v109 = &v116;
    *(_QWORD *)&v109[8] = &off_141790AA0;
    if ( (unsigned __int8)sub_141356790(v108, v109) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v133,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v132 = *((_QWORD *)&v116 + 1);
    v135 = v116;
    if ( (unsigned __int64)v117 <= 8 )
    {
      if ( (_QWORD)v117 != 8 )
LABEL_38:
        sub_1416C2F60(DWORD2(v116), v117, 0, 8, (__int64)&off_141790460);
    }
    else if ( *(char *)(*((_QWORD *)&v116 + 1) + 8LL) <= -65 )
    {
      goto LABEL_38;
    }
    v107[0] = *((_QWORD *)&v116 + 1);
    v107[1] = 8;
    *(_QWORD *)&v116 = v107;
    *((_QWORD *)&v116 + 1) = sub_14041F680;
    sub_14149C0F0(v109, &unk_141790478, &v116);
    if ( v135 )
      sub_140001660(v132, v135, 1);
    v132 = *(_QWORD *)&v109[8];
    v69 = v134;
    v135 = *(_QWORD *)v109;
    if ( v134 >= 0 )
    {
      v128 = v35;
      v71 = v25;
      v72 = *(_QWORD *)&v109[16];
      nullsub_1(*(_QWORD *)&v109[8]);
      v70 = 1;
      v73 = sub_140001650(v69, 1);
      if ( v73 )
      {
        v113 = v73;
        sub_141684120(v73, v111, v69);
        if ( v71 >= 0 )
        {
          v76 = v14;
          nullsub_1(v74);
          v75 = 1;
          v77 = sub_140001650(v71, 1);
          if ( v77 )
          {
            v78 = v77;
            sub_141684120(v77, v112, v71);
            v79 = *(_BYTE *)(v136 + 144);
            *(_OWORD *)&v120.m256i_u64[1] = v114;
            v120.m256i_i64[3] = v115;
            *(_QWORD *)v122 = v127;
            v121 = v126;
            v123 = v130;
            *(_OWORD *)&v122[8] = v129;
            *(_QWORD *)&v116 = v135;
            *((_QWORD *)&v116 + 1) = v132;
            *(_QWORD *)&v117 = v72;
            *((_QWORD *)&v117 + 1) = v134;
            *(_QWORD *)&v118 = v113;
            *((_QWORD *)&v118 + 1) = v134;
            *(_QWORD *)&v119 = v71;
            *((_QWORD *)&v119 + 1) = v78;
            v120.m256i_i64[0] = v71;
            v125 = v79;
            v124 = v76;
            sub_1407BA800(v109, &v116);
            v80 = v101;
            v51 = v128;
            if ( (_QWORD)v101 == (_QWORD)v100 )
              sub_141689490(&v100);
            sub_141684120(*((_QWORD *)&v100 + 1) + 160 * v80, v109, 160);
            *(_QWORD *)&v101 = v80 + 1;
            sub_141684120(v97, &v116, 160);
            LODWORD(v134) = 0;
            goto LABEL_107;
          }
        }
        else
        {
          v75 = 0;
        }
        sub_1416C2D4B(v75, v71);
      }
    }
    else
    {
      v70 = 0;
    }
    sub_1416C2D4B(v70, v69);
  }
  v135 = v14;
  v128 = v35;
  v108[0] = v35;
  if ( !(_QWORD)v101 )
  {
LABEL_43:
    *(_QWORD *)&v116 = v108;
    *((_QWORD *)&v116 + 1) = sub_1406B5450;
    v147 = 1;
    sub_14149C0F0(&v109[8], &unk_141788E31, &v116);
    *(_QWORD *)v109 = 8;
    v59 = *(_QWORD *)&v109[8];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v109[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v109[64];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v109[48];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v109[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v109[16];
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = v59;
LABEL_44:
    *(_QWORD *)a1 = -1;
LABEL_45:
    if ( (unsigned __int64)(v126 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
      sub_140001660(*((_QWORD *)&v126 + 1), v126, 1);
    if ( (_QWORD)v114 != -1 && (_QWORD)v114 )
      sub_140001660(*((_QWORD *)&v114 + 1), v114, 1);
    if ( (_QWORD)v129 != -1 && (_QWORD)v129 )
      sub_140001660(*((_QWORD *)&v129 + 1), v129, 1);
LABEL_53:
    v142 = 0;
    v141 = 0;
    sub_1406CE470((__int64)&v98);
    v10 = 0;
    v18 = (char *)Address;
    if ( (v140 & 1) == 0 )
      goto LABEL_54;
    goto LABEL_55;
  }
  v39 = v25;
  v40 = *((_QWORD *)&v100 + 1);
  v41 = 160 * v101;
  v42 = *(_QWORD *)(v136 + 56);
  v43 = *(_QWORD *)(v136 + 64);
  while ( *(_QWORD *)(v40 + 16) != v43 || (unsigned int)sub_1416847B0(*(_QWORD *)(v40 + 8), v42, v43) )
  {
    v40 += 160;
    v41 -= 160;
    if ( !v41 )
      goto LABEL_43;
  }
  v44 = v134;
  sub_140388B60((unsigned int)v109, v134, 0, 1, 1);
  v45 = *(_QWORD *)&v109[8];
  if ( v109[0] )
  {
    v147 = 1;
    sub_1416C2D4B(*(_QWORD *)&v109[8], *(_QWORD *)&v109[16]);
  }
  v46 = *(_QWORD *)&v109[16];
  sub_141684120(*(_QWORD *)&v109[16], v111, v44);
  v47 = *(_QWORD *)(v40 + 24);
  if ( v47 )
    sub_140001660(*(_QWORD *)(v40 + 32), v47, 1);
  *(_QWORD *)(v40 + 24) = v45;
  *(_QWORD *)(v40 + 32) = v46;
  *(_QWORD *)(v40 + 40) = v134;
  sub_140388B60((unsigned int)v109, v39, 0, 1, 1);
  v48 = *(_QWORD *)&v109[8];
  if ( *(_DWORD *)v109 == 1 )
  {
    v147 = 1;
    sub_1416C2D4B(*(_QWORD *)&v109[8], *(_QWORD *)&v109[16]);
  }
  v49 = *(_QWORD *)&v109[16];
  sub_141684120(*(_QWORD *)&v109[16], v112, v39);
  v50 = *(_QWORD *)(v40 + 48);
  v51 = v128;
  if ( v50 )
    sub_140001660(*(_QWORD *)(v40 + 56), v50, 1);
  *(_QWORD *)(v40 + 48) = v48;
  *(_QWORD *)(v40 + 56) = v49;
  *(_QWORD *)(v40 + 64) = v39;
  *(_BYTE *)(v40 + 152) = *(_BYTE *)(v136 + 144);
  if ( (_QWORD)v114 == -1 )
  {
    v53 = -1;
    v52 = v135;
  }
  else
  {
    v147 = 1;
    sub_14149C500(v109, &v114);
    v52 = v135;
    v53 = *(_QWORD *)v109;
    v116 = *(_OWORD *)&v109[8];
  }
  v81 = *(_QWORD *)(v40 + 72);
  if ( v81 != -1 && v81 )
    sub_140001660(*(_QWORD *)(v40 + 80), v81, 1);
  *(_QWORD *)(v40 + 72) = v53;
  *(_OWORD *)(v40 + 80) = v116;
  if ( (_QWORD)v126 == -1 )
  {
    v82 = -1;
  }
  else
  {
    v147 = 1;
    sub_14149C500(v109, &v126);
    v82 = *(_QWORD *)v109;
    v116 = *(_OWORD *)&v109[8];
  }
  v83 = *(_QWORD *)(v40 + 96);
  if ( v83 != -1 && v83 )
    sub_140001660(*(_QWORD *)(v40 + 104), v83, 1);
  *(_QWORD *)(v40 + 96) = v82;
  *(_OWORD *)(v40 + 104) = v116;
  if ( (_QWORD)v129 == -1 )
  {
    v84 = -1;
  }
  else
  {
    v147 = 1;
    sub_14149C500(v109, &v129);
    v84 = *(_QWORD *)v109;
    v116 = *(_OWORD *)&v109[8];
  }
  v85 = *(_QWORD *)(v40 + 120);
  if ( v85 != -1 && v85 )
    sub_140001660(*(_QWORD *)(v40 + 128), v85, 1);
  *(_QWORD *)(v40 + 120) = v84;
  *(_OWORD *)(v40 + 128) = v116;
  *(_QWORD *)(v40 + 144) = v52;
  v147 = 1;
  v86 = sub_1407BA800(v97, v40);
  LOBYTE(v86) = 1;
  LODWORD(v134) = v86;
LABEL_107:
  LODWORD(v106) = 1;
  LODWORD(v116) = sub_141475580();
  DWORD1(v116) = v87;
  sub_141475530(v109, &v116, 3577643008LL, 27111902);
  if ( v109[0] )
    v88 = 0;
  else
    v88 = *(_QWORD *)&v109[8];
  *((_QWORD *)&v105 + 1) = v88;
  sub_1407A0EE0(&v98);
  serialize_2(v109, a2, &v98);
  if ( *(_DWORD *)v109 != -1 )
  {
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v109[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v109[64];
    v89 = *(_OWORD *)v109;
    v90 = *(_OWORD *)&v109[16];
    v91 = *(_OWORD *)&v109[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v109[48];
    *(_OWORD *)(a1 + 40) = v91;
    *(_OWORD *)(a1 + 24) = v90;
    *(_OWORD *)(a1 + 8) = v89;
    *(_QWORD *)a1 = -1;
    sub_1402C64E0(v97);
    if ( !(_BYTE)v134 )
      goto LABEL_53;
    goto LABEL_45;
  }
  sub_1407A0CC0(&v116, *(_QWORD *)(a2 + 712), *(_QWORD *)(a2 + 720), &v98);
  sub_141684120(&v109[128], v97, 160);
  *(_OWORD *)v109 = v116;
  *(_OWORD *)&v109[16] = v117;
  *(_OWORD *)&v109[32] = v118;
  *(_OWORD *)&v109[48] = v119;
  *(__m256i *)&v109[64] = v120;
  *(_OWORD *)&v109[96] = v121;
  *(_OWORD *)&v109[112] = *(_OWORD *)v122;
  sub_141684120(a1, v109, 288);
  if ( (_BYTE)v134 )
  {
    if ( (_QWORD)v126 != -1 && (_QWORD)v126 )
      sub_140001660(*((_QWORD *)&v126 + 1), v126, 1);
    if ( (_QWORD)v114 != -1 && (_QWORD)v114 )
      sub_140001660(*((_QWORD *)&v114 + 1), v114, 1);
    if ( (_QWORD)v129 != -1 && (_QWORD)v129 )
      sub_140001660(*((_QWORD *)&v129 + 1), v129, 1);
  }
  v142 = 0;
  v141 = 0;
  sub_1406CE470((__int64)&v98);
  if ( (v140 & 1) == 0 )
  {
    if ( 2 * *off_141EC90B8 )
    {
      v144 = 0;
      v143 = 0;
      if ( !(unsigned __int8)sub_1416C2250(v93, v92) )
        *((_BYTE *)Address + 1) = 1;
    }
  }
  v94 = Address;
  v95 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v95 == 2 )
  {
    v144 = 0;
    v143 = 0;
    WakeByAddressSingle(v94);
  }
  v96 = *v51;
  v61 = (_QWORD *)v136;
  if ( *v51 != -1 && v96 )
    sub_140001660(*(_QWORD *)(v136 + 56), v96, 1);
  if ( *v61 )
    sub_140001660(v61[1], *v61, 1);
  v65 = v61[3];
  if ( v65 )
  {
    v66 = v61[4];
    goto LABEL_71;
  }
LABEL_72:
  v67 = v61[15];
  if ( v67 != -1 && v67 )
    sub_140001660(v61[16], v67, 1);
  return a1;
}