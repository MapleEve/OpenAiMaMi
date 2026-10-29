// win 1.2.7 | module src/core/relay/codex_mutation.rs | ea 0x140c58960 | name sub_140C58960
__int64 __fastcall sub_140C58960(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i v7; // xmm6
  char v8; // bl
  volatile void *v9; // rcx
  volatile void *v10; // rax
  __int64 v11; // rcx
  void *v12; // r12
  __int64 *v13; // r12
  PVOID v14; // rcx
  __int64 v15; // rcx
  __int128 v16; // kr00_16
  __int8 v17; // r14
  PVOID v18; // rcx
  char v19; // al
  __int32 v20; // eax
  __int64 v21; // rcx
  char v22; // al
  int v24; // eax
  signed __int64 v25; // r8
  __int64 v26; // r12
  const __m128i *v27; // r15
  signed __int64 v28; // r13
  __m128i *v29; // rax
  __int64 v30; // r13
  PVOID v31; // rcx
  char v32; // al
  __int64 v33; // r12
  void *v34; // r15
  char v35; // al
  __int64 *v36; // r15
  __m128i v37; // kr10_16
  __int64 v38; // r14
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // rdi
  __int128 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // edx
  _OWORD *v46; // rcx
  __int128 v47; // rax
  __int64 v48; // rax
  __int128 v49; // kr50_16
  __int64 v50; // rdx
  __int64 v51; // rax
  __m512i v52; // [rsp+38h] [rbp-48h] BYREF
  __int128 v53; // [rsp+78h] [rbp-8h]
  __int128 v54; // [rsp+88h] [rbp+8h]
  char v55[8]; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v56; // [rsp+1C0h] [rbp+140h]
  char v57; // [rsp+1E8h] [rbp+168h] BYREF
  char v58; // [rsp+1E9h] [rbp+169h] BYREF
  _BYTE v59[32]; // [rsp+220h] [rbp+1A0h] BYREF
  unsigned __int128 v60; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v61; // [rsp+250h] [rbp+1D0h]
  __int128 v62; // [rsp+340h] [rbp+2C0h]
  __int64 v63; // [rsp+350h] [rbp+2D0h]
  _BYTE v64[80]; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v65; // [rsp+3B0h] [rbp+330h]
  __m512i v66; // [rsp+570h] [rbp+4F0h] BYREF
  __int128 v67; // [rsp+5B0h] [rbp+530h]
  __int128 v68; // [rsp+5C0h] [rbp+540h]
  __int128 v69; // [rsp+780h] [rbp+700h]
  __int128 v70; // [rsp+790h] [rbp+710h]
  __int128 v71; // [rsp+7A0h] [rbp+720h]
  __int64 v72; // [rsp+7B0h] [rbp+730h]
  __m512i *v73; // [rsp+7B8h] [rbp+738h] BYREF
  __int64 (__fastcall *v74)(_QWORD, _QWORD); // [rsp+7C0h] [rbp+740h]
  _BYTE v75[24]; // [rsp+7D0h] [rbp+750h] BYREF
  _BYTE *v76; // [rsp+7E8h] [rbp+768h]
  _BYTE v77[16]; // [rsp+7F0h] [rbp+770h] BYREF
  __int64 v78; // [rsp+800h] [rbp+780h] BYREF
  int v79; // [rsp+808h] [rbp+788h]
  __int64 v80; // [rsp+810h] [rbp+790h] BYREF
  _OWORD *v81; // [rsp+818h] [rbp+798h]
  __int64 v82; // [rsp+820h] [rbp+7A0h]
  __int128 v83; // [rsp+828h] [rbp+7A8h] BYREF
  __int64 v84; // [rsp+838h] [rbp+7B8h]
  __int128 v85; // [rsp+840h] [rbp+7C0h] BYREF
  __int64 v86; // [rsp+850h] [rbp+7D0h]
  __int64 v87; // [rsp+860h] [rbp+7E0h]
  signed __int64 v88; // [rsp+868h] [rbp+7E8h]
  HANDLE hObject; // [rsp+870h] [rbp+7F0h] BYREF
  __int64 v90; // [rsp+878h] [rbp+7F8h]
  PVOID Address; // [rsp+880h] [rbp+800h]
  char v92; // [rsp+88Eh] [rbp+80Eh]
  char v93; // [rsp+88Fh] [rbp+80Fh]
  PVOID v94; // [rsp+890h] [rbp+810h]
  char v95; // [rsp+899h] [rbp+819h]
  char v96; // [rsp+89Ah] [rbp+81Ah] BYREF
  char v97; // [rsp+89Bh] [rbp+81Bh]
  char v98; // [rsp+89Ch] [rbp+81Ch]
  char v99; // [rsp+89Dh] [rbp+81Dh]
  char v100; // [rsp+89Eh] [rbp+81Eh]
  char v101; // [rsp+89Fh] [rbp+81Fh]
  char v102; // [rsp+8A0h] [rbp+820h]
  unsigned __int8 v103; // [rsp+8A1h] [rbp+821h]
  char v104; // [rsp+8A2h] [rbp+822h]
  char v105; // [rsp+8A3h] [rbp+823h]
  char v106; // [rsp+8A4h] [rbp+824h]
  char v107; // [rsp+8A5h] [rbp+825h]
  char v108; // [rsp+8A6h] [rbp+826h]
  char v109; // [rsp+8A7h] [rbp+827h]
  __int64 v110; // [rsp+8A8h] [rbp+828h]

  v110 = -2;
  v52.m512i_i64[0] = (__int64)aAuto_0;
  v52.m512i_i64[1] = 4;
  sub_141568C20(v77);
  v78 = sub_14167FC00();
  v79 = v4;
  v66.m512i_i64[0] = (__int64)&v52;
  v66.m512i_i64[1] = (__int64)sub_140186EE0;
  sub_1416ABFD0(v64, &unk_141A3C838, &v66);
  sub_140BA6670(v77, aStarted_0, 7, v64);
  v5 = *(_QWORD *)(a2 + 136);
  v6 = sub_1404CA6F0((volatile void *)(*(_QWORD *)(v5 + 5016) + 16LL));
  if ( !v6 )
  {
    v66.m512i_i64[0] = (__int64)aCodexmateLibCo;
    v66.m512i_i64[1] = 61;
    *(_QWORD *)v64 = &v66;
    *(_QWORD *)&v64[8] = sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, v64, &off_141A0F7A8);
  }
  sub_140DA5500(&v66, v6, aSwitchingTheAc, 57);
  if ( v66.m512i_i32[0] != -1 )
  {
    v65 = v68;
    *(_OWORD *)&v64[64] = v67;
    *(__m512i *)v64 = v66;
    *(_QWORD *)&v60 = 0;
    *((_QWORD *)&v60 + 1) = 1;
    v61 = 0;
    v52.m512i_i64[2] = 1610612768;
    v52.m512i_i64[0] = (__int64)&v60;
    v52.m512i_i64[1] = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(v64, &v52) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v96,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v7 = (__m128i)v60;
    v8 = v61;
    *(_DWORD *)(a1 + 25) = *(_DWORD *)((char *)&v61 + 1);
    *(_DWORD *)(a1 + 28) = HIDWORD(v61);
    sub_140BAC840(&v66);
    *(__m128i *)(a1 + 8) = v7;
    *(_BYTE *)(a1 + 24) = v8;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  Address = (PVOID)v66.m512i_i64[1];
  v103 = v66.m512i_u8[16];
  v9 = (volatile void *)(*(_QWORD *)(v5 + 5016) + 16LL);
  v109 = 1;
  v10 = (volatile void *)sub_1404C9470(v9);
  if ( !v10 )
  {
    v66.m512i_i64[0] = (__int64)aStdSyncPoisonM;
    v66.m512i_i64[1] = 76;
    *(_QWORD *)v64 = &v66;
    *(_QWORD *)&v64[8] = sub_140186EE0;
    v109 = 1;
    sub_1419392A0(&unk_141A0F720, v64, &off_141A0F7A8);
  }
  v12 = (void *)v10;
  LOBYTE(v11) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v10, 1, 0) )
  {
    v109 = 1;
    sub_141937480(v10);
  }
  v94 = v12;
  v13 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v109 = 1;
    v24 = sub_141938160(v11);
    LOBYTE(v24) = v24 ^ 1;
    LODWORD(v90) = v24;
    v14 = v94;
    if ( *((_BYTE *)v94 + 1) )
    {
LABEL_10:
      v66.m512i_i64[0] = 0;
      *(_OWORD *)&v66.m512i_u64[1] = 1u;
      *(_QWORD *)&v64[16] = 1610612768;
      *(_QWORD *)v64 = &v66;
      *(_QWORD *)&v64[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, v64) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v96,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v16 = *(_OWORD *)v66.m512i_i8;
      v17 = v66.m512i_i8[16];
      v52.m512i_i32[0] = *(__int32 *)((char *)&v66.m512i_i32[4] + 1);
      *(__int32 *)((char *)v52.m512i_i32 + 3) = v66.m512i_i32[5];
      if ( !(_BYTE)v90 )
      {
        if ( 2 * *v13 )
        {
          v109 = 1;
          if ( !(unsigned __int8)sub_141938160(v15) )
            *((_BYTE *)v94 + 1) = 1;
        }
      }
      v18 = v94;
      v19 = *(_BYTE *)v94;
      *(_BYTE *)v94 = 0;
      if ( v19 == 2 )
      {
        v109 = 1;
        WakeByAddressSingle(v18);
      }
      v20 = v52.m512i_i32[0];
      v21 = *(unsigned int *)((char *)v52.m512i_u32 + 3);
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v52.m512i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v20;
      *(_OWORD *)(a1 + 8) = v16;
      *(_BYTE *)(a1 + 24) = v17;
      *(_QWORD *)a1 = 2;
      if ( v103 || !(2 * *v13) )
        goto LABEL_17;
      goto LABEL_79;
    }
  }
  else
  {
    LODWORD(v90) = 0;
    v14 = v94;
    if ( *((_BYTE *)v94 + 1) )
      goto LABEL_10;
  }
  v25 = *((_QWORD *)v14 + 35);
  if ( v25 < 0 )
  {
    v26 = 0;
    goto LABEL_26;
  }
  v88 = *((_QWORD *)v14 + 35);
  if ( !v25 )
  {
    v30 = 1;
    if ( (_BYTE)v90 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v27 = *((const __m128i **)v14 + 34);
  nullsub_1(v14);
  v26 = 1;
  v28 = v88;
  v29 = (__m128i *)sub_140001650(v88, 1);
  v25 = v28;
  if ( !v29 )
LABEL_26:
    sub_141938D2B(v26, v25);
  v30 = (__int64)v29;
  sub_1418F44E0(v29, v27, v25);
  v13 = off_1421E7210;
  if ( !(_BYTE)v90 )
  {
LABEL_32:
    if ( 2 * *v13 )
    {
      v109 = 1;
      if ( !(unsigned __int8)sub_141938160(v14) )
        *((_BYTE *)v94 + 1) = 1;
    }
  }
LABEL_33:
  v31 = v94;
  v32 = *(_BYTE *)v94;
  *(_BYTE *)v94 = 0;
  if ( v32 == 2 )
  {
    v109 = 1;
    WakeByAddressSingle(v31);
  }
  v105 = 1;
  v90 = v30;
  sub_1416828D0((unsigned int)&v52, v30, v88, (unsigned int)".account-transition.lockaccount transition", 24);
  v94 = (PVOID)v52.m512i_i64[1];
  sub_140FE2210((__int64)v64, v52.m512i_i32[2], v52.m512i_i32[4], (__int64)"account transition", 18);
  v33 = *(_QWORD *)v64;
  if ( *(_QWORD *)v64 != -1 )
  {
    v67 = v65;
    v66 = *(__m512i *)&v64[16];
  }
  v34 = *(void **)&v64[8];
  if ( v52.m512i_i64[0] )
    sub_140001660(v94, v52.m512i_i64[0], 1);
  if ( (_DWORD)v33 != -1 )
  {
    *(_QWORD *)v64 = v33;
    *(_QWORD *)&v64[8] = v34;
    *(__m512i *)&v64[16] = v66;
    v65 = v67;
    *(_QWORD *)&v60 = 0;
    *((_QWORD *)&v60 + 1) = 1;
    v61 = 0;
    v52.m512i_i64[2] = 1610612768;
    v52.m512i_i64[0] = (__int64)&v60;
    v52.m512i_i64[1] = (__int64)&off_141A3FE88;
    v35 = sub_14104A7D0(v64, &v52);
    v36 = off_1421E7210;
    if ( v35 )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v96,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v37 = (__m128i)v60;
    v38 = v61;
    v105 = 1;
    sub_140BAC840(v64);
    *(__m128i *)(a1 + 8) = v37;
    *(_QWORD *)(a1 + 24) = v38;
    *(_QWORD *)a1 = 2;
    if ( v88 )
      sub_140001660(v90, v88, 1);
    goto LABEL_77;
  }
  hObject = v34;
  v104 = 1;
  v39 = sub_14167FD50(&v78);
  v60 = 0x3E8 * (unsigned __int128)(unsigned __int64)v39 + v40 / 0xF4240uLL;
  v52.m512i_i64[0] = (__int64)aStatusPending;
  v52.m512i_i64[1] = 14;
  *(_QWORD *)v64 = v77;
  *(_QWORD *)&v64[8] = sub_141569D80;
  *(_QWORD *)&v64[16] = &v60;
  *(_QWORD *)&v64[24] = sub_1416B95D0;
  *(_QWORD *)&v64[32] = &v52;
  *(_QWORD *)&v64[40] = sub_140186EE0;
  v104 = 1;
  sub_1416ABFD0(&v66, &unk_141A38C68, v64);
  v104 = 1;
  sub_14019B500((unsigned int)aAccountSwitch, 14, (unsigned int)aQuietAcquireSt, 21, (__int64)&v66);
  v104 = 1;
  sub_140EC0AC0((unsigned int)&v66, 5, 0, 0, 0);
  if ( v66.m512i_i32[0] == -1 )
  {
    v72 = v66.m512i_i64[7];
    v71 = *(_OWORD *)&v66.m512i_u64[5];
    v70 = *(_OWORD *)&v66.m512i_u64[3];
    v69 = *(_OWORD *)&v66.m512i_u64[1];
    v102 = 1;
    v101 = 1;
    v44 = sub_14167FD50(&v78);
    v60 = 0x3E8 * (unsigned __int128)(unsigned __int64)v44 + v45 / 0xF4240uLL;
    v52.m512i_i64[0] = (__int64)aStatusReady;
    v52.m512i_i64[1] = 12;
    *(_QWORD *)v64 = v77;
    *(_QWORD *)&v64[8] = sub_141569D80;
    *(_QWORD *)&v64[16] = &v60;
    *(_QWORD *)&v64[24] = sub_1416B95D0;
    *(_QWORD *)&v64[32] = &v52;
    *(_QWORD *)&v64[40] = sub_140186EE0;
    v102 = 1;
    v101 = 1;
    sub_1416ABFD0(&v66, &unk_141A38C68, v64);
    v102 = 1;
    v101 = 1;
    sub_14019B500((unsigned int)aAccountSwitch, 14, (unsigned int)aQuietAcquired, 14, (__int64)&v66);
    v102 = 1;
    v101 = 1;
    sub_140C607C0(v64, v5);
    if ( *(_QWORD *)v64 == -1 )
    {
      v86 = *(_QWORD *)&v64[24];
      v85 = *(_OWORD *)&v64[8];
      v95 = 1;
      v94 = (PVOID)sub_140C23890(24);
      v36 = off_1421E7210;
      v66.m512i_i64[0] = (__int64)&v85;
      v66.m512i_i64[1] = (__int64)sub_1400015F0;
      sub_1416ABFD0(&v83, &unk_141A39CB3, &v66);
      v46 = v94;
      *((_QWORD *)v94 + 2) = v84;
      *v46 = v83;
      v80 = 1;
      v81 = v46;
      v82 = 1;
      v66.m512i_i64[6] = v72;
      *(_OWORD *)&v66.m512i_u64[4] = v71;
      *(_OWORD *)&v66.m512i_u64[2] = v70;
      *(_OWORD *)v66.m512i_i8 = v69;
      sub_140EC14F0(&v52, &v66);
      if ( v52.m512i_i32[0] == -1 )
      {
        sub_140EC3FA0(&v52);
        if ( v52.m512i_i32[0] != -1 )
        {
          v68 = v54;
          v67 = v53;
          v66 = v52;
          v73 = &v66;
          v74 = sub_14104A7D0;
          sub_1416ABFD0(v75, &unk_141A39A67, &v73);
          sub_1401F4600(&v80, v75);
          sub_140BAC840(&v66);
        }
      }
      else
      {
        v68 = v54;
        v67 = v53;
        v66 = v52;
        v73 = &v66;
        v74 = sub_14104A7D0;
        sub_1416ABFD0(v75, &unk_141A39CD6, &v73);
        sub_1401F4600(&v80, v75);
        sub_140BAC840(&v66);
      }
      sub_140BA67C0((unsigned int)v77, (unsigned int)aFailed_1, 6, (unsigned int)&unk_141A39CEF, 35);
      sub_140D1EE10((unsigned int)&v66, (_DWORD)v81, v82, (unsigned int)&unk_141A39BD6, 3);
      *(_QWORD *)(a1 + 24) = v66.m512i_i64[2];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v66.m512i_i8;
      *(_QWORD *)a1 = 2;
      v48 = sub_140025530(&v80);
      if ( (_QWORD)v85 )
        v48 = sub_140001660(*((_QWORD *)&v85 + 1), v85, 1);
      LOBYTE(v48) = 1;
      LODWORD(v94) = v48;
    }
    else
    {
      sub_1418F44E0((__m128i *)&v60, (const __m128i *)v64, 0x118u);
      v100 = 1;
      v99 = 1;
      sub_140C15420(v64, v5);
      v36 = off_1421E7210;
      if ( *(_DWORD *)v64 == 2 )
      {
        v66.m512i_i64[6] = v72;
        *(_OWORD *)&v66.m512i_u64[4] = v71;
        *(_OWORD *)&v66.m512i_u64[2] = v70;
        *(_OWORD *)v66.m512i_i8 = v69;
        v100 = 1;
        v99 = 0;
        sub_140C5B650((__int64)&v83, (__int64)v77, (__int64)&v60, (__int128 *)v66.m512i_i8, (__int64)&v64[8]);
        v92 = 1;
        sub_140028CC0(Address, v103);
        v66.m512i_i64[2] = v84;
        *(_OWORD *)v66.m512i_i8 = v83;
        v92 = 0;
        sub_140C62A50(v75, a2, v77, &v66);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v75[16];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v75;
        *(_QWORD *)a1 = 2;
      }
      else
      {
        sub_1418F44E0((__m128i *)&v52, (const __m128i *)v64, 0x208u);
        v108 = 1;
        v107 = 1;
        v106 = 1;
        sub_1416AC440(v64, v55);
        v66.m512i_i64[2] = *(_QWORD *)&v64[16];
        *(_OWORD *)v66.m512i_i8 = *(_OWORD *)v64;
        if ( (_QWORD)v62 != -1 && (_QWORD)v62 )
          sub_140001660(*((_QWORD *)&v62 + 1), v62, 1);
        v63 = v66.m512i_i64[2];
        v62 = *(_OWORD *)v66.m512i_i8;
        *(_QWORD *)v64 = &v57;
        *(_QWORD *)&v64[8] = sub_1416BCC50;
        *(_QWORD *)&v64[16] = &v58;
        *(_QWORD *)&v64[24] = sub_1416BCC50;
        v108 = 1;
        v107 = 1;
        v106 = 1;
        sub_1416ABFD0(&v73, &unk_141A39C81, v64);
        v108 = 1;
        v107 = 1;
        v106 = 1;
        sub_140BA6670(v77, aDiskCommitted_0, 14, &v73);
        *(_QWORD *)v75 = a2;
        *(_OWORD *)&v75[8] = v56;
        v76 = v77;
        v66.m512i_i64[6] = v72;
        *(_OWORD *)&v66.m512i_u64[4] = v71;
        *(_OWORD *)&v66.m512i_u64[2] = v70;
        *(_OWORD *)v66.m512i_i8 = v69;
        v108 = 1;
        v107 = 1;
        v106 = 0;
        sub_140E9E3D0((__int64)v64, (__int64)&v96, (__int128 *)v66.m512i_i8, (__int64 *)v75);
        if ( *(_QWORD *)v64 == -1 )
        {
          v49 = *(_OWORD *)&v64[32];
          v50 = *(_QWORD *)&v64[16] + 48LL * *(_QWORD *)&v64[24];
          *(_QWORD *)v64 = *(_QWORD *)&v64[16];
          *(_OWORD *)&v64[8] = *(_OWORD *)v64;
          *(_QWORD *)&v64[24] = v50;
          v108 = 1;
          v107 = 1;
          v106 = 0;
          sub_1403E4B60(v59, v64);
          if ( *((_QWORD *)&v49 + 1) == 7 && !(*(_DWORD *)v49 ^ 0x63637573 | *(_DWORD *)(v49 + 3) ^ 0x73736563) )
          {
            v108 = 1;
            v107 = 1;
            v106 = 0;
            sub_14037D0C0(v59);
          }
          v108 = 0;
          v107 = 1;
          v106 = 0;
          sub_140028CC0(Address, v103);
          sub_1418F44E0((__m128i *)v64, (const __m128i *)&v52, 0x208u);
          v108 = 0;
          v107 = 0;
          v106 = 0;
          sub_140C5FD90((__int128 *)v66.m512i_i8);
          sub_1418F44E0((__m128i *)a1, (const __m128i *)&v66, 0x208u);
          sub_140BACA80(&v60);
          sub_141057160(&hObject);
          CloseHandle(hObject);
          if ( v88 )
            sub_140001660(v90, v88, 1);
          return a1;
        }
        v87 = *(_QWORD *)&v64[8];
        v94 = *(PVOID *)v64;
        if ( v64[74] == 2 )
        {
          *(_QWORD *)&v47 = sub_140C5B390(*(_QWORD *)&v64[8], *(_QWORD *)&v64[16]);
          v83 = v47;
          v66.m512i_i64[0] = (__int64)&v83;
          v66.m512i_i64[1] = (__int64)sub_140186EE0;
          v98 = 1;
          v97 = 1;
          sub_1416ABFD0(&v80, &unk_141A39A35, &v66);
          v98 = 1;
          v97 = 1;
          sub_140BA6670(v77, aFailed_1, 6, &v80);
          v86 = *(_QWORD *)&v64[16];
          v85 = *(_OWORD *)v64;
        }
        else
        {
          v66.m512i_i64[6] = *(_QWORD *)&v64[72];
          *(_OWORD *)&v66.m512i_u64[4] = *(_OWORD *)&v64[56];
          *(_OWORD *)&v66.m512i_u64[2] = *(_OWORD *)&v64[40];
          *(_OWORD *)v66.m512i_i8 = *(_OWORD *)&v64[24];
          v98 = 1;
          v97 = 0;
          sub_140C5B650((__int64)&v85, (__int64)v77, (__int64)&v60, (__int128 *)v66.m512i_i8, (__int64)v64);
        }
        v93 = 1;
        sub_140028CC0(Address, v103);
        v66.m512i_i64[2] = v86;
        *(_OWORD *)v66.m512i_i8 = v85;
        v93 = 0;
        sub_140C62A50(&v83, a2, v77, &v66);
        *(_QWORD *)(a1 + 24) = v84;
        *(_OWORD *)(a1 + 8) = v83;
        *(_QWORD *)a1 = 2;
        sub_140BA9350(&v52);
      }
      sub_140BACA80(&v60);
      LODWORD(v94) = 0;
    }
  }
  else
  {
    v65 = v68;
    *(_OWORD *)&v64[64] = v67;
    *(__m512i *)v64 = v66;
    *(_QWORD *)&v60 = 0;
    *((_QWORD *)&v60 + 1) = 1;
    v61 = 0;
    v52.m512i_i64[2] = 1610612768;
    v52.m512i_i64[0] = (__int64)&v60;
    v52.m512i_i64[1] = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(v64, &v52) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v96,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v94 = (PVOID)v60;
    v41 = v61;
    v87 = *((_QWORD *)&v60 + 1);
    *(_QWORD *)&v42 = sub_140C5B390(*((_QWORD *)&v60 + 1), v61);
    *(_OWORD *)v75 = v42;
    *(_QWORD *)&v60 = v75;
    *((_QWORD *)&v60 + 1) = sub_140186EE0;
    sub_1416ABFD0(&v52, &unk_141A39A35, &v60);
    sub_140BA6670(v77, aQuietAcquireFa, 20, &v52);
    *(_QWORD *)(a1 + 8) = v94;
    *(_QWORD *)(a1 + 16) = v87;
    *(_QWORD *)(a1 + 24) = v41;
    *(_QWORD *)a1 = 2;
    v104 = 1;
    v43 = sub_140BAC840(&v66);
    LOBYTE(v43) = 1;
    LODWORD(v94) = v43;
    v36 = off_1421E7210;
  }
  v51 = sub_141412E80(&hObject);
  if ( v51 && (unsigned int)(v51 & 3) - 2 >= 2 && (v51 & 3) != 0 )
  {
    *(_QWORD *)&v64[8] = v51 - 1;
    v64[0] = 3;
    sub_1416BCB00(&v64[8]);
  }
  CloseHandle(hObject);
  if ( v88 )
    sub_140001660(v90, v88, 1);
  if ( (_BYTE)v94 )
  {
LABEL_77:
    if ( v103 || !(2 * *v36) )
    {
LABEL_17:
      v22 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v22 == 2 )
        WakeByAddressSingle(Address);
      return a1;
    }
LABEL_79:
    if ( !(unsigned __int8)sub_141938160(v21) )
      *((_BYTE *)Address + 1) = 1;
    goto LABEL_17;
  }
  return a1;
}
