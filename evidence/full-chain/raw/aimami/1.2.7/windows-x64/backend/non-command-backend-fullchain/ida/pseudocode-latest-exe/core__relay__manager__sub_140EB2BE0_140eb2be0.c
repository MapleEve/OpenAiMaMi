// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb2be0 | successor of pre-update 0x140d95a10 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.705, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EB2BE0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r13
  char *v16; // r15
  unsigned int v17; // r12d
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  char v22; // cl
  __int64 v23; // r8
  __int64 v24; // rax
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  PVOID v34; // rcx
  char v35; // al
  __int64 v36; // r8
  __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // r13
  int v40; // eax
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // r15
  __int64 v45; // rax
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  char *v49; // rdi
  char v50; // al
  PVOID v51; // rcx
  char v52; // al
  __int64 v54; // r14
  PVOID v55; // rcx
  __int64 v56; // rdx
  PVOID v57; // rdi
  void *v58; // rdi
  void *v59; // rdi
  char v60; // cl
  int v61; // eax
  _BYTE v62[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v63; // [rsp+38h] [rbp-48h]
  __int64 v64; // [rsp+40h] [rbp-40h]
  _BYTE v65[360]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v66; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v67; // [rsp+1C0h] [rbp+140h]
  _QWORD v68[2]; // [rsp+1C8h] [rbp+148h] BYREF
  _QWORD v69[2]; // [rsp+1D8h] [rbp+158h] BYREF
  __int128 v70; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v71; // [rsp+1F8h] [rbp+178h]
  __int64 v72; // [rsp+200h] [rbp+180h]
  PVOID v73; // [rsp+208h] [rbp+188h]
  _BYTE v74[96]; // [rsp+210h] [rbp+190h] BYREF
  __int128 v75; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v76; // [rsp+280h] [rbp+200h]
  PVOID Address; // [rsp+290h] [rbp+210h]
  PVOID v78; // [rsp+298h] [rbp+218h]
  unsigned int v79; // [rsp+2A4h] [rbp+224h]
  int v80; // [rsp+2A8h] [rbp+228h]
  unsigned __int8 v81; // [rsp+2AEh] [rbp+22Eh]
  char v82; // [rsp+2AFh] [rbp+22Fh]
  __int64 v83; // [rsp+2B0h] [rbp+230h]

  v83 = -2;
  v69[0] = a3;
  v69[1] = a4;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416DB410(&v74[8], v6 + 16);
    *(_QWORD *)v74 = 9;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v74[80];
    v7 = *(_OWORD *)&v74[16];
    v8 = *(_OWORD *)&v74[32];
    v9 = *(_OWORD *)&v74[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v74[64];
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = *(_OWORD *)v74;
    return a1;
  }
  sub_1409FA7A0(v74, a3, a4);
  if ( *(_QWORD *)v74 != -1 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v74[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v74;
    *(_QWORD *)a1 = 9;
    return a1;
  }
  v15 = a2[4];
  v16 = (char *)(v15 + 16);
  LOBYTE(v13) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v15 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v15 + 16));
  if ( 2 * *off_142240260 )
  {
    v17 = sub_14196A710(v13, v12, v14);
    LOBYTE(v17) = v17 ^ 1;
    if ( *(_BYTE *)(v15 + 17) )
      goto LABEL_9;
  }
  else
  {
    v17 = 0;
    if ( *(_BYTE *)(v15 + 17) )
    {
LABEL_9:
      nullsub_1(v13, v12);
      v18 = (void *)sub_140001650(40, 1);
      if ( !v18 )
      {
        v79 = v17;
        Address = (PVOID)(v15 + 16);
        sub_14196B2DB(1, 40);
      }
      qmemcpy(v18, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v17 )
      {
        v21 = 2 * *off_142240260;
        if ( v21 )
        {
          v59 = v18;
          v60 = sub_14196A710(v21, v19, v20);
          v18 = v59;
          if ( !v60 )
            *(_BYTE *)(v15 + 17) = 1;
        }
      }
      v22 = *v16;
      *v16 = 0;
      if ( v22 == 2 )
      {
        v58 = v18;
        WakeByAddressSingle((PVOID)(v15 + 16));
        v18 = v58;
      }
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 40;
      *(_QWORD *)(a1 + 16) = v18;
      *(_QWORD *)(a1 + 24) = 40;
      return a1;
    }
  }
  v79 = v17;
  Address = (PVOID)(v15 + 16);
  sub_1408741F0(v74, a2 + 5, aDeletingARelay, 25);
  v25 = *(_BYTE **)&v74[8];
  v24 = *(_QWORD *)v74;
  v26 = v74[16];
  if ( *(_QWORD *)v74 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v74[80];
    v27 = *(_OWORD *)&v74[17];
    v28 = *(_OWORD *)&v74[33];
    v29 = *(_OWORD *)&v74[49];
    *(_OWORD *)(a1 + 65) = *(_OWORD *)&v74[65];
    *(_OWORD *)(a1 + 49) = v29;
    *(_OWORD *)(a1 + 33) = v28;
    *(_OWORD *)(a1 + 17) = v27;
    *(_QWORD *)a1 = v24;
    *(_QWORD *)(a1 + 8) = v25;
    *(_BYTE *)(a1 + 16) = v26;
LABEL_39:
    if ( !(_BYTE)v79 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v25, v26, v23) )
      *(_BYTE *)(v15 + 17) = 1;
    v51 = Address;
    v52 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v52 == 2 )
      WakeByAddressSingle(v51);
    return a1;
  }
  v81 = v74[16];
  v78 = *(PVOID *)&v74[8];
  v30 = a2[1];
  LOBYTE(v25) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v30 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v30 + 16));
  if ( !(2 * *off_142240260) )
  {
    v80 = 0;
    v73 = (PVOID)(v30 + 16);
    if ( !*(_BYTE *)(v30 + 17) )
      goto LABEL_22;
LABEL_61:
    *(_QWORD *)v74 = v73;
    v74[8] = v80;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)v74,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141AA0B30);
  }
  v61 = sub_14196A710(v25, v26, v23);
  LOBYTE(v61) = v61 ^ 1;
  v80 = v61;
  v73 = (PVOID)(v30 + 16);
  if ( *(_BYTE *)(v30 + 17) )
    goto LABEL_61;
LABEL_22:
  sub_140ED7B40(v62, v30 + 24);
  if ( !(_BYTE)v80 )
  {
    if ( 2 * *off_142240260 )
    {
      v82 = 1;
      if ( !(unsigned __int8)sub_14196A710(v32, v31, v33) )
        *(_BYTE *)(v30 + 17) = 1;
    }
  }
  v72 = v15;
  v34 = v73;
  v35 = *(_BYTE *)v73;
  *(_BYTE *)v73 = 0;
  if ( v35 == 2 )
  {
    v82 = 1;
    WakeByAddressSingle(v34);
  }
  v36 = a4;
  if ( v64 )
  {
    v37 = v63;
    v38 = v64 << 8;
    v39 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v37 + v39 + 16) == v36 )
      {
        v40 = sub_141923B40(*(_QWORD *)(v37 + v39 + 8), a3, v36);
        v36 = a4;
        if ( !v40 )
          break;
      }
      v39 += 256;
      if ( v38 == v39 )
        goto LABEL_33;
    }
    if ( v65[340] == 1 )
    {
      v82 = 1;
      sub_140ED3EE0(v74);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v74[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v74[64];
      v41 = *(_OWORD *)v74;
      v42 = *(_OWORD *)&v74[16];
      v43 = *(_OWORD *)&v74[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v74[48];
      *(_OWORD *)(a1 + 32) = v43;
      *(_OWORD *)(a1 + 16) = v42;
      *(_OWORD *)a1 = v41;
      sub_140292E20(v62);
      v15 = v72;
      goto LABEL_35;
    }
  }
LABEL_33:
  v44 = v36;
  sub_14019DDF0(v62, v69);
  *(_QWORD *)v74 = a3;
  *(_QWORD *)&v74[8] = v44;
  sub_14019B090(v65, v74);
  LOBYTE(v75) = 0;
  v82 = 0;
  sub_140E9F030(v74, a2, v62, &v75);
  v45 = *(_QWORD *)v74;
  v15 = v72;
  if ( *(_QWORD *)v74 != -1 )
  {
    v25 = &v74[8];
    v26 = *(_QWORD *)&v74[88];
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v74[88];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v74[72];
    v46 = *(_OWORD *)&v74[8];
    v47 = *(_OWORD *)&v74[24];
    v48 = *(_OWORD *)&v74[40];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v74[56];
    *(_OWORD *)(a1 + 40) = v48;
    *(_OWORD *)(a1 + 24) = v47;
    *(_OWORD *)(a1 + 8) = v46;
    *(_QWORD *)a1 = v45;
LABEL_35:
    v49 = (char *)v78;
    if ( (v81 & 1) == 0 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v25, v26, v23) )
      v49[1] = 1;
    v50 = *v49;
    *v49 = 0;
    if ( v50 == 2 )
      WakeByAddressSingle(v49);
    goto LABEL_39;
  }
  v82 = 0;
  sub_1407B9160(*(_QWORD *)&v74[8]);
  v54 = *a2 + 16LL;
  v82 = 0;
  sub_140814AF0(&v66, v54, a3, a4);
  if ( (_QWORD)v66 == -1 )
  {
    v82 = 0;
    sub_140816F70(&v70, v54, a3, a4);
    v55 = v78;
    if ( (_QWORD)v70 != -1 )
    {
      v76 = v71;
      v75 = v70;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v68[0] = &v75;
        v68[1] = sub_1400015F0;
        *(_QWORD *)v74 = aCodexmateLibCo_50;
        *(_QWORD *)&v74[8] = 35;
        *(_QWORD *)&v74[16] = aCodexmateLibCo_50;
        *(_QWORD *)&v74[24] = 35;
        *(_QWORD *)&v74[32] = &off_141AA0B80;
        sub_140AF72B0(&unk_141AA0B48, v68, 2, v74);
        v55 = v78;
      }
      if ( (_QWORD)v75 )
      {
        v57 = v55;
        sub_140001660(*((_QWORD *)&v75 + 1), v75, 1);
        v55 = v57;
      }
    }
  }
  else
  {
    v76 = v67;
    v75 = v66;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v70 = &v75;
      *((_QWORD *)&v70 + 1) = sub_1400015F0;
      *(_QWORD *)v74 = aCodexmateLibCo_50;
      *(_QWORD *)&v74[8] = 35;
      *(_QWORD *)&v74[16] = aCodexmateLibCo_50;
      *(_QWORD *)&v74[24] = 35;
      *(_QWORD *)&v74[32] = &off_141AA0BC8;
      sub_140AF72B0(&unk_141AA0B98, &v70, 2, v74);
    }
    if ( (_QWORD)v75 )
      sub_140001660(*((_QWORD *)&v75 + 1), v75, 1);
    v55 = v78;
  }
  v56 = v81;
  *(_QWORD *)a1 = -1;
  sub_14002B980(v55, v56);
  sub_14002B980(Address, v79);
  return a1;
}
