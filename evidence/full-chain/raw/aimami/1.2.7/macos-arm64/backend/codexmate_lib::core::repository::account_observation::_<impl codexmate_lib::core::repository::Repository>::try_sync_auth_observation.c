// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::account_observation::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::try_sync_auth_observation::h1379f51b3428065f; addr: 0x100adfb40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_QWORD *__fastcall codexmate_lib::core::repository::account_observation::_$LT$impl$u20$codexmate_lib..core..repository..Repository$GT$::try_sync_auth_observation::h1379f51b3428065f(
        void *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        double a5)
{
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // r12d
  _DWORD *v10; // rsi
  _DWORD *v11; // rdi
  __int64 i; // rcx
  int v13; // eax
  __int64 v14; // r12
  unsigned __int64 v15; // r12
  int v16; // r15d
  __int64 v17; // r15
  __int64 v18; // rbx
  int v19; // r12d
  _DWORD *v20; // rsi
  _DWORD *v21; // rdi
  __int64 n; // rcx
  __int64 v23; // r14
  __int64 v24; // rbx
  int v25; // r15d
  __int64 v26; // r13
  _DWORD *v27; // rsi
  _DWORD *v28; // rdi
  __int64 jj; // rcx
  _QWORD *v30; // r12
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // r15
  char v34; // bl
  _QWORD *v35; // rax
  _QWORD *v36; // r14
  _DWORD *v37; // rdi
  _DWORD *v38; // rsi
  __int64 j; // rcx
  __int64 v40; // r15
  _QWORD *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned __int64 v44; // r15
  __int64 v45; // rdx
  int v46; // ecx
  _DWORD *v47; // rdi
  _DWORD *v48; // rsi
  __int64 ii; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  _DWORD *v52; // rdi
  _DWORD *v53; // rsi
  __int64 kk; // rcx
  __int64 v55; // rbx
  _DWORD *v56; // rsi
  _DWORD *v57; // rdi
  __int64 k; // rcx
  _DWORD *v59; // rdi
  _DWORD *v60; // rsi
  __int64 m; // rcx
  __int64 v62; // rax
  _QWORD *v63; // r14
  __int64 v65; // rax
  __int64 v66; // rbx
  size_t v67; // r15
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // r9
  __int64 v71; // rsi
  __int64 v72; // rbx
  char v73; // al
  __int64 v74; // r8
  __int64 v75; // r12
  __int64 v76; // r14
  char v77; // bl
  __int64 v78; // r14
  int v79; // r15d
  _QWORD *v80; // r12
  _QWORD *v81; // rbx
  unsigned __int64 v82; // r12
  _QWORD *v83; // rdx
  _QWORD *v84; // r8
  __int64 v85; // rcx
  int v86; // eax
  _QWORD v87[92]; // [rsp+10h] [rbp-CF0h] BYREF
  _BYTE v88[1136]; // [rsp+2F0h] [rbp-A10h] BYREF
  _BYTE v89[104]; // [rsp+760h] [rbp-5A0h] BYREF
  _QWORD __dst[129]; // [rsp+7C8h] [rbp-538h] BYREF
  _QWORD v91[11]; // [rsp+BD0h] [rbp-130h] BYREF
  int v92[2]; // [rsp+C28h] [rbp-D8h]
  __int64 v93; // [rsp+C30h] [rbp-D0h]
  int v94[2]; // [rsp+C38h] [rbp-C8h]
  __int64 v95; // [rsp+C40h] [rbp-C0h] BYREF
  __int64 v96; // [rsp+C48h] [rbp-B8h]
  __int64 v97; // [rsp+C50h] [rbp-B0h]
  __int64 v98; // [rsp+C58h] [rbp-A8h]
  __int64 v99; // [rsp+C60h] [rbp-A0h]
  __int64 v100; // [rsp+C68h] [rbp-98h]
  __int64 v101; // [rsp+C70h] [rbp-90h]
  __int64 v102; // [rsp+C78h] [rbp-88h]
  int v103; // [rsp+C84h] [rbp-7Ch]
  _QWORD *v104; // [rsp+C88h] [rbp-78h]
  __int64 v105; // [rsp+C90h] [rbp-70h]
  __int64 v106; // [rsp+C98h] [rbp-68h]
  __int64 v107; // [rsp+CA0h] [rbp-60h]
  int v108[2]; // [rsp+CA8h] [rbp-58h]
  __int64 v109; // [rsp+CB0h] [rbp-50h]
  __int64 v110; // [rsp+CB8h] [rbp-48h]
  unsigned int v111; // [rsp+CC0h] [rbp-40h] BYREF
  unsigned int v112; // [rsp+CC4h] [rbp-3Ch] BYREF
  unsigned __int64 v113; // [rsp+CC8h] [rbp-38h]
  void *v114; // [rsp+CD0h] [rbp-30h]

  v103 = a4; /*0x100adfb54*/
  v107 = a3; /*0x100adfb57*/
  v114 = a1; /*0x100adfb5b*/
  v5 = a2[25]; /*0x100adfb5f*/
  v104 = a2; /*0x100adfb66*/
  v6 = a2[26]; /*0x100adfb6a*/
  std::path::Path::_join::hb1a495d4f06b13b8(v87, v5, v6, &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_236, 24); /*0x100adfb8b*/
  v7 = v87[1]; /*0x100adfb90*/
  codexmate_lib::core::account_coordination::FileLock::try_acquire::ha55c2264b5b54fdd( /*0x100adfbb5*/
    v88,
    v87[1],
    v87[2],
    "account transition",
    18);
  v8 = *(_QWORD *)v88; /*0x100adfbba*/
  v9 = *(_DWORD *)&v88[8]; /*0x100adfbc1*/
  if ( *(_QWORD *)v88 != 11 ) /*0x100adfbcc*/
  {
    v10 = &v88[12]; /*0x100adfbce*/
    v11 = v89; /*0x100adfbd5*/
    for ( i = 21; i; --i ) /*0x100adfbdc*/
      *v11++ = *v10++; /*0x100adfbe1*/
  }
  if ( v87[0] ) /*0x100adfbed*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v87[0], 1); /*0x100adfbf7*/
  if ( (_DWORD)v8 != 11 ) /*0x100adfbff*/
  {
    v36 = v114; /*0x100adfe3f*/
    v37 = (char *)v114 + 20; /*0x100adfe43*/
    v38 = v89; /*0x100adfe47*/
    for ( j = 21; j; --j ) /*0x100adfe4e*/
      *v37++ = *v38++; /*0x100adfe53*/
    v36[1] = v8; /*0x100adfe55*/
    *((_DWORD *)v36 + 4) = v9; /*0x100adfe59*/
    *v36 = 4; /*0x100adfe5d*/
    return v36; /*0x100adfe64*/
  }
  if ( v9 == -1 ) /*0x100adfc09*/
  {
    v36 = v114; /*0x100adfe69*/
    *(_QWORD *)v114 = 3; /*0x100adfe6d*/
    return v36; /*0x100adfe74*/
  }
  v111 = v9; /*0x100adfc0f*/
  v13 = v107; /*0x100adfc13*/
  v14 = *(_QWORD *)v107; /*0x100adfc17*/
  if ( *(_QWORD *)v107 == 2 ) /*0x100adfc1e*/
  {
    v105 = 2; /*0x100adfc24*/
    v15 = 0x8000000000000000LL; /*0x100adfc28*/
    v16 = -1; /*0x100adfc32*/
    LOBYTE(v13) = 1; /*0x100adfc38*/
    LODWORD(v109) = v13; /*0x100adfc3a*/
    goto LABEL_11; /*0x100adfc3a*/
  }
  v40 = *(_QWORD *)(v107 + 48); /*0x100adfe79*/
  v113 = *(_QWORD *)(v107 + 56); /*0x100adfe81*/
  v41 = v104; /*0x100adfe85*/
  codexmate_lib::core::repository::Repository::load_registry_for_mutation::h27f92a14eb4a5ac8(v88, v104[28], v104[29]); /*0x100adfe9e*/
  v42 = *(_QWORD *)v88; /*0x100adfea3*/
  qmemcpy(v87, &v88[8], 0x58u); /*0x100adfebd*/
  if ( *(_QWORD *)v88 != 11 ) /*0x100adfec4*/
  {
    qmemcpy(&v89[8], v87, 0x58u); /*0x100ae007d*/
    v15 = *(_QWORD *)&v89[8]; /*0x100ae0080*/
    v50 = *(_QWORD *)&v89[16]; /*0x100ae0087*/
    v45 = *(_QWORD *)&v89[24]; /*0x100ae008e*/
    v95 = *(_QWORD *)&v89[32]; /*0x100ae009c*/
    v96 = *(_QWORD *)&v89[40]; /*0x100ae00aa*/
    v97 = *(_QWORD *)&v89[48]; /*0x100ae00b8*/
    v98 = *(_QWORD *)&v89[56]; /*0x100ae00c6*/
    v99 = *(_QWORD *)&v89[64]; /*0x100ae00d4*/
    v100 = *(_QWORD *)&v89[72]; /*0x100ae00e2*/
    v101 = *(_QWORD *)&v89[80]; /*0x100ae00f0*/
    v102 = *(_QWORD *)&v89[88]; /*0x100ae00fe*/
LABEL_55:
    v36 = v114; /*0x100ae010b*/
    *((_QWORD *)v114 + 12) = v102; /*0x100ae0116*/
    v36[11] = v101; /*0x100ae0121*/
    v36[10] = v100; /*0x100ae012c*/
    v36[9] = v99; /*0x100ae0137*/
    v36[8] = v98; /*0x100ae0142*/
    v36[7] = v97; /*0x100ae014d*/
    v51 = v95; /*0x100ae0151*/
    v36[6] = v96; /*0x100ae015f*/
    v36[5] = v51; /*0x100ae0163*/
    v36[3] = v50; /*0x100ae0167*/
    v36[4] = v45; /*0x100ae016b*/
    v36[1] = v42; /*0x100ae016f*/
    v36[2] = v15; /*0x100ae0173*/
    *v36 = 4; /*0x100ae0177*/
LABEL_85:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c5db97a3e0d565(&v111); /*0x100ae033a*/
    close_NOCANCEL(v111); /*0x100ae0346*/
    return v36; /*0x100ae0346*/
  }
  qmemcpy(v91, v87, sizeof(v91)); /*0x100adfee0*/
  codexmate_lib::core::account_io::oauth_snapshot_path::h2bd39a14c38305a9(v89, v41, v91, v40, v113); /*0x100adfef4*/
  if ( !__OFSUB__(-v91[3], 1) && v91[3] ) /*0x100adff08*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91[4], v91[3], 1); /*0x100adff16*/
  v113 = v91[1]; /*0x100adff22*/
  v43 = v91[2]; /*0x100adff26*/
  if ( v91[2] ) /*0x100adff30*/
  {
    v44 = v113; /*0x100adff32*/
    do /*0x100adff52*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::ha0a2ce5fd6075f91(v44); /*0x100adff43*/
      v44 += 424LL; /*0x100adff48*/
      --v43; /*0x100adff4f*/
    }
    while ( v43 ); /*0x100adff52*/
  }
  v105 = v14; /*0x100adff54*/
  if ( v91[0] ) /*0x100adff62*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, 424LL * v91[0], 8); /*0x100adff74*/
  v42 = *(_QWORD *)v89; /*0x100adff79*/
  v15 = *(_QWORD *)&v89[8]; /*0x100adff80*/
  v110 = *(_QWORD *)&v89[16]; /*0x100adff8e*/
  v45 = *(_QWORD *)&v89[24]; /*0x100adff92*/
  v95 = *(_QWORD *)&v89[32]; /*0x100adffa0*/
  v96 = *(_QWORD *)&v89[40]; /*0x100adffae*/
  v97 = *(_QWORD *)&v89[48]; /*0x100adffbc*/
  v98 = *(_QWORD *)&v89[56]; /*0x100adffca*/
  v99 = *(_QWORD *)&v89[64]; /*0x100adffd8*/
  v100 = *(_QWORD *)&v89[72]; /*0x100adffe6*/
  v101 = *(_QWORD *)&v89[80]; /*0x100adfff4*/
  v46 = *(_DWORD *)&v89[88]; /*0x100adfffb*/
  v102 = *(_QWORD *)&v89[88]; /*0x100ae0002*/
  if ( *(_QWORD *)v89 != 11 ) /*0x100ae000d*/
  {
    v50 = v110; /*0x100ae0107*/
    goto LABEL_55; /*0x100ae0107*/
  }
  if ( *(_QWORD *)&v89[8] == 0x8000000000000000LL ) /*0x100ae0020*/
  {
    v93 = *(_QWORD *)&v89[24]; /*0x100ae0026*/
    v16 = -1; /*0x100ae002d*/
    LOBYTE(v46) = 1; /*0x100ae0033*/
    LODWORD(v109) = v46; /*0x100ae0035*/
    v15 = 0x8000000000000000LL; /*0x100ae0038*/
    goto LABEL_11; /*0x100ae003b*/
  }
  v93 = *(_QWORD *)&v89[24]; /*0x100ae01da*/
  codexmate_lib::core::account_coordination::snapshot_lock_path::h3690c6b4c9ad470c(v87, v110, *(_QWORD *)&v89[24]); /*0x100ae01e1*/
  v109 = v87[1]; /*0x100ae0208*/
  codexmate_lib::core::account_coordination::FileLock::try_acquire::ha55c2264b5b54fdd( /*0x100ae020c*/
    v88,
    v87[1],
    v87[2],
    &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_235,
    18);
  v55 = *(_QWORD *)v88; /*0x100ae0211*/
  v16 = *(_DWORD *)&v88[8]; /*0x100ae0218*/
  if ( *(_QWORD *)v88 != 11 ) /*0x100ae0223*/
  {
    v56 = &v88[12]; /*0x100ae0225*/
    v57 = v89; /*0x100ae022c*/
    for ( k = 21; k; --k ) /*0x100ae0233*/
      *v57++ = *v56++; /*0x100ae0238*/
  }
  if ( v87[0] ) /*0x100ae0244*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v109, v87[0], 1); /*0x100ae024f*/
  if ( (_DWORD)v55 != 11 ) /*0x100ae0257*/
  {
    v36 = v114; /*0x100ae027c*/
    v59 = (char *)v114 + 20; /*0x100ae0280*/
    v60 = v89; /*0x100ae0284*/
    for ( m = 21; m; --m ) /*0x100ae028b*/
      *v59++ = *v60++; /*0x100ae0290*/
    v36[1] = v55; /*0x100ae0292*/
    *((_DWORD *)v36 + 4) = v16; /*0x100ae0296*/
    v62 = 4; /*0x100ae029a*/
LABEL_88:
    *v36 = v62; /*0x100ae0369*/
    v26 = v110; /*0x100ae036c*/
    if ( !v15 ) /*0x100ae0373*/
      goto LABEL_85; /*0x100ae0373*/
    goto LABEL_84; /*0x100ae0373*/
  }
  if ( v16 == -1 ) /*0x100ae025d*/
  {
    v62 = 3; /*0x100ae0360*/
    v36 = v114; /*0x100ae0365*/
    goto LABEL_88; /*0x100ae0365*/
  }
  LODWORD(v109) = 0; /*0x100ae0263*/
LABEL_11:
  v113 = v15; /*0x100adfc3d*/
  v112 = v16; /*0x100adfc41*/
  std::path::Path::_join::hb1a495d4f06b13b8(v87, v5, v6, &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_228, 15); /*0x100adfc5f*/
  v17 = v87[1]; /*0x100adfc64*/
  codexmate_lib::core::account_coordination::FileLock::try_acquire::ha55c2264b5b54fdd( /*0x100adfc89*/
    v88,
    v87[1],
    v87[2],
    &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_229,
    9);
  v18 = *(_QWORD *)v88; /*0x100adfc8e*/
  v19 = *(_DWORD *)&v88[8]; /*0x100adfc95*/
  if ( *(_QWORD *)v88 != 11 ) /*0x100adfca0*/
  {
    v20 = &v88[12]; /*0x100adfca2*/
    v21 = v89; /*0x100adfca9*/
    for ( n = 21; n; --n ) /*0x100adfcb0*/
      *v21++ = *v20++; /*0x100adfcb5*/
  }
  if ( v87[0] ) /*0x100adfcc1*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v87[0], 1); /*0x100adfccb*/
  if ( (_DWORD)v18 != 11 ) /*0x100adfcd3*/
  {
    v36 = v114; /*0x100ae0040*/
    v47 = (char *)v114 + 20; /*0x100ae0044*/
    v48 = v89; /*0x100ae0048*/
    for ( ii = 21; ii; --ii ) /*0x100ae004f*/
      *v47++ = *v48++; /*0x100ae0054*/
    v36[1] = v18; /*0x100ae0056*/
    *((_DWORD *)v36 + 4) = v19; /*0x100ae005a*/
    *v36 = 4; /*0x100ae005e*/
LABEL_57:
    v15 = v113; /*0x100ae018e*/
    v26 = v110; /*0x100ae0192*/
    if ( v112 == -1 ) /*0x100ae019a*/
      goto LABEL_82; /*0x100ae019a*/
    goto LABEL_81; /*0x100ae019a*/
  }
  if ( v19 == -1 ) /*0x100adfcdd*/
  {
    v36 = v114; /*0x100ae0183*/
    *(_QWORD *)v114 = 3; /*0x100ae0187*/
    goto LABEL_57; /*0x100ae0187*/
  }
  LODWORD(v95) = v19; /*0x100adfce3*/
  std::path::Path::_join::hb1a495d4f06b13b8(v87, v5, v6, &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_230, 20); /*0x100adfd04*/
  v23 = v87[1]; /*0x100adfd09*/
  codexmate_lib::core::account_coordination::FileLock::try_acquire::ha55c2264b5b54fdd( /*0x100adfd2e*/
    v88,
    v87[1],
    v87[2],
    "account state.oauth-refresh.lock",
    13);
  v24 = *(_QWORD *)v88; /*0x100adfd33*/
  v25 = *(_DWORD *)&v88[8]; /*0x100adfd3a*/
  v15 = v113; /*0x100adfd45*/
  v26 = v110; /*0x100adfd49*/
  if ( *(_QWORD *)v88 != 11 ) /*0x100adfd4d*/
  {
    v27 = &v88[12]; /*0x100adfd4f*/
    v28 = v89; /*0x100adfd56*/
    for ( jj = 21; jj; --jj ) /*0x100adfd5d*/
      *v28++ = *v27++; /*0x100adfd62*/
  }
  if ( v87[0] ) /*0x100adfd6e*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v87[0], 1); /*0x100adfd78*/
  if ( (_DWORD)v24 != 11 ) /*0x100adfd80*/
  {
    v36 = v114; /*0x100ae01a5*/
    v52 = (char *)v114 + 20; /*0x100ae01a9*/
    v53 = v89; /*0x100ae01ad*/
    for ( kk = 21; kk; --kk ) /*0x100ae01b4*/
      *v52++ = *v53++; /*0x100ae01b9*/
    v36[1] = v24; /*0x100ae01bb*/
    *((_DWORD *)v36 + 4) = v25; /*0x100ae01bf*/
    *v36 = 4; /*0x100ae01c3*/
LABEL_80:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c5db97a3e0d565(&v95); /*0x100ae02f1*/
    close_NOCANCEL((unsigned int)v95); /*0x100ae0303*/
    if ( v112 == -1 ) /*0x100ae030c*/
    {
LABEL_82:
      if ( (_BYTE)v109 || !v15 ) /*0x100ae0328*/
        goto LABEL_85; /*0x100ae0328*/
LABEL_84:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v15, 1); /*0x100ae032a*/
      goto LABEL_85; /*0x100ae0335*/
    }
LABEL_81:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf8c5db97a3e0d565(&v112); /*0x100ae030e*/
    close_NOCANCEL(v112); /*0x100ae031a*/
    goto LABEL_82; /*0x100ae031a*/
  }
  if ( v25 == -1 ) /*0x100adfd8a*/
  {
    v36 = v114; /*0x100ae026f*/
    *(_QWORD *)v114 = 3; /*0x100ae0273*/
    goto LABEL_80; /*0x100ae027a*/
  }
  LODWORD(v91[0]) = v25; /*0x100adfd90*/
  v30 = v104; /*0x100adfd97*/
  v31 = v104[4]; /*0x100adfd9b*/
  v32 = v104[5]; /*0x100adfda0*/
  codexmate_lib::core::account_observation::AuthObservation::still_current::hd6c125a0cf742a4e(v88, v107, v31, v32); /*0x100adfdb6*/
  v33 = *(_QWORD *)v88; /*0x100adfdbb*/
  v34 = v88[8]; /*0x100adfdc2*/
  if ( *(_QWORD *)v88 != 11 ) /*0x100adfdcd*/
  {
    v63 = v114; /*0x100ae02ab*/
    memcpy((char *)v114 + 17, &v88[9], 0x57u); /*0x100ae02b8*/
    v63[1] = v33; /*0x100ae02bd*/
    *((_BYTE *)v63 + 16) = v34; /*0x100ae02c1*/
    *v63 = 4; /*0x100ae02c5*/
    goto LABEL_79; /*0x100ae02cc*/
  }
  if ( (v88[8] & 1) == 0 ) /*0x100adfdd6*/
  {
    *(_QWORD *)v114 = 3; /*0x100ae02d2*/
    goto LABEL_79; /*0x100ae02d2*/
  }
  if ( (_DWORD)v105 != 2 ) /*0x100adfde0*/
  {
    codexmate_lib::core::repository::Repository::load_registry_for_mutation::h27f92a14eb4a5ac8(v88, v30[28], v30[29]); /*0x100ae038e*/
    v65 = *(_QWORD *)v88; /*0x100ae0393*/
    qmemcpy(v89, &v88[8], 0x58u); /*0x100ae03ad*/
    if ( *(_QWORD *)v88 != 11 ) /*0x100ae03b4*/
    {
      v83 = v114; /*0x100ae073a*/
      qmemcpy((char *)v114 + 16, v89, 0x58u); /*0x100ae074e*/
      v83[1] = v65; /*0x100ae0751*/
      *v83 = 4; /*0x100ae0755*/
      goto LABEL_79; /*0x100ae075c*/
    }
    qmemcpy(v87, v89, 0x58u); /*0x100ae03d0*/
    v66 = *(_QWORD *)(v107 + 48); /*0x100ae03d7*/
    v67 = *(_QWORD *)(v107 + 56); /*0x100ae03db*/
    codexmate_lib::core::account_io::oauth_snapshot_path::h2bd39a14c38305a9(v88, v30, v87, v66, v67); /*0x100ae03ef*/
    v68 = *(_QWORD *)v88; /*0x100ae03f4*/
    v69 = *(_QWORD *)&v88[8]; /*0x100ae03fb*/
    v70 = *(_QWORD *)&v88[16]; /*0x100ae0402*/
    v71 = *(_QWORD *)&v88[24]; /*0x100ae0409*/
    if ( *(_QWORD *)v88 == 11 ) /*0x100ae041b*/
    {
      *(_QWORD *)v92 = v66; /*0x100ae0421*/
      v106 = *(_QWORD *)&v88[8]; /*0x100ae0428*/
      v72 = 3; /*0x100ae042c*/
      if ( !(_BYTE)v109 ) /*0x100ae0435*/
      {
        *(_QWORD *)v108 = *(_QWORD *)&v88[16]; /*0x100ae043b*/
        *(_QWORD *)v94 = *(_QWORD *)&v88[24]; /*0x100ae0442*/
        v73 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x100ae044d*/
                *(__int64 *)&v88[16],
                *(__int64 *)&v88[24],
                v110,
                v93);
        v70 = *(_QWORD *)v108; /*0x100ae0454*/
        if ( v73 ) /*0x100ae0458*/
        {
          codexmate_lib::core::account_io::ensure_existing_snapshot_owned_by::hafc5dc11552270ad( /*0x100ae048a*/
            (int)v88,
            v108[0],
            v94[0],
            v30[31],
            v30[32],
            v92[0],
            v67);
          if ( *(_DWORD *)v88 == 11 ) /*0x100ae0496*/
          {
            LODWORD(v74) = 0; /*0x100ae049c*/
            if ( !__OFSUB__(0, *(_QWORD *)(v107 + 176)) ) /*0x100ae04b1*/
              v74 = *(_QWORD *)(v107 + 184); /*0x100ae04b3*/
            codexmate_lib::core::repository::Repository::sync_auth_bundle_into_registry::h11583a641076b509( /*0x100ae04df*/
              (unsigned int)v88,
              (_DWORD)v30,
              (unsigned int)v87,
              v107,
              v74,
              *(_QWORD *)(v107 + 192),
              *(__int64 *)v108,
              *(__int64 *)v94);
            if ( *(_DWORD *)v88 == 11 ) /*0x100ae04eb*/
            {
              if ( v106 ) /*0x100ae04f6*/
                a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v108, v106, 1); /*0x100ae0505*/
              core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h92081ece5e23ff8e(v87); /*0x100ae0511*/
              v30 = v104; /*0x100ae0516*/
              goto LABEL_30; /*0x100ae051a*/
            }
          }
          qmemcpy((char *)v114 + 8, v88, 0x60u); /*0x100ae086a*/
          v72 = 4; /*0x100ae086d*/
          v70 = *(_QWORD *)v108; /*0x100ae0872*/
        }
      }
      *(_QWORD *)v114 = v72; /*0x100ae087a*/
      if ( v106 ) /*0x100ae0884*/
        a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v106, 1); /*0x100ae088e*/
    }
    else
    {
      v84 = v114; /*0x100ae0797*/
      *((_QWORD *)v114 + 12) = *(_QWORD *)&v88[88]; /*0x100ae079b*/
      v84[11] = *(_QWORD *)&v88[80]; /*0x100ae07a6*/
      v84[10] = *(_QWORD *)&v88[72]; /*0x100ae07b1*/
      v84[9] = *(_QWORD *)&v88[64]; /*0x100ae07bc*/
      v84[8] = *(_QWORD *)&v88[56]; /*0x100ae07c7*/
      v84[7] = *(_QWORD *)&v88[48]; /*0x100ae07d2*/
      v85 = *(_QWORD *)&v88[32]; /*0x100ae07d6*/
      v84[6] = *(_QWORD *)&v88[40]; /*0x100ae07e4*/
      v84[5] = v85; /*0x100ae07e8*/
      v84[2] = v69; /*0x100ae07ec*/
      v84[3] = v70; /*0x100ae07f0*/
      v84[4] = v71; /*0x100ae07f4*/
      v84[1] = v68; /*0x100ae07f8*/
      *v84 = 4; /*0x100ae07fc*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h92081ece5e23ff8e(v87); /*0x100ae089a*/
    goto LABEL_79; /*0x100ae089f*/
  }
LABEL_30:
  codexmate_lib::core::repository::Repository::load_local_state::h957530d4f68e7543(v88, v30); /*0x100adfde6*/
  qmemcpy(v87, &v88[8], 0x60u); /*0x100adfe0f*/
  if ( *(_QWORD *)v88 == 2 ) /*0x100adfe16*/
  {
    v35 = v114; /*0x100adfe1c*/
    qmemcpy((char *)v114 + 8, v87, 0x60u); /*0x100adfe30*/
    *v35 = 4; /*0x100adfe33*/
LABEL_79:
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h0aa27eb5d623d765(v91, a5); /*0x100ae02d9*/
    v36 = v114; /*0x100ae02e5*/
    v15 = v113; /*0x100ae02e9*/
    v26 = v110; /*0x100ae02ed*/
    goto LABEL_80; /*0x100ae02ed*/
  }
  memcpy(__dst, &v88[104], sizeof(__dst)); /*0x100ae0532*/
  qmemcpy(&v89[8], v87, 0x60u); /*0x100ae054a*/
  *(_QWORD *)v89 = *(_QWORD *)v88; /*0x100ae054d*/
  v75 = v107; /*0x100ae055b*/
  codexmate_lib::core::account_observation::AuthObservation::still_current::hd6c125a0cf742a4e(v88, v107, v31, v32); /*0x100ae0568*/
  v76 = *(_QWORD *)v88; /*0x100ae056d*/
  v77 = v88[8]; /*0x100ae0574*/
  if ( *(_QWORD *)v88 != 11 ) /*0x100ae057f*/
  {
    v80 = v114; /*0x100ae0768*/
    memcpy((char *)v114 + 17, &v88[9], 0x57u); /*0x100ae0776*/
    v80[1] = v76; /*0x100ae077b*/
    *((_BYTE *)v80 + 16) = v77; /*0x100ae0780*/
    v78 = 4; /*0x100ae0785*/
    goto LABEL_123; /*0x100ae078b*/
  }
  v78 = 3; /*0x100ae0585*/
  if ( (v88[8] & 1) == 0 ) /*0x100ae058e*/
    goto LABEL_122; /*0x100ae058e*/
  v79 = __dst[6]; /*0x100ae0594*/
  if ( __dst[6] != 2 ) /*0x100ae059f*/
  {
    if ( (_DWORD)v105 != 2 && __dst[34] == *(_QWORD *)(v75 + 56) ) /*0x100ae081a*/
    {
      v86 = memcmp((const void *)__dst[33], *(const void **)(v107 + 48), __dst[34]); /*0x100ae082b*/
      v80 = v114; /*0x100ae0832*/
      if ( !v86 ) /*0x100ae0836*/
        goto LABEL_105; /*0x100ae0836*/
LABEL_123:
      *v80 = v78; /*0x100ae0841*/
      a5 = core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h2083ab4ec30214a5((__int64)v89); /*0x100ae084c*/
      goto LABEL_79; /*0x100ae0851*/
    }
LABEL_122:
    v80 = v114; /*0x100ae083d*/
    goto LABEL_123; /*0x100ae083d*/
  }
  v80 = v114; /*0x100ae05a9*/
  if ( (_DWORD)v105 != 2 ) /*0x100ae05ad*/
    goto LABEL_123; /*0x100ae05ad*/
LABEL_105:
  codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::hff0599f7e6155179( /*0x100ae05b3*/
    v87,
    (__int64)v104,
    (__int64)v89,
    (unsigned __int8)v103);
  *(_QWORD *)&v88[752] = __dst[98]; /*0x100ae05df*/
  *(_QWORD *)&v88[744] = __dst[97]; /*0x100ae05f4*/
  *(_QWORD *)&v88[736] = __dst[96]; /*0x100ae05fb*/
  memcpy(v88, v87, 0x2E0u); /*0x100ae0618*/
  v81 = v114; /*0x100ae0622*/
  memcpy(v114, v88, 0x2F8u); /*0x100ae062c*/
  v81[95] = 0x8000000000000000LL; /*0x100ae0631*/
  if ( __dst[54] ) /*0x100ae0642*/
  {
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[55], __dst[54], 1); /*0x100ae0650*/
    v79 = __dst[6]; /*0x100ae0655*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb6a483dd2db0ab56(&__dst[58]); /*0x100ae0663*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(v89); /*0x100ae066f*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h92081ece5e23ff8e(&__dst[80]); /*0x100ae067b*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..quota_store..QuotaStoreFile$GT$::hc3ff7769fe483ac8(&__dst[91]); /*0x100ae0687*/
  if ( v79 != 2 ) /*0x100ae0690*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h06d77c68fd4e944d(&__dst[6]); /*0x100ae0699*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..models..CoreWarning$GT$$GT$::hda92fed9934a6531( /*0x100ae06a5*/
    &__dst[99],
    a5);
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ApiDiagnostics$GT$::h8ed2753a903213d2(&__dst[102]); /*0x100ae06b1*/
  if ( __dst[109] != 0x8000000000000000LL && __dst[109] ) /*0x100ae06c5*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[110], __dst[109], 1); /*0x100ae06d3*/
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..AccountRefreshReport$GT$$GT$::hb690944522aaf963(&__dst[112]); /*0x100ae06df*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h0aa27eb5d623d765(v91, a5); /*0x100ae06eb*/
  v82 = v113; /*0x100ae06f7*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h0aa27eb5d623d765(&v95, a5); /*0x100ae06fb*/
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..account_coordination..AccountSnapshotLock$GT$$GT$::h80a527c0e1705382(&v112); /*0x100ae0704*/
  if ( 2 * v82 ) /*0x100ae0709*/
    a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v113, 1); /*0x100ae0723*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h0aa27eb5d623d765(&v111, a5); /*0x100ae072c*/
  return v114; /*0x100ae034e*/
}