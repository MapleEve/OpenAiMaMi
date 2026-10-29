// win 1.2.7 latest-exe | module src/core/relay/codex_mutation.rs | ea 0x140d90b20 | successor of pre-update 0x140c58960 | session <审计会话>
// match evidence: {"body_sim": 0.884, "verdict": "CONFIRMED_DIFF_CAND"}
__int64 __fastcall sub_140D90B20(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int128 v7; // xmm6
  char v8; // bl
  volatile void *v9; // rcx
  volatile void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // r13
  _QWORD *v15; // rcx
  PVOID v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // kr00_16
  __int8 v20; // r14
  PVOID v21; // rcx
  char v22; // al
  __int32 v23; // eax
  __int64 v24; // rcx
  char v25; // al
  int v27; // eax
  void *v28; // r13
  __int64 v29; // r15
  __int64 v30; // rax
  PVOID v31; // rcx
  char v32; // al
  __int64 v33; // r13
  void *v34; // r15
  unsigned __int128 v35; // kr10_16
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rdi
  __int128 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // edx
  _OWORD *v45; // rcx
  __int128 v46; // rax
  __int128 v47; // kr50_16
  __int64 v48; // rdx
  __m512i v49; // [rsp+38h] [rbp-48h] BYREF
  __int128 v50; // [rsp+78h] [rbp-8h]
  __int128 v51; // [rsp+88h] [rbp+8h]
  _BYTE v52[8]; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v53; // [rsp+1C0h] [rbp+140h]
  char v54; // [rsp+1E8h] [rbp+168h] BYREF
  char v55; // [rsp+1E9h] [rbp+169h] BYREF
  _BYTE v56[32]; // [rsp+220h] [rbp+1A0h] BYREF
  unsigned __int128 v57; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v58; // [rsp+250h] [rbp+1D0h]
  __int128 v59; // [rsp+340h] [rbp+2C0h]
  __int64 v60; // [rsp+350h] [rbp+2D0h]
  _BYTE v61[80]; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v62; // [rsp+3B0h] [rbp+330h]
  __m512i v63; // [rsp+570h] [rbp+4F0h] BYREF
  __int128 v64; // [rsp+5B0h] [rbp+530h]
  __int128 v65; // [rsp+5C0h] [rbp+540h]
  __int128 v66; // [rsp+780h] [rbp+700h]
  __int128 v67; // [rsp+790h] [rbp+710h]
  __int128 v68; // [rsp+7A0h] [rbp+720h]
  __int64 v69; // [rsp+7B0h] [rbp+730h]
  __m512i *v70; // [rsp+7B8h] [rbp+738h] BYREF
  __int64 (__fastcall *v71)(_QWORD, _QWORD); // [rsp+7C0h] [rbp+740h]
  _BYTE v72[24]; // [rsp+7D0h] [rbp+750h] BYREF
  _BYTE *v73; // [rsp+7E8h] [rbp+768h]
  _BYTE v74[16]; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v75; // [rsp+800h] [rbp+780h] BYREF
  int v76; // [rsp+808h] [rbp+788h]
  __int64 v77; // [rsp+810h] [rbp+790h] BYREF
  _OWORD *v78; // [rsp+818h] [rbp+798h]
  __int64 v79; // [rsp+820h] [rbp+7A0h]
  __int128 v80; // [rsp+828h] [rbp+7A8h] BYREF
  __int64 v81; // [rsp+838h] [rbp+7B8h]
  __int128 v82; // [rsp+840h] [rbp+7C0h] BYREF
  __int64 v83; // [rsp+850h] [rbp+7D0h]
  __int64 v84; // [rsp+860h] [rbp+7E0h]
  HANDLE hObject; // [rsp+868h] [rbp+7E8h] BYREF
  __int64 v86; // [rsp+870h] [rbp+7F0h]
  PVOID Address; // [rsp+878h] [rbp+7F8h]
  PVOID v88; // [rsp+880h] [rbp+800h]
  char v89; // [rsp+88Eh] [rbp+80Eh]
  char v90; // [rsp+88Fh] [rbp+80Fh]
  __int64 v91; // [rsp+890h] [rbp+810h]
  char v92; // [rsp+899h] [rbp+819h]
  char v93; // [rsp+89Ah] [rbp+81Ah] BYREF
  char v94; // [rsp+89Bh] [rbp+81Bh]
  char v95; // [rsp+89Ch] [rbp+81Ch]
  char v96; // [rsp+89Dh] [rbp+81Dh]
  char v97; // [rsp+89Eh] [rbp+81Eh]
  char v98; // [rsp+89Fh] [rbp+81Fh]
  char v99; // [rsp+8A0h] [rbp+820h]
  unsigned __int8 v100; // [rsp+8A1h] [rbp+821h]
  char v101; // [rsp+8A2h] [rbp+822h]
  char v102; // [rsp+8A3h] [rbp+823h]
  char v103; // [rsp+8A4h] [rbp+824h]
  char v104; // [rsp+8A5h] [rbp+825h]
  char v105; // [rsp+8A6h] [rbp+826h]
  char v106; // [rsp+8A7h] [rbp+827h]
  __int64 v107; // [rsp+8A8h] [rbp+828h]

  v107 = -2;
  v49.m512i_i64[0] = (__int64)aAuto_0;
  v49.m512i_i64[1] = 4;
  sub_141597890(v74);
  v75 = sub_1416AEBD0();
  v76 = v4;
  v63.m512i_i64[0] = (__int64)&v49;
  v63.m512i_i64[1] = (__int64)sub_140191200;
  sub_1416DAFA0(v61, &unk_141AA1110, &v63);
  sub_140D85C90(v74, aStarted_2, 7, v61);
  v5 = *(_QWORD *)(a2 + 136);
  v6 = sub_140506FA0((volatile void *)(*(_QWORD *)(v5 + 5016) + 16LL));
  if ( !v6 )
  {
    v63.m512i_i64[0] = (__int64)aCodexmateLibCo;
    v63.m512i_i64[1] = 61;
    *(_QWORD *)v61 = &v63;
    *(_QWORD *)&v61[8] = sub_140191200;
    sub_14196B850(&unk_141A2A620, v61, &off_141A2A6A8);
  }
  sub_1408741F0(&v63, v6, aSwitchingTheAc, 57);
  if ( v63.m512i_i32[0] != -1 )
  {
    v62 = v65;
    *(_OWORD *)&v61[64] = v64;
    *(__m512i *)v61 = v63;
    *(_QWORD *)&v57 = 0;
    *((_QWORD *)&v57 + 1) = 1;
    v58 = 0;
    v49.m512i_i64[2] = 1610612768;
    v49.m512i_i64[0] = (__int64)&v57;
    v49.m512i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v61, &v49) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v93,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v7 = v57;
    v8 = v58;
    *(_DWORD *)(a1 + 25) = *(_DWORD *)((char *)&v58 + 1);
    *(_DWORD *)(a1 + 28) = HIDWORD(v58);
    sub_140D8A3A0(&v63);
    *(_OWORD *)(a1 + 8) = v7;
    *(_BYTE *)(a1 + 24) = v8;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  Address = (PVOID)v63.m512i_i64[1];
  v100 = v63.m512i_u8[16];
  v9 = (volatile void *)(*(_QWORD *)(v5 + 5016) + 16LL);
  v106 = 1;
  v10 = (volatile void *)sub_140505D20(v9);
  if ( !v10 )
  {
    v63.m512i_i64[0] = (__int64)aStdSyncPoisonM;
    v63.m512i_i64[1] = 76;
    *(_QWORD *)v61 = &v63;
    *(_QWORD *)&v61[8] = sub_140191200;
    v106 = 1;
    sub_14196B850(&unk_141A2A620, v61, &off_141A2A6A8);
  }
  v14 = (void *)v10;
  LOBYTE(v12) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v10, 1, 0) )
  {
    v106 = 1;
    sub_141969A30(v10);
  }
  v88 = v14;
  if ( 2 * *off_142240260 )
  {
    v106 = 1;
    v27 = sub_14196A710(v12, v11, v13);
    LOBYTE(v27) = v27 ^ 1;
    LODWORD(v91) = v27;
    v15 = v88;
    if ( *((_BYTE *)v88 + 1) )
      goto LABEL_10;
  }
  else
  {
    LODWORD(v91) = 0;
    v15 = v88;
    if ( *((_BYTE *)v88 + 1) )
    {
LABEL_10:
      v63.m512i_i64[0] = 0;
      *(_OWORD *)&v63.m512i_u64[1] = 1u;
      *(_QWORD *)&v61[16] = 1610612768;
      *(_QWORD *)v61 = &v63;
      *(_QWORD *)&v61[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_1416EC060(aPoisonedLockAn, 41, v61) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v93,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v19 = *(_OWORD *)v63.m512i_i8;
      v20 = v63.m512i_i8[16];
      v49.m512i_i32[0] = *(__int32 *)((char *)&v63.m512i_i32[4] + 1);
      *(__int32 *)((char *)v49.m512i_i32 + 3) = v63.m512i_i32[5];
      if ( !(_BYTE)v91 )
      {
        if ( 2 * *off_142240260 )
        {
          v106 = 1;
          if ( !(unsigned __int8)sub_14196A710(v17, v16, v18) )
            *((_BYTE *)v88 + 1) = 1;
        }
      }
      v21 = v88;
      v22 = *(_BYTE *)v88;
      *(_BYTE *)v88 = 0;
      if ( v22 == 2 )
      {
        v106 = 1;
        WakeByAddressSingle(v21);
      }
      v23 = v49.m512i_i32[0];
      v24 = *(unsigned int *)((char *)v49.m512i_u32 + 3);
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v49.m512i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v23;
      *(_OWORD *)(a1 + 8) = v19;
      *(_BYTE *)(a1 + 24) = v20;
      *(_QWORD *)a1 = 2;
LABEL_16:
      if ( !v100 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v24, v16, v18) )
        *((_BYTE *)Address + 1) = 1;
      v25 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v25 == 2 )
        WakeByAddressSingle(Address);
      return a1;
    }
  }
  v28 = (void *)v15[35];
  if ( !v28 )
  {
    v86 = 1;
    if ( (_BYTE)v91 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v29 = v15[34];
  nullsub_1(v15, v11);
  v30 = sub_140001650(v28, 1);
  if ( !v30 )
    sub_14196B2DB(1, v28);
  v86 = v30;
  sub_1419234B0(v30, v29, v28);
  if ( !(_BYTE)v91 )
  {
LABEL_30:
    if ( 2 * *off_142240260 )
    {
      v106 = 1;
      if ( !(unsigned __int8)sub_14196A710(v15, v11, v13) )
        *((_BYTE *)v88 + 1) = 1;
    }
  }
LABEL_31:
  v31 = v88;
  v32 = *(_BYTE *)v88;
  *(_BYTE *)v88 = 0;
  if ( v32 == 2 )
  {
    v106 = 1;
    WakeByAddressSingle(v31);
  }
  v102 = 1;
  v88 = v28;
  sub_1416B18A0((unsigned int)&v49, v86, (_DWORD)v28, (unsigned int)aAccountTransit, 24);
  v91 = v49.m512i_i64[1];
  sub_140C97180((unsigned int)v61, v49.m512i_i32[2], v49.m512i_i32[4], (unsigned int)&aAccountTransit[24], 18);
  v33 = *(_QWORD *)v61;
  if ( *(_QWORD *)v61 != -1 )
  {
    v64 = v62;
    v63 = *(__m512i *)&v61[16];
  }
  v34 = *(void **)&v61[8];
  if ( v49.m512i_i64[0] )
    sub_140001660(v91, v49.m512i_i64[0], 1);
  if ( (_DWORD)v33 != -1 )
  {
    *(_QWORD *)v61 = v33;
    *(_QWORD *)&v61[8] = v34;
    *(__m512i *)&v61[16] = v63;
    v62 = v64;
    *(_QWORD *)&v57 = 0;
    *((_QWORD *)&v57 + 1) = 1;
    v58 = 0;
    v49.m512i_i64[2] = 1610612768;
    v49.m512i_i64[0] = (__int64)&v57;
    v49.m512i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v61, &v49) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v93,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v35 = v57;
    v36 = v58;
    v102 = 1;
    sub_140D8A3A0(v61);
    *(_OWORD *)(a1 + 8) = v35;
    *(_QWORD *)(a1 + 24) = v36;
    *(_QWORD *)a1 = 2;
    v16 = v88;
    if ( v88 )
      sub_140001660(v86, v88, 1);
    goto LABEL_16;
  }
  hObject = v34;
  v101 = 1;
  v37 = sub_1416AED20(&v75);
  v57 = 0x3E8 * (unsigned __int128)(unsigned __int64)v37 + v38 / 0xF4240uLL;
  v49.m512i_i64[0] = (__int64)aStatusPending_0;
  v49.m512i_i64[1] = 14;
  *(_QWORD *)v61 = v74;
  *(_QWORD *)&v61[8] = sub_1415989F0;
  *(_QWORD *)&v61[16] = &v57;
  *(_QWORD *)&v61[24] = sub_1416E85A0;
  *(_QWORD *)&v61[32] = &v49;
  *(_QWORD *)&v61[40] = sub_140191200;
  v101 = 1;
  sub_1416DAFA0(&v63, &unk_141A9B050, v61);
  v101 = 1;
  sub_1406C9730((unsigned int)aAccountSwitch, 14, (unsigned int)aQuietAcquireSt, 21, (__int64)&v63);
  v101 = 1;
  sub_140933FA0((unsigned int)&v63, 5, 0, 0, 0);
  if ( v63.m512i_i32[0] != -1 )
  {
    v62 = v65;
    *(_OWORD *)&v61[64] = v64;
    *(__m512i *)v61 = v63;
    *(_QWORD *)&v57 = 0;
    *((_QWORD *)&v57 + 1) = 1;
    v58 = 0;
    v49.m512i_i64[2] = 1610612768;
    v49.m512i_i64[0] = (__int64)&v57;
    v49.m512i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v61, &v49) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v93,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v91 = v57;
    v39 = v58;
    v84 = *((_QWORD *)&v57 + 1);
    *(_QWORD *)&v40 = sub_140EC4F50(*((_QWORD *)&v57 + 1), v58);
    *(_OWORD *)v72 = v40;
    *(_QWORD *)&v57 = v72;
    *((_QWORD *)&v57 + 1) = sub_140191200;
    sub_1416DAFA0(&v49, &unk_141A9B0EE, &v57);
    sub_140D85C90(v74, aQuietAcquireFa, 20, &v49);
    *(_QWORD *)(a1 + 8) = v91;
    *(_QWORD *)(a1 + 16) = v84;
    *(_QWORD *)(a1 + 24) = v39;
    *(_QWORD *)a1 = 2;
    v101 = 1;
    v41 = sub_140D8A3A0(&v63);
LABEL_44:
    LOBYTE(v41) = 1;
    LODWORD(v91) = v41;
    goto LABEL_45;
  }
  v69 = v63.m512i_i64[7];
  v68 = *(_OWORD *)&v63.m512i_u64[5];
  v67 = *(_OWORD *)&v63.m512i_u64[3];
  v66 = *(_OWORD *)&v63.m512i_u64[1];
  v99 = 1;
  v98 = 1;
  v43 = sub_1416AED20(&v75);
  v57 = 0x3E8 * (unsigned __int128)(unsigned __int64)v43 + v44 / 0xF4240uLL;
  v49.m512i_i64[0] = (__int64)aStatusReady;
  v49.m512i_i64[1] = 12;
  *(_QWORD *)v61 = v74;
  *(_QWORD *)&v61[8] = sub_1415989F0;
  *(_QWORD *)&v61[16] = &v57;
  *(_QWORD *)&v61[24] = sub_1416E85A0;
  *(_QWORD *)&v61[32] = &v49;
  *(_QWORD *)&v61[40] = sub_140191200;
  v99 = 1;
  v98 = 1;
  sub_1416DAFA0(&v63, &unk_141A9B050, v61);
  v99 = 1;
  v98 = 1;
  sub_1406C9730((unsigned int)aAccountSwitch, 14, (unsigned int)aQuietAcquired, 14, (__int64)&v63);
  v99 = 1;
  v98 = 1;
  sub_140ECA330(v61, v5);
  if ( *(_QWORD *)v61 == -1 )
  {
    v83 = *(_QWORD *)&v61[24];
    v82 = *(_OWORD *)&v61[8];
    v92 = 1;
    v91 = sub_14017AA90();
    v63.m512i_i64[0] = (__int64)&v82;
    v63.m512i_i64[1] = (__int64)sub_1400015F0;
    sub_1416DAFA0(&v80, &unk_141A9B36B, &v63);
    v45 = (_OWORD *)v91;
    *(_QWORD *)(v91 + 16) = v81;
    *v45 = v80;
    v77 = 1;
    v78 = v45;
    v79 = 1;
    v63.m512i_i64[6] = v69;
    *(_OWORD *)&v63.m512i_u64[4] = v68;
    *(_OWORD *)&v63.m512i_u64[2] = v67;
    *(_OWORD *)v63.m512i_i8 = v66;
    sub_1409349D0(&v49, &v63);
    if ( v49.m512i_i32[0] == -1 )
    {
      sub_140937700(&v49);
      if ( v49.m512i_i32[0] != -1 )
      {
        v65 = v51;
        v64 = v50;
        v63 = v49;
        v70 = &v63;
        v71 = sub_140D76130;
        sub_1416DAFA0(v72, &unk_141A9B120, &v70);
        sub_1401E7610(&v77, v72);
        sub_140D8A3A0(&v63);
      }
    }
    else
    {
      v65 = v51;
      v64 = v50;
      v63 = v49;
      v70 = &v63;
      v71 = sub_140D76130;
      sub_1416DAFA0(v72, &unk_141A9B38E, &v70);
      sub_1401E7610(&v77, v72);
      sub_140D8A3A0(&v63);
    }
    sub_140D85DE0((unsigned int)v74, (unsigned int)aFailed_2, 6, (unsigned int)aCodeSwitchRoll, 35);
    sub_1406C5480((unsigned int)&v63, (_DWORD)v78, v79, (unsigned int)&unk_141A9B28E, 3);
    *(_QWORD *)(a1 + 24) = v63.m512i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v63.m512i_i8;
    *(_QWORD *)a1 = 2;
    v41 = sub_1400290B0(&v77);
    if ( (_QWORD)v82 )
      sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
    goto LABEL_44;
  }
  sub_1419234B0(&v57, v61, 280);
  v97 = 1;
  v96 = 1;
  sub_140E9ACC0(v61, v5);
  if ( *(_DWORD *)v61 == 2 )
  {
    v63.m512i_i64[6] = v69;
    *(_OWORD *)&v63.m512i_u64[4] = v68;
    *(_OWORD *)&v63.m512i_u64[2] = v67;
    *(_OWORD *)v63.m512i_i8 = v66;
    v97 = 1;
    v96 = 0;
    sub_140EC5210((unsigned int)&v80, (unsigned int)v74, (unsigned int)&v57, (unsigned int)&v63, (__int64)&v61[8]);
    v89 = 1;
    sub_14002B980(Address, v100);
    v63.m512i_i64[2] = v81;
    *(_OWORD *)v63.m512i_i8 = v80;
    v89 = 0;
    sub_140ECC5C0(v72, a2, v74, &v63);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v72[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v72;
    *(_QWORD *)a1 = 2;
  }
  else
  {
    sub_1419234B0(&v49, v61, 520);
    v105 = 1;
    v104 = 1;
    v103 = 1;
    sub_1416DB410(v61, v52);
    v63.m512i_i64[2] = *(_QWORD *)&v61[16];
    *(_OWORD *)v63.m512i_i8 = *(_OWORD *)v61;
    if ( (_QWORD)v59 != -1 && (_QWORD)v59 )
      sub_140001660(*((_QWORD *)&v59 + 1), v59, 1);
    v60 = v63.m512i_i64[2];
    v59 = *(_OWORD *)v63.m512i_i8;
    *(_QWORD *)v61 = &v54;
    *(_QWORD *)&v61[8] = sub_1416EBC20;
    *(_QWORD *)&v61[16] = &v55;
    *(_QWORD *)&v61[24] = sub_1416EBC20;
    v105 = 1;
    v104 = 1;
    v103 = 1;
    sub_1416DAFA0(&v70, &unk_141A9B339, v61);
    v105 = 1;
    v104 = 1;
    v103 = 1;
    sub_140D85C90(v74, aDiskCommitted_0, 14, &v70);
    *(_QWORD *)v72 = a2;
    *(_OWORD *)&v72[8] = v53;
    v73 = v74;
    v63.m512i_i64[6] = v69;
    *(_OWORD *)&v63.m512i_u64[4] = v68;
    *(_OWORD *)&v63.m512i_u64[2] = v67;
    *(_OWORD *)v63.m512i_i8 = v66;
    v105 = 1;
    v104 = 1;
    v103 = 0;
    sub_14042F320(v61, &v93, &v63, v72);
    if ( *(_QWORD *)v61 == -1 )
    {
      v47 = *(_OWORD *)&v61[32];
      v48 = *(_QWORD *)&v61[16] + 48LL * *(_QWORD *)&v61[24];
      *(_QWORD *)v61 = *(_QWORD *)&v61[16];
      *(_OWORD *)&v61[8] = *(_OWORD *)v61;
      *(_QWORD *)&v61[24] = v48;
      v105 = 1;
      v104 = 1;
      v103 = 0;
      sub_14021AE40(v56, v61);
      if ( *((_QWORD *)&v47 + 1) == 7 && !(*(_DWORD *)v47 ^ 0x63637573 | *(_DWORD *)(v47 + 3) ^ 0x73736563) )
        sub_14019D410(v56);
      v105 = 0;
      v104 = 1;
      v103 = 0;
      sub_14002B980(Address, v100);
      sub_1419234B0(v61, &v49, 520);
      v105 = 0;
      v104 = 0;
      v103 = 0;
      sub_140EC98E0((__int128 *)v63.m512i_i8);
      sub_1419234B0(a1, &v63, 520);
      sub_140D8A460(&v57);
      v102 = 0;
      sub_1401AF000(&hObject);
      if ( v88 )
        sub_140001660(v86, v88, 1);
      return a1;
    }
    v84 = *(_QWORD *)&v61[8];
    v91 = *(_QWORD *)v61;
    if ( v61[74] == 2 )
    {
      *(_QWORD *)&v46 = sub_140EC4F50(*(_QWORD *)&v61[8], *(_QWORD *)&v61[16]);
      v80 = v46;
      v63.m512i_i64[0] = (__int64)&v80;
      v63.m512i_i64[1] = (__int64)sub_140191200;
      v95 = 1;
      v94 = 1;
      sub_1416DAFA0(&v77, &unk_141A9B0EE, &v63);
      v95 = 1;
      v94 = 1;
      sub_140D85C90(v74, aFailed_2, 6, &v77);
      v83 = *(_QWORD *)&v61[16];
      v82 = *(_OWORD *)v61;
    }
    else
    {
      v63.m512i_i64[6] = *(_QWORD *)&v61[72];
      *(_OWORD *)&v63.m512i_u64[4] = *(_OWORD *)&v61[56];
      *(_OWORD *)&v63.m512i_u64[2] = *(_OWORD *)&v61[40];
      *(_OWORD *)v63.m512i_i8 = *(_OWORD *)&v61[24];
      v95 = 1;
      v94 = 0;
      sub_140EC5210((unsigned int)&v82, (unsigned int)v74, (unsigned int)&v57, (unsigned int)&v63, (__int64)v61);
    }
    v90 = 1;
    sub_14002B980(Address, v100);
    v63.m512i_i64[2] = v83;
    *(_OWORD *)v63.m512i_i8 = v82;
    v90 = 0;
    sub_140ECC5C0(&v80, a2, v74, &v63);
    *(_QWORD *)(a1 + 24) = v81;
    *(_OWORD *)(a1 + 8) = v80;
    *(_QWORD *)a1 = 2;
    sub_140D88DE0(&v49);
  }
  sub_140D8A460(&v57);
  LODWORD(v91) = 0;
LABEL_45:
  v42 = sub_14143F370(&hObject);
  if ( v42 && (unsigned int)(v42 & 3) - 2 >= 2 && (v42 & 3) != 0 )
  {
    *(_QWORD *)&v61[8] = v42 - 1;
    v61[0] = 3;
    sub_1416EBAD0(&v61[8]);
  }
  CloseHandle(hObject);
  v16 = v88;
  if ( v88 )
    sub_140001660(v86, v88, 1);
  if ( (_BYTE)v91 )
    goto LABEL_16;
  return a1;
}
