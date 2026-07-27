// __ZN13codexmate_lib8commands8accounts32load_usage_only_runtime_snapshot @ 0x10069f510 | 基线 same-set
char *__fastcall codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h3cc5d392f395a876(
        char *__dst,
        __int64 *a2,
        int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r13
  char v12; // cl
  char v13; // r15
  int v14; // ecx
  char v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdx
  const void *v18; // r12
  size_t v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r12d
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // r9
  __int64 v34; // r15
  __int64 v35; // r13
  char v36; // r12
  int v37; // eax
  void *v38; // rax
  void *v39; // r15
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // r14
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  _QWORD *v51; // r15
  __int64 v52; // rsi
  _QWORD v54[134]; // [rsp+0h] [rbp-13D0h] BYREF
  _QWORD v55[102]; // [rsp+430h] [rbp-FA0h] BYREF
  _QWORD v56[134]; // [rsp+760h] [rbp-C70h] BYREF
  _QWORD v57[102]; // [rsp+B90h] [rbp-840h] BYREF
  _QWORD v58[134]; // [rsp+EC0h] [rbp-510h] BYREF
  _QWORD v59[5]; // [rsp+12F0h] [rbp-E0h] BYREF
  __int64 v60; // [rsp+1318h] [rbp-B8h]
  __int64 v61; // [rsp+1320h] [rbp-B0h]
  __int64 v62; // [rsp+1328h] [rbp-A8h]
  __int64 v63; // [rsp+1330h] [rbp-A0h]
  __int64 v64; // [rsp+1338h] [rbp-98h] BYREF
  __int64 v65; // [rsp+1340h] [rbp-90h]
  __int64 v66; // [rsp+1348h] [rbp-88h]
  __int64 v67; // [rsp+1350h] [rbp-80h]
  int v68; // [rsp+135Ch] [rbp-74h]
  __int64 v69; // [rsp+1360h] [rbp-70h] BYREF
  __int64 v70; // [rsp+1368h] [rbp-68h]
  __int64 v71; // [rsp+1370h] [rbp-60h]
  _DWORD v72[2]; // [rsp+1378h] [rbp-58h]
  __int64 v73; // [rsp+1380h] [rbp-50h]
  size_t v74; // [rsp+1388h] [rbp-48h]
  int v75; // [rsp+1394h] [rbp-3Ch]
  __int64 *v76; // [rsp+1398h] [rbp-38h]
  int v77; // [rsp+13A4h] [rbp-2Ch]

  v54[117] = 0; /*0x10069f524*/
  v5 = *a2; /*0x10069f53c*/
  if ( !*a2 ) /*0x10069f53c*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x10069f65b*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x10069f548*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x10069f66b*/
    if ( *((_BYTE *)a2 + 8) ) /*0x10069f66f*/
      goto LABEL_5; /*0x10069f676*/
  }
  else
  {
    v8 = 0; /*0x10069f563*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_5:
      v56[0] = 0; /*0x10069f573*/
      v56[1] = 1; /*0x10069f57e*/
      v56[2] = 0; /*0x10069f589*/
      v58[2] = 1610612768; /*0x10069f594*/
      v58[0] = v56; /*0x10069f5a6*/
      v58[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069f5b4*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v58) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069fa6f*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v64,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v10 = v56[0]; /*0x10069f5db*/
      v11 = v56[1]; /*0x10069f5e2*/
      v12 = v8; /*0x10069f5e9*/
      v13 = v56[2]; /*0x10069f5ec*/
      v72[0] = *(_DWORD *)((char *)&v56[2] + 1); /*0x10069f5fa*/
      *(_DWORD *)((char *)v72 + 3) = HIDWORD(v56[2]); /*0x10069f603*/
      if ( !v12
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v9,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x10069fa86*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10069f62a*/
      *((_QWORD *)__dst + 1) = v10; /*0x10069f62f*/
      *((_QWORD *)__dst + 2) = v11; /*0x10069f633*/
      __dst[24] = v13; /*0x10069f637*/
      v14 = *(_DWORD *)((char *)v72 + 3); /*0x10069f63e*/
      *(_DWORD *)(__dst + 25) = v72[0]; /*0x10069f641*/
      *((_DWORD *)__dst + 7) = v14; /*0x10069f644*/
      *(_QWORD *)__dst = 3; /*0x10069f647*/
      return __dst; /*0x10069f64e*/
    }
  }
  v68 = a3; /*0x10069f67c*/
  v15 = v8; /*0x10069f680*/
  v76 = a2; /*0x10069f683*/
  codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(v58); /*0x10069f695*/
  if ( v58[0] == 2 ) /*0x10069f6ac*/
  {
    qmemcpy(v55, &v58[1], 0x60u); /*0x10069f6c4*/
    v69 = 0; /*0x10069f6c7*/
    v70 = 1; /*0x10069f6cf*/
    v71 = 0; /*0x10069f6d7*/
    v57[2] = 1610612768; /*0x10069f6df*/
    v57[0] = &v69; /*0x10069f6ee*/
    v57[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069f6fc*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10069f70d*/
                            v55,
                            v57) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069fab1*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v64,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v64 = v69; /*0x10069f72c*/
    v65 = v70; /*0x10069f733*/
    v66 = v71; /*0x10069f73e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v58[1]); /*0x10069f748*/
    v16 = v64; /*0x10069f754*/
    v17 = v65; /*0x10069f75b*/
    v59[3] = v64; /*0x10069f762*/
    v59[4] = v65; /*0x10069f769*/
    v60 = v66; /*0x10069f770*/
    *((_QWORD *)__dst + 3) = v66; /*0x10069f777*/
    *((_QWORD *)__dst + 2) = v17; /*0x10069f77b*/
    *((_QWORD *)__dst + 1) = v16; /*0x10069f77f*/
    *(_QWORD *)__dst = 3; /*0x10069f783*/
    if ( !v8 /*0x10069ff8e*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v58[1], v57, v17, v16) )
    {
      *((_BYTE *)v76 + 8) = 1; /*0x10069ff9f*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v76); /*0x10069f7a9*/
    return __dst; /*0x10069f7ae*/
  }
  v67 = (__int64)(a2 + 2); /*0x10069f7b3*/
  v63 = v58[3]; /*0x10069f7bc*/
  v62 = v58[2]; /*0x10069f7cc*/
  v61 = v58[1]; /*0x10069f7d3*/
  memcpy(&v56[4], &v58[4], 0x410u); /*0x10069f7ed*/
  v60 = v58[3]; /*0x10069f7f9*/
  v56[1] = v58[1]; /*0x10069f80e*/
  v56[2] = v58[2]; /*0x10069f815*/
  v56[3] = v58[3]; /*0x10069f81c*/
  v56[0] = v58[0]; /*0x10069f823*/
  v18 = (const void *)v76[51]; /*0x10069f82e*/
  v19 = v76[52]; /*0x10069f835*/
  if ( v19 ) /*0x10069f83f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56[4], &v58[4]); /*0x10069f841*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1); /*0x10069f84e*/
    if ( !v20 ) /*0x10069f860*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x10069f86a*/
  }
  else
  {
    v20 = 1; /*0x10069f874*/
  }
  v73 = v20; /*0x10069f883*/
  v74 = v19; /*0x10069f88d*/
  memcpy((void *)v20, v18, v19); /*0x10069f894*/
  memcpy(v54, v56, sizeof(v54)); /*0x10069f8ac*/
  if ( !v15 /*0x10069ff74*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v54, v56, v21, v22) )
  {
    *((_BYTE *)v76 + 8) = 1; /*0x10069ff85*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v76); /*0x10069f8d0*/
  v23 = memcpy(v58, v54, sizeof(v58)); /*0x10069f8eb*/
  LOBYTE(v23) = 1; /*0x10069f8f0*/
  v77 = (int)v23; /*0x10069f8f2*/
  v24 = v73; /*0x10069f8f8*/
  codexmate_lib::core::repository::enrich_active_account_usage_via_api::h09dcf9844bb45405(v58, v73, v74); /*0x10069f900*/
  v25 = v67; /*0x10069f905*/
  v26 = *v76; /*0x10069f90d*/
  if ( !*v76 ) /*0x10069f90d*/
    v26 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v76); /*0x10069fac4*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v26); /*0x10069f919*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v29 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v26, v24, v27, v28); /*0x10069fad1*/
    LOBYTE(v29) = v29 ^ 1; /*0x10069fad4*/
    if ( *((_BYTE *)v76 + 8) ) /*0x10069fadc*/
      goto LABEL_25; /*0x10069fae2*/
  }
  else
  {
    v29 = 0; /*0x10069f931*/
    if ( *((_BYTE *)v76 + 8) )
    {
LABEL_25:
      v55[0] = 0; /*0x10069f944*/
      v55[1] = 1; /*0x10069f94f*/
      v55[2] = 0; /*0x10069f95a*/
      v56[2] = 1610612768; /*0x10069f965*/
      v56[0] = v55; /*0x10069f977*/
      v56[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069f985*/
      v30 = _$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
              "poisoned lock: another task failed inside",
              41,
              v56);
      v33 = v29; /*0x10069f9a4*/
      if ( v30 ) /*0x10069f9a9*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069ff6d*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v64,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v34 = v55[0]; /*0x10069f9af*/
      v35 = v55[1]; /*0x10069f9b6*/
      v36 = v55[2]; /*0x10069f9bd*/
      LODWORD(v57[0]) = *(_DWORD *)((char *)&v55[2] + 1); /*0x10069f9cb*/
      *(_DWORD *)((char *)v57 + 3) = HIDWORD(v55[2]); /*0x10069f9d7*/
      if ( !v33
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v31,
                               v32) )
      {
        *((_BYTE *)v76 + 8) = 1; /*0x10069ffb9*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v76); /*0x10069f9fc*/
      v37 = v57[0]; /*0x10069fa01*/
      *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v57 + 3); /*0x10069fa0d*/
      *(_DWORD *)(__dst + 25) = v37; /*0x10069fa10*/
      *((_QWORD *)__dst + 1) = v34; /*0x10069fa13*/
      *((_QWORD *)__dst + 2) = v35; /*0x10069fa17*/
      __dst[24] = v36; /*0x10069fa1b*/
      *(_QWORD *)__dst = 3; /*0x10069fa1f*/
      if ( v74 ) /*0x10069fa2d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v74, 1); /*0x10069fa38*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(v58); /*0x10069fa44*/
      return __dst; /*0x10069fa49*/
    }
  }
  codexmate_lib::core::repository::Repository::persist_progressive_state::hba8e5e8e2d346f6d(v55, v25, v58); /*0x10069faf9*/
  if ( LODWORD(v55[0]) != 11 ) /*0x10069fb05*/
  {
    v75 = v29; /*0x10069fb0b*/
    qmemcpy(v56, v55, 0x60u); /*0x10069fb25*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56[12], &v55[12]); /*0x10069fb28*/
    v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x10069fb37*/
    if ( !v38 ) /*0x10069fb3f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x10069ffed*/
    v39 = v38; /*0x10069fb45*/
    qmemcpy(v38, "PROGRESSIVE_STATE_SAVE_FAILED", 29); /*0x10069fb7c*/
    v57[0] = v56; /*0x10069fb7f*/
    v57[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x10069fb8d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, &unk_1017C347E, v57); /*0x10069fba9*/
    v57[0] = 29; /*0x10069fbae*/
    v57[1] = v39; /*0x10069fbb9*/
    v57[2] = 29; /*0x10069fbc0*/
    v57[3] = v59[0]; /*0x10069fbd9*/
    v57[4] = v59[1]; /*0x10069fbe0*/
    v57[5] = v59[2]; /*0x10069fbee*/
    v40 = v58[106]; /*0x10069fbf5*/
    LOBYTE(v29) = v75; /*0x10069fc03*/
    if ( v58[106] == v58[104] ) /*0x10069fc07*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v58[104]); /*0x10069fc10*/
    v41 = v58[105]; /*0x10069fc15*/
    v42 = 48 * v40; /*0x10069fc20*/
    *(_QWORD *)(v58[105] + v42 + 40) = v57[5]; /*0x10069fc2b*/
    *(_QWORD *)(v41 + v42 + 32) = v57[4]; /*0x10069fc37*/
    *(_QWORD *)(v41 + v42 + 24) = v57[3]; /*0x10069fc43*/
    *(_QWORD *)(v41 + v42 + 16) = v57[2]; /*0x10069fc4f*/
    v43 = v57[0]; /*0x10069fc54*/
    *(_QWORD *)(v41 + v42 + 8) = v57[1]; /*0x10069fc62*/
    *(_QWORD *)(v41 + v42) = v43; /*0x10069fc67*/
    v58[106] = v40 + 1; /*0x10069fc6e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v56); /*0x10069fc86*/
    v25 = v67; /*0x10069fc8b*/
  }
  codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h05def326631eb6ea(v56); /*0x10069fca4*/
  v57[86] = v58[103]; /*0x10069fcb0*/
  v57[85] = v58[102]; /*0x10069fcc5*/
  v57[84] = v58[101]; /*0x10069fccc*/
  qmemcpy(&v57[87], &v58[117], 0x78u); /*0x10069fce6*/
  memcpy(v57, v56, 0x2A0u); /*0x10069fcff*/
  codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort::h70c2e4619a79948f( /*0x10069fd16*/
    v25,
    (__int64)v57,
    (__int64)"usage_refreshusage",
    13);
  memcpy(v55, v57, sizeof(v55)); /*0x10069fd31*/
  v71 = v58[106]; /*0x10069fd3d*/
  v70 = v58[105]; /*0x10069fd4f*/
  v69 = v58[104]; /*0x10069fd53*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::hd50f06649d211a03(v56, v55, &v69); /*0x10069fd65*/
  memcpy(__dst, v56, 0x380u); /*0x10069fd79*/
  if ( !(_BYTE)v29 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10069fd90*/
  {
    v77 = 0; /*0x10069ffc2*/
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, v56, v44, v45) ) /*0x10069ffc9*/
      *((_BYTE *)v76 + 8) = 1; /*0x10069ffda*/
  }
  v46 = *v76; /*0x10069fd9a*/
  v77 = 0; /*0x10069fd9d*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v46); /*0x10069fda4*/
  if ( v74 ) /*0x10069fdb0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, v74, 1); /*0x10069fdbb*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hfc789ea0cf95a5fc(&v58[63]); /*0x10069fdc7*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(v58); /*0x10069fdd3*/
  if ( v58[88] != 0x8000000000000000LL && v58[88] ) /*0x10069fded*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58[89], v58[88], 1); /*0x10069fdfb*/
  v47 = v58[86]; /*0x10069fe00*/
  v48 = v58[87]; /*0x10069fe07*/
  if ( v58[87] ) /*0x10069fe11*/
  {
    v49 = v58[86]; /*0x10069fe13*/
    do /*0x10069fe32*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v49); /*0x10069fe23*/
      v49 += 424; /*0x10069fe28*/
      --v48; /*0x10069fe2f*/
    }
    while ( v48 ); /*0x10069fe32*/
  }
  if ( v58[85] ) /*0x10069fe3e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 424LL * v58[85], 8); /*0x10069fe4f*/
  v50 = v58[98]; /*0x10069fe54*/
  if ( v58[98] ) /*0x10069fe5e*/
  {
    v51 = (_QWORD *)(v58[97] + 128LL); /*0x10069fe67*/
    do /*0x10069fe7a*/
    {
      v52 = *(v51 - 1); /*0x10069fe7c*/
      if ( v52 ) /*0x10069fe83*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v51, v52, 1); /*0x10069fe8d*/
      v51 += 20; /*0x10069fe70*/
      --v50; /*0x10069fe77*/
    }
    while ( v50 ); /*0x10069fe7a*/
  }
  if ( v58[96] ) /*0x10069fe9e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58[97], 160LL * v58[96], 8); /*0x10069feb4*/
  if ( LODWORD(v58[19]) != 2 ) /*0x10069fec0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(&v58[19]); /*0x10069fec9*/
  if ( v58[107] != 0x8000000000000000LL && v58[107] ) /*0x10069fedd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58[108], v58[107], 1); /*0x10069feeb*/
  if ( v58[110] != 0x8000000000000000LL && v58[110] ) /*0x10069feff*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58[111], v58[110], 1); /*0x10069ff0d*/
  if ( v58[114] != 0x8000000000000000LL && v58[114] ) /*0x10069ff21*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58[115], v58[114], 1); /*0x10069ff2f*/
  return __dst; /*0x10069ff37*/
}