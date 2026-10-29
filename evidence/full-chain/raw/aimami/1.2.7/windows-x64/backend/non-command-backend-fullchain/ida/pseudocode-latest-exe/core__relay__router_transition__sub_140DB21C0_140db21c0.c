// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x140db21c0 | successor of pre-update 0x140bbe9e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.747, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_140DB21C0(
        __int64 a1,
        __int64 a2,
        __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        char *a8,
        _OWORD *a9)
{
  int v9; // r15d
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
  __int64 (__fastcall *v33)(unsigned __int64); // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rcx
  _QWORD v43[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v44; // [rsp+60h] [rbp-20h] BYREF
  int v45; // [rsp+68h] [rbp-18h]
  _BYTE v46[384]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v47; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v48; // [rsp+1F8h] [rbp+178h]
  __int64 v49; // [rsp+208h] [rbp+188h] BYREF
  __int128 v50; // [rsp+210h] [rbp+190h]
  __m256i v51; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v52; // [rsp+240h] [rbp+1C0h]
  __int128 v53; // [rsp+250h] [rbp+1D0h]
  __int128 v54; // [rsp+260h] [rbp+1E0h]
  __int128 v55; // [rsp+270h] [rbp+1F0h]
  __int64 v56; // [rsp+288h] [rbp+208h]
  __m256i v57; // [rsp+290h] [rbp+210h] BYREF
  __int128 v58; // [rsp+2B0h] [rbp+230h]
  __int128 v59; // [rsp+2C0h] [rbp+240h]
  __int128 v60; // [rsp+2D0h] [rbp+250h]
  __int128 v61; // [rsp+2E0h] [rbp+260h]
  _BYTE v62[96]; // [rsp+2F0h] [rbp+270h] BYREF
  _BYTE v63[24]; // [rsp+358h] [rbp+2D8h] BYREF
  __int128 v64; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v65; // [rsp+380h] [rbp+300h]
  __int8 v66; // [rsp+38Fh] [rbp+30Fh] BYREF
  unsigned __int64 v67; // [rsp+390h] [rbp+310h]
  char v68; // [rsp+39Ch] [rbp+31Ch] BYREF
  char v69; // [rsp+39Dh] [rbp+31Dh]
  char v70; // [rsp+39Eh] [rbp+31Eh]
  char v71; // [rsp+39Fh] [rbp+31Fh]
  __int64 v72; // [rsp+3A0h] [rbp+320h]

  v72 = -2;
  v9 = a4;
  *(_QWORD *)&v64 = a4;
  *((_QWORD *)&v64 + 1) = a5;
  v71 = 1;
  v70 = 1;
  v44 = sub_1416AEBD0();
  v45 = v13;
  v71 = 1;
  v70 = 1;
  sub_1407D5A90((unsigned int)v62, a2, a3, v9, a5);
  if ( *(_DWORD *)v62 != -1 )
  {
    v55 = *(_OWORD *)&v62[80];
    v54 = *(_OWORD *)&v62[64];
    v53 = *(_OWORD *)&v62[48];
    v52 = *(_OWORD *)&v62[32];
    v51 = *(__m256i *)v62;
LABEL_7:
    v61 = v55;
    v60 = v54;
    v59 = v53;
    v58 = v52;
    v57 = v51;
    v17 = v64;
    *(_QWORD *)v62 = 0;
    *(_QWORD *)&v62[8] = 1;
    *(_QWORD *)&v62[16] = 0;
    *(_QWORD *)&v46[16] = 1610612768;
    *(_QWORD *)v46 = v62;
    *(_QWORD *)&v46[8] = &off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(&v57, v46) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v68,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v65 = *(_QWORD *)&v62[8];
    v67 = *(_QWORD *)v62;
    sub_1407D2B10(
      (unsigned int)v46,
      a2,
      a3,
      (unsigned int)aCommitFailed,
      13,
      v17,
      *((__int64 *)&v17 + 1),
      *(__int64 *)&v62[8],
      *(__int64 *)&v62[16],
      0);
    if ( *(_QWORD *)v46 == -1 )
    {
      sub_1407B9160(*(_QWORD *)&v46[8]);
    }
    else
    {
      *(_QWORD *)&v62[88] = *(_QWORD *)&v46[88];
      *(_OWORD *)&v62[72] = *(_OWORD *)&v46[72];
      *(_OWORD *)&v62[56] = *(_OWORD *)&v46[56];
      *(_OWORD *)&v62[40] = *(_OWORD *)&v46[40];
      *(_OWORD *)&v62[24] = *(_OWORD *)&v46[24];
      *(_OWORD *)&v62[8] = *(_OWORD *)&v46[8];
      *(_QWORD *)v62 = *(_QWORD *)v46;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        *(_QWORD *)v63 = v62;
        *(_QWORD *)&v63[8] = sub_140D76130;
        *(_QWORD *)&v46[48] = 2;
        *(_QWORD *)&v46[56] = aCodexmateLibCo_49;
        *(_QWORD *)&v46[64] = 45;
        *(_QWORD *)&v46[80] = &unk_141AA1920;
        *(_QWORD *)&v46[88] = v63;
        *(_QWORD *)v46 = 0;
        *(_QWORD *)&v46[8] = aCodexmateLibCo_49;
        *(_OWORD *)&v46[16] = 0x2Du;
        *(_QWORD *)&v46[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v46[40] = 35;
        *(_QWORD *)&v46[72] = 0x22E00000001LL;
        sub_141503E20(&v68, v46);
      }
      sub_140D8A3A0(v62);
    }
    if ( v67 )
      sub_140001660(v65, v67, 1);
    *(_QWORD *)v46 = &v64;
    *(_QWORD *)&v46[8] = sub_140191200;
    *(_QWORD *)&v46[16] = &v57;
    *(_QWORD *)&v46[24] = sub_140D76130;
    sub_1416DAFA0(v63, &unk_141A9B651, v46);
    v66 = a3;
    v67 = *(_QWORD *)&v63[8];
    v43[0] = *(_QWORD *)&v63[8];
    v43[1] = *(_QWORD *)&v63[16];
    *(_QWORD *)v46 = &v66;
    *(_QWORD *)&v46[8] = sub_140ED78B0;
    *(_QWORD *)&v46[16] = v43;
    *(_QWORD *)&v46[24] = sub_140191200;
    sub_1416DAFA0(v62, &unk_141A9B450, v46);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitFailed, 13, (__int64)v62);
    if ( *(_QWORD *)v63 )
      sub_140001660(v67, *(_QWORD *)v63, 1);
    v18 = *(_OWORD *)v57.m256i_i8;
    v19 = v58;
    v20 = v59;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v57.m256i_u64[2];
    *(_OWORD *)(a1 + 40) = v19;
    *(_OWORD *)(a1 + 56) = v20;
    *(_OWORD *)(a1 + 72) = v60;
    *(_OWORD *)(a1 + 88) = v61;
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = -1;
    sub_1401B0D60(a6 + 8);
    if ( *(_DWORD *)a6 != 2 )
      sub_140D8A7D0(a6);
    v21 = a6[19];
    if ( v21 )
    {
      v22 = (_QWORD *)(a6[18] + 8);
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
    v24 = a6[17];
    if ( v24 )
      sub_140001660(a6[18], 24 * v24, 8);
    return;
  }
  v57.m256i_i64[0] = (__int64)a6;
  *(_OWORD *)&v57.m256i_u64[1] = *a9;
  v14 = *a6;
  if ( *a6 == 2 )
  {
    v71 = 1;
    v70 = 1;
    sub_140EB7850(v46, a7);
    *(_OWORD *)&v63[1] = *a9;
    v63[0] = 1;
    v71 = 1;
    v70 = 1;
    sub_140E9F030(&v51, a7, v46, v63);
  }
  else
  {
    v15 = *((unsigned __int8 *)a6 + 56);
    v16 = *a8;
    v71 = 1;
    v70 = 1;
    sub_140EA2DA0((unsigned int)&v51, a7, v14, v15, v16, (__int64)&v57.m256i_i64[1]);
  }
  if ( v51.m256i_i64[0] != -1 )
    goto LABEL_7;
  v71 = 1;
  v70 = 1;
  v25 = sub_1407B92D0(v51.m256i_i64[1]);
  if ( v25 )
  {
    v28 = v25 & 3;
    v67 = v25;
    switch ( v25 & 3 )
    {
      case 0uLL:
        LOBYTE(v25) = *(_BYTE *)(v25 + 16);
        break;
      case 1uLL:
        LOBYTE(v25) = *(_BYTE *)(v25 + 31);
        break;
      case 2uLL:
        v69 = 1;
        v33 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v27, v26) + 8);
        v69 = 1;
        LOBYTE(v25) = v33(HIDWORD(v67));
        break;
      case 3uLL:
        v25 >>= 32;
        break;
    }
    v62[0] = v25;
    *(_QWORD *)v46 = v62;
    *(_QWORD *)&v46[8] = sub_140EDB0F0;
    v69 = 1;
    sub_1416DAFA0(&v49, &unk_141A9B46E, v46);
    v51.m256i_i8[0] = a3;
    v65 = v50;
    *(_OWORD *)v57.m256i_i8 = v50;
    *(_QWORD *)v46 = &v51;
    *(_QWORD *)&v46[8] = sub_140ED78B0;
    *(_QWORD *)&v46[16] = &v57;
    *(_QWORD *)&v46[24] = sub_140191200;
    sub_1416DAFA0(v62, &unk_141A9B450, v46);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aCommitSyncUnco, 23, (__int64)v62);
    if ( v49 )
      sub_140001660(v65, v49, 1);
    v34 = *(_QWORD *)(a2 + 776);
    v35 = *(_QWORD *)(a2 + 784);
    v69 = 1;
    sub_1407D3B80(
      v34,
      v35,
      a3,
      (unsigned int)&unk_141A4A03B,
      23,
      v64,
      *((__int64 *)&v64 + 1),
      (__int64)&unk_141A4A42A,
      28);
    v51.m256i_i64[2] = a6[19];
    *(_OWORD *)v51.m256i_i8 = *(_OWORD *)(a6 + 17);
    nullsub_1(a6, v36);
    v37 = sub_140001650(170, 1);
    if ( !v37 )
      sub_14196B2DB(1, 170);
    v38 = v37;
    sub_1419234B0(v37, aRouterCommitRe, 170);
    *(_QWORD *)&v46[8] = 170;
    *(_QWORD *)&v46[16] = v38;
    *(_QWORD *)&v46[24] = 170;
    *(_QWORD *)v46 = 10;
    v57.m256i_i64[0] = 0;
    *(_OWORD *)&v57.m256i_u64[1] = 1u;
    *(_QWORD *)&v62[16] = 1610612768;
    *(_QWORD *)v62 = &v57;
    *(_QWORD *)&v62[8] = &off_141AA1A90;
    if ( (unsigned __int8)sub_140D76130(v46, v62) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_11,
        55,
        (unsigned int)&v68,
        (unsigned int)&unk_141A9F540,
        (__int64)&off_141AA1B48);
    v56 = v57.m256i_i64[1];
    v65 = v57.m256i_i64[0];
    v39 = v57.m256i_i64[2];
    v40 = v51.m256i_i64[2];
    if ( v51.m256i_i64[2] == v51.m256i_i64[0] )
      sub_141939F90(&v51);
    v41 = v51.m256i_i64[1];
    v42 = 3 * v40;
    *(_QWORD *)(v51.m256i_i64[1] + 8 * v42) = v65;
    *(_QWORD *)(v41 + 8 * v42 + 8) = v56;
    *(_QWORD *)(v41 + 8 * v42 + 16) = v39;
    v51.m256i_i64[2] = v40 + 1;
    sub_140D8A3A0(v46);
    sub_1419234B0(a1 + 32, a6, 136);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v51.m256i_i8;
    *(_QWORD *)(a1 + 24) = v51.m256i_i64[2];
    *(_QWORD *)a1 = 2;
    if ( (unsigned int)(v28 - 2) >= 2 && v28 )
    {
      *(_QWORD *)&v46[8] = v67 - 1;
      v46[0] = 3;
      v71 = 0;
      v70 = 0;
      sub_1416EBAD0(&v46[8]);
    }
  }
  else
  {
    v29 = a6[18];
    v30 = a6[19];
    v71 = 1;
    v70 = 1;
    sub_1406C5480((unsigned int)v46, v29, v30, (unsigned int)&unk_141A9B28E, 3);
    v65 = *(_QWORD *)&v46[8];
    v67 = *(_QWORD *)v46;
    sub_1407D7100((unsigned int)v62, a2, a3, v64, *((__int64 *)&v64 + 1), *(__int64 *)&v46[8], *(__int64 *)&v46[16]);
    if ( *(_DWORD *)v62 != -1 )
    {
      *(_OWORD *)&v46[80] = *(_OWORD *)&v62[80];
      *(_OWORD *)&v46[64] = *(_OWORD *)&v62[64];
      *(_OWORD *)&v46[48] = *(_OWORD *)&v62[48];
      *(_OWORD *)&v46[32] = *(_OWORD *)&v62[32];
      *(_OWORD *)&v46[16] = *(_OWORD *)&v62[16];
      *(_OWORD *)v46 = *(_OWORD *)v62;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v51.m256i_i64[0] = (__int64)v46;
        v51.m256i_i64[1] = (__int64)sub_140D76130;
        v57.m256i_i64[0] = (__int64)aCodexmateLibCo_49;
        v57.m256i_i64[1] = 45;
        v57.m256i_i64[2] = (__int64)aCodexmateLibCo_49;
        v57.m256i_i64[3] = 45;
        *(_QWORD *)&v58 = &off_141A9B5E8;
        sub_140AF72B0(&unk_141A9B5A6, &v51, 2, &v57);
      }
      sub_140D8A3A0(v46);
    }
    if ( v67 )
      sub_140001660(v65, v67, 1);
    v71 = 1;
    v70 = 1;
    v31 = sub_1416AED20(&v44);
    *(_OWORD *)v62 = 0x3E8 * (unsigned __int128)(unsigned __int64)v31 + v32 / 0xF4240uLL;
    v57.m256i_i64[0] = a6[19];
    *(_QWORD *)v46 = &v64;
    *(_QWORD *)&v46[8] = sub_140191200;
    *(_QWORD *)&v46[16] = v62;
    *(_QWORD *)&v46[24] = sub_1416E85A0;
    *(_QWORD *)&v46[32] = &v57;
    *(_QWORD *)&v46[40] = sub_1416EBAE0;
    v71 = 1;
    v70 = 1;
    sub_1416DAFA0(&v47, &unk_141A9B600, v46);
    v51.m256i_i8[0] = a3;
    v67 = v48;
    *(_OWORD *)v57.m256i_i8 = v48;
    *(_QWORD *)v46 = &v51;
    *(_QWORD *)&v46[8] = sub_140ED78B0;
    *(_QWORD *)&v46[16] = &v57;
    *(_QWORD *)&v46[24] = sub_140191200;
    sub_1416DAFA0(v62, &unk_141A9B450, v46);
    sub_1406C9730((unsigned int)aRouterTransiti_1, 17, (unsigned int)aDegraded, 8, (__int64)v62);
    if ( v47 )
      sub_140001660(v67, v47, 1);
    sub_1419234B0(a1 + 32, a6, 136);
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a6 + 17);
    *(_QWORD *)(a1 + 24) = a6[19];
    *(_QWORD *)a1 = 2;
  }
}
