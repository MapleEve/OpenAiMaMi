// win 1.2.7 | module src/core/relay/codex_mutation.rs | ea 0x140173120 | name sub_140173120
__int64 __fastcall sub_140173120(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int128 v8; // xmm6
  __int8 v9; // bl
  volatile void *v10; // rax
  void *v11; // r12
  __int64 *v12; // r12
  _QWORD *v13; // rcx
  __int128 v14; // kr00_16
  __int8 v15; // r14
  PVOID v16; // rcx
  char v17; // al
  __int32 v18; // eax
  char *v19; // rdi
  char v20; // al
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r13
  PVOID v29; // rcx
  char v30; // al
  __int64 v31; // r15
  void *v32; // r12
  char v33; // al
  unsigned __int128 v34; // kr10_16
  __int64 v35; // r14
  __int64 v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm3
  __int64 v40; // rax
  __int64 v41; // r9
  __int128 v42; // xmm0
  __int64 v43; // r14
  bool v44; // al
  void *v45; // rax
  unsigned __int128 v46; // kr20_16
  __int64 v47; // rdi
  __int64 v48; // rbx
  unsigned __int128 v49; // kr40_16
  unsigned __int64 v50; // rdi
  __int64 v51; // rdx
  void *v52; // rax
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  unsigned __int128 v55; // xmm2
  __int64 v56; // rdx
  __int64 v57; // rax
  _BYTE v58[24]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v59; // [rsp+48h] [rbp-38h] BYREF
  __int64 v60; // [rsp+58h] [rbp-28h]
  __int128 v61; // [rsp+60h] [rbp-20h]
  __int128 v62; // [rsp+70h] [rbp-10h]
  __int128 v63; // [rsp+80h] [rbp+0h]
  __int128 v64; // [rsp+90h] [rbp+10h]
  __int64 v65; // [rsp+A0h] [rbp+20h]
  __int128 v66; // [rsp+B0h] [rbp+30h]
  __int64 v67; // [rsp+C0h] [rbp+40h]
  unsigned __int128 v68; // [rsp+D0h] [rbp+50h]
  __m256i v69; // [rsp+E0h] [rbp+60h]
  __int64 v70; // [rsp+100h] [rbp+80h]
  unsigned __int128 *v71; // [rsp+110h] [rbp+90h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+118h] [rbp+98h]
  __m256i v73; // [rsp+120h] [rbp+A0h] BYREF
  unsigned __int128 v74; // [rsp+140h] [rbp+C0h]
  __int128 v75; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v76; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v77; // [rsp+170h] [rbp+F0h]
  __int64 v78; // [rsp+180h] [rbp+100h] BYREF
  unsigned __int128 v79; // [rsp+188h] [rbp+108h] BYREF
  unsigned __int64 v80; // [rsp+198h] [rbp+118h]
  unsigned __int128 v81; // [rsp+1A0h] [rbp+120h] BYREF
  unsigned __int64 v82; // [rsp+1B0h] [rbp+130h]
  PVOID Address; // [rsp+1B8h] [rbp+138h]
  __m256i v84; // [rsp+1C0h] [rbp+140h] BYREF
  unsigned __int128 v85; // [rsp+1E0h] [rbp+160h]
  __int128 v86; // [rsp+1F0h] [rbp+170h]
  __int128 v87; // [rsp+200h] [rbp+180h]
  __int128 v88; // [rsp+210h] [rbp+190h]
  __int64 v89; // [rsp+220h] [rbp+1A0h]
  unsigned __int64 v90; // [rsp+228h] [rbp+1A8h]
  unsigned __int128 v91; // [rsp+230h] [rbp+1B0h] BYREF
  unsigned __int64 v92; // [rsp+240h] [rbp+1C0h]
  __int64 v93; // [rsp+248h] [rbp+1C8h]
  _BYTE v94[80]; // [rsp+250h] [rbp+1D0h] BYREF
  __int128 v95; // [rsp+2A0h] [rbp+220h]
  __int64 v96; // [rsp+2B0h] [rbp+230h]
  unsigned __int128 v97; // [rsp+2C0h] [rbp+240h] BYREF
  __m256i v98; // [rsp+2D0h] [rbp+250h]
  __int64 v99; // [rsp+2F0h] [rbp+270h]
  HANDLE hObject; // [rsp+2F8h] [rbp+278h] BYREF
  unsigned __int64 v101; // [rsp+300h] [rbp+280h]
  PVOID v102; // [rsp+308h] [rbp+288h]
  __int128 v103; // [rsp+310h] [rbp+290h] BYREF
  __int64 v104; // [rsp+320h] [rbp+2A0h]
  __int64 v105; // [rsp+328h] [rbp+2A8h]
  char v106; // [rsp+332h] [rbp+2B2h]
  unsigned __int8 v107; // [rsp+333h] [rbp+2B3h]
  char v108; // [rsp+334h] [rbp+2B4h]
  char v109; // [rsp+335h] [rbp+2B5h]
  char v110; // [rsp+336h] [rbp+2B6h]
  char v111; // [rsp+337h] [rbp+2B7h] BYREF
  __int64 v112; // [rsp+338h] [rbp+2B8h]

  v112 = -2;
  v6 = *(_QWORD *)(a2 + 136);
  v7 = sub_1404CA6F0((volatile void *)(*(_QWORD *)(v6 + 5016) + 16LL));
  if ( !v7 )
  {
    v84.m256i_i64[0] = (__int64)aCodexmateLibCo;
    v84.m256i_i64[1] = 61;
    *(_QWORD *)v94 = &v84;
    *(_QWORD *)&v94[8] = sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, v94, &off_141A0F7A8);
  }
  sub_140DA5500(&v84, v7, aSavingChatgptO, 32);
  if ( v84.m256i_i32[0] != -1 )
  {
    v95 = v88;
    *(_OWORD *)&v94[64] = v87;
    *(_OWORD *)&v94[48] = v86;
    *(_OWORD *)&v94[32] = v85;
    *(__m256i *)v94 = v84;
    *(_QWORD *)&v97 = 0;
    *((_QWORD *)&v97 + 1) = 1;
    v98.m256i_i64[0] = 0;
    v73.m256i_i64[2] = 1610612768;
    v73.m256i_i64[0] = (__int64)&v97;
    v73.m256i_i64[1] = (__int64)&off_1419D1B00;
    if ( (unsigned __int8)sub_14104A7D0(v94, &v73) )
      sub_141939040(
        (unsigned int)aADisplayImplem,
        55,
        (unsigned int)&v111,
        (unsigned int)&unk_1419CFEE0,
        (__int64)&off_1419D1BB8);
    v8 = v97;
    v9 = v98.m256i_i8[0];
    *(_DWORD *)(a1 + 25) = *(__int32 *)((char *)v98.m256i_i32 + 1);
    *(_DWORD *)(a1 + 28) = v98.m256i_i32[1];
    sub_1400347C0(&v84);
    *(_OWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 24) = v9;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  Address = (PVOID)v84.m256i_i64[1];
  v107 = v84.m256i_u8[16];
  v10 = (volatile void *)sub_1404C9470((volatile void *)(*(_QWORD *)(v6 + 5016) + 16LL));
  if ( !v10 )
  {
    v84.m256i_i64[0] = (__int64)aStdSyncPoisonM;
    v84.m256i_i64[1] = 76;
    *(_QWORD *)v94 = &v84;
    *(_QWORD *)&v94[8] = sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, v94, &off_141A0F7A8);
  }
  v11 = (void *)v10;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v10, 1, 0) )
    sub_141937480(v10);
  v102 = v11;
  v12 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v22 = sub_141938160();
    LOBYTE(v22) = v22 ^ 1;
    LODWORD(v105) = v22;
    v13 = v102;
    if ( *((_BYTE *)v102 + 1) )
      goto LABEL_10;
  }
  else
  {
    LODWORD(v105) = 0;
    v13 = v102;
    if ( *((_BYTE *)v102 + 1) )
    {
LABEL_10:
      v84.m256i_i64[0] = 0;
      *(_OWORD *)&v84.m256i_u64[1] = 1u;
      *(_QWORD *)&v94[16] = 1610612768;
      *(_QWORD *)v94 = &v84;
      *(_QWORD *)&v94[8] = &off_1419D1B00;
      if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, v94) )
        sub_141939040(
          (unsigned int)aADisplayImplem,
          55,
          (unsigned int)&v111,
          (unsigned int)&unk_1419CFEE0,
          (__int64)&off_1419D1BB8);
      v14 = *(_OWORD *)v84.m256i_i8;
      v15 = v84.m256i_i8[16];
      v73.m256i_i32[0] = *(__int32 *)((char *)&v84.m256i_i32[4] + 1);
      *(__int32 *)((char *)v73.m256i_i32 + 3) = v84.m256i_i32[5];
      if ( !(_BYTE)v105 && 2 * *v12 && !(unsigned __int8)sub_141938160() )
        *((_BYTE *)v102 + 1) = 1;
      v16 = v102;
      v17 = *(_BYTE *)v102;
      *(_BYTE *)v102 = 0;
      if ( v17 == 2 )
        WakeByAddressSingle(v16);
      v18 = v73.m256i_i32[0];
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v73.m256i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v18;
      *(_OWORD *)(a1 + 8) = v14;
      *(_BYTE *)(a1 + 24) = v15;
      *(_QWORD *)a1 = -1;
      v19 = (char *)Address;
LABEL_16:
      if ( !v107 && 2 * *v12 && !(unsigned __int8)sub_141938160() )
        v19[1] = 1;
      v20 = *v19;
      *v19 = 0;
      if ( v20 == 2 )
        WakeByAddressSingle(v19);
      return a1;
    }
  }
  v23 = v13[35];
  if ( v23 < 0 )
  {
    v24 = 0;
    goto LABEL_27;
  }
  v93 = v13[35];
  if ( !v23 )
  {
    v28 = 1;
    if ( (_BYTE)v105 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v25 = v13[34];
  nullsub_1();
  v24 = 1;
  v26 = v93;
  v27 = sub_140001650(v93, 1);
  v23 = v26;
  if ( !v27 )
LABEL_27:
    sub_141938D2B(v24, v23);
  v28 = v27;
  sub_1418F44E0(v27, v25, v23);
  v12 = off_1421E7210;
  if ( !(_BYTE)v105 )
  {
LABEL_33:
    if ( 2 * *v12 && !(unsigned __int8)sub_141938160() )
      *((_BYTE *)v102 + 1) = 1;
  }
LABEL_34:
  v29 = v102;
  v30 = *(_BYTE *)v102;
  *(_BYTE *)v102 = 0;
  if ( v30 == 2 )
    WakeByAddressSingle(v29);
  v102 = (PVOID)v28;
  sub_1416828D0((unsigned int)&v73, v28, v93, (unsigned int)".account-transition.lockaccount transition", 24);
  v105 = v73.m256i_i64[1];
  sub_140FE2210((unsigned int)v94, v73.m256i_i32[2], v73.m256i_i32[4], (unsigned int)"account transition", 18);
  v31 = *(_QWORD *)v94;
  if ( *(_QWORD *)v94 != -1 )
  {
    v87 = v95;
    v86 = *(_OWORD *)&v94[64];
    v85 = *(_OWORD *)&v94[48];
    v84 = *(__m256i *)&v94[16];
  }
  v32 = *(void **)&v94[8];
  if ( v73.m256i_i64[0] )
    sub_140001660(v105, v73.m256i_i64[0], 1);
  if ( (_DWORD)v31 != -1 )
  {
    *(_QWORD *)v94 = v31;
    *(_QWORD *)&v94[8] = v32;
    *(__m256i *)&v94[16] = v84;
    *(_OWORD *)&v94[48] = v85;
    *(_OWORD *)&v94[64] = v86;
    v95 = v87;
    *(_QWORD *)&v97 = 0;
    *((_QWORD *)&v97 + 1) = 1;
    v98.m256i_i64[0] = 0;
    v73.m256i_i64[2] = 1610612768;
    v73.m256i_i64[0] = (__int64)&v97;
    v73.m256i_i64[1] = (__int64)&off_1419D1B00;
    v33 = sub_14104A7D0(v94, &v73);
    v12 = off_1421E7210;
    if ( v33 )
      sub_141939040(
        (unsigned int)aADisplayImplem,
        55,
        (unsigned int)&v111,
        (unsigned int)&unk_1419CFEE0,
        (__int64)&off_1419D1BB8);
    v34 = v97;
    v35 = v98.m256i_i64[0];
    sub_1400347C0(v94);
    *(_OWORD *)(a1 + 8) = v34;
    *(_QWORD *)(a1 + 24) = v35;
    *(_QWORD *)a1 = -1;
LABEL_53:
    v19 = (char *)Address;
    if ( v93 )
      sub_140001660(v102, v93, 1);
    goto LABEL_16;
  }
  hObject = v32;
  sub_140153840(v94, v6, a3, 0);
  v12 = off_1421E7210;
  v36 = *(_QWORD *)v94;
  v66 = *(_OWORD *)&v94[8];
  v67 = *(_QWORD *)&v94[24];
  if ( *(_QWORD *)v94 == -2 )
  {
    *(_QWORD *)(a1 + 24) = v67;
    *(_OWORD *)(a1 + 8) = v66;
    v36 = -1;
LABEL_47:
    *(_QWORD *)a1 = v36;
    goto LABEL_48;
  }
  v65 = v96;
  v64 = v95;
  v63 = *(_OWORD *)&v94[64];
  v62 = *(_OWORD *)&v94[48];
  v61 = *(_OWORD *)&v94[32];
  if ( *(_QWORD *)v94 != -1 )
  {
    *(_QWORD *)(a1 + 24) = v67;
    *(_OWORD *)(a1 + 8) = v66;
    v37 = v62;
    v38 = v63;
    v39 = v64;
    *(_OWORD *)(a1 + 32) = v61;
    *(_OWORD *)(a1 + 48) = v37;
    *(_OWORD *)(a1 + 64) = v38;
    *(_OWORD *)(a1 + 80) = v39;
    *(_QWORD *)(a1 + 96) = v65;
    goto LABEL_47;
  }
  sub_140F97C60(v94, &v111);
  if ( v94[50] == 2 )
  {
    v84.m256i_i64[2] = *(_QWORD *)&v94[16];
    v42 = *(_OWORD *)v94;
    *(_OWORD *)v84.m256i_i8 = *(_OWORD *)v94;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v94[16];
    *(_OWORD *)(a1 + 8) = v42;
    *(_QWORD *)a1 = -1;
LABEL_48:
    v40 = sub_141412E80(&hObject);
    if ( v40 && (unsigned int)(v40 & 3) - 2 >= 2 && (v40 & 3) != 0 )
    {
      *(_QWORD *)&v94[8] = v40 - 1;
      v94[0] = 3;
      sub_1416BCB00(&v94[8]);
    }
    CloseHandle(hObject);
    goto LABEL_53;
  }
  LOWORD(v86) = *(_WORD *)&v94[48];
  v85 = *(_OWORD *)&v94[32];
  v84 = *(__m256i *)v94;
  v70 = *(_QWORD *)&v94[48];
  v68 = *(_OWORD *)v94;
  v69 = *(__m256i *)&v94[16];
  v109 = 1;
  LOBYTE(v41) = 1;
  sub_140153840(&v84, v6, a3, v41);
  if ( v84.m256i_i64[0] >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v96 = v89;
    v95 = v88;
    *(_OWORD *)&v94[64] = v87;
    *(_OWORD *)&v94[48] = v86;
    *(_OWORD *)&v94[32] = v85;
    *(__m256i *)v94 = v84;
    v105 = v84.m256i_i64[0];
    if ( v84.m256i_i64[0] == -2 )
    {
      v104 = v84.m256i_i64[3];
      v103 = *(_OWORD *)&v84.m256i_u64[1];
    }
    else
    {
      nullsub_1();
      v45 = (void *)sub_140001650(59, 1);
      if ( !v45 )
      {
        v106 = 1;
        sub_141938D2B(1, 59);
      }
      qmemcpy(v45, "OAUTH_COMMIT_NOT_STARTED: active account could not be saved", 59);
      *(_QWORD *)&v103 = 59;
      *((_QWORD *)&v103 + 1) = v45;
      v104 = 59;
    }
    v99 = v70;
    v98 = v69;
    v97 = v68;
    sub_140F97E00(&v79, &v111, &v97);
    if ( (_QWORD)v79 == -1 )
    {
      if ( DWORD2(v79) || (BYTE12(v79) & 1) != 0 )
      {
        v56 = v104;
        if ( (unsigned __int64)(v103 - v104) <= 0x3C )
        {
          sub_14190D590((unsigned int)&v103, v104, 61, 1, 1);
          v56 = v104;
        }
        v57 = *((_QWORD *)&v103 + 1);
        *(_OWORD *)(*((_QWORD *)&v103 + 1) + v56 + 45) = *(__int128 *)((char *)&xmmword_1419D0C6D + 13);
        *(_OWORD *)(v57 + v56 + 32) = xmmword_1419D0C6D;
        *(_OWORD *)(v57 + v56 + 16) = xmmword_1419D0C5D;
        *(_OWORD *)(v57 + v56) = xmmword_1419D0C4D;
        v104 = v56 + 61;
        goto LABEL_104;
      }
      sub_140F97F80(&v81, &v111);
      if ( (_QWORD)v81 == -1 )
      {
LABEL_104:
        *(_QWORD *)(a1 + 24) = v104;
        *(_OWORD *)(a1 + 8) = v103;
        *(_QWORD *)a1 = -1;
        if ( v105 != -2 )
          sub_140021280(v94);
        goto LABEL_48;
      }
      v92 = v82;
      v91 = v81;
      v71 = &v91;
      v72 = sub_1400015F0;
      sub_1416ABFD0(&v97, &unk_1419D0C30, &v71);
      v47 = v98.m256i_i64[0];
      v48 = v104;
      v46 = v97;
      if ( v98.m256i_i64[0] <= (unsigned __int64)(v103 - v104) )
      {
LABEL_68:
        if ( !v47 )
        {
LABEL_70:
          v104 = v47 + v48;
          if ( (_QWORD)v46 )
            sub_140001660(*((_QWORD *)&v46 + 1), v46, 1);
          if ( (_QWORD)v91 )
            sub_140001660(*((_QWORD *)&v91 + 1), v91, 1);
          goto LABEL_104;
        }
LABEL_69:
        sub_1418F44E0(v48 + *((_QWORD *)&v103 + 1), *((_QWORD *)&v46 + 1), v47);
        goto LABEL_70;
      }
    }
    else
    {
      v92 = v80;
      v91 = v79;
      *(_QWORD *)&v81 = &v91;
      *((_QWORD *)&v81 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v97, &unk_1419D0C8A, &v81);
      v46 = v97;
      v47 = v98.m256i_i64[0];
      v48 = v104;
      if ( v98.m256i_i64[0] <= (unsigned __int64)(v103 - v104) )
        goto LABEL_68;
    }
    v90 = *((_QWORD *)&v97 + 1);
    v101 = v97;
    sub_14190D590((unsigned int)&v103, v104, v98.m256i_i32[0], 1, 1);
    v48 = v104;
    v12 = off_1421E7210;
    v46 = __PAIR128__(v90, v101);
    goto LABEL_69;
  }
  v78 = v89;
  v77 = v88;
  v76 = v87;
  v75 = v86;
  v74 = v85;
  v73 = v84;
  *(_QWORD *)v94 = (char *)&v78 + 4;
  *(_QWORD *)&v94[8] = sub_1416BCC50;
  v110 = 1;
  sub_1416ABFD0(v58, &unk_1419D0B18, v94);
  v110 = 1;
  sub_14019B500((unsigned int)aAccountOauth, 13, (unsigned int)aDiskCommitted, 14, (__int64)v58);
  if ( *((_QWORD *)&v76 + 1) == -1 )
  {
    v43 = -1;
  }
  else
  {
    v110 = 1;
    sub_1416AC440(v94, (char *)&v76 + 8);
    v43 = *(_QWORD *)v94;
    v97 = *(_OWORD *)&v94[8];
    if ( *((_QWORD *)&v76 + 1) != -1 && *((_QWORD *)&v77 + 1) == v73.m256i_i64[2] )
    {
      v44 = (unsigned int)sub_1418F4B70(v77, v73.m256i_i64[1]) == 0;
      goto LABEL_81;
    }
  }
  v44 = 0;
LABEL_81:
  *(_QWORD *)&v86 = a2;
  *((_QWORD *)&v86 + 1) = a3;
  v84.m256i_i64[3] = v43;
  v85 = v97;
  LOBYTE(v87) = v44;
  v84.m256i_i64[0] = 0;
  *(_OWORD *)&v84.m256i_u64[1] = 8u;
  v99 = v70;
  v98 = v69;
  v97 = v68;
  v108 = 1;
  sub_140E9D750(v94, &v111, &v97, &v84);
  if ( *(_QWORD *)v94 != -1 )
  {
    v104 = *(_QWORD *)&v94[16];
    v103 = *(_OWORD *)v94;
    if ( v94[74] == 2
      || (v99 = *(_QWORD *)&v94[72],
          v98 = *(__m256i *)&v94[40],
          v97 = *(_OWORD *)&v94[24],
          sub_140F97E00(&v79, &v111, &v97),
          (_QWORD)v79 == -1) )
    {
LABEL_91:
      nullsub_1();
      v52 = (void *)sub_140001650(28, 1);
      if ( !v52 )
        sub_141938D2B(1, 28);
      v105 = (__int64)v52;
      qmemcpy(v52, "OAUTH_CLIENT_UPDATE_DEFERRED", 28);
      *(_QWORD *)&v97 = &v103;
      *((_QWORD *)&v97 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v59, &unk_1419D0B80, &v97);
      *(_QWORD *)&v97 = 28;
      *((_QWORD *)&v97 + 1) = v105;
      v98.m256i_i64[0] = 28;
      *(_OWORD *)&v98.m256i_u64[1] = v59;
      v98.m256i_i64[3] = v60;
      sub_14016E9E0(&v75, &v97);
      if ( (_QWORD)v103 )
        sub_140001660(*((_QWORD *)&v103 + 1), v103, 1);
      goto LABEL_95;
    }
    v82 = v80;
    v81 = v79;
    v71 = &v81;
    v72 = sub_1400015F0;
    sub_1416ABFD0(&v91, &unk_1419D0B48, &v71);
    v49 = v91;
    v50 = v92;
    v51 = v104;
    if ( v92 > (__int64)v103 - v104 )
    {
      v101 = *((_QWORD *)&v91 + 1);
      v105 = v91;
      sub_14190D590((unsigned int)&v103, v104, v92, 1, 1);
      v51 = v104;
      v49 = __PAIR128__(v101, v105);
    }
    else if ( !v92 )
    {
LABEL_87:
      v104 = v50 + v51;
      if ( (_QWORD)v49 )
        sub_140001660(*((_QWORD *)&v49 + 1), v49, 1);
      if ( (_QWORD)v81 )
        sub_140001660(*((_QWORD *)&v81 + 1), v81, 1);
      goto LABEL_91;
    }
    sub_1418F44E0(*((_QWORD *)&v103 + 1) + v51, *((_QWORD *)&v49 + 1), v50);
    v51 = v104;
    goto LABEL_87;
  }
  *(_QWORD *)&v97 = *(_QWORD *)&v94[16];
  v98.m256i_i64[0] = *(_QWORD *)&v94[8];
  *((_QWORD *)&v97 + 1) = *(_QWORD *)&v94[16];
  v98.m256i_i64[1] = *(_QWORD *)&v94[16] + 48LL * *(_QWORD *)&v94[24];
  v108 = 1;
  sub_1403E4B60(&v75, &v97);
LABEL_95:
  *(_QWORD *)v94 = v84.m256i_i64[1];
  *(_QWORD *)&v94[8] = v84.m256i_i64[1];
  *(_QWORD *)&v94[16] = v84.m256i_i64[0];
  *(_QWORD *)&v94[24] = v84.m256i_i64[1] + 48 * v84.m256i_i64[2];
  v108 = 0;
  sub_1403E4B60(&v75, v94);
  *(_QWORD *)(a1 + 96) = v78;
  *(_OWORD *)(a1 + 80) = v77;
  *(_OWORD *)(a1 + 64) = v76;
  v53 = *(_OWORD *)v73.m256i_i8;
  v54 = *(_OWORD *)&v73.m256i_u64[2];
  v55 = v74;
  *(_OWORD *)(a1 + 48) = v75;
  *(_OWORD *)(a1 + 32) = v55;
  *(_OWORD *)(a1 + 16) = v54;
  *(_OWORD *)a1 = v53;
  if ( v84.m256i_i64[3] != -1 && v84.m256i_i64[3] )
    sub_140001660(v85, v84.m256i_i64[3], 1);
  sub_141057160(&hObject);
  CloseHandle(hObject);
  if ( v93 )
    sub_140001660(v102, v93, 1);
  sub_140028CC0(Address, v107);
  return a1;
}
