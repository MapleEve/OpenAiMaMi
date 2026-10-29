// win 1.2.7 latest-exe | module src/core/relay/codex_mutation.rs | ea 0x14017c4c0 | successor of pre-update 0x140173120 | session <审计会话>
// match evidence: {"verdict": "CONFIRMED_STR_CAND"}
__int64 __fastcall sub_14017C4C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int128 v8; // xmm6
  __int8 v9; // bl
  volatile void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // r12
  __int64 *v15; // r12
  _QWORD *v16; // rcx
  PVOID v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v20; // kr00_16
  __int8 v21; // r14
  PVOID v22; // rcx
  char v23; // al
  __int32 v24; // eax
  __int64 v25; // rcx
  char *v26; // rdi
  int v27; // eax
  void *v28; // r13
  __int64 v29; // r15
  __int64 v30; // rax
  PVOID v31; // rcx
  char v32; // al
  __int64 v33; // r15
  void *v34; // r13
  unsigned __int128 v35; // kr10_16
  __int64 v36; // r14
  __int64 v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int64 v41; // rax
  char v42; // al
  __int64 v44; // r9
  __int128 v45; // xmm0
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r14
  bool v49; // al
  void *v50; // rax
  unsigned __int128 v51; // kr20_16
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int128 v56; // kr40_16
  unsigned __int64 v57; // rdi
  __int64 v58; // rdx
  void *v59; // rax
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  unsigned __int128 v62; // xmm2
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  _BYTE v66[24]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v67; // [rsp+48h] [rbp-38h] BYREF
  __int64 v68; // [rsp+58h] [rbp-28h]
  __int128 v69; // [rsp+60h] [rbp-20h]
  __int128 v70; // [rsp+70h] [rbp-10h]
  __int128 v71; // [rsp+80h] [rbp+0h]
  __int128 v72; // [rsp+90h] [rbp+10h]
  __int64 v73; // [rsp+A0h] [rbp+20h]
  __int128 v74; // [rsp+B0h] [rbp+30h]
  __int64 v75; // [rsp+C0h] [rbp+40h]
  unsigned __int128 v76; // [rsp+D0h] [rbp+50h]
  __m256i v77; // [rsp+E0h] [rbp+60h]
  __int64 v78; // [rsp+100h] [rbp+80h]
  unsigned __int128 *v79; // [rsp+110h] [rbp+90h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+118h] [rbp+98h]
  __m256i v81; // [rsp+120h] [rbp+A0h] BYREF
  unsigned __int128 v82; // [rsp+140h] [rbp+C0h]
  __int128 v83; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v84; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v85; // [rsp+170h] [rbp+F0h]
  __int64 v86; // [rsp+180h] [rbp+100h] BYREF
  unsigned __int128 v87; // [rsp+188h] [rbp+108h] BYREF
  unsigned __int64 v88; // [rsp+198h] [rbp+118h]
  unsigned __int128 v89; // [rsp+1A0h] [rbp+120h] BYREF
  unsigned __int64 v90; // [rsp+1B0h] [rbp+130h]
  PVOID Address; // [rsp+1B8h] [rbp+138h]
  __m256i v92; // [rsp+1C0h] [rbp+140h] BYREF
  unsigned __int128 v93; // [rsp+1E0h] [rbp+160h]
  __int128 v94; // [rsp+1F0h] [rbp+170h]
  __int128 v95; // [rsp+200h] [rbp+180h]
  __int128 v96; // [rsp+210h] [rbp+190h]
  __int64 v97; // [rsp+220h] [rbp+1A0h]
  __int64 v98; // [rsp+230h] [rbp+1B0h]
  unsigned __int64 v99; // [rsp+238h] [rbp+1B8h]
  unsigned __int128 v100; // [rsp+240h] [rbp+1C0h] BYREF
  unsigned __int64 v101; // [rsp+250h] [rbp+1D0h]
  _BYTE v102[80]; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v103; // [rsp+2B0h] [rbp+230h]
  __int64 v104; // [rsp+2C0h] [rbp+240h]
  unsigned __int128 v105; // [rsp+2D0h] [rbp+250h] BYREF
  __m256i v106; // [rsp+2E0h] [rbp+260h]
  __int64 v107; // [rsp+300h] [rbp+280h]
  HANDLE hObject; // [rsp+308h] [rbp+288h] BYREF
  unsigned __int64 v109; // [rsp+310h] [rbp+290h]
  PVOID v110; // [rsp+318h] [rbp+298h]
  __int128 v111; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v112; // [rsp+330h] [rbp+2B0h]
  __int64 v113; // [rsp+338h] [rbp+2B8h]
  char v114; // [rsp+342h] [rbp+2C2h]
  unsigned __int8 v115; // [rsp+343h] [rbp+2C3h]
  char v116; // [rsp+344h] [rbp+2C4h]
  char v117; // [rsp+345h] [rbp+2C5h]
  char v118; // [rsp+346h] [rbp+2C6h]
  char v119; // [rsp+347h] [rbp+2C7h] BYREF
  __int64 v120; // [rsp+348h] [rbp+2C8h]

  v120 = -2;
  v6 = *(_QWORD *)(a2 + 136);
  v7 = sub_140506FA0((volatile void *)(*(_QWORD *)(v6 + 5016) + 16LL));
  if ( !v7 )
  {
    v92.m256i_i64[0] = (__int64)aCodexmateLibCo;
    v92.m256i_i64[1] = 61;
    *(_QWORD *)v102 = &v92;
    *(_QWORD *)&v102[8] = sub_140191200;
    sub_14196B850(&unk_141A2A620, v102, &off_141A2A6A8);
  }
  sub_1408741F0(&v92, v7, aSavingChatgptO, 32);
  if ( v92.m256i_i32[0] != -1 )
  {
    v103 = v96;
    *(_OWORD *)&v102[64] = v95;
    *(_OWORD *)&v102[48] = v94;
    *(_OWORD *)&v102[32] = v93;
    *(__m256i *)v102 = v92;
    *(_QWORD *)&v105 = 0;
    *((_QWORD *)&v105 + 1) = 1;
    v106.m256i_i64[0] = 0;
    v81.m256i_i64[2] = 1610612768;
    v81.m256i_i64[0] = (__int64)&v105;
    v81.m256i_i64[1] = (__int64)&off_141A03680;
    if ( (unsigned __int8)sub_140D76130(v102, &v81) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem,
        55,
        (unsigned int)&v119,
        (unsigned int)&unk_141A02398,
        (__int64)&off_141A03738);
    v8 = v105;
    v9 = v106.m256i_i8[0];
    *(_DWORD *)(a1 + 25) = *(__int32 *)((char *)v106.m256i_i32 + 1);
    *(_DWORD *)(a1 + 28) = v106.m256i_i32[1];
    sub_140038370(&v92);
    *(_OWORD *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 24) = v9;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  Address = (PVOID)v92.m256i_i64[1];
  v115 = v92.m256i_u8[16];
  v10 = (volatile void *)sub_140505D20((volatile void *)(*(_QWORD *)(v6 + 5016) + 16LL));
  if ( !v10 )
  {
    v92.m256i_i64[0] = (__int64)aStdSyncPoisonM;
    v92.m256i_i64[1] = 76;
    *(_QWORD *)v102 = &v92;
    *(_QWORD *)&v102[8] = sub_140191200;
    sub_14196B850(&unk_141A2A620, v102, &off_141A2A6A8);
  }
  v14 = (void *)v10;
  LOBYTE(v12) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v10, 1, 0) )
    sub_141969A30(v10);
  v110 = v14;
  v15 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v27 = sub_14196A710(v12, v11, v13);
    LOBYTE(v27) = v27 ^ 1;
    LODWORD(v113) = v27;
    v16 = v110;
    if ( *((_BYTE *)v110 + 1) )
      goto LABEL_10;
  }
  else
  {
    LODWORD(v113) = 0;
    v16 = v110;
    if ( *((_BYTE *)v110 + 1) )
    {
LABEL_10:
      v92.m256i_i64[0] = 0;
      *(_OWORD *)&v92.m256i_u64[1] = 1u;
      *(_QWORD *)&v102[16] = 1610612768;
      *(_QWORD *)v102 = &v92;
      *(_QWORD *)&v102[8] = &off_141A03680;
      if ( (unsigned __int8)sub_1416EC060(aPoisonedLockAn, 41, v102) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem,
          55,
          (unsigned int)&v119,
          (unsigned int)&unk_141A02398,
          (__int64)&off_141A03738);
      v20 = *(_OWORD *)v92.m256i_i8;
      v21 = v92.m256i_i8[16];
      v81.m256i_i32[0] = *(__int32 *)((char *)&v92.m256i_i32[4] + 1);
      *(__int32 *)((char *)v81.m256i_i32 + 3) = v92.m256i_i32[5];
      if ( !(_BYTE)v113 && 2 * *v15 && !(unsigned __int8)sub_14196A710(v18, v17, v19) )
        *((_BYTE *)v110 + 1) = 1;
      v22 = v110;
      v23 = *(_BYTE *)v110;
      *(_BYTE *)v110 = 0;
      if ( v23 == 2 )
        WakeByAddressSingle(v22);
      v24 = v81.m256i_i32[0];
      v25 = *(unsigned int *)((char *)v81.m256i_u32 + 3);
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v81.m256i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v24;
      *(_OWORD *)(a1 + 8) = v20;
      *(_BYTE *)(a1 + 24) = v21;
      *(_QWORD *)a1 = -1;
      v26 = (char *)Address;
LABEL_47:
      if ( !v115 && 2 * *v15 && !(unsigned __int8)sub_14196A710(v25, v17, v19) )
        v26[1] = 1;
      v42 = *v26;
      *v26 = 0;
      if ( v42 == 2 )
        WakeByAddressSingle(v26);
      return a1;
    }
  }
  v28 = (void *)v16[35];
  if ( !v28 )
  {
    v98 = 1;
    if ( (_BYTE)v113 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v29 = v16[34];
  nullsub_1(v16, v11);
  v30 = sub_140001650(v28, 1);
  if ( !v30 )
    sub_14196B2DB(1, v28);
  v98 = v30;
  sub_1419234B0(v30, v29, v28);
  if ( !(_BYTE)v113 )
  {
LABEL_25:
    if ( 2 * *v15 && !(unsigned __int8)sub_14196A710(v16, v11, v13) )
      *((_BYTE *)v110 + 1) = 1;
  }
LABEL_26:
  v31 = v110;
  v32 = *(_BYTE *)v110;
  *(_BYTE *)v110 = 0;
  if ( v32 == 2 )
    WakeByAddressSingle(v31);
  v110 = v28;
  sub_1416B18A0((unsigned int)&v81, v98, (_DWORD)v28, (unsigned int)aAccountTransit, 24);
  v113 = v81.m256i_i64[1];
  sub_140C97180((unsigned int)v102, v81.m256i_i32[2], v81.m256i_i32[4], (unsigned int)&aAccountTransit[24], 18);
  v33 = *(_QWORD *)v102;
  if ( *(_QWORD *)v102 != -1 )
  {
    v95 = v103;
    v94 = *(_OWORD *)&v102[64];
    v93 = *(_OWORD *)&v102[48];
    v92 = *(__m256i *)&v102[16];
  }
  v34 = *(void **)&v102[8];
  if ( v81.m256i_i64[0] )
    sub_140001660(v113, v81.m256i_i64[0], 1);
  if ( (_DWORD)v33 != -1 )
  {
    *(_QWORD *)v102 = v33;
    *(_QWORD *)&v102[8] = v34;
    *(__m256i *)&v102[16] = v92;
    *(_OWORD *)&v102[48] = v93;
    *(_OWORD *)&v102[64] = v94;
    v103 = v95;
    *(_QWORD *)&v105 = 0;
    *((_QWORD *)&v105 + 1) = 1;
    v106.m256i_i64[0] = 0;
    v81.m256i_i64[2] = 1610612768;
    v81.m256i_i64[0] = (__int64)&v105;
    v81.m256i_i64[1] = (__int64)&off_141A03680;
    if ( (unsigned __int8)sub_140D76130(v102, &v81) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem,
        55,
        (unsigned int)&v119,
        (unsigned int)&unk_141A02398,
        (__int64)&off_141A03738);
    v35 = v105;
    v36 = v106.m256i_i64[0];
    sub_140038370(v102);
    *(_OWORD *)(a1 + 8) = v35;
    *(_QWORD *)(a1 + 24) = v36;
    *(_QWORD *)a1 = -1;
LABEL_45:
    v17 = v110;
    v26 = (char *)Address;
    v25 = v98;
    if ( v110 )
      sub_140001660(v98, v110, 1);
    goto LABEL_47;
  }
  hObject = v34;
  sub_140157F60(v102, v6, a3, 0);
  v37 = *(_QWORD *)v102;
  v74 = *(_OWORD *)&v102[8];
  v75 = *(_QWORD *)&v102[24];
  if ( *(_QWORD *)v102 == -2 )
  {
    *(_QWORD *)(a1 + 24) = v75;
    *(_OWORD *)(a1 + 8) = v74;
    v37 = -1;
LABEL_39:
    *(_QWORD *)a1 = v37;
    goto LABEL_40;
  }
  v73 = v104;
  v72 = v103;
  v71 = *(_OWORD *)&v102[64];
  v70 = *(_OWORD *)&v102[48];
  v69 = *(_OWORD *)&v102[32];
  if ( *(_QWORD *)v102 != -1 )
  {
    *(_QWORD *)(a1 + 24) = v75;
    *(_OWORD *)(a1 + 8) = v74;
    v38 = v70;
    v39 = v71;
    v40 = v72;
    *(_OWORD *)(a1 + 32) = v69;
    *(_OWORD *)(a1 + 48) = v38;
    *(_OWORD *)(a1 + 64) = v39;
    *(_OWORD *)(a1 + 80) = v40;
    *(_QWORD *)(a1 + 96) = v73;
    goto LABEL_39;
  }
  sub_1404C0BE0(v102, &v119);
  if ( v102[50] == 2 )
  {
    v92.m256i_i64[2] = *(_QWORD *)&v102[16];
    v45 = *(_OWORD *)v102;
    *(_OWORD *)v92.m256i_i8 = *(_OWORD *)v102;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v102[16];
    *(_OWORD *)(a1 + 8) = v45;
    *(_QWORD *)a1 = -1;
LABEL_40:
    v41 = sub_14143F370(&hObject);
    if ( v41 && (unsigned int)(v41 & 3) - 2 >= 2 && (v41 & 3) != 0 )
    {
      *(_QWORD *)&v102[8] = v41 - 1;
      v102[0] = 3;
      sub_1416EBAD0(&v102[8]);
    }
    CloseHandle(hObject);
    goto LABEL_45;
  }
  LOWORD(v94) = *(_WORD *)&v102[48];
  v93 = *(_OWORD *)&v102[32];
  v92 = *(__m256i *)v102;
  v78 = *(_QWORD *)&v102[48];
  v76 = *(_OWORD *)v102;
  v77 = *(__m256i *)&v102[16];
  v117 = 1;
  LOBYTE(v44) = 1;
  sub_140157F60(&v92, v6, a3, v44);
  if ( v92.m256i_i64[0] >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v104 = v97;
    v103 = v96;
    *(_OWORD *)&v102[64] = v95;
    *(_OWORD *)&v102[48] = v94;
    *(_OWORD *)&v102[32] = v93;
    *(__m256i *)v102 = v92;
    v113 = v92.m256i_i64[0];
    if ( v92.m256i_i64[0] == -2 )
    {
      v112 = v92.m256i_i64[3];
      v111 = *(_OWORD *)&v92.m256i_u64[1];
    }
    else
    {
      nullsub_1(v47, v46);
      v50 = (void *)sub_140001650(59, 1);
      if ( !v50 )
      {
        v114 = 1;
        sub_14196B2DB(1, 59);
      }
      qmemcpy(v50, "OAUTH_COMMIT_NOT_STARTED: active account could not be saved", 59);
      *(_QWORD *)&v111 = 59;
      *((_QWORD *)&v111 + 1) = v50;
      v112 = 59;
    }
    v107 = v78;
    v106 = v77;
    v105 = v76;
    sub_1404C0D80(&v87, &v119, &v105);
    if ( (_QWORD)v87 == -1 )
    {
      if ( DWORD2(v87) || (BYTE12(v87) & 1) != 0 )
      {
        v63 = v112;
        if ( (unsigned __int64)(v111 - v112) <= 0x3C )
        {
          sub_141939070((unsigned int)&v111, v112, 61, 1, 1);
          v63 = v112;
        }
        v64 = *((_QWORD *)&v111 + 1);
        *(_OWORD *)(*((_QWORD *)&v111 + 1) + v63 + 45) = *(__int128 *)((char *)&xmmword_141A02B48 + 13);
        *(_OWORD *)(v64 + v63 + 32) = xmmword_141A02B48;
        *(_OWORD *)(v64 + v63 + 16) = xmmword_141A02B38;
        *(_OWORD *)(v64 + v63) = xmmword_141A02B28;
        v112 = v63 + 61;
        goto LABEL_101;
      }
      sub_1404C0F00(&v89, &v119);
      if ( (_QWORD)v89 == -1 )
      {
LABEL_101:
        v65 = v113;
        *(_QWORD *)(a1 + 24) = v112;
        *(_OWORD *)(a1 + 8) = v111;
        *(_QWORD *)a1 = -1;
        if ( v65 != -2 )
          sub_1400266F0(v102);
        goto LABEL_40;
      }
      v101 = v90;
      v100 = v89;
      v79 = &v100;
      v80 = sub_1400015F0;
      sub_1416DAFA0(&v105, &unk_141A02B0B, &v79);
      v52 = v106.m256i_i64[0];
      v53 = v112;
      v51 = v105;
      if ( v106.m256i_i64[0] <= (unsigned __int64)(v111 - v112) )
      {
LABEL_65:
        if ( !v52 )
        {
LABEL_67:
          v112 = v52 + v53;
          if ( (_QWORD)v51 )
            sub_140001660(*((_QWORD *)&v51 + 1), v51, 1);
          if ( (_QWORD)v100 )
            sub_140001660(*((_QWORD *)&v100 + 1), v100, 1);
          goto LABEL_101;
        }
LABEL_66:
        sub_1419234B0(v53 + *((_QWORD *)&v111 + 1), *((_QWORD *)&v51 + 1), v52);
        goto LABEL_67;
      }
    }
    else
    {
      v101 = v88;
      v100 = v87;
      *(_QWORD *)&v89 = &v100;
      *((_QWORD *)&v89 + 1) = sub_1400015F0;
      sub_1416DAFA0(&v105, &unk_141A02B65, &v89);
      v51 = v105;
      v52 = v106.m256i_i64[0];
      v53 = v112;
      if ( v106.m256i_i64[0] <= (unsigned __int64)(v111 - v112) )
        goto LABEL_65;
    }
    v99 = *((_QWORD *)&v105 + 1);
    v109 = v105;
    sub_141939070((unsigned int)&v111, v112, v106.m256i_i32[0], 1, 1);
    v53 = v112;
    v51 = __PAIR128__(v99, v109);
    goto LABEL_66;
  }
  v86 = v97;
  v85 = v96;
  v84 = v95;
  v83 = v94;
  v82 = v93;
  v81 = v92;
  *(_QWORD *)v102 = (char *)&v86 + 4;
  *(_QWORD *)&v102[8] = sub_1416EBC20;
  v118 = 1;
  sub_1416DAFA0(v66, &unk_141A029F3, v102);
  v118 = 1;
  sub_1406C9730((unsigned int)aAccountOauth, 13, (unsigned int)aDiskCommitted, 14, (__int64)v66);
  if ( *((_QWORD *)&v84 + 1) == -1 )
  {
    v48 = -1;
  }
  else
  {
    v118 = 1;
    sub_1416DB410(v102, (char *)&v84 + 8);
    v48 = *(_QWORD *)v102;
    v105 = *(_OWORD *)&v102[8];
    if ( *((_QWORD *)&v84 + 1) != -1 && *((_QWORD *)&v85 + 1) == v81.m256i_i64[2] )
    {
      v49 = (unsigned int)sub_141923B40(v85, v81.m256i_i64[1], *((_QWORD *)&v85 + 1)) == 0;
      goto LABEL_78;
    }
  }
  v49 = 0;
LABEL_78:
  *(_QWORD *)&v94 = a2;
  *((_QWORD *)&v94 + 1) = a3;
  v92.m256i_i64[3] = v48;
  v93 = v105;
  LOBYTE(v95) = v49;
  v92.m256i_i64[0] = 0;
  *(_OWORD *)&v92.m256i_u64[1] = 8u;
  v107 = v78;
  v106 = v77;
  v105 = v76;
  v116 = 1;
  sub_14042E6A0(v102, &v119, &v105, &v92);
  if ( *(_QWORD *)v102 != -1 )
  {
    v55 = *(_QWORD *)&v102[16];
    v112 = *(_QWORD *)&v102[16];
    v111 = *(_OWORD *)v102;
    if ( v102[74] == 2
      || (v107 = *(_QWORD *)&v102[72],
          v106 = *(__m256i *)&v102[40],
          v105 = *(_OWORD *)&v102[24],
          sub_1404C0D80(&v87, &v119, &v105),
          (_QWORD)v87 == -1) )
    {
LABEL_88:
      nullsub_1(v55, v54);
      v59 = (void *)sub_140001650(28, 1);
      if ( !v59 )
        sub_14196B2DB(1, 28);
      v113 = (__int64)v59;
      qmemcpy(v59, "OAUTH_CLIENT_UPDATE_DEFERRED", 28);
      *(_QWORD *)&v105 = &v111;
      *((_QWORD *)&v105 + 1) = sub_1400015F0;
      sub_1416DAFA0(&v67, &unk_141A02A5B, &v105);
      *(_QWORD *)&v105 = 28;
      *((_QWORD *)&v105 + 1) = v113;
      v106.m256i_i64[0] = 28;
      *(_OWORD *)&v106.m256i_u64[1] = v67;
      v106.m256i_i64[3] = v68;
      sub_14017A7B0(&v83, &v105);
      if ( (_QWORD)v111 )
        sub_140001660(*((_QWORD *)&v111 + 1), v111, 1);
      goto LABEL_92;
    }
    v90 = v88;
    v89 = v87;
    v79 = &v89;
    v80 = sub_1400015F0;
    sub_1416DAFA0(&v100, &unk_141A02A23, &v79);
    v56 = v100;
    v57 = v101;
    v58 = v112;
    if ( v101 > (__int64)v111 - v112 )
    {
      v109 = *((_QWORD *)&v100 + 1);
      v113 = v100;
      sub_141939070((unsigned int)&v111, v112, v101, 1, 1);
      v58 = v112;
      v56 = __PAIR128__(v109, v113);
    }
    else if ( !v101 )
    {
LABEL_84:
      v112 = v57 + v58;
      if ( (_QWORD)v56 )
        sub_140001660(*((_QWORD *)&v56 + 1), v56, 1);
      v54 = v89;
      if ( (_QWORD)v89 )
        sub_140001660(*((_QWORD *)&v89 + 1), v89, 1);
      goto LABEL_88;
    }
    sub_1419234B0(*((_QWORD *)&v111 + 1) + v58, *((_QWORD *)&v56 + 1), v57);
    v58 = v112;
    goto LABEL_84;
  }
  *(_QWORD *)&v105 = *(_QWORD *)&v102[16];
  v106.m256i_i64[0] = *(_QWORD *)&v102[8];
  *((_QWORD *)&v105 + 1) = *(_QWORD *)&v102[16];
  v106.m256i_i64[1] = *(_QWORD *)&v102[16] + 48LL * *(_QWORD *)&v102[24];
  v116 = 1;
  sub_14021AE40(&v83, &v105);
LABEL_92:
  *(_QWORD *)v102 = v92.m256i_i64[1];
  *(_QWORD *)&v102[8] = v92.m256i_i64[1];
  *(_QWORD *)&v102[16] = v92.m256i_i64[0];
  *(_QWORD *)&v102[24] = v92.m256i_i64[1] + 48 * v92.m256i_i64[2];
  v116 = 0;
  sub_14021AE40(&v83, v102);
  *(_QWORD *)(a1 + 96) = v86;
  *(_OWORD *)(a1 + 80) = v85;
  *(_OWORD *)(a1 + 64) = v84;
  v60 = *(_OWORD *)v81.m256i_i8;
  v61 = *(_OWORD *)&v81.m256i_u64[2];
  v62 = v82;
  *(_OWORD *)(a1 + 48) = v83;
  *(_OWORD *)(a1 + 32) = v62;
  *(_OWORD *)(a1 + 16) = v61;
  *(_OWORD *)a1 = v60;
  if ( v92.m256i_i64[3] != -1 && v92.m256i_i64[3] )
    sub_140001660(v93, v92.m256i_i64[3], 1);
  sub_140CAF5C0(&hObject);
  CloseHandle(hObject);
  if ( v110 )
    sub_140001660(v98, v110, 1);
  sub_14002B980(Address, v115);
  return a1;
}
