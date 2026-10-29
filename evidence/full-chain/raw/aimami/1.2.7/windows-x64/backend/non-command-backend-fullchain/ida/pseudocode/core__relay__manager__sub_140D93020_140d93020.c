// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d93020 | name sub_140D93020
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140D93020(_QWORD *a1)
{
  __int64 v2; // r14
  __m256i *v3; // r13
  __int64 v4; // r8
  __int64 v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r14
  __int128 v11; // rdi
  _QWORD *v12; // r15
  __int64 v13; // rdx
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // rax
  __m256i *v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  _QWORD *v24; // r8
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // r8
  __int64 v31; // rax
  __m256i *v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  _QWORD *v35; // r8
  __int64 v36; // rdx
  _QWORD *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  PVOID v43; // rcx
  char v44; // al
  __m128i v45[48]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v46; // [rsp+338h] [rbp+2B8h]
  __int64 v47; // [rsp+340h] [rbp+2C0h]
  __int64 v48; // [rsp+410h] [rbp+390h]
  __int64 v49; // [rsp+418h] [rbp+398h]
  __m128i v50; // [rsp+440h] [rbp+3C0h] BYREF
  __m128i v51; // [rsp+450h] [rbp+3D0h]
  __m128i v52; // [rsp+460h] [rbp+3E0h]
  __m128i v53; // [rsp+470h] [rbp+3F0h]
  __m128i v54; // [rsp+480h] [rbp+400h]
  __m128i v55; // [rsp+490h] [rbp+410h]
  char v56; // [rsp+5ACh] [rbp+52Ch]
  _BYTE v57[1040]; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v58; // [rsp+9D0h] [rbp+950h]
  __int128 v59; // [rsp+9E0h] [rbp+960h]
  __int64 v60; // [rsp+9F0h] [rbp+970h]
  __m256i **v61; // [rsp+9F8h] [rbp+978h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+A00h] [rbp+980h]
  __int64 v63; // [rsp+A08h] [rbp+988h] BYREF
  __int64 v64; // [rsp+A10h] [rbp+990h]
  __m256i *v65; // [rsp+A18h] [rbp+998h]
  __int128 v66; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v67; // [rsp+A30h] [rbp+9B0h]
  __int128 v68; // [rsp+A40h] [rbp+9C0h]
  __int128 v69; // [rsp+A50h] [rbp+9D0h]
  __m256i v70; // [rsp+A60h] [rbp+9E0h]
  __int64 v71; // [rsp+A88h] [rbp+A08h]
  __int128 v72; // [rsp+A90h] [rbp+A10h] BYREF
  __int64 v73; // [rsp+AA0h] [rbp+A20h]
  __m256i *v74; // [rsp+AA8h] [rbp+A28h] BYREF
  __int128 v75; // [rsp+AB0h] [rbp+A30h]
  __int64 (__fastcall *v76)(); // [rsp+AC0h] [rbp+A40h]
  char *v77; // [rsp+AC8h] [rbp+A48h]
  __int64 (__fastcall *v78)(); // [rsp+AD0h] [rbp+A50h]
  __int64 v79; // [rsp+AD8h] [rbp+A58h]
  __int128 v80; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v81; // [rsp+AF0h] [rbp+A70h]
  __int128 v82; // [rsp+B00h] [rbp+A80h]
  __int128 v83; // [rsp+B10h] [rbp+A90h] BYREF
  __m256i v84; // [rsp+B20h] [rbp+AA0h] BYREF
  PVOID Address; // [rsp+B48h] [rbp+AC8h]
  __int64 v86; // [rsp+B50h] [rbp+AD0h]
  unsigned __int8 v87; // [rsp+B5Dh] [rbp+ADDh] BYREF
  __int8 v88; // [rsp+B5Eh] [rbp+ADEh]
  char v89; // [rsp+B5Fh] [rbp+ADFh] BYREF
  __int64 v90; // [rsp+B60h] [rbp+AE0h]

  v90 = -2;
  sub_140DA5500(&v50, a1 + 5, aRunningRouterB, 33);
  if ( v50.m128i_i32[0] != -1 )
  {
    v45[5] = v55;
    v45[4] = v54;
    v45[3] = v53;
    v45[2] = v52;
    v45[1] = v51;
    v45[0] = v50;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v80 = v45;
      *((_QWORD *)&v80 + 1) = sub_14104A7D0;
      *(_QWORD *)&v57[48] = 2;
      *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
      *(_QWORD *)&v57[64] = 35;
      *(_QWORD *)&v57[80] = &unk_141A4B6D9;
      *(_QWORD *)&v57[88] = &v80;
      *(_QWORD *)v57 = 0;
      *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
      *(_QWORD *)&v57[16] = 35;
      *(_QWORD *)&v57[24] = 0;
      *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
      *(_QWORD *)&v57[40] = 25;
      *(_QWORD *)&v57[72] = 0x2DD00000001LL;
      sub_1414D53A0(&v89, v57);
    }
    sub_140D1BEA0(v45);
    return;
  }
  Address = (PVOID)v50.m128i_i64[1];
  v88 = v51.m128i_i8[0];
  sub_140D9A5F0(&v50, a1);
  v87 = v56 ^ 1;
  v2 = *a1 + 16LL;
  sub_140C1F580(v57, v2, 0);
  if ( *(_QWORD *)v57 == -1 )
  {
    v70 = *(__m256i *)&v57[72];
    v69 = *(_OWORD *)&v57[56];
    v68 = *(_OWORD *)&v57[40];
    v67 = *(_OWORD *)&v57[24];
    v66 = *(_OWORD *)&v57[8];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v74 = (__m256i *)&v66;
      *(_QWORD *)&v75 = sub_14104A7D0;
      *(_QWORD *)&v83 = 2;
      *((_QWORD *)&v83 + 1) = aCodexmateLibCo_36;
      v84.m256i_i64[0] = 35;
      v84.m256i_i64[2] = (__int64)&unk_141A4B6A1;
      v84.m256i_i64[3] = (__int64)&v74;
      *(_QWORD *)&v80 = 0;
      *((_QWORD *)&v80 + 1) = aCodexmateLibCo_36;
      v81 = 0x23u;
      *(_QWORD *)&v82 = aSrcCoreRelayMa_5;
      *((_QWORD *)&v82 + 1) = 25;
      v84.m256i_i64[1] = 0x2E600000001LL;
      sub_1414D53A0(&v89, &v80);
    }
    sub_140D1BEA0(&v66);
    goto LABEL_111;
  }
  sub_1418F44E0(v45, (const __m128i *)v57, 0x408u);
  sub_140D8FC20((unsigned int)&v63, a1[3], (unsigned int)v45, v87, 0);
  sub_140D9A5F0(v57, a1);
  sub_140D90850(&v80, a1, v57);
  sub_1407ADB20(v57);
  if ( (_QWORD)v80 == -1 )
  {
    sub_140D90410(&v72, v46, v47, (__int64)&v50);
  }
  else
  {
    v73 = v81;
    v72 = v80;
  }
  v3 = v65;
  if ( v65 || (_QWORD)v72 != -1 )
  {
LABEL_30:
    sub_141026EF0((__int64)&v66);
    if ( (_QWORD)v66 != -1 )
    {
      v84.m256i_i64[0] = v70.m256i_i64[0];
      v83 = v69;
      v82 = v68;
      v81 = v67;
      v80 = v66;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v74 = &v84;
        *(_QWORD *)&v75 = sub_140DC91E0;
        *((_QWORD *)&v75 + 1) = &v80;
        v76 = sub_1400015F0;
        v77 = (char *)&v83 + 8;
        v78 = sub_1416BCBE0;
        *(_QWORD *)&v57[48] = 2;
        *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
        *(_QWORD *)&v57[64] = 35;
        *(_QWORD *)&v57[80] = &unk_141A4B590;
        *(_QWORD *)&v57[88] = &v74;
        *(_QWORD *)v57 = 0;
        *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
        *(_QWORD *)&v57[16] = 35;
        *(_QWORD *)&v57[24] = 0;
        *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
        *(_QWORD *)&v57[40] = 25;
        *(_QWORD *)&v57[72] = 0x2F900000001LL;
        sub_1414D53A0(&v89, v57);
      }
      if ( (_QWORD)v80 )
        sub_140001660(*((_QWORD *)&v80 + 1), v80, 1);
      if ( *((_QWORD *)&v81 + 1) != -1 && *((_QWORD *)&v81 + 1) )
        sub_140001660(v82, *((_QWORD *)&v81 + 1), 1);
    }
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v74 = v3;
      sub_1403EBE40(&v80, v64, v64 + 32LL * (_QWORD)v3);
      v5 = *((_QWORD *)&v80 + 1);
      v6 = v81;
      sub_140D1EE10((unsigned int)v57, DWORD2(v80), v81, (unsigned int)&unk_141A4AB0B, 3);
      *(_QWORD *)&v67 = *(_QWORD *)&v57[16];
      v66 = *(_OWORD *)v57;
      if ( v6 )
      {
        v7 = (_QWORD *)(v5 + 8);
        do
        {
          v8 = *(v7 - 1);
          if ( v8 )
            sub_140001660(*v7, v8, 1);
          v7 += 3;
          --v6;
        }
        while ( v6 );
      }
      if ( (_QWORD)v80 )
        sub_140001660(v5, 24 * v80, 8);
      *(_QWORD *)&v80 = &v87;
      *((_QWORD *)&v80 + 1) = sub_140DC91E0;
      *(_QWORD *)&v81 = &v74;
      *((_QWORD *)&v81 + 1) = sub_1416BCB10;
      *(_QWORD *)&v82 = &v66;
      *((_QWORD *)&v82 + 1) = sub_1400015F0;
      *(_QWORD *)&v83 = &v72;
      *((_QWORD *)&v83 + 1) = sub_140DD7AB0;
      *(_QWORD *)&v57[48] = 2;
      *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
      *(_QWORD *)&v57[64] = 35;
      *(_QWORD *)&v57[80] = &unk_141A4B5EB;
      *(_QWORD *)&v57[88] = &v80;
      *(_QWORD *)v57 = 0;
      *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
      *(_QWORD *)&v57[16] = 35;
      *(_QWORD *)&v57[24] = 0;
      *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
      *(_QWORD *)&v57[40] = 25;
      *(_QWORD *)&v57[72] = 0x30000000001LL;
      sub_1414D53A0(&v89, v57);
      if ( (_QWORD)v66 )
        sub_140001660(*((_QWORD *)&v66 + 1), v66, 1);
    }
    sub_140D94D30((unsigned int)&v66, (_DWORD)a1, (unsigned int)aBootstrapSelfH, 19, 1);
    if ( (_DWORD)v66 == -1 )
    {
      v86 = *((_QWORD *)&v67 + 1);
      v71 = v67;
      v9 = v68;
      v60 = v70.m256i_i64[3];
      v59 = *(_OWORD *)&v70.m256i_u64[1];
      v10 = *((_QWORD *)&v68 + 1);
      v11 = v69;
      if ( *((_QWORD *)&v66 + 1) == 1 )
      {
        if ( *((_QWORD *)&v69 + 1) )
        {
          v12 = (_QWORD *)(v69 + 8);
          do
          {
            v13 = *(v12 - 1);
            if ( v13 )
              sub_140001660(*v12, v13, 1);
            v12 += 3;
            --*((_QWORD *)&v11 + 1);
          }
          while ( *((_QWORD *)&v11 + 1) );
        }
      }
      else if ( *((_QWORD *)&v69 + 1) )
      {
        v14 = (_QWORD *)(v69 + 8);
        do
        {
          v15 = *(v14 - 1);
          if ( v15 )
            sub_140001660(*v14, v15, 1);
          v14 += 3;
          --*((_QWORD *)&v11 + 1);
        }
        while ( *((_QWORD *)&v11 + 1) );
      }
      if ( v10 )
        sub_140001660(v11, 24 * v10, 8);
      v16 = v86;
      v17 = v86 + 24 * v9;
      *(_QWORD *)&v80 = v86;
      *((_QWORD *)&v80 + 1) = v86;
      v18 = v71;
      *(_QWORD *)&v81 = v71;
      *((_QWORD *)&v81 + 1) = v17;
      v19 = v86;
      if ( v9 )
      {
        v19 = v86 + 24;
        do
        {
          v21 = *(__m256i **)(v19 - 24);
          v58 = *(_OWORD *)(v19 - 16);
          if ( v21 == (__m256i *)-1LL )
          {
            v16 = v86;
            v18 = v71;
            goto LABEL_74;
          }
          v74 = v21;
          v75 = v58;
          if ( *(_QWORD *)off_1421E6EC0 >= 3u )
          {
            v79 = v19;
            v61 = &v74;
            v62 = sub_1400015F0;
            *(_QWORD *)&v57[48] = 3;
            *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
            *(_QWORD *)&v57[64] = 35;
            *(_QWORD *)&v57[80] = &unk_141A4B653;
            *(_QWORD *)&v57[88] = &v61;
            *(_QWORD *)v57 = 0;
            *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
            *(_QWORD *)&v57[16] = 35;
            *(_QWORD *)&v57[24] = 0;
            *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
            *(_QWORD *)&v57[40] = 25;
            *(_QWORD *)&v57[72] = 0x30E00000001LL;
            sub_1414D53A0(&v89, v57);
            v21 = v74;
            v19 = v79;
          }
          if ( v21 )
          {
            v22 = v19;
            sub_140001660(v75, v21, 1);
            v19 = v22;
          }
          v20 = v19 - 24;
          v19 += 24;
        }
        while ( v20 + 24 != v17 );
        v16 = v86;
        v18 = v71;
      }
      else
      {
LABEL_74:
        *((_QWORD *)&v80 + 1) = v19;
        if ( v17 != v19 )
        {
          v23 = (v17 - v19) / 0x18uLL;
          v24 = (_QWORD *)(v19 + 8);
          do
          {
            v25 = *(v24 - 1);
            if ( v25 )
            {
              v26 = v24;
              sub_140001660(*v24, v25, 1);
              v24 = v26;
            }
            v24 += 3;
            --v23;
          }
          while ( v23 );
        }
      }
      if ( v18 )
        sub_140001660(v16, 24 * v18, 8);
      v28 = *((_QWORD *)&v59 + 1);
      v27 = v59;
      v29 = *((_QWORD *)&v59 + 1) + 24 * v60;
      *(_QWORD *)&v80 = *((_QWORD *)&v59 + 1);
      *((_QWORD *)&v80 + 1) = *((_QWORD *)&v59 + 1);
      *(_QWORD *)&v81 = v59;
      *((_QWORD *)&v81 + 1) = v29;
      v30 = *((_QWORD *)&v59 + 1);
      if ( v60 )
      {
        v86 = v59;
        v30 = *((_QWORD *)&v59 + 1) + 24LL;
        do
        {
          v32 = *(__m256i **)(v30 - 24);
          v58 = *(_OWORD *)(v30 - 16);
          if ( v32 == (__m256i *)-1LL )
          {
            v27 = v86;
            goto LABEL_91;
          }
          v74 = v32;
          v75 = v58;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v79 = v30;
            v61 = &v74;
            v62 = sub_1400015F0;
            *(_QWORD *)&v57[48] = 2;
            *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
            *(_QWORD *)&v57[64] = 35;
            *(_QWORD *)&v57[80] = &unk_141A4B653;
            *(_QWORD *)&v57[88] = &v61;
            *(_QWORD *)v57 = 0;
            *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
            *(_QWORD *)&v57[16] = 35;
            *(_QWORD *)&v57[24] = 0;
            *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
            *(_QWORD *)&v57[40] = 25;
            *(_QWORD *)&v57[72] = 0x31100000001LL;
            sub_1414D53A0(&v89, v57);
            v32 = v74;
            v30 = v79;
          }
          if ( v32 )
          {
            v33 = v30;
            sub_140001660(v75, v32, 1);
            v30 = v33;
          }
          v31 = v30 - 24;
          v30 += 24;
        }
        while ( v31 + 24 != v29 );
        v27 = v86;
      }
      else
      {
LABEL_91:
        *((_QWORD *)&v80 + 1) = v30;
        if ( v29 != v30 )
        {
          v34 = (v29 - v30) / 0x18uLL;
          v35 = (_QWORD *)(v30 + 8);
          do
          {
            v36 = *(v35 - 1);
            if ( v36 )
            {
              v37 = v35;
              sub_140001660(*v35, v36, 1);
              v35 = v37;
            }
            v35 += 3;
            --v34;
          }
          while ( v34 );
        }
      }
      if ( v27 )
        sub_140001660(v28, 24 * v27, 8);
    }
    else
    {
      v84 = v70;
      v83 = v69;
      v82 = v68;
      v81 = v67;
      v80 = v66;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v74 = (__m256i *)&v80;
        *(_QWORD *)&v75 = sub_14104A7D0;
        *(_QWORD *)&v57[48] = 2;
        *(_QWORD *)&v57[56] = aCodexmateLibCo_36;
        *(_QWORD *)&v57[64] = 35;
        *(_QWORD *)&v57[80] = &unk_141A4B671;
        *(_QWORD *)&v57[88] = &v74;
        *(_QWORD *)v57 = 0;
        *(_QWORD *)&v57[8] = aCodexmateLibCo_36;
        *(_QWORD *)&v57[16] = 35;
        *(_QWORD *)&v57[24] = 0;
        *(_QWORD *)&v57[32] = aSrcCoreRelayMa_5;
        *(_QWORD *)&v57[40] = 25;
        *(_QWORD *)&v57[72] = 0x31500000001LL;
        sub_1414D53A0(&v89, v57);
      }
      sub_140D1BEA0(&v80);
    }
    if ( (_QWORD)v72 != -1 && (_QWORD)v72 )
      sub_140001660(*((_QWORD *)&v72 + 1), v72, 1);
    v38 = v64;
    if ( v3 )
    {
      v39 = 32LL * (_QWORD)v3;
      v40 = 0;
      do
      {
        v41 = *(_QWORD *)(v38 + v40);
        if ( v41 )
          sub_140001660(*(_QWORD *)(v38 + v40 + 8), v41, 1);
        v40 += 32;
      }
      while ( v39 != v40 );
    }
    if ( v63 )
      sub_140001660(v38, 32 * v63, 8);
    sub_140034990(v45);
    if ( v48 )
      sub_140001660(v49, v48, 1);
    goto LABEL_111;
  }
  sub_1410261E0(v57, v2);
  if ( *(_QWORD *)v57 != -1 || v57[8] )
  {
    if ( *(_DWORD *)v57 != -1 )
      sub_140D1BEA0(v57);
    goto LABEL_30;
  }
  LOBYTE(v4) = 2;
  sub_141022500(&v80, v2, v4);
  if ( (_DWORD)v80 != -1 )
  {
    *(__m256i *)&v57[64] = v84;
    *(_OWORD *)&v57[48] = v83;
    *(_OWORD *)&v57[32] = v82;
    *(_OWORD *)&v57[16] = v81;
    *(_OWORD *)v57 = v80;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v74 = (__m256i *)v57;
      *(_QWORD *)&v75 = sub_14104A7D0;
      *(_QWORD *)&v66 = aCodexmateLibCo_36;
      *((_QWORD *)&v66 + 1) = 35;
      *(_QWORD *)&v67 = aCodexmateLibCo_36;
      *((_QWORD *)&v67 + 1) = 35;
      *(_QWORD *)&v68 = &off_141A4B578;
      sub_140BAD520(&unk_141A4B53B, &v74, 2, &v66);
    }
    sub_140D1BEA0(v57);
  }
  if ( (_QWORD)v72 != -1 && (_QWORD)v72 )
    sub_140001660(*((_QWORD *)&v72 + 1), v72, 1);
  if ( v63 )
    sub_140001660(v64, 32 * v63, 8);
  sub_140034990(v45);
  if ( v48 )
    sub_140001660(v49, v48, 1);
LABEL_111:
  sub_1407ADB20(&v50);
  if ( !v88 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v42) )
    *((_BYTE *)Address + 1) = 1;
  v43 = Address;
  v44 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v44 == 2 )
    WakeByAddressSingle(v43);
}
