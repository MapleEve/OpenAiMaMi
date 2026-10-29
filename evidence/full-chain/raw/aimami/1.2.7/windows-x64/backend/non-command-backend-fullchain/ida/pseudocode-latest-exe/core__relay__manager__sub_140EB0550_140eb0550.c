// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb0550 | successor of pre-update 0x140d93020 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
void __fastcall sub_140EB0550(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  char *v5; // rsi
  char v6; // bl
  __m256i *v7; // r13
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // r15
  __int64 v14; // r12
  _QWORD *v15; // r14
  __int64 v16; // rdx
  char *v17; // rbx
  char v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r14
  __int128 v21; // rdi
  _QWORD *v22; // r15
  __int64 v23; // rdx
  _QWORD *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // rax
  __m256i *v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // rdi
  _QWORD *v34; // r8
  __int64 v35; // rdx
  _QWORD *v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // r15
  __int64 v39; // r14
  __int64 v40; // r8
  __int64 v41; // rax
  __m256i *v42; // rdx
  __int64 v43; // rdi
  unsigned __int128 v44; // rax
  bool v45; // zf
  __int64 v46; // rdi
  _QWORD *v47; // r8
  __int64 v48; // rdx
  _QWORD *v49; // r12
  __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  char v57; // al
  _OWORD v58[48]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v59; // [rsp+338h] [rbp+2B8h]
  __int64 v60; // [rsp+340h] [rbp+2C0h]
  __int64 v61; // [rsp+410h] [rbp+390h]
  __int64 v62; // [rsp+418h] [rbp+398h]
  __int128 v63; // [rsp+440h] [rbp+3C0h] BYREF
  __int128 v64; // [rsp+450h] [rbp+3D0h]
  __int128 v65; // [rsp+460h] [rbp+3E0h]
  __int128 v66; // [rsp+470h] [rbp+3F0h]
  __int128 v67; // [rsp+480h] [rbp+400h]
  __int128 v68; // [rsp+490h] [rbp+410h]
  char v69; // [rsp+5ACh] [rbp+52Ch]
  _BYTE v70[1040]; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v71; // [rsp+9D0h] [rbp+950h]
  __int128 v72; // [rsp+9E0h] [rbp+960h]
  __int64 v73; // [rsp+9F0h] [rbp+970h]
  __m256i **v74; // [rsp+9F8h] [rbp+978h] BYREF
  __int64 (__fastcall *v75)(); // [rsp+A00h] [rbp+980h]
  __int64 v76; // [rsp+A08h] [rbp+988h] BYREF
  __int64 v77; // [rsp+A10h] [rbp+990h]
  __m256i *v78; // [rsp+A18h] [rbp+998h]
  __int128 v79; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v80; // [rsp+A30h] [rbp+9B0h]
  __int128 v81; // [rsp+A40h] [rbp+9C0h]
  __int128 v82; // [rsp+A50h] [rbp+9D0h]
  __m256i v83; // [rsp+A60h] [rbp+9E0h]
  __int64 v84; // [rsp+A88h] [rbp+A08h]
  __int128 v85; // [rsp+A90h] [rbp+A10h] BYREF
  __int64 v86; // [rsp+AA0h] [rbp+A20h]
  __m256i *v87; // [rsp+AA8h] [rbp+A28h] BYREF
  __int128 v88; // [rsp+AB0h] [rbp+A30h]
  __int64 (__fastcall *v89)(); // [rsp+AC0h] [rbp+A40h]
  char *v90; // [rsp+AC8h] [rbp+A48h]
  __int64 (__fastcall *v91)(); // [rsp+AD0h] [rbp+A50h]
  __int64 v92; // [rsp+AD8h] [rbp+A58h]
  __int128 v93; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 v94; // [rsp+AF0h] [rbp+A70h]
  __int128 v95; // [rsp+B00h] [rbp+A80h]
  __int128 v96; // [rsp+B10h] [rbp+A90h] BYREF
  __m256i v97; // [rsp+B20h] [rbp+AA0h] BYREF
  __int64 v98; // [rsp+B48h] [rbp+AC8h]
  PVOID Address; // [rsp+B50h] [rbp+AD0h]
  unsigned __int8 v100; // [rsp+B5Dh] [rbp+ADDh] BYREF
  char v101; // [rsp+B5Eh] [rbp+ADEh] BYREF
  char v102; // [rsp+B5Fh] [rbp+ADFh]
  __int64 v103; // [rsp+B60h] [rbp+AE0h]

  v103 = -2;
  sub_1408741F0(&v63, a1 + 5, aRunningRouterB, 33);
  if ( (_DWORD)v63 != -1 )
  {
    v58[5] = v68;
    v58[4] = v67;
    v58[3] = v66;
    v58[2] = v65;
    v58[1] = v64;
    v58[0] = v63;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v93 = v58;
      *((_QWORD *)&v93 + 1) = sub_140D76130;
      *(_QWORD *)&v70[48] = 2;
      *(_QWORD *)&v70[56] = aCodexmateLibCo_50;
      *(_QWORD *)&v70[64] = 35;
      *(_QWORD *)&v70[80] = &unk_141AA0AC1;
      *(_QWORD *)&v70[88] = &v93;
      *(_QWORD *)v70 = 0;
      *(_QWORD *)&v70[8] = aCodexmateLibCo_50;
      *(_QWORD *)&v70[16] = 35;
      *(_QWORD *)&v70[24] = 0;
      *(_QWORD *)&v70[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v70[40] = 25;
      *(_QWORD *)&v70[72] = 0x2F700000001LL;
      sub_141503E20(&v101, v70);
    }
    sub_140D8A3A0(v58);
    return;
  }
  Address = *((PVOID *)&v63 + 1);
  v102 = v64;
  sub_140EB7850(&v63, a1);
  v100 = v69 ^ 1;
  v2 = *a1;
  v3 = *a1 + 16;
  sub_140A5CBE0(v70, v3, 0);
  if ( *(_QWORD *)v70 == -1 )
  {
    v83 = *(__m256i *)&v70[72];
    v82 = *(_OWORD *)&v70[56];
    v81 = *(_OWORD *)&v70[40];
    v80 = *(_OWORD *)&v70[24];
    v79 = *(_OWORD *)&v70[8];
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v87 = (__m256i *)&v79;
      *(_QWORD *)&v88 = sub_140D76130;
      *(_QWORD *)&v96 = 2;
      *((_QWORD *)&v96 + 1) = aCodexmateLibCo_50;
      v97.m256i_i64[0] = 35;
      v97.m256i_i64[2] = (__int64)&unk_141AA0A89;
      v97.m256i_i64[3] = (__int64)&v87;
      *(_QWORD *)&v93 = 0;
      *((_QWORD *)&v93 + 1) = aCodexmateLibCo_50;
      v94 = 0x23u;
      *(_QWORD *)&v95 = aSrcCoreRelayMa_4;
      *((_QWORD *)&v95 + 1) = 25;
      v97.m256i_i64[1] = 0x30000000001LL;
      sub_141503E20(&v101, &v93);
    }
    sub_140D8A3A0(&v79);
    v5 = (char *)Address;
    v6 = v102;
    goto LABEL_27;
  }
  sub_1419234B0(v58, v70, 1032);
  v4 = a1[3];
  sub_140EAD220((unsigned int)&v76, v4, (unsigned int)v58, v100, 0);
  sub_140EB7850(v70, a1);
  sub_140EADE50(&v93, v2, v4, v70);
  sub_140292E20(v70);
  if ( (_QWORD)v93 == -1 )
  {
    sub_140EADA10(&v85, v59, v60, &v63);
  }
  else
  {
    v86 = v94;
    v85 = v93;
  }
  v7 = v78;
  if ( !v78 && (_QWORD)v85 == -1 )
  {
    sub_1407D66C0(v70, v3);
    if ( *(_QWORD *)v70 == -1 && !v70[8] )
    {
      LOBYTE(v8) = 2;
      sub_1407D2600((__int64)&v93, v3, v8);
      if ( (_DWORD)v93 != -1 )
      {
        *(__m256i *)&v70[64] = v97;
        *(_OWORD *)&v70[48] = v96;
        *(_OWORD *)&v70[32] = v95;
        *(_OWORD *)&v70[16] = v94;
        *(_OWORD *)v70 = v93;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v87 = (__m256i *)v70;
          *(_QWORD *)&v88 = sub_140D76130;
          *(_QWORD *)&v79 = aCodexmateLibCo_50;
          *((_QWORD *)&v79 + 1) = 35;
          *(_QWORD *)&v80 = aCodexmateLibCo_50;
          *((_QWORD *)&v80 + 1) = 35;
          *(_QWORD *)&v81 = &off_141AA0960;
          sub_140AF72B0(&unk_141AA0923, &v87, 2, &v79);
        }
        sub_140D8A3A0(v70);
      }
      v5 = (char *)Address;
      v6 = v102;
      if ( (_QWORD)v85 != -1 && (_QWORD)v85 )
        sub_140001660(*((_QWORD *)&v85 + 1), v85, 1);
      if ( v76 )
        sub_140001660(v77, 32 * v76, 8);
      sub_140038710(v58);
      if ( v61 )
        sub_140001660(v62, v61, 1);
LABEL_27:
      sub_140292E20(&v63);
      if ( !v6 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v10, v9, v11) )
        v5[1] = 1;
      v12 = *v5;
      *v5 = 0;
      if ( v12 == 2 )
        WakeByAddressSingle(v5);
      return;
    }
    if ( *(_DWORD *)v70 != -1 )
      sub_140D8A3A0(v70);
  }
  sub_1407D7480(&v79, v3);
  if ( (_QWORD)v79 != -1 )
  {
    v97.m256i_i64[0] = v83.m256i_i64[0];
    v96 = v82;
    v95 = v81;
    v94 = v80;
    v93 = v79;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v87 = &v97;
      *(_QWORD *)&v88 = sub_140ED78B0;
      *((_QWORD *)&v88 + 1) = &v93;
      v89 = sub_1400015F0;
      v90 = (char *)&v96 + 8;
      v91 = sub_1416EBBB0;
      *(_QWORD *)&v70[48] = 2;
      *(_QWORD *)&v70[56] = aCodexmateLibCo_50;
      *(_QWORD *)&v70[64] = 35;
      *(_QWORD *)&v70[80] = &unk_141AA0978;
      *(_QWORD *)&v70[88] = &v87;
      *(_QWORD *)v70 = 0;
      *(_QWORD *)&v70[8] = aCodexmateLibCo_50;
      *(_QWORD *)&v70[16] = 35;
      *(_QWORD *)&v70[24] = 0;
      *(_QWORD *)&v70[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v70[40] = 25;
      *(_QWORD *)&v70[72] = 0x31300000001LL;
      sub_141503E20(&v101, v70);
    }
    if ( (_QWORD)v93 )
      sub_140001660(*((_QWORD *)&v93 + 1), v93, 1);
    if ( *((_QWORD *)&v94 + 1) != -1 && *((_QWORD *)&v94 + 1) )
      sub_140001660(v95, *((_QWORD *)&v94 + 1), 1);
  }
  if ( *(_QWORD *)off_14223FF10 >= 2u )
  {
    v87 = v7;
    sub_140226C80(&v93, v77, v77 + 32LL * (_QWORD)v7);
    v13 = *((_QWORD *)&v93 + 1);
    v14 = v94;
    sub_1406C5480((unsigned int)v70, DWORD2(v93), v94, (unsigned int)&unk_141A9B28E, 3);
    *(_QWORD *)&v80 = *(_QWORD *)&v70[16];
    v79 = *(_OWORD *)v70;
    if ( v14 )
    {
      v15 = (_QWORD *)(v13 + 8);
      do
      {
        v16 = *(v15 - 1);
        if ( v16 )
          sub_140001660(*v15, v16, 1);
        v15 += 3;
        --v14;
      }
      while ( v14 );
    }
    if ( (_QWORD)v93 )
      sub_140001660(v13, 24 * v93, 8);
    *(_QWORD *)&v93 = &v100;
    *((_QWORD *)&v93 + 1) = sub_140ED78B0;
    *(_QWORD *)&v94 = &v87;
    *((_QWORD *)&v94 + 1) = sub_1416EBAE0;
    *(_QWORD *)&v95 = &v79;
    *((_QWORD *)&v95 + 1) = sub_1400015F0;
    *(_QWORD *)&v96 = &v85;
    *((_QWORD *)&v96 + 1) = sub_140EDA660;
    *(_QWORD *)&v70[48] = 2;
    *(_QWORD *)&v70[56] = aCodexmateLibCo_50;
    *(_QWORD *)&v70[64] = 35;
    *(_QWORD *)&v70[80] = &unk_141AA09D3;
    *(_QWORD *)&v70[88] = &v93;
    *(_QWORD *)v70 = 0;
    *(_QWORD *)&v70[8] = aCodexmateLibCo_50;
    *(_QWORD *)&v70[16] = 35;
    *(_QWORD *)&v70[24] = 0;
    *(_QWORD *)&v70[32] = aSrcCoreRelayMa_4;
    *(_QWORD *)&v70[40] = 25;
    *(_QWORD *)&v70[72] = 0x31A00000001LL;
    sub_141503E20(&v101, v70);
    if ( (_QWORD)v79 )
      sub_140001660(*((_QWORD *)&v79 + 1), v79, 1);
  }
  sub_140EB20D0((__int64)&v79, a1, (__int64)aBootstrapSelfH, 19, 1);
  if ( (_DWORD)v79 == -1 )
  {
    v98 = *((_QWORD *)&v80 + 1);
    v84 = v80;
    v19 = v81;
    v73 = v83.m256i_i64[3];
    v72 = *(_OWORD *)&v83.m256i_u64[1];
    v20 = *((_QWORD *)&v81 + 1);
    v21 = v82;
    if ( *((_QWORD *)&v79 + 1) == 1 )
    {
      if ( *((_QWORD *)&v82 + 1) )
      {
        v22 = (_QWORD *)(v82 + 8);
        do
        {
          v23 = *(v22 - 1);
          if ( v23 )
            sub_140001660(*v22, v23, 1);
          v22 += 3;
          --*((_QWORD *)&v21 + 1);
        }
        while ( *((_QWORD *)&v21 + 1) );
      }
    }
    else if ( *((_QWORD *)&v82 + 1) )
    {
      v24 = (_QWORD *)(v82 + 8);
      do
      {
        v25 = *(v24 - 1);
        if ( v25 )
          sub_140001660(*v24, v25, 1);
        v24 += 3;
        --*((_QWORD *)&v21 + 1);
      }
      while ( *((_QWORD *)&v21 + 1) );
    }
    if ( v20 )
      sub_140001660(v21, 24 * v20, 8);
    v26 = v98;
    v27 = v98 + 24 * v19;
    *(_QWORD *)&v93 = v98;
    *((_QWORD *)&v93 + 1) = v98;
    v28 = v84;
    *(_QWORD *)&v94 = v84;
    *((_QWORD *)&v94 + 1) = v27;
    v29 = v98;
    if ( v19 )
    {
      v29 = v98 + 24;
      do
      {
        v31 = *(__m256i **)(v29 - 24);
        v71 = *(_OWORD *)(v29 - 16);
        if ( v31 == (__m256i *)-1LL )
        {
          v26 = v98;
          v28 = v84;
          goto LABEL_77;
        }
        v87 = v31;
        v88 = v71;
        if ( *(_QWORD *)off_14223FF10 >= 3u )
        {
          v92 = v29;
          v74 = &v87;
          v75 = sub_1400015F0;
          *(_QWORD *)&v70[48] = 3;
          *(_QWORD *)&v70[56] = aCodexmateLibCo_50;
          *(_QWORD *)&v70[64] = 35;
          *(_QWORD *)&v70[80] = &unk_141AA0A3B;
          *(_QWORD *)&v70[88] = &v74;
          *(_QWORD *)v70 = 0;
          *(_QWORD *)&v70[8] = aCodexmateLibCo_50;
          *(_QWORD *)&v70[16] = 35;
          *(_QWORD *)&v70[24] = 0;
          *(_QWORD *)&v70[32] = aSrcCoreRelayMa_4;
          *(_QWORD *)&v70[40] = 25;
          *(_QWORD *)&v70[72] = 0x32800000001LL;
          sub_141503E20(&v101, v70);
          v31 = v87;
          v29 = v92;
        }
        if ( v31 )
        {
          v32 = v29;
          sub_140001660(v88, v31, 1);
          v29 = v32;
        }
        v30 = v29 - 24;
        v29 += 24;
      }
      while ( v30 + 24 != v27 );
      v26 = v98;
      v28 = v84;
    }
    else
    {
LABEL_77:
      *((_QWORD *)&v93 + 1) = v29;
      if ( v27 != v29 )
      {
        v33 = (v27 - v29) / 0x18uLL;
        v34 = (_QWORD *)(v29 + 8);
        do
        {
          v35 = *(v34 - 1);
          if ( v35 )
          {
            v36 = v34;
            sub_140001660(*v34, v35, 1);
            v34 = v36;
          }
          v34 += 3;
          --v33;
        }
        while ( v33 );
      }
    }
    if ( v28 )
      sub_140001660(v26, 24 * v28, 8);
    v37 = *((_QWORD *)&v72 + 1);
    v38 = v72;
    v39 = *((_QWORD *)&v72 + 1) + 24 * v73;
    *(_QWORD *)&v93 = *((_QWORD *)&v72 + 1);
    *((_QWORD *)&v93 + 1) = *((_QWORD *)&v72 + 1);
    *(_QWORD *)&v94 = v72;
    *((_QWORD *)&v94 + 1) = v39;
    v40 = *((_QWORD *)&v72 + 1);
    if ( v73 )
    {
      v98 = v72;
      v40 = *((_QWORD *)&v72 + 1) + 24LL;
      do
      {
        v42 = *(__m256i **)(v40 - 24);
        v71 = *(_OWORD *)(v40 - 16);
        if ( v42 == (__m256i *)-1LL )
        {
          v38 = v98;
          goto LABEL_94;
        }
        v87 = v42;
        v88 = v71;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v92 = v40;
          v74 = &v87;
          v75 = sub_1400015F0;
          *(_QWORD *)&v70[48] = 2;
          *(_QWORD *)&v70[56] = aCodexmateLibCo_50;
          *(_QWORD *)&v70[64] = 35;
          *(_QWORD *)&v70[80] = &unk_141AA0A3B;
          *(_QWORD *)&v70[88] = &v74;
          *(_QWORD *)v70 = 0;
          *(_QWORD *)&v70[8] = aCodexmateLibCo_50;
          *(_QWORD *)&v70[16] = 35;
          *(_QWORD *)&v70[24] = 0;
          *(_QWORD *)&v70[32] = aSrcCoreRelayMa_4;
          *(_QWORD *)&v70[40] = 25;
          *(_QWORD *)&v70[72] = 0x32B00000001LL;
          sub_141503E20(&v101, v70);
          v42 = v87;
          v40 = v92;
        }
        if ( v42 )
        {
          v43 = v40;
          sub_140001660(v88, v42, 1);
          v40 = v43;
        }
        v41 = v40 - 24;
        v40 += 24;
      }
      while ( v41 + 24 != v39 );
      v17 = (char *)Address;
      v18 = v102;
      v38 = v98;
    }
    else
    {
LABEL_94:
      v44 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v39 - v40);
      *((_QWORD *)&v93 + 1) = v40;
      v45 = v39 == v40;
      v17 = (char *)Address;
      v18 = v102;
      if ( !v45 )
      {
        v46 = *((_QWORD *)&v44 + 1) >> 4;
        v47 = (_QWORD *)(v40 + 8);
        do
        {
          v48 = *(v47 - 1);
          if ( v48 )
          {
            v49 = v47;
            sub_140001660(*v47, v48, 1);
            v47 = v49;
          }
          v47 += 3;
          --v46;
        }
        while ( v46 );
      }
    }
    if ( v38 )
      sub_140001660(v37, 24 * v38, 8);
  }
  else
  {
    v97 = v83;
    v96 = v82;
    v95 = v81;
    v94 = v80;
    v93 = v79;
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      v87 = (__m256i *)&v93;
      *(_QWORD *)&v88 = sub_140D76130;
      *(_QWORD *)&v70[48] = 2;
      *(_QWORD *)&v70[56] = aCodexmateLibCo_50;
      *(_QWORD *)&v70[64] = 35;
      *(_QWORD *)&v70[80] = &unk_141AA0A59;
      *(_QWORD *)&v70[88] = &v87;
      *(_QWORD *)v70 = 0;
      *(_QWORD *)&v70[8] = aCodexmateLibCo_50;
      *(_QWORD *)&v70[16] = 35;
      *(_QWORD *)&v70[24] = 0;
      *(_QWORD *)&v70[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v70[40] = 25;
      *(_QWORD *)&v70[72] = 0x32F00000001LL;
      sub_141503E20(&v101, v70);
    }
    sub_140D8A3A0(&v93);
    v17 = (char *)Address;
    v18 = v102;
  }
  if ( (_QWORD)v85 != -1 && (_QWORD)v85 )
    sub_140001660(*((_QWORD *)&v85 + 1), v85, 1);
  v50 = v77;
  if ( v7 )
  {
    v51 = 32LL * (_QWORD)v7;
    v52 = 0;
    do
    {
      v53 = *(_QWORD *)(v50 + v52);
      if ( v53 )
        sub_140001660(*(_QWORD *)(v50 + v52 + 8), v53, 1);
      v52 += 32;
    }
    while ( v51 != v52 );
  }
  if ( v76 )
    sub_140001660(v50, 32 * v76, 8);
  sub_140038710(v58);
  if ( v61 )
    sub_140001660(v62, v61, 1);
  sub_140292E20(&v63);
  if ( !v18 && 2 * *off_142240260 && !(unsigned __int8)sub_14196A710(v55, v54, v56) )
    v17[1] = 1;
  v57 = *v17;
  *v17 = 0;
  if ( v57 == 2 )
    WakeByAddressSingle(v17);
}
