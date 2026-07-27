// __ZN13codexmate_lib4core10repository10Repository6logout @ 0x100a75660 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::logout::h936f363dfc414d2b(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  __int64 *v10; // rdi
  __int64 i; // rcx
  __int64 v12; // r13
  __int64 v13; // r14
  unsigned int v14; // ebx
  _DWORD *v15; // rsi
  __int64 *v16; // rdi
  __int64 k; // rcx
  __int64 v18; // r15
  __int64 v19; // r14
  unsigned int v20; // ebx
  _DWORD *v21; // rsi
  __int64 *v22; // rdi
  __int64 n; // rcx
  __int64 v24; // rsi
  _QWORD *v25; // r14
  char v26; // al
  void *v27; // rax
  void *v28; // r14
  _QWORD *v29; // rax
  _DWORD *v30; // rdi
  __int64 *v31; // rsi
  __int64 j; // rcx
  _QWORD *v33; // rax
  _DWORD *v34; // rdi
  __int64 *v35; // rsi
  __int64 m; // rcx
  _QWORD *v37; // rax
  _DWORD *v38; // rdi
  __int64 *v39; // rsi
  __int64 ii; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // r12
  size_t v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 *v48; // rdi
  bool v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rax
  double v52; // xmm0_8
  void *v53; // rax
  void *v54; // r14
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 *v59; // r15
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // rcx
  size_t v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  _QWORD v72[11]; // [rsp+0h] [rbp-320h] BYREF
  _QWORD v73[4]; // [rsp+58h] [rbp-2C8h] BYREF
  _QWORD v74[3]; // [rsp+78h] [rbp-2A8h] BYREF
  _QWORD v75[3]; // [rsp+90h] [rbp-290h] BYREF
  _QWORD v76[6]; // [rsp+A8h] [rbp-278h] BYREF
  _QWORD *v77; // [rsp+D8h] [rbp-248h]
  _QWORD v78[12]; // [rsp+E0h] [rbp-240h] BYREF
  __int64 v79[12]; // [rsp+140h] [rbp-1E0h] BYREF
  __int64 v80; // [rsp+1A0h] [rbp-180h] BYREF
  _QWORD v81[12]; // [rsp+1D8h] [rbp-148h] BYREF
  __int64 v82; // [rsp+238h] [rbp-E8h] BYREF
  _QWORD v83[12]; // [rsp+270h] [rbp-B0h] BYREF
  __int64 *v84; // [rsp+2D0h] [rbp-50h]
  _QWORD *v85; // [rsp+2D8h] [rbp-48h]
  __int64 v86; // [rsp+2E0h] [rbp-40h]
  unsigned int v87; // [rsp+2E8h] [rbp-38h] BYREF
  unsigned int v88; // [rsp+2ECh] [rbp-34h] BYREF
  unsigned int v89; // [rsp+2F0h] [rbp-30h] BYREF
  char v90; // [rsp+2F7h] [rbp-29h]

  v2 = a1; /*0x100a75677*/
  v3 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100a7567d*/
  if ( v3 ) /*0x100a75685*/
  {
    *a1 = 2; /*0x100a75687*/
    a1[1] = v3; /*0x100a7568e*/
    return v2; /*0x100a75692*/
  }
  v85 = a1; /*0x100a75697*/
  v4 = a2[25]; /*0x100a7569b*/
  v77 = a2; /*0x100a756a2*/
  v5 = a2[26]; /*0x100a756a9*/
  std::path::Path::_join::hb1a495d4f06b13b8(v83, v4, v5, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_57, 24); /*0x100a756ca*/
  v6 = v83[1]; /*0x100a756cf*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)v81,
    v83[1],
    v83[2],
    (__int64)"account transitionatomic write: missing parentaimami",
    18);
  v7 = v81[0]; /*0x100a756f9*/
  v8 = v81[1]; /*0x100a75700*/
  if ( v81[0] != 11 ) /*0x100a7570a*/
  {
    v9 = (_DWORD *)&v81[1] + 1; /*0x100a7570c*/
    v10 = v79; /*0x100a75713*/
    for ( i = 21; i; --i ) /*0x100a7571a*/
    {
      *(_DWORD *)v10 = *v9++; /*0x100a7571f*/
      v10 = (__int64 *)((char *)v10 + 4); /*0x100a7571f*/
    }
  }
  if ( v83[0] ) /*0x100a7572b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v83[0], 1); /*0x100a75735*/
  if ( (_DWORD)v7 != 11 ) /*0x100a7573e*/
  {
    v29 = v85; /*0x100a758e4*/
    v30 = (_DWORD *)v85 + 3; /*0x100a758e8*/
    v31 = v79; /*0x100a758ec*/
    for ( j = 21; j; --j ) /*0x100a758f3*/
    {
      *v30 = *(_DWORD *)v31; /*0x100a758f8*/
      v31 = (__int64 *)((char *)v31 + 4); /*0x100a758f8*/
      ++v30; /*0x100a758f8*/
    }
    *v29 = v7; /*0x100a758fa*/
    *((_DWORD *)v29 + 2) = v8; /*0x100a758fd*/
    return v29; /*0x100a75903*/
  }
  v89 = v8; /*0x100a75744*/
  std::path::Path::_join::hb1a495d4f06b13b8(v83, v4, v5, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15); /*0x100a75761*/
  v12 = v83[1]; /*0x100a75766*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a7578b*/
    (__int64)v81,
    v83[1],
    v83[2],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
    9);
  v13 = v81[0]; /*0x100a75790*/
  v14 = v81[1]; /*0x100a75797*/
  if ( v81[0] != 11 ) /*0x100a757a1*/
  {
    v15 = (_DWORD *)&v81[1] + 1; /*0x100a757a3*/
    v16 = v79; /*0x100a757aa*/
    for ( k = 21; k; --k ) /*0x100a757b1*/
    {
      *(_DWORD *)v16 = *v15++; /*0x100a757b6*/
      v16 = (__int64 *)((char *)v16 + 4); /*0x100a757b6*/
    }
  }
  if ( v83[0] ) /*0x100a757c2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v83[0], 1); /*0x100a757cc*/
  if ( (_DWORD)v13 != 11 ) /*0x100a757d5*/
  {
    v33 = v85; /*0x100a75908*/
    v34 = (_DWORD *)v85 + 3; /*0x100a7590c*/
    v35 = v79; /*0x100a75910*/
    for ( m = 21; m; --m ) /*0x100a75917*/
    {
      *v34 = *(_DWORD *)v35; /*0x100a7591c*/
      v35 = (__int64 *)((char *)v35 + 4); /*0x100a7591c*/
      ++v34; /*0x100a7591c*/
    }
    *v33 = v13; /*0x100a7591e*/
    *((_DWORD *)v33 + 2) = v14; /*0x100a75921*/
    v2 = v33; /*0x100a75924*/
    goto LABEL_69; /*0x100a75927*/
  }
  v88 = v14; /*0x100a757db*/
  std::path::Path::_join::hb1a495d4f06b13b8(v83, v4, v5, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20); /*0x100a757f8*/
  v18 = v83[1]; /*0x100a757fd*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a75822*/
    (__int64)v81,
    v83[1],
    v83[2],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v19 = v81[0]; /*0x100a75827*/
  v20 = v81[1]; /*0x100a7582e*/
  if ( v81[0] != 11 ) /*0x100a75838*/
  {
    v21 = (_DWORD *)&v81[1] + 1; /*0x100a7583a*/
    v22 = v79; /*0x100a75841*/
    for ( n = 21; n; --n ) /*0x100a75848*/
    {
      *(_DWORD *)v22 = *v21++; /*0x100a7584d*/
      v22 = (__int64 *)((char *)v22 + 4); /*0x100a7584d*/
    }
  }
  v24 = v83[0]; /*0x100a7584f*/
  if ( v83[0] ) /*0x100a75859*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v83[0], 1); /*0x100a75863*/
  if ( (_DWORD)v19 != 11 ) /*0x100a7586c*/
  {
    v37 = v85; /*0x100a7592c*/
    v38 = (_DWORD *)v85 + 3; /*0x100a75930*/
    v39 = v79; /*0x100a75934*/
    for ( ii = 21; ii; --ii ) /*0x100a7593b*/
    {
      *v38 = *(_DWORD *)v39; /*0x100a75940*/
      v39 = (__int64 *)((char *)v39 + 4); /*0x100a75940*/
      ++v38; /*0x100a75940*/
    }
    *v37 = v19; /*0x100a75942*/
    *((_DWORD *)v37 + 2) = v20; /*0x100a75945*/
    v2 = v37; /*0x100a75948*/
    goto LABEL_68; /*0x100a7594b*/
  }
  v87 = v20; /*0x100a75872*/
  v25 = v77; /*0x100a75875*/
  v26 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8((__int64)v77); /*0x100a7587f*/
  v2 = v85; /*0x100a75884*/
  if ( v26 == 1 ) /*0x100a7588a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v77, v24); /*0x100a75890*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(120, 1); /*0x100a7589f*/
    if ( !v27 ) /*0x100a758a7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 120); /*0x100a76129*/
    v28 = v27; /*0x100a758ad*/
    memcpy(v27, &unk_10167C4E8, 0x78u); /*0x100a758bf*/
    *v2 = 10; /*0x100a758c4*/
    v2[1] = 120; /*0x100a758cb*/
    v2[2] = v28; /*0x100a758d3*/
    v2[3] = 120; /*0x100a758d7*/
    goto LABEL_67; /*0x100a758df*/
  }
  codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b( /*0x100a75965*/
    (__int64)v81,
    v77[28],
    v77[29]);
  v41 = v81[0]; /*0x100a7596a*/
  qmemcpy(v79, &v81[1], 0x58u); /*0x100a75984*/
  if ( v81[0] != 11 ) /*0x100a7598b*/
  {
    qmemcpy(v2 + 1, v79, 0x58u); /*0x100a75d6a*/
    *v2 = v41; /*0x100a75d6d*/
LABEL_67:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v87); /*0x100a7608b*/
    close_NOCANCEL(v87); /*0x100a76097*/
LABEL_68:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v88); /*0x100a7609c*/
    close_NOCANCEL(v88); /*0x100a760a8*/
LABEL_69:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v89); /*0x100a760ad*/
    close_NOCANCEL(v89); /*0x100a760b9*/
    return v2; /*0x100a760b9*/
  }
  qmemcpy(v72, v79, sizeof(v72)); /*0x100a759a4*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4ccd5ea377d1fd44(v83, v77 + 3); /*0x100a759b5*/
  v78[2] = v83[2]; /*0x100a759c1*/
  v78[1] = v83[1]; /*0x100a759d6*/
  v78[0] = v83[0]; /*0x100a759dd*/
  codexmate_lib::core::repository::ExactFileState::capture::haab4ba4b40674644(v81, v78); /*0x100a759f2*/
  v42 = v81[0]; /*0x100a759f7*/
  v79[0] = v81[1]; /*0x100a75a05*/
  v79[1] = v81[2]; /*0x100a75a13*/
  v79[2] = v81[3]; /*0x100a75a21*/
  v79[3] = v81[4]; /*0x100a75a2f*/
  v79[4] = v81[5]; /*0x100a75a3d*/
  v79[5] = v81[6]; /*0x100a75a4b*/
  if ( v81[0] != 11 ) /*0x100a75a56*/
  {
    v2[11] = v81[11]; /*0x100a75d7c*/
    v2[10] = v81[10]; /*0x100a75d87*/
    v2[9] = v81[9]; /*0x100a75d92*/
    v55 = v81[7]; /*0x100a75d96*/
    v2[8] = v81[8]; /*0x100a75da4*/
    v2[7] = v55; /*0x100a75da8*/
    v2[6] = v79[5]; /*0x100a75db3*/
    v2[5] = v79[4]; /*0x100a75dbe*/
    v2[4] = v79[3]; /*0x100a75dc9*/
    v2[3] = v79[2]; /*0x100a75dd4*/
    v56 = v79[0]; /*0x100a75dd8*/
    v2[2] = v79[1]; /*0x100a75de6*/
    v2[1] = v56; /*0x100a75dea*/
    *v2 = v42; /*0x100a75dee*/
LABEL_66:
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v72); /*0x100a7607f*/
    goto LABEL_67; /*0x100a76086*/
  }
  v76[0] = v79[0]; /*0x100a75a6a*/
  v76[1] = v79[1]; /*0x100a75a71*/
  v76[2] = v79[2]; /*0x100a75a7f*/
  v76[3] = v79[3]; /*0x100a75a8d*/
  v76[4] = v79[4]; /*0x100a75a9b*/
  v76[5] = v79[5]; /*0x100a75aa9*/
  v43 = (__int64 *)v25[4]; /*0x100a75ab0*/
  v44 = v25[5]; /*0x100a75ab4*/
  std::sys::fs::metadata::h32fa16d3052ea535(v81, v43, v44); /*0x100a75ac5*/
  v90 = v81[0]; /*0x100a75ad1*/
  if ( LOBYTE(v81[0]) ) /*0x100a75ad6*/
  {
    v48 = &v79[1]; /*0x100a75adc*/
    v79[1] = v81[1]; /*0x100a75aea*/
    v79[0] = 1; /*0x100a75af1*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v79[1], v43, v45, v46, v47); /*0x100a75afc*/
    v49 = 0; /*0x100a75b01*/
    goto LABEL_43; /*0x100a75b01*/
  }
  v83[0] = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v81, (__int64)v43); /*0x100a75dfb*/
  v79[0] = (__int64)v83; /*0x100a75e02*/
  v79[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100a75e10*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v81, &unk_1017C8CD1, v79); /*0x100a75e2c*/
  v86 = v81[0]; /*0x100a75e38*/
  v57 = v25[34]; /*0x100a75e4a*/
  v58 = v25[35]; /*0x100a75e51*/
  v84 = (__int64 *)v81[1]; /*0x100a75e5f*/
  std::path::Path::_join::hb1a495d4f06b13b8(v81, v57, v58, v81[1], v81[2]); /*0x100a75e63*/
  v59 = (__int64 *)v81[1]; /*0x100a75e68*/
  v60 = codexmate_lib::core::relay::atomic_write::copy_atomic_private::hbdb45d0e44575629( /*0x100a75e7f*/
          (__int64)v43,
          v44,
          (void *)v81[1],
          v81[2]);
  if ( v60 ) /*0x100a75e87*/
  {
    *v2 = 2; /*0x100a75e8d*/
    v2[1] = v60; /*0x100a75e94*/
    v61 = v81[0]; /*0x100a75e98*/
    if ( !v81[0] ) /*0x100a75ea2*/
      goto LABEL_56; /*0x100a75ea2*/
    goto LABEL_55; /*0x100a75ea2*/
  }
  v48 = v43; /*0x100a75f92*/
  v64 = v44; /*0x100a75f95*/
  v65 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v43, v44); /*0x100a75f98*/
  v66 = v65; /*0x100a75f9d*/
  v49 = v65 == 0; /*0x100a75fa3*/
  if ( v65 ) /*0x100a75fa7*/
  {
    if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v65) ) /*0x100a75fb0*/
    {
      *v2 = 2; /*0x100a75fbd*/
      v2[1] = v66; /*0x100a75fc4*/
      v61 = v81[0]; /*0x100a75fc8*/
      if ( !v81[0] ) /*0x100a75fd2*/
      {
LABEL_56:
        if ( v86 ) /*0x100a75eb8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v86, 1); /*0x100a75ec7*/
        goto LABEL_65; /*0x100a75ecc*/
      }
LABEL_55:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v61, 1); /*0x100a75ea4*/
      goto LABEL_56; /*0x100a75eac*/
    }
    v79[0] = v66; /*0x100a760d3*/
    v48 = v79; /*0x100a760da*/
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v79, v64, v67, v68, v69); /*0x100a760e1*/
  }
  if ( v81[0] ) /*0x100a760f0*/
  {
    v48 = v59; /*0x100a760f7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v81[0], 1); /*0x100a760fa*/
  }
  if ( v86 ) /*0x100a76106*/
  {
    v48 = v84; /*0x100a76111*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v86, 1); /*0x100a76115*/
  }
LABEL_43:
  v50 = v72[3]; /*0x100a75b04*/
  if ( !__OFSUB__(-v72[3], 1) && v72[3] ) /*0x100a75b1d*/
  {
    v48 = (__int64 *)v72[4]; /*0x100a75b1f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72[4], v72[3], 1); /*0x100a75b2b*/
  }
  v72[3] = 0x8000000000000000LL; /*0x100a75b30*/
  v51 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v48, v50); /*0x100a75b37*/
  v2 = v85; /*0x100a75b3c*/
  v72[9] = v51; /*0x100a75b40*/
  v52 = codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f( /*0x100a75b5d*/
          v78,
          (__int64)v25,
          (__int64)v72,
          1);
  if ( LODWORD(v78[0]) != 11 ) /*0x100a75b69*/
  {
    qmemcpy(v83, v78, sizeof(v83)); /*0x100a75ee7*/
    codexmate_lib::core::repository::ExactFileState::restore::ha530469f23048e2f(v79, (__int64)v76); /*0x100a75ef8*/
    if ( LODWORD(v79[0]) == 11 ) /*0x100a75f04*/
    {
      *v2 = v83[0]; /*0x100a75f11*/
      v62 = v78[2]; /*0x100a75f1b*/
      v2[1] = v78[1]; /*0x100a75f22*/
      v2[2] = v62; /*0x100a75f26*/
      v2[3] = v78[3]; /*0x100a75f31*/
      v63 = v78[5]; /*0x100a75f3c*/
      v2[4] = v78[4]; /*0x100a75f43*/
      v2[5] = v63; /*0x100a75f47*/
      v2[6] = v78[6]; /*0x100a75f52*/
      v2[7] = v78[7]; /*0x100a75f5d*/
      v2[8] = v78[8]; /*0x100a75f68*/
      v2[9] = v78[9]; /*0x100a75f73*/
      v2[10] = v78[10]; /*0x100a75f7e*/
      v2[11] = v78[11]; /*0x100a75f89*/
    }
    else
    {
      qmemcpy(v81, v79, sizeof(v81)); /*0x100a75ff3*/
      v73[0] = v83; /*0x100a75ff6*/
      v73[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a76004*/
      v73[2] = v81; /*0x100a7600b*/
      v73[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a76012*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v75, &unk_1017C9A56, v73); /*0x100a7602e*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v81); /*0x100a7603a*/
      *v2 = 10; /*0x100a7603f*/
      v70 = v75[1]; /*0x100a7604d*/
      v2[1] = v75[0]; /*0x100a76054*/
      v2[2] = v70; /*0x100a76058*/
      v2[3] = v75[2]; /*0x100a76063*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v83); /*0x100a7606e*/
    }
LABEL_65:
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ExactFileState$GT$::h739e9242b33bba52(v76); /*0x100a76073*/
    goto LABEL_66; /*0x100a7607a*/
  }
  v78[0] = 0; /*0x100a75b6f*/
  v78[1] = 8; /*0x100a75b7a*/
  v78[2] = 0; /*0x100a75b85*/
  codexmate_lib::core::repository::Repository::clear_auto_switch_transient_state::h6b182342bc1d4f08(v79, (__int64)v25); /*0x100a75b9a*/
  if ( LODWORD(v79[0]) != 11 ) /*0x100a75ba6*/
  {
    qmemcpy(v81, v79, sizeof(v81)); /*0x100a75bc2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v82, &v80); /*0x100a75bc5*/
    v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100a75bd4*/
    if ( !v53 ) /*0x100a75bdc*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x100a7613a*/
    v54 = v53; /*0x100a75be2*/
    qmemcpy(v53, "AUTO_SWITCH_TRANSIENT_CLEANUP_FAILED", 36); /*0x100a75c19*/
    v83[0] = v81; /*0x100a75c24*/
    v83[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a75c32*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v74, &unk_1017C9A99, v83); /*0x100a75c4e*/
    v83[0] = 36; /*0x100a75c53*/
    v83[1] = v54; /*0x100a75c5e*/
    v83[2] = 36; /*0x100a75c65*/
    v83[3] = v74[0]; /*0x100a75c7e*/
    v83[4] = v74[1]; /*0x100a75c85*/
    v83[5] = v74[2]; /*0x100a75c93*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hbc0858bc68482e3a(v78, v83); /*0x100a75ca8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v81); /*0x100a75cb4*/
  }
  v79[2] = v78[2]; /*0x100a75cc7*/
  v79[1] = v78[1]; /*0x100a75cdc*/
  v79[0] = v78[0]; /*0x100a75ce3*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h2768bb1fcdae0f72( /*0x100a75cff*/
    (__int64)v81,
    v49,
    v90 ^ 1,
    v79);
  qmemcpy(v2 + 1, v81, 0x50u); /*0x100a75d14*/
  *v2 = 11; /*0x100a75d17*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ExactFileState$GT$::h739e9242b33bba52(v76); /*0x100a75d25*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v72); /*0x100a75d31*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v87, v52); /*0x100a75d3a*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v88, v52); /*0x100a75d43*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v89, v52); /*0x100a75d4c*/
  return v85; /*0x100a760c1*/
}