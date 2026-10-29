// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140e9d590 | successor of pre-update 0x140d80b20 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.946, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140E9D590(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rbx
  char *v18; // r15
  __int64 *v19; // r14
  unsigned int v20; // r12d
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  void *v25; // rdi
  char v26; // al
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  PVOID v38; // rcx
  char v39; // al
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  char *v43; // rdi
  char v44; // al
  PVOID v45; // rcx
  char v46; // al
  __int64 v47; // rdi
  __int64 v48; // r14
  __int64 v49; // rbx
  __int64 v51; // rdx
  int v52; // eax
  _BYTE v53[56]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v54; // [rsp+60h] [rbp-20h] BYREF
  __int128 v55; // [rsp+70h] [rbp-10h]
  __int128 v56; // [rsp+80h] [rbp+0h]
  __int128 v57; // [rsp+90h] [rbp+10h]
  char v58; // [rsp+1CCh] [rbp+14Ch]
  _BYTE v59[384]; // [rsp+1E8h] [rbp+168h] BYREF
  _QWORD *v60; // [rsp+368h] [rbp+2E8h]
  __int128 v61; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v62; // [rsp+380h] [rbp+300h]
  __int128 v63; // [rsp+390h] [rbp+310h]
  __int128 v64; // [rsp+3A0h] [rbp+320h]
  PVOID v65; // [rsp+3B0h] [rbp+330h]
  PVOID v66; // [rsp+3B8h] [rbp+338h]
  PVOID Address; // [rsp+3C0h] [rbp+340h]
  unsigned int v68; // [rsp+3CCh] [rbp+34Ch]
  int v69; // [rsp+3D0h] [rbp+350h]
  unsigned __int8 v70; // [rsp+3D6h] [rbp+356h]
  char v71; // [rsp+3D7h] [rbp+357h]
  __int64 v72; // [rsp+3D8h] [rbp+358h]

  v72 = -2;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416DB410(&v59[8], v6 + 16);
    *(_QWORD *)v59 = 9;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v59[80];
    v7 = *(_OWORD *)&v59[16];
    v8 = *(_OWORD *)&v59[32];
    v9 = *(_OWORD *)&v59[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v59[64];
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = *(_OWORD *)v59;
    return a1;
  }
  sub_140D6A330(v59, a3, a4);
  v13 = *(_QWORD *)v59;
  v54 = *(_OWORD *)&v59[8];
  v55 = *(_OWORD *)&v59[24];
  v56 = *(_OWORD *)&v59[40];
  v57 = *(_OWORD *)&v59[56];
  if ( *(_QWORD *)v59 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v59[88];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v59[72];
    v14 = v54;
    v15 = v55;
    v16 = v56;
    *(_OWORD *)(a1 + 56) = v57;
    *(_OWORD *)(a1 + 40) = v16;
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v13;
    return a1;
  }
  v61 = v54;
  v62 = v55;
  v63 = v56;
  v64 = v57;
  v17 = a2[4];
  v18 = (char *)(v17 + 16);
  LOBYTE(v11) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v17 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v17 + 16));
  v19 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v20 = sub_14196A710(v11, v10, v12);
    LOBYTE(v20) = v20 ^ 1;
    if ( *(_BYTE *)(v17 + 17) )
      goto LABEL_9;
LABEL_16:
    v68 = v20;
    Address = (PVOID)(v17 + 16);
    sub_1408741F0(v59, a2 + 5, aImportingRelay, 25);
    v29 = *(_QWORD *)&v59[8];
    v28 = *(_QWORD *)v59;
    v30 = v59[16];
    if ( *(_QWORD *)v59 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v59[80];
      v31 = *(_OWORD *)&v59[17];
      v32 = *(_OWORD *)&v59[33];
      v33 = *(_OWORD *)&v59[49];
      *(_OWORD *)(a1 + 65) = *(_OWORD *)&v59[65];
      *(_OWORD *)(a1 + 49) = v33;
      *(_OWORD *)(a1 + 33) = v32;
      *(_OWORD *)(a1 + 17) = v31;
      *(_QWORD *)a1 = v28;
      *(_QWORD *)(a1 + 8) = v29;
      *(_BYTE *)(a1 + 16) = v30;
LABEL_33:
      if ( !(_BYTE)v68 && 2 * *v19 && !(unsigned __int8)sub_14196A710(v29, v30, v27) )
        *(_BYTE *)(v17 + 17) = 1;
      v45 = Address;
      v46 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v46 == 2 )
        WakeByAddressSingle(v45);
      goto LABEL_37;
    }
    v70 = v59[16];
    v65 = *(PVOID *)&v59[8];
    v34 = a2[1];
    LOBYTE(v29) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v34 + 16), 1, 0) )
      sub_141969A30((volatile void *)(v34 + 16));
    if ( 2 * *v19 )
    {
      v52 = sub_14196A710(v29, v30, v27);
      LOBYTE(v52) = v52 ^ 1;
      v69 = v52;
      v66 = (PVOID)(v34 + 16);
      if ( !*(_BYTE *)(v34 + 17) )
      {
LABEL_22:
        sub_140ED7B40(&v54, v34 + 24);
        if ( !(_BYTE)v69 )
        {
          if ( 2 * *v19 )
          {
            v71 = 1;
            if ( !(unsigned __int8)sub_14196A710(v36, v35, v37) )
              *(_BYTE *)(v34 + 17) = 1;
          }
        }
        v38 = v66;
        v39 = *(_BYTE *)v66;
        *(_BYTE *)v66 = 0;
        if ( v39 == 2 )
        {
          v71 = 1;
          WakeByAddressSingle(v38);
        }
        if ( v58 )
        {
          v71 = 1;
          sub_140ED3EE0(v59);
        }
        else
        {
          v71 = 1;
          sub_140E9EBF0(v59, a2);
          if ( *(_DWORD *)v59 == -1 )
          {
            v51 = *a2 + 16LL;
            v71 = 1;
            sub_140D6A8B0((__int64)v53, v51, &v54, (__int64)&v61);
            v60 = a2;
            sub_1419234B0(v59, &v54, 384);
            v71 = 0;
            sub_140CB2A90(a1, v53, v59);
            sub_14002B980(v65, v70);
            sub_14002B980(Address, v68);
            sub_140CB9D00(&v61);
            return a1;
          }
        }
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v59[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v59[64];
        v40 = *(_OWORD *)v59;
        v41 = *(_OWORD *)&v59[16];
        v42 = *(_OWORD *)&v59[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v59[48];
        *(_OWORD *)(a1 + 32) = v42;
        *(_OWORD *)(a1 + 16) = v41;
        *(_OWORD *)a1 = v40;
        sub_140292E20(&v54);
        v43 = (char *)v65;
        if ( (v70 & 1) == 0 && 2 * *v19 && !(unsigned __int8)sub_14196A710(v29, v30, v27) )
          v43[1] = 1;
        v44 = *v43;
        *v43 = 0;
        if ( v44 == 2 )
          WakeByAddressSingle(v43);
        goto LABEL_33;
      }
    }
    else
    {
      v69 = 0;
      v66 = (PVOID)(v34 + 16);
      if ( !*(_BYTE *)(v34 + 17) )
        goto LABEL_22;
    }
    *(_QWORD *)v59 = v66;
    v59[8] = v69;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)v59,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141A9F700);
  }
  v20 = 0;
  if ( !*(_BYTE *)(v17 + 17) )
    goto LABEL_16;
LABEL_9:
  nullsub_1(v11, v10);
  v21 = (void *)sub_140001650(40, 1);
  if ( !v21 )
  {
    v68 = v20;
    Address = (PVOID)(v17 + 16);
    sub_14196B2DB(1, 40);
  }
  v25 = v21;
  qmemcpy(v21, "Codex router transition lock is poisoned", 40);
  if ( !(_BYTE)v20 && 2 * *v19 && !(unsigned __int8)sub_14196A710(v23, v22, v24) )
    *(_BYTE *)(v17 + 17) = 1;
  v26 = *v18;
  *v18 = 0;
  if ( v26 == 2 )
    WakeByAddressSingle((PVOID)(v17 + 16));
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 40;
  *(_QWORD *)(a1 + 16) = v25;
  *(_QWORD *)(a1 + 24) = 40;
LABEL_37:
  if ( (_QWORD)v61 )
    sub_140001660(*((_QWORD *)&v61 + 1), v61, 1);
  v48 = *((_QWORD *)&v63 + 1);
  v47 = v63;
  if ( *((_QWORD *)&v63 + 1) )
  {
    v49 = v63;
    do
    {
      sub_1401B1600(v49);
      v49 += 176;
      --v48;
    }
    while ( v48 );
  }
  if ( *((_QWORD *)&v62 + 1) )
    sub_140001660(v47, 176LL * *((_QWORD *)&v62 + 1), 8);
  return a1;
}
