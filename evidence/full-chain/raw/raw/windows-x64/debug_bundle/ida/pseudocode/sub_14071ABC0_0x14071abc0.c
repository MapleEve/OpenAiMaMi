// module: codexmate_lib/core/debug_bundle
// addr: 0x14071abc0
// name: sub_14071ABC0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14071ABC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 *v8; // r15
  __int64 v9; // rbx
  int v10; // ebx
  __int64 v11; // rcx
  void *v12; // rax
  __int8 v13; // al
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r12
  void *v22; // rax
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // r12d
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  int v36; // ebx
  __int64 *v37; // r13
  int v38; // r15d
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int8 v42; // al
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r12
  __int8 v48; // r14
  __int64 *v49; // r13
  int v50; // r15d
  __int64 v51; // rax
  __int64 v52; // rcx
  void *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r12
  __int8 v56; // r14
  __int64 *v57; // r13
  int v58; // r15d
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rcx
  void *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r12
  __int8 v66; // r14
  __int64 *v67; // r13
  int v68; // r15d
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdi
  void *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  void *v76; // rax
  void *v77; // rax
  int v78; // ebx
  __int64 v79; // rcx
  void *v80; // rax
  __int64 v81; // rcx
  _OWORD *v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int8 v85; // cl
  __int64 v86; // rcx
  _QWORD *v87; // rax
  __int64 v88; // rcx
  _DWORD *v89; // rax
  __int64 v90; // rcx
  __int128 v91; // rdi
  __int64 v92; // r14
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 result; // rax
  __int64 v96; // [rsp+20h] [rbp-60h]
  __int64 v98; // [rsp+30h] [rbp-50h]
  __int64 v99; // [rsp+38h] [rbp-48h]
  __int64 v101; // [rsp+48h] [rbp-38h]
  __m512i v102; // [rsp+50h] [rbp-30h] BYREF
  __int128 v103; // [rsp+90h] [rbp+10h]
  __int128 v104; // [rsp+A0h] [rbp+20h]
  __int128 v105; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v106; // [rsp+C0h] [rbp+40h]
  __int128 v107; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v108; // [rsp+D8h] [rbp+58h]
  __m256i v109; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v110; // [rsp+100h] [rbp+80h]
  __int128 v111; // [rsp+110h] [rbp+90h]
  __int128 v112; // [rsp+120h] [rbp+A0h]
  __int128 v113; // [rsp+130h] [rbp+B0h]
  __int64 v114; // [rsp+140h] [rbp+C0h]
  __int64 v115; // [rsp+148h] [rbp+C8h]
  __int64 v116; // [rsp+150h] [rbp+D0h]
  __int64 v117; // [rsp+158h] [rbp+D8h]
  __int64 v118; // [rsp+160h] [rbp+E0h]
  __m256i v119; // [rsp+168h] [rbp+E8h] BYREF
  char v120; // [rsp+18Fh] [rbp+10Fh] BYREF
  __int64 v121; // [rsp+190h] [rbp+110h]
  __int128 v122; // [rsp+198h] [rbp+118h] BYREF
  __int64 v123; // [rsp+1A8h] [rbp+128h]
  __m256i v124; // [rsp+1B0h] [rbp+130h] BYREF
  char v125; // [rsp+1D5h] [rbp+155h]
  char v126; // [rsp+1D6h] [rbp+156h]
  char v127; // [rsp+1D7h] [rbp+157h]
  char v128; // [rsp+1D8h] [rbp+158h]
  char v129; // [rsp+1D9h] [rbp+159h]
  char v130; // [rsp+1DAh] [rbp+15Ah]
  char v131; // [rsp+1DBh] [rbp+15Bh]
  char v132; // [rsp+1DCh] [rbp+15Ch]
  char v133; // [rsp+1DDh] [rbp+15Dh]
  char v134; // [rsp+1DEh] [rbp+15Eh]
  char v135; // [rsp+1DFh] [rbp+15Fh]
  __int64 v136; // [rsp+1E0h] [rbp+160h]

  v136 = -2;
  v117 = a4;
  v6 = *(_QWORD *)(a2 + 72);
  v98 = *(_QWORD *)(a2 + 80);
  sub_14148D130(&v119, v6, v98);
  v7 = v119.m256i_i64[1];
  if ( v119.m256i_i64[0] == -1 )
  {
    *((_QWORD *)&v4 + 1) = v119.m256i_i64[1];
    if ( sub_140718A30(v119.m256i_u64[1]) )
    {
      v115 = *((_QWORD *)&v4 + 1);
      v124.m256i_i64[0] = *((_QWORD *)&v4 + 1);
      v102.m512i_i64[0] = 0;
      *(_OWORD *)&v102.m512i_u64[1] = 1u;
      v109.m256i_i64[2] = 1610612768;
      v109.m256i_i64[0] = (__int64)&v102;
      v109.m256i_i64[1] = (__int64)&off_141790AA0;
      if ( (unsigned __int8)sub_141490720(&v124, &v109) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v120,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v114 = v102.m512i_i64[1];
      v116 = v102.m512i_i64[0];
      sub_140403D70((__int64)&v109, v102.m512i_i64[1], v102.m512i_i64[2], a3, v117);
      v101 = v109.m256i_i64[1];
      v9 = v109.m256i_i64[0];
      *((_QWORD *)&v4 + 1) = v109.m256i_i64[2];
      if ( v116 )
        sub_140001660(v114, v116, 1);
      v116 = v9;
      sub_1401DD260(v115);
      v7 = 1;
      v114 = 0;
    }
    else
    {
      sub_1401DD260(*((_QWORD *)&v4 + 1));
      v116 = -1;
      v7 = 1;
      v114 = 0;
    }
    v8 = nullptr;
  }
  else
  {
    v114 = v119.m256i_i64[0];
    v116 = -1;
    v8 = (__int64 *)v119.m256i_i64[2];
  }
  v115 = v7;
  v10 = sub_14040A3A0(v7, v8);
  sub_1404187F0(&v102, a2);
  if ( v102.m512i_i32[0] == -1 )
  {
    *(_QWORD *)&v111 = v102.m512i_i64[7];
    v110 = *(_OWORD *)&v102.m512i_u64[5];
    v109 = *(__m256i *)&v102.m512i_u64[1];
    *(_QWORD *)&v105 = 0;
    v106 = 0;
    nullsub_1(v11);
    v22 = (void *)sub_140001650(12, 1);
    if ( !v22 )
      sub_1416C2D4B(1, 12);
    qmemcpy(v22, "backupExists", 12);
    *(_QWORD *)&v122 = 12;
    *((_QWORD *)&v122 + 1) = v22;
    v123 = 12;
    v119.m256i_i8[0] = 1;
    v119.m256i_i8[1] = v111;
    sub_140307860(&v124, &v105, &v122, &v119);
    if ( v124.m256i_i8[0] != -1 )
      sub_1400104F0(&v124);
    nullsub_1(v23);
    v24 = (void *)sub_140001650(19, 1);
    if ( !v24 )
      sub_1416C2D4B(1, 19);
    qmemcpy(v24, "foreignTopLevelKeys", 19);
    *(_QWORD *)&v122 = 19;
    *((_QWORD *)&v122 + 1) = v24;
    v123 = 19;
    v135 = 1;
    sub_140467F40(&v119, &v109);
    if ( v119.m256i_i8[0] == -1 )
    {
      v124.m256i_i64[0] = v119.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_10,
        43,
        (unsigned int)&v124,
        (unsigned int)&off_141789020,
        (__int64)&off_141789958);
    }
    v124 = v119;
    v135 = 0;
    sub_140307860(&v119, &v105, &v122, &v124);
    if ( v119.m256i_i8[0] != -1 )
      sub_1400104F0(&v119);
    nullsub_1(v25);
    v26 = (void *)sub_140001650(15, 1);
    if ( !v26 )
      sub_1416C2D4B(1, 15);
    qmemcpy(v26, "foreignSections", 15);
    *(_QWORD *)&v122 = 15;
    *((_QWORD *)&v122 + 1) = v26;
    v123 = 15;
    v134 = 1;
    sub_140467F40(&v119, &v109.m256i_u64[3]);
    if ( v119.m256i_i8[0] == -1 )
    {
      v124.m256i_i64[0] = v119.m256i_i64[1];
      sub_1416C3060(
        (unsigned int)aCalledResultUn_10,
        43,
        (unsigned int)&v124,
        (unsigned int)&off_141789020,
        (__int64)&off_141789958);
    }
    v124 = v119;
    v134 = 0;
    sub_140307860(&v119, &v105, &v122, &v124);
    if ( v119.m256i_i8[0] != -1 )
      sub_1400104F0(&v119);
    nullsub_1(v27);
    v28 = sub_140001650(9, 1);
    if ( !v28 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v28 = 0x6F72724564616572LL;
    *(_BYTE *)(v28 + 8) = 114;
    *(_QWORD *)&v122 = 9;
    *((_QWORD *)&v122 + 1) = v28;
    v123 = 9;
    v119.m256i_i8[0] = 0;
    sub_140307860(&v124, &v105, &v122, &v119);
    if ( v124.m256i_i8[0] != -1 )
      sub_1400104F0(&v124);
    v30 = v10;
    *(_OWORD *)&v119.m256i_u64[1] = v105;
    v119.m256i_i64[3] = v106;
    v119.m256i_i8[0] = 5;
    v31 = v109.m256i_i64[2];
    if ( v109.m256i_i64[2] )
    {
      v32 = (_QWORD *)(v109.m256i_i64[1] + 8);
      do
      {
        v33 = *(v32 - 1);
        if ( v33 )
          sub_140001660(*v32, v33, 1);
        v32 += 3;
        --v31;
      }
      while ( v31 );
    }
    if ( v109.m256i_i64[0] )
      sub_140001660(v109.m256i_i64[1], 24 * v109.m256i_i64[0], 8);
    *(_QWORD *)&v4 = *((_QWORD *)&v110 + 1);
    if ( *((_QWORD *)&v110 + 1) )
    {
      v34 = (_QWORD *)(v110 + 8);
      do
      {
        v35 = *(v34 - 1);
        if ( v35 )
          sub_140001660(*v34, v35, 1);
        v34 += 3;
        *(_QWORD *)&v4 = v4 - 1;
      }
      while ( (_QWORD)v4 );
    }
    v36 = v30;
    if ( v109.m256i_i64[3] )
      sub_140001660(v110, 24 * v109.m256i_i64[3], 8);
  }
  else
  {
    v113 = v104;
    v112 = v103;
    v111 = *(_OWORD *)&v102.m512i_u64[6];
    v110 = *(_OWORD *)&v102.m512i_u64[4];
    v109 = *(__m256i *)v102.m512i_i8;
    *(_QWORD *)&v107 = 0;
    v108 = 0;
    nullsub_1(v11);
    v12 = (void *)sub_140001650(12, 1);
    if ( !v12 )
      sub_1416C2D4B(1, 12);
    qmemcpy(v12, "backupExists", 12);
    *(_QWORD *)&v122 = 12;
    *((_QWORD *)&v122 + 1) = v12;
    v123 = 12;
    v131 = 1;
    v13 = sub_1404105D0(a2);
    v119.m256i_i8[0] = 1;
    v119.m256i_i8[1] = v13;
    v131 = 0;
    sub_140307860(&v124, &v107, &v122, &v119);
    if ( v124.m256i_i8[0] != -1 )
      sub_1400104F0(&v124);
    nullsub_1(v14);
    v15 = (void *)sub_140001650(19, 1);
    if ( !v15 )
      sub_1416C2D4B(1, 19);
    qmemcpy(v15, "foreignTopLevelKeys", 19);
    *(_QWORD *)&v122 = 19;
    *((_QWORD *)&v122 + 1) = v15;
    v123 = 19;
    v119.m256i_i64[1] = 0;
    *(_OWORD *)&v119.m256i_u64[2] = 8u;
    v119.m256i_i8[0] = 4;
    sub_140307860(&v124, &v107, &v122, &v119);
    if ( v124.m256i_i8[0] != -1 )
      sub_1400104F0(&v124);
    nullsub_1(v16);
    v17 = (void *)sub_140001650(15, 1);
    if ( !v17 )
      sub_1416C2D4B(1, 15);
    qmemcpy(v17, "foreignSections", 15);
    *(_QWORD *)&v122 = 15;
    *((_QWORD *)&v122 + 1) = v17;
    v123 = 15;
    v119.m256i_i64[1] = 0;
    *(_OWORD *)&v119.m256i_u64[2] = 8u;
    v119.m256i_i8[0] = 4;
    sub_140307860(&v124, &v107, &v122, &v119);
    if ( v124.m256i_i8[0] != -1 )
      sub_1400104F0(&v124);
    nullsub_1(v18);
    v19 = sub_140001650(9, 1);
    if ( !v19 )
      sub_1416C2D4B(1, 9);
    *(_QWORD *)v19 = 0x6F72724564616572LL;
    *(_BYTE *)(v19 + 8) = 114;
    *(_QWORD *)&v105 = 9;
    v118 = v19;
    *((_QWORD *)&v105 + 1) = v19;
    v106 = 9;
    v124.m256i_i64[0] = 0;
    *(_OWORD *)&v124.m256i_u64[1] = 1u;
    v119.m256i_i64[2] = 1610612768;
    v119.m256i_i64[0] = (__int64)&v124;
    v119.m256i_i64[1] = (__int64)&off_141790AA0;
    if ( (unsigned __int8)sub_140B036A0(&v109, &v119) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_6,
        55,
        (unsigned int)&v120,
        (unsigned int)&unk_141789060,
        (__int64)&off_141790B58);
    v99 = v124.m256i_i64[1];
    v121 = v124.m256i_i64[0];
    sub_140403D70((__int64)&v122, v124.m256i_i64[1], v124.m256i_i64[2], a3, v117);
    v118 = *((_QWORD *)&v122 + 1);
    *(_QWORD *)&v4 = v123;
    if ( v123 < 0 )
    {
      v21 = 0;
      goto LABEL_24;
    }
    v37 = v8;
    v38 = v10;
    if ( v123 )
    {
      nullsub_1(v20);
      v21 = 1;
      v39 = sub_140001650(v4, 1);
      if ( !v39 )
      {
LABEL_24:
        v130 = 1;
        sub_1416C2D4B(v21, v4);
      }
      v40 = v39;
      sub_141684120(v39, v118, v4);
    }
    else
    {
      v40 = 1;
    }
    v119.m256i_i8[0] = 3;
    v119.m256i_i64[1] = v4;
    v119.m256i_i64[2] = v40;
    v119.m256i_i64[3] = v4;
    v130 = 0;
    sub_140307860(&v124, &v107, &v105, &v119);
    v36 = v38;
    if ( v124.m256i_i8[0] != -1 )
      sub_1400104F0(&v124);
    v8 = v37;
    if ( (_QWORD)v122 )
      sub_140001660(v118, v122, 1);
    if ( v121 )
      sub_140001660(v99, v121, 1);
    *(_OWORD *)&v119.m256i_u64[1] = v107;
    v119.m256i_i64[3] = v108;
    v119.m256i_i8[0] = 5;
    sub_1406CDA20(&v109);
  }
  *(_QWORD *)&v107 = 0;
  v108 = 0;
  nullsub_1(v29);
  v41 = sub_140001650(6, 1);
  if ( !v41 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v41 + 4) = 29556;
  *(_DWORD *)v41 = 1936291941;
  v124.m256i_i64[0] = 6;
  v124.m256i_i64[1] = v41;
  v124.m256i_i64[2] = 6;
  v132 = 1;
  sub_141486710(&v109, v6, v98);
  if ( v109.m256i_i32[0] == 2 )
  {
    v132 = 1;
    sub_1401DD260(v109.m256i_i64[1]);
    v42 = 0;
  }
  else
  {
    v42 = 1;
  }
  v109.m256i_i8[0] = 1;
  v109.m256i_i8[1] = v42;
  v132 = 0;
  sub_140307860(&v102, &v107, &v124, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v43);
  v44 = sub_140001650(9, 1);
  if ( !v44 )
    sub_1416C2D4B(1, 9);
  *(_QWORD *)v44 = 0x6F72724564616572LL;
  *(_BYTE *)(v44 + 8) = 114;
  v124.m256i_i64[0] = 9;
  v124.m256i_i64[1] = v44;
  v124.m256i_i64[2] = 9;
  if ( v116 == -1 )
  {
    v47 = v6;
    v48 = 0;
  }
  else
  {
    if ( v4 < 0 )
    {
      v46 = 0;
      goto LABEL_74;
    }
    v47 = v6;
    v48 = 3;
    if ( *((_QWORD *)&v4 + 1) )
    {
      v49 = v8;
      v50 = v36;
      nullsub_1(v45);
      v46 = 1;
      v51 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v51 )
      {
LABEL_74:
        v129 = 1;
        sub_1416C2D4B(v46, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v51;
      sub_141684120(v51, v101, *((_QWORD *)&v4 + 1));
      v36 = v50;
      v8 = v49;
    }
    else
    {
      v4 = 1u;
    }
  }
  v109.m256i_i8[0] = v48;
  v109.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v109.m256i_u64[2] = v4;
  v129 = 0;
  sub_140307860(&v102, &v107, &v124, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v52);
  v53 = (void *)sub_140001650(21, 1);
  if ( !v53 )
    sub_1416C2D4B(1, 21);
  qmemcpy(v53, "topLevelModelProvider", 21);
  *(_QWORD *)&v122 = 21;
  v121 = (__int64)v53;
  *((_QWORD *)&v122 + 1) = v53;
  v123 = 21;
  sub_14040E250(&v124, v115, v8, (__int64)aModelProvider_0, (__int64 *)0xE);
  v121 = v124.m256i_i64[0];
  if ( v124.m256i_i64[0] == -1 )
  {
    v118 = v47;
    v56 = 0;
  }
  else
  {
    *((_QWORD *)&v4 + 1) = v124.m256i_i64[2];
    if ( v124.m256i_i64[2] < 0 )
    {
      v55 = 0;
      goto LABEL_86;
    }
    v118 = v47;
    v56 = 3;
    if ( v124.m256i_i64[2] )
    {
      v57 = v8;
      v58 = v36;
      v59 = v124.m256i_i64[1];
      nullsub_1(v54);
      v55 = 1;
      v60 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v60 )
      {
LABEL_86:
        v128 = 1;
        sub_1416C2D4B(v55, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v60;
      sub_141684120(v60, v59, *((_QWORD *)&v4 + 1));
      v36 = v58;
      v8 = v57;
    }
    else
    {
      v4 = 1u;
    }
  }
  v109.m256i_i8[0] = v56;
  v109.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v109.m256i_u64[2] = v4;
  v128 = 0;
  sub_140307860(&v102, &v107, &v122, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  if ( v121 != -1 && v121 )
    sub_140001660(v124.m256i_i64[1], v121, 1);
  nullsub_1(v61);
  v62 = (void *)sub_140001650(13, 1);
  v63 = v115;
  if ( !v62 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v62, "topLevelModel", 13);
  *(_QWORD *)&v122 = 13;
  v121 = (__int64)v62;
  *((_QWORD *)&v122 + 1) = v62;
  v123 = 13;
  sub_14040E250(
    &v124,
    v63,
    v8,
    (__int64)"modelROLLBACKrecency_at_msupdated_at_msupdated_atarchivedstate_.sqlitesqlite_home",
    (__int64 *)5);
  v121 = v124.m256i_i64[0];
  if ( v124.m256i_i64[0] == -1 )
  {
    v66 = 0;
  }
  else
  {
    *((_QWORD *)&v4 + 1) = v124.m256i_i64[2];
    if ( v124.m256i_i64[2] < 0 )
    {
      v65 = 0;
      goto LABEL_101;
    }
    v66 = 3;
    if ( v124.m256i_i64[2] )
    {
      v67 = v8;
      v68 = v36;
      v69 = v124.m256i_i64[1];
      nullsub_1(v64);
      v65 = 1;
      v70 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v70 )
      {
LABEL_101:
        v127 = 1;
        sub_1416C2D4B(v65, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v70;
      sub_141684120(v70, v69, *((_QWORD *)&v4 + 1));
      v36 = v68;
      v8 = v67;
    }
    else
    {
      v4 = 1u;
    }
  }
  v109.m256i_i8[0] = v66;
  v109.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v109.m256i_u64[2] = v4;
  v127 = 0;
  sub_140307860(&v102, &v107, &v122, &v109);
  v72 = v118;
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  if ( v121 != -1 && v121 )
    sub_140001660(v124.m256i_i64[1], v121, 1);
  nullsub_1(v71);
  v73 = (void *)sub_140001650(19, 1);
  v74 = v115;
  if ( !v73 )
    sub_1416C2D4B(1, 19);
  qmemcpy(v73, "hasModelCatalogJson", 19);
  *(_QWORD *)&v122 = 19;
  v121 = (__int64)v73;
  *((_QWORD *)&v122 + 1) = v73;
  v123 = 19;
  sub_14040E250(&v124, v74, v8, (__int64)&unk_1417899D6, (__int64 *)0x12);
  v121 = v124.m256i_i64[0];
  v109.m256i_i8[0] = 1;
  v109.m256i_i8[1] = v124.m256i_i64[0] != -1;
  sub_140307860(&v102, &v107, &v122, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  if ( v121 != -1 && v121 )
    sub_140001660(v124.m256i_i64[1], v121, 1);
  nullsub_1(v75);
  v76 = (void *)sub_140001650(11, 1);
  if ( !v76 )
    sub_1416C2D4B(1, 11);
  qmemcpy(v76, "routerEntry", 11);
  *(_QWORD *)&v105 = 11;
  *((_QWORD *)&v105 + 1) = v76;
  v106 = 11;
  *(_QWORD *)&v122 = 0;
  v123 = 0;
  nullsub_1(0x6E45726574756F72LL);
  v77 = (void *)sub_140001650(15, 1);
  if ( !v77 )
    sub_1416C2D4B(1, 15);
  v78 = v36 & 0xFFFFFF;
  qmemcpy(v77, "providerSection", 15);
  v124.m256i_i64[0] = 15;
  v124.m256i_i64[1] = (__int64)v77;
  v124.m256i_i64[2] = 15;
  v109.m256i_i8[0] = 1;
  v109.m256i_i8[1] = v78;
  sub_140307860(&v102, &v122, &v124, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v79);
  v80 = (void *)sub_140001650(14, 1);
  if ( !v80 )
    sub_1416C2D4B(1, 14);
  qmemcpy(v80, "profileSection", 14);
  v124.m256i_i64[0] = 14;
  v124.m256i_i64[1] = (__int64)v80;
  v124.m256i_i64[2] = 14;
  v109.m256i_i8[0] = 1;
  v109.m256i_i8[1] = BYTE1(v78);
  sub_140307860(&v102, &v122, &v124, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v81);
  v82 = (_OWORD *)sub_140001650(16, 1);
  if ( !v82 )
    sub_1416C2D4B(1, 16);
  *v82 = xmmword_1417899E8;
  v124.m256i_i64[0] = 16;
  v124.m256i_i64[1] = (__int64)v82;
  v124.m256i_i64[2] = 16;
  v109.m256i_i8[0] = 1;
  v109.m256i_i8[1] = BYTE2(v78);
  sub_140307860(&v102, &v122, &v124, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v83);
  v84 = (_QWORD *)sub_140001650(8, 1);
  if ( !v84 )
    sub_1416C2D4B(1, 8);
  *v84 = 0x6574656C706D6F63LL;
  v124.m256i_i64[0] = 8;
  v124.m256i_i64[1] = (__int64)v84;
  v124.m256i_i64[2] = 8;
  v85 = 0;
  if ( (v78 & 1) != 0 )
    v85 = BYTE2(v78);
  v109.m256i_i8[0] = 1;
  v109.m256i_i8[1] = v85;
  sub_140307860(&v102, &v122, &v124, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  *(_OWORD *)&v109.m256i_u64[1] = v122;
  v109.m256i_i64[3] = v123;
  v109.m256i_i8[0] = 5;
  v126 = 0;
  sub_140307860(&v102, &v107, &v105, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  nullsub_1(v86);
  v87 = (_QWORD *)sub_140001650(8, 1);
  if ( !v87 )
    sub_1416C2D4B(1, 8);
  *v87 = 0x7265766F656B6174LL;
  v124.m256i_i64[0] = 8;
  v124.m256i_i64[1] = (__int64)v87;
  v124.m256i_i64[2] = 8;
  v133 = 1;
  sub_140B842D0(&v109, &v119);
  if ( v109.m256i_i8[0] == -1 )
  {
    v102.m512i_i64[0] = v109.m256i_i64[1];
    sub_1416C3060(
      (unsigned int)aCalledResultUn_10,
      43,
      (unsigned int)&v102,
      (unsigned int)&off_141789020,
      (__int64)&off_141789988);
  }
  *(__m256i *)v102.m512i_i8 = v109;
  v133 = 0;
  sub_140307860(&v109, &v107, &v124, &v102);
  if ( v109.m256i_i8[0] != -1 )
    sub_1400104F0(&v109);
  nullsub_1(v88);
  v89 = (_DWORD *)sub_140001650(4, 1);
  if ( !v89 )
    sub_1416C2D4B(1, 4);
  *v89 = 1752457584;
  *(_QWORD *)&v122 = 4;
  v121 = (__int64)v89;
  *((_QWORD *)&v122 + 1) = v89;
  v123 = 4;
  sub_14149B760(&v109, v72, v98);
  v96 = v117;
  v117 = v109.m256i_i64[1];
  sub_140403D70((__int64)&v124, v109.m256i_i64[1], v109.m256i_i64[2], a3, v96);
  if ( v109.m256i_i64[0] > 0 )
    sub_140001660(v117, v109.m256i_i64[0], 1);
  *((_QWORD *)&v91 + 1) = v124.m256i_i64[2];
  v92 = v124.m256i_i64[1];
  v117 = v124.m256i_i64[1];
  if ( v124.m256i_i64[2] < 0 )
  {
    v93 = 0;
    goto LABEL_144;
  }
  if ( v124.m256i_i64[2] )
  {
    nullsub_1(v90);
    v93 = 1;
    v94 = sub_140001650(*((_QWORD *)&v91 + 1), 1);
    if ( !v94 )
    {
LABEL_144:
      v125 = 1;
      sub_1416C2D4B(v93, *((_QWORD *)&v91 + 1));
    }
    *(_QWORD *)&v91 = v94;
    sub_141684120(v94, v92, *((_QWORD *)&v91 + 1));
  }
  else
  {
    *(_QWORD *)&v91 = 1;
  }
  v109.m256i_i8[0] = 3;
  v109.m256i_i64[1] = *((_QWORD *)&v91 + 1);
  *(_OWORD *)&v109.m256i_u64[2] = v91;
  v125 = 0;
  sub_140307860(&v102, &v107, &v122, &v109);
  if ( v102.m512i_i8[0] != -1 )
    sub_1400104F0(&v102);
  if ( v124.m256i_i64[0] )
    sub_140001660(v117, v124.m256i_i64[0], 1);
  *(_QWORD *)(a1 + 24) = v108;
  *(_OWORD *)(a1 + 8) = v107;
  *(_BYTE *)a1 = 5;
  sub_1400104F0(&v119);
  result = v116 - 1;
  if ( (unsigned __int64)(v116 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = sub_140001660(v101, v116, 1);
  if ( v114 )
    return sub_140001660(v115, v114, 1);
  return result;
}