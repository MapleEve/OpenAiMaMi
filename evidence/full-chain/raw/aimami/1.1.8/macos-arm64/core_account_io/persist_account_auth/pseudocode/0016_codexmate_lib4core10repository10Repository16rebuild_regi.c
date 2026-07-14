// mac 1.1.8 behavioral persist_account_auth 0x100527790 d=1
_QWORD *__fastcall codexmate_lib::core::repository::Repository::rebuild_registry::heba324196402b596(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 *v8; // rdi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  char v13; // si
  char v14; // dl
  void *v15; // r15
  size_t v16; // r12
  void *v17; // rbx
  void *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  unsigned __int128 v31; // kr00_16
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rdx
  int v37; // edx
  __int64 v38; // rax
  const void *v39; // rbx
  size_t v40; // r15
  __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // rbx
  void (__fastcall *v49)(__int64); // rax
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // r14
  _DWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r12
  __int64 v56; // r15
  size_t v57; // r13
  __int64 v58; // rbx
  void *v59; // rsi
  void *v60; // rdi
  size_t v61; // r14
  __int64 v62; // r13
  void *v63; // r12
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  _BYTE **v67; // r12
  __int64 (__fastcall **v68)(); // rbx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  void *v72; // r14
  size_t v73; // r13
  __int64 v74; // rbx
  __int64 v75; // r15
  __int64 v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rbx
  volatile signed __int64 *v79; // r12
  volatile signed __int64 *v80; // r13
  volatile signed __int64 *v81; // r14
  char *v82; // r13
  volatile signed __int64 *v83; // rdi
  __int64 v84; // r15
  __int64 v86; // r14
  __int64 v87; // r15
  volatile signed __int64 *__src[132]; // [rsp+8h] [rbp-18C8h] BYREF
  _QWORD __dst[267]; // [rsp+428h] [rbp-14A8h] BYREF
  char v90; // [rsp+C80h] [rbp-C50h]
  _BYTE v91[72]; // [rsp+C88h] [rbp-C48h] BYREF
  _OWORD v92[66]; // [rsp+CD0h] [rbp-C00h] BYREF
  _BYTE v93[72]; // [rsp+10F0h] [rbp-7E0h] BYREF
  _BYTE v94[360]; // [rsp+1138h] [rbp-798h] BYREF
  _QWORD v95[19]; // [rsp+12A0h] [rbp-630h] BYREF
  _BYTE v96[360]; // [rsp+1338h] [rbp-598h] BYREF
  _QWORD v97[22]; // [rsp+14A0h] [rbp-430h] BYREF
  _OWORD v98[11]; // [rsp+1550h] [rbp-380h] BYREF
  _QWORD v99[2]; // [rsp+1600h] [rbp-2D0h] BYREF
  __int64 v100; // [rsp+1610h] [rbp-2C0h] BYREF
  __int64 v101; // [rsp+1618h] [rbp-2B8h]
  __int64 v102; // [rsp+1620h] [rbp-2B0h]
  _QWORD v103[10]; // [rsp+1628h] [rbp-2A8h] BYREF
  unsigned __int64 v104; // [rsp+1678h] [rbp-258h] BYREF
  __int128 v105; // [rsp+1680h] [rbp-250h]
  __int128 v106; // [rsp+1690h] [rbp-240h]
  _BYTE v107[152]; // [rsp+16A8h] [rbp-228h] BYREF
  _QWORD v108[2]; // [rsp+1740h] [rbp-190h] BYREF
  __int64 v109; // [rsp+1750h] [rbp-180h]
  char v110; // [rsp+1758h] [rbp-178h]
  volatile signed __int64 *v111; // [rsp+1760h] [rbp-170h] BYREF
  _BYTE v112[72]; // [rsp+1768h] [rbp-168h] BYREF
  __int128 v113; // [rsp+17B0h] [rbp-120h]
  void *v114; // [rsp+17C0h] [rbp-110h] BYREF
  void *v115; // [rsp+17C8h] [rbp-108h]
  size_t v116; // [rsp+17D0h] [rbp-100h]
  _QWORD *v117; // [rsp+17D8h] [rbp-F8h]
  __int64 v118; // [rsp+17E0h] [rbp-F0h] BYREF
  __int64 v119; // [rsp+17E8h] [rbp-E8h]
  __int64 v120; // [rsp+17F0h] [rbp-E0h]
  __int64 (__fastcall **v121)(); // [rsp+17F8h] [rbp-D8h]
  __int64 v122; // [rsp+1800h] [rbp-D0h]
  _BYTE **v123; // [rsp+1808h] [rbp-C8h] BYREF
  __int64 (__fastcall **v124)(); // [rsp+1810h] [rbp-C0h]
  __int64 v125; // [rsp+1818h] [rbp-B8h]
  _BYTE *v126; // [rsp+1820h] [rbp-B0h] BYREF
  void *v127; // [rsp+1828h] [rbp-A8h]
  size_t v128; // [rsp+1830h] [rbp-A0h]
  void *v129; // [rsp+1838h] [rbp-98h]
  _BYTE **v130; // [rsp+1840h] [rbp-90h]
  __int64 v131; // [rsp+1848h] [rbp-88h]
  __int16 v132; // [rsp+1854h] [rbp-7Ch]
  char v133; // [rsp+1856h] [rbp-7Ah]
  void *v134; // [rsp+1858h] [rbp-78h]
  __int64 v135; // [rsp+1860h] [rbp-70h]
  __int64 v136; // [rsp+1868h] [rbp-68h]
  __int64 v137; // [rsp+1870h] [rbp-60h]
  __int64 v138; // [rsp+1878h] [rbp-58h]
  __int64 v139; // [rsp+1880h] [rbp-50h]
  __int64 v140; // [rsp+1888h] [rbp-48h]
  __int64 v141; // [rsp+1890h] [rbp-40h]
  void *v142; // [rsp+1898h] [rbp-38h]
  _QWORD *v143; // [rsp+18A0h] [rbp-30h]

  __dst[144] = 0; /*0x1005277a4*/
  v3 = a2; /*0x1005277b3*/
  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(a2); /*0x1005277c6*/
  if ( v5 ) /*0x1005277ce*/
  {
    v6 = 2; /*0x1005277d0*/
LABEL_165:
    qmemcpy(v91, v93, sizeof(v91)); /*0x100528bb7*/
    qmemcpy(a1 + 3, v91, 0x48u); /*0x100528bdc*/
    a1[1] = v6; /*0x100528bdf*/
    a1[2] = v5; /*0x100528be3*/
    a1[12] = v2; /*0x100528be7*/
    *a1 = 0x8000000000000000LL; /*0x100528beb*/
    return a1; /*0x100528beb*/
  }
  codexmate_lib::core::repository::Repository::load_registry::h7984350630216c09(__dst); /*0x1005277e4*/
  if ( LODWORD(__dst[0]) == 10 ) /*0x1005277f0*/
  {
    qmemcpy(v103, &__dst[1], sizeof(v103)); /*0x100527805*/
    a2 = &__dst[11]; /*0x100527805*/
    v8 = &v104; /*0x100527805*/
  }
  else
  {
    v103[0] = 0x8000000000000000LL; /*0x10052780a*/
    v8 = __dst; /*0x100527811*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(__dst); /*0x100527818*/
  }
  __src[0] = (volatile signed __int64 *)std::time::SystemTime::now::h1fe79e41f9d5677f(v8, a2, v7); /*0x100527822*/
  LODWORD(__src[1]) = v9; /*0x100527829*/
  std::time::SystemTime::duration_since::had059553cab94f96(__dst, __src, 0, 0); /*0x100527841*/
  v117 = a1; /*0x100527846*/
  v10 = 0; /*0x10052784d*/
  v11 = 0; /*0x100527856*/
  if ( !LOBYTE(__dst[0]) ) /*0x10052785b*/
    v11 = __dst[1]; /*0x10052785d*/
  v12 = v103[0]; /*0x100527864*/
  if ( v103[0] == 0x8000000000000000LL ) /*0x10052786e*/
  {
    v13 = 1; /*0x100527870*/
    v14 = 0; /*0x100527873*/
  }
  else
  {
    v14 = v103[8]; /*0x100527877*/
    if ( LOBYTE(v103[8]) == 2 ) /*0x100527881*/
    {
      v14 = 0; /*0x100527883*/
      v10 = 0; /*0x100527885*/
    }
    else
    {
      v10 = v103[7]; /*0x100527889*/
      v132 = *(_WORD *)((char *)&v103[8] + 1); /*0x100527897*/
      v133 = BYTE3(v103[8]); /*0x1005278a2*/
    }
    v13 = 1; /*0x1005278b0*/
    if ( LOBYTE(v103[9]) != 2 ) /*0x1005278b5*/
      v13 = v103[9]; /*0x1005278b5*/
  }
  *(_DWORD *)&v112[60] = 2; /*0x1005278b8*/
  *(_QWORD *)&v112[40] = v11; /*0x1005278c2*/
  *(_QWORD *)&v112[16] = 0x8000000000000000LL; /*0x1005278c9*/
  v111 = nullptr; /*0x1005278d0*/
  *(_QWORD *)v112 = 8; /*0x1005278db*/
  *(_QWORD *)&v112[8] = 0; /*0x1005278e6*/
  *(_QWORD *)&v112[48] = v10; /*0x1005278f1*/
  v112[56] = v14; /*0x1005278f8*/
  *(_WORD *)&v112[57] = v132; /*0x100527902*/
  v112[59] = v133; /*0x10052790d*/
  v112[64] = v13; /*0x100527913*/
  v15 = (void *)v3[4]; /*0x10052791a*/
  v143 = v3; /*0x10052791e*/
  v16 = v3[5]; /*0x100527922*/
  codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(__src, v15, v16); /*0x100527933*/
  v104 = 0x8000000000000001LL; /*0x100527945*/
  if ( __src[0] == (volatile signed __int64 *)0x8000000000000001LL ) /*0x100527953*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&__src[1]); /*0x10052795c*/
  }
  else
  {
    memcpy(__dst, __src, 0xB0u); /*0x10052797c*/
    codexmate_lib::core::auth::make_auth_snapshot::h359af250f486fc29(v97, __dst, v15, v16); /*0x100527991*/
    if ( LODWORD(v97[0]) == 2 ) /*0x1005279a1*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v97[1]); /*0x1005279aa*/
    }
    else
    {
      memcpy(v92, v97, 0x98u); /*0x1005279c7*/
      codexmate_lib::core::account_io::make_snapshot_path::hac8fc92af1f6b2a1( /*0x1005279ef*/
        &v126,
        v143[31],
        v143[32],
        *((_QWORD *)&v92[1] + 1),
        *(_QWORD *)&v92[2]);
      v17 = v127; /*0x1005279f4*/
      v18 = (void *)v128; /*0x1005279fb*/
      v129 = v127; /*0x100527a0e*/
      if ( std::sys::fs::copy::hcda968f022f0a0e3(v15, v16, v127, v128) && (v19 & 3) == 1 ) /*0x100527a27*/
      {
        v20 = v19 - 1; /*0x100527a29*/
        v21 = *(_QWORD *)(v19 - 1); /*0x100527a2d*/
        v22 = *(_QWORD *)(v19 + 7); /*0x100527a31*/
        if ( *(_QWORD *)v22 ) /*0x100527a35*/
          (*(void (__fastcall **)(_QWORD))v22)(*(_QWORD *)(v19 - 1)); /*0x100527a40*/
        v23 = *(_QWORD *)(v22 + 8); /*0x100527a42*/
        if ( v23 ) /*0x100527a49*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16)); /*0x100527a52*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 24, 8); /*0x100527a64*/
        v17 = v129; /*0x100527a69*/
      }
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v123, &v92[1]); /*0x100527a7e*/
      v114 = v17; /*0x100527a83*/
      v115 = v18; /*0x100527a8a*/
      *(_QWORD *)v107 = 0; /*0x100527a91*/
      *(_QWORD *)&v107[8] = 1; /*0x100527a9c*/
      *(_QWORD *)&v107[16] = 0; /*0x100527aa7*/
      *(_QWORD *)&v98[1] = 1610612768; /*0x100527ab2*/
      *(_QWORD *)&v98[0] = v107; /*0x100527ac4*/
      *((_QWORD *)&v98[0] + 1) = &anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x100527ad2*/
      if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x100527ae7*/
                              &v114,
                              v98) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100528c9f*/
          &anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
          55,
          v108,
          &anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
          &anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
      v142 = *(void **)v107; /*0x100527afb*/
      v130 = *(_BYTE ***)&v107[8]; /*0x100527b06*/
      v24 = *(_QWORD *)&v107[16]; /*0x100527b0d*/
      v140 = *((_QWORD *)&v92[2] + 1); /*0x100527b1b*/
      v25 = *((_QWORD *)&v92[3] + 1); /*0x100527b2a*/
      v134 = *(void **)&v92[3]; /*0x100527b2a*/
      v135 = *((_QWORD *)&v92[4] + 1); /*0x100527b43*/
      v141 = *(_QWORD *)&v92[4]; /*0x100527b43*/
      v139 = *((_QWORD *)&v92[5] + 1); /*0x100527b4e*/
      v105 = v92[5]; /*0x100527b59*/
      v136 = *(_QWORD *)&v92[6]; /*0x100527b67*/
      v122 = *(_QWORD *)&v92[7]; /*0x100527b72*/
      v106 = *(_OWORD *)((char *)&v92[6] + 8); /*0x100527b80*/
      v137 = *((_QWORD *)&v92[7] + 1); /*0x100527b8e*/
      *(_QWORD *)v107 = (char *)&v92[9] + 2; /*0x100527b99*/
      *(_QWORD *)&v107[8] = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::h5788e8ec8fe42d9f; /*0x100527ba7*/
      v26 = *(_QWORD *)&v92[8]; /*0x100527bae*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_101224633, v107); /*0x100527bca*/
      v121 = *((__int64 (__fastcall ***)())&v98[0] + 1); /*0x100527beb*/
      v138 = *(_QWORD *)&v98[0]; /*0x100527bf2*/
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545( /*0x100527bf6*/
        v95,
        *((_QWORD *)&v98[0] + 1),
        *(_QWORD *)&v98[1],
        v27,
        v28,
        v29);
      *(_QWORD *)v107 = &v92[9]; /*0x100527c02*/
      *(_QWORD *)&v107[8] = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h440c81a8257c185d; /*0x100527c10*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_101224633, v107); /*0x100527c2c*/
      v30 = *((_QWORD *)&v98[0] + 1); /*0x100527c3f*/
      v31 = v98[0]; /*0x100527c54*/
      v131 = v31 >> 64; /*0x100527c54*/
      *(_QWORD *)&v113 = v31; /*0x100527c54*/
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545( /*0x100527c5b*/
        v107,
        *((_QWORD *)&v98[0] + 1),
        *(_QWORD *)&v98[1],
        v32,
        v33,
        v34);
      v35 = *((_QWORD *)&v92[8] + 1); /*0x100527c60*/
      v118 = std::time::SystemTime::now::h1fe79e41f9d5677f(v107, v30, v36); /*0x100527c6c*/
      LODWORD(v119) = v37; /*0x100527c73*/
      std::time::SystemTime::duration_since::had059553cab94f96(v98, &v118, 0, 0); /*0x100527c8b*/
      if ( LOBYTE(v98[0]) ) /*0x100527c97*/
        v38 = 0; /*0x100527ca2*/
      else
        v38 = *((_QWORD *)&v98[0] + 1); /*0x100527c99*/
      *(_QWORD *)&v96[128] = v123; /*0x100527cd7*/
      *(_QWORD *)&v96[136] = v124; /*0x100527ce5*/
      *(_QWORD *)&v96[144] = v125; /*0x100527cf3*/
      *(_QWORD *)&v96[152] = v142; /*0x100527cfe*/
      *(_QWORD *)&v96[160] = v130; /*0x100527d05*/
      *(_QWORD *)&v96[168] = v24; /*0x100527d0c*/
      *(_QWORD *)&v96[176] = v140; /*0x100527d17*/
      *(_QWORD *)&v96[184] = v134; /*0x100527d1e*/
      *(_QWORD *)&v96[192] = v25; /*0x100527d25*/
      *(_QWORD *)&v96[200] = 0; /*0x100527d2c*/
      *(_QWORD *)&v96[208] = 1; /*0x100527d37*/
      *(_QWORD *)&v96[216] = 0; /*0x100527d42*/
      *(_QWORD *)&v96[272] = v141; /*0x100527d51*/
      *(_QWORD *)&v96[280] = v135; /*0x100527d58*/
      *(_OWORD *)&v96[288] = v105; /*0x100527d5f*/
      *(_QWORD *)&v96[304] = v136; /*0x100527d66*/
      *(_OWORD *)&v96[312] = v106; /*0x100527d6d*/
      *(_QWORD *)&v96[328] = v137; /*0x100527d74*/
      *(_QWORD *)&v96[336] = v26; /*0x100527d7b*/
      *(_QWORD *)&v96[240] = v95[2]; /*0x100527d89*/
      *(_QWORD *)&v96[232] = v95[1]; /*0x100527d97*/
      *(_QWORD *)&v96[224] = v95[0]; /*0x100527da5*/
      *(_QWORD *)&v96[248] = *(_QWORD *)v107; /*0x100527db3*/
      *(_QWORD *)&v96[256] = *(_QWORD *)&v107[8]; /*0x100527dc1*/
      *(_QWORD *)&v96[264] = *(_QWORD *)&v107[16]; /*0x100527dcf*/
      *(_WORD *)&v96[352] = 514; /*0x100527dd6*/
      *(_QWORD *)v96 = 0; /*0x100527ddf*/
      *(_QWORD *)&v96[344] = v35; /*0x100527dea*/
      *(_QWORD *)&v96[16] = 1; /*0x100527df1*/
      *(_QWORD *)&v96[24] = v38; /*0x100527dfc*/
      *(_QWORD *)&v96[32] = 0; /*0x100527e03*/
      *(_QWORD *)&v96[48] = 2; /*0x100527e0e*/
      *(_QWORD *)&v96[88] = 2; /*0x100527e19*/
      if ( (_QWORD)v113 ) /*0x100527e27*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v131, v113, 1); /*0x100527e35*/
      if ( v138 ) /*0x100527e4b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, v138, 1); /*0x100527e59*/
      if ( v12 == 0x8000000000000000LL || !v103[2] ) /*0x100527e6d*/
      {
        v41 = 0; /*0x100527ec1*/
      }
      else
      {
        v39 = *((const void **)&v92[1] + 1); /*0x100527e6f*/
        v40 = *(_QWORD *)&v92[2]; /*0x100527e76*/
        v41 = v103[1]; /*0x100527e7d*/
        v42 = 360LL * v103[2]; /*0x100527e84*/
        while ( *(_QWORD *)(v41 + 144) != v40 || memcmp(*(const void **)(v41 + 136), v39, v40) ) /*0x100527ebd*/
        {
          v41 += 360; /*0x100527e90*/
          v42 -= 360; /*0x100527e97*/
          if ( !v42 ) /*0x100527e9e*/
          {
            v41 = 0; /*0x100527ec6*/
            break; /*0x100527ec6*/
          }
        }
      }
      codexmate_lib::core::repository::carry_over_registry_state::h816b0c0bb1076ffb(v96, v41); /*0x100527ed3*/
      v43 = *(_QWORD *)&v112[8]; /*0x100527ee2*/
      if ( *(volatile signed __int64 **)&v112[8] == v111 ) /*0x100527ef0*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h11ed8d038cb0ca10(&v111); /*0x100527ef9*/
      memcpy((void *)(*(_QWORD *)v112 + 360 * v43), v96, 0x168u); /*0x100527f1f*/
      *(_QWORD *)&v112[8] = v43 + 1; /*0x100527f27*/
      *(_QWORD *)&v98[1] = *(_QWORD *)&v92[2]; /*0x100527f39*/
      v98[0] = v92[1]; /*0x100527f4e*/
      if ( *(_QWORD *)&v112[16] != 0x8000000000000000LL && *(_QWORD *)&v112[16] ) /*0x100527f64*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v112[24], *(_QWORD *)&v112[16], 1); /*0x100527f72*/
      *(_QWORD *)&v112[32] = *(_QWORD *)&v98[1]; /*0x100527f7e*/
      *(_OWORD *)&v112[16] = v98[0]; /*0x100527f94*/
      if ( v126 ) /*0x100527fa1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v129, v126, 1); /*0x100527faf*/
    }
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x100527fcd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x100527fdb*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x100527fef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x100527ffd*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x100528011*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x10052801f*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x100528033*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x100528041*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x100528055*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x100528063*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x100528077*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x100528085*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x100528099*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x1005280a7*/
  }
  v44 = v143[31]; /*0x1005280b0*/
  v45 = v143[32]; /*0x1005280b7*/
  std::sys::fs::metadata::h32fa16d3052ea535(__dst, v44, v45); /*0x1005280cb*/
  if ( LODWORD(__dst[0]) == 1 ) /*0x1005280d7*/
  {
    if ( (__dst[1] & 3) == 1 ) /*0x1005280e8*/
    {
      v46 = __dst[1] - 1LL; /*0x1005280ee*/
      v47 = *(_QWORD *)(__dst[1] - 1LL); /*0x1005280f2*/
      v48 = *(_QWORD *)(__dst[1] + 7LL); /*0x1005280f6*/
      v49 = *(void (__fastcall **)(__int64))v48; /*0x1005280fa*/
      if ( *(_QWORD *)v48 ) /*0x1005280fa*/
LABEL_151:
        v49(v47); /*0x1005289d5*/
LABEL_152:
      v77 = *(_QWORD *)(v48 + 8); /*0x1005289da*/
      if ( v77 ) /*0x1005289e1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v77, *(_QWORD *)(v48 + 16)); /*0x1005289ea*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8); /*0x1005289fc*/
    }
    goto LABEL_155; /*0x1005289fc*/
  }
  std::sys::fs::read_dir::h768dda1fe4336014(__dst, v44, v45); /*0x10052811d*/
  v50 = __dst[0]; /*0x100528129*/
  v109 = __dst[0]; /*0x100528130*/
  v110 = __dst[1]; /*0x100528137*/
  if ( LOBYTE(__dst[1]) == 2 ) /*0x100528140*/
    goto LABEL_149; /*0x100528140*/
  __dst[0] = 0; /*0x100528146*/
  __dst[133] = 0; /*0x100528151*/
  __dst[266] = v50; /*0x10052815c*/
  v90 = __dst[1]; /*0x100528163*/
  while ( 1 ) /*0x10052818a*/
  {
    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he040380398a2fb7a( /*0x10052818a*/
      v92,
      __dst);
    if ( !*(_QWORD *)&v92[0] ) /*0x100528197*/
      break; /*0x100528197*/
    memcpy(__src, v92, sizeof(__src)); /*0x1005281af*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v100, __src); /*0x1005281be*/
    v51 = v101; /*0x1005281c3*/
    v52 = v102; /*0x1005281ca*/
    v53 = (_DWORD *)std::path::Path::extension::hbb56a39ecf8d3771(v101, v102); /*0x1005281d7*/
    if ( v53 == nullptr || v54 != 4 || *v53 != 1852797802 ) /*0x1005281fa*/
      goto LABEL_143; /*0x1005281fa*/
    codexmate_lib::core::auth::load_auth_file::hed0a61e6b371759b(v98, v51, v52); /*0x10052820d*/
    if ( *(_QWORD *)&v98[0] == v104 ) /*0x100528220*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03((char *)v98 + 8); /*0x100528229*/
      goto LABEL_143; /*0x10052822e*/
    }
    memcpy(v97, v98, sizeof(v97)); /*0x100528249*/
    codexmate_lib::core::auth::make_auth_snapshot::h359af250f486fc29(v95, v97, v51, v52); /*0x10052825e*/
    if ( LODWORD(v95[0]) == 2 ) /*0x10052826a*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v95[1]); /*0x100528273*/
    }
    else
    {
      v140 = v51; /*0x10052827d*/
      memcpy(v107, v95, sizeof(v107)); /*0x100528294*/
      if ( *(_QWORD *)&v112[8] ) /*0x1005282a3*/
      {
        v55 = *(_QWORD *)v112; /*0x1005282a9*/
        v56 = 360LL * *(_QWORD *)&v112[8]; /*0x1005282b0*/
        v142 = *(void **)&v107[24]; /*0x1005282be*/
        v57 = *(_QWORD *)&v107[32]; /*0x1005282c2*/
        v58 = 0; /*0x1005282c9*/
        while ( *(_QWORD *)(v55 + v58 + 144) != v57 || memcmp(*(const void **)(v55 + v58 + 136), v142, v57) ) /*0x100528300*/
        {
          v58 += 360; /*0x1005282d0*/
          if ( v56 == v58 ) /*0x1005282da*/
            goto LABEL_102; /*0x1005282da*/
        }
        if ( *(_QWORD *)&v107[16] ) /*0x10052830c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, *(_QWORD *)&v107[16], 1); /*0x100528317*/
        v51 = v140; /*0x100528330*/
        if ( *(_QWORD *)&v107[40] ) /*0x10052833b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v107[48], *(_QWORD *)&v107[40], 1); /*0x100528349*/
        if ( *(_QWORD *)&v107[64] != 0x8000000000000000LL && *(_QWORD *)&v107[64] ) /*0x10052835d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v107[72], *(_QWORD *)&v107[64], 1); /*0x10052836b*/
        if ( *(_QWORD *)&v107[88] != 0x8000000000000000LL && *(_QWORD *)&v107[88] ) /*0x10052837f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v107[96], *(_QWORD *)&v107[88], 1); /*0x10052838d*/
        v59 = *(void **)&v107[112]; /*0x100528392*/
        if ( *(_QWORD *)&v107[112] == 0x8000000000000000LL || !*(_QWORD *)&v107[112] ) /*0x1005283a5*/
          goto LABEL_122; /*0x1005283a5*/
        v60 = *(void **)&v107[120]; /*0x1005283ab*/
      }
      else
      {
LABEL_102:
        v116 = v95[4]; /*0x1005283bc*/
        v115 = (void *)v95[3]; /*0x1005283d6*/
        v114 = (void *)v95[2]; /*0x1005283dd*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v118, &v114); /*0x1005283f2*/
        v51 = v140; /*0x1005283f7*/
        v99[0] = v140; /*0x1005283fb*/
        v99[1] = v52; /*0x100528402*/
        v126 = nullptr; /*0x100528409*/
        v127 = (void *)1; /*0x100528414*/
        v128 = 0; /*0x10052841f*/
        v125 = 1610612768; /*0x10052842a*/
        v123 = &v126; /*0x10052843c*/
        v124 = &anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x10052844a*/
        if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f( /*0x100528462*/
                                v99,
                                &v123) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100528c77*/
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
            55,
            v108,
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
        v142 = v126; /*0x100528476*/
        v134 = v127; /*0x100528481*/
        v61 = v128; /*0x100528485*/
        v141 = *(_QWORD *)&v107[40]; /*0x100528493*/
        v135 = *(_QWORD *)&v107[48]; /*0x10052849e*/
        v62 = *(_QWORD *)&v107[56]; /*0x1005284a2*/
        v138 = *(_QWORD *)&v107[64]; /*0x1005284b0*/
        v136 = *(_QWORD *)&v107[72]; /*0x1005284bb*/
        v131 = *(_QWORD *)&v107[88]; /*0x1005284c6*/
        v113 = *(_OWORD *)&v107[80]; /*0x1005284d4*/
        v137 = *(_QWORD *)&v107[96]; /*0x1005284e2*/
        v139 = *(_QWORD *)&v107[112]; /*0x1005284ed*/
        v105 = *(_OWORD *)&v107[104]; /*0x1005284f8*/
        v63 = *(void **)&v107[120]; /*0x1005284ff*/
        *(_QWORD *)&v106 = *(_QWORD *)&v107[128]; /*0x10052850d*/
        v126 = &v107[146]; /*0x10052851b*/
        v127 = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::h5788e8ec8fe42d9f; /*0x100528529*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v123, &unk_101224633, &v126); /*0x100528544*/
        v130 = v123; /*0x100528550*/
        v121 = v124; /*0x100528568*/
        v129 = v63; /*0x10052856f*/
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v126, v124, v125, v64, v65, v66); /*0x100528576*/
        v108[0] = &v107[144]; /*0x100528582*/
        v108[1] = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h440c81a8257c185d; /*0x100528590*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v123, &unk_101224633, v108); /*0x1005285af*/
        v67 = v123; /*0x1005285b4*/
        v68 = v124; /*0x1005285cc*/
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v123, v124, v125, v69, v70, v71); /*0x1005285cf*/
        *(_QWORD *)&v94[144] = v120; /*0x1005285e2*/
        *(_QWORD *)&v94[136] = v119; /*0x1005285ed*/
        *(_QWORD *)&v94[128] = v118; /*0x1005285f8*/
        *(_QWORD *)&v94[152] = v142; /*0x1005285ff*/
        *(_QWORD *)&v94[160] = v134; /*0x10052860a*/
        *(_QWORD *)&v94[168] = v61; /*0x100528611*/
        *(_QWORD *)&v94[176] = v141; /*0x10052861c*/
        *(_QWORD *)&v94[184] = v135; /*0x100528627*/
        *(_QWORD *)&v94[192] = v62; /*0x10052862e*/
        *(_QWORD *)&v94[200] = 0; /*0x100528635*/
        *(_QWORD *)&v94[208] = 1; /*0x100528640*/
        *(_QWORD *)&v94[216] = 0; /*0x10052864b*/
        *(_QWORD *)&v94[272] = v138; /*0x10052865a*/
        *(_QWORD *)&v94[280] = v136; /*0x100528665*/
        *(_OWORD *)&v94[288] = v113; /*0x100528673*/
        *(_QWORD *)&v94[304] = v137; /*0x10052867e*/
        *(_OWORD *)&v94[312] = v105; /*0x10052868c*/
        *(_QWORD *)&v94[328] = v129; /*0x10052869a*/
        *(_QWORD *)&v94[336] = v106; /*0x1005286a8*/
        *(_QWORD *)&v94[240] = v128; /*0x1005286b6*/
        *(_QWORD *)&v94[232] = v127; /*0x1005286c1*/
        *(_QWORD *)&v94[224] = v126; /*0x1005286cc*/
        *(_QWORD *)&v94[264] = v125; /*0x1005286d7*/
        *(_QWORD *)&v94[256] = v124; /*0x1005286e5*/
        *(_QWORD *)&v94[248] = v123; /*0x1005286f3*/
        *(_WORD *)&v94[352] = 514; /*0x1005286fe*/
        *(_QWORD *)v94 = 0; /*0x100528707*/
        *(_QWORD *)&v94[344] = *(_QWORD *)&v107[136]; /*0x100528712*/
        *(_QWORD *)&v94[16] = 0; /*0x100528719*/
        *(_QWORD *)&v94[32] = 0; /*0x100528724*/
        *(_QWORD *)&v94[48] = 2; /*0x10052872f*/
        *(_QWORD *)&v94[88] = 2; /*0x10052873a*/
        if ( v67 ) /*0x100528748*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v67, 1); /*0x100528755*/
        if ( v130 ) /*0x100528775*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v121, v130, 1); /*0x100528783*/
        v72 = v115; /*0x100528788*/
        if ( v103[0] == 0x8000000000000000LL || !v103[2] ) /*0x1005287a2*/
        {
          v74 = 0; /*0x1005287f1*/
        }
        else
        {
          v73 = v116; /*0x1005287a4*/
          v74 = v103[1]; /*0x1005287ab*/
          v75 = 360LL * v103[2]; /*0x1005287b2*/
          while ( *(_QWORD *)(v74 + 144) != v73 || memcmp(*(const void **)(v74 + 136), v72, v73) ) /*0x1005287ed*/
          {
            v74 += 360; /*0x1005287c0*/
            v75 -= 360; /*0x1005287c7*/
            if ( !v75 ) /*0x1005287ce*/
            {
              v74 = 0; /*0x1005287f5*/
              break; /*0x1005287f5*/
            }
          }
          v51 = v140; /*0x1005287f7*/
        }
        codexmate_lib::core::repository::carry_over_registry_state::h816b0c0bb1076ffb(v94, v74); /*0x10052880c*/
        v76 = *(_QWORD *)&v112[8]; /*0x100528811*/
        if ( *(volatile signed __int64 **)&v112[8] == v111 ) /*0x10052881f*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h11ed8d038cb0ca10(&v111); /*0x100528828*/
        memcpy((void *)(*(_QWORD *)v112 + 360 * v76), v94, 0x168u); /*0x100528847*/
        *(_QWORD *)&v112[8] = v76 + 1; /*0x10052884f*/
        v59 = v114; /*0x100528856*/
        if ( !v114 ) /*0x100528860*/
          goto LABEL_122; /*0x100528860*/
        v60 = v72; /*0x100528867*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v59, 1); /*0x10052886a*/
    }
LABEL_122:
    if ( v97[0] != 0x8000000000000000LL && v97[0] ) /*0x10052887e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[1], v97[0], 1); /*0x10052888c*/
    if ( v97[3] != 0x8000000000000000LL && v97[3] ) /*0x1005288a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[4], v97[3], 1); /*0x1005288ae*/
    if ( v97[6] != 0x8000000000000000LL && v97[6] ) /*0x1005288c2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[7], v97[6], 1); /*0x1005288d0*/
    if ( v97[9] != 0x8000000000000000LL && v97[9] ) /*0x1005288e4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[10], v97[9], 1); /*0x1005288f2*/
    if ( v97[12] != 0x8000000000000000LL && v97[12] ) /*0x100528906*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[13], v97[12], 1); /*0x100528914*/
    if ( v97[15] != 0x8000000000000000LL && v97[15] ) /*0x100528928*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[16], v97[15], 1); /*0x100528936*/
    if ( v97[18] != 0x8000000000000000LL && v97[18] ) /*0x10052894a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97[19], v97[18], 1); /*0x100528958*/
LABEL_143:
    if ( v100 ) /*0x10052896a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v100, 1); /*0x100528974*/
    if ( !_InterlockedDecrement64(__src[0]) ) /*0x100528980*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__src); /*0x100528991*/
  }
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::he15cef2cd682728c(__dst); /*0x1005289a2*/
  if ( v110 == 2 ) /*0x1005289ae*/
  {
    v50 = v109; /*0x1005289b0*/
LABEL_149:
    if ( (v50 & 3) == 1 ) /*0x1005289bf*/
    {
      v46 = v50 - 1; /*0x1005289c1*/
      v47 = *(_QWORD *)(v50 - 1); /*0x1005289c5*/
      v48 = *(_QWORD *)(v50 + 7); /*0x1005289c9*/
      v49 = *(void (__fastcall **)(__int64))v48; /*0x1005289cd*/
      if ( *(_QWORD *)v48 ) /*0x1005289cd*/
        goto LABEL_151; /*0x1005289d3*/
      goto LABEL_152; /*0x1005289d3*/
    }
  }
LABEL_155:
  v78 = *(_QWORD *)v112; /*0x100528a01*/
  __dst[0] = v108; /*0x100528a16*/
  if ( *(_QWORD *)&v112[8] >= 2u ) /*0x100528a21*/
  {
    if ( *(_QWORD *)&v112[8] >= 0x15u ) /*0x100528c2a*/
    {
      core::slice::sort::stable::driftsort_main::h7f7b222a6918286e(*(_QWORD *)v112, *(_QWORD *)&v112[8], __dst); /*0x100528cb0*/
    }
    else
    {
      v86 = 360LL * *(_QWORD *)&v112[8]; /*0x100528c2c*/
      v87 = 360; /*0x100528c33*/
      do /*0x100528c4f*/
      {
        core::slice::sort::shared::smallsort::insert_tail::hd03d099f3722d457(v78, v78 + v87); /*0x100528c40*/
        v87 += 360; /*0x100528c45*/
      }
      while ( v86 != v87 ); /*0x100528c4f*/
    }
  }
  codexmate_lib::core::repository::Repository::persist_registry::haf3cfbaf5a89afb4(__dst, v143, &v111, 1); /*0x100528a3e*/
  v6 = __dst[0]; /*0x100528a43*/
  if ( __dst[0] != 10 ) /*0x100528a4e*/
  {
    v84 = __dst[1]; /*0x100528b5e*/
    qmemcpy(v93, &__dst[2], sizeof(v93)); /*0x100528b78*/
    v2 = __dst[11]; /*0x100528b7b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(&v111); /*0x100528b93*/
    a1 = v117; /*0x100528b98*/
    if ( v103[0] != 0x8000000000000000LL ) /*0x100528ba6*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(v103); /*0x100528baf*/
    v5 = v84; /*0x100528bb4*/
    goto LABEL_165; /*0x100528bb4*/
  }
  v79 = v111; /*0x100528a5b*/
  qmemcpy(v93, v112, sizeof(v93)); /*0x100528a6e*/
  if ( v103[0] != 0x8000000000000000LL ) /*0x100528a82*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(v103); /*0x100528a8b*/
  qmemcpy(v91, v93, sizeof(v91)); /*0x100528aa6*/
  qmemcpy(&__src[1], v91, 0x48u); /*0x100528ab8*/
  __src[0] = v79; /*0x100528abb*/
  v80 = __src[2]; /*0x100528ac2*/
  v92[0] = *(_OWORD *)&__src[3]; /*0x100528ad0*/
  *(volatile signed __int64 **)&v92[1] = __src[5]; /*0x100528aec*/
  DWORD2(v92[1]) = __src[2]; /*0x100528af3*/
  BYTE12(v92[1]) = 1; /*0x100528afa*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha6c5cb8644e10b3c(__dst, v92); /*0x100528b0f*/
  qmemcpy(v117, __dst, 0x70u); /*0x100528b27*/
  v81 = __src[1]; /*0x100528b2a*/
  v82 = (char *)v80 + 1; /*0x100528b31*/
  v83 = __src[1]; /*0x100528b34*/
  while ( v82 != (char *)1 ) /*0x100528b44*/
  {
    --v82; /*0x100528b51*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h3ff0f72072d7b435(v83); /*0x100528b54*/
    v83 += 45; /*0x100528b59*/
  }
  a1 = v117; /*0x100528c07*/
  if ( v79 ) /*0x100528c0e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, 360LL * (_QWORD)v79, 8); /*0x100528c1f*/
  return a1; /*0x100528bf2*/
}