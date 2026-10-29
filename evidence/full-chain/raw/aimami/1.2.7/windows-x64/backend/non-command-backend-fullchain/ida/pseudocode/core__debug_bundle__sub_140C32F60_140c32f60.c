// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140c32f60 | name sub_140C32F60
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C32F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  const __m128i *v22; // r15
  unsigned __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  const __m128i *v33; // r15
  unsigned __int64 v34; // rdi
  __int64 v35; // r14
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  const __m128i *v46; // r15
  unsigned __int64 v47; // rdi
  __int64 v48; // r14
  __m128i *v49; // rax
  __int64 v50; // rbx
  __m128i *v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  _DWORD *v58; // rax
  __int64 v59; // rcx
  void *v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r14
  _QWORD *v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __m128i *v67; // rax
  __int64 v68; // rbx
  __int64 i; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rbx
  __int64 v72; // rdx
  _OWORD v74[7]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v75; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v76; // [rsp+A8h] [rbp+28h]
  __int64 v77; // [rsp+B0h] [rbp+30h]
  __int128 v78; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v79; // [rsp+C8h] [rbp+48h]
  __int128 v80; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v81; // [rsp+E0h] [rbp+60h]
  __int128 v82; // [rsp+F0h] [rbp+70h]
  __int128 v83; // [rsp+100h] [rbp+80h]
  _BYTE v84[80]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v85; // [rsp+160h] [rbp+E0h]
  __int128 v86; // [rsp+170h] [rbp+F0h]
  __int128 v87; // [rsp+180h] [rbp+100h] BYREF
  __int128 v88; // [rsp+190h] [rbp+110h]
  __int128 v89; // [rsp+1A0h] [rbp+120h]
  __int128 v90; // [rsp+1B0h] [rbp+130h]
  __int64 v91; // [rsp+1C8h] [rbp+148h]
  __int128 v92; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v93; // [rsp+1E0h] [rbp+160h]
  __int64 v94; // [rsp+1E8h] [rbp+168h]
  __int128 v95; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v96; // [rsp+200h] [rbp+180h]
  __int64 v97; // [rsp+210h] [rbp+190h] BYREF
  __int64 v98; // [rsp+218h] [rbp+198h]
  __int64 v99; // [rsp+220h] [rbp+1A0h]
  unsigned __int64 v100; // [rsp+228h] [rbp+1A8h]
  char v101; // [rsp+232h] [rbp+1B2h]
  char v102; // [rsp+233h] [rbp+1B3h]
  char v103; // [rsp+234h] [rbp+1B4h]
  char v104; // [rsp+235h] [rbp+1B5h] BYREF
  char v105; // [rsp+236h] [rbp+1B6h]
  char v106; // [rsp+237h] [rbp+1B7h]
  __int64 v107; // [rsp+238h] [rbp+1B8h]

  v107 = -2;
  sub_141695A00(v84, a2, a3);
  if ( *(_DWORD *)v84 == 2 )
  {
    v6 = v84[8] & 3;
    if ( (unsigned int)(v6 - 2) >= 2 && (v84[8] & 3) != 0 )
    {
      --*(_QWORD *)&v84[8];
      v84[0] = 3;
      sub_1416BCB00(&v84[8]);
    }
    *(_QWORD *)&v80 = 0;
    *(_QWORD *)&v81 = 0;
    nullsub_1(v6);
    v7 = sub_140001650(6, 1);
    if ( !v7 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v7 + 4) = 29556;
    *(_DWORD *)v7 = 1936291941;
    *(_QWORD *)&v87 = 6;
    *((_QWORD *)&v87 + 1) = v7;
    *(_QWORD *)&v88 = 6;
    *(_WORD *)v84 = 1;
    sub_140E72AA0(v74, &v80, &v87, v84);
    if ( LOBYTE(v74[0]) != 0xFF )
      sub_14002F9D0(v74);
    nullsub_1(v8);
    v9 = (_DWORD *)sub_140001650(7, 1);
    if ( !v9 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v9 + 3) = 1936616821;
    *v9 = 1970040675;
    *(_QWORD *)&v87 = 7;
    *((_QWORD *)&v87 + 1) = v9;
    *(_QWORD *)&v88 = 7;
    *(_QWORD *)&v84[8] = 0;
    *(_OWORD *)&v84[16] = 8u;
    v84[0] = 4;
    sub_140E72AA0(v74, &v80, &v87, v84);
    if ( LOBYTE(v74[0]) != 0xFF )
      sub_14002F9D0(v74);
    nullsub_1(v10);
    v11 = (void *)sub_140001650(18, 1);
    if ( !v11 )
      sub_141938D2B(1, 18);
    qmemcpy(v11, "missingCoreColumns", 18);
    *(_QWORD *)&v87 = 18;
    *((_QWORD *)&v87 + 1) = v11;
    *(_QWORD *)&v88 = 18;
    *(_QWORD *)&v84[8] = 0;
    *(_OWORD *)&v84[16] = 8u;
    v84[0] = 4;
    sub_140E72AA0(v74, &v80, &v87, v84);
    if ( LOBYTE(v74[0]) != 0xFF )
      sub_14002F9D0(v74);
    *(_QWORD *)(a1 + 24) = v81;
    *(_OWORD *)(a1 + 8) = v80;
    *(_BYTE *)a1 = 5;
    return a1;
  }
  sub_140BA4B10(v84, a2, a3, 32769);
  if ( BYTE8(v86) != 0xFF )
  {
    v74[6] = v86;
    v74[5] = v85;
    v74[4] = *(_OWORD *)&v84[64];
    v74[3] = *(_OWORD *)&v84[48];
    v74[2] = *(_OWORD *)&v84[32];
    v74[1] = *(_OWORD *)&v84[16];
    v74[0] = *(_OWORD *)v84;
    sub_141403910(v84, v74, 0, 500000000);
    if ( *(_QWORD *)v84 != -1 )
      sub_140BAA960(v84);
    sub_140C1AEF0(v84, v74, aPragmaTableInf_0, 26);
    if ( *(_DWORD *)v84 == 1 )
    {
      v90 = *(_OWORD *)&v84[56];
      v89 = *(_OWORD *)&v84[40];
      v88 = *(_OWORD *)&v84[24];
      v87 = *(_OWORD *)&v84[8];
      *(_QWORD *)&v78 = 0;
      v79 = 0;
      nullsub_1(v13);
      v14 = sub_140001650(6, 1);
      if ( !v14 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v14 + 4) = 29556;
      *(_DWORD *)v14 = 1936291941;
      *(_QWORD *)&v92 = 6;
      *((_QWORD *)&v92 + 1) = v14;
      v93 = 6;
      LOWORD(v97) = 1;
      sub_140E72AA0(&v95, &v78, &v92, &v97);
      if ( (_BYTE)v95 != 0xFF )
        sub_14002F9D0(&v95);
      nullsub_1(v15);
      v16 = (_DWORD *)sub_140001650(7, 1);
      if ( !v16 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v16 + 3) = 1936616821;
      *v16 = 1970040675;
      *(_QWORD *)&v92 = 7;
      *((_QWORD *)&v92 + 1) = v16;
      v93 = 7;
      v98 = 0;
      v99 = 8;
      v100 = 0;
      LOBYTE(v97) = 4;
      sub_140E72AA0(&v95, &v78, &v92, &v97);
      if ( (_BYTE)v95 != 0xFF )
        sub_14002F9D0(&v95);
      nullsub_1(v17);
      v18 = (void *)sub_140001650(18, 1);
      if ( !v18 )
        sub_141938D2B(1, 18);
      qmemcpy(v18, "missingCoreColumns", 18);
      *(_QWORD *)&v92 = 18;
      *((_QWORD *)&v92 + 1) = v18;
      v93 = 18;
      v98 = 0;
      v99 = 8;
      v100 = 0;
      LOBYTE(v97) = 4;
      sub_140E72AA0(&v95, &v78, &v92, &v97);
      if ( (_BYTE)v95 != 0xFF )
        sub_14002F9D0(&v95);
      nullsub_1(v19);
      v20 = sub_140001650(9, 1);
      if ( !v20 )
        sub_141938D2B(1, 9);
      *(_QWORD *)v20 = 0x6F72724564616572LL;
      *(_BYTE *)(v20 + 8) = 114;
      *(_QWORD *)&v92 = 9;
      v94 = v20;
      *((_QWORD *)&v92 + 1) = v20;
      v93 = 9;
      *(_QWORD *)&v95 = 0;
      *((_QWORD *)&v95 + 1) = 1;
      v96 = 0;
      v99 = 1610612768;
      v97 = (__int64)&v95;
      v98 = (__int64)&off_141A3FE88;
      if ( (unsigned __int8)sub_141404740(&v87, &v97) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v104,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v22 = *((const __m128i **)&v95 + 1);
      v23 = v96;
      v91 = *((_QWORD *)&v95 + 1);
      v94 = v95;
      if ( v96 < 0 )
      {
        v24 = 0;
        goto LABEL_32;
      }
      if ( v96 )
      {
        nullsub_1(v21);
        v24 = 1;
        v51 = (__m128i *)sub_140001650(v23, 1);
        if ( !v51 )
        {
LABEL_32:
          v102 = 1;
          sub_141938D2B(v24, v23);
        }
        v52 = (__int64)v51;
        sub_1418F44E0(v51, v22, v23);
      }
      else
      {
        v52 = 1;
      }
      LOBYTE(v97) = 3;
      v98 = v23;
      v99 = v52;
      v100 = v23;
      v102 = 0;
      sub_140E72AA0(&v95, &v78, &v92, &v97);
      if ( (_BYTE)v95 != 0xFF )
        sub_14002F9D0(&v95);
      if ( v94 )
        sub_140001660(v91, v94, 1);
      *(_QWORD *)(a1 + 24) = v79;
      *(_OWORD *)(a1 + 8) = v78;
      *(_BYTE *)a1 = 5;
      sub_140BAA960(&v87);
LABEL_122:
      sub_140BA9BF0(v74);
      return a1;
    }
    v83 = *(_OWORD *)&v84[56];
    v82 = *(_OWORD *)&v84[40];
    v81 = *(_OWORD *)&v84[24];
    v80 = *(_OWORD *)&v84[8];
    v36 = sub_1417A9630(*(_QWORD *)&v84[64]);
    if ( !v36 )
    {
      sub_1403D0740(&v75, (__int64)&v80, 0);
      v53 = v76;
      v54 = v77;
      sub_140EBA5D0(&v78, v76, v76 + 24 * v77);
      *(_OWORD *)v84 = (unsigned __int64)&v78;
      *(_QWORD *)&v84[16] = 3;
      *(_QWORD *)&v84[24] = aId_7;
      *(_QWORD *)&v84[32] = 2;
      *(_QWORD *)&v84[40] = aModelProvider_0;
      *(_QWORD *)&v84[48] = 14;
      *(_QWORD *)&v84[56] = aRolloutPath_0;
      *(_QWORD *)&v84[64] = 12;
      sub_1403D2AD0(&v92, v84);
      *(_QWORD *)&v95 = 0;
      v96 = 0;
      nullsub_1(v55);
      v56 = sub_140001650(6, 1);
      if ( !v56 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v56 + 4) = 29556;
      *(_DWORD *)v56 = 1936291941;
      v97 = 6;
      v98 = v56;
      v99 = 6;
      v84[0] = 1;
      v84[1] = v54 != 0;
      sub_140E72AA0(&v87, &v95, &v97, v84);
      if ( (_BYTE)v87 != 0xFF )
        sub_14002F9D0(&v87);
      nullsub_1(v57);
      v58 = (_DWORD *)sub_140001650(7, 1);
      if ( !v58 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v58 + 3) = 1936616821;
      *v58 = 1970040675;
      v97 = 7;
      v98 = (__int64)v58;
      v99 = 7;
      v106 = 1;
      sub_140C100F0(v84, &v75);
      if ( v84[0] == 0xFF )
      {
        *(_QWORD *)&v87 = *(_QWORD *)&v84[8];
        sub_141939040(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v87,
          (unsigned int)&off_141A3BB28,
          (__int64)&off_141A3D440);
      }
      v88 = *(_OWORD *)&v84[16];
      v87 = *(_OWORD *)v84;
      v106 = 0;
      sub_140E72AA0(v84, &v95, &v97, &v87);
      if ( v84[0] != 0xFF )
        sub_14002F9D0(v84);
      nullsub_1(v59);
      v60 = (void *)sub_140001650(18, 1);
      if ( !v60 )
        sub_141938D2B(1, 18);
      qmemcpy(v60, "missingCoreColumns", 18);
      v97 = 18;
      v98 = (__int64)v60;
      v99 = 18;
      v105 = 1;
      sub_140C100F0(v84, &v92);
      if ( v84[0] == 0xFF )
      {
        *(_QWORD *)&v87 = *(_QWORD *)&v84[8];
        sub_141939040(
          (unsigned int)aCalledResultUn_13,
          43,
          (unsigned int)&v87,
          (unsigned int)&off_141A3BB28,
          (__int64)&off_141A3D440);
      }
      v88 = *(_OWORD *)&v84[16];
      v87 = *(_OWORD *)v84;
      v105 = 0;
      sub_140E72AA0(v84, &v95, &v97, &v87);
      if ( v84[0] != 0xFF )
        sub_14002F9D0(v84);
      *(_QWORD *)(a1 + 24) = v96;
      *(_OWORD *)(a1 + 8) = v95;
      *(_BYTE *)a1 = 5;
      v61 = *((_QWORD *)&v92 + 1);
      v62 = v93;
      if ( v93 )
      {
        v63 = (_QWORD *)(*((_QWORD *)&v92 + 1) + 8LL);
        do
        {
          v64 = *(v63 - 1);
          if ( v64 )
            sub_140001660(*v63, v64, 1);
          v63 += 3;
          --v62;
        }
        while ( v62 );
      }
      if ( (_QWORD)v92 )
        sub_140001660(v61, 24 * v92, 8);
      if ( (_QWORD)v78 )
      {
        v65 = v79;
        *(_QWORD *)&v84[8] = 0;
        *(_OWORD *)&v84[16] = v78;
        *(_QWORD *)&v84[40] = 0;
        *(_OWORD *)&v84[48] = v78;
        v66 = 1;
      }
      else
      {
        v66 = 0;
        v65 = 0;
      }
      *(_QWORD *)v84 = v66;
      *(_QWORD *)&v84[32] = v66;
      *(_QWORD *)&v84[64] = v65;
      sub_140E828B0(&v87, v84);
      for ( i = v87; (_QWORD)v87; i = v87 )
      {
        v70 = *(_QWORD *)(i + 24 * v88 + 8);
        if ( v70 )
          sub_140001660(*(_QWORD *)(i + 24 * v88 + 16), v70, 1);
        sub_140E828B0(&v87, v84);
      }
      if ( v54 )
      {
        v71 = (_QWORD *)(v53 + 8);
        do
        {
          v72 = *(v71 - 1);
          if ( v72 )
            sub_140001660(*v71, v72, 1);
          v71 += 3;
          --v54;
        }
        while ( v54 );
      }
      if ( v75 )
        sub_140001660(v53, 24 * v75, 8);
      sub_140BAAAF0(&v80);
      goto LABEL_122;
    }
    *(_OWORD *)v84 = 0x8000000000000013uLL;
    *(_QWORD *)&v84[16] = v36;
    *(_QWORD *)&v92 = 0;
    v93 = 0;
    nullsub_1(v37);
    v38 = sub_140001650(6, 1);
    if ( !v38 )
      sub_141938D2B(1, 6);
    *(_WORD *)(v38 + 4) = 29556;
    *(_DWORD *)v38 = 1936291941;
    *(_QWORD *)&v95 = 6;
    *((_QWORD *)&v95 + 1) = v38;
    v96 = 6;
    LOWORD(v87) = 1;
    sub_140E72AA0(&v97, &v92, &v95, &v87);
    if ( (_BYTE)v97 != 0xFF )
      sub_14002F9D0(&v97);
    nullsub_1(v39);
    v40 = (_DWORD *)sub_140001650(7, 1);
    if ( !v40 )
      sub_141938D2B(1, 7);
    *(_DWORD *)((char *)v40 + 3) = 1936616821;
    *v40 = 1970040675;
    *(_QWORD *)&v95 = 7;
    *((_QWORD *)&v95 + 1) = v40;
    v96 = 7;
    *((_QWORD *)&v87 + 1) = 0;
    v88 = 8u;
    LOBYTE(v87) = 4;
    sub_140E72AA0(&v97, &v92, &v95, &v87);
    if ( (_BYTE)v97 != 0xFF )
      sub_14002F9D0(&v97);
    nullsub_1(v41);
    v42 = (void *)sub_140001650(18, 1);
    if ( !v42 )
      sub_141938D2B(1, 18);
    qmemcpy(v42, "missingCoreColumns", 18);
    *(_QWORD *)&v95 = 18;
    *((_QWORD *)&v95 + 1) = v42;
    v96 = 18;
    *((_QWORD *)&v87 + 1) = 0;
    v88 = 8u;
    LOBYTE(v87) = 4;
    sub_140E72AA0(&v97, &v92, &v95, &v87);
    if ( (_BYTE)v97 != 0xFF )
      sub_14002F9D0(&v97);
    nullsub_1(v43);
    v44 = sub_140001650(9, 1);
    if ( !v44 )
      sub_141938D2B(1, 9);
    *(_QWORD *)v44 = 0x6F72724564616572LL;
    *(_BYTE *)(v44 + 8) = 114;
    *(_QWORD *)&v95 = 9;
    v94 = v44;
    *((_QWORD *)&v95 + 1) = v44;
    v96 = 9;
    v97 = 0;
    v98 = 1;
    v99 = 0;
    *(_QWORD *)&v88 = 1610612768;
    *(_QWORD *)&v87 = &v97;
    *((_QWORD *)&v87 + 1) = &off_141A3FE88;
    if ( (unsigned __int8)sub_141404740(v84, &v87) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v104,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v46 = (const __m128i *)v98;
    v47 = v99;
    v94 = v97;
    v91 = v98;
    if ( v99 < 0 )
    {
      v48 = 0;
      goto LABEL_61;
    }
    if ( v99 )
    {
      nullsub_1(v45);
      v48 = 1;
      v67 = (__m128i *)sub_140001650(v47, 1);
      if ( !v67 )
      {
LABEL_61:
        v103 = 1;
        sub_141938D2B(v48, v47);
      }
      v68 = (__int64)v67;
      sub_1418F44E0(v67, v46, v47);
    }
    else
    {
      v68 = 1;
    }
    LOBYTE(v87) = 3;
    *((_QWORD *)&v87 + 1) = v47;
    *(_QWORD *)&v88 = v68;
    *((_QWORD *)&v88 + 1) = v47;
    v103 = 0;
    sub_140E72AA0(&v97, &v92, &v95, &v87);
    if ( (_BYTE)v97 != 0xFF )
      sub_14002F9D0(&v97);
    if ( v94 )
      sub_140001660(v91, v94, 1);
    *(_QWORD *)(a1 + 24) = v93;
    *(_OWORD *)(a1 + 8) = v92;
    *(_BYTE *)a1 = 5;
    sub_140BAA960(v84);
    sub_140BAAAF0(&v80);
    goto LABEL_122;
  }
  v90 = *(_OWORD *)&v84[48];
  v89 = *(_OWORD *)&v84[32];
  v88 = *(_OWORD *)&v84[16];
  v87 = *(_OWORD *)v84;
  *(_QWORD *)&v92 = 0;
  v93 = 0;
  nullsub_1(v12);
  v25 = sub_140001650(6, 1);
  if ( !v25 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v25 + 4) = 29556;
  *(_DWORD *)v25 = 1936291941;
  *(_QWORD *)&v95 = 6;
  *((_QWORD *)&v95 + 1) = v25;
  v96 = 6;
  LOWORD(v80) = 1;
  sub_140E72AA0(&v97, &v92, &v95, &v80);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  nullsub_1(v26);
  v27 = (_DWORD *)sub_140001650(7, 1);
  if ( !v27 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v27 + 3) = 1936616821;
  *v27 = 1970040675;
  *(_QWORD *)&v95 = 7;
  *((_QWORD *)&v95 + 1) = v27;
  v96 = 7;
  *((_QWORD *)&v80 + 1) = 0;
  v81 = 8u;
  LOBYTE(v80) = 4;
  sub_140E72AA0(&v97, &v92, &v95, &v80);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  nullsub_1(v28);
  v29 = (void *)sub_140001650(18, 1);
  if ( !v29 )
    sub_141938D2B(1, 18);
  qmemcpy(v29, "missingCoreColumns", 18);
  *(_QWORD *)&v95 = 18;
  *((_QWORD *)&v95 + 1) = v29;
  v96 = 18;
  *((_QWORD *)&v80 + 1) = 0;
  v81 = 8u;
  LOBYTE(v80) = 4;
  sub_140E72AA0(&v97, &v92, &v95, &v80);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  nullsub_1(v30);
  v31 = sub_140001650(9, 1);
  if ( !v31 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v31 = 0x6F72724564616572LL;
  *(_BYTE *)(v31 + 8) = 114;
  *(_QWORD *)&v95 = 9;
  v94 = v31;
  *((_QWORD *)&v95 + 1) = v31;
  v96 = 9;
  v97 = 0;
  v98 = 1;
  v99 = 0;
  *(_QWORD *)&v81 = 1610612768;
  *(_QWORD *)&v80 = &v97;
  *((_QWORD *)&v80 + 1) = &off_141A3FE88;
  if ( (unsigned __int8)sub_141404740(&v87, &v80) )
    sub_141939040(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v104,
      (unsigned int)&unk_141A3BB68,
      (__int64)&off_141A3FF40);
  v33 = (const __m128i *)v98;
  v34 = v99;
  v94 = v97;
  v91 = v98;
  if ( v99 < 0 )
  {
    v35 = 0;
    goto LABEL_46;
  }
  if ( v99 )
  {
    nullsub_1(v32);
    v35 = 1;
    v49 = (__m128i *)sub_140001650(v34, 1);
    if ( !v49 )
    {
LABEL_46:
      v101 = 1;
      sub_141938D2B(v35, v34);
    }
    v50 = (__int64)v49;
    sub_1418F44E0(v49, v33, v34);
  }
  else
  {
    v50 = 1;
  }
  LOBYTE(v80) = 3;
  *((_QWORD *)&v80 + 1) = v34;
  *(_QWORD *)&v81 = v50;
  *((_QWORD *)&v81 + 1) = v34;
  v101 = 0;
  sub_140E72AA0(&v97, &v92, &v95, &v80);
  if ( (_BYTE)v97 != 0xFF )
    sub_14002F9D0(&v97);
  if ( v94 )
    sub_140001660(v91, v94, 1);
  *(_QWORD *)(a1 + 24) = v93;
  *(_OWORD *)(a1 + 8) = v92;
  *(_BYTE *)a1 = 5;
  sub_140BAA960(&v87);
  return a1;
}
