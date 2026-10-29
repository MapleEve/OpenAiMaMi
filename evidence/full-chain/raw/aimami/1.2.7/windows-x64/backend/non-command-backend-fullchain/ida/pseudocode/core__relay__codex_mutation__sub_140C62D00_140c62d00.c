// win 1.2.7 | module src/core/relay/codex_mutation.rs | ea 0x140c62d00 | name sub_140C62D00
__int64 __fastcall sub_140C62D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  __int64 v8; // r15
  __int64 v9; // rax
  __m128i v10; // xmm6
  char v11; // bl
  volatile void *v12; // rcx
  volatile void *v13; // rax
  __int64 v14; // rcx
  void *v15; // rbx
  __int64 *v16; // r13
  char *v17; // rbx
  __int64 v18; // rcx
  __int128 v19; // kr00_16
  __int8 v20; // r14
  PVOID v21; // rcx
  char v22; // al
  __int32 v23; // eax
  __int64 v24; // rcx
  char v25; // al
  int v27; // eax
  signed __int64 v28; // r8
  __int64 v29; // rbx
  const __m128i *v30; // r13
  signed __int64 v31; // r14
  __m128i *v32; // rax
  __int64 v33; // r14
  char v34; // al
  __int64 *v35; // r14
  __int64 v36; // rbx
  void *v37; // r13
  __m128i v38; // kr10_16
  __int64 v39; // r14
  volatile void *v40; // rcx
  volatile void *v41; // rax
  __int64 v42; // rcx
  void *v43; // rbx
  char *v44; // rdx
  __int64 v45; // rcx
  __int128 v46; // kr20_16
  __int8 v47; // r14
  PVOID v48; // rcx
  char v49; // al
  __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdi
  __int128 v53; // rax
  __int64 v54; // rcx
  PVOID v55; // rcx
  __int128 v56; // rax
  __int64 v57; // rax
  _OWORD *v58; // rcx
  __int128 v59; // rax
  __int128 v60; // kr40_16
  __int64 v61; // rdx
  _BYTE v62[24]; // [rsp+38h] [rbp-48h] BYREF
  __m512i v63; // [rsp+50h] [rbp-30h] BYREF
  __int128 v64; // [rsp+90h] [rbp+10h]
  __int128 v65; // [rsp+A0h] [rbp+20h]
  char v66[8]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v67; // [rsp+1D8h] [rbp+158h]
  char v68; // [rsp+200h] [rbp+180h] BYREF
  char v69; // [rsp+201h] [rbp+181h] BYREF
  _BYTE v70[32]; // [rsp+238h] [rbp+1B8h] BYREF
  __m128i v71; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v72; // [rsp+268h] [rbp+1E8h]
  __int128 v73; // [rsp+358h] [rbp+2D8h]
  __int64 v74; // [rsp+368h] [rbp+2E8h]
  _BYTE v75[80]; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v76; // [rsp+3C0h] [rbp+340h]
  __m512i v77; // [rsp+580h] [rbp+500h] BYREF
  __int128 v78; // [rsp+5C0h] [rbp+540h]
  __int128 v79; // [rsp+5D0h] [rbp+550h]
  __m512i *v80; // [rsp+788h] [rbp+708h] BYREF
  __int64 (__fastcall *v81)(_QWORD, _QWORD); // [rsp+790h] [rbp+710h]
  __int128 v82; // [rsp+7A0h] [rbp+720h] BYREF
  __int128 v83; // [rsp+7B0h] [rbp+730h]
  __int128 v84; // [rsp+7C0h] [rbp+740h]
  __int64 v85; // [rsp+7D0h] [rbp+750h]
  __int64 v86; // [rsp+7D8h] [rbp+758h] BYREF
  _OWORD *v87; // [rsp+7E0h] [rbp+760h]
  __int64 v88; // [rsp+7E8h] [rbp+768h]
  _BYTE v89[24]; // [rsp+7F0h] [rbp+770h] BYREF
  _BYTE *v90; // [rsp+808h] [rbp+788h]
  _BYTE v91[16]; // [rsp+810h] [rbp+790h] BYREF
  __int64 v92; // [rsp+820h] [rbp+7A0h]
  int v93; // [rsp+828h] [rbp+7A8h]
  __int128 v94; // [rsp+830h] [rbp+7B0h] BYREF
  __int64 v95; // [rsp+840h] [rbp+7C0h]
  __int128 v96; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v97; // [rsp+860h] [rbp+7E0h]
  __int64 v98; // [rsp+868h] [rbp+7E8h]
  signed __int64 v99; // [rsp+870h] [rbp+7F0h]
  HANDLE hObject; // [rsp+878h] [rbp+7F8h] BYREF
  __int64 v101; // [rsp+880h] [rbp+800h]
  __int64 v102; // [rsp+888h] [rbp+808h]
  PVOID Address; // [rsp+890h] [rbp+810h]
  unsigned int v104; // [rsp+898h] [rbp+818h]
  char v105; // [rsp+89Dh] [rbp+81Dh]
  char v106; // [rsp+89Eh] [rbp+81Eh]
  char v107; // [rsp+89Fh] [rbp+81Fh]
  PVOID v108; // [rsp+8A0h] [rbp+820h]
  char v109; // [rsp+8AAh] [rbp+82Ah]
  char v110; // [rsp+8ABh] [rbp+82Bh]
  char v111; // [rsp+8ACh] [rbp+82Ch]
  char v112; // [rsp+8ADh] [rbp+82Dh]
  char v113; // [rsp+8AEh] [rbp+82Eh] BYREF
  char v114; // [rsp+8AFh] [rbp+82Fh]
  char v115; // [rsp+8B0h] [rbp+830h]
  unsigned __int8 v116; // [rsp+8B1h] [rbp+831h]
  char v117; // [rsp+8B2h] [rbp+832h]
  char v118; // [rsp+8B3h] [rbp+833h]
  char v119; // [rsp+8B4h] [rbp+834h]
  char v120; // [rsp+8B5h] [rbp+835h]
  char v121; // [rsp+8B6h] [rbp+836h]
  char v122; // [rsp+8B7h] [rbp+837h]
  __int64 v123; // [rsp+8B8h] [rbp+838h]

  v123 = -2;
  v101 = a3;
  v63.m512i_i64[0] = (__int64)aManual;
  v63.m512i_i64[1] = 6;
  sub_141568C20(v91);
  v92 = sub_14167FC00();
  v93 = v7;
  v77.m512i_i64[0] = (__int64)&v63;
  v77.m512i_i64[1] = (__int64)sub_140186EE0;
  sub_1416ABFD0(v75, &unk_141A3C838, &v77);
  sub_140BA6670(v91, aStarted_0, 7, v75);
  v8 = *(_QWORD *)(a2 + 136);
  v9 = sub_1404CA6F0((volatile void *)(*(_QWORD *)(v8 + 5016) + 16LL));
  if ( !v9 )
  {
    v77.m512i_i64[0] = (__int64)aCodexmateLibCo;
    v77.m512i_i64[1] = 61;
    *(_QWORD *)v75 = &v77;
    *(_QWORD *)&v75[8] = sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, v75, &off_141A0F7A8);
  }
  sub_140DA5500(&v77, v9, aSwitchingTheAc, 57);
  if ( v77.m512i_i32[0] != -1 )
  {
    v76 = v79;
    *(_OWORD *)&v75[64] = v78;
    *(__m512i *)v75 = v77;
    v71.m128i_i64[0] = 0;
    v71.m128i_i64[1] = 1;
    v72 = 0;
    v63.m512i_i64[2] = 1610612768;
    v63.m512i_i64[0] = (__int64)&v71;
    v63.m512i_i64[1] = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(v75, &v63) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v113,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v10 = v71;
    v11 = v72;
    *(_DWORD *)(a1 + 25) = *(_DWORD *)((char *)&v72 + 1);
    *(_DWORD *)(a1 + 28) = HIDWORD(v72);
    sub_140BAC840(&v77);
    *(__m128i *)(a1 + 8) = v10;
    *(_BYTE *)(a1 + 24) = v11;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v98 = a4;
  Address = (PVOID)v77.m512i_i64[1];
  v116 = v77.m512i_u8[16];
  v12 = (volatile void *)(*(_QWORD *)(v8 + 5016) + 16LL);
  v121 = 1;
  v13 = (volatile void *)sub_1404C9470(v12);
  if ( !v13 )
  {
    v77.m512i_i64[0] = (__int64)aStdSyncPoisonM;
    v77.m512i_i64[1] = 76;
    *(_QWORD *)v75 = &v77;
    *(_QWORD *)&v75[8] = sub_140186EE0;
    v121 = 1;
    sub_1419392A0(&unk_141A0F720, v75, &off_141A0F7A8);
  }
  v15 = (void *)v13;
  LOBYTE(v14) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v13, 1, 0) )
  {
    v121 = 1;
    sub_141937480(v13);
  }
  v108 = v15;
  v16 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v121 = 1;
    v27 = sub_141938160(v14);
    LOBYTE(v27) = v27 ^ 1;
    LODWORD(v102) = v27;
    v17 = (char *)v108;
    if ( *((_BYTE *)v108 + 1) )
      goto LABEL_10;
  }
  else
  {
    LODWORD(v102) = 0;
    v17 = (char *)v108;
    if ( *((_BYTE *)v108 + 1) )
    {
LABEL_10:
      v77.m512i_i64[0] = 0;
      *(_OWORD *)&v77.m512i_u64[1] = 1u;
      *(_QWORD *)&v75[16] = 1610612768;
      *(_QWORD *)v75 = &v77;
      *(_QWORD *)&v75[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, v75) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v113,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v19 = *(_OWORD *)v77.m512i_i8;
      v20 = v77.m512i_i8[16];
      v63.m512i_i32[0] = *(__int32 *)((char *)&v77.m512i_i32[4] + 1);
      *(__int32 *)((char *)v63.m512i_i32 + 3) = v77.m512i_i32[5];
      if ( !(_BYTE)v102 )
      {
        if ( 2 * *v16 )
        {
          v121 = 1;
          if ( !(unsigned __int8)sub_141938160(v18) )
            *((_BYTE *)v108 + 1) = 1;
        }
      }
      v21 = v108;
      v22 = *(_BYTE *)v108;
      *(_BYTE *)v108 = 0;
      if ( v22 == 2 )
      {
        v121 = 1;
        WakeByAddressSingle(v21);
      }
      v23 = v63.m512i_i32[0];
      v24 = *(unsigned int *)((char *)v63.m512i_u32 + 3);
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v63.m512i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v23;
      *(_OWORD *)(a1 + 8) = v19;
      *(_BYTE *)(a1 + 24) = v20;
      *(_QWORD *)a1 = 2;
LABEL_16:
      if ( !v116 && 2 * *v16 && !(unsigned __int8)sub_141938160(v24) )
        *((_BYTE *)Address + 1) = 1;
      v25 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v25 == 2 )
        WakeByAddressSingle(Address);
      return a1;
    }
  }
  v28 = *((_QWORD *)v17 + 35);
  if ( v28 < 0 )
  {
    v29 = 0;
    goto LABEL_27;
  }
  v99 = *((_QWORD *)v17 + 35);
  if ( !v28 )
  {
    v33 = 1;
    if ( (_BYTE)v102 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v30 = *((const __m128i **)v17 + 34);
  nullsub_1(v14);
  v29 = 1;
  v31 = v99;
  v32 = (__m128i *)sub_140001650(v99, 1);
  v28 = v31;
  if ( !v32 )
LABEL_27:
    sub_141938D2B(v29, v28);
  v33 = (__int64)v32;
  sub_1418F44E0(v32, v30, v28);
  v16 = off_1421E7210;
  v17 = (char *)v108;
  if ( !(_BYTE)v102 )
  {
LABEL_33:
    if ( 2 * *v16 )
    {
      v121 = 1;
      if ( !(unsigned __int8)sub_141938160(v14) )
        v17[1] = 1;
    }
  }
LABEL_34:
  v34 = *v17;
  *v17 = 0;
  if ( v34 == 2 )
  {
    v121 = 1;
    WakeByAddressSingle(v17);
  }
  v117 = 1;
  v102 = v33;
  sub_1416828D0((unsigned int)&v63, v33, v99, (unsigned int)".account-transition.lockaccount transition", 24);
  v108 = (PVOID)v63.m512i_i64[1];
  sub_140FE2210((__int64)v75, v63.m512i_i32[2], v63.m512i_i32[4], (__int64)"account transition", 18);
  v35 = v16;
  v36 = *(_QWORD *)v75;
  if ( *(_QWORD *)v75 != -1 )
  {
    v78 = v76;
    v77 = *(__m512i *)&v75[16];
  }
  v37 = *(void **)&v75[8];
  if ( v63.m512i_i64[0] )
    sub_140001660(v108, v63.m512i_i64[0], 1);
  if ( (_DWORD)v36 != -1 )
  {
    *(_QWORD *)v75 = v36;
    *(_QWORD *)&v75[8] = v37;
    *(__m512i *)&v75[16] = v77;
    v76 = v78;
    v71.m128i_i64[0] = 0;
    v71.m128i_i64[1] = 1;
    v72 = 0;
    v63.m512i_i64[2] = 1610612768;
    v63.m512i_i64[0] = (__int64)&v71;
    v63.m512i_i64[1] = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(v75, &v63) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v113,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v16 = v35;
    v38 = v71;
    v39 = v72;
    v117 = 1;
    sub_140BAC840(v75);
    *(__m128i *)(a1 + 8) = v38;
    *(_QWORD *)(a1 + 24) = v39;
    *(_QWORD *)a1 = 2;
    if ( v99 )
      sub_140001660(v102, v99, 1);
    goto LABEL_16;
  }
  hObject = v37;
  v40 = (volatile void *)(*(_QWORD *)(v8 + 5016) + 16LL);
  v122 = 1;
  v41 = (volatile void *)sub_1404C9470(v40);
  if ( !v41 )
  {
    v77.m512i_i64[0] = (__int64)aStdSyncPoisonM;
    v77.m512i_i64[1] = 76;
    *(_QWORD *)v75 = &v77;
    *(_QWORD *)&v75[8] = sub_140186EE0;
    v122 = 1;
    sub_1419392A0(&unk_141A0F720, v75, &off_141A0F7A8);
  }
  v16 = v35;
  v43 = (void *)v41;
  LOBYTE(v42) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v41, 1, 0) )
  {
    v122 = 1;
    sub_141937480(v41);
  }
  v108 = v43;
  if ( 2 * *v35 )
  {
    v122 = 1;
    v51 = sub_141938160(v42);
    v44 = (char *)v108;
    LOBYTE(v51) = v51 ^ 1;
    v104 = v51;
    if ( *((_BYTE *)v108 + 1) )
      goto LABEL_49;
  }
  else
  {
    v104 = 0;
    v44 = (char *)v108;
    if ( *((_BYTE *)v108 + 1) )
    {
LABEL_49:
      v77.m512i_i64[0] = 0;
      *(_OWORD *)&v77.m512i_u64[1] = 1u;
      *(_QWORD *)&v75[16] = 1610612768;
      *(_QWORD *)v75 = &v77;
      *(_QWORD *)&v75[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, v75) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v113,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v46 = *(_OWORD *)v77.m512i_i8;
      v47 = v77.m512i_i8[16];
      v63.m512i_i32[0] = *(__int32 *)((char *)&v77.m512i_i32[4] + 1);
      *(__int32 *)((char *)v63.m512i_i32 + 3) = v77.m512i_i32[5];
      if ( !(_BYTE)v104 )
      {
        if ( 2 * *v16 )
        {
          v122 = 1;
          if ( !(unsigned __int8)sub_141938160(v45) )
            *((_BYTE *)v108 + 1) = 1;
        }
      }
      v48 = v108;
      v49 = *(_BYTE *)v108;
      *(_BYTE *)v108 = 0;
      if ( v49 == 2 )
      {
        v122 = 1;
        WakeByAddressSingle(v48);
      }
      LODWORD(v50) = v63.m512i_i32[0];
      *(_DWORD *)(a1 + 28) = *(__int32 *)((char *)v63.m512i_i32 + 3);
      *(_DWORD *)(a1 + 25) = v50;
      *(_OWORD *)(a1 + 8) = v46;
      *(_BYTE *)(a1 + 24) = v47;
      *(_QWORD *)a1 = 2;
      goto LABEL_73;
    }
  }
  sub_1401D31F0(&v77, v44 + 8, v101, v98);
  if ( v77.m512i_i32[0] != -1 )
  {
    v76 = v79;
    *(_OWORD *)&v75[64] = v78;
    *(__m512i *)v75 = v77;
    v71.m128i_i64[0] = 0;
    v71.m128i_i64[1] = 1;
    v72 = 0;
    v63.m512i_i64[2] = 1610612768;
    v63.m512i_i64[0] = (__int64)&v71;
    v63.m512i_i64[1] = (__int64)&off_141A3FE88;
    if ( (unsigned __int8)sub_14104A7D0(v75, &v63) )
      sub_141939040(
        (unsigned int)aADisplayImplem_7,
        55,
        (unsigned int)&v113,
        (unsigned int)&unk_141A3BB68,
        (__int64)&off_141A3FF40);
    v101 = v71.m128i_i64[0];
    v52 = v72;
    v98 = v71.m128i_i64[1];
    *(_QWORD *)&v53 = sub_140C5B390(v71.m128i_i64[1], v72);
    v82 = v53;
    v71.m128i_i64[0] = (__int64)&v82;
    v71.m128i_i64[1] = (__int64)sub_140186EE0;
    sub_1416ABFD0(&v63, &unk_141A39A35, &v71);
    sub_140BA6670(v91, aPreflightFaile, 16, &v63);
    *(_QWORD *)(a1 + 8) = v101;
    *(_QWORD *)(a1 + 16) = v98;
    *(_QWORD *)(a1 + 24) = v52;
    *(_QWORD *)a1 = 2;
    sub_140BAC840(&v77);
    if ( !(_BYTE)v104 )
    {
      if ( 2 * *v35 )
      {
        v122 = 1;
        if ( !(unsigned __int8)sub_141938160(v54) )
          *((_BYTE *)v108 + 1) = 1;
      }
    }
    v55 = v108;
    LODWORD(v50) = *(unsigned __int8 *)v108;
    *(_BYTE *)v108 = 0;
    if ( (_BYTE)v50 == 2 )
    {
      v122 = 1;
      WakeByAddressSingle(v55);
    }
    goto LABEL_73;
  }
  v89[0] = v77.m512i_i8[8];
  v122 = 1;
  sub_140028CC0(v108, v104);
  *(_QWORD *)v75 = v89;
  *(_QWORD *)&v75[8] = sub_1416BCC50;
  v122 = 1;
  sub_1416ABFD0(v62, &unk_141A39C16, v75);
  v122 = 1;
  sub_140BA6670(v91, aPreflightOk, 12, v62);
  v122 = 1;
  sub_140BA67C0((unsigned int)v91, (unsigned int)aQuietAcquireSt, 21, (unsigned int)aStatusPending, 14);
  v122 = 1;
  sub_140EC0AC0((unsigned int)&v77, 5, 0, 0, 0);
  if ( v77.m512i_i32[0] != -1 )
  {
    v76 = v79;
    *(_OWORD *)&v75[64] = v78;
    *(__m512i *)v75 = v77;
    sub_140C9CF30(&v71, v75);
    v108 = (PVOID)v71.m128i_i64[1];
    *(_QWORD *)&v56 = sub_140C5B390(v71.m128i_i64[1], v72);
    v96 = v56;
    *(_QWORD *)v89 = &v96;
    *(_QWORD *)&v89[8] = sub_140186EE0;
    sub_1416ABFD0(&v63, &unk_141A39A35, v89);
    sub_140BA6670(v91, aQuietAcquireFa, 20, &v63);
    *(_QWORD *)(a1 + 24) = v72;
    *(__m128i *)(a1 + 8) = v71;
    *(_QWORD *)a1 = 2;
    v122 = 1;
    v50 = sub_140BAC840(&v77);
LABEL_73:
    LOBYTE(v50) = 1;
    LODWORD(v108) = v50;
    goto LABEL_74;
  }
  v85 = v77.m512i_i64[7];
  v84 = *(_OWORD *)&v77.m512i_u64[5];
  v83 = *(_OWORD *)&v77.m512i_u64[3];
  v82 = *(_OWORD *)&v77.m512i_u64[1];
  v110 = 1;
  v109 = 1;
  sub_140BA67C0((unsigned int)v91, (unsigned int)aQuietAcquired, 14, (unsigned int)aStatusReady, 12);
  v110 = 1;
  v109 = 1;
  sub_140C607C0(v75, v8);
  if ( *(_QWORD *)v75 == -1 )
  {
    v95 = *(_QWORD *)&v75[24];
    v94 = *(_OWORD *)&v75[8];
    v107 = 1;
    v108 = (PVOID)sub_140C23890(24);
    v77.m512i_i64[0] = (__int64)&v94;
    v77.m512i_i64[1] = (__int64)sub_1400015F0;
    sub_1416ABFD0(&v96, &unk_141A39CB3, &v77);
    v58 = v108;
    *((_QWORD *)v108 + 2) = v97;
    *v58 = v96;
    v86 = 1;
    v87 = v58;
    v88 = 1;
    v77.m512i_i64[6] = v85;
    *(_OWORD *)&v77.m512i_u64[4] = v84;
    *(_OWORD *)&v77.m512i_u64[2] = v83;
    *(_OWORD *)v77.m512i_i8 = v82;
    sub_140EC14F0(&v63, &v77);
    if ( v63.m512i_i32[0] == -1 )
    {
      sub_140EC3FA0(&v63);
      if ( v63.m512i_i32[0] != -1 )
      {
        v79 = v65;
        v78 = v64;
        v77 = v63;
        v80 = &v77;
        v81 = sub_14104A7D0;
        sub_1416ABFD0(v89, &unk_141A39A67, &v80);
        sub_1401F4600(&v86, v89);
        sub_140BAC840(&v77);
      }
    }
    else
    {
      v79 = v65;
      v78 = v64;
      v77 = v63;
      v80 = &v77;
      v81 = sub_14104A7D0;
      sub_1416ABFD0(v89, &unk_141A39CD6, &v80);
      sub_1401F4600(&v86, v89);
      sub_140BAC840(&v77);
    }
    sub_140BA67C0((unsigned int)v91, (unsigned int)aFailed_1, 6, (unsigned int)&unk_141A39CEF, 35);
    sub_140D1EE10((unsigned int)&v77, (_DWORD)v87, v88, (unsigned int)&unk_141A39BD6, 3);
    *(_QWORD *)(a1 + 24) = v77.m512i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v77.m512i_i8;
    *(_QWORD *)a1 = 2;
    v50 = sub_140025530(&v86);
    if ( (_QWORD)v94 )
      v50 = sub_140001660(*((_QWORD *)&v94 + 1), v94, 1);
    goto LABEL_73;
  }
  sub_1418F44E0(&v71, (const __m128i *)v75, 0x118u);
  v115 = 1;
  v114 = 1;
  sub_140C15CD0(v75, v101, v98, v8);
  if ( *(_DWORD *)v75 == 2 )
  {
    v77.m512i_i64[6] = v85;
    *(_OWORD *)&v77.m512i_u64[4] = v84;
    *(_OWORD *)&v77.m512i_u64[2] = v83;
    *(_OWORD *)v77.m512i_i8 = v82;
    v115 = 1;
    v114 = 0;
    sub_140C5B650((__int64)&v96, (__int64)v91, (__int64)&v71, (__int128 *)v77.m512i_i8, (__int64)&v75[8]);
    v105 = 1;
    sub_140028CC0(Address, v116);
    v77.m512i_i64[2] = v97;
    *(_OWORD *)v77.m512i_i8 = v96;
    v105 = 0;
    sub_140C62A50(v89, a2, v91, &v77);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v89[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v89;
    *(_QWORD *)a1 = 2;
  }
  else
  {
    sub_1418F44E0((__m128i *)&v63, (const __m128i *)v75, 0x208u);
    v120 = 1;
    v119 = 1;
    v118 = 1;
    sub_1416AC440(v75, v66);
    v77.m512i_i64[2] = *(_QWORD *)&v75[16];
    *(_OWORD *)v77.m512i_i8 = *(_OWORD *)v75;
    if ( (_QWORD)v73 != -1 && (_QWORD)v73 )
      sub_140001660(*((_QWORD *)&v73 + 1), v73, 1);
    v74 = v77.m512i_i64[2];
    v73 = *(_OWORD *)v77.m512i_i8;
    *(_QWORD *)v75 = &v68;
    *(_QWORD *)&v75[8] = sub_1416BCC50;
    *(_QWORD *)&v75[16] = &v69;
    *(_QWORD *)&v75[24] = sub_1416BCC50;
    v120 = 1;
    v119 = 1;
    v118 = 1;
    sub_1416ABFD0(&v80, &unk_141A39C81, v75);
    v120 = 1;
    v119 = 1;
    v118 = 1;
    sub_140BA6670(v91, aDiskCommitted_0, 14, &v80);
    *(_QWORD *)v89 = a2;
    *(_OWORD *)&v89[8] = v67;
    v90 = v91;
    v77.m512i_i64[6] = v85;
    *(_OWORD *)&v77.m512i_u64[4] = v84;
    *(_OWORD *)&v77.m512i_u64[2] = v83;
    *(_OWORD *)v77.m512i_i8 = v82;
    v120 = 1;
    v119 = 1;
    v118 = 0;
    sub_140E9E3D0((__int64)v75, (__int64)&v113, (__int128 *)v77.m512i_i8, (__int64 *)v89);
    if ( *(_QWORD *)v75 == -1 )
    {
      v60 = *(_OWORD *)&v75[32];
      v61 = *(_QWORD *)&v75[16] + 48LL * *(_QWORD *)&v75[24];
      *(_QWORD *)v75 = *(_QWORD *)&v75[16];
      *(_OWORD *)&v75[8] = *(_OWORD *)v75;
      *(_QWORD *)&v75[24] = v61;
      v120 = 1;
      v119 = 1;
      v118 = 0;
      sub_1403E4B60(v70, v75);
      if ( *((_QWORD *)&v60 + 1) == 7 && !(*(_DWORD *)v60 ^ 0x63637573 | *(_DWORD *)(v60 + 3) ^ 0x73736563) )
      {
        v120 = 1;
        v119 = 1;
        v118 = 0;
        sub_14037D0C0(v70);
      }
      v120 = 0;
      v119 = 1;
      v118 = 0;
      sub_140028CC0(Address, v116);
      sub_1418F44E0((__m128i *)v75, (const __m128i *)&v63, 0x208u);
      v120 = 0;
      v119 = 0;
      v118 = 0;
      sub_140C5FD90((__int128 *)v77.m512i_i8);
      sub_1418F44E0((__m128i *)a1, (const __m128i *)&v77, 0x208u);
      sub_140BACA80(&v71);
      sub_141057160(&hObject);
      CloseHandle(hObject);
      if ( v99 )
        sub_140001660(v102, v99, 1);
      return a1;
    }
    v101 = *(_QWORD *)&v75[8];
    v108 = *(PVOID *)v75;
    if ( v75[74] == 2 )
    {
      *(_QWORD *)&v59 = sub_140C5B390(*(_QWORD *)&v75[8], *(_QWORD *)&v75[16]);
      v96 = v59;
      v77.m512i_i64[0] = (__int64)&v96;
      v77.m512i_i64[1] = (__int64)sub_140186EE0;
      v112 = 1;
      v111 = 1;
      sub_1416ABFD0(&v86, &unk_141A39A35, &v77);
      v112 = 1;
      v111 = 1;
      sub_140BA6670(v91, aFailed_1, 6, &v86);
      v95 = *(_QWORD *)&v75[16];
      v94 = *(_OWORD *)v75;
    }
    else
    {
      v77.m512i_i64[6] = *(_QWORD *)&v75[72];
      *(_OWORD *)&v77.m512i_u64[4] = *(_OWORD *)&v75[56];
      *(_OWORD *)&v77.m512i_u64[2] = *(_OWORD *)&v75[40];
      *(_OWORD *)v77.m512i_i8 = *(_OWORD *)&v75[24];
      v112 = 1;
      v111 = 0;
      sub_140C5B650((__int64)&v94, (__int64)v91, (__int64)&v71, (__int128 *)v77.m512i_i8, (__int64)v75);
    }
    v106 = 1;
    sub_140028CC0(Address, v116);
    v77.m512i_i64[2] = v95;
    *(_OWORD *)v77.m512i_i8 = v94;
    v106 = 0;
    sub_140C62A50(&v96, a2, v91, &v77);
    *(_QWORD *)(a1 + 24) = v97;
    *(_OWORD *)(a1 + 8) = v96;
    *(_QWORD *)a1 = 2;
    sub_140BA9350(&v63);
  }
  sub_140BACA80(&v71);
  LODWORD(v108) = 0;
LABEL_74:
  v57 = sub_141412E80(&hObject);
  if ( v57 && (unsigned int)(v57 & 3) - 2 >= 2 && (v57 & 3) != 0 )
  {
    *(_QWORD *)&v75[8] = v57 - 1;
    v75[0] = 3;
    sub_1416BCB00(&v75[8]);
  }
  CloseHandle(hObject);
  if ( v99 )
    sub_140001660(v102, v99, 1);
  if ( (_BYTE)v108 )
    goto LABEL_16;
  return a1;
}
