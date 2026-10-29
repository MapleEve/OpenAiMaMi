// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140db4520 | successor of pre-update 0x140bc0a40 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.756, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_140DB4520(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        _OWORD *a9)
{
  int v9; // r14d
  int v13; // edx
  __int64 v14; // r8
  int v15; // r9d
  char v16; // al
  __int128 v17; // kr00_16
  __int128 v18; // xmm0
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int64 v21; // rsi
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  unsigned int v32; // edx
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 (__fastcall *v36)(unsigned __int64); // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  _QWORD v49[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v50; // [rsp+60h] [rbp-20h] BYREF
  int v51; // [rsp+68h] [rbp-18h]
  __int64 v52; // [rsp+70h] [rbp-10h] BYREF
  __int128 v53; // [rsp+78h] [rbp-8h]
  __int64 v54; // [rsp+88h] [rbp+8h] BYREF
  __int128 v55; // [rsp+90h] [rbp+10h]
  __int128 v56; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v57; // [rsp+B0h] [rbp+30h]
  __int128 v58; // [rsp+C0h] [rbp+40h]
  __int128 v59; // [rsp+D0h] [rbp+50h]
  __int128 v60; // [rsp+E0h] [rbp+60h]
  __int128 v61; // [rsp+F0h] [rbp+70h]
  _BYTE *v62; // [rsp+108h] [rbp+88h] BYREF
  __int64 (__fastcall *v63)(_QWORD, _QWORD); // [rsp+110h] [rbp+90h]
  __int64 v64; // [rsp+118h] [rbp+98h]
  __int128 v65; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v66; // [rsp+130h] [rbp+B0h]
  __int128 v67; // [rsp+140h] [rbp+C0h]
  __int128 v68; // [rsp+150h] [rbp+D0h]
  __int128 v69; // [rsp+160h] [rbp+E0h]
  __int128 v70; // [rsp+170h] [rbp+F0h]
  __int64 v71; // [rsp+188h] [rbp+108h]
  _BYTE v72[96]; // [rsp+190h] [rbp+110h] BYREF
  __int128 v73; // [rsp+1F0h] [rbp+170h] BYREF
  _BYTE v74[96]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v75; // [rsp+260h] [rbp+1E0h]
  char v76; // [rsp+26Fh] [rbp+1EFh] BYREF
  unsigned __int64 v77; // [rsp+270h] [rbp+1F0h]
  char v78; // [rsp+27Ch] [rbp+1FCh] BYREF
  char v79; // [rsp+27Dh] [rbp+1FDh]
  char v80; // [rsp+27Eh] [rbp+1FEh]
  char v81; // [rsp+27Fh] [rbp+1FFh]
  __int64 v82; // [rsp+280h] [rbp+200h]

  v82 = -2;
  v9 = a4;
  *(_QWORD *)&v73 = a4;
  *((_QWORD *)&v73 + 1) = a5;
  v81 = 1;
  v80 = 1;
  v50 = sub_1416AEBD0();
  v51 = v13;
  v81 = 1;
  v80 = 1;
  sub_1407D5A90((unsigned int)v74, a2, a3, v9, a5);
  if ( *(_DWORD *)v74 != -1 )
  {
    v61 = *(_OWORD *)&v74[80];
    v60 = *(_OWORD *)&v74[64];
    v59 = *(_OWORD *)&v74[48];
    v58 = *(_OWORD *)&v74[32];
    v57 = *(_OWORD *)&v74[16];
    v56 = *(_OWORD *)v74;
LABEL_4:
    v70 = v61;
    v69 = v60;
    v68 = v59;
    v67 = v58;
    v66 = v57;
    v65 = v56;
    v17 = v73;
    *(_QWORD *)v72 = 0;
    *(_QWORD *)&v72[8] = 1;
    *(_QWORD *)&v72[16] = 0;
    *(_QWORD *)&v74[16] = 1610612768;
    *(_QWORD *)v74 = v72;
    *(_QWORD *)&v74[8] = &off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(&v65, v74) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v78,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v75 = *(_QWORD *)&v72[8];
    v77 = *(_QWORD *)v72;
    sub_1407D2B10(
      (unsigned int)v74,
      a2,
      a3,
      (unsigned int)aCommitFailed,
      13,
      v17,
      *((__int64 *)&v17 + 1),
      *(__int64 *)&v72[8],
      *(__int64 *)&v72[16],
      0);
    if ( *(_QWORD *)v74 == -1 )
    {
      sub_1407B9160(*(_QWORD *)&v74[8]);
    }
    else
    {
      *(_QWORD *)&v72[88] = *(_QWORD *)&v74[88];
      *(_OWORD *)&v72[72] = *(_OWORD *)&v74[72];
      *(_OWORD *)&v72[56] = *(_OWORD *)&v74[56];
      *(_OWORD *)&v72[40] = *(_OWORD *)&v74[40];
      *(_OWORD *)&v72[24] = *(_OWORD *)&v74[24];
      *(_OWORD *)&v72[8] = *(_OWORD *)&v74[8];
      *(_QWORD *)v72 = *(_QWORD *)v74;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v62 = v72;
        v63 = sub_140D76130;
        *(_QWORD *)&v74[48] = 2;
        *(_QWORD *)&v74[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v74[64] = 45;
        *(_QWORD *)&v74[80] = &unk_141AA1920;
        *(_QWORD *)&v74[88] = &v62;
        *(_QWORD *)v74 = 0;
        *(_QWORD *)&v74[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v74[16] = 0x2Du;
        *(_QWORD *)&v74[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v74[40] = 35;
        *(_QWORD *)&v74[72] = 0x22E00000001LL;
        sub_141503E20(&v78, v74);
      }
      sub_140D8A3A0(v72);
    }
    if ( v77 )
      sub_140001660(v75, v77, 1);
    *(_QWORD *)v74 = &v73;
    *(_QWORD *)&v74[8] = sub_140191200;
    *(_QWORD *)&v74[16] = &v65;
    *(_QWORD *)&v74[24] = sub_140D76130;
    sub_1416DAFA0(&v62, &unk_141A9B651, v74);
    v76 = a3;
    v77 = (unsigned __int64)v63;
    v49[0] = v63;
    v49[1] = v64;
    *(_QWORD *)v74 = &v76;
    *(_QWORD *)&v74[8] = sub_140ED78B0;
    *(_QWORD *)&v74[16] = v49;
    *(_QWORD *)&v74[24] = sub_140191200;
    sub_1416DAFA0(v72, &unk_141A9B450, v74);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitFailed, 13, (__int64)v72);
    if ( v62 )
      sub_140001660(v77, v62, 1);
    v18 = v65;
    v19 = v67;
    v20 = v68;
    *(_OWORD *)(a1 + 24) = v66;
    *(_OWORD *)(a1 + 40) = v19;
    *(_OWORD *)(a1 + 56) = v20;
    *(_OWORD *)(a1 + 72) = v69;
    *(_OWORD *)(a1 + 88) = v70;
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = 1;
    sub_140D8A7D0(a6);
    v21 = a6[10];
    if ( v21 )
    {
      v22 = (_QWORD *)(a6[9] + 8);
      do
      {
        v23 = *(v22 - 1);
        if ( v23 )
          sub_140001660(*v22, v23, 1);
        v22 += 3;
        --v21;
      }
      while ( v21 );
    }
    v24 = a6[8];
    if ( v24 )
      sub_140001660(a6[9], 24 * v24, 8);
    return;
  }
  *(_QWORD *)v72 = a6;
  *(_OWORD *)&v72[8] = *a9;
  v14 = *a6;
  v15 = *((unsigned __int8 *)a6 + 56);
  v16 = *(_BYTE *)(a8 + 382);
  v81 = 1;
  v80 = 1;
  sub_140EA2DA0((unsigned int)&v56, a7, v14, v15, v16, (__int64)&v72[8]);
  if ( (_QWORD)v56 != -1 )
    goto LABEL_4;
  v81 = 1;
  v80 = 1;
  v25 = sub_1407B92D0(*((_QWORD *)&v56 + 1));
  if ( v25 )
  {
    v28 = v25 & 3;
    v77 = v25;
    switch ( v25 & 3 )
    {
      case 0uLL:
        LOBYTE(v25) = *(_BYTE *)(v25 + 16);
        break;
      case 1uLL:
        LOBYTE(v25) = *(_BYTE *)(v25 + 31);
        break;
      case 2uLL:
        v79 = 1;
        v36 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v27, v26) + 8);
        v79 = 1;
        LOBYTE(v25) = v36(HIDWORD(v77));
        break;
      case 3uLL:
        v25 >>= 32;
        break;
    }
    v72[0] = v25;
    *(_QWORD *)v74 = v72;
    *(_QWORD *)&v74[8] = sub_140EDB0F0;
    v79 = 1;
    sub_1416DAFA0(&v54, &unk_141A9B46E, v74);
    LOBYTE(v56) = a3;
    v75 = v55;
    v65 = v55;
    *(_QWORD *)v74 = &v56;
    *(_QWORD *)&v74[8] = sub_140ED78B0;
    *(_QWORD *)&v74[16] = &v65;
    *(_QWORD *)&v74[24] = sub_140191200;
    sub_1416DAFA0(v72, &unk_141A9B450, v74);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitSyncUnco, 23, (__int64)v72);
    if ( v54 )
      sub_140001660(v75, v54, 1);
    v37 = *(_QWORD *)(a2 + 776);
    v38 = *(_QWORD *)(a2 + 784);
    v79 = 1;
    sub_1407D3B80(
      v37,
      v38,
      a3,
      (unsigned int)&unk_141A4A03B,
      23,
      v73,
      *((__int64 *)&v73 + 1),
      (__int64)&unk_141A4A42A,
      28);
    *(_QWORD *)&v57 = a6[10];
    v56 = *((_OWORD *)a6 + 4);
    nullsub_1(a6, v39);
    v40 = sub_140001650(170, 1);
    if ( !v40 )
      sub_14196B2DB(1, 170);
    v41 = v40;
    sub_1419234B0(v40, aRouterCommitRe, 170);
    *(_QWORD *)&v74[8] = 170;
    *(_QWORD *)&v74[16] = v41;
    *(_QWORD *)&v74[24] = 170;
    *(_QWORD *)v74 = 10;
    *(_QWORD *)&v65 = 0;
    *((_QWORD *)&v65 + 1) = 1;
    *(_QWORD *)&v66 = 0;
    *(_QWORD *)&v72[16] = 1610612768;
    *(_QWORD *)v72 = &v65;
    *(_QWORD *)&v72[8] = &off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v74, v72) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v78,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v71 = *((_QWORD *)&v65 + 1);
    v75 = v65;
    v42 = v66;
    v43 = v57;
    if ( (_QWORD)v57 == (_QWORD)v56 )
      sub_141939F90(&v56);
    v44 = *((_QWORD *)&v56 + 1);
    v45 = 3 * v43;
    *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v45) = v75;
    *(_QWORD *)(v44 + 8 * v45 + 8) = v71;
    *(_QWORD *)(v44 + 8 * v45 + 16) = v42;
    *(_QWORD *)&v57 = v43 + 1;
    sub_140D8A3A0(v74);
    v46 = *(_OWORD *)a6;
    v47 = *((_OWORD *)a6 + 1);
    v48 = *((_OWORD *)a6 + 2);
    *(_OWORD *)(a1 + 88) = *((_OWORD *)a6 + 3);
    *(_OWORD *)(a1 + 72) = v48;
    *(_OWORD *)(a1 + 56) = v47;
    *(_OWORD *)(a1 + 40) = v46;
    *(_OWORD *)(a1 + 16) = v56;
    *(_QWORD *)(a1 + 32) = v57;
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    if ( (unsigned int)(v28 - 2) >= 2 && v28 )
    {
      *(_QWORD *)&v74[8] = v77 - 1;
      v74[0] = 3;
      v81 = 0;
      v80 = 0;
      sub_1416EBAD0(&v74[8]);
    }
  }
  else
  {
    v29 = a6[9];
    v30 = a6[10];
    v81 = 1;
    v80 = 1;
    sub_1406C5480((unsigned int)v74, v29, v30, (unsigned int)&unk_141A9B28E, 3);
    v75 = *(_QWORD *)&v74[8];
    v77 = *(_QWORD *)v74;
    sub_1407D7100((unsigned int)v72, a2, a3, v73, *((__int64 *)&v73 + 1), *(__int64 *)&v74[8], *(__int64 *)&v74[16]);
    if ( *(_DWORD *)v72 != -1 )
    {
      *(_OWORD *)&v74[80] = *(_OWORD *)&v72[80];
      *(_OWORD *)&v74[64] = *(_OWORD *)&v72[64];
      *(_OWORD *)&v74[48] = *(_OWORD *)&v72[48];
      *(_OWORD *)&v74[32] = *(_OWORD *)&v72[32];
      *(_OWORD *)&v74[16] = *(_OWORD *)&v72[16];
      *(_OWORD *)v74 = *(_OWORD *)v72;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)&v56 = v74;
        *((_QWORD *)&v56 + 1) = sub_140D76130;
        *(_QWORD *)&v65 = aCodexmateLibCo_49;
        *((_QWORD *)&v65 + 1) = 45;
        *(_QWORD *)&v66 = aCodexmateLibCo_49;
        *((_QWORD *)&v66 + 1) = 45;
        *(_QWORD *)&v67 = &off_141A9B5E8;
        sub_140AF72B0(&unk_141A9B5A6, &v56, 2, &v65);
      }
      sub_140D8A3A0(v74);
    }
    if ( v77 )
      sub_140001660(v75, v77, 1);
    v81 = 1;
    v80 = 1;
    v31 = sub_1416AED20(&v50);
    *(_OWORD *)v72 = 0x3E8 * (unsigned __int128)(unsigned __int64)v31 + v32 / 0xF4240uLL;
    *(_QWORD *)&v65 = a6[10];
    *(_QWORD *)v74 = &v73;
    *(_QWORD *)&v74[8] = sub_140191200;
    *(_QWORD *)&v74[16] = v72;
    *(_QWORD *)&v74[24] = sub_1416E85A0;
    *(_QWORD *)&v74[32] = &v65;
    *(_QWORD *)&v74[40] = sub_1416EBAE0;
    v81 = 1;
    v80 = 1;
    sub_1416DAFA0(&v52, &unk_141A9B600, v74);
    LOBYTE(v56) = a3;
    v77 = v53;
    v65 = v53;
    *(_QWORD *)v74 = &v56;
    *(_QWORD *)&v74[8] = sub_140ED78B0;
    *(_QWORD *)&v74[16] = &v65;
    *(_QWORD *)&v74[24] = sub_140191200;
    sub_1416DAFA0(v72, &unk_141A9B450, v74);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aDegraded, 8, (__int64)v72);
    if ( v52 )
      sub_140001660(v77, v52, 1);
    v33 = *(_OWORD *)a6;
    v34 = *((_OWORD *)a6 + 1);
    v35 = *((_OWORD *)a6 + 2);
    *(_OWORD *)(a1 + 88) = *((_OWORD *)a6 + 3);
    *(_OWORD *)(a1 + 72) = v35;
    *(_OWORD *)(a1 + 56) = v34;
    *(_OWORD *)(a1 + 40) = v33;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)a6 + 4);
    *(_QWORD *)(a1 + 32) = a6[10];
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
  }
}
