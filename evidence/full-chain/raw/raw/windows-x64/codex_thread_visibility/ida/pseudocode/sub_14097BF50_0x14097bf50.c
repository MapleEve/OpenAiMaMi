// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x14097bf50
// name: sub_14097BF50
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 *__fastcall sub_14097BF50(__int64 *a1, __int128 *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  bool v5; // si
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // al
  char v18; // al
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // si
  int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // r8
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  bool v34; // al
  char v35; // al
  unsigned __int64 v36; // r14
  char v37; // r15
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rt0
  char v45; // of
  char v46; // cl
  __int128 v47; // xmm0
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rt0
  char v53; // cl
  __int128 v54; // xmm0
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int128 v60; // xmm0
  __int128 v61; // xmm0
  __int128 v62; // xmm0
  __int64 v63; // rax
  volatile signed __int64 *v64; // r14
  __int128 *v65; // rdi
  __int128 *v66; // rax
  __int64 *v67; // rcx
  __int64 v68; // r12
  __int128 *v69; // r15
  __int8 v70; // dl
  int v71; // r8d
  __int128 *v72; // rsi
  __int64 v73; // r8
  __int64 v74; // r9
  char v75; // di
  int v76; // eax
  __int64 v77; // r13
  __int64 v78; // rdx
  __int128 v79; // xmm0
  __int64 v80; // rt0
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // rsi
  volatile signed __int64 *v85; // rsi
  __int64 *result; // rax
  __int128 *v87; // [rsp+60h] [rbp-20h]
  volatile signed __int64 *v88; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v89[48]; // [rsp+70h] [rbp-10h] BYREF
  _OWORD v90[3]; // [rsp+A0h] [rbp+20h]
  __int64 v91; // [rsp+D0h] [rbp+50h]
  __int64 *v92; // [rsp+D8h] [rbp+58h]
  __int64 v93; // [rsp+E0h] [rbp+60h]
  volatile signed __int64 **v94; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v95; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v96; // [rsp+100h] [rbp+80h]
  __int128 v97; // [rsp+120h] [rbp+A0h]
  __int128 v98; // [rsp+130h] [rbp+B0h]
  __int128 v99; // [rsp+140h] [rbp+C0h]
  __int64 v100; // [rsp+150h] [rbp+D0h]
  __int64 v101; // [rsp+160h] [rbp+E0h]
  __int128 v102; // [rsp+168h] [rbp+E8h]
  __int128 v103; // [rsp+178h] [rbp+F8h] BYREF
  __int64 v104; // [rsp+188h] [rbp+108h]
  __int64 v105; // [rsp+190h] [rbp+110h]
  __int64 v106; // [rsp+198h] [rbp+118h] BYREF
  __int64 *v107; // [rsp+1A0h] [rbp+120h]
  __int64 v108; // [rsp+1A8h] [rbp+128h]
  __int64 v109; // [rsp+1B0h] [rbp+130h]
  __int128 v110; // [rsp+1B8h] [rbp+138h]
  __int64 v111; // [rsp+1C8h] [rbp+148h]
  __int128 v112; // [rsp+1D0h] [rbp+150h]
  __int64 v113; // [rsp+1E0h] [rbp+160h]
  __int128 v114; // [rsp+1F0h] [rbp+170h]
  __int64 v115; // [rsp+200h] [rbp+180h]
  __int128 v116; // [rsp+210h] [rbp+190h]
  __int128 v117; // [rsp+220h] [rbp+1A0h]
  __int64 v118; // [rsp+230h] [rbp+1B0h]
  __int64 v119; // [rsp+238h] [rbp+1B8h]
  __int64 v120; // [rsp+240h] [rbp+1C0h]
  __int64 *v121; // [rsp+248h] [rbp+1C8h]
  __int128 v122; // [rsp+250h] [rbp+1D0h]
  __int64 v123; // [rsp+260h] [rbp+1E0h]
  __int64 v124; // [rsp+270h] [rbp+1F0h]
  char v125; // [rsp+278h] [rbp+1F8h]
  __int128 v126; // [rsp+280h] [rbp+200h] BYREF
  __m256i v127; // [rsp+290h] [rbp+210h] BYREF
  __int128 v128; // [rsp+2B0h] [rbp+230h]
  __int128 v129; // [rsp+2C0h] [rbp+240h]
  __int128 v130; // [rsp+2D0h] [rbp+250h]
  __int64 v131; // [rsp+2E0h] [rbp+260h]
  __int64 v132; // [rsp+300h] [rbp+280h]
  __int64 v133; // [rsp+308h] [rbp+288h]
  __int64 v134; // [rsp+380h] [rbp+300h]
  __int64 v135; // [rsp+388h] [rbp+308h]
  __int16 v136; // [rsp+400h] [rbp+380h]
  _BYTE v137[22]; // [rsp+402h] [rbp+382h]
  __int64 v138; // [rsp+418h] [rbp+398h]
  __int128 v139; // [rsp+420h] [rbp+3A0h]
  __int128 v140; // [rsp+430h] [rbp+3B0h]
  __int128 v141; // [rsp+440h] [rbp+3C0h]
  __int64 v142; // [rsp+450h] [rbp+3D0h]
  __int128 v143; // [rsp+458h] [rbp+3D8h]
  __int128 v144; // [rsp+468h] [rbp+3E8h]
  __int128 v145; // [rsp+478h] [rbp+3F8h]
  __int64 v146; // [rsp+488h] [rbp+408h]
  _BYTE *v147; // [rsp+510h] [rbp+490h]
  __int64 v148; // [rsp+518h] [rbp+498h]

  v147 = &v89[16];
  v148 = -2;
  v92 = a1;
  v2 = *((_QWORD *)a2 + 2);
  v87 = a2;
  if ( v2 )
    goto LABEL_70;
  sub_141483A20(&v126, aRayonNumThread, 17);
  if ( (_QWORD)v126 != -2 )
  {
    if ( (_QWORD)v126 != -1 && (_QWORD)v126 )
      sub_140001660(*((_QWORD *)&v126 + 1), v126, 1);
    goto LABEL_37;
  }
  if ( *((_QWORD *)&v126 + 1) == -1 )
    goto LABEL_37;
  v3 = v127.m256i_i64[0];
  if ( !v127.m256i_i64[1] )
  {
    v5 = 0;
    if ( !*((_QWORD *)&v126 + 1) )
      goto LABEL_33;
LABEL_32:
    sub_140001660(v127.m256i_i64[0], *((_QWORD *)&v126 + 1), 1);
    goto LABEL_33;
  }
  if ( v127.m256i_i64[1] == 1 )
  {
    v4 = *(unsigned __int8 *)v127.m256i_i64[0];
    v5 = 0;
    if ( v4 == 43 || v4 == 45 )
      goto LABEL_31;
  }
  else
  {
    LOBYTE(v4) = *(_BYTE *)v127.m256i_i64[0];
  }
  v6 = (_BYTE)v4 == 43;
  v7 = -v6;
  v8 = v127.m256i_i64[1] - v6;
  v9 = v127.m256i_i64[0] + v6;
  if ( v8 >= 0x11 )
  {
    v13 = -(v7 + v127.m256i_i64[1]);
    v2 = 0;
    v14 = 0;
    do
    {
      v5 = v14 + v13 == 0;
      if ( !(v14 + v13) )
        break;
      v15 = 10 * v2;
      if ( !is_mul_ok(0xAu, v2)
        || (v16 = (unsigned int)*(unsigned __int8 *)(v9 + v14) - 48,
            v2 = v16 + v15,
            v17 = __CFADD__(v16, v15),
            (unsigned int)v16 > 9) )
      {
        if ( *((_QWORD *)&v126 + 1) )
          goto LABEL_32;
        goto LABEL_33;
      }
      ++v14;
    }
    while ( !v17 );
LABEL_31:
    if ( !*((_QWORD *)&v126 + 1) )
      goto LABEL_33;
    goto LABEL_32;
  }
  if ( v8 )
  {
    v10 = -(v7 + v127.m256i_i64[1]);
    v2 = 0;
    v11 = 0;
    do
    {
      v12 = *(unsigned __int8 *)(v9 + v11) - 48;
      v5 = v12 < 0xA;
      if ( v12 >= 0xA )
        break;
      v2 = v12 + 10 * v2;
      ++v11;
    }
    while ( v11 + v10 );
    goto LABEL_31;
  }
  v5 = 1;
  v2 = 0;
  if ( *((_QWORD *)&v126 + 1) )
    goto LABEL_32;
LABEL_33:
  if ( v5 )
  {
    a2 = v87;
    if ( !v2 )
    {
      v18 = sub_141487350(v3, v87);
      v2 = v19;
      if ( (v18 & 1) != 0 )
        goto LABEL_68;
      goto LABEL_69;
    }
    goto LABEL_70;
  }
LABEL_37:
  sub_141483A20(&v126, aRayonRsNumCpus, 17);
  a2 = (__int128 *)v126;
  if ( (_QWORD)v126 != -2 )
  {
    if ( (_QWORD)v126 != -1 && (_QWORD)v126 )
      sub_140001660(*((_QWORD *)&v126 + 1), v126, 1);
LABEL_67:
    v35 = sub_141487350(v20, a2);
    v2 = v19;
    if ( (v35 & 1) != 0 )
    {
LABEL_68:
      *((_QWORD *)&v126 + 1) = v19;
      *(_QWORD *)&v126 = 1;
      v2 = 1;
      sub_140018650((char *)&v126 + 8);
    }
LABEL_69:
    a2 = v87;
    goto LABEL_70;
  }
  if ( *((_QWORD *)&v126 + 1) == -1 )
    goto LABEL_67;
  v20 = v127.m256i_i64[0];
  v21 = 1;
  if ( !v127.m256i_i64[1] )
  {
LABEL_60:
    if ( !*((_QWORD *)&v126 + 1) )
      goto LABEL_66;
LABEL_65:
    sub_140001660(v127.m256i_i64[0], *((_QWORD *)&v126 + 1), 1);
    goto LABEL_66;
  }
  if ( v127.m256i_i64[1] == 1 )
  {
    v22 = *(unsigned __int8 *)v127.m256i_i64[0];
    if ( v22 == 43 || v22 == 45 )
      goto LABEL_64;
  }
  else
  {
    LOBYTE(v22) = *(_BYTE *)v127.m256i_i64[0];
  }
  v23 = (_BYTE)v22 == 43;
  v24 = -v23;
  v25 = v127.m256i_i64[1] - v23;
  v26 = v127.m256i_i64[0] + v23;
  if ( v25 >= 0x11 )
  {
    v30 = -(v24 + v127.m256i_i64[1]);
    v2 = 0;
    v31 = 0;
    do
    {
      v21 = v31 + v30 != 0;
      if ( !(v31 + v30) )
        break;
      v32 = 10 * v2;
      if ( !is_mul_ok(0xAu, v2) )
        goto LABEL_60;
      v33 = (unsigned int)*(unsigned __int8 *)(v26 + v31) - 48;
      v2 = v33 + v32;
      v34 = __CFADD__(v33, v32);
      if ( (unsigned int)v33 > 9 )
        goto LABEL_60;
      ++v31;
    }
    while ( !v34 );
LABEL_64:
    if ( !*((_QWORD *)&v126 + 1) )
      goto LABEL_66;
    goto LABEL_65;
  }
  if ( v25 )
  {
    v27 = -(v24 + v127.m256i_i64[1]);
    v2 = 0;
    v28 = 0;
    do
    {
      v29 = *(unsigned __int8 *)(v26 + v28) - 48;
      v21 = v29 >= 0xA;
      if ( v29 >= 0xA )
        break;
      v2 = v29 + 10 * v2;
      ++v28;
    }
    while ( v28 + v27 );
    goto LABEL_64;
  }
  v2 = 0;
  v21 = 0;
  if ( *((_QWORD *)&v126 + 1) )
    goto LABEL_65;
LABEL_66:
  a2 = v87;
  if ( v2 == 0 || v21 )
    goto LABEL_67;
LABEL_70:
  v36 = 0xFFFF;
  if ( v2 < 0xFFFF )
    v36 = v2;
  v37 = *((_BYTE *)a2 + 89);
  *(_QWORD *)&v126 = 0;
  *((_QWORD *)&v126 + 1) = 8;
  *(_OWORD *)v127.m256i_i8 = 0;
  *(_OWORD *)&v127.m256i_u64[2] = 8u;
  if ( v2 )
  {
    sub_141688D30((unsigned int)&v126, 0, v36, 8, 32);
    v38 = v127.m256i_i64[3];
    if ( v36 > v127.m256i_i64[1] - v127.m256i_i64[3] )
    {
      sub_141688D30((unsigned int)&v127.m256i_u32[2], v127.m256i_i32[6], v36, 8, 16);
      v38 = v127.m256i_i64[3];
    }
    v39 = *((_QWORD *)&v126 + 1);
    v40 = v127.m256i_i64[0];
    v41 = v127.m256i_i64[2];
    if ( v37 )
    {
      v42 = 0;
      while ( 1 )
      {
        sub_140238310(v89);
        v43 = *(_QWORD *)v89;
        v44 = _InterlockedIncrement64(*(volatile signed __int64 **)v89);
        if ( (v44 < 0) ^ v45 | (v44 == 0) )
          break;
        ++v42;
        v46 = v89[24];
        v47 = *(_OWORD *)v89;
        *(_OWORD *)v96.m256i_i8 = *(_OWORD *)&v89[16];
        v95 = *(_OWORD *)v89;
        v48 = 32 * v40;
        *(_OWORD *)(v39 + v48 + 16) = *(_OWORD *)&v89[16];
        *(_OWORD *)(v39 + v48) = v47;
        v127.m256i_i64[0] = ++v40;
        v49 = 16 * v38;
        *(_QWORD *)(v41 + v49) = v43;
        *(_BYTE *)(v41 + v49 + 8) = v46;
        v127.m256i_i64[3] = ++v38;
        if ( v42 == v36 )
          goto LABEL_83;
      }
    }
    else
    {
      v50 = 0;
      while ( 1 )
      {
        sub_140238480(v89);
        v51 = *(_QWORD *)v89;
        v52 = _InterlockedIncrement64(*(volatile signed __int64 **)v89);
        if ( (v52 < 0) ^ v45 | (v52 == 0) )
          break;
        ++v50;
        v53 = v89[24];
        v54 = *(_OWORD *)v89;
        *(_OWORD *)v96.m256i_i8 = *(_OWORD *)&v89[16];
        v95 = *(_OWORD *)v89;
        v55 = 32 * v40;
        *(_OWORD *)(v39 + v55 + 16) = *(_OWORD *)&v89[16];
        *(_OWORD *)(v39 + v55) = v54;
        v127.m256i_i64[0] = ++v40;
        v56 = 16 * v38;
        *(_QWORD *)(v41 + v56) = v51;
        *(_BYTE *)(v41 + v56 + 8) = v53;
        v127.m256i_i64[3] = ++v38;
        if ( v50 == v36 )
          goto LABEL_83;
      }
    }
LABEL_113:
    BUG();
  }
LABEL_83:
  v96 = v127;
  v95 = v126;
  v113 = v127.m256i_i64[0];
  v112 = v126;
  v101 = v127.m256i_i64[1];
  v102 = *(_OWORD *)&v127.m256i_u64[2];
  *(_QWORD *)&v126 = 0;
  *((_QWORD *)&v126 + 1) = 8;
  *(_OWORD *)v127.m256i_i8 = 0;
  *(_OWORD *)&v127.m256i_u64[2] = 8u;
  sub_14032B390(&v126, 0, v36);
  v96 = v127;
  v95 = v126;
  v123 = v127.m256i_i64[0];
  v122 = v126;
  v115 = v127.m256i_i64[3];
  v114 = *(_OWORD *)&v127.m256i_u64[1];
  *(_QWORD *)&v126 = v102;
  *((_QWORD *)&v126 + 1) = v102;
  v127.m256i_i64[0] = v101;
  v127.m256i_i64[1] = v102 + 16LL * *((_QWORD *)&v102 + 1);
  sub_140329980(&v103, &v126);
  sub_140FB2020(&v95, v36);
  nullsub_1(v57);
  v58 = sub_140001680(1520, 8);
  if ( !v58 )
    sub_1416C2D31(8, 1520);
  *(_QWORD *)&v89[22] = v123;
  *(_OWORD *)&v89[6] = v122;
  v146 = v104;
  v145 = v103;
  v143 = v95;
  v144 = *(_OWORD *)v96.m256i_i8;
  *(_OWORD *)v137 = *(_OWORD *)v89;
  *(_QWORD *)&v137[14] = *((_QWORD *)&v122 + 1);
  v59 = v123;
  v138 = v123;
  *(_QWORD *)&v126 = 1;
  *((_QWORD *)&v126 + 1) = 1;
  v132 = 0;
  v133 = v58;
  v134 = 0;
  v135 = v58;
  v136 = 0;
  v60 = *(__int128 *)((char *)v87 + 24);
  *((_QWORD *)v87 + 3) = 0;
  v139 = v60;
  v61 = *(__int128 *)((char *)v87 + 56);
  *((_QWORD *)v87 + 7) = 0;
  v140 = v61;
  v62 = *(__int128 *)((char *)v87 + 72);
  *((_QWORD *)v87 + 9) = 0;
  v141 = v62;
  v142 = 1;
  nullsub_1(v59);
  v63 = sub_140001650(640, 128);
  if ( !v63 )
    sub_1416C2D31(128, 640);
  v64 = (volatile signed __int64 *)v63;
  v65 = &v126;
  sub_141684120(v63, &v126, 640);
  v88 = v64;
  v94 = &v88;
  v66 = *((__int128 **)&v112 + 1);
  v67 = *((__int64 **)&v114 + 1);
  v110 = 0;
  *(_QWORD *)&v103 = *((_QWORD *)&v112 + 1);
  *((_QWORD *)&v103 + 1) = *((_QWORD *)&v112 + 1);
  v104 = v112;
  v120 = *((_QWORD *)&v112 + 1) + 32 * v113;
  v105 = v120;
  v106 = *((_QWORD *)&v114 + 1);
  v107 = *((__int64 **)&v114 + 1);
  v108 = v114;
  v119 = *((_QWORD *)&v114 + 1) + 16 * v115;
  v109 = v119;
  v111 = 0;
  v118 = (__int64)v87 + 90;
  v68 = 0;
  while ( 1 )
  {
    if ( v66 == (__int128 *)v120 )
      goto LABEL_104;
    v69 = v66 + 2;
    *((_QWORD *)&v103 + 1) = v66 + 2;
    v70 = *((_BYTE *)v66 + 24);
    if ( v70 == 2 )
      goto LABEL_104;
    v127.m256i_i64[0] = *((_QWORD *)v66 + 2);
    v126 = *v66;
    v71 = *(_DWORD *)((char *)v66 + 25);
    *((_DWORD *)v65 + 7) = *((_DWORD *)v66 + 7);
    *(_DWORD *)((char *)v65 + 25) = v71;
    v127.m256i_i8[8] = v70;
    if ( v67 == (__int64 *)v119 )
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v126) )
        sub_140FB11D0(&v126);
LABEL_104:
      sub_140332250(&v103);
      sub_140332390(&v106);
      v85 = v88;
      sub_1409827C0(v87);
      result = v92;
      v92[1] = (__int64)v85;
      *result = -1;
      return result;
    }
    v72 = v65;
    v73 = (__int64)v66 + 25;
    v121 = v67 + 2;
    v107 = v67 + 2;
    v74 = *v67;
    v75 = *((_BYTE *)v67 + 8);
    *(_QWORD *)&v117 = *((_QWORD *)v66 + 2);
    v116 = *v66;
    v76 = *(_DWORD *)((char *)v66 + 25);
    HIDWORD(v117) = *(_DWORD *)(v73 + 3);
    *(_DWORD *)((char *)&v117 + 9) = v76;
    v77 = v68 + 1;
    v111 = v68 + 1;
    BYTE8(v117) = v70;
    v93 = v74;
    v124 = v74;
    v125 = v75;
    v78 = *((_QWORD *)v87 + 5);
    if ( v78 )
    {
      (*(void (__fastcall **)(__int128 *, __int64, __int64))(*((_QWORD *)v87 + 6) + 32LL))(v72, v78, v68);
      v79 = *v87;
      v80 = _InterlockedIncrement64(v88);
      if ( (v80 < 0) ^ v45 | (v80 == 0) )
        goto LABEL_113;
    }
    else
    {
      *(_QWORD *)&v126 = -1;
      v79 = *v87;
      if ( _InterlockedIncrement64(v88) <= 0 )
        goto LABEL_113;
    }
    *(_OWORD *)((char *)&v90[1] + 8) = v117;
    *(_OWORD *)((char *)v90 + 8) = v116;
    *(_QWORD *)&v89[32] = v127.m256i_i64[0];
    *(_OWORD *)&v89[16] = v126;
    *(_OWORD *)v89 = v79;
    *(_QWORD *)&v89[40] = v93;
    LOBYTE(v90[0]) = v75;
    *((_QWORD *)&v90[2] + 1) = v88;
    v91 = v68;
    if ( !v68 )
    {
      if ( *((_BYTE *)v87 + 88) )
        break;
    }
    v131 = v91;
    v130 = v90[2];
    v129 = v90[1];
    v128 = v90[0];
    v127 = *(__m256i *)&v89[16];
    v126 = *(_OWORD *)v89;
    v65 = v72;
    v68 = sub_140FB50A0(v118, v72);
    if ( v68 )
    {
      v84 = 2;
      goto LABEL_106;
    }
LABEL_86:
    v68 = v77;
    v67 = v121;
    v66 = v69;
  }
  if ( !*(_QWORD *)sub_140FB1E40() )
  {
    v65 = v72;
    v100 = v91;
    v99 = v90[2];
    v98 = v90[1];
    v97 = v90[0];
    v96 = *(__m256i *)&v89[16];
    v95 = *(_OWORD *)v89;
    sub_140FB5550(v72, &v95);
    nullsub_1(v81);
    v82 = sub_140001650(384, 128);
    if ( !v82 )
      sub_1416C2D31(128, 384);
    v83 = v82;
    sub_141684120(v82, v72, 384);
    sub_140FB4D70(v83);
    if ( !*((_QWORD *)v88 + 65) )
      sub_1416C30E3(0, 0, &off_1417A37E8);
    sub_140A67F40(*((_QWORD *)v88 + 64));
    goto LABEL_86;
  }
  sub_140983290(v89);
  v84 = 1;
LABEL_106:
  sub_140332250(&v103);
  sub_140332390(&v106);
  sub_140FB5370(&v94);
  if ( !_InterlockedDecrement64(v88) )
    sub_140FB1240(&v88);
  sub_1409827C0(v87);
  result = v92;
  *v92 = v84;
  result[1] = v68;
  return result;
}