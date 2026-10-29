// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140ea1b00 | successor of pre-update 0x140d87040 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.942, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140EA1B00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rbx
  char *v6; // rdi
  __int64 *v7; // r13
  char v8; // r14
  char v9; // r12
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  char v14; // cl
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  volatile signed __int64 *v18; // r12
  char v19; // al
  void *v21; // r14
  void *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  void *v36; // rdi
  void *v37; // rbx
  char v38; // cl
  __int64 v39; // [rsp+20h] [rbp-60h] BYREF
  __int64 v40; // [rsp+28h] [rbp-58h]
  __int64 v41; // [rsp+30h] [rbp-50h]
  __int64 v42; // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-40h]
  __int64 v44; // [rsp+48h] [rbp-38h]
  __int64 v45; // [rsp+50h] [rbp-30h]
  __int64 v46; // [rsp+58h] [rbp-28h]
  __int128 v47; // [rsp+60h] [rbp-20h]
  __int64 v48; // [rsp+70h] [rbp-10h]
  __int64 v49; // [rsp+78h] [rbp-8h]
  __int64 v50; // [rsp+80h] [rbp+0h]
  __int64 v51; // [rsp+88h] [rbp+8h]
  __int16 v52; // [rsp+98h] [rbp+18h]
  char v53; // [rsp+9Ah] [rbp+1Ah]
  __int64 v54; // [rsp+A0h] [rbp+20h]
  __int64 v55; // [rsp+A8h] [rbp+28h]
  __int64 v56; // [rsp+B0h] [rbp+30h]
  _BYTE v57[232]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v58; // [rsp+1A0h] [rbp+120h]
  __int64 v59; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v60; // [rsp+1B8h] [rbp+138h]
  __int128 v61; // [rsp+1C8h] [rbp+148h]
  __int128 v62; // [rsp+1D8h] [rbp+158h]
  __int128 v63; // [rsp+1E8h] [rbp+168h]
  __int128 v64; // [rsp+1F8h] [rbp+178h]
  __int64 *v65; // [rsp+208h] [rbp+188h]
  char v66; // [rsp+278h] [rbp+1F8h]
  __int64 v67; // [rsp+280h] [rbp+200h] BYREF
  _QWORD v68[11]; // [rsp+288h] [rbp+208h] BYREF
  __int64 v69; // [rsp+2E0h] [rbp+260h] BYREF
  _BYTE v70[88]; // [rsp+2E8h] [rbp+268h]
  __int64 v71; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 (__fastcall *v72)(_QWORD, _QWORD); // [rsp+348h] [rbp+2C8h]
  __int16 v73; // [rsp+35Ch] [rbp+2DCh] BYREF
  char v74; // [rsp+35Eh] [rbp+2DEh] BYREF
  char v75; // [rsp+35Fh] [rbp+2DFh]
  __int64 v76; // [rsp+360h] [rbp+2E0h]

  v76 = -2;
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = (char *)(v4 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v4 + 16), 1, 0) )
    sub_141969A30((volatile void *)(v4 + 16));
  v7 = off_142240260;
  if ( 2 * *off_142240260 )
    v8 = sub_14196A710(a1, a2, a3) ^ 1;
  else
    v8 = 0;
  v9 = *(_BYTE *)(v4 + 17);
  *(_QWORD *)&v60 = v4 + 16;
  BYTE8(v60) = v8;
  v59 = v9 != 0;
  if ( v9 )
  {
    nullsub_1(a1, a2);
    v10 = (void *)sub_140001650(34, 1);
    if ( !v10 )
    {
      v75 = v9;
      sub_14196B2DB(1, 34);
    }
    qmemcpy(v10, "relay proxy state lock is poisoned", 34);
    if ( !v8 )
    {
      v13 = 2 * *v7;
      if ( v13 )
      {
        v37 = v10;
        v38 = sub_14196A710(v13, v11, v12);
        v10 = v37;
        if ( !v38 )
          *(_BYTE *)(v4 + 17) = 1;
      }
    }
    v14 = *v6;
    *v6 = 0;
    if ( v14 == 2 )
    {
      v36 = v10;
      WakeByAddressSingle((PVOID)(v4 + 16));
      v10 = v36;
    }
    v15 = 34;
    v16 = 34;
LABEL_12:
    v69 = 10;
    *(_QWORD *)v70 = v16;
    *(_QWORD *)&v70[8] = v10;
    *(_QWORD *)&v70[16] = v15;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v67 = (__int64)&v69;
      v68[0] = sub_140D76130;
      *((_QWORD *)&v62 + 1) = 2;
      *(_QWORD *)&v63 = aCodexmateLibCo_50;
      *((_QWORD *)&v63 + 1) = 35;
      *((_QWORD *)&v64 + 1) = &unk_141A9FA50;
      v65 = &v67;
      v59 = 0;
      *(_QWORD *)&v60 = aCodexmateLibCo_50;
      *((_QWORD *)&v60 + 1) = 35;
      *(_QWORD *)&v61 = 0;
      *((_QWORD *)&v61 + 1) = aSrcCoreRelayMa_4;
      *(_QWORD *)&v62 = 25;
      *(_QWORD *)&v64 = 0xACF00000001LL;
      sub_141503E20(&v74, &v59);
    }
    sub_140D8A3A0(&v69);
    goto LABEL_15;
  }
  v75 = 0;
  v18 = *(volatile signed __int64 **)(v4 + 24);
  v58 = *(_OWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 24) = 0;
  if ( !v8 && 2 * *v7 && !(unsigned __int8)sub_14196A710(a1, a2, a3) )
    *(_BYTE *)(v4 + 17) = 1;
  v19 = *v6;
  *v6 = 0;
  if ( v19 == 2 )
    WakeByAddressSingle((PVOID)(v4 + 16));
  if ( v18 )
  {
    v67 = (__int64)v18;
    *(_OWORD *)v68 = v58;
    v73 = WORD4(v58);
    if ( v5 )
    {
      v59 = (__int64)&v67;
      v66 = 0;
      if ( (unsigned __int8)sub_140A9BCB0(v5 + 16, &v59, &off_141A9FA00) )
      {
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v67) )
          sub_140CA3140(&v67);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v68[0]) )
          sub_140CA3110(v68);
        goto LABEL_15;
      }
      v72 = nullptr;
      v71 = 5000;
      v59 = (__int64)&v73;
      *(_QWORD *)&v60 = sub_1416EA1B0;
      *((_QWORD *)&v60 + 1) = &v71;
      *(_QWORD *)&v61 = sub_1416E85A0;
      sub_1416DAFA0(&v69, &unk_141A9FA18, &v59);
      v16 = v69;
      v15 = *(_QWORD *)&v70[8];
      v10 = *(void **)v70;
      if ( _InterlockedDecrement64((volatile signed __int64 *)v67) )
      {
LABEL_48:
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v68[0]) )
        {
          v22 = v10;
          sub_140CA3110(v68);
          v10 = v22;
        }
        goto LABEL_12;
      }
    }
    else
    {
      nullsub_1(a1, a2);
      v15 = 34;
      v10 = (void *)sub_140001650(34, 1);
      if ( !v10 )
        sub_14196B2DB(1, 34);
      qmemcpy(v10, "relay proxy runtime is unavailable", 34);
      v16 = 34;
      if ( _InterlockedDecrement64(v18) )
        goto LABEL_48;
    }
    v21 = v10;
    sub_140CA3140(&v67);
    v10 = v21;
    goto LABEL_48;
  }
LABEL_15:
  v17 = *(_QWORD *)(v3 + 16);
  if ( *(_QWORD *)(v17 + 16) != -1 )
  {
    sub_1416DB410(v68, v17 + 16);
    v67 = 9;
    *(_OWORD *)&v70[72] = *(_OWORD *)&v68[9];
    *(_OWORD *)&v70[56] = *(_OWORD *)&v68[7];
    *(_OWORD *)&v70[40] = *(_OWORD *)&v68[5];
    *(_OWORD *)&v70[24] = *(_OWORD *)&v68[3];
    *(_OWORD *)&v70[8] = *(_OWORD *)&v68[1];
    v69 = 9;
    *(_QWORD *)v70 = v68[0];
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v71 = (__int64)&v69;
      v72 = sub_140D76130;
      *((_QWORD *)&v62 + 1) = 2;
      *(_QWORD *)&v63 = aCodexmateLibCo_50;
      *((_QWORD *)&v63 + 1) = 35;
      *((_QWORD *)&v64 + 1) = &unk_141A9FA85;
      v65 = &v71;
      v59 = 0;
      *(_QWORD *)&v60 = aCodexmateLibCo_50;
      *((_QWORD *)&v60 + 1) = 35;
      *(_QWORD *)&v61 = 0;
      *((_QWORD *)&v61 + 1) = aSrcCoreRelayMa_4;
      *(_QWORD *)&v62 = 25;
      *(_QWORD *)&v64 = 0xAD600000001LL;
      sub_141503E20(&v74, &v59);
    }
    return sub_140D8A3A0(&v69);
  }
  sub_140EB7850(&v39, v3);
  if ( v53 || v52 || (_QWORD)v47 || v49 || v50 != -1 )
  {
    if ( v45 )
      sub_140001660(v46, v45, 1);
    if ( *((_QWORD *)&v47 + 1) )
      sub_140001660(v48, *((_QWORD *)&v47 + 1), 1);
    if ( (unsigned __int64)(v50 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v51, v50, 1);
    v45 = 0;
    v46 = 1;
    v47 = 0;
    v48 = 1;
    v49 = 0;
    v50 = -1;
    v52 = 0;
    v53 = 0;
    LOBYTE(v69) = 0;
    sub_140E9F030(&v59, v3, &v39, &v69);
    if ( v59 != -1 )
    {
      *(_QWORD *)&v70[80] = v65;
      *(_OWORD *)&v70[64] = v64;
      *(_OWORD *)&v70[48] = v63;
      *(_OWORD *)&v70[32] = v62;
      *(_OWORD *)&v70[16] = v61;
      *(_OWORD *)v70 = v60;
      v69 = v59;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v67 = (__int64)&v69;
        v68[0] = sub_140D76130;
        *((_QWORD *)&v62 + 1) = 2;
        *(_QWORD *)&v63 = aCodexmateLibCo_50;
        *((_QWORD *)&v63 + 1) = 35;
        *((_QWORD *)&v64 + 1) = &unk_141A9FAC4;
        v65 = &v67;
        v59 = 0;
        *(_QWORD *)&v60 = aCodexmateLibCo_50;
        *((_QWORD *)&v60 + 1) = 35;
        *(_QWORD *)&v61 = 0;
        *((_QWORD *)&v61 + 1) = aSrcCoreRelayMa_4;
        *(_QWORD *)&v62 = 25;
        *(_QWORD *)&v64 = 0xAE300000001LL;
        sub_141503E20(&v74, &v59);
      }
      return sub_140D8A3A0(&v69);
    }
    return sub_1407B9160(v60);
  }
  else
  {
    v23 = v40;
    v24 = v41;
    if ( v41 )
    {
      v25 = v40;
      do
      {
        sub_1401B16C0(v25);
        v25 += 256;
        --v24;
      }
      while ( v24 );
    }
    if ( v39 )
      sub_140001660(v23, v39 << 8, 8);
    v26 = v43;
    v27 = v44;
    if ( v44 )
    {
      v28 = (_QWORD *)(v43 + 8);
      do
      {
        v29 = *(v28 - 1);
        if ( v29 )
          sub_140001660(*v28, v29, 1);
        v28 += 3;
        --v27;
      }
      while ( v27 );
    }
    if ( v42 )
      sub_140001660(v26, 24 * v42, 8);
    if ( v45 )
      sub_140001660(v46, v45, 1);
    if ( *((_QWORD *)&v47 + 1) )
      sub_140001660(v48, *((_QWORD *)&v47 + 1), 1);
    v30 = v55;
    v31 = v56;
    if ( v56 )
    {
      v32 = (_QWORD *)(v55 + 56);
      do
      {
        v33 = *(v32 - 7);
        if ( v33 )
          sub_140001660(*(v32 - 6), v33, 1);
        v34 = *(v32 - 4);
        if ( v34 )
          sub_140001660(*(v32 - 3), v34, 1);
        v35 = *(v32 - 1);
        if ( v35 > 0 )
          sub_140001660(*v32, v35, 1);
        v32 += 9;
        --v31;
      }
      while ( v31 );
    }
    if ( v54 )
      sub_140001660(v30, 72 * v54, 8);
    return sub_1400262A0(v57);
  }
}
