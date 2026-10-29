// win 1.2.7 latest-exe | module src/core/relay/legacy_virtual_auth.rs | ea 0x140be0ed0 | successor of pre-update 0x140f6db20 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.906, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140BE0ED0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int8 (__fastcall *v15)(_QWORD); // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int8 v19; // r12
  __int64 v20; // rax
  bool v21; // r14
  _BYTE *v22; // rax
  bool v23; // r12
  bool v24; // r14
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  char v30; // di
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int128 v36; // kr40_16
  __int128 v37; // kr50_16
  unsigned __int128 v38; // kr00_16
  __int64 v39; // rdx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  unsigned __int128 v43; // kr10_16
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // [rsp+30h] [rbp-50h] BYREF
  __int64 v50; // [rsp+38h] [rbp-48h]
  __int64 v51; // [rsp+40h] [rbp-40h]
  __int64 v52; // [rsp+50h] [rbp-30h] BYREF
  __int128 v53; // [rsp+58h] [rbp-28h] BYREF
  __int64 v54; // [rsp+70h] [rbp-10h] BYREF
  __int64 v55; // [rsp+78h] [rbp-8h]
  __int64 v56; // [rsp+80h] [rbp+0h]
  unsigned __int64 v57; // [rsp+90h] [rbp+10h] BYREF
  __int64 v58; // [rsp+98h] [rbp+18h] BYREF
  __int64 (__fastcall *v59)(_QWORD, _QWORD); // [rsp+A0h] [rbp+20h] BYREF
  char v60; // [rsp+AFh] [rbp+2Fh] BYREF
  __m256i v61; // [rsp+B0h] [rbp+30h] BYREF
  __m256i v62; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v63; // [rsp+F0h] [rbp+70h]
  __int128 v64; // [rsp+100h] [rbp+80h]
  __int128 v65; // [rsp+110h] [rbp+90h]
  __int128 v66; // [rsp+120h] [rbp+A0h]
  __int64 v67; // [rsp+138h] [rbp+B8h]
  __int64 v68; // [rsp+140h] [rbp+C0h]
  __int128 v69; // [rsp+148h] [rbp+C8h]
  char v70; // [rsp+15Fh] [rbp+DFh]
  __int64 v71; // [rsp+160h] [rbp+E0h]

  v71 = -2;
  v6 = a2[97];
  v7 = a2[98];
  sub_1416B18A0((unsigned int)&v49, v6, v7, (unsigned int)&unk_141A8A12A, 24);
  sub_1416B18A0((unsigned int)&v54, v6, v7, (unsigned int)&unk_141A8A110, 26);
  sub_1416B18A0((unsigned int)&v52, v6, v7, (unsigned int)&unk_141A8A12A, 24);
  v67 = v53;
  sub_1416CC1A0(&v61, v53, *((_QWORD *)&v53 + 1));
  v10 = v61.m256i_u64[1];
  if ( v61.m256i_i64[0] == -1 )
  {
    switch ( v61.m256i_i8[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(v61.m256i_i64[1] + 16) )
          goto LABEL_12;
        goto LABEL_35;
      case 1:
        if ( !*(_BYTE *)(v61.m256i_i64[1] + 31) )
          goto LABEL_35;
        goto LABEL_12;
      case 2:
        v70 = 1;
        v15 = *(unsigned __int8 (__fastcall **)(_QWORD))(sub_1416E2EE0(v9, v8) + 8);
        v70 = 1;
        if ( v15(HIDWORD(v10)) )
          goto LABEL_12;
        goto LABEL_35;
      case 3:
        if ( v61.m256i_i8[12] )
        {
LABEL_12:
          v57 = v10;
          v58 = (__int64)&v57;
          v59 = sub_1416EA080;
          sub_1416DAFA0(&v62, &unk_141A8A142, &v58);
          v2 = v62.m256i_i64[1];
          v11 = v62.m256i_i64[0];
          v10 = v62.m256i_u64[2];
          if ( (v57 & 3) - 2 >= 2 && (v57 & 3) != 0 )
          {
            v59 = v57 - 1;
            LOBYTE(v58) = 3;
            v70 = 0;
            sub_1416EBAD0((__int64 (__fastcall **)(_QWORD, _QWORD))&v59);
          }
          v12 = 10;
          goto LABEL_16;
        }
LABEL_35:
        if ( (v10 & 3) - 2 >= 2 && (v10 & 3) != 0 )
        {
          v62.m256i_i64[1] = --v10;
          v62.m256i_i8[0] = 3;
          v70 = 0;
          sub_1416EBAD0(&v62.m256i_u64[1]);
        }
        v12 = -1;
        v11 = -1;
        v14 = v52;
        if ( v52 )
          goto LABEL_17;
        break;
    }
  }
  else
  {
    v69 = *(_OWORD *)v61.m256i_i8;
    *(_OWORD *)v62.m256i_i8 = *(_OWORD *)&v61.m256i_u64[1];
    *(_OWORD *)&v62.m256i_u64[2] = 0;
    v63 = *(_OWORD *)&v61.m256i_u64[1];
    sub_140D8CD00(&v61, &v62);
    v2 = v61.m256i_i64[1];
    v11 = v61.m256i_i64[0];
    if ( v61.m256i_i64[0] == -1 )
    {
      v58 = v61.m256i_i64[1];
      v61.m256i_i64[0] = (__int64)&v58;
      v61.m256i_i64[1] = (__int64)sub_14166FAD0;
      sub_1416DAFA0(&v62, &unk_141A899B0, &v61);
      v2 = v62.m256i_i64[1];
      v11 = v62.m256i_i64[0];
      v10 = v62.m256i_u64[2];
      sub_140032F30(&v58);
      v12 = 10;
      v13 = v69;
      if ( !(_QWORD)v69 )
        goto LABEL_16;
    }
    else
    {
      v3 = v61.m256i_i64[3];
      v10 = v61.m256i_u64[2];
      v12 = -1;
      v13 = v69;
      if ( !(_QWORD)v69 )
      {
LABEL_16:
        v14 = v52;
        if ( !v52 )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
    sub_140001660(*((_QWORD *)&v69 + 1), v13, 1);
    v14 = v52;
    if ( v52 )
LABEL_17:
      sub_140001660(v67, v14, 1);
  }
LABEL_18:
  if ( (_DWORD)v12 != -1 )
  {
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a1 + 32) = v3;
    goto LABEL_20;
  }
  if ( v11 == -1 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_20;
  }
  v67 = v2;
  *(_QWORD *)&v69 = v11;
  v17 = a2[5];
  v18 = a2[6];
  sub_1416C49D0(&v62, v17, v18);
  if ( v62.m256i_i32[0] == 2 )
  {
    if ( (v62.m256i_i8[8] & 3u) - 2 >= 2 && (v62.m256i_i8[8] & 3) != 0 )
    {
      --v62.m256i_i64[1];
      v62.m256i_i8[0] = 3;
      sub_1416EBAD0(&v62.m256i_u64[1]);
    }
    goto LABEL_49;
  }
  sub_1416CC1A0(&v52, v17, v18);
  if ( v52 == -1 )
  {
    if ( (unsigned int)(v53 & 3) - 2 >= 2 && (v53 & 3) != 0 )
    {
      v62.m256i_i64[1] = v53 - 1;
      v62.m256i_i8[0] = 3;
      sub_1416EBAD0(&v62.m256i_u64[1]);
    }
    goto LABEL_55;
  }
  *((_QWORD *)&v69 + 1) = v52;
  *(_OWORD *)v62.m256i_i8 = v53;
  *(_OWORD *)&v62.m256i_u64[2] = 0;
  v68 = v53;
  v63 = v53;
  sub_140D8B500(&v61, (__int128 *)v62.m256i_i8);
  v19 = v61.m256i_i8[0];
  if ( v61.m256i_i8[0] == -1 )
    sub_140032F30(&v61.m256i_u64[1]);
  else
    sub_1406C0ED0(&v61);
  if ( *((_QWORD *)&v69 + 1) )
    sub_140001660(v68, *((_QWORD *)&v69 + 1), 1);
  if ( v19 == -1 )
  {
LABEL_55:
    if ( *(_QWORD *)off_14223FF10 >= 2u )
    {
      *(_QWORD *)&v64 = 2;
      *((_QWORD *)&v64 + 1) = "codexmate_lib::core::relay::legacy_virtual_authImage URLs must use HTTP(S) without embedde"
                              "d credentialsInvalid image URL;base64,Unsupported image data URI; use a base64 PNG, JPEG, "
                              "GIF or WebP image";
      *(_QWORD *)&v65 = 47;
      *(_QWORD *)&v66 = &aPWasPreservedl[67];
      *((_QWORD *)&v66 + 1) = 203;
      v62.m256i_i64[0] = 0;
      v62.m256i_i64[1] = (__int64)"codexmate_lib::core::relay::legacy_virtual_authImage URLs must use HTTP(S) without emb"
                                  "edded credentialsInvalid image URL;base64,Unsupported image data URI; use a base64 PNG"
                                  ", JPEG, GIF or WebP image";
      *(_OWORD *)&v62.m256i_u64[2] = 0x2Fu;
      *(_QWORD *)&v63 = aSrcCoreRelayLe;
      *((_QWORD *)&v63 + 1) = 37;
      *((_QWORD *)&v65 + 1) = 0x7C00000001LL;
      sub_141503E20(&v60, &v62);
    }
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_93;
  }
LABEL_49:
  sub_1416CC1A0(&v62, v17, v18);
  if ( v62.m256i_i64[0] == -1 )
  {
    if ( (v62.m256i_i8[8] & 3u) - 2 >= 2 && (v62.m256i_i8[8] & 3) != 0 )
    {
      v61.m256i_i64[1] = v62.m256i_i64[1] - 1;
      v61.m256i_i8[0] = 3;
      sub_1416EBAD0(&v61.m256i_u64[1]);
    }
LABEL_80:
    sub_1416C49D0(&v62, v17, v18);
    if ( v62.m256i_i32[0] == 2 )
    {
      if ( (v62.m256i_i8[8] & 3u) - 2 >= 2 && (v62.m256i_i8[8] & 3) != 0 )
      {
        --v62.m256i_i64[1];
        v62.m256i_i8[0] = 3;
        sub_1416EBAD0(&v62.m256i_u64[1]);
      }
      if ( (v3 & 1) != 0 )
      {
        v28 = v55;
        v29 = v56;
        sub_1416C49D0(&v62, v55, v56);
        if ( v62.m256i_i32[0] != 2 )
        {
          sub_140BE0800(&v62, v28, v29);
          v36 = *(_OWORD *)v62.m256i_i8;
          v37 = *(_OWORD *)&v62.m256i_u64[2];
          if ( v62.m256i_i64[0] != -1 )
            goto LABEL_103;
          v38 = *(_OWORD *)&v62.m256i_u64[1];
          v68 = v38 >> 64;
          *((_QWORD *)&v69 + 1) = v38;
          if ( (sub_1407C8880(v17, v18, v62.m256i_i64[2], v62.m256i_i64[3]) & 1) != 0 )
          {
            sub_140BDD330(&v62);
            goto LABEL_107;
          }
LABEL_109:
          sub_1407B9160(v39);
          v30 = 1;
          if ( *((_QWORD *)&v69 + 1) )
            sub_140001660(v68, *((_QWORD *)&v69 + 1), 1);
          goto LABEL_90;
        }
        if ( (v62.m256i_i8[8] & 3u) - 2 >= 2 && (v62.m256i_i8[8] & 3) != 0 )
        {
          --v62.m256i_i64[1];
          v62.m256i_i8[0] = 3;
          sub_1416EBAD0(&v62.m256i_u64[1]);
        }
      }
    }
    v30 = 0;
    goto LABEL_90;
  }
  *((_QWORD *)&v69 + 1) = v62.m256i_i64[0];
  *(_OWORD *)v62.m256i_i8 = *(_OWORD *)&v62.m256i_u64[1];
  *(_OWORD *)&v62.m256i_u64[2] = 0;
  v68 = v62.m256i_i64[0];
  v63 = *(_OWORD *)v62.m256i_i8;
  sub_140D8B500(&v61, (__int128 *)v62.m256i_i8);
  if ( v61.m256i_i8[0] == -1 )
  {
    sub_140032F30(&v61.m256i_u64[1]);
    if ( *((_QWORD *)&v69 + 1) )
      sub_140001660(v68, *((_QWORD *)&v69 + 1), 1);
    goto LABEL_80;
  }
  v62 = v61;
  v20 = sub_1416724D0(aOpenaiApiKey_4, 14, &v62);
  v21 = v20
     && *(_BYTE *)v20 == 3
     && *(_QWORD *)(v20 + 24) == v10
     && (unsigned int)sub_141923B40(*(_QWORD *)(v20 + 16), v67, v10) == 0;
  v22 = (_BYTE *)sub_1416724D0(aTokens_3, 6, &v62);
  if ( v22 )
    v23 = *v22 == 0;
  else
    v23 = 1;
  sub_1406C0ED0(&v62);
  v24 = v23 && v21;
  if ( *((_QWORD *)&v69 + 1) )
    sub_140001660(v68, *((_QWORD *)&v69 + 1), 1);
  if ( !v24 )
    goto LABEL_80;
  if ( (v3 & 1) != 0 )
  {
    v25 = v55;
    v26 = v56;
    sub_1416C49D0(&v62, v55, v56);
    if ( v62.m256i_i32[0] == 2 )
    {
      if ( (v62.m256i_i8[8] & 3u) - 2 >= 2 && (v62.m256i_i8[8] & 3) != 0 )
      {
        --v62.m256i_i64[1];
        v62.m256i_i8[0] = 3;
        sub_1416EBAD0(&v62.m256i_u64[1]);
      }
      goto LABEL_75;
    }
    sub_140BE0800(&v62, v25, v26);
    v36 = *(_OWORD *)v62.m256i_i8;
    v37 = *(_OWORD *)&v62.m256i_u64[2];
    if ( v62.m256i_i64[0] != -1 )
    {
LABEL_103:
      v40 = v63;
      v41 = v64;
      v42 = v65;
      *(_OWORD *)(a1 + 80) = v66;
      *(_OWORD *)(a1 + 64) = v42;
      *(_OWORD *)(a1 + 48) = v41;
      *(_OWORD *)(a1 + 32) = v40;
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v36 + 1);
      *(_OWORD *)(a1 + 16) = v37;
      *(_QWORD *)a1 = v36;
      goto LABEL_93;
    }
    v43 = *(_OWORD *)&v62.m256i_u64[1];
    v68 = v43 >> 64;
    *((_QWORD *)&v69 + 1) = v43;
    if ( (sub_1407C8880(v17, v18, v62.m256i_i64[2], v62.m256i_i64[3]) & 1) != 0 )
    {
      sub_140BDD280(&v62);
LABEL_107:
      *(_OWORD *)(a1 + 80) = v66;
      *(_OWORD *)(a1 + 64) = v65;
      v44 = *(_OWORD *)v62.m256i_i8;
      v45 = *(_OWORD *)&v62.m256i_u64[2];
      v46 = v63;
      *(_OWORD *)(a1 + 48) = v64;
      *(_OWORD *)(a1 + 32) = v46;
      *(_OWORD *)(a1 + 16) = v45;
      *(_OWORD *)a1 = v44;
      v34 = v69;
      v35 = v67;
      if ( *((_QWORD *)&v69 + 1) )
      {
        v47 = v67;
        v48 = v69;
        sub_140001660(v68, *((_QWORD *)&v69 + 1), 1);
        v35 = v47;
        v34 = v48;
      }
LABEL_94:
      if ( !v34 )
        goto LABEL_20;
      goto LABEL_95;
    }
    goto LABEL_109;
  }
LABEL_75:
  v27 = sub_1416C4110(v17, v18);
  if ( v27 )
  {
    v58 = v27;
    v61.m256i_i64[0] = (__int64)&v58;
    v61.m256i_i64[1] = (__int64)sub_1416EA080;
    sub_1416DAFA0(&v62, &unk_141A89AB6, &v61);
    *(_OWORD *)v61.m256i_i8 = *(_OWORD *)v62.m256i_i8;
    v61.m256i_i64[2] = v62.m256i_i64[2];
    if ( (unsigned int)(v58 & 3) - 2 >= 2 && (v58 & 3) != 0 )
    {
      *(_QWORD *)&v53 = v58 - 1;
      LOBYTE(v52) = 3;
      sub_1416EBAD0(&v53);
    }
    *(_QWORD *)(a1 + 24) = v61.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v61.m256i_i8;
    *(_QWORD *)a1 = 10;
    goto LABEL_93;
  }
  v30 = 1;
LABEL_90:
  sub_140BE0620(&v62, v55, v56, &aPWasPreservedl[15]);
  if ( v62.m256i_i32[0] != -1 || (sub_140BE0620(&v62, v50, v51, &aPWasPreservedl[41]), v62.m256i_i32[0] != -1) )
  {
    *(_OWORD *)(a1 + 80) = v66;
    *(_OWORD *)(a1 + 64) = v65;
    v31 = *(_OWORD *)v62.m256i_i8;
    v32 = *(_OWORD *)&v62.m256i_u64[2];
    v33 = v63;
    *(_OWORD *)(a1 + 48) = v64;
    *(_OWORD *)(a1 + 32) = v33;
    *(_OWORD *)(a1 + 16) = v32;
    *(_OWORD *)a1 = v31;
LABEL_93:
    v34 = v69;
    v35 = v67;
    goto LABEL_94;
  }
  *(_BYTE *)(a1 + 8) = v30;
  *(_QWORD *)a1 = -1;
  v34 = v69;
  v35 = v67;
  if ( (_QWORD)v69 )
LABEL_95:
    sub_140001660(v35, v34, 1);
LABEL_20:
  if ( v54 )
    sub_140001660(v55, v54, 1);
  if ( v49 )
    sub_140001660(v50, v49, 1);
  return a1;
}
