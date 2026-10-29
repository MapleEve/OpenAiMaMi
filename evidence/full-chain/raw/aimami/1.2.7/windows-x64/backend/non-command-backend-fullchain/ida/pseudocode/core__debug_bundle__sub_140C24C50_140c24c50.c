// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c24c50 | name sub_140C24C50
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C24C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  unsigned __int8 (__fastcall *v11)(unsigned __int64); // rax
  int v12; // r12d
  __int64 v13; // rcx
  void *v14; // rax
  __int8 v15; // al
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  __m128i *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  void *v24; // rax
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdi
  _QWORD *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int8 v42; // al
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int8 v47; // r14
  __m128i *v48; // rax
  __int64 v49; // rcx
  void *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r14
  __int8 v53; // r15
  const __m128i *v54; // rbx
  __m128i *v55; // rax
  __int64 v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r14
  __int8 v60; // r15
  const __m128i *v61; // rbx
  __m128i *v62; // rax
  __int64 v63; // rcx
  void *v64; // rax
  __int64 v65; // rcx
  void *v66; // rax
  void *v67; // rax
  int v68; // r12d
  __int64 v69; // rcx
  void *v70; // rax
  __int64 v71; // rcx
  _OWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int8 v75; // cl
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  _DWORD *v79; // rax
  __int64 v80; // rcx
  __int128 v81; // rdi
  const __m128i *v82; // r14
  __int64 v83; // rbx
  __m128i *v84; // rax
  __int64 result; // rax
  __int64 v86; // [rsp+20h] [rbp-60h]
  __int64 v88; // [rsp+30h] [rbp-50h]
  __int64 v89; // [rsp+38h] [rbp-48h]
  __int64 v90; // [rsp+40h] [rbp-40h]
  const __m128i *v91; // [rsp+48h] [rbp-38h]
  __m512i v92; // [rsp+50h] [rbp-30h] BYREF
  __int128 v93; // [rsp+90h] [rbp+10h]
  __int128 v94; // [rsp+A0h] [rbp+20h]
  __int64 v95; // [rsp+B8h] [rbp+38h]
  __int128 v96; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v97; // [rsp+D0h] [rbp+50h]
  __int64 v98; // [rsp+D8h] [rbp+58h]
  __int64 v99; // [rsp+E0h] [rbp+60h]
  const __m128i *v100; // [rsp+E8h] [rbp+68h]
  __int128 v101; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v102; // [rsp+100h] [rbp+80h]
  __int64 v103; // [rsp+108h] [rbp+88h]
  __m256i v104; // [rsp+110h] [rbp+90h] BYREF
  __int128 v105; // [rsp+130h] [rbp+B0h]
  __int128 v106; // [rsp+140h] [rbp+C0h]
  __int128 v107; // [rsp+150h] [rbp+D0h]
  __int128 v108; // [rsp+160h] [rbp+E0h]
  __int64 v109; // [rsp+178h] [rbp+F8h]
  __m256i v110; // [rsp+180h] [rbp+100h] BYREF
  char v111; // [rsp+1A7h] [rbp+127h] BYREF
  __int64 v112; // [rsp+1A8h] [rbp+128h]
  __int128 v113; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v114; // [rsp+1C0h] [rbp+140h]
  char v115; // [rsp+1C9h] [rbp+149h]
  char v116; // [rsp+1CAh] [rbp+14Ah]
  char v117; // [rsp+1CBh] [rbp+14Bh]
  char v118; // [rsp+1CCh] [rbp+14Ch]
  char v119; // [rsp+1CDh] [rbp+14Dh]
  char v120; // [rsp+1CEh] [rbp+14Eh]
  char v121; // [rsp+1CFh] [rbp+14Fh]
  __m256i v122; // [rsp+1D0h] [rbp+150h] BYREF
  char v123; // [rsp+1FBh] [rbp+17Bh]
  char v124; // [rsp+1FCh] [rbp+17Ch]
  char v125; // [rsp+1FDh] [rbp+17Dh]
  char v126; // [rsp+1FEh] [rbp+17Eh]
  char v127; // [rsp+1FFh] [rbp+17Fh]
  __int64 v128; // [rsp+200h] [rbp+180h]

  v128 = -2;
  v99 = a4;
  v98 = a3;
  v88 = *(_QWORD *)(a2 + 72);
  v89 = *(_QWORD *)(a2 + 80);
  sub_14169D1D0(&v110, v88, v89);
  v8 = v110.m256i_u64[1];
  if ( v110.m256i_i64[0] == -1 )
  {
    v10 = v110.m256i_i8[8] & 3;
    switch ( v110.m256i_i8[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(v110.m256i_i64[1] + 16) )
          goto LABEL_7;
        goto LABEL_15;
      case 1:
        if ( !*(_BYTE *)(v110.m256i_i64[1] + 31) )
          goto LABEL_15;
        goto LABEL_7;
      case 2:
        v127 = 1;
        v11 = *(unsigned __int8 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v7, v6) + 8);
        v127 = 1;
        if ( v11(HIDWORD(v8)) )
          goto LABEL_7;
        goto LABEL_15;
      case 3:
        if ( v110.m256i_i8[12] )
        {
LABEL_7:
          v122.m256i_i64[0] = v8;
          v92.m512i_i64[0] = 0;
          *(_OWORD *)&v92.m512i_u64[1] = 1u;
          v104.m256i_i64[2] = 1610612768;
          v104.m256i_i64[0] = (__int64)&v92;
          v104.m256i_i64[1] = (__int64)&off_141A3FE88;
          if ( (unsigned __int8)sub_1416BB0B0(&v122, &v104) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v111,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v103 = v92.m512i_i64[1];
          v109 = v92.m512i_i64[0];
          sub_14021D340((__int64)&v104, (const __m128i *)v92.m512i_i64[1], v92.m512i_i64[2], v98, v99);
          v91 = (const __m128i *)v104.m256i_i64[1];
          v95 = v104.m256i_i64[0];
          *((_QWORD *)&v4 + 1) = v104.m256i_i64[2];
          if ( v109 )
            sub_140001660(v103, v109, 1);
          if ( (unsigned int)(v10 - 2) >= 2 && (v8 & 3) != 0 )
          {
            v104.m256i_i64[1] = v8 - 1;
            v104.m256i_i8[0] = 3;
            v127 = 0;
            sub_1416BCB00(&v104.m256i_u64[1]);
          }
          v8 = 1;
          v103 = 0;
        }
        else
        {
LABEL_15:
          if ( (unsigned int)(v10 - 2) >= 2 && (v8 & 3) != 0 )
          {
            v104.m256i_i64[1] = v8 - 1;
            v104.m256i_i8[0] = 3;
            v127 = 0;
            sub_1416BCB00(&v104.m256i_u64[1]);
          }
          v95 = -1;
          v8 = 1;
          v103 = 0;
        }
        v9 = 0;
        break;
    }
  }
  else
  {
    v103 = v110.m256i_i64[0];
    v95 = -1;
    v9 = v110.m256i_i64[2];
  }
  v109 = v8;
  v12 = sub_140C6E5C0(v8, v9);
  sub_140F010E0(&v92, a2);
  if ( v92.m512i_i32[0] == -1 )
  {
    *(_QWORD *)&v106 = v92.m512i_i64[7];
    v105 = *(_OWORD *)&v92.m512i_u64[5];
    v104 = *(__m256i *)&v92.m512i_u64[1];
    *(_QWORD *)&v96 = 0;
    v97 = 0;
    nullsub_1(v13);
    v24 = (void *)sub_140001650(12, 1);
    if ( !v24 )
      sub_141938D2B(1, 12);
    qmemcpy(v24, "backupExists", 12);
    *(_QWORD *)&v113 = 12;
    *((_QWORD *)&v113 + 1) = v24;
    v114 = 12;
    v110.m256i_i8[0] = 1;
    v110.m256i_i8[1] = v106;
    sub_140E72AA0(&v122, &v96, &v113, &v110);
    if ( v122.m256i_i8[0] != -1 )
      sub_14002F9D0(&v122);
    nullsub_1(v25);
    v26 = (void *)sub_140001650(19, 1);
    if ( !v26 )
      sub_141938D2B(1, 19);
    qmemcpy(v26, "foreignTopLevelKeys", 19);
    *(_QWORD *)&v113 = 19;
    *((_QWORD *)&v113 + 1) = v26;
    v114 = 19;
    v126 = 1;
    sub_140C100F0(&v110, &v92.m512i_u64[1]);
    if ( v110.m256i_i8[0] == -1 )
    {
      v122.m256i_i64[0] = v110.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v122,
        (unsigned int)&off_141A3BB28,
        (__int64)&off_141A3CE18);
    }
    v122 = v110;
    v126 = 0;
    sub_140E72AA0(&v110, &v96, &v113, &v122);
    if ( v110.m256i_i8[0] != -1 )
      sub_14002F9D0(&v110);
    nullsub_1(v27);
    v28 = (void *)sub_140001650(15, 1);
    if ( !v28 )
      sub_141938D2B(1, 15);
    qmemcpy(v28, "foreignSections", 15);
    *(_QWORD *)&v113 = 15;
    *((_QWORD *)&v113 + 1) = v28;
    v114 = 15;
    v125 = 1;
    sub_140C100F0(&v110, &v104.m256i_u64[3]);
    if ( v110.m256i_i8[0] == -1 )
    {
      v122.m256i_i64[0] = v110.m256i_i64[1];
      sub_141939040(
        (unsigned int)aCalledResultUn_13,
        43,
        (unsigned int)&v122,
        (unsigned int)&off_141A3BB28,
        (__int64)&off_141A3CE18);
    }
    v122 = v110;
    v125 = 0;
    sub_140E72AA0(&v110, &v96, &v113, &v122);
    if ( v110.m256i_i8[0] != -1 )
      sub_14002F9D0(&v110);
    nullsub_1(v29);
    v30 = sub_140001650(9, 1);
    if ( !v30 )
      sub_141938D2B(1, 9);
    *(_QWORD *)v30 = 0x6F72724564616572LL;
    *(_BYTE *)(v30 + 8) = 114;
    *(_QWORD *)&v113 = 9;
    *((_QWORD *)&v113 + 1) = v30;
    v114 = 9;
    v110.m256i_i8[0] = 0;
    sub_140E72AA0(&v122, &v96, &v113, &v110);
    if ( v122.m256i_i8[0] != -1 )
      sub_14002F9D0(&v122);
    *(_OWORD *)&v110.m256i_u64[1] = v96;
    v110.m256i_i64[3] = v97;
    v110.m256i_i8[0] = 5;
    v32 = v104.m256i_i64[2];
    v33 = v104.m256i_i64[1];
    if ( v104.m256i_i64[2] )
    {
      v34 = (_QWORD *)(v104.m256i_i64[1] + 8);
      do
      {
        v35 = *(v34 - 1);
        if ( v35 )
          sub_140001660(*v34, v35, 1);
        v34 += 3;
        --v32;
      }
      while ( v32 );
    }
    if ( v104.m256i_i64[0] )
      sub_140001660(v33, 24 * v104.m256i_i64[0], 8);
    v36 = *((_QWORD *)&v105 + 1);
    *(_QWORD *)&v4 = v105;
    if ( *((_QWORD *)&v105 + 1) )
    {
      v37 = (_QWORD *)(v105 + 8);
      do
      {
        v38 = *(v37 - 1);
        if ( v38 )
          sub_140001660(*v37, v38, 1);
        v37 += 3;
        --v36;
      }
      while ( v36 );
    }
    if ( v104.m256i_i64[3] )
      sub_140001660(v4, 24 * v104.m256i_i64[3], 8);
  }
  else
  {
    v108 = v94;
    v107 = v93;
    v106 = *(_OWORD *)&v92.m512i_u64[6];
    v105 = *(_OWORD *)&v92.m512i_u64[4];
    v104 = *(__m256i *)v92.m512i_i8;
    *(_QWORD *)&v101 = 0;
    v102 = 0;
    nullsub_1(v13);
    v14 = (void *)sub_140001650(12, 1);
    if ( !v14 )
      sub_141938D2B(1, 12);
    qmemcpy(v14, "backupExists", 12);
    *(_QWORD *)&v113 = 12;
    *((_QWORD *)&v113 + 1) = v14;
    v114 = 12;
    v121 = 1;
    v15 = sub_140EF7BE0(a2);
    v110.m256i_i8[0] = 1;
    v110.m256i_i8[1] = v15;
    v121 = 0;
    sub_140E72AA0(&v122, &v101, &v113, &v110);
    if ( v122.m256i_i8[0] != -1 )
      sub_14002F9D0(&v122);
    nullsub_1(v16);
    v17 = (void *)sub_140001650(19, 1);
    if ( !v17 )
      sub_141938D2B(1, 19);
    qmemcpy(v17, "foreignTopLevelKeys", 19);
    *(_QWORD *)&v113 = 19;
    *((_QWORD *)&v113 + 1) = v17;
    v114 = 19;
    v110.m256i_i64[1] = 0;
    *(_OWORD *)&v110.m256i_u64[2] = 8u;
    v110.m256i_i8[0] = 4;
    sub_140E72AA0(&v122, &v101, &v113, &v110);
    if ( v122.m256i_i8[0] != -1 )
      sub_14002F9D0(&v122);
    nullsub_1(v18);
    v19 = (void *)sub_140001650(15, 1);
    if ( !v19 )
      sub_141938D2B(1, 15);
    qmemcpy(v19, "foreignSections", 15);
    *(_QWORD *)&v113 = 15;
    *((_QWORD *)&v113 + 1) = v19;
    v114 = 15;
    v110.m256i_i64[1] = 0;
    *(_OWORD *)&v110.m256i_u64[2] = 8u;
    v110.m256i_i8[0] = 4;
    sub_140E72AA0(&v122, &v101, &v113, &v110);
    if ( v122.m256i_i8[0] != -1 )
      sub_14002F9D0(&v122);
    nullsub_1(v20);
    v21 = (__m128i *)sub_140001650(9, 1);
    if ( !v21 )
      sub_141938D2B(1, 9);
    v21->m128i_i64[0] = 0x6F72724564616572LL;
    v21->m128i_i8[8] = 114;
    *(_QWORD *)&v96 = 9;
    v100 = v21;
    *((_QWORD *)&v96 + 1) = v21;
    v97 = 9;
    v122.m256i_i64[0] = 0;
    *(_OWORD *)&v122.m256i_u64[1] = 1u;
    v110.m256i_i64[2] = 1610612768;
    v110.m256i_i64[0] = (__int64)&v122;
    v110.m256i_i64[1] = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(&v104, &v110) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v111,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v90 = v122.m256i_i64[1];
    v112 = v122.m256i_i64[0];
    sub_14021D340((__int64)&v113, (const __m128i *)v122.m256i_i64[1], v122.m256i_i64[2], v98, v99);
    v100 = *((const __m128i **)&v113 + 1);
    *(_QWORD *)&v4 = v114;
    if ( v114 < 0 )
    {
      v23 = 0;
      goto LABEL_34;
    }
    if ( v114 )
    {
      nullsub_1(v22);
      v23 = 1;
      v39 = (__m128i *)sub_140001650(v4, 1);
      if ( !v39 )
      {
LABEL_34:
        v120 = 1;
        sub_141938D2B(v23, v4);
      }
      v40 = (__int64)v39;
      sub_1418F44E0(v39, v100, v4);
    }
    else
    {
      v40 = 1;
    }
    v110.m256i_i8[0] = 3;
    v110.m256i_i64[1] = v4;
    v110.m256i_i64[2] = v40;
    v110.m256i_i64[3] = v4;
    v120 = 0;
    sub_140E72AA0(&v122, &v101, &v96, &v110);
    if ( v122.m256i_i8[0] != -1 )
      sub_14002F9D0(&v122);
    if ( (_QWORD)v113 )
      sub_140001660(v100, v113, 1);
    if ( v112 )
      sub_140001660(v90, v112, 1);
    *(_OWORD *)&v110.m256i_u64[1] = v101;
    v110.m256i_i64[3] = v102;
    v110.m256i_i8[0] = 5;
    sub_140BAC840(&v104);
  }
  *(_QWORD *)&v101 = 0;
  v102 = 0;
  nullsub_1(v31);
  v41 = sub_140001650(6, 1);
  if ( !v41 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v41 + 4) = 29556;
  *(_DWORD *)v41 = 1936291941;
  v122.m256i_i64[0] = 6;
  v122.m256i_i64[1] = v41;
  v122.m256i_i64[2] = 6;
  v123 = 1;
  sub_141695A00(&v104, v88, v89);
  if ( v104.m256i_i32[0] == 2 )
  {
    if ( (v104.m256i_i8[8] & 3u) - 2 >= 2 && (v104.m256i_i8[8] & 3) != 0 )
    {
      --v104.m256i_i64[1];
      v104.m256i_i8[0] = 3;
      v123 = 1;
      sub_1416BCB00(&v104.m256i_u64[1]);
    }
    v42 = 0;
  }
  else
  {
    v42 = 1;
  }
  v104.m256i_i8[0] = 1;
  v104.m256i_i8[1] = v42;
  v123 = 0;
  sub_140E72AA0(&v92, &v101, &v122, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  nullsub_1(v43);
  v44 = sub_140001650(9, 1);
  if ( !v44 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v44 = 0x6F72724564616572LL;
  *(_BYTE *)(v44 + 8) = 114;
  v122.m256i_i64[0] = 9;
  v122.m256i_i64[1] = v44;
  v122.m256i_i64[2] = 9;
  if ( v95 == -1 )
  {
    v47 = 0;
  }
  else
  {
    if ( v4 < 0 )
    {
      v46 = 0;
      goto LABEL_87;
    }
    v47 = 3;
    if ( *((_QWORD *)&v4 + 1) )
    {
      nullsub_1(v45);
      v46 = 1;
      v48 = (__m128i *)sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v48 )
      {
LABEL_87:
        v119 = 1;
        sub_141938D2B(v46, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v48;
      sub_1418F44E0(v48, v91, *((unsigned __int64 *)&v4 + 1));
    }
    else
    {
      v4 = 1u;
    }
  }
  v104.m256i_i8[0] = v47;
  v104.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v104.m256i_u64[2] = v4;
  v119 = 0;
  sub_140E72AA0(&v92, &v101, &v122, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  nullsub_1(v49);
  v50 = (void *)sub_140001650(21, 1);
  if ( !v50 )
    sub_141938D2B(1, 21);
  qmemcpy(v50, "topLevelModelProvider", 21);
  *(_QWORD *)&v113 = 21;
  v112 = (__int64)v50;
  *((_QWORD *)&v113 + 1) = v50;
  v114 = 21;
  sub_140C72660((unsigned int)&v122, v109, v9, (unsigned int)aModelProvider_0, 14);
  v112 = v122.m256i_i64[0];
  if ( v122.m256i_i64[0] == -1 )
  {
    v53 = 0;
  }
  else
  {
    *((_QWORD *)&v4 + 1) = v122.m256i_i64[2];
    if ( v122.m256i_i64[2] < 0 )
    {
      v52 = 0;
      goto LABEL_101;
    }
    v53 = 3;
    if ( v122.m256i_i64[2] )
    {
      v54 = (const __m128i *)v122.m256i_i64[1];
      nullsub_1(v51);
      v52 = 1;
      v55 = (__m128i *)sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v55 )
      {
LABEL_101:
        v118 = 1;
        sub_141938D2B(v52, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v55;
      sub_1418F44E0(v55, v54, *((unsigned __int64 *)&v4 + 1));
    }
    else
    {
      v4 = 1u;
    }
  }
  v104.m256i_i8[0] = v53;
  v104.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v104.m256i_u64[2] = v4;
  v118 = 0;
  sub_140E72AA0(&v92, &v101, &v113, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  if ( v112 != -1 && v112 )
    sub_140001660(v122.m256i_i64[1], v112, 1);
  nullsub_1(v56);
  v57 = (void *)sub_140001650(13, 1);
  if ( !v57 )
    sub_141938D2B(1, 13);
  qmemcpy(v57, "topLevelModel", 13);
  *(_QWORD *)&v113 = 13;
  v112 = (__int64)v57;
  *((_QWORD *)&v113 + 1) = v57;
  v114 = 13;
  sub_140C72660((unsigned int)&v122, v109, v9, (unsigned int)aModel_5, 5);
  v112 = v122.m256i_i64[0];
  if ( v122.m256i_i64[0] == -1 )
  {
    v60 = 0;
  }
  else
  {
    *((_QWORD *)&v4 + 1) = v122.m256i_i64[2];
    if ( v122.m256i_i64[2] < 0 )
    {
      v59 = 0;
      goto LABEL_116;
    }
    v60 = 3;
    if ( v122.m256i_i64[2] )
    {
      v61 = (const __m128i *)v122.m256i_i64[1];
      nullsub_1(v58);
      v59 = 1;
      v62 = (__m128i *)sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v62 )
      {
LABEL_116:
        v117 = 1;
        sub_141938D2B(v59, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v62;
      sub_1418F44E0(v62, v61, *((unsigned __int64 *)&v4 + 1));
    }
    else
    {
      v4 = 1u;
    }
  }
  v104.m256i_i8[0] = v60;
  v104.m256i_i64[1] = *((_QWORD *)&v4 + 1);
  *(_OWORD *)&v104.m256i_u64[2] = v4;
  v117 = 0;
  sub_140E72AA0(&v92, &v101, &v113, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  if ( v112 != -1 && v112 )
    sub_140001660(v122.m256i_i64[1], v112, 1);
  nullsub_1(v63);
  v64 = (void *)sub_140001650(19, 1);
  if ( !v64 )
    sub_141938D2B(1, 19);
  qmemcpy(v64, "hasModelCatalogJson", 19);
  *(_QWORD *)&v113 = 19;
  v112 = (__int64)v64;
  *((_QWORD *)&v113 + 1) = v64;
  v114 = 19;
  sub_140C72660((unsigned int)&v122, v109, v9, (unsigned int)aModelCatalogJs_0, 18);
  v112 = v122.m256i_i64[0];
  v104.m256i_i8[0] = 1;
  v104.m256i_i8[1] = v122.m256i_i64[0] != -1;
  sub_140E72AA0(&v92, &v101, &v113, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  if ( v112 != -1 && v112 )
    sub_140001660(v122.m256i_i64[1], v112, 1);
  nullsub_1(v65);
  v66 = (void *)sub_140001650(11, 1);
  if ( !v66 )
    sub_141938D2B(1, 11);
  qmemcpy(v66, "routerEntry", 11);
  *(_QWORD *)&v96 = 11;
  *((_QWORD *)&v96 + 1) = v66;
  v97 = 11;
  *(_QWORD *)&v113 = 0;
  v114 = 0;
  nullsub_1(0x6E45726574756F72LL);
  v67 = (void *)sub_140001650(15, 1);
  if ( !v67 )
    sub_141938D2B(1, 15);
  v68 = v12 & 0xFFFFFF;
  qmemcpy(v67, "providerSection", 15);
  v122.m256i_i64[0] = 15;
  v122.m256i_i64[1] = (__int64)v67;
  v122.m256i_i64[2] = 15;
  v104.m256i_i8[0] = 1;
  v104.m256i_i8[1] = v68;
  sub_140E72AA0(&v92, &v113, &v122, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  nullsub_1(v69);
  v70 = (void *)sub_140001650(14, 1);
  if ( !v70 )
    sub_141938D2B(1, 14);
  qmemcpy(v70, "profileSection", 14);
  v122.m256i_i64[0] = 14;
  v122.m256i_i64[1] = (__int64)v70;
  v122.m256i_i64[2] = 14;
  v104.m256i_i8[0] = 1;
  v104.m256i_i8[1] = BYTE1(v68);
  sub_140E72AA0(&v92, &v113, &v122, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  nullsub_1(v71);
  v72 = (_OWORD *)sub_140001650(16, 1);
  if ( !v72 )
    sub_141938D2B(1, 16);
  *v72 = xmmword_141A3CEA8;
  v122.m256i_i64[0] = 16;
  v122.m256i_i64[1] = (__int64)v72;
  v122.m256i_i64[2] = 16;
  v104.m256i_i8[0] = 1;
  v104.m256i_i8[1] = BYTE2(v68);
  sub_140E72AA0(&v92, &v113, &v122, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  nullsub_1(v73);
  v74 = (_QWORD *)sub_140001650(8, 1);
  if ( !v74 )
    sub_141938D2B(1, 8);
  *v74 = 0x6574656C706D6F63LL;
  v122.m256i_i64[0] = 8;
  v122.m256i_i64[1] = (__int64)v74;
  v122.m256i_i64[2] = 8;
  v75 = 0;
  if ( (v68 & 1) != 0 )
    v75 = BYTE2(v68);
  v104.m256i_i8[0] = 1;
  v104.m256i_i8[1] = v75;
  sub_140E72AA0(&v92, &v113, &v122, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  *(_OWORD *)&v104.m256i_u64[1] = v113;
  v104.m256i_i64[3] = v114;
  v104.m256i_i8[0] = 5;
  v116 = 0;
  sub_140E72AA0(&v92, &v101, &v96, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  nullsub_1(v76);
  v77 = (_QWORD *)sub_140001650(8, 1);
  if ( !v77 )
    sub_141938D2B(1, 8);
  *v77 = 0x7265766F656B6174LL;
  v122.m256i_i64[0] = 8;
  v122.m256i_i64[1] = (__int64)v77;
  v122.m256i_i64[2] = 8;
  v124 = 1;
  sub_140412420(&v104, &v110);
  if ( v104.m256i_i8[0] == -1 )
  {
    v92.m512i_i64[0] = v104.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_13,
      43,
      (unsigned int)&v92,
      (unsigned int)&off_141A3BB28,
      (__int64)&off_141A3CE48);
  }
  *(__m256i *)v92.m512i_i8 = v104;
  v124 = 0;
  sub_140E72AA0(&v104, &v101, &v122, &v92);
  if ( v104.m256i_i8[0] != -1 )
    sub_14002F9D0(&v104);
  nullsub_1(v78);
  v79 = (_DWORD *)sub_140001650(4, 1);
  if ( !v79 )
    sub_141938D2B(1, 4);
  *v79 = 1752457584;
  *(_QWORD *)&v113 = 4;
  v112 = (__int64)v79;
  *((_QWORD *)&v113 + 1) = v79;
  v114 = 4;
  sub_1416AB5A0(&v104, v88, v89);
  v86 = v99;
  v99 = v104.m256i_i64[1];
  sub_14021D340((__int64)&v122, (const __m128i *)v104.m256i_i64[1], v104.m256i_i64[2], v98, v86);
  if ( v104.m256i_i64[0] > 0 )
    sub_140001660(v99, v104.m256i_i64[0], 1);
  *((_QWORD *)&v81 + 1) = v122.m256i_i64[2];
  v82 = (const __m128i *)v122.m256i_i64[1];
  v98 = v122.m256i_i64[1];
  if ( v122.m256i_i64[2] < 0 )
  {
    v83 = 0;
    goto LABEL_159;
  }
  if ( v122.m256i_i64[2] )
  {
    nullsub_1(v80);
    v83 = 1;
    v84 = (__m128i *)sub_140001650(*((_QWORD *)&v81 + 1), 1);
    if ( !v84 )
    {
LABEL_159:
      v115 = 1;
      sub_141938D2B(v83, *((_QWORD *)&v81 + 1));
    }
    *(_QWORD *)&v81 = v84;
    sub_1418F44E0(v84, v82, *((unsigned __int64 *)&v81 + 1));
  }
  else
  {
    *(_QWORD *)&v81 = 1;
  }
  v104.m256i_i8[0] = 3;
  v104.m256i_i64[1] = *((_QWORD *)&v81 + 1);
  *(_OWORD *)&v104.m256i_u64[2] = v81;
  v115 = 0;
  sub_140E72AA0(&v92, &v101, &v113, &v104);
  if ( v92.m512i_i8[0] != -1 )
    sub_14002F9D0(&v92);
  if ( v122.m256i_i64[0] )
    sub_140001660(v98, v122.m256i_i64[0], 1);
  *(_QWORD *)(a1 + 24) = v102;
  *(_OWORD *)(a1 + 8) = v101;
  *(_BYTE *)a1 = 5;
  sub_14002F9D0(&v110);
  result = v95 - 1;
  if ( (unsigned __int64)(v95 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = sub_140001660(v91, v95, 1);
  if ( v103 )
    return sub_140001660(v109, v103, 1);
  return result;
}
