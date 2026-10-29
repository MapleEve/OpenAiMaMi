// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140ea26a0 | successor of pre-update 0x140d87cf0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.96, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EA26A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r13
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  volatile signed __int8 *v17; // rbx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  char v22; // al
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int128 v29; // kr00_16
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  PVOID v32; // rcx
  char v33; // al
  __int64 v34; // rcx
  volatile signed __int8 v35; // al
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  PVOID v40; // rcx
  char v41; // al
  _QWORD *v43; // [rsp+30h] [rbp-50h] BYREF
  __int128 v44; // [rsp+38h] [rbp-48h]
  __int128 v45; // [rsp+48h] [rbp-38h]
  __int128 v46; // [rsp+58h] [rbp-28h]
  __int128 v47; // [rsp+68h] [rbp-18h]
  __int128 v48; // [rsp+78h] [rbp-8h]
  __int128 v49; // [rsp+88h] [rbp+8h]
  _BYTE v50[152]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v51; // [rsp+130h] [rbp+B0h] BYREF
  _BYTE v52[96]; // [rsp+138h] [rbp+B8h] BYREF
  _BYTE v53[152]; // [rsp+198h] [rbp+118h] BYREF
  _QWORD v54[2]; // [rsp+230h] [rbp+1B0h] BYREF
  unsigned __int128 v55; // [rsp+240h] [rbp+1C0h]
  __int128 v56; // [rsp+250h] [rbp+1D0h]
  __int128 v57; // [rsp+260h] [rbp+1E0h]
  __int128 v58; // [rsp+270h] [rbp+1F0h]
  __int128 v59; // [rsp+280h] [rbp+200h]
  __int128 v60; // [rsp+290h] [rbp+210h]
  _BYTE v61[96]; // [rsp+2A0h] [rbp+220h] BYREF
  PVOID Address; // [rsp+300h] [rbp+280h]
  int v63; // [rsp+30Ch] [rbp+28Ch]
  __int64 v64; // [rsp+310h] [rbp+290h]

  v64 = -2;
  v7 = a1;
  v54[0] = a3;
  v54[1] = a4;
  v8 = a2[1];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v8 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v8 + 16));
  if ( !(2 * *off_142240260) )
  {
    v9 = 0;
    if ( !*(_BYTE *)(v8 + 17) )
      goto LABEL_5;
LABEL_30:
    v51 = v8 + 16;
    v52[0] = v9;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)&v51,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141A9FB00);
  }
  v9 = sub_14196A710(a1, a2, a3);
  LOBYTE(v9) = v9 ^ 1;
  if ( *(_BYTE *)(v8 + 17) )
    goto LABEL_30;
LABEL_5:
  v63 = v9;
  Address = (PVOID)(v8 + 16);
  v10 = *(_QWORD *)(v8 + 40);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v8 + 32);
    v12 = v10 << 8;
    while ( *(_QWORD *)(v11 + 16) != a4 || (unsigned int)sub_141923B40(*(_QWORD *)(v11 + 8), a3, a4) )
    {
      v11 += 256;
      v12 -= 256;
      if ( !v12 )
        goto LABEL_16;
    }
    sub_140EDA6C0(&v51, v11);
    v13 = (_QWORD *)v51;
    *(_OWORD *)v61 = *(_OWORD *)v52;
    *(_OWORD *)&v61[16] = *(_OWORD *)&v52[16];
    *(_OWORD *)&v61[32] = *(_OWORD *)&v52[32];
    *(_OWORD *)&v61[48] = *(_OWORD *)&v52[48];
    *(_OWORD *)&v61[64] = *(_OWORD *)&v52[64];
    *(_OWORD *)&v61[80] = *(_OWORD *)&v52[80];
    sub_1419234B0(v50, v53, 152);
    v60 = *(_OWORD *)&v61[80];
    v59 = *(_OWORD *)&v61[64];
    v58 = *(_OWORD *)&v61[48];
    v57 = *(_OWORD *)&v61[32];
    v56 = *(_OWORD *)&v61[16];
    v55 = *(_OWORD *)v61;
    v44 = *(_OWORD *)v61;
    v45 = *(_OWORD *)&v61[16];
    v46 = *(_OWORD *)&v61[32];
    v47 = *(_OWORD *)&v61[48];
    v48 = *(_OWORD *)&v61[64];
    v49 = *(_OWORD *)&v61[80];
    v43 = v13;
    if ( !(_BYTE)v63 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v15, v14, v16) )
      *(_BYTE *)(v8 + 17) = 1;
    v17 = (volatile signed __int8 *)(v8 + 16);
    v18 = *(_BYTE *)(v8 + 16);
    *(_BYTE *)(v8 + 16) = 0;
    if ( v18 == 2 )
      WakeByAddressSingle((PVOID)(v8 + 16));
    sub_140EDA6C0(&v51, &v43);
    sub_1407471A0(v61, *a2 + 16LL, &v43);
    v21 = *(_QWORD *)v61;
    v22 = v61[8];
    if ( *(_QWORD *)v61 != -1 )
    {
      *(_QWORD *)(v7 + 96) = *(_QWORD *)&v61[88];
      *(_OWORD *)(v7 + 81) = *(_OWORD *)&v61[73];
      v23 = *(_OWORD *)&v61[9];
      v24 = *(_OWORD *)&v61[25];
      v25 = *(_OWORD *)&v61[41];
      *(_OWORD *)(v7 + 65) = *(_OWORD *)&v61[57];
      *(_OWORD *)(v7 + 49) = v25;
      *(_OWORD *)(v7 + 33) = v24;
      *(_OWORD *)(v7 + 17) = v23;
      *(_QWORD *)(v7 + 8) = v21;
      *(_BYTE *)(v7 + 16) = v22;
      *(_QWORD *)v7 = -1;
      sub_140292FD0(&v51);
      v26 = (__int64 *)&v43;
LABEL_41:
      sub_140292FD0(v26);
      return v7;
    }
    if ( v61[8] != 1 )
    {
LABEL_40:
      sub_1419234B0(v7, &v43, 256);
      v26 = &v51;
      goto LABEL_41;
    }
    LOBYTE(v21) = 1;
    if ( _InterlockedCompareExchange8(v17, 1, 0) )
      sub_141969A30((volatile void *)(v8 + 16));
    if ( 2 * *off_142240260 )
    {
      v36 = sub_14196A710(v21, v19, v20);
      v34 = v36;
      LOBYTE(v34) = v36 ^ 1;
      if ( *(_BYTE *)(v8 + 17) )
      {
LABEL_25:
        if ( !(_BYTE)v34 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v34, v19, v20) )
          *(_BYTE *)(v8 + 17) = 1;
        v35 = *v17;
        *v17 = 0;
        if ( v35 == 2 )
          WakeByAddressSingle((PVOID)(v8 + 16));
        goto LABEL_40;
      }
    }
    else
    {
      v34 = 0;
      if ( *(_BYTE *)(v8 + 17) )
        goto LABEL_25;
    }
    v63 = v34;
    sub_140747610(v8 + 24, &v51, &v43);
    if ( !(_BYTE)v63 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v38, v37, v39) )
      *(_BYTE *)(v8 + 17) = 1;
    v40 = Address;
    v41 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v41 == 2 )
      WakeByAddressSingle(v40);
    goto LABEL_40;
  }
LABEL_16:
  v43 = v54;
  *(_QWORD *)&v44 = sub_140191200;
  sub_1416DAFA0(v52, &unk_141A9EFE7, &v43);
  v51 = 8;
  *(_OWORD *)&v61[32] = *(_OWORD *)&v52[24];
  *(_OWORD *)&v61[48] = *(_OWORD *)&v52[40];
  v56 = *(_OWORD *)&v52[8];
  v57 = *(_OWORD *)&v52[24];
  v58 = *(_OWORD *)&v52[40];
  v59 = *(_OWORD *)&v52[56];
  v60 = *(_OWORD *)&v52[72];
  v55 = __PAIR128__(*(unsigned __int64 *)v52, 8);
  *(_OWORD *)(v7 + 88) = *(_OWORD *)&v52[72];
  *(_OWORD *)(v7 + 72) = v59;
  v29 = v55;
  v30 = v56;
  v31 = v57;
  *(_OWORD *)(v7 + 56) = v58;
  *(_OWORD *)(v7 + 40) = v31;
  *(_OWORD *)(v7 + 24) = v30;
  *(_OWORD *)(v7 + 8) = v29;
  *(_QWORD *)v7 = -1;
  if ( !(_BYTE)v63 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(*((_QWORD *)&v29 + 1), v27, v28) )
    *(_BYTE *)(v8 + 17) = 1;
  v32 = Address;
  v33 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v33 == 2 )
    WakeByAddressSingle(v32);
  return v7;
}
