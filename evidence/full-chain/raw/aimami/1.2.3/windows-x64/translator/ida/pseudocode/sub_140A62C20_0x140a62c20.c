// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A62C20(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  _DWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r15
  void *v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD v47[3]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v48; // [rsp+68h] [rbp-18h] BYREF
  __int64 v49; // [rsp+78h] [rbp-8h]
  __int128 v50; // [rsp+80h] [rbp+0h] BYREF
  __int64 v51; // [rsp+90h] [rbp+10h]
  __int128 v52; // [rsp+98h] [rbp+18h] BYREF
  __int64 v53; // [rsp+A8h] [rbp+28h]
  __m256i v54; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v55; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v56; // [rsp+E0h] [rbp+60h]
  __int64 v57; // [rsp+E8h] [rbp+68h]
  _OWORD v58[2]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v59; // [rsp+110h] [rbp+90h] BYREF
  __int128 v60; // [rsp+120h] [rbp+A0h]
  __m256i v61; // [rsp+130h] [rbp+B0h] BYREF
  char v62; // [rsp+150h] [rbp+D0h]
  char v63; // [rsp+151h] [rbp+D1h]
  char v64; // [rsp+152h] [rbp+D2h]
  char v65; // [rsp+153h] [rbp+D3h]
  char v66; // [rsp+154h] [rbp+D4h]
  char v67; // [rsp+155h] [rbp+D5h]
  char v68; // [rsp+156h] [rbp+D6h]
  char v69; // [rsp+157h] [rbp+D7h]
  __int64 v70; // [rsp+158h] [rbp+D8h]

  v70 = -2; /*0x140a62c39*/
  v5 = **a2; /*0x140a62c4d*/
  v6 = sub_141433D50(aName_7, 4, a3); /*0x140a62c5c*/
  if ( !v6 || *(_BYTE *)v6 != 3 ) /*0x140a62c69*/
  {
    *(_BYTE *)a1 = -1; /*0x140a62cdf*/
    return a1; /*0x140a62cdf*/
  }
  v8 = *(_QWORD *)(v6 + 16); /*0x140a62c6b*/
  v9 = *(_QWORD *)(v6 + 24); /*0x140a62c6f*/
  v47[0] = v8; /*0x140a62c73*/
  v47[1] = v9; /*0x140a62c77*/
  v10 = *(_QWORD *)(v5 + 16); /*0x140a62c7b*/
  if ( v10 && (v9 < v10 || (unsigned int)sub_1416847B0(*(_QWORD *)(v5 + 8), v8, v10)) ) /*0x140a62c90*/
  {
    v61.m256i_i64[0] = v5; /*0x140a62c99*/
    v61.m256i_i64[1] = (__int64)sub_1400015F0; /*0x140a62ca7*/
    v61.m256i_i64[2] = (__int64)v47; /*0x140a62cb2*/
    v61.m256i_i64[3] = (__int64)sub_14041F680; /*0x140a62cc0*/
    sub_14149C0F0(&v50, &unk_1417A4F77, &v61); /*0x140a62cd8*/
    goto LABEL_17; /*0x140a62cdd*/
  }
  if ( v9 < 0 ) /*0x140a62cfa*/
  {
    v12 = 0; /*0x140a62cfc*/
    goto LABEL_11; /*0x140a62cfc*/
  }
  if ( v9 ) /*0x140a62d0c*/
  {
    nullsub_1(v7); /*0x140a62d0e*/
    v12 = 1; /*0x140a62d13*/
    v13 = sub_140001650(v9, 1); /*0x140a62d21*/
    if ( !v13 ) /*0x140a62d29*/
LABEL_11:
      sub_1416C2D4B(v12, v9); /*0x140a62cff*/
    v14 = v13; /*0x140a62d2b*/
    sub_141684120(v13, v8, v9); /*0x140a62d37*/
  }
  else
  {
    v14 = 1; /*0x140a62d3e*/
  }
  *(_QWORD *)&v50 = v9; /*0x140a62d44*/
  *((_QWORD *)&v50 + 1) = v14; /*0x140a62d48*/
  v51 = v9; /*0x140a62d4c*/
LABEL_17:
  v67 = 1; /*0x140a62d50*/
  v15 = sub_141433D50(aDescription_2, 11, a3); /*0x140a62d66*/
  if ( v15 && *(_BYTE *)v15 == 3 ) /*0x140a62d74*/
  {
    v16 = *(_QWORD *)(v15 + 16); /*0x140a62d76*/
    v9 = *(_QWORD *)(v15 + 24); /*0x140a62d7a*/
  }
  else
  {
    v16 = 0; /*0x140a62d80*/
  }
  v67 = 1; /*0x140a62d83*/
  v17 = sub_141433D50(aParameters_0, 10, a3); /*0x140a62d99*/
  if ( v17 ) /*0x140a62da2*/
  {
    switch ( *(_BYTE *)v17 ) /*0x140a62db5*/
    {
      case 0: /*0x140a62db5*/
        v61.m256i_i8[0] = 0; /*0x140a62f72*/
        break; /*0x140a62f79*/
      case 1: /*0x140a62db5*/
      case 2: /*0x140a62db5*/
        v19 = *(_OWORD *)v17; /*0x140a62db7*/
        *(_OWORD *)&v61.m256i_u64[2] = *(_OWORD *)(v17 + 16); /*0x140a62dbe*/
        *(_OWORD *)v61.m256i_i8 = v19; /*0x140a62dc5*/
        break; /*0x140a62dcc*/
      case 3: /*0x140a62db5*/
        v67 = 1; /*0x140a62f86*/
        sub_14149C500(&v61.m256i_u64[1], v17 + 8); /*0x140a62f90*/
        v61.m256i_i8[0] = 3; /*0x140a62f96*/
        break; /*0x140a62f9d*/
      case 4: /*0x140a62db5*/
        v25 = *(_QWORD *)(v17 + 16); /*0x140a62f54*/
        v26 = *(_QWORD *)(v17 + 24); /*0x140a62f58*/
        v67 = 1; /*0x140a62f5c*/
        sub_1402CE260(&v61.m256i_u64[1], v25, v26); /*0x140a62f63*/
        v61.m256i_i8[0] = 4; /*0x140a62f69*/
        break; /*0x140a62f70*/
      case 5: /*0x140a62db5*/
        if ( *(_QWORD *)(v17 + 24) ) /*0x140a62f9f*/
        {
          v27 = *(_QWORD *)(v17 + 8); /*0x140a62fa6*/
          if ( !v27 ) /*0x140a62fad*/
          {
            v67 = 1; /*0x140a635aa*/
            sub_1416C3040(&off_141747358); /*0x140a635b8*/
          }
          v28 = *(_QWORD *)(v17 + 16); /*0x140a62fba*/
          v67 = 1; /*0x140a62fbe*/
          sub_1402CCD80(&v61.m256i_u64[1], v27, v28); /*0x140a62fc5*/
        }
        else
        {
          v61.m256i_i64[1] = 0; /*0x140a62fcd*/
          v61.m256i_i64[3] = 0; /*0x140a62fd8*/
        }
        v61.m256i_i8[0] = 5; /*0x140a62fe3*/
        break; /*0x140a62fe3*/
    }
    v54 = v61; /*0x140a63015*/
  }
  else
  {
    *(_QWORD *)&v55 = 0; /*0x140a62dd1*/
    v56 = 0; /*0x140a62dd9*/
    nullsub_1(v18); /*0x140a62de1*/
    v20 = (_DWORD *)sub_140001650(4, 1); /*0x140a62df0*/
    if ( !v20 ) /*0x140a62df8*/
      sub_1416C2D4B(1, 4); /*0x140a6367d*/
    *v20 = 1701869940; /*0x140a62dfe*/
    *(_QWORD *)&v59 = 4; /*0x140a62e04*/
    *((_QWORD *)&v59 + 1) = v20; /*0x140a62e0f*/
    *(_QWORD *)&v60 = 4; /*0x140a62e16*/
    nullsub_1(v21); /*0x140a62e21*/
    v22 = sub_140001650(6, 1); /*0x140a62e30*/
    v57 = v22; /*0x140a62e38*/
    if ( !v22 ) /*0x140a62e3c*/
      sub_1416C2D4B(1, 6); /*0x140a6368f*/
    *(_WORD *)(v22 + 4) = 29795; /*0x140a62e42*/
    *(_DWORD *)v22 = 1701470831; /*0x140a62e48*/
    v61.m256i_i8[0] = 3; /*0x140a62e4e*/
    v61.m256i_i64[1] = 6; /*0x140a62e55*/
    v61.m256i_i64[2] = v22; /*0x140a62e60*/
    v61.m256i_i64[3] = 6; /*0x140a62e67*/
    sub_140307860(v58, &v55, &v59, &v61); /*0x140a62e88*/
    if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a62e92*/
      sub_1400104F0(v58); /*0x140a62e98*/
    nullsub_1(v23); /*0x140a62e9e*/
    v24 = (void *)sub_140001650(10, 1); /*0x140a62ead*/
    if ( !v24 ) /*0x140a62eb5*/
      sub_1416C2D4B(1, 10); /*0x140a636a1*/
    qmemcpy(v24, "properties", 10); /*0x140a62ec5*/
    *(_QWORD *)&v59 = 10; /*0x140a62ece*/
    *((_QWORD *)&v59 + 1) = v24; /*0x140a62ed9*/
    *(_QWORD *)&v60 = 10; /*0x140a62ee0*/
    v61.m256i_i64[1] = 0; /*0x140a62eeb*/
    v61.m256i_i64[3] = 0; /*0x140a62ef6*/
    v61.m256i_i8[0] = 5; /*0x140a62f01*/
    sub_140307860(v58, &v55, &v59, &v61); /*0x140a62f1e*/
    if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a62f28*/
      sub_1400104F0(v58); /*0x140a62f2e*/
    *(_OWORD *)&v54.m256i_u64[1] = v55; /*0x140a62f38*/
    v54.m256i_i64[3] = v56; /*0x140a62f40*/
    v54.m256i_i8[0] = 5; /*0x140a62f44*/
  }
  v64 = 1; /*0x140a6302c*/
  v63 = 1; /*0x140a63033*/
  sub_1409EA6C0(&v54); /*0x140a6303e*/
  *(_QWORD *)&v52 = 0; /*0x140a63044*/
  v53 = 0; /*0x140a6304c*/
  nullsub_1(v29); /*0x140a63054*/
  v30 = (_DWORD *)sub_140001650(4, 1); /*0x140a63063*/
  LOBYTE(v57) = v30 == nullptr; /*0x140a6306b*/
  if ( !v30 ) /*0x140a6306f*/
  {
    v69 = 1; /*0x140a635c3*/
    v68 = 1; /*0x140a635ca*/
    sub_1416C2D4B(1, 4); /*0x140a635db*/
  }
  *v30 = 1701667182; /*0x140a63075*/
  *(_QWORD *)&v59 = 4; /*0x140a6307b*/
  *((_QWORD *)&v59 + 1) = v30; /*0x140a63086*/
  *(_QWORD *)&v60 = 4; /*0x140a6308d*/
  v61.m256i_i64[3] = v51; /*0x140a6309c*/
  *(_OWORD *)&v61.m256i_u64[1] = v50; /*0x140a630a7*/
  v61.m256i_i8[0] = 3; /*0x140a630ae*/
  v69 = 1; /*0x140a630b5*/
  v68 = 1; /*0x140a630bc*/
  sub_140307860(v58, &v52, &v59, &v61); /*0x140a630d9*/
  if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a630e3*/
  {
    v69 = 1; /*0x140a630e5*/
    v68 = 1; /*0x140a630ec*/
    sub_1400104F0(v58); /*0x140a630f7*/
  }
  if ( v16 ) /*0x140a63100*/
  {
    nullsub_1(v31); /*0x140a63106*/
    v32 = (void *)sub_140001650(11, 1); /*0x140a63115*/
    if ( !v32 ) /*0x140a6311d*/
    {
      v69 = 1; /*0x140a63653*/
      v68 = 1; /*0x140a6365a*/
      sub_1416C2D4B(1, 11); /*0x140a6366b*/
    }
    qmemcpy(v32, "description", 11); /*0x140a6312d*/
    *(_QWORD *)&v59 = 11; /*0x140a63137*/
    *((_QWORD *)&v59 + 1) = v32; /*0x140a63142*/
    *(_QWORD *)&v60 = 11; /*0x140a63149*/
    if ( v9 < 0 ) /*0x140a63157*/
    {
      v33 = 0; /*0x140a63159*/
      goto LABEL_48; /*0x140a63159*/
    }
    if ( v9 ) /*0x140a63174*/
    {
      nullsub_1(0x7470697263736564LL); /*0x140a63176*/
      v33 = 1; /*0x140a6317b*/
      v34 = sub_140001650(v9, 1); /*0x140a63189*/
      if ( !v34 ) /*0x140a63191*/
      {
LABEL_48:
        v62 = 1; /*0x140a6315c*/
        sub_1416C2D4B(v33, v9); /*0x140a63169*/
      }
      v35 = v34; /*0x140a63193*/
      sub_141684120(v34, v16, v9); /*0x140a6319f*/
    }
    else
    {
      v35 = 1; /*0x140a631a6*/
    }
    v61.m256i_i64[1] = v9; /*0x140a631ac*/
    v61.m256i_i64[2] = v35; /*0x140a631b3*/
    v61.m256i_i64[3] = v9; /*0x140a631ba*/
    v61.m256i_i8[0] = 3; /*0x140a631c1*/
    v62 = 0; /*0x140a631c8*/
    sub_140307860(v58, &v52, &v59, &v61); /*0x140a631e5*/
    if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a631ef*/
    {
      v69 = 1; /*0x140a631f1*/
      v68 = 1; /*0x140a631f8*/
      sub_1400104F0(v58); /*0x140a63203*/
    }
  }
  nullsub_1(v31); /*0x140a63209*/
  v36 = (void *)sub_140001650(10, 1); /*0x140a63218*/
  if ( !v36 ) /*0x140a63220*/
  {
    v69 = 1; /*0x140a635e6*/
    v68 = 1; /*0x140a635ed*/
    sub_1416C2D4B(1, 10); /*0x140a635fe*/
  }
  qmemcpy(v36, "parameters", 10); /*0x140a63230*/
  *(_QWORD *)&v59 = 10; /*0x140a63239*/
  *((_QWORD *)&v59 + 1) = v36; /*0x140a63244*/
  *(_QWORD *)&v60 = 10; /*0x140a6324b*/
  v61 = v54; /*0x140a6325e*/
  v69 = 1; /*0x140a6326c*/
  v68 = 0; /*0x140a63273*/
  sub_140307860(v58, &v52, &v59, &v61); /*0x140a63290*/
  if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a6329a*/
  {
    v69 = 1; /*0x140a6329c*/
    v68 = 0; /*0x140a632a3*/
    sub_1400104F0(v58); /*0x140a632ae*/
  }
  v69 = 1; /*0x140a632b4*/
  v68 = 0; /*0x140a632bb*/
  v37 = (_BYTE *)sub_141433D50(aStrict_0, 6, a3); /*0x140a632d1*/
  if ( v37 && *v37 == 1 && v37[1] == 1 ) /*0x140a632ed*/
  {
    nullsub_1(v38); /*0x140a632f3*/
    v39 = sub_140001650(6, 1); /*0x140a63302*/
    if ( !v39 ) /*0x140a6330a*/
    {
      v69 = 1; /*0x140a636a9*/
      v68 = 0; /*0x140a636b0*/
      sub_1416C2D4B(1, 6); /*0x140a636c1*/
    }
    *(_WORD *)(v39 + 4) = 29795; /*0x140a63310*/
    *(_DWORD *)v39 = 1769108595; /*0x140a63316*/
    *(_QWORD *)&v59 = 6; /*0x140a6331c*/
    *((_QWORD *)&v59 + 1) = v39; /*0x140a63327*/
    *(_QWORD *)&v60 = 6; /*0x140a6332e*/
    v61.m256i_i16[0] = 257; /*0x140a63339*/
    v69 = 1; /*0x140a63342*/
    v68 = 0; /*0x140a63349*/
    sub_140307860(v58, &v52, &v59, &v61); /*0x140a63366*/
    if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a63370*/
    {
      v69 = 1; /*0x140a63372*/
      v68 = 0; /*0x140a63379*/
      sub_1400104F0(v58); /*0x140a63384*/
    }
  }
  *(_QWORD *)&v48 = 0; /*0x140a6338a*/
  v49 = 0; /*0x140a63392*/
  nullsub_1(v38); /*0x140a6339a*/
  v40 = (_DWORD *)sub_140001650(4, 1); /*0x140a633a9*/
  if ( !v40 ) /*0x140a633b1*/
  {
    v66 = 1; /*0x140a63609*/
    sub_1416C2D4B(1, 4); /*0x140a6361a*/
  }
  *v40 = 1701869940; /*0x140a633b7*/
  *(_QWORD *)&v59 = 4; /*0x140a633bd*/
  *((_QWORD *)&v59 + 1) = v40; /*0x140a633c8*/
  *(_QWORD *)&v60 = 4; /*0x140a633cf*/
  nullsub_1(v41); /*0x140a633da*/
  v42 = (_QWORD *)sub_140001650(8, 1); /*0x140a633e9*/
  v47[2] = v42; /*0x140a633f1*/
  if ( !v42 ) /*0x140a633f5*/
    sub_1416C2D4B(1, 8); /*0x140a6362f*/
  *v42 = 0x6E6F6974636E7566LL; /*0x140a63405*/
  v61.m256i_i8[0] = 3; /*0x140a63408*/
  v61.m256i_i64[1] = 8; /*0x140a6340f*/
  v61.m256i_i64[2] = (__int64)v42; /*0x140a6341a*/
  v61.m256i_i64[3] = 8; /*0x140a63421*/
  sub_140307860(v58, &v48, &v59, &v61); /*0x140a63442*/
  if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a6344c*/
  {
    v66 = 1; /*0x140a6344e*/
    sub_1400104F0(v58); /*0x140a63459*/
  }
  nullsub_1(v43); /*0x140a6345f*/
  v44 = (_QWORD *)sub_140001650(8, 1); /*0x140a6346e*/
  if ( !v44 ) /*0x140a63476*/
  {
    v66 = 1; /*0x140a6363a*/
    sub_1416C2D4B(1, 8); /*0x140a6364b*/
  }
  *v44 = 0x6E6F6974636E7566LL; /*0x140a6347c*/
  *(_QWORD *)&v55 = 8; /*0x140a6347f*/
  *((_QWORD *)&v55 + 1) = v44; /*0x140a63487*/
  v56 = 8; /*0x140a6348b*/
  v61.m256i_i64[3] = v53; /*0x140a63497*/
  *(_OWORD *)&v61.m256i_u64[1] = v52; /*0x140a634a2*/
  v61.m256i_i8[0] = 5; /*0x140a634a9*/
  v65 = 1; /*0x140a634b0*/
  sub_140B842D0(v58, &v61); /*0x140a634c2*/
  if ( LOBYTE(v58[0]) == 0xFF ) /*0x140a634cc*/
  {
    *(_QWORD *)&v59 = *((_QWORD *)&v58[0] + 1); /*0x140a63572*/
    sub_1416C3060( /*0x140a6359f*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v59,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A4FA8);
  }
  v60 = v58[1]; /*0x140a634dd*/
  v59 = v58[0]; /*0x140a634e4*/
  v65 = 0; /*0x140a634eb*/
  sub_140307860(v58, &v48, &v55, &v59); /*0x140a63505*/
  if ( LOBYTE(v58[0]) != 0xFF ) /*0x140a6350f*/
    sub_1400104F0(v58); /*0x140a63515*/
  v66 = 0; /*0x140a6351b*/
  sub_1400104F0(&v61); /*0x140a63529*/
  *(_OWORD *)((char *)&v61.m256i_u32[1] + 3) = v48; /*0x140a63537*/
  *(__int64 *)((char *)&v61.m256i_i64[2] + 7) = v49; /*0x140a6353e*/
  *(_BYTE *)a1 = 5; /*0x140a63545*/
  v45 = *(__int64 *)((char *)&v61.m256i_i64[1] + 7); /*0x140a6354f*/
  v46 = *(__int64 *)((char *)&v61.m256i_i64[2] + 7); /*0x140a63556*/
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v61.m256i_i8; /*0x140a6355d*/
  *(_QWORD *)(a1 + 16) = v45; /*0x140a63561*/
  *(_QWORD *)(a1 + 24) = v46; /*0x140a63565*/
  return a1; /*0x140a62ce5*/
}