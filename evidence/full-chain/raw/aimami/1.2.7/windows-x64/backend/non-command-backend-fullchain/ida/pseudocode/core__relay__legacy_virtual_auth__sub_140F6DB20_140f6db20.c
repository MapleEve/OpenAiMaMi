// win 1.2.7 | module src/core/relay/legacy_virtual_auth.rs | ea 0x140f6db20 | name sub_140F6DB20
// win 1.2.7 | module src/core/relay/legacy_virtual_auth.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F6DB20(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(unsigned __int64); // rax
  char v16; // al
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int8 v20; // r12
  __int64 v21; // rax
  bool v22; // r14
  _BYTE *v23; // rax
  bool v24; // r12
  bool v25; // r14
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r15
  char v31; // di
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  __int128 v37; // kr40_16
  __int128 v38; // kr50_16
  unsigned __int128 v39; // kr00_16
  unsigned __int64 v40; // rdx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  unsigned __int128 v44; // kr10_16
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int64 v48; // rbx
  unsigned __int64 v49; // rdi
  __int64 v50; // [rsp+28h] [rbp-58h] BYREF
  __int64 v51; // [rsp+30h] [rbp-50h]
  __int64 v52; // [rsp+38h] [rbp-48h]
  __int64 v53; // [rsp+48h] [rbp-38h] BYREF
  __int128 v54; // [rsp+50h] [rbp-30h] BYREF
  __int64 v55; // [rsp+68h] [rbp-18h] BYREF
  __int64 v56; // [rsp+70h] [rbp-10h]
  __int64 v57; // [rsp+78h] [rbp-8h]
  __int64 v58; // [rsp+88h] [rbp+8h] BYREF
  __int64 v59; // [rsp+90h] [rbp+10h] BYREF
  __int64 (__fastcall *v60)(_QWORD, _QWORD); // [rsp+98h] [rbp+18h] BYREF
  __m256i v61; // [rsp+A0h] [rbp+20h] BYREF
  char v62; // [rsp+CFh] [rbp+4Fh] BYREF
  __m256i v63; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v64; // [rsp+F0h] [rbp+70h]
  __int128 v65; // [rsp+100h] [rbp+80h]
  __int128 v66; // [rsp+110h] [rbp+90h]
  __int128 v67; // [rsp+120h] [rbp+A0h]
  __int64 v68; // [rsp+138h] [rbp+B8h]
  __int64 v69; // [rsp+140h] [rbp+C0h]
  unsigned __int64 v70; // [rsp+148h] [rbp+C8h]
  __int64 v71; // [rsp+150h] [rbp+D0h]
  char v72; // [rsp+15Fh] [rbp+DFh]
  __int64 v73; // [rsp+160h] [rbp+E0h]

  v73 = -2;
  v6 = a2[97];
  v7 = a2[98];
  sub_1416828D0((unsigned int)&v50, v6, v7, (unsigned int)&unk_141A6328E, 24);
  sub_1416828D0((unsigned int)&v55, v6, v7, (unsigned int)&unk_141A63274, 26);
  sub_1416828D0((unsigned int)&v53, v6, v7, (unsigned int)&unk_141A6328E, 24);
  v68 = v54;
  sub_14169D1D0(&v61, v54, *((_QWORD *)&v54 + 1));
  v9 = v61.m256i_i64[1];
  v70 = v61.m256i_u64[1];
  if ( v61.m256i_i64[0] == -1 )
  {
    v13 = v61.m256i_i8[8] & 3;
    switch ( v61.m256i_i8[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(v61.m256i_i64[1] + 16) )
          goto LABEL_14;
        goto LABEL_37;
      case 1:
        if ( !*(_BYTE *)(v61.m256i_i64[1] + 31) )
          goto LABEL_37;
        goto LABEL_14;
      case 2:
        v72 = 1;
        v15 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v8, v61.m256i_i64[1]) + 8);
        v72 = 1;
        v16 = v15(HIDWORD(v70));
        v9 = v70;
        if ( !v16 )
          goto LABEL_37;
        goto LABEL_14;
      case 3:
        if ( v61.m256i_i8[12] )
        {
LABEL_14:
          v58 = v9;
          v59 = (__int64)&v58;
          v60 = sub_1416BB0B0;
          sub_1416ABFD0(&v63, &unk_141A632A6, &v59);
          v2 = v63.m256i_i64[1];
          v10 = v63.m256i_i64[0];
          v7 = v63.m256i_i64[2];
          if ( (unsigned int)(v58 & 3) - 2 >= 2 && (v58 & 3) != 0 )
          {
            v60 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v58 - 1);
            LOBYTE(v59) = 3;
            v72 = 0;
            sub_1416BCB00(&v60);
          }
          v11 = 10;
          goto LABEL_18;
        }
LABEL_37:
        if ( (unsigned int)(v13 - 2) >= 2 && v13 )
        {
          v63.m256i_i64[1] = v70 - 1;
          v63.m256i_i8[0] = 3;
          v72 = 0;
          sub_1416BCB00(&v63.m256i_u64[1]);
        }
        v11 = -1;
        v10 = -1;
        v14 = v53;
        if ( v53 )
          goto LABEL_19;
        break;
    }
  }
  else
  {
    v71 = v61.m256i_i64[0];
    *(_OWORD *)v63.m256i_i8 = *(_OWORD *)&v61.m256i_u64[1];
    *(_OWORD *)&v63.m256i_u64[2] = 0;
    v64 = *(_OWORD *)&v61.m256i_u64[1];
    sub_14062E760(&v61, &v63);
    v2 = v61.m256i_i64[1];
    v10 = v61.m256i_i64[0];
    if ( v61.m256i_i64[0] == -1 )
    {
      v59 = v61.m256i_i64[1];
      v61.m256i_i64[0] = (__int64)&v59;
      v61.m256i_i64[1] = (__int64)sub_14163CE40;
      sub_1416ABFD0(&v63, &unk_141A583A8, &v61);
      v2 = v63.m256i_i64[1];
      v10 = v63.m256i_i64[0];
      v7 = v63.m256i_i64[2];
      sub_14002F910(&v59);
      v11 = 10;
      v12 = v71;
      if ( !v71 )
        goto LABEL_18;
    }
    else
    {
      v3 = v61.m256i_i64[3];
      v7 = v61.m256i_i64[2];
      v11 = -1;
      v12 = v71;
      if ( !v71 )
      {
LABEL_18:
        v14 = v53;
        if ( !v53 )
          goto LABEL_20;
        goto LABEL_19;
      }
    }
    sub_140001660(v70, v12, 1);
    v14 = v53;
    if ( v53 )
LABEL_19:
      sub_140001660(v68, v14, 1);
  }
LABEL_20:
  if ( (_DWORD)v11 != -1 )
  {
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 32) = v3;
    goto LABEL_22;
  }
  if ( v10 == -1 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_22;
  }
  v68 = v2;
  v70 = v10;
  v18 = a2[5];
  v19 = a2[6];
  sub_141695A00(&v63, v18, v19);
  if ( v63.m256i_i32[0] == 2 )
  {
    if ( (v63.m256i_i8[8] & 3u) - 2 >= 2 && (v63.m256i_i8[8] & 3) != 0 )
    {
      --v63.m256i_i64[1];
      v63.m256i_i8[0] = 3;
      sub_1416BCB00(&v63.m256i_u64[1]);
    }
    goto LABEL_49;
  }
  sub_14169D1D0(&v53, v18, v19);
  if ( v53 == -1 )
  {
    if ( (unsigned int)(v54 & 3) - 2 >= 2 && (v54 & 3) != 0 )
    {
      v63.m256i_i64[1] = v54 - 1;
      v63.m256i_i8[0] = 3;
      sub_1416BCB00(&v63.m256i_u64[1]);
    }
    goto LABEL_55;
  }
  v71 = v53;
  *(_OWORD *)v63.m256i_i8 = v54;
  *(_OWORD *)&v63.m256i_u64[2] = 0;
  v69 = v54;
  v64 = v54;
  sub_14062D280(&v61, &v63);
  v20 = v61.m256i_i8[0];
  if ( v61.m256i_i8[0] == -1 )
    sub_14002F910(&v61.m256i_u64[1]);
  else
    sub_14002F9D0(&v61);
  if ( v71 )
    sub_140001660(v69, v71, 1);
  if ( v20 == -1 )
  {
LABEL_55:
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v65 = 2;
      *((_QWORD *)&v65 + 1) = aCodexmateLibCo_46;
      *(_QWORD *)&v66 = 47;
      *(_QWORD *)&v67 = &aPWasPreservedl[67];
      *((_QWORD *)&v67 + 1) = 203;
      v63.m256i_i64[0] = 0;
      v63.m256i_i64[1] = (__int64)aCodexmateLibCo_46;
      *(_OWORD *)&v63.m256i_u64[2] = 0x2Fu;
      *(_QWORD *)&v64 = aSrcCoreRelayLe;
      *((_QWORD *)&v64 + 1) = 37;
      *((_QWORD *)&v66 + 1) = 0x7C00000001LL;
      sub_1414D53A0(&v62, &v63);
    }
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_93;
  }
LABEL_49:
  sub_14169D1D0(&v63, v18, v19);
  if ( v63.m256i_i64[0] == -1 )
  {
    if ( (v63.m256i_i8[8] & 3u) - 2 >= 2 && (v63.m256i_i8[8] & 3) != 0 )
    {
      v61.m256i_i64[1] = v63.m256i_i64[1] - 1;
      v61.m256i_i8[0] = 3;
      sub_1416BCB00(&v61.m256i_u64[1]);
    }
LABEL_80:
    sub_141695A00(&v63, v18, v19);
    if ( v63.m256i_i32[0] == 2 )
    {
      if ( (v63.m256i_i8[8] & 3u) - 2 >= 2 && (v63.m256i_i8[8] & 3) != 0 )
      {
        --v63.m256i_i64[1];
        v63.m256i_i8[0] = 3;
        sub_1416BCB00(&v63.m256i_u64[1]);
      }
      if ( (v3 & 1) != 0 )
      {
        v29 = v56;
        v30 = v57;
        sub_141695A00(&v63, v56, v57);
        if ( v63.m256i_i32[0] != 2 )
        {
          sub_140F6D450(&v63, v29, v30);
          v37 = *(_OWORD *)v63.m256i_i8;
          v38 = *(_OWORD *)&v63.m256i_u64[2];
          if ( v63.m256i_i64[0] != -1 )
            goto LABEL_103;
          v39 = *(_OWORD *)&v63.m256i_u64[1];
          v69 = v39 >> 64;
          v71 = v39;
          if ( (sub_140222E10(v18, v19, v63.m256i_i64[2], v63.m256i_i64[3]) & 1) != 0 )
          {
            sub_140EBCBD0(&v63);
            goto LABEL_107;
          }
LABEL_109:
          sub_1401BD710(v40, v40);
          v31 = 1;
          if ( v71 )
            sub_140001660(v69, v71, 1);
          goto LABEL_90;
        }
        if ( (v63.m256i_i8[8] & 3u) - 2 >= 2 && (v63.m256i_i8[8] & 3) != 0 )
        {
          --v63.m256i_i64[1];
          v63.m256i_i8[0] = 3;
          sub_1416BCB00(&v63.m256i_u64[1]);
        }
      }
    }
    v31 = 0;
    goto LABEL_90;
  }
  v71 = v63.m256i_i64[0];
  *(_OWORD *)v63.m256i_i8 = *(_OWORD *)&v63.m256i_u64[1];
  *(_OWORD *)&v63.m256i_u64[2] = 0;
  v69 = v63.m256i_i64[0];
  v64 = *(_OWORD *)v63.m256i_i8;
  sub_14062D280(&v61, &v63);
  if ( v61.m256i_i8[0] == -1 )
  {
    sub_14002F910(&v61.m256i_u64[1]);
    if ( v71 )
      sub_140001660(v69, v71, 1);
    goto LABEL_80;
  }
  v63 = v61;
  v21 = sub_1416419F0(aOpenaiApiKey_3, 14, &v63);
  v22 = v21
     && *(_BYTE *)v21 == 3
     && *(_QWORD *)(v21 + 24) == v7
     && (unsigned int)sub_1418F4B70(*(_QWORD *)(v21 + 16), v68) == 0;
  v23 = (_BYTE *)sub_1416419F0(aTokens_2, 6, &v63);
  if ( v23 )
    v24 = *v23 == 0;
  else
    v24 = 1;
  sub_14002F9D0(&v63);
  v25 = v24 && v22;
  if ( v71 )
    sub_140001660(v69, v71, 1);
  if ( !v25 )
    goto LABEL_80;
  if ( (v3 & 1) != 0 )
  {
    v26 = v56;
    v27 = v57;
    sub_141695A00(&v63, v56, v57);
    if ( v63.m256i_i32[0] == 2 )
    {
      if ( (v63.m256i_i8[8] & 3u) - 2 >= 2 && (v63.m256i_i8[8] & 3) != 0 )
      {
        --v63.m256i_i64[1];
        v63.m256i_i8[0] = 3;
        sub_1416BCB00(&v63.m256i_u64[1]);
      }
      goto LABEL_75;
    }
    sub_140F6D450(&v63, v26, v27);
    v37 = *(_OWORD *)v63.m256i_i8;
    v38 = *(_OWORD *)&v63.m256i_u64[2];
    if ( v63.m256i_i64[0] != -1 )
    {
LABEL_103:
      v41 = v64;
      v42 = v65;
      v43 = v66;
      *(_OWORD *)(a1 + 80) = v67;
      *(_OWORD *)(a1 + 64) = v43;
      *(_OWORD *)(a1 + 48) = v42;
      *(_OWORD *)(a1 + 32) = v41;
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v37 + 1);
      *(_OWORD *)(a1 + 16) = v38;
      *(_QWORD *)a1 = v37;
      goto LABEL_93;
    }
    v44 = *(_OWORD *)&v63.m256i_u64[1];
    v69 = v44 >> 64;
    v71 = v44;
    if ( (sub_140222E10(v18, v19, v63.m256i_i64[2], v63.m256i_i64[3]) & 1) != 0 )
    {
      sub_140EBCB20(&v63);
LABEL_107:
      *(_OWORD *)(a1 + 80) = v67;
      *(_OWORD *)(a1 + 64) = v66;
      v45 = *(_OWORD *)v63.m256i_i8;
      v46 = *(_OWORD *)&v63.m256i_u64[2];
      v47 = v64;
      *(_OWORD *)(a1 + 48) = v65;
      *(_OWORD *)(a1 + 32) = v47;
      *(_OWORD *)(a1 + 16) = v46;
      *(_OWORD *)a1 = v45;
      v35 = v70;
      v36 = v68;
      if ( v71 )
      {
        v48 = v68;
        v49 = v70;
        sub_140001660(v69, v71, 1);
        v36 = v48;
        v35 = v49;
      }
LABEL_94:
      if ( !v35 )
        goto LABEL_22;
      goto LABEL_95;
    }
    goto LABEL_109;
  }
LABEL_75:
  v28 = sub_141695140(v18, v19);
  if ( v28 )
  {
    v59 = v28;
    v61.m256i_i64[0] = (__int64)&v59;
    v61.m256i_i64[1] = (__int64)sub_1416BB0B0;
    sub_1416ABFD0(&v63, &unk_141A584AE, &v61);
    *(_OWORD *)v61.m256i_i8 = *(_OWORD *)v63.m256i_i8;
    v61.m256i_i64[2] = v63.m256i_i64[2];
    if ( (unsigned int)(v59 & 3) - 2 >= 2 && (v59 & 3) != 0 )
    {
      *(_QWORD *)&v54 = v59 - 1;
      LOBYTE(v53) = 3;
      sub_1416BCB00(&v54);
    }
    *(_QWORD *)(a1 + 24) = v61.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v61.m256i_i8;
    *(_QWORD *)a1 = 10;
    goto LABEL_93;
  }
  v31 = 1;
LABEL_90:
  sub_140F6D270((__int64)&v63, v56, v57, (__int64)&aPWasPreservedl[15]);
  if ( v63.m256i_i32[0] != -1
    || (sub_140F6D270((__int64)&v63, v51, v52, (__int64)&aPWasPreservedl[41]), v63.m256i_i32[0] != -1) )
  {
    *(_OWORD *)(a1 + 80) = v67;
    *(_OWORD *)(a1 + 64) = v66;
    v32 = *(_OWORD *)v63.m256i_i8;
    v33 = *(_OWORD *)&v63.m256i_u64[2];
    v34 = v64;
    *(_OWORD *)(a1 + 48) = v65;
    *(_OWORD *)(a1 + 32) = v34;
    *(_OWORD *)(a1 + 16) = v33;
    *(_OWORD *)a1 = v32;
LABEL_93:
    v35 = v70;
    v36 = v68;
    goto LABEL_94;
  }
  *(_BYTE *)(a1 + 8) = v31;
  *(_QWORD *)a1 = -1;
  v35 = v70;
  v36 = v68;
  if ( v70 )
LABEL_95:
    sub_140001660(v36, v35, 1);
LABEL_22:
  if ( v55 )
    sub_140001660(v56, v55, 1);
  if ( v50 )
    sub_140001660(v51, v50, 1);
  return a1;
}
