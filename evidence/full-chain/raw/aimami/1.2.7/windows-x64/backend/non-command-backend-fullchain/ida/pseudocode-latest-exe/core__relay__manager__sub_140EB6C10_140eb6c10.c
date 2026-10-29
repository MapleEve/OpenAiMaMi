// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb6c10 | successor of pre-update 0x140d99990 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.936, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EB6C10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // r14
  char *v11; // r12
  __int64 *v12; // r13
  unsigned int v13; // ebx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  char v18; // cl
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // rcx
  _OWORD *v34; // rax
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rax
  char v46; // dl
  __int64 v47; // r15
  __int64 v48; // r13
  __int64 v49; // r8
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int128 *v53; // rcx
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm2
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  char *v60; // rdi
  char v61; // al
  PVOID v62; // rcx
  char v63; // al
  void *v65; // rdi
  void *v66; // rdi
  char v67; // cl
  int v68; // eax
  _BYTE v69[24]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v70[360]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v71; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v72; // [rsp+1B8h] [rbp+138h]
  __int128 v73; // [rsp+1C8h] [rbp+148h]
  __int128 v74; // [rsp+1D8h] [rbp+158h]
  __int128 v75; // [rsp+1E8h] [rbp+168h]
  __int128 v76; // [rsp+1F8h] [rbp+178h]
  __int128 v77; // [rsp+208h] [rbp+188h]
  _BYTE v78[152]; // [rsp+218h] [rbp+198h] BYREF
  __int128 v79; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v80; // [rsp+2C0h] [rbp+240h]
  __int128 v81; // [rsp+2D0h] [rbp+250h]
  __int128 v82; // [rsp+2E0h] [rbp+260h]
  __int128 v83; // [rsp+2F0h] [rbp+270h]
  __int128 v84; // [rsp+300h] [rbp+280h]
  _OWORD v85[6]; // [rsp+438h] [rbp+3B8h] BYREF
  _BYTE v86[104]; // [rsp+498h] [rbp+418h] BYREF
  _BYTE v87[280]; // [rsp+500h] [rbp+480h] BYREF
  __int64 v88; // [rsp+618h] [rbp+598h]
  __int64 v89; // [rsp+620h] [rbp+5A0h]
  __int64 v90; // [rsp+628h] [rbp+5A8h]
  __int64 v91; // [rsp+630h] [rbp+5B0h]
  __int64 v92; // [rsp+638h] [rbp+5B8h]
  PVOID Address; // [rsp+640h] [rbp+5C0h]
  PVOID v94; // [rsp+648h] [rbp+5C8h]
  __int64 v95; // [rsp+650h] [rbp+5D0h]
  unsigned int v96; // [rsp+658h] [rbp+5D8h]
  char v97; // [rsp+65Dh] [rbp+5DDh]
  unsigned __int8 v98; // [rsp+65Eh] [rbp+5DEh]
  char v99; // [rsp+65Fh] [rbp+5DFh]
  __int64 v100; // [rsp+660h] [rbp+5E0h]

  v100 = -2;
  v5 = a1;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416DB410(&v86[8], v6 + 16);
    *(_QWORD *)v86 = 9;
    *(_OWORD *)(v5 + 88) = *(_OWORD *)&v86[80];
    v7 = *(_OWORD *)&v86[16];
    v8 = *(_OWORD *)&v86[32];
    v9 = *(_OWORD *)&v86[48];
    *(_OWORD *)(v5 + 72) = *(_OWORD *)&v86[64];
    *(_OWORD *)(v5 + 56) = v9;
    *(_OWORD *)(v5 + 40) = v8;
    *(_OWORD *)(v5 + 24) = v7;
    *(_OWORD *)(v5 + 8) = *(_OWORD *)v86;
    *(_QWORD *)v5 = -1;
    return v5;
  }
  v10 = a2[4];
  v11 = (char *)(v10 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v10 + 16), 1, 0) )
  {
    v19 = a4;
    v20 = a3;
    sub_141969A30((volatile void *)(v10 + 16));
    a3 = v20;
    a4 = v19;
  }
  v12 = off_142240260;
  if ( 2 * *off_142240260 )
  {
    v21 = a4;
    v22 = a3;
    v23 = sub_14196A710(a1, v6, a3);
    a3 = v22;
    a4 = v21;
    v13 = v23;
    LOBYTE(v13) = v23 ^ 1;
    if ( *(_BYTE *)(v10 + 17) )
      goto LABEL_7;
  }
  else
  {
    v13 = 0;
    if ( *(_BYTE *)(v10 + 17) )
    {
LABEL_7:
      nullsub_1(a1, v6);
      v14 = (void *)sub_140001650(40, 1);
      if ( !v14 )
      {
        v96 = v13;
        Address = (PVOID)(v10 + 16);
        sub_14196B2DB(1, 40);
      }
      qmemcpy(v14, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v13 )
      {
        v17 = 2 * *v12;
        if ( v17 )
        {
          v66 = v14;
          v67 = sub_14196A710(v17, v15, v16);
          v14 = v66;
          if ( !v67 )
            *(_BYTE *)(v10 + 17) = 1;
        }
      }
      v18 = *v11;
      *v11 = 0;
      if ( v18 == 2 )
      {
        v65 = v14;
        WakeByAddressSingle((PVOID)(v10 + 16));
        v14 = v65;
      }
      *(_QWORD *)(v5 + 8) = 10;
      *(_QWORD *)(v5 + 16) = 40;
      *(_QWORD *)(v5 + 24) = v14;
      *(_QWORD *)(v5 + 32) = 40;
      *(_QWORD *)v5 = -1;
      return v5;
    }
  }
  v96 = v13;
  Address = (PVOID)(v10 + 16);
  v88 = a3;
  v90 = a4;
  sub_1408741F0(v86, a2 + 5, aActivatingARel, 27);
  v26 = *(_QWORD *)&v86[8];
  v25 = *(_QWORD *)v86;
  v27 = v86[16];
  if ( *(_QWORD *)v86 == -1 )
  {
    v98 = v86[16];
    v94 = *(PVOID *)&v86[8];
    sub_140EB7850(v86, a2);
    v31 = v87[260];
    sub_140292E20(v86);
    if ( v31 )
    {
      nullsub_1(v33, v32);
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
      *(_QWORD *)v5 = -1;
      goto LABEL_40;
    }
    sub_140EA26A0(v86, a2, v88, v90);
    v35 = *(_QWORD *)v86;
    v79 = *(_OWORD *)&v86[8];
    v80 = *(_OWORD *)&v86[24];
    v81 = *(_OWORD *)&v86[40];
    v82 = *(_OWORD *)&v86[56];
    v83 = *(_OWORD *)&v86[72];
    v84 = *(_OWORD *)&v86[88];
    if ( *(_QWORD *)v86 == -1 )
    {
      *(_OWORD *)(v5 + 88) = v84;
      *(_OWORD *)(v5 + 72) = v83;
      v54 = v79;
      v55 = v80;
      v56 = v81;
      *(_OWORD *)(v5 + 56) = v82;
      *(_OWORD *)(v5 + 40) = v56;
      *(_OWORD *)(v5 + 24) = v55;
      *(_OWORD *)(v5 + 8) = v54;
      *(_QWORD *)v5 = -1;
LABEL_40:
      v60 = (char *)v94;
      if ( (v98 & 1) == 0 && 2 * *v12 && !(unsigned __int8)sub_14196A710(v26, v27, v24) )
        v60[1] = 1;
      v61 = *v60;
      *v60 = 0;
      if ( v61 == 2 )
        WakeByAddressSingle(v60);
      goto LABEL_44;
    }
    sub_1419234B0(v78, v87, 152);
    v72 = v79;
    v73 = v80;
    v74 = v81;
    v75 = v82;
    v76 = v83;
    v77 = v84;
    v71 = v35;
    v38 = a2[1];
    LOBYTE(v39) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v38 + 16), 1, 0) )
      sub_141969A30((volatile void *)(v38 + 16));
    if ( 2 * *v12 )
    {
      v68 = sub_14196A710(v39, v36, v37);
      LOBYTE(v68) = v68 ^ 1;
      LODWORD(v95) = v68;
      v92 = v38 + 16;
      if ( !*(_BYTE *)(v38 + 17) )
        goto LABEL_24;
    }
    else
    {
      LODWORD(v95) = 0;
      v92 = v38 + 16;
      if ( !*(_BYTE *)(v38 + 17) )
      {
LABEL_24:
        v89 = v38;
        v40 = *(_QWORD *)(v38 + 64);
        if ( v40 )
        {
          v91 = v72;
          v41 = *(_QWORD *)(v89 + 56);
          v42 = 24 * v40;
          v43 = 0;
          while ( *(_QWORD *)(v41 + v43 + 16) != *((_QWORD *)&v72 + 1)
               || (unsigned int)sub_141923B40(*(_QWORD *)(v41 + v43 + 8), v91, *((_QWORD *)&v72 + 1)) )
          {
            v43 += 24;
            if ( v42 == v43 )
              goto LABEL_30;
          }
          sub_140747530(v86, v89 + 24);
          v12 = off_142240260;
          sub_1419234B0(v5, v86, 384);
          sub_14002B980(v92, (unsigned int)v95);
        }
        else
        {
LABEL_30:
          v44 = v92;
          sub_14002B980(v92, (unsigned int)v95);
          sub_1408740F0(v86, v44);
          v45 = sub_140E9BA60(v86, &off_141AA0CB0);
          LOBYTE(v91) = v46 & 1;
          v95 = v45;
          sub_140ED7B40(v69, v45 + 8);
          v99 = 1;
          sub_14002B980(v95, (unsigned __int8)v91);
          sub_1401E7560((unsigned int)v86, v90, 0, 1, 1);
          v47 = *(_QWORD *)&v86[8];
          if ( *(_DWORD *)v86 == 1 )
          {
            v99 = 1;
            sub_14196B2DB(*(_QWORD *)&v86[8], *(_QWORD *)&v86[16]);
          }
          v48 = *(_QWORD *)&v86[16];
          v49 = v90;
          if ( v90 )
          {
            sub_1419234B0(*(_QWORD *)&v86[16], v88, v90);
            v49 = v90;
          }
          *(_QWORD *)v86 = v47;
          *(_QWORD *)&v86[8] = v48;
          *(_QWORD *)&v86[16] = v49;
          v99 = 1;
          sub_140935530(v70, v86);
          v12 = off_142240260;
          v99 = 1;
          sub_140747530(&v79, v69);
          v97 = 1;
          sub_140E9EBF0(v86, a2);
          if ( *(_DWORD *)v86 == -1 )
          {
            sub_1419234B0(v86, v69, 384);
            v97 = 0;
            sub_140EB5DA0(v85, a2, v86);
            if ( LODWORD(v85[0]) == -1 )
            {
              sub_1419234B0(v5, &v79, 384);
              sub_140292FD0(&v71);
              sub_14002B980(v94, v98);
              sub_14002B980(Address, v96);
              return v5;
            }
            *(_OWORD *)(v5 + 88) = v85[5];
            *(_OWORD *)(v5 + 72) = v85[4];
            v57 = v85[0];
            v58 = v85[1];
            v59 = v85[2];
            *(_OWORD *)(v5 + 56) = v85[3];
            *(_OWORD *)(v5 + 40) = v59;
            *(_OWORD *)(v5 + 24) = v58;
            *(_OWORD *)(v5 + 8) = v57;
            *(_QWORD *)v5 = -1;
            v53 = &v79;
          }
          else
          {
            *(_OWORD *)(v5 + 88) = *(_OWORD *)&v86[80];
            *(_OWORD *)(v5 + 72) = *(_OWORD *)&v86[64];
            v50 = *(_OWORD *)v86;
            v51 = *(_OWORD *)&v86[16];
            v52 = *(_OWORD *)&v86[32];
            *(_OWORD *)(v5 + 56) = *(_OWORD *)&v86[48];
            *(_OWORD *)(v5 + 40) = v52;
            *(_OWORD *)(v5 + 24) = v51;
            *(_OWORD *)(v5 + 8) = v50;
            *(_QWORD *)v5 = -1;
            sub_140292E20(&v79);
            v53 = (__int128 *)v69;
          }
          sub_140292E20(v53);
        }
        sub_140292FD0(&v71);
        goto LABEL_40;
      }
    }
    *(_QWORD *)v86 = v92;
    v86[8] = v95;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)v86,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141AA0C98);
  }
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v86[80];
  v28 = *(_OWORD *)&v86[17];
  v29 = *(_OWORD *)&v86[33];
  v30 = *(_OWORD *)&v86[49];
  *(_OWORD *)(v5 + 73) = *(_OWORD *)&v86[65];
  *(_OWORD *)(v5 + 57) = v30;
  *(_OWORD *)(v5 + 41) = v29;
  *(_OWORD *)(v5 + 25) = v28;
  *(_QWORD *)(v5 + 8) = v25;
  *(_QWORD *)(v5 + 16) = v26;
  *(_BYTE *)(v5 + 24) = v27;
  *(_QWORD *)v5 = -1;
LABEL_44:
  if ( !(_BYTE)v96 && 2 * *v12 && !(unsigned __int8)sub_14196A710(v26, v27, v24) )
    *(_BYTE *)(v10 + 17) = 1;
  v62 = Address;
  v63 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v63 == 2 )
    WakeByAddressSingle(v62);
  return v5;
}
