// win 1.2.1 | module src/core/relay/legacy_virtual_auth.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::legacy_virtual_auth::cleanup | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall cleanup_0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int128 v6; // kr00_16
  __int128 v7; // kr10_16
  __int8 v8; // r15
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  bool v18; // r14
  _BYTE *v19; // rax
  bool v20; // r12
  char v21; // r12
  bool v22; // r14
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // r15
  char v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rbx
  unsigned __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  unsigned __int128 v33; // kr20_16
  __int128 v34; // kr30_16
  __int64 v35; // rax
  __int64 v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // [rsp+30h] [rbp-50h] BYREF
  __int64 v49; // [rsp+38h] [rbp-48h]
  __int64 v50; // [rsp+40h] [rbp-40h]
  __int64 v51; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int128 v52; // [rsp+58h] [rbp-28h] BYREF
  __int64 v53; // [rsp+68h] [rbp-18h] BYREF
  __int64 v54; // [rsp+70h] [rbp-10h]
  __int64 v55; // [rsp+78h] [rbp-8h]
  _DWORD v56[2]; // [rsp+88h] [rbp+8h]
  unsigned __int128 v57; // [rsp+90h] [rbp+10h] BYREF
  __int128 v58; // [rsp+A0h] [rbp+20h]
  __int128 v59; // [rsp+B0h] [rbp+30h]
  __int128 v60; // [rsp+C0h] [rbp+40h]
  __int128 v61; // [rsp+D0h] [rbp+50h]
  __int64 v62; // [rsp+E0h] [rbp+60h]
  char v63; // [rsp+EFh] [rbp+6Fh] BYREF
  unsigned __int128 v64; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v65; // [rsp+100h] [rbp+80h]
  __m512i v66; // [rsp+110h] [rbp+90h]
  __int64 v67; // [rsp+158h] [rbp+D8h]
  __int64 v68; // [rsp+160h] [rbp+E0h]
  __int64 v69; // [rsp+168h] [rbp+E8h]
  __int64 v70; // [rsp+170h] [rbp+F0h]
  __int64 v71; // [rsp+178h] [rbp+F8h]

  v71 = -2; /*0x14057a0f9*/
  v4 = a2[97]; /*0x14057a10a*/
  v5 = a2[98]; /*0x14057a111*/
  sub_141473FA0((unsigned int)&v48, v4, v5, (unsigned int)&unk_14176237F, 24); /*0x14057a132*/
  sub_141473FA0((unsigned int)&v53, v4, v5, (unsigned int)&unk_141762365, 26); /*0x14057a152*/
  read_marker_0(&v64, v4, v5); /*0x14057a162*/
  v6 = v64; /*0x14057a16c*/
  v7 = v65; /*0x14057a177*/
  v8 = v66.m512i_i8[0]; /*0x14057a17e*/
  v56[0] = *(__int32 *)((char *)v66.m512i_i32 + 1); /*0x14057a18c*/
  *(_DWORD *)((char *)v56 + 3) = v66.m512i_i32[1]; /*0x14057a195*/
  if ( (_QWORD)v64 != -1 ) /*0x14057a19c*/
  {
    *(_QWORD *)(a1 + 88) = v66.m512i_i64[7]; /*0x14057a1a9*/
    v9 = *(_OWORD *)&v66.m512i_u64[1]; /*0x14057a1ad*/
    v10 = *(_OWORD *)&v66.m512i_u64[3]; /*0x14057a1b4*/
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v66.m512i_u64[5]; /*0x14057a1c2*/
    *(_OWORD *)(a1 + 56) = v10; /*0x14057a1c6*/
    *(_OWORD *)(a1 + 40) = v9; /*0x14057a1ca*/
    *(_OWORD *)(a1 + 16) = v7; /*0x14057a1ce*/
    *(_BYTE *)(a1 + 32) = v8; /*0x14057a1d6*/
    v11 = *(_DWORD *)((char *)v56 + 3); /*0x14057a1dd*/
    *(_DWORD *)(a1 + 33) = v56[0]; /*0x14057a1e0*/
    *(_DWORD *)(a1 + 36) = v11; /*0x14057a1e3*/
    *(_OWORD *)a1 = v6; /*0x14057a1e6*/
    goto LABEL_3; /*0x14057a1e6*/
  }
  if ( *((_QWORD *)&v64 + 1) == -1 ) /*0x14057a236*/
  {
    *(_BYTE *)(a1 + 8) = 0; /*0x14057a276*/
    *(_QWORD *)a1 = -1; /*0x14057a27a*/
    goto LABEL_3; /*0x14057a281*/
  }
  v67 = v65; /*0x14057a238*/
  v68 = *((_QWORD *)&v64 + 1); /*0x14057a23f*/
  v15 = a2[5]; /*0x14057a246*/
  v16 = a2[6]; /*0x14057a24a*/
  sub_141486710(&v64, v15, v16); /*0x14057a258*/
  if ( (_DWORD)v64 == 2 ) /*0x14057a262*/
  {
    *((_QWORD *)&v57 + 1) = *((_QWORD *)&v64 + 1); /*0x14057a268*/
    *(_QWORD *)&v57 = 2; /*0x14057a26c*/
LABEL_14:
    sub_140018650((char *)&v57 + 8); /*0x14057a2d0*/
    goto LABEL_15; /*0x14057a2d4*/
  }
  v57 = v64; /*0x14057a29f*/
  v62 = v66.m512i_i64[6]; /*0x14057a2aa*/
  v61 = *(_OWORD *)&v66.m512i_u64[4]; /*0x14057a2b5*/
  v60 = *(_OWORD *)&v66.m512i_u64[2]; /*0x14057a2b9*/
  v59 = *(_OWORD *)v66.m512i_i8; /*0x14057a2bd*/
  v58 = v65; /*0x14057a2c1*/
  if ( (_QWORD)v64 == 2 ) /*0x14057a2ca*/
    goto LABEL_14; /*0x14057a2ca*/
  sub_14148D130(&v51, v15, v16); /*0x14057a3e4*/
  if ( v51 == -1 ) /*0x14057a3f2*/
  {
    sub_140018650(&v52); /*0x14057a70c*/
LABEL_58:
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14057a720*/
    {
      *(_QWORD *)&v64 = 0; /*0x14057a726*/
      *((_QWORD *)&v64 + 1) = "codexmate_lib::core::relay::legacy_virtual_auth"; /*0x14057a735*/
      v65 = 0x2Fu; /*0x14057a739*/
      v66.m512i_i64[0] = (__int64)aSrcCoreRelayLe; /*0x14057a756*/
      v66.m512i_i64[1] = 37; /*0x14057a75d*/
      v66.m512i_i64[2] = 2; /*0x14057a768*/
      v66.m512i_i64[3] = (__int64)"codexmate_lib::core::relay::legacy_virtual_auth"; /*0x14057a773*/
      v66.m512i_i64[4] = 47; /*0x14057a77a*/
      v66.m512i_i64[5] = 0x8500000001LL; /*0x14057a78f*/
      v66.m512i_i64[6] = (__int64)&aPWasPreservedl[67]; /*0x14057a79d*/
      v66.m512i_i64[7] = 203; /*0x14057a7a4*/
      sub_1412C36A0(&v63, &v64); /*0x14057a7b7*/
    }
    *(_BYTE *)(a1 + 8) = 0; /*0x14057a7bd*/
    *(_QWORD *)a1 = -1; /*0x14057a7c1*/
    goto LABEL_71; /*0x14057a7c8*/
  }
  v70 = v51; /*0x14057a3f8*/
  v64 = v52; /*0x14057a407*/
  v65 = 0; /*0x14057a412*/
  v69 = v52; /*0x14057a419*/
  *(_OWORD *)v66.m512i_i8 = v52; /*0x14057a420*/
  sub_1408A6200(&v57, &v64); /*0x14057a436*/
  v21 = v57; /*0x14057a43c*/
  sub_1404F99D0(&v57); /*0x14057a444*/
  if ( v70 ) /*0x14057a454*/
    sub_140001660(v69, v70, 1); /*0x14057a463*/
  if ( v21 == -1 ) /*0x14057a46c*/
    goto LABEL_58; /*0x14057a46c*/
LABEL_15:
  sub_14148D130(&v64, v15, v16); /*0x14057a2da*/
  if ( (_QWORD)v64 == -1 ) /*0x14057a2f2*/
  {
    sub_140018650((char *)&v64 + 8); /*0x14057a3a1*/
    goto LABEL_39; /*0x14057a3a7*/
  }
  v70 = v64; /*0x14057a2ff*/
  v64 = __PAIR128__(v65, *((unsigned __int64 *)&v64 + 1)); /*0x14057a30a*/
  v65 = 0; /*0x14057a315*/
  v69 = v64; /*0x14057a31c*/
  *(_OWORD *)v66.m512i_i8 = v64; /*0x14057a323*/
  sub_1408A6200(&v57, &v64); /*0x14057a339*/
  if ( (_BYTE)v57 == 0xFF ) /*0x14057a343*/
  {
    sub_1404F99D0(&v57); /*0x14057a47b*/
    if ( v70 ) /*0x14057a48b*/
      sub_140001660(v69, v70, 1); /*0x14057a49e*/
LABEL_39:
    sub_141486710(&v64, v15, v16); /*0x14057a519*/
    if ( (_DWORD)v64 == 2 ) /*0x14057a52d*/
    {
      *((_QWORD *)&v57 + 1) = *((_QWORD *)&v64 + 1); /*0x14057a533*/
      *(_QWORD *)&v57 = 2; /*0x14057a537*/
    }
    else
    {
      v57 = v64; /*0x14057a55a*/
      v62 = v66.m512i_i64[6]; /*0x14057a565*/
      v61 = *(_OWORD *)&v66.m512i_u64[4]; /*0x14057a570*/
      v60 = *(_OWORD *)&v66.m512i_u64[2]; /*0x14057a574*/
      v59 = *(_OWORD *)v66.m512i_i8; /*0x14057a578*/
      v58 = v65; /*0x14057a57c*/
      if ( (_QWORD)v64 != 2 ) /*0x14057a585*/
        goto LABEL_47; /*0x14057a585*/
    }
    sub_140018650((char *)&v57 + 8); /*0x14057a58f*/
    if ( v8 == 1 ) /*0x14057a599*/
    {
      v25 = v54; /*0x14057a59f*/
      v26 = v55; /*0x14057a5a3*/
      sub_141486710(&v64, v54, v55); /*0x14057a5b1*/
      if ( (_DWORD)v64 == 2 ) /*0x14057a5bb*/
      {
        *((_QWORD *)&v57 + 1) = *((_QWORD *)&v64 + 1); /*0x14057a5c1*/
        *(_QWORD *)&v57 = 2; /*0x14057a5c5*/
      }
      else
      {
        v57 = v64; /*0x14057a5e8*/
        v62 = v66.m512i_i64[6]; /*0x14057a5f3*/
        v61 = *(_OWORD *)&v66.m512i_u64[4]; /*0x14057a5fe*/
        v60 = *(_OWORD *)&v66.m512i_u64[2]; /*0x14057a602*/
        v59 = *(_OWORD *)v66.m512i_i8; /*0x14057a606*/
        v58 = v65; /*0x14057a60a*/
        if ( (_QWORD)v64 != 2 ) /*0x14057a613*/
        {
          read_user_owned_backup(&v64, v25, v26); /*0x14057a7d7*/
          v33 = v64; /*0x14057a7e1*/
          v34 = v65; /*0x14057a7ec*/
          if ( (_QWORD)v64 != -1 ) /*0x14057a7f7*/
            goto LABEL_70; /*0x14057a7f7*/
          v70 = *((_QWORD *)&v64 + 1); /*0x14057a7fd*/
          v69 = v65; /*0x14057a80a*/
          v35 = sub_1408726C0(v15, v16, v65, *((unsigned __int64 *)&v65 + 1)); /*0x14057a811*/
          if ( v35 ) /*0x14057a81a*/
          {
            _u7b__u7b_closure_u7d__u7d__7(&v64, v35); /*0x14057a827*/
            goto LABEL_76; /*0x14057a82d*/
          }
LABEL_78:
          v27 = 1; /*0x14057aa41*/
          if ( v70 ) /*0x14057aa4e*/
            sub_140001660(v69, v70, 1); /*0x14057aa61*/
          goto LABEL_48; /*0x14057aa66*/
        }
      }
      sub_140018650((char *)&v57 + 8); /*0x14057a61d*/
    }
LABEL_47:
    v27 = 0; /*0x14057a623*/
    goto LABEL_48; /*0x14057a623*/
  }
  v65 = v58; /*0x14057a351*/
  v64 = v57; /*0x14057a358*/
  v17 = sub_141433D50(aOpenaiApiKey_4, 14, &v64); /*0x14057a36c*/
  v18 = v17 /*0x14057a397*/
     && *(_BYTE *)v17 == 3
     && *(_QWORD *)(v17 + 24) == *((_QWORD *)&v7 + 1)
     && (unsigned int)sub_1416847B0(*(_QWORD *)(v17 + 16), v67, *((_QWORD *)&v7 + 1)) == 0;
  v19 = (_BYTE *)sub_141433D50(aTokens_2, 6, &v64); /*0x14057a3bf*/
  if ( v19 ) /*0x14057a3c8*/
    v20 = *v19 == 0; /*0x14057a3d1*/
  else
    v20 = 1; /*0x14057a4a5*/
  sub_1400104F0(&v64); /*0x14057a4ac*/
  v22 = v20 && v18; /*0x14057a4b2*/
  if ( v70 ) /*0x14057a4bf*/
    sub_140001660(v69, v70, 1); /*0x14057a4ce*/
  if ( !v22 ) /*0x14057a4d6*/
    goto LABEL_39; /*0x14057a4d6*/
  if ( (v8 & 1) != 0 ) /*0x14057a4dc*/
  {
    v23 = v54; /*0x14057a4e2*/
    v24 = v55; /*0x14057a4e6*/
    sub_141486710(&v64, v54, v55); /*0x14057a4f4*/
    if ( (_DWORD)v64 == 2 ) /*0x14057a4fe*/
    {
      *((_QWORD *)&v57 + 1) = *((_QWORD *)&v64 + 1); /*0x14057a508*/
      *(_QWORD *)&v57 = 2; /*0x14057a50c*/
LABEL_65:
      sub_140018650((char *)&v57 + 8); /*0x14057a87c*/
      goto LABEL_66; /*0x14057a880*/
    }
    v57 = v64; /*0x14057a84b*/
    v62 = v66.m512i_i64[6]; /*0x14057a856*/
    v61 = *(_OWORD *)&v66.m512i_u64[4]; /*0x14057a861*/
    v60 = *(_OWORD *)&v66.m512i_u64[2]; /*0x14057a865*/
    v59 = *(_OWORD *)v66.m512i_i8; /*0x14057a869*/
    v58 = v65; /*0x14057a86d*/
    if ( (_QWORD)v64 == 2 ) /*0x14057a876*/
      goto LABEL_65; /*0x14057a876*/
    read_user_owned_backup(&v64, v23, v24); /*0x14057a90b*/
    v33 = v64; /*0x14057a92b*/
    v34 = v65; /*0x14057a92b*/
    if ( (_QWORD)v64 != -1 ) /*0x14057a92b*/
    {
LABEL_70:
      v37 = *(_OWORD *)v66.m512i_i8; /*0x14057a92d*/
      v38 = *(_OWORD *)&v66.m512i_u64[2]; /*0x14057a934*/
      v39 = *(_OWORD *)&v66.m512i_u64[4]; /*0x14057a93b*/
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v66.m512i_u64[6]; /*0x14057a949*/
      *(_OWORD *)(a1 + 64) = v39; /*0x14057a94d*/
      *(_OWORD *)(a1 + 48) = v38; /*0x14057a951*/
      *(_OWORD *)(a1 + 32) = v37; /*0x14057a955*/
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v33 + 1); /*0x14057a959*/
      *(_OWORD *)(a1 + 16) = v34; /*0x14057a95d*/
      *(_QWORD *)a1 = v33; /*0x14057a965*/
      goto LABEL_71; /*0x14057a965*/
    }
    v70 = *((_QWORD *)&v64 + 1); /*0x14057a98f*/
    v69 = v65; /*0x14057a99c*/
    v42 = sub_1408726C0(v15, v16, v65, *((unsigned __int64 *)&v65 + 1)); /*0x14057a9a3*/
    if ( v42 ) /*0x14057a9ac*/
    {
      _u7b__u7b_closure_u7d__u7d__6(&v64, v42); /*0x14057a9b9*/
LABEL_76:
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v66.m512i_u64[6]; /*0x14057a9bf*/
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v66.m512i_u64[4]; /*0x14057a9d1*/
      v43 = v64; /*0x14057a9d5*/
      v44 = v65; /*0x14057a9d9*/
      v45 = *(_OWORD *)v66.m512i_i8; /*0x14057a9e0*/
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v66.m512i_u64[2]; /*0x14057a9ee*/
      *(_OWORD *)(a1 + 32) = v45; /*0x14057a9f2*/
      *(_OWORD *)(a1 + 16) = v44; /*0x14057a9f6*/
      *(_OWORD *)a1 = v43; /*0x14057a9fa*/
      v40 = v68; /*0x14057aa07*/
      v41 = v67; /*0x14057aa0e*/
      if ( v70 ) /*0x14057aa15*/
      {
        v46 = v67; /*0x14057aa21*/
        v47 = v68; /*0x14057aa2b*/
        sub_140001660(v69, v70, 1); /*0x14057aa31*/
        v41 = v46; /*0x14057aa36*/
        v40 = v47; /*0x14057aa39*/
      }
      goto LABEL_72; /*0x14057aa3c*/
    }
    goto LABEL_78; /*0x14057a9ac*/
  }
LABEL_66:
  v36 = sub_141485EF0(v15, v16); /*0x14057a886*/
  if ( v36 ) /*0x14057a895*/
  {
    v51 = v36; /*0x14057a897*/
    *(_QWORD *)&v57 = &v51; /*0x14057a89f*/
    *((_QWORD *)&v57 + 1) = sub_141490720; /*0x14057a8aa*/
    sub_14149C0F0(&v64, &unk_141760CFE, &v57); /*0x14057a8bd*/
    v57 = v64; /*0x14057a8c7*/
    *(_QWORD *)&v58 = v65; /*0x14057a8d2*/
    sub_140018650(&v51); /*0x14057a8da*/
    *(_QWORD *)(a1 + 24) = v58; /*0x14057a8e4*/
    *(_OWORD *)(a1 + 8) = v57; /*0x14057a8ec*/
    *(_QWORD *)a1 = 10; /*0x14057a8f0*/
    goto LABEL_71; /*0x14057a8f7*/
  }
  v27 = 1; /*0x14057a8f9*/
LABEL_48:
  v28 = v54; /*0x14057a626*/
  sub_140579700(&v64, v54, v55, &aPWasPreservedl[15]); /*0x14057a63c*/
  if ( (_DWORD)v64 != -1 || (v29 = v49, sub_140579700(&v64, v49, v50, &aPWasPreservedl[41]), (_DWORD)v64 != -1) ) /*0x14057a668*/
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v66.m512i_u64[6]; /*0x14057a671*/
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v66.m512i_u64[4]; /*0x14057a67c*/
    v30 = v64; /*0x14057a680*/
    v31 = v65; /*0x14057a684*/
    v32 = *(_OWORD *)v66.m512i_i8; /*0x14057a68b*/
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v66.m512i_u64[2]; /*0x14057a699*/
    *(_OWORD *)(a1 + 32) = v32; /*0x14057a69d*/
    *(_OWORD *)(a1 + 16) = v31; /*0x14057a6a1*/
    *(_OWORD *)a1 = v30; /*0x14057a6a5*/
LABEL_71:
    v40 = v68; /*0x14057a968*/
    v41 = v67; /*0x14057a96f*/
LABEL_72:
    if ( v40 ) /*0x14057a979*/
      sub_140001660(v41, v40, 1); /*0x14057a985*/
LABEL_3:
    if ( v53 ) /*0x14057a1f4*/
      sub_140001660(v54, v53, 1); /*0x14057a200*/
    v12 = v48; /*0x14057a205*/
    if ( v48 ) /*0x14057a20c*/
    {
      v13 = v49; /*0x14057a20e*/
LABEL_7:
      sub_140001660(v13, v12, 1); /*0x14057a218*/
      return a1; /*0x14057a218*/
    }
    return a1; /*0x14057a20c*/
  }
  *(_BYTE *)(a1 + 8) = v27; /*0x14057a6ad*/
  *(_QWORD *)a1 = -1; /*0x14057a6b1*/
  if ( v68 ) /*0x14057a6c9*/
    sub_140001660(v67, v68, 1); /*0x14057a6d1*/
  if ( v53 ) /*0x14057a6dd*/
    sub_140001660(v28, v53, 1); /*0x14057a6e8*/
  v12 = v48; /*0x14057a6ed*/
  if ( v48 ) /*0x14057a6f4*/
  {
    v13 = v29; /*0x14057a700*/
    goto LABEL_7; /*0x14057a703*/
  }
  return a1; /*0x14057a220*/
}