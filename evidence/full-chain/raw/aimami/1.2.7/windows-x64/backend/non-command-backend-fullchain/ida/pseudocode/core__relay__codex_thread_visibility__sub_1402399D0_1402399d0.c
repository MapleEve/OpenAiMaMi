// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x1402399d0 | name sub_1402399D0
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402399D0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int8 v8; // r12
  __int64 v9; // rax
  int v10; // ecx
  char *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int128 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rsi
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  void *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  int v32; // [rsp+38h] [rbp-48h]
  _OWORD v33[2]; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+68h] [rbp-18h]
  _BYTE v35[28]; // [rsp+70h] [rbp-10h]
  _BYTE v36[36]; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int8 v37; // [rsp+B4h] [rbp+34h]
  _BYTE v38[27]; // [rsp+B5h] [rbp+35h]
  __m256i v39; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v40; // [rsp+F0h] [rbp+70h]
  _OWORD v41[2]; // [rsp+100h] [rbp+80h]
  unsigned __int64 v42; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v43; // [rsp+128h] [rbp+A8h]
  __int128 v44; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v45; // [rsp+140h] [rbp+C0h]
  _BYTE v46[67]; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v47; // [rsp+1A0h] [rbp+120h]
  __int64 v48; // [rsp+1A8h] [rbp+128h]
  _BYTE v49[28]; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v50[112]; // [rsp+1D0h] [rbp+150h] BYREF
  _DWORD v51[2]; // [rsp+248h] [rbp+1C8h]
  _DWORD v52[2]; // [rsp+250h] [rbp+1D0h]
  __int64 v53; // [rsp+258h] [rbp+1D8h] BYREF
  _BYTE v54[112]; // [rsp+260h] [rbp+1E0h] BYREF
  char v55; // [rsp+2DEh] [rbp+25Eh]
  char v56; // [rsp+2DFh] [rbp+25Fh] BYREF
  __int64 v57; // [rsp+2E0h] [rbp+260h]

  v57 = -2;
  v47 = a3;
  v48 = a2;
  v43 = a1;
  v53 = 4;
  v31 = sub_14167FC00();
  v32 = v3;
  *(_QWORD *)&v44 = 0;
  *((_QWORD *)&v44 + 1) = 1;
  v45 = 0;
  v4 = 4;
  v5 = 0;
  v34 = 0;
  while ( v5 < v4 )
  {
    v6 = v5 + 1;
    v42 = v5 + 1;
    sub_140189230(v54, v48, v47, 32770);
    v7 = *(_QWORD *)v54;
    *(_OWORD *)v36 = *(_OWORD *)&v54[8];
    *(_OWORD *)&v36[12] = *(_OWORD *)&v54[20];
    v8 = v54[36];
    v33[0] = *(_OWORD *)&v54[37];
    *(_OWORD *)((char *)v33 + 11) = *(_OWORD *)&v54[48];
    if ( v54[104] == 0xFF )
    {
      *(_OWORD *)v49 = *(_OWORD *)v36;
      *(_OWORD *)&v49[12] = *(_OWORD *)&v36[12];
      *(_OWORD *)v46 = v33[0];
      *(_OWORD *)&v46[11] = *(_OWORD *)((char *)v33 + 11);
      goto LABEL_9;
    }
    *(_QWORD *)&v50[96] = *(_QWORD *)&v54[96];
    *(_OWORD *)&v50[80] = *(_OWORD *)&v54[80];
    *(_OWORD *)&v50[64] = *(_OWORD *)&v54[64];
    *(_DWORD *)&v50[108] = *(_DWORD *)&v54[108];
    *(_DWORD *)&v50[105] = *(_DWORD *)&v54[105];
    *(_QWORD *)v50 = *(_QWORD *)v54;
    *(_OWORD *)&v50[20] = *(_OWORD *)&v36[12];
    *(_OWORD *)&v50[8] = *(_OWORD *)v36;
    v50[36] = v54[36];
    *(_OWORD *)&v50[48] = *(_OWORD *)((char *)v33 + 11);
    *(_OWORD *)&v50[37] = v33[0];
    v50[104] = v54[104];
    sub_141403910(v54, v50, 5, 0);
    v7 = *(_QWORD *)v54;
    if ( *(_QWORD *)v54 != -1 )
    {
      *(_OWORD *)&v49[12] = *(_OWORD *)&v54[20];
      *(_OWORD *)v49 = *(_OWORD *)&v54[8];
      v8 = v54[36];
      *(_OWORD *)v46 = *(_OWORD *)&v54[37];
      *(_OWORD *)&v46[11] = *(_OWORD *)&v54[48];
      sub_1401923E0(v50);
LABEL_9:
      *(_OWORD *)&v35[12] = *(_OWORD *)&v49[12];
      *(_OWORD *)v35 = *(_OWORD *)v49;
      v39 = *(__m256i *)v46;
      v40 = *(_OWORD *)&v46[32];
      v41[0] = *(_OWORD *)&v46[48];
      *(_DWORD *)((char *)v41 + 15) = *(_DWORD *)&v46[63];
      v52[0] = v51[0];
      *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)((char *)v51 + 3);
      goto LABEL_10;
    }
    v7 = *(_QWORD *)v50;
    *(_OWORD *)&v49[12] = *(_OWORD *)&v50[20];
    *(_OWORD *)v49 = *(_OWORD *)&v50[8];
    v8 = v50[36];
    *(_DWORD *)&v46[63] = *(_DWORD *)&v50[100];
    *(_OWORD *)&v46[48] = *(_OWORD *)&v50[85];
    *(_OWORD *)&v46[32] = *(_OWORD *)&v50[69];
    *(_OWORD *)&v46[16] = *(_OWORD *)&v50[53];
    *(_OWORD *)v46 = *(_OWORD *)&v50[37];
    *(_DWORD *)((char *)v51 + 3) = *(_DWORD *)&v50[108];
    v51[0] = *(_DWORD *)&v50[105];
    if ( v50[104] == 0xFF )
      goto LABEL_9;
    *(_OWORD *)&v50[20] = *(_OWORD *)&v49[12];
    *(_OWORD *)&v50[8] = *(_OWORD *)v49;
    *(_DWORD *)&v50[100] = *(_DWORD *)&v46[63];
    *(_OWORD *)&v50[85] = *(_OWORD *)&v46[48];
    *(_OWORD *)&v50[69] = *(_OWORD *)&v46[32];
    *(_OWORD *)&v50[53] = *(_OWORD *)&v46[16];
    *(_OWORD *)&v50[37] = *(_OWORD *)v46;
    *(_DWORD *)&v50[108] = *(_DWORD *)((char *)v51 + 3);
    *(_DWORD *)&v50[105] = v51[0];
    v55 = 1;
    sub_1414039F0(v36, v50, aPragmaWalCheck, 28);
    *(_OWORD *)&v54[96] = *(_OWORD *)&v50[96];
    *(_OWORD *)&v54[80] = *(_OWORD *)&v50[80];
    *(_OWORD *)&v54[64] = *(_OWORD *)&v50[64];
    *(_OWORD *)&v54[48] = *(_OWORD *)&v50[48];
    *(_OWORD *)&v54[32] = *(_OWORD *)&v50[32];
    *(_OWORD *)&v54[16] = *(_OWORD *)&v50[16];
    *(_OWORD *)v54 = *(_OWORD *)v50;
    v7 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 == -1 )
    {
      v7 = *(_QWORD *)v50;
      *(_OWORD *)&v35[12] = *(_OWORD *)&v50[20];
      *(_OWORD *)v35 = *(_OWORD *)&v50[8];
      v8 = v50[36];
      *(_DWORD *)((char *)v41 + 15) = *(_DWORD *)&v50[100];
      v41[0] = *(_OWORD *)&v50[85];
      v40 = *(_OWORD *)&v50[69];
      v39 = *(__m256i *)&v50[37];
      *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)&v50[108];
      v52[0] = *(_DWORD *)&v50[105];
      if ( v50[104] != 0xFF )
      {
        *(_QWORD *)v54 = *(_QWORD *)v50;
        *(_OWORD *)&v54[8] = *(_OWORD *)v35;
        *(_OWORD *)&v54[20] = *(_OWORD *)&v35[12];
        v54[36] = v50[36];
        *(__m256i *)&v54[37] = v39;
        *(_OWORD *)&v54[69] = v40;
        *(_OWORD *)&v54[85] = v41[0];
        *(_DWORD *)&v54[100] = *(_DWORD *)((char *)v41 + 15);
        v54[104] = v50[104];
        *(_DWORD *)&v54[105] = v52[0];
        *(_DWORD *)&v54[108] = *(_DWORD *)((char *)v52 + 3);
        if ( v42 > 1 && *(_QWORD *)off_1421E6EC0 >= 3u )
        {
          *(_QWORD *)v36 = v48;
          *(_QWORD *)&v36[8] = v47;
          *(_QWORD *)v46 = v36;
          *(_QWORD *)&v46[8] = sub_14169F630;
          *(_QWORD *)&v46[16] = &v42;
          *(_QWORD *)&v46[24] = sub_1416BCB10;
          *(_QWORD *)v50 = aCodexmateLibCo_0;
          *(_QWORD *)&v50[8] = 51;
          *(_QWORD *)&v50[16] = aCodexmateLibCo_0;
          *(_QWORD *)&v50[24] = 51;
          *(_QWORD *)&v50[32] = &off_1419E0A38;
          sub_140BAD520(&unk_1419E09E4, v46, 3, v50);
        }
        v14 = v43;
        *(_QWORD *)(v43 + 96) = *(_QWORD *)&v54[96];
        *(_BYTE *)(v14 + 104) = v54[104];
        *(_DWORD *)(v14 + 105) = *(_DWORD *)&v54[105];
        *(_WORD *)(v14 + 109) = *(_WORD *)&v54[109];
        *(_BYTE *)(v14 + 111) = v54[111];
        *(_OWORD *)(v14 + 80) = *(_OWORD *)&v54[80];
        *(_OWORD *)(v14 + 64) = *(_OWORD *)&v54[64];
        v15 = *(_OWORD *)v54;
        v16 = *(_OWORD *)&v54[16];
        v17 = *(_OWORD *)&v54[32];
        *(_OWORD *)(v14 + 48) = *(_OWORD *)&v54[48];
        *(_OWORD *)(v14 + 32) = v17;
        *(_OWORD *)(v14 + 16) = v16;
        *(_OWORD *)v14 = v15;
        goto LABEL_55;
      }
    }
    else
    {
      *(_OWORD *)&v35[12] = *(_OWORD *)&v36[20];
      *(_OWORD *)v35 = *(_OWORD *)&v36[8];
      v8 = v37;
      *(_OWORD *)v39.m256i_i8 = *(_OWORD *)v38;
      *(_OWORD *)((char *)&v39.m256i_u64[1] + 3) = *(_OWORD *)&v38[11];
      v55 = 0;
      sub_1401923E0(v54);
    }
LABEL_10:
    v9 = -v7;
    if ( !__OFSUB__(-v7, 1)
      || (LOBYTE(v9) = (unsigned __int8)(v8 - 3) < 2u, v34 = v9, (unsigned __int8)(v8 - 3) >= 2u)
      && (v8 > 0xDu || (v10 = 12608, !_bittest(&v10, v8))) )
    {
      *(_QWORD *)v54 = v7;
      *(_OWORD *)&v54[8] = *(_OWORD *)v35;
      *(_OWORD *)&v54[20] = *(_OWORD *)&v35[12];
      v54[36] = v8;
      *(_OWORD *)&v54[37] = *(_OWORD *)v39.m256i_i8;
      *(_OWORD *)&v54[48] = *(_OWORD *)((char *)&v39.m256i_u64[1] + 3);
      *(_QWORD *)v46 = v54;
      *(_QWORD *)&v46[8] = sub_141404740;
      sub_1416ABFD0(v50, &unk_1419E0B25, v46);
      v18 = v43;
      *(_QWORD *)(v43 + 24) = *(_QWORD *)&v50[16];
      *(_OWORD *)(v18 + 8) = *(_OWORD *)v50;
      *(_QWORD *)v18 = 10;
      *(_BYTE *)(v18 + 104) = -1;
      sub_140193AA0(v54);
      goto LABEL_55;
    }
    *(_QWORD *)v46 = 0x8000000000000000uLL;
    *(_OWORD *)&v46[20] = *(_OWORD *)&v35[12];
    *(_OWORD *)&v46[8] = *(_OWORD *)v35;
    v46[36] = v8;
    *(_OWORD *)&v46[48] = *(_OWORD *)((char *)&v39.m256i_u64[1] + 3);
    *(_OWORD *)&v46[37] = *(_OWORD *)v39.m256i_i8;
    *(_QWORD *)v50 = 0;
    *(_QWORD *)&v50[8] = 1;
    *(_QWORD *)&v50[16] = 0;
    *(_QWORD *)&v54[16] = 1610612768;
    *(_QWORD *)v54 = v50;
    *(_QWORD *)&v54[8] = &off_1419E0B60;
    if ( (unsigned __int8)sub_141404740(v46, v54) )
      sub_141939040(
        (unsigned int)aADisplayImplem_53,
        55,
        (unsigned int)&v56,
        (unsigned int)&unk_1419D7FE8,
        (__int64)&off_1419E29A8);
    *(_QWORD *)&v36[16] = *(_QWORD *)&v50[16];
    *(_OWORD *)v36 = *(_OWORD *)v50;
    if ( (_QWORD)v44 )
      sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
    v45 = *(_QWORD *)&v36[16];
    v44 = *(_OWORD *)v36;
    if ( v5 >= 3 )
    {
      sub_140193AA0(v46);
    }
    else
    {
      v11 = (char *)&unk_1419DEBE8 + 16 * v5;
      v12 = *(_QWORD *)off_1421E6EC0;
      v13 = *(_QWORD *)v11;
      if ( (unsigned __int8)(v8 - 3) >= 2u )
      {
        if ( v12 >= 2 )
        {
          *(_OWORD *)v36 = 0x3E8 * (unsigned __int128)v13 + *((unsigned int *)v11 + 2) / 0xF4240uLL;
          *(_QWORD *)v49 = v48;
          *(_QWORD *)&v49[8] = v47;
          *(_QWORD *)v50 = v49;
          *(_QWORD *)&v50[8] = sub_14169F630;
          *(_QWORD *)&v50[16] = &v42;
          *(_QWORD *)&v50[24] = sub_1416BCB10;
          *(_QWORD *)&v50[32] = &v53;
          *(_QWORD *)&v50[40] = sub_1416BCB10;
          *(_QWORD *)&v50[48] = v46;
          *(_QWORD *)&v50[56] = sub_141404740;
          *(_QWORD *)&v50[64] = v36;
          *(_QWORD *)&v50[72] = sub_1416B95D0;
          *(_QWORD *)&v54[48] = 2;
          *(_QWORD *)&v54[56] = aCodexmateLibCo_0;
          *(_QWORD *)&v54[64] = 51;
          *(_QWORD *)&v54[80] = &unk_1419E0A50;
          *(_QWORD *)&v54[88] = v50;
          *(_QWORD *)v54 = 0;
          *(_QWORD *)&v54[8] = aCodexmateLibCo_0;
          *(_OWORD *)&v54[16] = 0x33u;
          *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0;
          *(_QWORD *)&v54[40] = 41;
          *(_QWORD *)&v54[72] = 0x10D000000001LL;
          sub_1414D53A0(&v56, v54);
        }
      }
      else if ( v12 >= 2 )
      {
        *(_OWORD *)v36 = 0x3E8 * (unsigned __int128)v13 + *((unsigned int *)v11 + 2) / 0xF4240uLL;
        *(_QWORD *)v49 = v48;
        *(_QWORD *)&v49[8] = v47;
        *(_QWORD *)v50 = v49;
        *(_QWORD *)&v50[8] = sub_14169F630;
        *(_QWORD *)&v50[16] = &v42;
        *(_QWORD *)&v50[24] = sub_1416BCB10;
        *(_QWORD *)&v50[32] = &v53;
        *(_QWORD *)&v50[40] = sub_1416BCB10;
        *(_QWORD *)&v50[48] = v46;
        *(_QWORD *)&v50[56] = sub_141404740;
        *(_QWORD *)&v50[64] = v36;
        *(_QWORD *)&v50[72] = sub_1416B95D0;
        *(_QWORD *)&v54[48] = 2;
        *(_QWORD *)&v54[56] = aCodexmateLibCo_0;
        *(_QWORD *)&v54[64] = 51;
        *(_QWORD *)&v54[80] = &unk_1419E0AC6;
        *(_QWORD *)&v54[88] = v50;
        *(_QWORD *)v54 = 0;
        *(_QWORD *)&v54[8] = aCodexmateLibCo_0;
        *(_OWORD *)&v54[16] = 0x33u;
        *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0;
        *(_QWORD *)&v54[40] = 41;
        *(_QWORD *)&v54[72] = 0x10CA00000001LL;
        sub_1414D53A0(&v56, v54);
      }
      sub_141696800(v13, *((unsigned int *)v11 + 2));
      sub_140193AA0(v46);
    }
    v4 = v53;
    v5 = v6;
  }
  v19 = sub_14167FD50(&v31);
  *(_OWORD *)v49 = 0x3E8 * (unsigned __int128)(unsigned __int64)v19 + v20 / 0xF4240uLL;
  sub_140230350(v36, v48, v47);
  sub_140EEDA50(v54);
  *(_QWORD *)&v21 = *(_QWORD *)v54;
  *((_QWORD *)&v21 + 1) = *(_QWORD *)&v54[8] + 32LL * *(_QWORD *)&v54[16];
  *(_QWORD *)v54 = *(_QWORD *)&v54[8];
  *(_OWORD *)&v54[16] = v21;
  sub_140390580(v46, v54);
  v23 = *(_QWORD *)&v46[16];
  if ( *(_QWORD *)&v46[16] )
  {
    v24 = *(_QWORD *)&v46[8];
    sub_140D1EE10((unsigned int)v54, *(_DWORD *)&v46[8], *(_DWORD *)&v46[16], (unsigned int)&unk_1419D98E5, 3);
    *(_QWORD *)&v50[16] = *(_QWORD *)&v54[16];
    *(_OWORD *)v50 = *(_OWORD *)v54;
    *(_QWORD *)v54 = v50;
    *(_QWORD *)&v54[8] = sub_1400015F0;
    sub_1416ABFD0(&v39, &unk_1419DE2E8, v54);
    if ( *(_QWORD *)v50 )
      sub_140001660(*(_QWORD *)&v50[8], *(_QWORD *)v50, 1);
    v25 = (_QWORD *)(v24 + 8);
    do
    {
      v26 = *(v25 - 1);
      if ( v26 )
        sub_140001660(*v25, v26, 1);
      v25 += 3;
      --v23;
    }
    while ( v23 );
  }
  else
  {
    nullsub_1(v22);
    v27 = (void *)sub_140001650(25, 1);
    if ( !v27 )
      sub_141938D2B(1, 25);
    qmemcpy(v27, "db holders: none detected", 25);
    v39.m256i_i64[0] = 25;
    v39.m256i_i64[1] = (__int64)v27;
    v39.m256i_i64[2] = 25;
    v24 = *(_QWORD *)&v46[8];
  }
  if ( *(_QWORD *)v46 )
    sub_140001660(v24, 24LL * *(_QWORD *)v46, 8);
  v28 = *(_QWORD *)off_1421E6EC0;
  if ( (v34 & 1) != 0 )
  {
    if ( v28 >= 2 )
    {
      *(_QWORD *)v50 = v36;
      *(_QWORD *)&v50[8] = sub_1400015F0;
      *(_QWORD *)&v50[16] = &v53;
      *(_QWORD *)&v50[24] = sub_1416BCB10;
      *(_QWORD *)&v50[32] = v49;
      *(_QWORD *)&v50[40] = sub_1416B95D0;
      *(_QWORD *)&v50[48] = &v44;
      *(_QWORD *)&v50[56] = sub_1400015F0;
      *(_QWORD *)&v50[64] = &v39;
      *(_QWORD *)&v50[72] = sub_1400015F0;
      *(_QWORD *)&v54[48] = 2;
      *(_QWORD *)&v54[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v54[64] = 51;
      *(_QWORD *)&v54[80] = &unk_1419E093E;
      *(_QWORD *)&v54[88] = v50;
      *(_QWORD *)v54 = 0;
      *(_QWORD *)&v54[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v54[16] = 0x33u;
      *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v54[40] = 41;
      *(_QWORD *)&v54[72] = 0x10E600000001LL;
      sub_1414D53A0(&v56, v54);
    }
    *(_QWORD *)v54 = v36;
    *(_QWORD *)&v54[8] = sub_1400015F0;
    *(_QWORD *)&v54[16] = &v53;
    *(_QWORD *)&v54[24] = sub_1416BCB10;
    *(_QWORD *)&v54[32] = v49;
    *(_QWORD *)&v54[40] = sub_1416B95D0;
    *(_QWORD *)&v54[48] = &v44;
    *(_QWORD *)&v54[56] = sub_1400015F0;
    *(_QWORD *)&v54[64] = &v39;
    *(_QWORD *)&v54[72] = sub_1400015F0;
    sub_1416ABFD0(v50, &unk_1419E099D, v54);
  }
  else
  {
    if ( v28 >= 2 )
    {
      *(_QWORD *)v50 = v36;
      *(_QWORD *)&v50[8] = sub_1400015F0;
      *(_QWORD *)&v50[16] = &v53;
      *(_QWORD *)&v50[24] = sub_1416BCB10;
      *(_QWORD *)&v50[32] = v49;
      *(_QWORD *)&v50[40] = sub_1416B95D0;
      *(_QWORD *)&v50[48] = &v44;
      *(_QWORD *)&v50[56] = sub_1400015F0;
      *(_QWORD *)&v50[64] = &v39;
      *(_QWORD *)&v50[72] = sub_1400015F0;
      *(_QWORD *)&v54[48] = 2;
      *(_QWORD *)&v54[56] = aCodexmateLibCo_0;
      *(_QWORD *)&v54[64] = 51;
      *(_QWORD *)&v54[80] = &unk_1419E0888;
      *(_QWORD *)&v54[88] = v50;
      *(_QWORD *)v54 = 0;
      *(_QWORD *)&v54[8] = aCodexmateLibCo_0;
      *(_OWORD *)&v54[16] = 0x33u;
      *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0;
      *(_QWORD *)&v54[40] = 41;
      *(_QWORD *)&v54[72] = 0x10ED00000001LL;
      sub_1414D53A0(&v56, v54);
    }
    *(_QWORD *)v54 = v36;
    *(_QWORD *)&v54[8] = sub_1400015F0;
    *(_QWORD *)&v54[16] = &v53;
    *(_QWORD *)&v54[24] = sub_1416BCB10;
    *(_QWORD *)&v54[32] = v49;
    *(_QWORD *)&v54[40] = sub_1416B95D0;
    *(_QWORD *)&v54[48] = &v44;
    *(_QWORD *)&v54[56] = sub_1400015F0;
    *(_QWORD *)&v54[64] = &v39;
    *(_QWORD *)&v54[72] = sub_1400015F0;
    sub_1416ABFD0(v50, &unk_1419E08F3, v54);
  }
  v29 = v43;
  *(_QWORD *)(v43 + 24) = *(_QWORD *)&v50[16];
  *(_OWORD *)(v29 + 8) = *(_OWORD *)v50;
  *(_QWORD *)v29 = 10;
  *(_BYTE *)(v29 + 104) = -1;
  if ( v39.m256i_i64[0] )
    sub_140001660(v39.m256i_i64[1], v39.m256i_i64[0], 1);
  if ( *(_QWORD *)v36 )
    sub_140001660(*(_QWORD *)&v36[8], *(_QWORD *)v36, 1);
LABEL_55:
  if ( (_QWORD)v44 )
    sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
  return v43;
}
