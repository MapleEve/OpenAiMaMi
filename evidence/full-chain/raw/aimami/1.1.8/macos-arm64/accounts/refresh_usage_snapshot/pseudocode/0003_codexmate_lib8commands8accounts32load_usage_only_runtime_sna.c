// mac 1.1.8 refresh_usage_snapshot node va=0x1004cbbe0 depth=1
// codexmate_lib8commands8accounts32load_usage_only_runtime_snapshot
char *__fastcall codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h03e1aef099469075(
        char *__dst,
        __int64 a2,
        int a3)
{
  pthread_mutex_t *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // r13
  char v11; // r15
  int v12; // ecx
  int v13; // eax
  char v14; // al
  __int64 v15; // rbx
  size_t v16; // rcx
  size_t v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r13
  const void *v21; // r12
  size_t v22; // r15
  __int64 v23; // rax
  void *v24; // rax
  pthread_mutex_t *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r12d
  char v30; // al
  char v31; // r9
  __int64 v32; // r15
  __int64 v33; // r13
  char v34; // r12
  int v35; // eax
  int v36; // eax
  __int64 (__fastcall **v37)(); // rax
  __int64 (__fastcall **v38)(); // r15
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  pthread_mutex_t *v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // rsi
  _BYTE v48[928]; // [rsp+0h] [rbp-E90h] BYREF
  _QWORD v49[85]; // [rsp+3A0h] [rbp-AF0h] BYREF
  _QWORD v50[116]; // [rsp+648h] [rbp-848h] BYREF
  _QWORD v51[116]; // [rsp+9E8h] [rbp-4A8h] BYREF
  size_t v52[5]; // [rsp+D88h] [rbp-108h] BYREF
  __int64 v53; // [rsp+DB0h] [rbp-E0h]
  __int64 v54; // [rsp+DB8h] [rbp-D8h]
  __int64 v55; // [rsp+DC0h] [rbp-D0h]
  __int64 v56; // [rsp+DC8h] [rbp-C8h]
  size_t v57; // [rsp+DD0h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+DD8h] [rbp-B8h]
  __int64 v59; // [rsp+DE0h] [rbp-B0h]
  size_t v60; // [rsp+DE8h] [rbp-A8h] BYREF
  size_t v61; // [rsp+DF0h] [rbp-A0h]
  __int64 v62; // [rsp+DF8h] [rbp-98h]
  int v63; // [rsp+E04h] [rbp-8Ch]
  __int64 v64; // [rsp+E08h] [rbp-88h]
  _DWORD v65[2]; // [rsp+E10h] [rbp-80h]
  __int64 v66; // [rsp+E18h] [rbp-78h] BYREF
  __int64 (__fastcall **v67)(); // [rsp+E20h] [rbp-70h]
  __int64 v68; // [rsp+E28h] [rbp-68h]
  size_t v69; // [rsp+E30h] [rbp-60h]
  size_t v70; // [rsp+E38h] [rbp-58h]
  size_t v71; // [rsp+E40h] [rbp-50h]
  __int64 v72; // [rsp+E48h] [rbp-48h]
  __int64 v73; // [rsp+E50h] [rbp-40h]
  __int64 v74; // [rsp+E58h] [rbp-38h]
  int v75; // [rsp+E60h] [rbp-30h]
  int v76; // [rsp+E64h] [rbp-2Ch]

  v5 = *(pthread_mutex_t **)a2; /*0x1004cbbfd*/
  if ( !*(_QWORD *)a2 ) /*0x1004cbbfd*/
    v5 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f((volatile signed __int64 *)a2); /*0x1004cbd1f*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1004cbc09*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    LOBYTE(v13) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004cbd2c*/
    v76 = v13; /*0x1004cbd2e*/
    if ( *(_BYTE *)(a2 + 8) ) /*0x1004cbd3b*/
      goto LABEL_5; /*0x1004cbd41*/
  }
  else
  {
    v76 = 0; /*0x1004cbc24*/
    if ( *(_BYTE *)(a2 + 8) )
    {
LABEL_5:
      v50[0] = 0; /*0x1004cbc41*/
      v50[1] = 1; /*0x1004cbc4c*/
      v50[2] = 0; /*0x1004cbc57*/
      v51[2] = 1610612768; /*0x1004cbc62*/
      v51[0] = v50; /*0x1004cbc74*/
      v51[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004cbc82*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v51,
                              v6,
                              v7,
                              v8) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004cc11d*/
          (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unw"
                   "rap()` on an `Err` value",
          55,
          (__int64)&v60,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
      v9 = v50[0]; /*0x1004cbcaf*/
      v10 = v50[1]; /*0x1004cbcb6*/
      v11 = v50[2]; /*0x1004cbcbd*/
      v65[0] = *(_DWORD *)((char *)&v50[2] + 1); /*0x1004cbccb*/
      *(_DWORD *)((char *)v65 + 3) = HIDWORD(v50[2]); /*0x1004cbcd4*/
      if ( !(_BYTE)v76 /*0x1004cc127*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
      {
        *(_BYTE *)(a2 + 8) = 1; /*0x1004cc134*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a2); /*0x1004cbcec*/
      *((_QWORD *)__dst + 1) = v9; /*0x1004cbcf1*/
      *((_QWORD *)__dst + 2) = v10; /*0x1004cbcf5*/
      __dst[24] = v11; /*0x1004cbcf9*/
      v12 = *(_DWORD *)((char *)v65 + 3); /*0x1004cbd00*/
      *(_DWORD *)(__dst + 25) = v65[0]; /*0x1004cbd03*/
      *((_DWORD *)__dst + 7) = v12; /*0x1004cbd07*/
      *(_QWORD *)__dst = 3; /*0x1004cbd0b*/
      return __dst; /*0x1004cbd12*/
    }
  }
  v63 = a3; /*0x1004cbd47*/
  v64 = a2 + 16; /*0x1004cbd59*/
  codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(v51, (_QWORD *)(a2 + 16)); /*0x1004cbd60*/
  v74 = a2; /*0x1004cbd65*/
  if ( v51[0] == 2 ) /*0x1004cbd7b*/
  {
    qmemcpy(v49, &v51[1], 0x60u); /*0x1004cbd93*/
    v57 = 0; /*0x1004cbd96*/
    v58 = 1; /*0x1004cbda1*/
    v59 = 0; /*0x1004cbdac*/
    v68 = 1610612768; /*0x1004cbdb7*/
    v66 = (__int64)&v57; /*0x1004cbdc6*/
    v67 = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004cbdd1*/
    v14 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004cbddc*/
            v49,
            &v66);
    v15 = v74; /*0x1004cbde3*/
    if ( v14 ) /*0x1004cbde7*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004cc15e*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)&v60,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v60 = v57; /*0x1004cbdfb*/
    v61 = v58; /*0x1004cbe02*/
    v62 = v59; /*0x1004cbe10*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v51[1]); /*0x1004cbe1a*/
    v16 = v60; /*0x1004cbe26*/
    v17 = v61; /*0x1004cbe2d*/
    v52[3] = v60; /*0x1004cbe34*/
    v52[4] = v61; /*0x1004cbe3b*/
    v53 = v62; /*0x1004cbe42*/
    *((_QWORD *)__dst + 3) = v62; /*0x1004cbe49*/
    *((_QWORD *)__dst + 2) = v17; /*0x1004cbe4d*/
    *((_QWORD *)__dst + 1) = v16; /*0x1004cbe51*/
    *(_QWORD *)__dst = 3; /*0x1004cbe55*/
    if ( !(_BYTE)v76 /*0x1004cc178*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      *(_BYTE *)(v15 + 8) = 1; /*0x1004cc185*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v15); /*0x1004cbe71*/
    return __dst; /*0x1004cbe76*/
  }
  v56 = v51[3]; /*0x1004cbe80*/
  v55 = v51[2]; /*0x1004cbe90*/
  v54 = v51[1]; /*0x1004cbe97*/
  memcpy(&v50[4], &v51[4], 0x380u); /*0x1004cbeb1*/
  v53 = v51[3]; /*0x1004cbebd*/
  v50[1] = v51[1]; /*0x1004cbed2*/
  v50[2] = v51[2]; /*0x1004cbed9*/
  v50[3] = v51[3]; /*0x1004cbee0*/
  v50[0] = v51[0]; /*0x1004cbee7*/
  v18 = v74; /*0x1004cbeee*/
  v19 = *(_QWORD *)(v74 + 416); /*0x1004cbef2*/
  if ( v19 < 0 ) /*0x1004cbefc*/
  {
    v20 = 0; /*0x1004cbefe*/
    goto LABEL_17; /*0x1004cbefe*/
  }
  v21 = *(const void **)(v74 + 408); /*0x1004cbf11*/
  if ( v19 ) /*0x1004cbf18*/
  {
    v22 = *(_QWORD *)(v74 + 416); /*0x1004cbf1a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004cbf1d*/
    v20 = 1; /*0x1004cbf22*/
    v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1u); /*0x1004cbf30*/
    v19 = v22; /*0x1004cbf35*/
    if ( !v23 ) /*0x1004cbf3b*/
LABEL_17:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v19); /*0x1004cbf01*/
  }
  else
  {
    v23 = 1; /*0x1004cbf50*/
  }
  v72 = v23; /*0x1004cbf55*/
  v73 = v19; /*0x1004cbf5f*/
  memcpy((void *)v23, v21, v19); /*0x1004cbf63*/
  memcpy(v48, v50, sizeof(v48)); /*0x1004cbf7b*/
  if ( !(_BYTE)v76 /*0x1004cc5a9*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(v18 + 8) = 1; /*0x1004cc5b6*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v18); /*0x1004cbf95*/
  v24 = memcpy(v51, v48, sizeof(v51)); /*0x1004cbfb0*/
  LOBYTE(v24) = 1; /*0x1004cbfb5*/
  v76 = (int)v24; /*0x1004cbfb7*/
  codexmate_lib::core::repository::enrich_active_account_usage_via_api::h986ffd6a154a76ae(v51, v72, v73); /*0x1004cbfcc*/
  v25 = *(pthread_mutex_t **)v18; /*0x1004cbfd1*/
  if ( !*(_QWORD *)v18 ) /*0x1004cbfd1*/
    v25 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f((volatile signed __int64 *)v18); /*0x1004cc170*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v25); /*0x1004cbfdd*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    LOBYTE(v36) = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004cc18e*/
    v29 = v36; /*0x1004cc193*/
    LOBYTE(v29) = v36 ^ 1; /*0x1004cc196*/
    if ( *(_BYTE *)(v18 + 8) ) /*0x1004cc19a*/
      goto LABEL_28; /*0x1004cc1a0*/
  }
  else
  {
    v29 = 0; /*0x1004cbfee*/
    if ( *(_BYTE *)(v18 + 8) )
    {
LABEL_28:
      v49[0] = 0; /*0x1004cbffd*/
      v49[1] = 1; /*0x1004cc008*/
      v49[2] = 0; /*0x1004cc013*/
      v50[2] = 1610612768; /*0x1004cc01e*/
      v50[0] = v49; /*0x1004cc030*/
      v50[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004cc03e*/
      v30 = _$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
              "poisoned lock: another task failed inside",
              41,
              v50,
              v26,
              v27,
              v28);
      v31 = v29; /*0x1004cc05d*/
      if ( v30 ) /*0x1004cc062*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004cc5a2*/
          (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unw"
                   "rap()` on an `Err` value",
          55,
          (__int64)&v60,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
          (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
      v32 = v49[0]; /*0x1004cc06b*/
      v33 = v49[1]; /*0x1004cc072*/
      v34 = v49[2]; /*0x1004cc079*/
      LODWORD(v66) = *(_DWORD *)((char *)&v49[2] + 1); /*0x1004cc087*/
      *(_DWORD *)((char *)&v66 + 3) = HIDWORD(v49[2]); /*0x1004cc090*/
      if ( !v31 /*0x1004cc5bf*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
      {
        *(_BYTE *)(v18 + 8) = 1; /*0x1004cc5cc*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v18); /*0x1004cc0ae*/
      v35 = v66; /*0x1004cc0b3*/
      *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)&v66 + 3); /*0x1004cc0b9*/
      *(_DWORD *)(__dst + 25) = v35; /*0x1004cc0bd*/
      *((_QWORD *)__dst + 1) = v32; /*0x1004cc0c1*/
      *((_QWORD *)__dst + 2) = v33; /*0x1004cc0c5*/
      __dst[24] = v34; /*0x1004cc0c9*/
      *(_QWORD *)__dst = 3; /*0x1004cc0cd*/
      if ( v73 ) /*0x1004cc0db*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc0e6*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::hd95344f83d5f5579(v51); /*0x1004cc0f2*/
      return __dst; /*0x1004cc0f7*/
    }
  }
  codexmate_lib::core::repository::Repository::persist_progressive_state::h3c34116f81bffa5b(v49, v64, v51); /*0x1004cc1bb*/
  if ( LODWORD(v49[0]) != 10 ) /*0x1004cc1c7*/
  {
    v75 = v29; /*0x1004cc1cd*/
    qmemcpy(v50, v49, 0x60u); /*0x1004cc1e7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004cc1ea*/
    v37 = (__int64 (__fastcall **)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x1Du, 1u); /*0x1004cc1f9*/
    if ( !v37 ) /*0x1004cc201*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x1004cc5fc*/
    v38 = v37; /*0x1004cc207*/
    qmemcpy(v37, "PROGRESSIVE_STATE_SAVE_FAILED", 29); /*0x1004cc23e*/
    v66 = (__int64)v50; /*0x1004cc241*/
    v67 = (__int64 (__fastcall **)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x1004cc24c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v52, byte_101225D25, (unsigned __int64)&v66); /*0x1004cc262*/
    v66 = 29; /*0x1004cc267*/
    v67 = v38; /*0x1004cc26f*/
    v68 = 29; /*0x1004cc273*/
    v69 = v52[0]; /*0x1004cc289*/
    v70 = v52[1]; /*0x1004cc28d*/
    v71 = v52[2]; /*0x1004cc298*/
    v39 = v51[103]; /*0x1004cc29c*/
    LOBYTE(v29) = v75; /*0x1004cc2aa*/
    if ( v51[103] == v51[101] ) /*0x1004cc2ae*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v51[101]); /*0x1004cc2b7*/
    v40 = v51[102]; /*0x1004cc2bc*/
    v41 = 48 * v39; /*0x1004cc2c7*/
    *(_QWORD *)(v51[102] + v41 + 40) = v71; /*0x1004cc2cf*/
    *(_QWORD *)(v40 + v41 + 32) = v70; /*0x1004cc2d8*/
    *(_QWORD *)(v40 + v41 + 24) = v69; /*0x1004cc2e1*/
    *(_QWORD *)(v40 + v41 + 16) = v68; /*0x1004cc2ea*/
    v42 = v66; /*0x1004cc2ef*/
    *(_QWORD *)(v40 + v41 + 8) = v67; /*0x1004cc2f7*/
    *(_QWORD *)(v40 + v41) = v42; /*0x1004cc2fc*/
    v51[103] = v39 + 1; /*0x1004cc303*/
    v18 = v74; /*0x1004cc311*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v50); /*0x1004cc315*/
  }
  codexmate_lib::core::repository::Repository::make_status_payload_with_service_state::h18db59bf6472a78a(v50); /*0x1004cc336*/
  v49[84] = v51[100]; /*0x1004cc342*/
  v49[83] = v51[99]; /*0x1004cc357*/
  v49[82] = v51[98]; /*0x1004cc35e*/
  memcpy(v49, v50, 0x290u); /*0x1004cc37b*/
  codexmate_lib::core::repository::Repository::store_bootstrap_snapshot_progressive::h8f3d36988857c4e9(v50, v64, v49); /*0x1004cc391*/
  if ( LODWORD(v50[0]) != 10 ) /*0x1004cc39d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v50); /*0x1004cc3a6*/
  v68 = v51[103]; /*0x1004cc3b2*/
  v67 = (__int64 (__fastcall **)())v51[102]; /*0x1004cc3c4*/
  v66 = v51[101]; /*0x1004cc3c8*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h15c73cdffbf317c8(v50, v49); /*0x1004cc3de*/
  memcpy(__dst, v50, 0x2F8u); /*0x1004cc3f9*/
  if ( !(_BYTE)v29 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1004cc409*/
  {
    v76 = 0; /*0x1004cc5d5*/
    if ( !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ) /*0x1004cc5dc*/
      *(_BYTE *)(v18 + 8) = 1; /*0x1004cc5e9*/
  }
  v43 = *(pthread_mutex_t **)v18; /*0x1004cc40f*/
  v76 = 0; /*0x1004cc412*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(v43); /*0x1004cc419*/
  if ( v73 ) /*0x1004cc425*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc430*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb772a699ef9b33a6(&v51[61]); /*0x1004cc43c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(v51); /*0x1004cc448*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(&v51[83]); /*0x1004cc454*/
  v44 = v51[95]; /*0x1004cc459*/
  if ( v51[95] ) /*0x1004cc463*/
  {
    v45 = v51[94] + 136LL; /*0x1004cc46c*/
    do /*0x1004cc48a*/
    {
      if ( *(_QWORD *)(v45 - 8) ) /*0x1004cc48c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc49d*/
      if ( *(_DWORD *)(v45 - 56) != 2 ) /*0x1004cc4a7*/
      {
        v46 = *(_QWORD *)(v45 - 40); /*0x1004cc4a9*/
        if ( v46 != 0x8000000000000000LL ) /*0x1004cc4b0*/
        {
          if ( v46 ) /*0x1004cc4b5*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc4c0*/
        }
      }
      v45 += 168; /*0x1004cc480*/
      --v44; /*0x1004cc487*/
    }
    while ( v44 ); /*0x1004cc48a*/
  }
  if ( v51[93] ) /*0x1004cc4d1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc4e6*/
  if ( LODWORD(v51[19]) != 2 ) /*0x1004cc4f2*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(&v51[19]); /*0x1004cc4fb*/
  if ( v51[104] != 0x8000000000000000LL && v51[104] ) /*0x1004cc512*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc520*/
  if ( v51[107] != 0x8000000000000000LL && v51[107] ) /*0x1004cc534*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc542*/
  if ( v51[111] != 0x8000000000000000LL && v51[111] ) /*0x1004cc556*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cc564*/
  return __dst; /*0x1004cc56c*/
}