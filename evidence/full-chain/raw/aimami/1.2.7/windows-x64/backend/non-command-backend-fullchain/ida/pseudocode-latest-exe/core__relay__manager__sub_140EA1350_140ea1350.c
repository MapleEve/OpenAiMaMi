// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140ea1350 | successor of pre-update 0x140d8b2c0 | session <审计会话>
// match evidence: {"body_sim": 0.723, "str_ov": 1.0, "anchor": 0.904, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_140EA1350(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v13; // r15
  __int64 *v14; // r13
  int v15; // r12d
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  char v20; // cl
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  PVOID v26; // rcx
  char v27; // al
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r13
  void *v31; // rax
  __int64 v32; // rdi
  char v33; // bl
  __int64 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // al
  int v40; // edx
  int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  char v51; // al
  void *v52; // rcx
  void *v53; // rdi
  void *v54; // rdi
  char v55; // cl
  _BYTE v56[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v57; // [rsp+30h] [rbp-50h]
  __int64 v58; // [rsp+38h] [rbp-48h]
  __int64 v59; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v60; // [rsp+1B0h] [rbp+130h]
  __int128 v61; // [rsp+1C0h] [rbp+140h]
  __int128 v62; // [rsp+1D0h] [rbp+150h]
  __int128 v63; // [rsp+1E0h] [rbp+160h]
  __int128 v64; // [rsp+1F0h] [rbp+170h]
  __int64 v65; // [rsp+200h] [rbp+180h]
  __int64 v66; // [rsp+208h] [rbp+188h] BYREF
  __int64 v67; // [rsp+210h] [rbp+190h] BYREF
  __int128 v68; // [rsp+218h] [rbp+198h]
  __int128 v69; // [rsp+228h] [rbp+1A8h]
  __int128 v70; // [rsp+238h] [rbp+1B8h]
  __int128 v71; // [rsp+248h] [rbp+1C8h]
  __int128 v72; // [rsp+258h] [rbp+1D8h]
  _BYTE v73[17]; // [rsp+38Fh] [rbp+30Fh] BYREF
  PVOID Address; // [rsp+3A0h] [rbp+320h]
  int v75; // [rsp+3ACh] [rbp+32Ch]
  __int64 v76; // [rsp+3B0h] [rbp+330h]
  int v77; // [rsp+3BCh] [rbp+33Ch]
  __int64 v78; // [rsp+3C0h] [rbp+340h]

  v78 = -2;
  v6 = a1;
  v7 = a2[2];
  if ( *(_QWORD *)(v7 + 16) != -1 )
  {
    sub_1416DB410(&v67, v7 + 16);
    v66 = 9;
    *(_OWORD *)(v6 + 88) = v72;
    v8 = v68;
    v9 = v69;
    v10 = v70;
    *(_OWORD *)(v6 + 72) = v71;
    *(_OWORD *)(v6 + 56) = v10;
    *(_OWORD *)(v6 + 40) = v9;
    *(_OWORD *)(v6 + 24) = v8;
    *(_QWORD *)(v6 + 8) = v66;
    *(_QWORD *)(v6 + 16) = v67;
    *(_QWORD *)v6 = -1;
    return v6;
  }
  v13 = a2[4];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v13 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v13 + 16));
  v14 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v15 = sub_14196A710(a1, v7, a3);
    LOBYTE(v15) = v15 ^ 1;
    if ( *(_BYTE *)(v13 + 17) )
      goto LABEL_7;
  }
  else
  {
    v15 = 0;
    if ( *(_BYTE *)(v13 + 17) )
    {
LABEL_7:
      nullsub_1(a1, v7);
      v16 = (void *)sub_140001650(40, 1);
      if ( !v16 )
      {
        v77 = v15;
        v76 = v13;
        sub_14196B2DB(1, 40);
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v15 )
      {
        v19 = 2 * *v14;
        if ( v19 )
        {
          v54 = v16;
          v55 = sub_14196A710(v19, v17, v18);
          v16 = v54;
          if ( !v55 )
            *(_BYTE *)(v13 + 17) = 1;
        }
      }
      v20 = *(_BYTE *)(v13 + 16);
      *(_BYTE *)(v13 + 16) = 0;
      if ( v20 == 2 )
      {
        v53 = v16;
        WakeByAddressSingle((PVOID)(v13 + 16));
        v16 = v53;
      }
      *(_QWORD *)(v6 + 8) = 10;
      *(_QWORD *)(v6 + 16) = 40;
      *(_QWORD *)(v6 + 24) = v16;
      *(_QWORD *)(v6 + 32) = 40;
      *(_QWORD *)v6 = -1;
      return v6;
    }
  }
  v77 = v15;
  v76 = v13;
  v21 = a2[1];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v21 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v21 + 16));
  if ( 2 * *v14 )
  {
    v22 = sub_14196A710(a1, v7, a3);
    LOBYTE(v22) = v22 ^ 1;
    if ( !*(_BYTE *)(v21 + 17) )
      goto LABEL_18;
LABEL_45:
    v66 = v21 + 16;
    LOBYTE(v67) = v22;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)&v66,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141A9F9B8);
  }
  v22 = 0;
  if ( *(_BYTE *)(v21 + 17) )
    goto LABEL_45;
LABEL_18:
  v75 = v22;
  Address = (PVOID)(v21 + 16);
  sub_140ED7B40(v56, v21 + 24);
  if ( !(_BYTE)v75 && 2 * *v14 && !(unsigned __int8)sub_14196A710(v24, v23, v25) )
    *(_BYTE *)(v21 + 17) = 1;
  v26 = Address;
  v27 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v27 == 2 )
    WakeByAddressSingle(v26);
  if ( !v58 )
  {
LABEL_29:
    nullsub_1(v26, v23);
    v31 = (void *)sub_140001650(18, 1);
    if ( !v31 )
      sub_14196B2DB(1, 18);
    qmemcpy(v31, "provider not found", 18);
    *(_QWORD *)(v6 + 8) = 10;
    *(_QWORD *)(v6 + 16) = 18;
    *(_QWORD *)(v6 + 24) = v31;
    *(_QWORD *)(v6 + 32) = 18;
    goto LABEL_31;
  }
  v28 = v57;
  v29 = v58 << 8;
  v30 = 0;
  while ( *(_QWORD *)(v28 + v30 + 16) != a4 || (unsigned int)sub_141923B40(*(_QWORD *)(v28 + v30 + 8), a3, a4) )
  {
    v30 += 256;
    if ( v29 == v30 )
      goto LABEL_29;
  }
  if ( *(_BYTE *)(v28 + v30 + 253) == a5 )
  {
    sub_140747530((__int64)&v66, (__int64)v56);
    sub_1419234B0(v6, &v66, 384);
    goto LABEL_32;
  }
  *(_BYTE *)(v28 + v30 + 253) = a5;
  sub_1414331D0(&v66);
  v40 = ((int)v66 >> 13) - 1;
  v41 = 0;
  if ( (int)v66 >> 13 <= 0 )
  {
    v42 = (1 - ((int)v66 >> 13)) / 0x190u + 1;
    v40 += 400 * v42;
    v41 = -146097 * v42;
  }
  *(_QWORD *)(v28 + v30 + 240) = 1000
                               * (HIDWORD(v66)
                                + 86400LL
                                * (int)(((v40 / 100) >> 2)
                                      + ((1461 * v40) >> 2)
                                      + v41
                                      + (((unsigned int)v66 >> 4) & 0x1FF)
                                      - v40 / 100
                                      - 719163))
                               + (unsigned int)v67 / 0xF4240uLL;
  sub_140ED7B40(&v66, v56);
  v73[0] = 0;
  sub_140E9F030(&v59, a2, &v66, v73);
  v43 = v59;
  if ( v59 != -1 )
  {
    *(_QWORD *)(v6 + 96) = v65;
    *(_OWORD *)(v6 + 80) = v64;
    v44 = v60;
    v45 = v61;
    v46 = v62;
    *(_OWORD *)(v6 + 64) = v63;
    *(_OWORD *)(v6 + 48) = v46;
    *(_OWORD *)(v6 + 32) = v45;
    *(_OWORD *)(v6 + 16) = v44;
    *(_QWORD *)(v6 + 8) = v43;
LABEL_31:
    *(_QWORD *)v6 = -1;
LABEL_32:
    v32 = v76;
    v33 = v77;
    v34 = off_142240260;
    sub_140292E20(v56);
    if ( !v33 && 2 * *v34 && !(unsigned __int8)sub_14196A710(v36, v35, v37) )
      *(_BYTE *)(v32 + 17) = 1;
    v38 = *(_BYTE *)(v32 + 16);
    *(_BYTE *)(v32 + 16) = 0;
    if ( v38 != 2 )
      return v6;
    v52 = (void *)(v32 + 16);
LABEL_47:
    WakeByAddressSingle(v52);
    return v6;
  }
  sub_1407B9160(v60);
  sub_140747530((__int64)&v66, (__int64)v56);
  sub_1419234B0(v6, &v66, 384);
  sub_140292E20(v56);
  if ( !(_BYTE)v77 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v48, v47, v49) )
    *(_BYTE *)(v76 + 17) = 1;
  v50 = v76;
  v51 = *(_BYTE *)(v76 + 16);
  *(_BYTE *)(v76 + 16) = 0;
  if ( v51 == 2 )
  {
    v52 = (void *)(v50 + 16);
    goto LABEL_47;
  }
  return v6;
}
