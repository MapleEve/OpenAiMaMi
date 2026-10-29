// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140ea7a90 | successor of pre-update 0x140d868c0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.77, "str_ov": 0.5, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EA7A90(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  char v9; // bl
  __int64 v10; // r15
  __int64 *v11; // r14
  int v12; // r12d
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // cl
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  PVOID v24; // rcx
  char v25; // al
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // r15
  signed __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdi
  char v38; // al
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // r15
  signed __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  char v47; // al
  void *v48; // rdi
  void *v49; // rdi
  char v50; // cl
  _BYTE v51[383]; // [rsp+28h] [rbp-58h] BYREF
  char v52; // [rsp+1A7h] [rbp+127h]
  __int64 v53; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v54; // [rsp+1B0h] [rbp+130h]
  __int128 v55; // [rsp+1C0h] [rbp+140h]
  __int128 v56; // [rsp+1D0h] [rbp+150h]
  __int128 v57; // [rsp+1E0h] [rbp+160h]
  __int128 v58; // [rsp+1F0h] [rbp+170h]
  __int64 v59; // [rsp+200h] [rbp+180h]
  __int64 v60; // [rsp+208h] [rbp+188h] BYREF
  __int64 v61; // [rsp+210h] [rbp+190h] BYREF
  __int128 v62; // [rsp+218h] [rbp+198h]
  __int128 v63; // [rsp+228h] [rbp+1A8h]
  __int128 v64; // [rsp+238h] [rbp+1B8h]
  __int128 v65; // [rsp+248h] [rbp+1C8h]
  __int128 v66; // [rsp+258h] [rbp+1D8h]
  char v67; // [rsp+375h] [rbp+2F5h]
  _BYTE v68[17]; // [rsp+38Fh] [rbp+30Fh] BYREF
  PVOID Address; // [rsp+3A0h] [rbp+320h]
  int v70; // [rsp+3ACh] [rbp+32Ch]
  __int64 v71; // [rsp+3B0h] [rbp+330h]
  int v72; // [rsp+3BCh] [rbp+33Ch]
  __int64 v73; // [rsp+3C0h] [rbp+340h]

  v73 = -2;
  v4 = a1;
  v5 = a2[2];
  if ( *(_QWORD *)(v5 + 16) != -1 )
  {
    sub_1416DB410(&v61, v5 + 16);
    v60 = 9;
    *(_OWORD *)(v4 + 88) = v66;
    v6 = v62;
    v7 = v63;
    v8 = v64;
    *(_OWORD *)(v4 + 72) = v65;
    *(_OWORD *)(v4 + 56) = v8;
    *(_OWORD *)(v4 + 40) = v7;
    *(_OWORD *)(v4 + 24) = v6;
    *(_QWORD *)(v4 + 8) = v60;
    *(_QWORD *)(v4 + 16) = v61;
LABEL_13:
    *(_QWORD *)v4 = -1;
    return v4;
  }
  v9 = a3;
  v10 = a2[4];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v10 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v10 + 16));
  v11 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v12 = sub_14196A710(a1, v5, a3);
    LOBYTE(v12) = v12 ^ 1;
    if ( *(_BYTE *)(v10 + 17) )
      goto LABEL_7;
  }
  else
  {
    v12 = 0;
    if ( *(_BYTE *)(v10 + 17) )
    {
LABEL_7:
      nullsub_1(a1, v5);
      v13 = (void *)sub_140001650(40, 1);
      if ( !v13 )
      {
        v72 = v12;
        v71 = v10;
        sub_14196B2DB(1, 40);
      }
      qmemcpy(v13, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v12 )
      {
        v16 = 2 * *v11;
        if ( v16 )
        {
          v49 = v13;
          v50 = sub_14196A710(v16, v14, v15);
          v13 = v49;
          if ( !v50 )
            *(_BYTE *)(v10 + 17) = 1;
        }
      }
      v17 = *(_BYTE *)(v10 + 16);
      *(_BYTE *)(v10 + 16) = 0;
      if ( v17 == 2 )
      {
        v48 = v13;
        WakeByAddressSingle((PVOID)(v10 + 16));
        v13 = v48;
      }
      *(_QWORD *)(v4 + 8) = 10;
      *(_QWORD *)(v4 + 16) = 40;
      *(_QWORD *)(v4 + 24) = v13;
      *(_QWORD *)(v4 + 32) = 40;
      goto LABEL_13;
    }
  }
  v72 = v12;
  v71 = v10;
  v19 = a2[1];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v19 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v19 + 16));
  if ( 2 * *v11 )
  {
    v20 = sub_14196A710(a1, v5, a3);
    LOBYTE(v20) = v20 ^ 1;
    if ( !*(_BYTE *)(v19 + 17) )
      goto LABEL_20;
LABEL_49:
    v60 = v19 + 16;
    LOBYTE(v61) = v20;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)&v60,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141AA0128);
  }
  v20 = 0;
  if ( *(_BYTE *)(v19 + 17) )
    goto LABEL_49;
LABEL_20:
  v70 = v20;
  Address = (PVOID)(v19 + 16);
  sub_140ED7B40(v51, v19 + 24);
  if ( !(_BYTE)v70 && 2 * *v11 && !(unsigned __int8)sub_14196A710(v22, v21, v23) )
    *(_BYTE *)(v19 + 17) = 1;
  v24 = Address;
  v25 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v25 == 2 )
    WakeByAddressSingle(v24);
  if ( v9 == v52 )
  {
    sub_140763690(&v60, v51);
    v67 = 0;
    if ( (_QWORD)v62 )
    {
      v30 = v61;
      v31 = (_QWORD)v62 << 8;
      v32 = 0;
      do
      {
        *(_QWORD *)(v30 + v32 + 88) = 0;
        v33 = *(_QWORD *)(v30 + v32 + 192);
        if ( v33 >= (__int64)0x8000000000000002uLL && v33 )
          sub_140001660(*(_QWORD *)(v30 + v32 + 200), v33, 1);
        *(_QWORD *)(v30 + v32 + 192) = 0x8000000000000000uLL;
        *(_QWORD *)(v30 + v32 + 160) = 0;
        v32 += 256;
      }
      while ( v31 != v32 );
    }
    sub_1419234B0(v4, &v60, 384);
    goto LABEL_34;
  }
  v52 = v9;
  sub_140ED7B40(&v60, v51);
  v68[0] = 0;
  sub_140E9F030(&v53, a2, &v60, v68);
  v26 = v53;
  if ( v53 != -1 )
  {
    *(_QWORD *)(v4 + 96) = v59;
    *(_OWORD *)(v4 + 80) = v58;
    v27 = v54;
    v28 = v55;
    v29 = v56;
    *(_OWORD *)(v4 + 64) = v57;
    *(_OWORD *)(v4 + 48) = v29;
    *(_OWORD *)(v4 + 32) = v28;
    *(_OWORD *)(v4 + 16) = v27;
    *(_QWORD *)(v4 + 8) = v26;
    *(_QWORD *)v4 = -1;
LABEL_34:
    sub_140292E20(v51);
    v37 = v71;
    if ( !(_BYTE)v72 && 2 * *v11 && !(unsigned __int8)sub_14196A710(v35, v34, v36) )
      *(_BYTE *)(v37 + 17) = 1;
    v38 = *(_BYTE *)(v37 + 16);
    *(_BYTE *)(v37 + 16) = 0;
    if ( v38 == 2 )
      WakeByAddressSingle((PVOID)(v37 + 16));
    return v4;
  }
  sub_1407B9160(v54);
  sub_140763690(&v60, v51);
  v67 = 0;
  if ( (_QWORD)v62 )
  {
    v39 = v61;
    v40 = (_QWORD)v62 << 8;
    v41 = 0;
    do
    {
      *(_QWORD *)(v39 + v41 + 88) = 0;
      v42 = *(_QWORD *)(v39 + v41 + 192);
      if ( v42 >= (__int64)0x8000000000000002uLL && v42 )
        sub_140001660(*(_QWORD *)(v39 + v41 + 200), v42, 1);
      *(_QWORD *)(v39 + v41 + 192) = 0x8000000000000000uLL;
      *(_QWORD *)(v39 + v41 + 160) = 0;
      v41 += 256;
    }
    while ( v40 != v41 );
  }
  sub_1419234B0(v4, &v60, 384);
  sub_140292E20(v51);
  if ( !(_BYTE)v72 && 2 * *v11 && !(unsigned __int8)sub_14196A710(v44, v43, v45) )
    *(_BYTE *)(v71 + 17) = 1;
  v46 = v71;
  v47 = *(_BYTE *)(v71 + 16);
  *(_BYTE *)(v71 + 16) = 0;
  if ( v47 == 2 )
    WakeByAddressSingle((PVOID)(v46 + 16));
  return v4;
}
