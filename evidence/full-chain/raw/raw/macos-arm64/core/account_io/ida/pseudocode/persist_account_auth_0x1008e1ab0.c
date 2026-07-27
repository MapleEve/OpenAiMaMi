// __ZN13codexmate_lib4core10account_io20persist_account_auth @ 0x1008e1ab0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::account_io::persist_account_auth::h0fa88115997f54f4(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v6; // rax
  void *v7; // rax
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // r12
  int v12; // eax
  int *v13; // rsi
  __int64 *v14; // rdi
  __int64 i; // rcx
  __int64 v16; // rdi
  int v17; // r14d
  __int64 v18; // r14
  __int64 v19; // r12
  int v20; // eax
  int *v21; // rsi
  __int64 *v22; // rdi
  __int64 k; // rcx
  __int64 v24; // rdi
  int v25; // r14d
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r12
  _QWORD *v30; // rsi
  __int64 v31; // rax
  _DWORD *v32; // rdi
  __int64 *v33; // rsi
  __int64 j; // rcx
  _DWORD *v35; // rdi
  __int64 *v36; // rsi
  __int64 m; // rcx
  char v38; // r14
  int *v39; // rsi
  _DWORD *v40; // rdi
  __int64 n; // rcx
  char v42; // r15
  __int64 v43; // rsi
  _QWORD *v44; // rax
  __int64 v45; // rsi
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rcx
  __int128 v53; // xmm0
  __int64 v54; // r12
  __int64 v55; // rax
  char v56; // r13
  __int64 v57; // rax
  char v58; // al
  int v59; // edx
  char v60; // al
  int v61; // edx
  _BYTE v62[96]; // [rsp+8h] [rbp-728h] BYREF
  _QWORD v63[25]; // [rsp+68h] [rbp-6C8h] BYREF
  __int64 v64; // [rsp+130h] [rbp-600h]
  __int64 v65; // [rsp+138h] [rbp-5F8h]
  __int64 v66; // [rsp+148h] [rbp-5E8h]
  __int64 v67; // [rsp+150h] [rbp-5E0h]
  int v68[2]; // [rsp+160h] [rbp-5D0h]
  int v69[2]; // [rsp+168h] [rbp-5C8h]
  _QWORD v70[11]; // [rsp+350h] [rbp-3E0h] BYREF
  __int64 v71[12]; // [rsp+3A8h] [rbp-388h] BYREF
  _QWORD v72[3]; // [rsp+408h] [rbp-328h] BYREF
  int v73; // [rsp+420h] [rbp-310h]
  _QWORD v74[12]; // [rsp+438h] [rbp-2F8h] BYREF
  _QWORD v75[3]; // [rsp+498h] [rbp-298h] BYREF
  _QWORD v76[3]; // [rsp+4B0h] [rbp-280h] BYREF
  _QWORD v77[3]; // [rsp+4C8h] [rbp-268h] BYREF
  __int64 v78[15]; // [rsp+4E0h] [rbp-250h] BYREF
  _QWORD v79[13]; // [rsp+558h] [rbp-1D8h] BYREF
  __int64 v80; // [rsp+5C0h] [rbp-170h]
  __int64 v81; // [rsp+5C8h] [rbp-168h]
  __int64 v82; // [rsp+5D0h] [rbp-160h]
  __int64 v83; // [rsp+5D8h] [rbp-158h]
  __int64 v84; // [rsp+5E0h] [rbp-150h]
  __int64 v85; // [rsp+5E8h] [rbp-148h] BYREF
  __int64 v86; // [rsp+5F0h] [rbp-140h]
  __int64 v87; // [rsp+5F8h] [rbp-138h]
  __int64 v88; // [rsp+600h] [rbp-130h] BYREF
  void *__s1; // [rsp+608h] [rbp-128h]
  size_t __n; // [rsp+610h] [rbp-120h]
  int v91[2]; // [rsp+618h] [rbp-118h]
  int v92[28]; // [rsp+620h] [rbp-110h] BYREF
  __int64 v93; // [rsp+690h] [rbp-A0h]
  __int64 v94; // [rsp+698h] [rbp-98h]
  __int64 v95; // [rsp+6A0h] [rbp-90h]
  __int64 v96; // [rsp+6A8h] [rbp-88h]
  __int64 v97; // [rsp+6B0h] [rbp-80h]
  __int64 v98; // [rsp+6B8h] [rbp-78h]
  __int64 v99; // [rsp+6C0h] [rbp-70h] BYREF
  void *__s2; // [rsp+6C8h] [rbp-68h]
  size_t v101; // [rsp+6D0h] [rbp-60h]
  __int64 v102; // [rsp+6D8h] [rbp-58h]
  int v103[2]; // [rsp+6E0h] [rbp-50h]
  int v104; // [rsp+6E8h] [rbp-48h] BYREF
  int v105; // [rsp+6ECh] [rbp-44h] BYREF
  __int64 v106; // [rsp+6F0h] [rbp-40h]
  unsigned int v107; // [rsp+6FCh] [rbp-34h] BYREF
  __int64 v108; // [rsp+700h] [rbp-30h]

  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(v63, a2); /*0x1008e1ad7*/
  v6 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(v63); /*0x1008e1adf*/
  if ( v6 ) /*0x1008e1ae7*/
  {
    *a1 = 2; /*0x1008e1ae9*/
    a1[1] = v6; /*0x1008e1af0*/
    goto LABEL_8; /*0x1008e1af4*/
  }
  if ( !(unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(a3) ) /*0x1008e1b03*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a2); /*0x1008e1b5e*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x1008e1b6d*/
    if ( !v7 ) /*0x1008e1b75*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x1008e283a*/
    qmemcpy(v7, "Only real ChatGPT OAuth credentials can be added as accounts", 60); /*0x1008e1bd9*/
    *a1 = 9; /*0x1008e1be3*/
    a1[1] = 60; /*0x1008e1bea*/
    a1[2] = v7; /*0x1008e1bf2*/
    a1[3] = 60; /*0x1008e1bf6*/
    goto LABEL_8; /*0x1008e1bf6*/
  }
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v92, a3, &unk_101676480, 16); /*0x1008e1b1b*/
  qmemcpy(v78, &v92[2], 0x60u); /*0x1008e1b3a*/
  if ( *(_QWORD *)v92 == 2 ) /*0x1008e1b41*/
  {
    qmemcpy(a1, v78, 0x60u); /*0x1008e1b56*/
    goto LABEL_8; /*0x1008e1b56*/
  }
  v84 = v97; /*0x1008e1c2d*/
  v83 = v96; /*0x1008e1c3b*/
  v82 = v95; /*0x1008e1c49*/
  v81 = v94; /*0x1008e1c57*/
  v80 = v93; /*0x1008e1c6c*/
  v79[12] = *(_QWORD *)&v92[26]; /*0x1008e1c73*/
  qmemcpy(v79, v78, 0x60u); /*0x1008e1c8d*/
  v78[14] = *(_QWORD *)v92; /*0x1008e1c90*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v99, &v79[1]); /*0x1008e1ca5*/
  if ( !(unsigned __int8)codexmate_lib::core::account_io::is_valid_account_key::h2840000d394c63d9((__int64)__s2, v101) ) /*0x1008e1cb9*/
  {
    *(_QWORD *)v92 = &v99; /*0x1008e1f36*/
    *(_QWORD *)&v92[2] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e1f44*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v77, &unk_1017C6DB5, v92); /*0x1008e1f60*/
    a1[3] = v77[2]; /*0x1008e1f6c*/
    v31 = v77[0]; /*0x1008e1f70*/
    a1[2] = v77[1]; /*0x1008e1f7e*/
    a1[1] = v31; /*0x1008e1f82*/
    *a1 = 9; /*0x1008e1f86*/
    goto LABEL_54; /*0x1008e1f8d*/
  }
  codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad( /*0x1008e1cdc*/
    &v85,
    *(__int64 *)v68,
    *(__int64 *)v69,
    (unsigned __int8 *)__s2,
    v101,
    v9);
  *(_QWORD *)v103 = v86; /*0x1008e1cf6*/
  *(_QWORD *)v91 = v87; /*0x1008e1cfa*/
  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)v74, v86, v87); /*0x1008e1d01*/
  v10 = v74[1]; /*0x1008e1d06*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x1008e1d2b*/
    (__int64)v92,
    v74[1],
    v74[2],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
    18);
  v11 = *(_QWORD *)v92; /*0x1008e1d30*/
  v12 = v92[2]; /*0x1008e1d37*/
  if ( *(_QWORD *)v92 != 11 ) /*0x1008e1d41*/
  {
    v13 = &v92[3]; /*0x1008e1d43*/
    v14 = v78; /*0x1008e1d4a*/
    for ( i = 21; i; --i ) /*0x1008e1d51*/
    {
      *(_DWORD *)v14 = *v13++; /*0x1008e1d56*/
      v14 = (__int64 *)((char *)v14 + 4); /*0x1008e1d56*/
    }
  }
  if ( v74[0] ) /*0x1008e1d62*/
  {
    v16 = v10; /*0x1008e1d69*/
    v17 = v12; /*0x1008e1d6c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v74[0], 1); /*0x1008e1d6f*/
    v12 = v17; /*0x1008e1d74*/
  }
  if ( (_DWORD)v11 != 11 ) /*0x1008e1d7b*/
  {
    v32 = (_DWORD *)a1 + 3; /*0x1008e1f92*/
    v33 = v78; /*0x1008e1f96*/
    for ( j = 21; j; --j ) /*0x1008e1f9d*/
    {
      *v32 = *(_DWORD *)v33; /*0x1008e1fa2*/
      v33 = (__int64 *)((char *)v33 + 4); /*0x1008e1fa2*/
      ++v32; /*0x1008e1fa2*/
    }
    *a1 = v11; /*0x1008e1fa4*/
    *((_DWORD *)a1 + 2) = v12; /*0x1008e1fa7*/
    if ( v85 ) /*0x1008e1fb4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v103, v85, 1); /*0x1008e1fbf*/
    goto LABEL_54; /*0x1008e1fbf*/
  }
  v107 = v12; /*0x1008e1d81*/
  std::path::Path::_join::hb1a495d4f06b13b8(v74, v64, v65, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15); /*0x1008e1da9*/
  v18 = v74[1]; /*0x1008e1dae*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x1008e1dd3*/
    (__int64)v92,
    v74[1],
    v74[2],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
    9);
  v19 = *(_QWORD *)v92; /*0x1008e1dd8*/
  v20 = v92[2]; /*0x1008e1ddf*/
  if ( *(_QWORD *)v92 != 11 ) /*0x1008e1de9*/
  {
    v21 = &v92[3]; /*0x1008e1deb*/
    v22 = v78; /*0x1008e1df2*/
    for ( k = 21; k; --k ) /*0x1008e1df9*/
    {
      *(_DWORD *)v22 = *v21++; /*0x1008e1dfe*/
      v22 = (__int64 *)((char *)v22 + 4); /*0x1008e1dfe*/
    }
  }
  if ( v74[0] ) /*0x1008e1e0a*/
  {
    v24 = v18; /*0x1008e1e11*/
    v25 = v20; /*0x1008e1e14*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v74[0], 1); /*0x1008e1e17*/
    v20 = v25; /*0x1008e1e1c*/
  }
  if ( (_DWORD)v19 != 11 ) /*0x1008e1e23*/
  {
    v35 = (_DWORD *)a1 + 3; /*0x1008e1fd3*/
    v36 = v78; /*0x1008e1fd7*/
    for ( m = 21; m; --m ) /*0x1008e1fde*/
    {
      *v35 = *(_DWORD *)v36; /*0x1008e1fe3*/
      v36 = (__int64 *)((char *)v36 + 4); /*0x1008e1fe3*/
      ++v35; /*0x1008e1fe3*/
    }
    *a1 = v19; /*0x1008e1fe5*/
    *((_DWORD *)a1 + 2) = v20; /*0x1008e1fe8*/
    v38 = 1; /*0x1008e1feb*/
    goto LABEL_50; /*0x1008e1fee*/
  }
  v105 = v20; /*0x1008e1e29*/
  codexmate_lib::core::account_coordination::AccountDomainLock::acquire::h3ce1b7e61ad69c28((__int64)v92, v64, v65); /*0x1008e1e44*/
  v26 = *(_QWORD *)v92; /*0x1008e1e49*/
  v27 = v92[2]; /*0x1008e1e50*/
  if ( *(_QWORD *)v92 != 11 ) /*0x1008e1e5a*/
  {
    v39 = &v92[3]; /*0x1008e1ff0*/
    v40 = (_DWORD *)a1 + 3; /*0x1008e1ff7*/
    for ( n = 21; n; --n ) /*0x1008e1ffb*/
      *v40++ = *v39++; /*0x1008e2000*/
    *a1 = v26; /*0x1008e2002*/
    *((_DWORD *)a1 + 2) = v27; /*0x1008e2005*/
    v38 = 1; /*0x1008e2008*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v105); /*0x1008e200f*/
    goto LABEL_50; /*0x1008e2014*/
  }
  v104 = v92[2]; /*0x1008e1e60*/
  codexmate_lib::core::account_io::ensure_existing_snapshot_owned_by::h0affb85540e63851( /*0x1008e1e99*/
    v92,
    *(__int64 *)v103,
    *(__int64 *)v91,
    *(__int64 *)v68,
    *(__int64 *)v69,
    __s2,
    v101);
  if ( v92[0] != 11 ) /*0x1008e1ea5*/
  {
    qmemcpy(a1, v92, 0x60u); /*0x1008e2025*/
LABEL_48:
    v38 = 1; /*0x1008e2040*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v104); /*0x1008e2047*/
LABEL_49:
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v105); /*0x1008e204c*/
LABEL_50:
    v42 = v38; /*0x1008e2055*/
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v107); /*0x1008e205c*/
    close_NOCANCEL(v107); /*0x1008e2064*/
    goto LABEL_51; /*0x1008e2064*/
  }
  codexmate_lib::core::account_io::read_registry_for_mutation::h61c2c695512ac956(v92, v66, v67); /*0x1008e1ec0*/
  v28 = *(_QWORD *)v92; /*0x1008e1ec5*/
  qmemcpy(v78, &v92[2], 0x58u); /*0x1008e1edf*/
  if ( *(_QWORD *)v92 != 11 ) /*0x1008e1ee6*/
  {
    qmemcpy(a1 + 1, v78, 0x58u); /*0x1008e203a*/
    *a1 = v28; /*0x1008e203d*/
    goto LABEL_48; /*0x1008e203d*/
  }
  qmemcpy(v70, v78, sizeof(v70)); /*0x1008e1f02*/
  v29 = v70[0]; /*0x1008e1f05*/
  v30 = nullptr; /*0x1008e1f0c*/
  if ( v70[0] != 0x8000000000000000LL ) /*0x1008e1f11*/
    v30 = v70; /*0x1008e1f11*/
  codexmate_lib::core::account_io::registry_keys::hae496b4b1bf53d89(v72, (__int64)v30); /*0x1008e1f1c*/
  if ( v29 == 0x8000000000000000LL ) /*0x1008e1f24*/
  {
    v78[0] = 0x8000000000000000LL; /*0x1008e1f2a*/
  }
  else
  {
    qmemcpy(&v92[2], &v70[1], 0x50u); /*0x1008e2188*/
    *(_QWORD *)v92 = v29; /*0x1008e218b*/
    codexmate_lib::core::account_io::import_accounts::_$u7b$$u7b$closure$u7d$$u7d$::hedc9f3e017ac7377( /*0x1008e21a0*/
      v78,
      (__int64 *)v92);
  }
  codexmate_lib::core::account_io::read_effective_active_account_key::h56ef408fb1c13e98(&v88, v63[4], v63[5], v78); /*0x1008e21c4*/
  v46 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h084dd07ddc777fc3(v72, &v99); /*0x1008e21d4*/
  LOBYTE(v47) = 1; /*0x1008e21d9*/
  v98 = v47; /*0x1008e21db*/
  if ( !v46 ) /*0x1008e21e1*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(v92, *(_QWORD *)v103, *(_QWORD *)v91); /*0x1008e21f5*/
    v98 = *(_QWORD *)v92; /*0x1008e2208*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008e220c*/
      *(_QWORD *)v92,
      *(_QWORD *)&v92[2]);
    v48 = v98; /*0x1008e2211*/
    LOBYTE(v48) = v98 ^ 1; /*0x1008e2215*/
    v98 = v48; /*0x1008e2217*/
  }
  v102 = v88; /*0x1008e2222*/
  if ( v88 != 0x8000000000000000LL && __n == v101 && !memcmp(__s1, __s2, __n) ) /*0x1008e224a*/
  {
    *(_QWORD *)&v92[4] = v101; /*0x1008e243a*/
    *(_QWORD *)&v92[2] = __s2; /*0x1008e2449*/
    *(_QWORD *)v92 = v99; /*0x1008e2450*/
    *(_QWORD *)&v92[6] = v79[4]; /*0x1008e2465*/
    *(_QWORD *)&v92[8] = v79[5]; /*0x1008e246c*/
    *(_QWORD *)&v92[10] = v79[6]; /*0x1008e247a*/
    v58 = BYTE2(v84); /*0x1008e2481*/
    v59 = v73; /*0x1008e2488*/
    *(_QWORD *)&v92[12] = v88; /*0x1008e249c*/
    *(_QWORD *)&v92[14] = __s1; /*0x1008e24a3*/
    *(_QWORD *)&v92[16] = __n; /*0x1008e24b1*/
    qmemcpy(a1 + 1, v92, 0x48u); /*0x1008e24c8*/
    *((_DWORD *)a1 + 20) = v59; /*0x1008e24cb*/
    *((_BYTE *)a1 + 84) = 2; /*0x1008e24ce*/
    *((_BYTE *)a1 + 85) = v58; /*0x1008e24d2*/
    *a1 = 11; /*0x1008e24d5*/
    v56 = 1; /*0x1008e24dc*/
    v42 = 0; /*0x1008e24df*/
    goto LABEL_92; /*0x1008e24e2*/
  }
  serde_json::ser::to_vec_pretty::h7e50eac573342525(v78, a3); /*0x1008e225a*/
  v49 = v78[0]; /*0x1008e225f*/
  v50 = v78[1]; /*0x1008e2266*/
  if ( v78[0] == 0x8000000000000000LL ) /*0x1008e2270*/
  {
    codexmate_lib::core::account_io::persist_account_auth::_$u7b$$u7b$closure$u7d$$u7d$::h3d78c388e38241e7(v92, v78[1]); /*0x1008e2280*/
    v51 = *(_QWORD *)&v92[4]; /*0x1008e2285*/
    v52 = *(_QWORD *)&v92[6]; /*0x1008e228c*/
    a1[11] = *(_QWORD *)&v92[22]; /*0x1008e229a*/
    a1[10] = *(_QWORD *)&v92[20]; /*0x1008e22a5*/
    a1[9] = *(_QWORD *)&v92[18]; /*0x1008e22b0*/
    a1[8] = *(_QWORD *)&v92[16]; /*0x1008e22bb*/
    a1[7] = *(_QWORD *)&v92[14]; /*0x1008e22c6*/
    a1[6] = *(_QWORD *)&v92[12]; /*0x1008e22d1*/
    a1[5] = *(_QWORD *)&v92[10]; /*0x1008e22dc*/
    a1[4] = *(_QWORD *)&v92[8]; /*0x1008e22e7*/
    v53 = *(_OWORD *)v92; /*0x1008e22eb*/
    a1[2] = v51; /*0x1008e22f2*/
    a1[3] = v52; /*0x1008e22f6*/
    *(_OWORD *)a1 = v53; /*0x1008e22fa*/
  }
  else
  {
    v54 = v78[2]; /*0x1008e2302*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v76, &v99); /*0x1008e2314*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4ccd5ea377d1fd44(v92, &v85); /*0x1008e2327*/
    v75[2] = *(_QWORD *)&v92[4]; /*0x1008e2333*/
    v75[1] = *(_QWORD *)&v92[2]; /*0x1008e2348*/
    v75[0] = *(_QWORD *)v92; /*0x1008e234f*/
    v74[0] = v49; /*0x1008e2356*/
    v74[1] = v50; /*0x1008e235d*/
    v74[2] = v54; /*0x1008e2364*/
    codexmate_lib::core::account_io::SnapshotWriteRecord::capture::h8769c045d4b5419f(v92, v76, v75, v74); /*0x1008e2387*/
    v55 = (unsigned int)v92[0]; /*0x1008e238c*/
    qmemcpy(v78, &v92[2], 0x60u); /*0x1008e23a5*/
    if ( v92[0] != 1 ) /*0x1008e23b5*/
    {
      qmemcpy(v71, v78, sizeof(v71)); /*0x1008e23e4*/
      LOBYTE(v55) = 1; /*0x1008e23e7*/
      v106 = v55; /*0x1008e23e9*/
      LOBYTE(v55) = 1; /*0x1008e23fb*/
      v108 = v55; /*0x1008e23fd*/
      v57 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1008e2415*/
              *(void **)v103,
              *(size_t *)v91,
              v71[7],
              v71[8],
              1);
      if ( v57 ) /*0x1008e241d*/
      {
        *a1 = 2; /*0x1008e2423*/
        a1[1] = v57; /*0x1008e242a*/
        v56 = 1; /*0x1008e242e*/
      }
      else
      {
        v92[0] = v104; /*0x1008e24ea*/
        v108 = 0; /*0x1008e24f0*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(v92); /*0x1008e2502*/
        v92[0] = v105; /*0x1008e250a*/
        v108 = 0; /*0x1008e2510*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(v92); /*0x1008e2522*/
        v92[0] = v107; /*0x1008e252a*/
        v108 = 0; /*0x1008e2530*/
        v106 = 0; /*0x1008e2542*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(v92); /*0x1008e254a*/
        v108 = 0; /*0x1008e254f*/
        v106 = 0; /*0x1008e2561*/
        codexmate_lib::core::repository::Repository::rebuild_registry_with_policy::hbfa144768b254519( /*0x1008e2573*/
          (char *)v92,
          a2,
          1,
          0);
        if ( *(_QWORD *)v92 != 0x8000000000000000LL ) /*0x1008e257f*/
        {
          qmemcpy(v78, v92, 0x70u); /*0x1008e265d*/
          *(_QWORD *)&v92[4] = v101; /*0x1008e2664*/
          *(_QWORD *)&v92[2] = __s2; /*0x1008e2673*/
          *(_QWORD *)v92 = v99; /*0x1008e267a*/
          *(_QWORD *)&v92[6] = v79[4]; /*0x1008e268f*/
          *(_QWORD *)&v92[8] = v79[5]; /*0x1008e2696*/
          *(_QWORD *)&v92[10] = v79[6]; /*0x1008e26a4*/
          v60 = BYTE2(v84); /*0x1008e26ab*/
          v61 = v78[12]; /*0x1008e26b2*/
          *(_QWORD *)&v92[12] = v78[9]; /*0x1008e26c6*/
          *(_QWORD *)&v92[14] = v78[10]; /*0x1008e26cd*/
          *(_QWORD *)&v92[16] = v78[11]; /*0x1008e26db*/
          qmemcpy(a1 + 1, v92, 0x48u); /*0x1008e26f2*/
          *((_DWORD *)a1 + 20) = v61; /*0x1008e26f5*/
          *((_BYTE *)a1 + 84) = v98; /*0x1008e26fc*/
          *((_BYTE *)a1 + 85) = v60; /*0x1008e26ff*/
          *a1 = 11; /*0x1008e2702*/
          if ( v78[0] ) /*0x1008e2713*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78[1], v78[0], 1); /*0x1008e2721*/
          if ( v78[3] ) /*0x1008e2730*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78[4], v78[3], 1); /*0x1008e273e*/
          core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..models..CoreWarning$GT$$GT$::hd8f25c91fd0664b5(&v78[6]); /*0x1008e274a*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..SnapshotWriteRecord$GT$::h40100033941db5b7(v71); /*0x1008e2756*/
          if ( v102 != 0x8000000000000000LL && v102 ) /*0x1008e2771*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v102, 1); /*0x1008e277f*/
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(v72); /*0x1008e2791*/
          if ( v85 ) /*0x1008e27a0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v103, v85, 1); /*0x1008e27ab*/
          if ( v79[1] ) /*0x1008e27ba*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[2], v79[1], 1); /*0x1008e27c8*/
          if ( v79[7] != 0x8000000000000000LL && v79[7] ) /*0x1008e27e6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[8], v79[7], 1); /*0x1008e27f4*/
          if ( v79[10] != 0x8000000000000000LL && v79[10] ) /*0x1008e2808*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[11], v79[10], 1); /*0x1008e2816*/
          v45 = v80; /*0x1008e281b*/
          if ( v80 != 0x8000000000000000LL ) /*0x1008e2825*/
            goto LABEL_68; /*0x1008e2825*/
          goto LABEL_8; /*0x1008e2825*/
        }
        qmemcpy(v62, &v92[2], sizeof(v62)); /*0x1008e259b*/
        v108 = 0; /*0x1008e259e*/
        v106 = 0; /*0x1008e25d4*/
        codexmate_lib::core::account_io::failure_after_snapshot_writes::he75f109669290c4e( /*0x1008e25dc*/
          v74,
          (size_t)v63,
          (__int64)v71,
          1,
          (__int64)&unk_10167667F,
          23,
          v62);
        qmemcpy(a1, v74, 0x60u); /*0x1008e25f0*/
        v56 = 0; /*0x1008e25f3*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..account_io..SnapshotWriteRecord$GT$::h40100033941db5b7(v71); /*0x1008e25fd*/
      goto LABEL_89; /*0x1008e25fd*/
    }
    qmemcpy(a1, v78, 0x60u); /*0x1008e23c6*/
  }
  v56 = 1; /*0x1008e23c9*/
LABEL_89:
  v42 = 1; /*0x1008e2602*/
  if ( v102 != 0x8000000000000000LL && v102 ) /*0x1008e2611*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v102, 1); /*0x1008e261f*/
LABEL_92:
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(v72); /*0x1008e2624*/
  if ( v56 ) /*0x1008e2633*/
  {
    v38 = v42; /*0x1008e263d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v104); /*0x1008e2640*/
    goto LABEL_49; /*0x1008e2645*/
  }
LABEL_51:
  if ( v85 ) /*0x1008e207d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v103, v85, 1); /*0x1008e2088*/
  if ( !v42 ) /*0x1008e2090*/
  {
    v43 = v79[1]; /*0x1008e215d*/
    if ( !v79[1] ) /*0x1008e2167*/
      goto LABEL_61; /*0x1008e2167*/
    v44 = &v79[2]; /*0x1008e2169*/
    goto LABEL_60; /*0x1008e2170*/
  }
LABEL_54:
  if ( v99 ) /*0x1008e209d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v99, 1); /*0x1008e20a8*/
  if ( v79[1] ) /*0x1008e20b7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[2], v79[1], 1); /*0x1008e20c5*/
  v43 = v79[4]; /*0x1008e20ca*/
  if ( v79[4] ) /*0x1008e20d4*/
  {
    v44 = &v79[5]; /*0x1008e20d6*/
LABEL_60:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v44, v43, 1); /*0x1008e20dd*/
  }
LABEL_61:
  if ( v79[7] != 0x8000000000000000LL && v79[7] ) /*0x1008e20f9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[8], v79[7], 1); /*0x1008e2107*/
  if ( v79[10] != 0x8000000000000000LL && v79[10] ) /*0x1008e211b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[11], v79[10], 1); /*0x1008e2129*/
  v45 = v80; /*0x1008e212e*/
  if ( v80 != 0x8000000000000000LL ) /*0x1008e2138*/
  {
LABEL_68:
    if ( v45 ) /*0x1008e2141*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v45, 1); /*0x1008e2153*/
  }
LABEL_8:
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v63); /*0x1008e1bfe*/
  return a1; /*0x1008e1c0d*/
}