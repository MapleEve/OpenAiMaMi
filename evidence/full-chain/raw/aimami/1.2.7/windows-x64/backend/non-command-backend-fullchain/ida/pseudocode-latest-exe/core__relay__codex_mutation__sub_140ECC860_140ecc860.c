// win 1.2.7 latest-exe | module src/core/relay/codex_mutation.rs | ea 0x140ecc860 | successor of pre-update 0x140c62d00 | session <审计会话>
// match evidence: {"body_sim": 0.898, "verdict": "CONFIRMED_DIFF_CAND"}
__int64 __fastcall sub_140ECC860(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  __int64 v8; // r15
  __int64 v9; // rax
  __int128 v10; // xmm6
  char v11; // bl
  volatile void *v12; // rcx
  volatile void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rbx
  __int64 *v18; // r13
  _QWORD *v19; // rcx
  PVOID v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int128 v23; // kr00_16
  __int8 v24; // r14
  PVOID v25; // rcx
  char v26; // al
  __int32 v27; // eax
  __int64 v28; // rcx
  char v29; // al
  int v31; // eax
  void *v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rax
  PVOID v35; // rcx
  char v36; // al
  __int64 v37; // r13
  void *v38; // rbx
  __int128 v39; // kr10_16
  __int64 v40; // r14
  volatile void *v41; // rcx
  volatile void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  volatile void *v46; // r14
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int128 v52; // kr20_16
  __int8 v53; // r14
  void *v54; // rcx
  char v55; // al
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rdi
  __int128 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  void *v63; // rcx
  __int128 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rbx
  _OWORD *v67; // rcx
  __int128 v68; // rax
  __int128 v69; // kr30_16
  __int64 v70; // rdx
  _BYTE v71[24]; // [rsp+38h] [rbp-48h] BYREF
  __m512i v72; // [rsp+50h] [rbp-30h] BYREF
  __int128 v73; // [rsp+90h] [rbp+10h]
  __int128 v74; // [rsp+A0h] [rbp+20h]
  _BYTE v75[8]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v76; // [rsp+1D8h] [rbp+158h]
  char v77; // [rsp+200h] [rbp+180h] BYREF
  char v78; // [rsp+201h] [rbp+181h] BYREF
  _BYTE v79[32]; // [rsp+238h] [rbp+1B8h] BYREF
  __int128 v80; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v81; // [rsp+268h] [rbp+1E8h]
  __int128 v82; // [rsp+358h] [rbp+2D8h]
  __int64 v83; // [rsp+368h] [rbp+2E8h]
  _BYTE v84[80]; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v85; // [rsp+3C0h] [rbp+340h]
  __m512i v86; // [rsp+580h] [rbp+500h] BYREF
  __int128 v87; // [rsp+5C0h] [rbp+540h]
  __int128 v88; // [rsp+5D0h] [rbp+550h]
  __m512i *v89; // [rsp+788h] [rbp+708h] BYREF
  __int64 (__fastcall *v90)(_QWORD, _QWORD); // [rsp+790h] [rbp+710h]
  __int128 v91; // [rsp+7A0h] [rbp+720h] BYREF
  __int128 v92; // [rsp+7B0h] [rbp+730h]
  __int128 v93; // [rsp+7C0h] [rbp+740h]
  __int64 v94; // [rsp+7D0h] [rbp+750h]
  __int64 v95; // [rsp+7D8h] [rbp+758h] BYREF
  _OWORD *v96; // [rsp+7E0h] [rbp+760h]
  __int64 v97; // [rsp+7E8h] [rbp+768h]
  _BYTE v98[24]; // [rsp+7F0h] [rbp+770h] BYREF
  _BYTE *v99; // [rsp+808h] [rbp+788h]
  _BYTE v100[16]; // [rsp+810h] [rbp+790h] BYREF
  __int64 v101; // [rsp+820h] [rbp+7A0h]
  int v102; // [rsp+828h] [rbp+7A8h]
  __int128 v103; // [rsp+830h] [rbp+7B0h] BYREF
  __int64 v104; // [rsp+840h] [rbp+7C0h]
  __int128 v105; // [rsp+848h] [rbp+7C8h] BYREF
  __int64 v106; // [rsp+858h] [rbp+7D8h]
  HANDLE hObject; // [rsp+860h] [rbp+7E0h] BYREF
  __int64 v108; // [rsp+868h] [rbp+7E8h]
  __int64 v109; // [rsp+870h] [rbp+7F0h]
  PVOID Address; // [rsp+878h] [rbp+7F8h]
  PVOID v111; // [rsp+880h] [rbp+800h]
  unsigned int v112; // [rsp+88Ch] [rbp+80Ch]
  __int128 v113; // [rsp+890h] [rbp+810h]
  char v114; // [rsp+8A7h] [rbp+827h]
  char v115; // [rsp+8A8h] [rbp+828h]
  char v116; // [rsp+8A9h] [rbp+829h]
  char v117; // [rsp+8AAh] [rbp+82Ah]
  char v118; // [rsp+8ABh] [rbp+82Bh]
  char v119; // [rsp+8ACh] [rbp+82Ch]
  char v120; // [rsp+8ADh] [rbp+82Dh]
  char v121; // [rsp+8AEh] [rbp+82Eh] BYREF
  char v122; // [rsp+8AFh] [rbp+82Fh]
  char v123; // [rsp+8B0h] [rbp+830h]
  unsigned __int8 v124; // [rsp+8B1h] [rbp+831h]
  char v125; // [rsp+8B2h] [rbp+832h]
  char v126; // [rsp+8B3h] [rbp+833h]
  char v127; // [rsp+8B4h] [rbp+834h]
  char v128; // [rsp+8B5h] [rbp+835h]
  char v129; // [rsp+8B6h] [rbp+836h]
  char v130; // [rsp+8B7h] [rbp+837h]
  __int64 v131; // [rsp+8B8h] [rbp+838h]

  v131 = -2;
  *(_QWORD *)&v113 = a4;
  v72.m512i_i64[0] = (__int64)aManual;
  v72.m512i_i64[1] = 6;
  sub_141597890(v100);
  v101 = sub_1416AEBD0();
  v102 = v7;
  v86.m512i_i64[0] = (__int64)&v72;
  v86.m512i_i64[1] = (__int64)sub_140191200;
  sub_1416DAFA0(v84, &unk_141AA1110, &v86);
  sub_140D85C90(v100, aStarted_2, 7, v84);
  v8 = *(_QWORD *)(a2 + 136);
  v9 = sub_140506FA0((volatile void *)(*(_QWORD *)(v8 + 5016) + 16LL));
  if ( !v9 )
  {
    v86.m512i_i64[0] = (__int64)aCodexmateLibCo;
    v86.m512i_i64[1] = 61;
    *(_QWORD *)v84 = &v86;
    *(_QWORD *)&v84[8] = sub_140191200;
    sub_14196B850(&unk_141A2A620, v84, &off_141A2A6A8);
  }
  sub_1408741F0(&v86, v9, aSwitchingTheAc, 57);
  if ( v86.m512i_i32[0] != -1 )
  {
    v85 = v88;
    *(_OWORD *)&v84[64] = v87;
    *(__m512i *)v84 = v86;
    *(_QWORD *)&v80 = 0;
    *((_QWORD *)&v80 + 1) = 1;
    v81 = 0;
    v72.m512i_i64[2] = 1610612768;
    v72.m512i_i64[0] = (__int64)&v80;
    v72.m512i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v84, &v72) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v121,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v10 = v80;
    v11 = v81;
    *(_DWORD *)(a1 + 25) = *(_DWORD *)((char *)&v81 + 1);
    *(_DWORD *)(a1 + 28) = HIDWORD(v81);
    sub_140D8A3A0(&v86);
    *(_OWORD *)(a1 + 8) = v10;
    *(_BYTE *)(a1 + 24) = v11;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  Address = (PVOID)v86.m512i_i64[1];
  v124 = v86.m512i_u8[16];
  v12 = (volatile void *)(*(_QWORD *)(v8 + 5016) + 16LL);
  v129 = 1;
  v13 = (volatile void *)sub_140505D20(v12);
  if ( !v13 )
  {
    v86.m512i_i64[0] = (__int64)aStdSyncPoisonM;
    v86.m512i_i64[1] = 76;
    *(_QWORD *)v84 = &v86;
    *(_QWORD *)&v84[8] = sub_140191200;
    v129 = 1;
    sub_14196B850(&unk_141A2A620, v84, &off_141A2A6A8);
  }
  v17 = (void *)v13;
  LOBYTE(v15) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v13, 1, 0) )
  {
    v129 = 1;
    sub_141969A30(v13);
  }
  v111 = v17;
  v18 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v129 = 1;
    v31 = sub_14196A710(v15, v14, v16);
    LOBYTE(v31) = v31 ^ 1;
    DWORD2(v113) = v31;
    v19 = v111;
    if ( *((_BYTE *)v111 + 1) )
      goto LABEL_10;
  }
  else
  {
    DWORD2(v113) = 0;
    v19 = v111;
    if ( *((_BYTE *)v111 + 1) )
    {
LABEL_10:
      v86.m512i_i64[0] = 0;
      *(_OWORD *)&v86.m512i_u64[1] = 1u;
      *(_QWORD *)&v84[16] = 1610612768;
      *(_QWORD *)v84 = &v86;
      *(_QWORD *)&v84[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_1416EC060(aPoisonedLockAn, 41, v84) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v121,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v23 = *(_OWORD *)v86.m512i_i8;
      v24 = v86.m512i_i8[16];
      v72.m512i_i32[0] = *(__int32 *)((char *)&v86.m512i_i32[4] + 1);
      *(__int32 *)((char *)v72.m512i_i32 + 3) = v86.m512i_i32[5];
      if ( !BYTE8(v113) )
      {
        if ( 2 * *v18 )
        {
          v129 = 1;
          if ( !(unsigned __int8)sub_14196A710(v21, v20, v22) )
            *((_BYTE *)v111 + 1) = 1;
        }
      }
      v25 = v111;
      v26 = *(_BYTE *)v111;
      *(_BYTE *)v111 = 0;
      if ( v26 == 2 )
      {
        v129 = 1;
        WakeByAddressSingle(v25);
      }
      v27 = v72.m512i_i32[0];
      v28 = *(unsigned int *)((char *)v72.m512i_u32 + 3);
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v72.m512i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v27;
      *(_OWORD *)(a1 + 8) = v23;
      *(_BYTE *)(a1 + 24) = v24;
      *(_QWORD *)a1 = 2;
LABEL_16:
      if ( !v124 && 2 * *v18 && !(unsigned __int8)sub_14196A710(v28, v20, v22) )
        *((_BYTE *)Address + 1) = 1;
      v29 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v29 == 2 )
        WakeByAddressSingle(Address);
      return a1;
    }
  }
  v32 = (void *)v19[35];
  if ( !v32 )
  {
    v108 = 1;
    if ( BYTE8(v113) )
      goto LABEL_31;
    goto LABEL_30;
  }
  v33 = v19[34];
  nullsub_1(v19, v14);
  v34 = sub_140001650(v32, 1);
  if ( !v34 )
    sub_14196B2DB(1, v32);
  v108 = v34;
  sub_1419234B0(v34, v33, v32);
  v18 = off_142240260;
  if ( !BYTE8(v113) )
  {
LABEL_30:
    if ( 2 * *v18 )
    {
      v129 = 1;
      if ( !(unsigned __int8)sub_14196A710(v19, v14, v16) )
        *((_BYTE *)v111 + 1) = 1;
    }
  }
LABEL_31:
  v35 = v111;
  v36 = *(_BYTE *)v111;
  *(_BYTE *)v111 = 0;
  if ( v36 == 2 )
  {
    v129 = 1;
    WakeByAddressSingle(v35);
  }
  v125 = 1;
  v111 = v32;
  sub_1416B18A0((unsigned int)&v72, v108, (_DWORD)v32, (unsigned int)aAccountTransit, 24);
  *((_QWORD *)&v113 + 1) = v72.m512i_i64[1];
  sub_140C97180((unsigned int)v84, v72.m512i_i32[2], v72.m512i_i32[4], (unsigned int)&aAccountTransit[24], 18);
  v37 = *(_QWORD *)v84;
  if ( *(_QWORD *)v84 != -1 )
  {
    v87 = v85;
    v86 = *(__m512i *)&v84[16];
  }
  v38 = *(void **)&v84[8];
  if ( v72.m512i_i64[0] )
    sub_140001660(*((_QWORD *)&v113 + 1), v72.m512i_i64[0], 1);
  if ( (_DWORD)v37 != -1 )
  {
    *(_QWORD *)v84 = v37;
    *(_QWORD *)&v84[8] = v38;
    *(__m512i *)&v84[16] = v86;
    v85 = v87;
    *(_QWORD *)&v80 = 0;
    *((_QWORD *)&v80 + 1) = 1;
    v81 = 0;
    v72.m512i_i64[2] = 1610612768;
    v72.m512i_i64[0] = (__int64)&v80;
    v72.m512i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v84, &v72) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v121,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v39 = v80;
    v40 = v81;
    v125 = 1;
    sub_140D8A3A0(v84);
    v18 = off_142240260;
    *(_OWORD *)(a1 + 8) = v39;
    *(_QWORD *)(a1 + 24) = v40;
    *(_QWORD *)a1 = 2;
    v20 = v111;
    if ( v111 )
      sub_140001660(v108, v111, 1);
    goto LABEL_16;
  }
  v109 = a3;
  hObject = v38;
  v41 = (volatile void *)(*(_QWORD *)(v8 + 5016) + 16LL);
  v130 = 1;
  v42 = (volatile void *)sub_140505D20(v41);
  v18 = off_142240260;
  v46 = v42;
  if ( !v42 )
  {
    v86.m512i_i64[0] = (__int64)aStdSyncPoisonM;
    v86.m512i_i64[1] = 76;
    *(_QWORD *)v84 = &v86;
    *(_QWORD *)&v84[8] = sub_140191200;
    v130 = 1;
    sub_14196B850(&unk_141A2A620, v84, &off_141A2A6A8);
  }
  LOBYTE(v44) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v42, 1, 0) )
  {
    v130 = 1;
    sub_141969A30(v42);
  }
  *((_QWORD *)&v113 + 1) = v46;
  if ( 2 * *v18 )
  {
    v130 = 1;
    v57 = sub_14196A710(v44, v43, v45);
    LOBYTE(v57) = v57 ^ 1;
    v112 = v57;
    v47 = *((_QWORD *)&v113 + 1);
    v48 = v109;
    if ( *(_BYTE *)(*((_QWORD *)&v113 + 1) + 1LL) )
      goto LABEL_46;
  }
  else
  {
    v112 = 0;
    v47 = *((_QWORD *)&v113 + 1);
    v48 = v109;
    if ( *(_BYTE *)(*((_QWORD *)&v113 + 1) + 1LL) )
    {
LABEL_46:
      v86.m512i_i64[0] = 0;
      *(_OWORD *)&v86.m512i_u64[1] = 1u;
      *(_QWORD *)&v84[16] = 1610612768;
      *(_QWORD *)v84 = &v86;
      *(_QWORD *)&v84[8] = &off_141AA1A90;
      if ( (unsigned __int8)sub_1416EC060(aPoisonedLockAn, 41, v84) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v121,
          (unsigned int)&unk_141A9F540,
          (__int64)&off_141AA1B48);
      v52 = *(_OWORD *)v86.m512i_i8;
      v53 = v86.m512i_i8[16];
      v72.m512i_i32[0] = *(__int32 *)((char *)&v86.m512i_i32[4] + 1);
      *(__int32 *)((char *)v72.m512i_i32 + 3) = v86.m512i_i32[5];
      if ( !(_BYTE)v112 )
      {
        if ( 2 * *v18 )
        {
          v130 = 1;
          if ( !(unsigned __int8)sub_14196A710(v50, v49, v51) )
            *(_BYTE *)(*((_QWORD *)&v113 + 1) + 1LL) = 1;
        }
      }
      v54 = *((void **)&v113 + 1);
      v55 = **((_BYTE **)&v113 + 1);
      **((_BYTE **)&v113 + 1) = 0;
      if ( v55 == 2 )
      {
        v130 = 1;
        WakeByAddressSingle(v54);
      }
      LODWORD(v56) = v72.m512i_i32[0];
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v72.m512i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v56;
      *(_OWORD *)(a1 + 8) = v52;
      *(_BYTE *)(a1 + 24) = v53;
      *(_QWORD *)a1 = 2;
      goto LABEL_70;
    }
  }
  sub_140D06AE0(&v86, v47 + 8, v48, v113);
  if ( v86.m512i_i32[0] != -1 )
  {
    v85 = v88;
    *(_OWORD *)&v84[64] = v87;
    *(__m512i *)v84 = v86;
    *(_QWORD *)&v80 = 0;
    *((_QWORD *)&v80 + 1) = 1;
    v81 = 0;
    v72.m512i_i64[2] = 1610612768;
    v72.m512i_i64[0] = (__int64)&v80;
    v72.m512i_i64[1] = (__int64)&off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v84, &v72) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v121,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    *(_QWORD *)&v113 = v80;
    v58 = v81;
    v109 = *((_QWORD *)&v80 + 1);
    *(_QWORD *)&v59 = sub_140EC4F50(*((_QWORD *)&v80 + 1), v81);
    v91 = v59;
    *(_QWORD *)&v80 = &v91;
    *((_QWORD *)&v80 + 1) = sub_140191200;
    sub_1416DAFA0(&v72, &unk_141A9B0EE, &v80);
    sub_140D85C90(v100, aPreflightFaile, 16, &v72);
    *(_QWORD *)(a1 + 8) = v113;
    *(_QWORD *)(a1 + 16) = v109;
    *(_QWORD *)(a1 + 24) = v58;
    *(_QWORD *)a1 = 2;
    sub_140D8A3A0(&v86);
    if ( !(_BYTE)v112 )
    {
      if ( 2 * *v18 )
      {
        v130 = 1;
        if ( !(unsigned __int8)sub_14196A710(v61, v60, v62) )
          *(_BYTE *)(*((_QWORD *)&v113 + 1) + 1LL) = 1;
      }
    }
    v63 = *((void **)&v113 + 1);
    LODWORD(v56) = (unsigned __int8)**((_BYTE **)&v113 + 1);
    **((_BYTE **)&v113 + 1) = 0;
    if ( (_BYTE)v56 == 2 )
    {
      v130 = 1;
      WakeByAddressSingle(v63);
    }
    goto LABEL_70;
  }
  v98[0] = v86.m512i_i8[8];
  v130 = 1;
  sub_14002B980(*((_QWORD *)&v113 + 1), v112);
  *(_QWORD *)v84 = v98;
  *(_QWORD *)&v84[8] = sub_1416EBC20;
  v130 = 1;
  sub_1416DAFA0(v71, &unk_141A9B2CE, v84);
  v130 = 1;
  sub_140D85C90(v100, aPreflightOk, 12, v71);
  v130 = 1;
  sub_140D85DE0((unsigned int)v100, (unsigned int)aQuietAcquireSt, 21, (unsigned int)aStatusPending_0, 14);
  v130 = 1;
  sub_140933FA0((unsigned int)&v86, 5, 0, 0, 0);
  if ( v86.m512i_i32[0] != -1 )
  {
    v85 = v88;
    *(_OWORD *)&v84[64] = v87;
    *(__m512i *)v84 = v86;
    sub_140EDA570(&v80, v84);
    *(_QWORD *)&v113 = *((_QWORD *)&v80 + 1);
    *(_QWORD *)&v64 = sub_140EC4F50(*((_QWORD *)&v80 + 1), v81);
    v105 = v64;
    *(_QWORD *)v98 = &v105;
    *(_QWORD *)&v98[8] = sub_140191200;
    sub_1416DAFA0(&v72, &unk_141A9B0EE, v98);
    sub_140D85C90(v100, aQuietAcquireFa, 20, &v72);
    *(_QWORD *)(a1 + 24) = v81;
    *(_OWORD *)(a1 + 8) = v80;
    *(_QWORD *)a1 = 2;
    v130 = 1;
    v56 = sub_140D8A3A0(&v86);
LABEL_70:
    LOBYTE(v56) = 1;
    LODWORD(v113) = v56;
    goto LABEL_71;
  }
  v94 = v86.m512i_i64[7];
  v93 = *(_OWORD *)&v86.m512i_u64[5];
  v92 = *(_OWORD *)&v86.m512i_u64[3];
  v91 = *(_OWORD *)&v86.m512i_u64[1];
  v118 = 1;
  v117 = 1;
  sub_140D85DE0((unsigned int)v100, (unsigned int)aQuietAcquired, 14, (unsigned int)aStatusReady, 12);
  v118 = 1;
  v117 = 1;
  sub_140ECA330(v84, v8);
  v66 = v109;
  if ( *(_QWORD *)v84 == -1 )
  {
    v104 = *(_QWORD *)&v84[24];
    v103 = *(_OWORD *)&v84[8];
    v116 = 1;
    *(_QWORD *)&v113 = sub_14017AA90();
    v86.m512i_i64[0] = (__int64)&v103;
    v86.m512i_i64[1] = (__int64)sub_1400015F0;
    sub_1416DAFA0(&v105, &unk_141A9B36B, &v86);
    v67 = (_OWORD *)v113;
    *(_QWORD *)(v113 + 16) = v106;
    *v67 = v105;
    v95 = 1;
    v96 = v67;
    v97 = 1;
    v86.m512i_i64[6] = v94;
    *(_OWORD *)&v86.m512i_u64[4] = v93;
    *(_OWORD *)&v86.m512i_u64[2] = v92;
    *(_OWORD *)v86.m512i_i8 = v91;
    sub_1409349D0(&v72, &v86);
    if ( v72.m512i_i32[0] == -1 )
    {
      sub_140937700(&v72);
      if ( v72.m512i_i32[0] != -1 )
      {
        v88 = v74;
        v87 = v73;
        v86 = v72;
        v89 = &v86;
        v90 = sub_140D76130;
        sub_1416DAFA0(v98, &unk_141A9B120, &v89);
        sub_1401E7610(&v95, v98);
        sub_140D8A3A0(&v86);
      }
    }
    else
    {
      v88 = v74;
      v87 = v73;
      v86 = v72;
      v89 = &v86;
      v90 = sub_140D76130;
      sub_1416DAFA0(v98, &unk_141A9B38E, &v89);
      sub_1401E7610(&v95, v98);
      sub_140D8A3A0(&v86);
    }
    sub_140D85DE0((unsigned int)v100, (unsigned int)aFailed_2, 6, (unsigned int)aCodeSwitchRoll, 35);
    sub_1406C5480((unsigned int)&v86, (_DWORD)v96, v97, (unsigned int)&unk_141A9B28E, 3);
    *(_QWORD *)(a1 + 24) = v86.m512i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v86.m512i_i8;
    *(_QWORD *)a1 = 2;
    v56 = sub_1400290B0(&v95);
    if ( (_QWORD)v103 )
      sub_140001660(*((_QWORD *)&v103 + 1), v103, 1);
    goto LABEL_70;
  }
  sub_1419234B0(&v80, v84, 280);
  v123 = 1;
  v122 = 1;
  sub_140E9B570(v84, v66, v113, v8);
  if ( *(_DWORD *)v84 == 2 )
  {
    v86.m512i_i64[6] = v94;
    *(_OWORD *)&v86.m512i_u64[4] = v93;
    *(_OWORD *)&v86.m512i_u64[2] = v92;
    *(_OWORD *)v86.m512i_i8 = v91;
    v123 = 1;
    v122 = 0;
    sub_140EC5210((unsigned int)&v105, (unsigned int)v100, (unsigned int)&v80, (unsigned int)&v86, (__int64)&v84[8]);
    v114 = 1;
    sub_14002B980(Address, v124);
    v86.m512i_i64[2] = v106;
    *(_OWORD *)v86.m512i_i8 = v105;
    v114 = 0;
    sub_140ECC5C0(v98, a2, v100, &v86);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v98[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v98;
    *(_QWORD *)a1 = 2;
  }
  else
  {
    sub_1419234B0(&v72, v84, 520);
    v128 = 1;
    v127 = 1;
    v126 = 1;
    sub_1416DB410(v84, v75);
    v86.m512i_i64[2] = *(_QWORD *)&v84[16];
    *(_OWORD *)v86.m512i_i8 = *(_OWORD *)v84;
    if ( (_QWORD)v82 != -1 && (_QWORD)v82 )
      sub_140001660(*((_QWORD *)&v82 + 1), v82, 1);
    v83 = v86.m512i_i64[2];
    v82 = *(_OWORD *)v86.m512i_i8;
    *(_QWORD *)v84 = &v77;
    *(_QWORD *)&v84[8] = sub_1416EBC20;
    *(_QWORD *)&v84[16] = &v78;
    *(_QWORD *)&v84[24] = sub_1416EBC20;
    v128 = 1;
    v127 = 1;
    v126 = 1;
    sub_1416DAFA0(&v89, &unk_141A9B339, v84);
    v128 = 1;
    v127 = 1;
    v126 = 1;
    sub_140D85C90(v100, aDiskCommitted_0, 14, &v89);
    *(_QWORD *)v98 = a2;
    *(_OWORD *)&v98[8] = v76;
    v99 = v100;
    v86.m512i_i64[6] = v94;
    *(_OWORD *)&v86.m512i_u64[4] = v93;
    *(_OWORD *)&v86.m512i_u64[2] = v92;
    *(_OWORD *)v86.m512i_i8 = v91;
    v128 = 1;
    v127 = 1;
    v126 = 0;
    sub_14042F320(v84, &v121, &v86, v98);
    if ( *(_QWORD *)v84 == -1 )
    {
      v69 = *(_OWORD *)&v84[32];
      v70 = *(_QWORD *)&v84[16] + 48LL * *(_QWORD *)&v84[24];
      *(_QWORD *)v84 = *(_QWORD *)&v84[16];
      *(_OWORD *)&v84[8] = *(_OWORD *)v84;
      *(_QWORD *)&v84[24] = v70;
      v128 = 1;
      v127 = 1;
      v126 = 0;
      sub_14021AE40(v79, v84);
      if ( *((_QWORD *)&v69 + 1) == 7 && !(*(_DWORD *)v69 ^ 0x63637573 | *(_DWORD *)(v69 + 3) ^ 0x73736563) )
        sub_14019D410(v79);
      v128 = 0;
      v127 = 1;
      v126 = 0;
      sub_14002B980(Address, v124);
      sub_1419234B0(v84, &v72, 520);
      v128 = 0;
      v127 = 0;
      v126 = 0;
      sub_140EC98E0((__int128 *)v86.m512i_i8);
      sub_1419234B0(a1, &v86, 520);
      sub_140D8A460(&v80);
      v125 = 0;
      sub_1401AF000(&hObject);
      if ( v111 )
        sub_140001660(v108, v111, 1);
      return a1;
    }
    v113 = *(_OWORD *)v84;
    if ( v84[74] == 2 )
    {
      *(_QWORD *)&v68 = sub_140EC4F50(*(_QWORD *)&v84[8], *(_QWORD *)&v84[16]);
      v105 = v68;
      v86.m512i_i64[0] = (__int64)&v105;
      v86.m512i_i64[1] = (__int64)sub_140191200;
      v120 = 1;
      v119 = 1;
      sub_1416DAFA0(&v95, &unk_141A9B0EE, &v86);
      v120 = 1;
      v119 = 1;
      sub_140D85C90(v100, aFailed_2, 6, &v95);
      v104 = *(_QWORD *)&v84[16];
      v103 = *(_OWORD *)v84;
    }
    else
    {
      v86.m512i_i64[6] = *(_QWORD *)&v84[72];
      *(_OWORD *)&v86.m512i_u64[4] = *(_OWORD *)&v84[56];
      *(_OWORD *)&v86.m512i_u64[2] = *(_OWORD *)&v84[40];
      *(_OWORD *)v86.m512i_i8 = *(_OWORD *)&v84[24];
      v120 = 1;
      v119 = 0;
      sub_140EC5210((unsigned int)&v103, (unsigned int)v100, (unsigned int)&v80, (unsigned int)&v86, (__int64)v84);
    }
    v115 = 1;
    sub_14002B980(Address, v124);
    v86.m512i_i64[2] = v104;
    *(_OWORD *)v86.m512i_i8 = v103;
    v115 = 0;
    sub_140ECC5C0(&v105, a2, v100, &v86);
    *(_QWORD *)(a1 + 24) = v106;
    *(_OWORD *)(a1 + 8) = v105;
    *(_QWORD *)a1 = 2;
    sub_140D88DE0(&v72);
  }
  sub_140D8A460(&v80);
  LODWORD(v113) = 0;
LABEL_71:
  v65 = sub_14143F370(&hObject);
  if ( v65 && (unsigned int)(v65 & 3) - 2 >= 2 && (v65 & 3) != 0 )
  {
    *(_QWORD *)&v84[8] = v65 - 1;
    v84[0] = 3;
    sub_1416EBAD0(&v84[8]);
  }
  CloseHandle(hObject);
  v20 = v111;
  if ( v111 )
    sub_140001660(v108, v111, 1);
  if ( (_BYTE)v113 )
    goto LABEL_16;
  return a1;
}
