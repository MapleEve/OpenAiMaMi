// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140e9ca20 | successor of pre-update 0x140d80180 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.944, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140E9CA20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v12; // r15
  char *v13; // r13
  __int64 *v14; // r12
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  char v19; // cl
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rax
  PVOID v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID v32; // rcx
  char v33; // al
  _OWORD *v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int64 v39; // rcx
  char v40; // al
  PVOID v41; // rcx
  char v42; // al
  void *v44; // rdi
  void *v45; // rdi
  char v46; // cl
  int v47; // eax
  _BYTE v48[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v49[360]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v50[6]; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v51; // [rsp+208h] [rbp+188h] BYREF
  _BYTE v52[80]; // [rsp+218h] [rbp+198h]
  PVOID v53; // [rsp+388h] [rbp+308h]
  PVOID v54; // [rsp+390h] [rbp+310h]
  PVOID Address; // [rsp+398h] [rbp+318h]
  unsigned int v56; // [rsp+3A4h] [rbp+324h]
  int v57; // [rsp+3A8h] [rbp+328h]
  unsigned __int8 v58; // [rsp+3AFh] [rbp+32Fh]
  __int64 v59; // [rsp+3B0h] [rbp+330h]

  v59 = -2;
  v5 = a1;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416DB410((char *)&v51 + 8, v6 + 16);
    *(_QWORD *)&v51 = 9;
    *(_OWORD *)(v5 + 88) = *(_OWORD *)&v52[64];
    v7 = *(_OWORD *)v52;
    v8 = *(_OWORD *)&v52[16];
    v9 = *(_OWORD *)&v52[32];
    *(_OWORD *)(v5 + 72) = *(_OWORD *)&v52[48];
    *(_OWORD *)(v5 + 56) = v9;
    *(_OWORD *)(v5 + 40) = v8;
    *(_OWORD *)(v5 + 24) = v7;
    *(_OWORD *)(v5 + 8) = v51;
    *(_QWORD *)v5 = -1;
    return v5;
  }
  v12 = a2[4];
  v13 = (char *)(v12 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v12 + 16));
  v14 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v20 = sub_14196A710(a1, v6, a3);
    LOBYTE(v20) = v20 ^ 1;
    v56 = v20;
    if ( *(_BYTE *)(v12 + 17) )
      goto LABEL_7;
  }
  else
  {
    v56 = 0;
    if ( *(_BYTE *)(v12 + 17) )
    {
LABEL_7:
      nullsub_1(a1, v6);
      v15 = (void *)sub_140001650(40, 1);
      if ( !v15 )
      {
        Address = (PVOID)(v12 + 16);
        sub_14196B2DB(1, 40);
      }
      qmemcpy(v15, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v56 )
      {
        v18 = 2 * *v14;
        if ( v18 )
        {
          v45 = v15;
          v46 = sub_14196A710(v18, v16, v17);
          v15 = v45;
          if ( !v46 )
            *(_BYTE *)(v12 + 17) = 1;
        }
      }
      v19 = *v13;
      *v13 = 0;
      if ( v19 == 2 )
      {
        v44 = v15;
        WakeByAddressSingle((PVOID)(v12 + 16));
        v15 = v44;
      }
      *(_QWORD *)(v5 + 8) = 10;
      *(_QWORD *)(v5 + 16) = 40;
      *(_QWORD *)(v5 + 24) = v15;
      *(_QWORD *)(v5 + 32) = 40;
      *(_QWORD *)v5 = -1;
      return v5;
    }
  }
  Address = (PVOID)(v12 + 16);
  sub_1408741F0(&v51, a2 + 5, aDeactivatingAR, 29);
  v23 = *((PVOID *)&v51 + 1);
  v22 = v51;
  v24 = v52[0];
  if ( (_QWORD)v51 == -1 )
  {
    v58 = v52[0];
    v54 = *((PVOID *)&v51 + 1);
    v28 = a2[1];
    v53 = (PVOID)(v28 + 16);
    LOBYTE(v23) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v28 + 16), 1, 0) )
      sub_141969A30((volatile void *)(v28 + 16));
    if ( 2 * *v14 )
    {
      v47 = sub_14196A710(v23, v24, v21);
      LOBYTE(v47) = v47 ^ 1;
      v57 = v47;
      if ( !*(_BYTE *)(v28 + 17) )
      {
LABEL_20:
        sub_140ED7B40(v48, v28 + 24);
        if ( !(_BYTE)v57 && 2 * *v14 && !(unsigned __int8)sub_14196A710(v30, v29, v31) )
          *(_BYTE *)(v28 + 17) = 1;
        v32 = v53;
        v33 = *(_BYTE *)v53;
        *(_BYTE *)v53 = 0;
        if ( v33 == 2 )
          WakeByAddressSingle(v32);
        if ( v49[340] == 1 )
        {
          nullsub_1(v32, v29);
          v34 = (_OWORD *)sub_140001650(107, 1);
          if ( !v34 )
            sub_14196B2DB(1, 107);
          *(_OWORD *)((char *)v34 + 91) = *(__int128 *)((char *)&xmmword_141AA19C0 + 11);
          v34[5] = xmmword_141AA19C0;
          v34[4] = xmmword_141AA19B0;
          v34[3] = xmmword_141AA19A0;
          v34[2] = xmmword_141AA1990;
          v34[1] = xmmword_141AA1980;
          *v34 = xmmword_141AA1970;
          *(_QWORD *)(v5 + 8) = 10;
          *(_QWORD *)(v5 + 16) = 107;
          *(_QWORD *)(v5 + 24) = v34;
          *(_QWORD *)(v5 + 32) = 107;
        }
        else
        {
          *(_QWORD *)&v51 = a3;
          *((_QWORD *)&v51 + 1) = a4;
          sub_14019B090(v49, &v51);
          sub_140E9EBF0(&v51, a2);
          if ( (_DWORD)v51 == -1 )
          {
            sub_140ED7B40(&v51, v48);
            sub_140EB5DA0(v50, a2, &v51);
            if ( LODWORD(v50[0]) == -1 )
            {
              sub_140747530(&v51, v48);
              sub_1419234B0(v5, &v51, 384);
              sub_140292E20(v48);
              sub_14002B980(v54, v58);
              sub_14002B980(Address, v56);
              return v5;
            }
            *(_OWORD *)(v5 + 88) = v50[5];
            *(_OWORD *)(v5 + 72) = v50[4];
            v35 = v50[0];
            v36 = v50[1];
            v37 = v50[2];
            v38 = v50[3];
          }
          else
          {
            *(_OWORD *)(v5 + 88) = *(_OWORD *)&v52[64];
            *(_OWORD *)(v5 + 72) = *(_OWORD *)&v52[48];
            v35 = v51;
            v36 = *(_OWORD *)v52;
            v37 = *(_OWORD *)&v52[16];
            v38 = *(_OWORD *)&v52[32];
          }
          *(_OWORD *)(v5 + 56) = v38;
          *(_OWORD *)(v5 + 40) = v37;
          *(_OWORD *)(v5 + 24) = v36;
          *(_OWORD *)(v5 + 8) = v35;
        }
        *(_QWORD *)v5 = -1;
        sub_140292E20(v48);
        if ( (v58 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_14196A710(v39, v24, v21) )
          *((_BYTE *)v54 + 1) = 1;
        v23 = v54;
        v40 = *(_BYTE *)v54;
        *(_BYTE *)v54 = 0;
        if ( v40 == 2 )
          WakeByAddressSingle(v23);
        goto LABEL_36;
      }
    }
    else
    {
      v57 = 0;
      if ( !*(_BYTE *)(v28 + 17) )
        goto LABEL_20;
    }
    *(_QWORD *)&v51 = v53;
    BYTE8(v51) = v57;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)&v51,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141A9F6C8);
  }
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v52[64];
  v25 = *(_OWORD *)&v52[1];
  v26 = *(_OWORD *)&v52[17];
  v27 = *(_OWORD *)&v52[33];
  *(_OWORD *)(v5 + 73) = *(_OWORD *)&v52[49];
  *(_OWORD *)(v5 + 57) = v27;
  *(_OWORD *)(v5 + 41) = v26;
  *(_OWORD *)(v5 + 25) = v25;
  *(_QWORD *)(v5 + 8) = v22;
  *(_QWORD *)(v5 + 16) = v23;
  *(_BYTE *)(v5 + 24) = v24;
  *(_QWORD *)v5 = -1;
LABEL_36:
  if ( !(_BYTE)v56 && 2 * *v14 && !(unsigned __int8)sub_14196A710(v23, v24, v21) )
    *(_BYTE *)(v12 + 17) = 1;
  v41 = Address;
  v42 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v42 == 2 )
    WakeByAddressSingle(v41);
  return v5;
}
