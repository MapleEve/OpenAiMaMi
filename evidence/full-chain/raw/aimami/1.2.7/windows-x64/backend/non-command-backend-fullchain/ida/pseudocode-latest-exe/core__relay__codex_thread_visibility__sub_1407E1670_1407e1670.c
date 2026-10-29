// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407e1670 | successor of pre-update 0x1402399d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.606, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1407E1670(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  unsigned __int8 v8; // bl
  __int64 v9; // rax
  int v10; // ecx
  char *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int128 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rbx
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  void *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int64 v33; // [rsp+30h] [rbp-50h] BYREF
  int v34; // [rsp+38h] [rbp-48h]
  _BYTE v35[112]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v36[36]; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int8 v37; // [rsp+D4h] [rbp+54h]
  _OWORD v38[2]; // [rsp+D5h] [rbp+55h]
  __int64 v39; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v40; // [rsp+100h] [rbp+80h]
  __int64 v41; // [rsp+108h] [rbp+88h]
  __m256i v42; // [rsp+110h] [rbp+90h] BYREF
  __int128 v43; // [rsp+130h] [rbp+B0h]
  _OWORD v44[2]; // [rsp+140h] [rbp+C0h]
  unsigned __int64 v45; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v46; // [rsp+168h] [rbp+E8h]
  __int128 v47; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v48; // [rsp+180h] [rbp+100h]
  _BYTE v49[28]; // [rsp+190h] [rbp+110h] BYREF
  __int64 v50; // [rsp+1B8h] [rbp+138h]
  __int64 v51; // [rsp+1C0h] [rbp+140h]
  _DWORD v52[2]; // [rsp+1C8h] [rbp+148h]
  _BYTE v53[112]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v54; // [rsp+248h] [rbp+1C8h] BYREF
  _BYTE v55[112]; // [rsp+250h] [rbp+1D0h] BYREF
  char v56; // [rsp+2CEh] [rbp+24Eh]
  char v57; // [rsp+2CFh] [rbp+24Fh] BYREF
  __int64 v58; // [rsp+2D0h] [rbp+250h]

  v58 = -2;
  v50 = a3;
  v51 = a2;
  v46 = a1;
  v54 = 4;
  v33 = sub_1416AEBD0();
  v34 = v3;
  *(_QWORD *)&v47 = 0;
  *((_QWORD *)&v47 + 1) = 1;
  v48 = 0;
  v4 = 4;
  v5 = 0;
  v41 = 0;
  while ( 1 )
  {
    if ( v5 >= v4 )
    {
      v15 = sub_1416AED20(&v33);
      *(_OWORD *)v49 = 0x3E8 * (unsigned __int128)(unsigned __int64)v15 + v16 / 0xF4240uLL;
      sub_1407D8200(v36, v51, v50);
      sub_14098D700(v55);
      *(_QWORD *)&v17 = *(_QWORD *)v55;
      *((_QWORD *)&v17 + 1) = *(_QWORD *)&v55[8] + 32LL * *(_QWORD *)&v55[16];
      *(_QWORD *)v55 = *(_QWORD *)&v55[8];
      *(_OWORD *)&v55[16] = v17;
      sub_1401B55B0(v35, v55);
      v20 = *(_QWORD *)&v35[16];
      if ( *(_QWORD *)&v35[16] )
      {
        v21 = *(_QWORD *)&v35[8];
        sub_1406C5480((unsigned int)v55, *(_DWORD *)&v35[8], *(_DWORD *)&v35[16], (unsigned int)&unk_141A4A602, 3);
        *(_QWORD *)&v53[16] = *(_QWORD *)&v55[16];
        *(_OWORD *)v53 = *(_OWORD *)v55;
        *(_QWORD *)v55 = v53;
        *(_QWORD *)&v55[8] = sub_1400015F0;
        sub_1416DAFA0(&v42, &unk_141A4A605, v55);
        if ( *(_QWORD *)v53 )
          sub_140001660(*(_QWORD *)&v53[8], *(_QWORD *)v53, 1);
        v22 = (_QWORD *)(v21 + 8);
        do
        {
          v23 = *(v22 - 1);
          if ( v23 )
            sub_140001660(*v22, v23, 1);
          v22 += 3;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        nullsub_1(v19, v18);
        v24 = (void *)sub_140001650(25, 1);
        if ( !v24 )
          sub_14196B2DB(1, 25);
        qmemcpy(v24, "db holders: none detected", 25);
        v42.m256i_i64[0] = 25;
        v42.m256i_i64[1] = (__int64)v24;
        v42.m256i_i64[2] = 25;
        v21 = *(_QWORD *)&v35[8];
      }
      if ( *(_QWORD *)v35 )
        sub_140001660(v21, 24LL * *(_QWORD *)v35, 8);
      v25 = *(_QWORD *)off_14223FF10;
      if ( (v41 & 1) != 0 )
      {
        if ( v25 >= 2 )
        {
          *(_QWORD *)v53 = v36;
          *(_QWORD *)&v53[8] = sub_1400015F0;
          *(_QWORD *)&v53[16] = &v54;
          *(_QWORD *)&v53[24] = sub_1416EBAE0;
          *(_QWORD *)&v53[32] = v49;
          *(_QWORD *)&v53[40] = sub_1416E85A0;
          *(_QWORD *)&v53[48] = &v47;
          *(_QWORD *)&v53[56] = sub_1400015F0;
          *(_QWORD *)&v53[64] = &v42;
          *(_QWORD *)&v53[72] = sub_1400015F0;
          *(_QWORD *)&v55[48] = 2;
          *(_QWORD *)&v55[56] = aCodexmateLibCo_11;
          *(_QWORD *)&v55[64] = 51;
          *(_QWORD *)&v55[80] = &unk_141A4CCDF;
          *(_QWORD *)&v55[88] = v53;
          *(_QWORD *)v55 = 0;
          *(_QWORD *)&v55[8] = aCodexmateLibCo_11;
          *(_OWORD *)&v55[16] = 0x33u;
          *(_QWORD *)&v55[32] = aSrcCoreRelayCo_0;
          *(_QWORD *)&v55[40] = 41;
          *(_QWORD *)&v55[72] = 0x10E600000001LL;
          sub_141503E20(&v57, v55);
        }
        *(_QWORD *)v55 = v36;
        *(_QWORD *)&v55[8] = sub_1400015F0;
        *(_QWORD *)&v55[16] = &v54;
        *(_QWORD *)&v55[24] = sub_1416EBAE0;
        *(_QWORD *)&v55[32] = v49;
        *(_QWORD *)&v55[40] = sub_1416E85A0;
        *(_QWORD *)&v55[48] = &v47;
        *(_QWORD *)&v55[56] = sub_1400015F0;
        *(_QWORD *)&v55[64] = &v42;
        *(_QWORD *)&v55[72] = sub_1400015F0;
        sub_1416DAFA0(v53, &unk_141A4CD3E, v55);
      }
      else
      {
        if ( v25 >= 2 )
        {
          *(_QWORD *)v53 = v36;
          *(_QWORD *)&v53[8] = sub_1400015F0;
          *(_QWORD *)&v53[16] = &v54;
          *(_QWORD *)&v53[24] = sub_1416EBAE0;
          *(_QWORD *)&v53[32] = v49;
          *(_QWORD *)&v53[40] = sub_1416E85A0;
          *(_QWORD *)&v53[48] = &v47;
          *(_QWORD *)&v53[56] = sub_1400015F0;
          *(_QWORD *)&v53[64] = &v42;
          *(_QWORD *)&v53[72] = sub_1400015F0;
          *(_QWORD *)&v55[48] = 2;
          *(_QWORD *)&v55[56] = aCodexmateLibCo_11;
          *(_QWORD *)&v55[64] = 51;
          *(_QWORD *)&v55[80] = &unk_141A4CC29;
          *(_QWORD *)&v55[88] = v53;
          *(_QWORD *)v55 = 0;
          *(_QWORD *)&v55[8] = aCodexmateLibCo_11;
          *(_OWORD *)&v55[16] = 0x33u;
          *(_QWORD *)&v55[32] = aSrcCoreRelayCo_0;
          *(_QWORD *)&v55[40] = 41;
          *(_QWORD *)&v55[72] = 0x10ED00000001LL;
          sub_141503E20(&v57, v55);
        }
        *(_QWORD *)v55 = v36;
        *(_QWORD *)&v55[8] = sub_1400015F0;
        *(_QWORD *)&v55[16] = &v54;
        *(_QWORD *)&v55[24] = sub_1416EBAE0;
        *(_QWORD *)&v55[32] = v49;
        *(_QWORD *)&v55[40] = sub_1416E85A0;
        *(_QWORD *)&v55[48] = &v47;
        *(_QWORD *)&v55[56] = sub_1400015F0;
        *(_QWORD *)&v55[64] = &v42;
        *(_QWORD *)&v55[72] = sub_1400015F0;
        sub_1416DAFA0(v53, &unk_141A4CC94, v55);
      }
      v26 = v46;
      *(_QWORD *)(v46 + 24) = *(_QWORD *)&v53[16];
      *(_OWORD *)(v26 + 8) = *(_OWORD *)v53;
      *(_QWORD *)v26 = 10;
      *(_BYTE *)(v26 + 104) = -1;
      if ( v42.m256i_i64[0] )
        sub_140001660(v42.m256i_i64[1], v42.m256i_i64[0], 1);
      if ( *(_QWORD *)v36 )
        sub_140001660(*(_QWORD *)&v36[8], *(_QWORD *)v36, 1);
      goto LABEL_47;
    }
    v6 = v5 + 1;
    v45 = v5 + 1;
    sub_1407D83C0(v35, v51, v50, 32770);
    if ( v35[104] == 0xFF )
    {
      v7 = *(_QWORD *)v35;
      *(_OWORD *)&v49[12] = *(_OWORD *)&v35[20];
      *(_OWORD *)v49 = *(_OWORD *)&v35[8];
      v8 = v35[36];
      v42 = *(__m256i *)&v35[37];
      v43 = *(_OWORD *)&v35[69];
      v44[0] = *(_OWORD *)&v35[85];
      *(_DWORD *)((char *)v44 + 15) = *(_DWORD *)&v35[100];
      v52[0] = *(_DWORD *)&v35[105];
      *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)&v35[108];
      goto LABEL_10;
    }
    *(_OWORD *)&v53[96] = *(_OWORD *)&v35[96];
    *(_OWORD *)&v53[80] = *(_OWORD *)&v35[80];
    *(_OWORD *)&v53[64] = *(_OWORD *)&v35[64];
    *(_OWORD *)&v53[48] = *(_OWORD *)&v35[48];
    *(_OWORD *)&v53[32] = *(_OWORD *)&v35[32];
    *(_OWORD *)&v53[16] = *(_OWORD *)&v35[16];
    *(_OWORD *)v53 = *(_OWORD *)v35;
    v56 = 1;
    sub_141431530(v36, v53, aPragmaWalCheck, 28);
    *(_OWORD *)&v55[96] = *(_OWORD *)&v53[96];
    *(_OWORD *)&v55[80] = *(_OWORD *)&v53[80];
    *(_OWORD *)&v55[64] = *(_OWORD *)&v53[64];
    *(_OWORD *)&v55[48] = *(_OWORD *)&v53[48];
    *(_OWORD *)&v55[32] = *(_OWORD *)&v53[32];
    *(_OWORD *)&v55[16] = *(_OWORD *)&v53[16];
    *(_OWORD *)v55 = *(_OWORD *)v53;
    v7 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 == -1 )
      break;
    *(_OWORD *)&v49[12] = *(_OWORD *)&v36[20];
    *(_OWORD *)v49 = *(_OWORD *)&v36[8];
    v8 = v37;
    *(_OWORD *)v42.m256i_i8 = v38[0];
    *(_OWORD *)((char *)&v42.m256i_u64[1] + 3) = *(_OWORD *)((char *)v38 + 11);
    v56 = 0;
    sub_140777BC0(v55);
LABEL_10:
    v9 = -v7;
    if ( !__OFSUB__(-v7, 1)
      || (LOBYTE(v9) = (unsigned __int8)(v8 - 3) < 2u, v41 = v9, (unsigned __int8)(v8 - 3) >= 2u)
      && (v8 > 0xDu || (v10 = 12608, !_bittest(&v10, v8))) )
    {
      *(_QWORD *)v55 = v7;
      *(_OWORD *)&v55[8] = *(_OWORD *)v49;
      *(_OWORD *)&v55[20] = *(_OWORD *)&v49[12];
      v55[36] = v8;
      *(_OWORD *)&v55[37] = *(_OWORD *)v42.m256i_i8;
      *(_OWORD *)&v55[48] = *(_OWORD *)((char *)&v42.m256i_u64[1] + 3);
      *(_QWORD *)v35 = v55;
      *(_QWORD *)&v35[8] = sub_14142D4D0;
      sub_1416DAFA0(v53, &unk_141A4CEA9, v35);
      v14 = v46;
      *(_QWORD *)(v46 + 24) = *(_QWORD *)&v53[16];
      *(_OWORD *)(v14 + 8) = *(_OWORD *)v53;
      *(_QWORD *)v14 = 10;
      *(_BYTE *)(v14 + 104) = -1;
      sub_1407785F0(v55);
LABEL_47:
      v27 = v47;
      if ( !(_QWORD)v47 )
        return v46;
LABEL_48:
      sub_140001660(*((_QWORD *)&v47 + 1), v27, 1);
      return v46;
    }
    *(_QWORD *)v35 = 0x8000000000000000uLL;
    *(_OWORD *)&v35[20] = *(_OWORD *)&v49[12];
    *(_OWORD *)&v35[8] = *(_OWORD *)v49;
    v35[36] = v8;
    *(_OWORD *)&v35[48] = *(_OWORD *)((char *)&v42.m256i_u64[1] + 3);
    *(_OWORD *)&v35[37] = *(_OWORD *)v42.m256i_i8;
    *(_QWORD *)v53 = 0;
    *(_QWORD *)&v53[8] = 1;
    *(_QWORD *)&v53[16] = 0;
    *(_QWORD *)&v55[16] = 1610612768;
    *(_QWORD *)v55 = v53;
    *(_QWORD *)&v55[8] = &off_141A49990;
    if ( (unsigned __int8)sub_14142D4D0(v35, v55) )
      sub_14196B5F0(
        (unsigned int)aADisplayImplem_59,
        55,
        (unsigned int)&v57,
        (unsigned int)&unk_141A481A8,
        (__int64)&off_141A4E498);
    *(_QWORD *)&v36[16] = *(_QWORD *)&v53[16];
    *(_OWORD *)v36 = *(_OWORD *)v53;
    if ( (_QWORD)v47 )
      sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
    v48 = *(_QWORD *)&v36[16];
    v47 = *(_OWORD *)v36;
    if ( v5 >= 3 )
    {
      sub_1407785F0(v35);
    }
    else
    {
      v11 = (char *)&unk_141A4AF20 + 16 * v5;
      v12 = *(_QWORD *)off_14223FF10;
      v13 = *(_QWORD *)v11;
      if ( (unsigned __int8)(v8 - 3) >= 2u )
      {
        if ( v12 >= 2 )
        {
          *(_OWORD *)v36 = 0x3E8 * (unsigned __int128)v13 + *((unsigned int *)v11 + 2) / 0xF4240uLL;
          v39 = v51;
          v40 = v50;
          *(_QWORD *)v53 = &v39;
          *(_QWORD *)&v53[8] = sub_1416CE600;
          *(_QWORD *)&v53[16] = &v45;
          *(_QWORD *)&v53[24] = sub_1416EBAE0;
          *(_QWORD *)&v53[32] = &v54;
          *(_QWORD *)&v53[40] = sub_1416EBAE0;
          *(_QWORD *)&v53[48] = v35;
          *(_QWORD *)&v53[56] = sub_14142D4D0;
          *(_QWORD *)&v53[64] = v36;
          *(_QWORD *)&v53[72] = sub_1416E85A0;
          *(_QWORD *)&v55[48] = 2;
          *(_QWORD *)&v55[56] = aCodexmateLibCo_11;
          *(_QWORD *)&v55[64] = 51;
          *(_QWORD *)&v55[80] = &unk_141A4CDD4;
          *(_QWORD *)&v55[88] = v53;
          *(_QWORD *)v55 = 0;
          *(_QWORD *)&v55[8] = aCodexmateLibCo_11;
          *(_OWORD *)&v55[16] = 0x33u;
          *(_QWORD *)&v55[32] = aSrcCoreRelayCo_0;
          *(_QWORD *)&v55[40] = 41;
          *(_QWORD *)&v55[72] = 0x10D000000001LL;
          sub_141503E20(&v57, v55);
        }
      }
      else if ( v12 >= 2 )
      {
        *(_OWORD *)v36 = 0x3E8 * (unsigned __int128)v13 + *((unsigned int *)v11 + 2) / 0xF4240uLL;
        v39 = v51;
        v40 = v50;
        *(_QWORD *)v53 = &v39;
        *(_QWORD *)&v53[8] = sub_1416CE600;
        *(_QWORD *)&v53[16] = &v45;
        *(_QWORD *)&v53[24] = sub_1416EBAE0;
        *(_QWORD *)&v53[32] = &v54;
        *(_QWORD *)&v53[40] = sub_1416EBAE0;
        *(_QWORD *)&v53[48] = v35;
        *(_QWORD *)&v53[56] = sub_14142D4D0;
        *(_QWORD *)&v53[64] = v36;
        *(_QWORD *)&v53[72] = sub_1416E85A0;
        *(_QWORD *)&v55[48] = 2;
        *(_QWORD *)&v55[56] = aCodexmateLibCo_11;
        *(_QWORD *)&v55[64] = 51;
        *(_QWORD *)&v55[80] = &unk_141A4CE4A;
        *(_QWORD *)&v55[88] = v53;
        *(_QWORD *)v55 = 0;
        *(_QWORD *)&v55[8] = aCodexmateLibCo_11;
        *(_OWORD *)&v55[16] = 0x33u;
        *(_QWORD *)&v55[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v55[40] = 41;
        *(_QWORD *)&v55[72] = 0x10CA00000001LL;
        sub_141503E20(&v57, v55);
      }
      sub_1416C57D0(v13, *((unsigned int *)v11 + 2));
      sub_1407785F0(v35);
    }
    v4 = v54;
    v5 = v6;
  }
  v7 = *(_QWORD *)v53;
  *(_OWORD *)&v49[12] = *(_OWORD *)&v53[20];
  *(_OWORD *)v49 = *(_OWORD *)&v53[8];
  v8 = v53[36];
  *(_DWORD *)((char *)v44 + 15) = *(_DWORD *)&v53[100];
  v44[0] = *(_OWORD *)&v53[85];
  v43 = *(_OWORD *)&v53[69];
  v42 = *(__m256i *)&v53[37];
  *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)&v53[108];
  v52[0] = *(_DWORD *)&v53[105];
  if ( v53[104] == 0xFF )
    goto LABEL_10;
  *(_QWORD *)v55 = *(_QWORD *)v53;
  *(_OWORD *)&v55[8] = *(_OWORD *)v49;
  *(_OWORD *)&v55[20] = *(_OWORD *)&v49[12];
  v55[36] = v53[36];
  *(__m256i *)&v55[37] = v42;
  *(_OWORD *)&v55[69] = v43;
  *(_OWORD *)&v55[85] = v44[0];
  *(_DWORD *)&v55[100] = *(_DWORD *)((char *)v44 + 15);
  v55[104] = v53[104];
  *(_DWORD *)&v55[105] = v52[0];
  *(_DWORD *)&v55[108] = *(_DWORD *)((char *)v52 + 3);
  if ( v45 > 1 && *(_QWORD *)off_14223FF10 >= 3u )
  {
    *(_QWORD *)v36 = v51;
    *(_QWORD *)&v36[8] = v50;
    *(_QWORD *)v35 = v36;
    *(_QWORD *)&v35[8] = sub_1416CE600;
    *(_QWORD *)&v35[16] = &v45;
    *(_QWORD *)&v35[24] = sub_1416EBAE0;
    *(_QWORD *)&v53[48] = 3;
    *(_QWORD *)&v53[56] = aCodexmateLibCo_11;
    *(_QWORD *)&v53[64] = 51;
    *(_QWORD *)&v53[80] = &unk_141A4CD85;
    *(_QWORD *)&v53[88] = v35;
    *(_QWORD *)v53 = 0;
    *(_QWORD *)&v53[8] = aCodexmateLibCo_11;
    *(_OWORD *)&v53[16] = 0x33u;
    *(_QWORD *)&v53[32] = aSrcCoreRelayCo_0;
    *(_QWORD *)&v53[40] = 41;
    *(_QWORD *)&v53[72] = 0x10BB00000001LL;
    sub_141503E20(&v57, v53);
  }
  v29 = v46;
  *(_QWORD *)(v46 + 96) = *(_QWORD *)&v55[96];
  *(_BYTE *)(v29 + 104) = v55[104];
  *(_DWORD *)(v29 + 105) = *(_DWORD *)&v55[105];
  *(_WORD *)(v29 + 109) = *(_WORD *)&v55[109];
  *(_BYTE *)(v29 + 111) = v55[111];
  *(_OWORD *)(v29 + 80) = *(_OWORD *)&v55[80];
  *(_OWORD *)(v29 + 64) = *(_OWORD *)&v55[64];
  v30 = *(_OWORD *)v55;
  v31 = *(_OWORD *)&v55[16];
  v32 = *(_OWORD *)&v55[32];
  *(_OWORD *)(v29 + 48) = *(_OWORD *)&v55[48];
  *(_OWORD *)(v29 + 32) = v32;
  *(_OWORD *)(v29 + 16) = v31;
  *(_OWORD *)v29 = v30;
  v27 = v47;
  if ( (_QWORD)v47 )
    goto LABEL_48;
  return v46;
}
