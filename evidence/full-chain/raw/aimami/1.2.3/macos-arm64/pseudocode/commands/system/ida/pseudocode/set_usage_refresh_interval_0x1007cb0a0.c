// __ZN13codexmate_lib8commands6system26set_usage_refresh_interval @ 0x1007cb0a0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::set_usage_refresh_interval::h290a7d3781e0ba94(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r14
  char v13; // r12
  int v14; // eax
  _QWORD *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdx
  char v23; // r13
  char v24; // al
  __int64 v25; // rdx
  char v26; // r9
  __int64 v27; // r12
  __int64 v28; // r14
  char v29; // r13
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  _QWORD v41[12]; // [rsp+8h] [rbp-158h] BYREF
  __int64 v42; // [rsp+68h] [rbp-F8h]
  __int64 v43; // [rsp+70h] [rbp-F0h]
  _QWORD v44[12]; // [rsp+78h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-88h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-80h]
  __int64 v47; // [rsp+E8h] [rbp-78h]
  __int64 v48; // [rsp+F0h] [rbp-70h]
  _QWORD v49[3]; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v50; // [rsp+110h] [rbp-50h]
  __int64 v51; // [rsp+118h] [rbp-48h]
  __int64 *v52; // [rsp+120h] [rbp-40h]
  __int64 v53; // [rsp+128h] [rbp-38h]
  _BYTE v54[41]; // [rsp+137h] [rbp-29h] BYREF

  v52 = a4; /*0x1007cb0b4*/
  v50 = a2; /*0x1007cb0bb*/
  v6 = *a3; /*0x1007cb0c2*/
  if ( !*a3 ) /*0x1007cb0c2*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a3); /*0x1007cb1e0*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1007cb0ce*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x1007cb1ed*/
    LOBYTE(v9) = v9 ^ 1; /*0x1007cb1f0*/
    if ( *((_BYTE *)a3 + 8) ) /*0x1007cb1f4*/
      goto LABEL_5; /*0x1007cb1fb*/
  }
  else
  {
    v9 = 0; /*0x1007cb0e9*/
    if ( *((_BYTE *)a3 + 8) )
    {
LABEL_5:
      v44[0] = 0; /*0x1007cb0f9*/
      v44[1] = 1; /*0x1007cb104*/
      v44[2] = 0; /*0x1007cb10f*/
      v41[2] = 1610612768; /*0x1007cb11a*/
      v41[0] = v44; /*0x1007cb12c*/
      v41[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cb13a*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v41) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cb4f2*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v54,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v10 = v44[0]; /*0x1007cb164*/
      v11 = v9; /*0x1007cb16b*/
      v12 = v44[1]; /*0x1007cb16e*/
      v13 = v44[2]; /*0x1007cb175*/
      LODWORD(v49[0]) = *(_DWORD *)((char *)&v44[2] + 1); /*0x1007cb183*/
      *(_DWORD *)((char *)v49 + 3) = HIDWORD(v44[2]); /*0x1007cb18c*/
      if ( !(_BYTE)v11
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v11,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)a3 + 8) = 1; /*0x1007cb509*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a3); /*0x1007cb1ad*/
      v14 = v49[0]; /*0x1007cb1b2*/
      *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)v49 + 3); /*0x1007cb1b8*/
      *(_DWORD *)(a1 + 25) = v14; /*0x1007cb1bc*/
      *(_QWORD *)(a1 + 8) = v10; /*0x1007cb1c0*/
      *(_QWORD *)(a1 + 16) = v12; /*0x1007cb1c4*/
      *(_BYTE *)(a1 + 24) = v13; /*0x1007cb1c8*/
      *(_QWORD *)a1 = 1; /*0x1007cb1cc*/
      goto LABEL_27; /*0x1007cb1d3*/
    }
  }
  LODWORD(v53) = v9; /*0x1007cb201*/
  v15 = a3 + 2; /*0x1007cb205*/
  v16 = v52[1]; /*0x1007cb20d*/
  codexmate_lib::core::repository::Repository::set_usage_refresh_interval::h84231c08acfc3b8e(v44, a3 + 2, v16, v52[2]); /*0x1007cb21f*/
  if ( LODWORD(v44[0]) != 11 ) /*0x1007cb22b*/
  {
    qmemcpy(v41, v44, sizeof(v41)); /*0x1007cb3f2*/
    v45 = 0; /*0x1007cb3f5*/
    v46 = 1; /*0x1007cb400*/
    v47 = 0; /*0x1007cb408*/
    v49[2] = 1610612768; /*0x1007cb410*/
    v49[0] = &v45; /*0x1007cb41f*/
    v49[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cb42a*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007cb435*/
                            v41,
                            v49) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cb531*/
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        v54,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    v31 = v45; /*0x1007cb442*/
    v32 = v46; /*0x1007cb449*/
    v33 = v47; /*0x1007cb44d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v44); /*0x1007cb458*/
    *(_QWORD *)(a1 + 8) = v31; /*0x1007cb45d*/
    *(_QWORD *)(a1 + 16) = v32; /*0x1007cb461*/
    *(_QWORD *)(a1 + 24) = v33; /*0x1007cb465*/
    *(_QWORD *)a1 = 1; /*0x1007cb469*/
    if ( !(_BYTE)v53 /*0x1007cb6af*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v44,
                             v49,
                             v34,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)a3 + 8) = 1; /*0x1007cb6bc*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a3); /*0x1007cb497*/
LABEL_27:
    v35 = *v52; /*0x1007cb49c*/
    if ( *v52 ) /*0x1007cb4a0*/
    {
      v36 = v52[1]; /*0x1007cb4a8*/
LABEL_29:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x1007cb4b1*/
      goto LABEL_30; /*0x1007cb4b1*/
    }
    goto LABEL_30; /*0x1007cb4a6*/
  }
  v18 = v44[1]; /*0x1007cb231*/
  v51 = v44[2]; /*0x1007cb23f*/
  v42 = v44[3]; /*0x1007cb24a*/
  if ( !(_BYTE)v53 /*0x1007cb698*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v44,
                           v15,
                           v17,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a3 + 8) = 1; /*0x1007cb6a5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a3); /*0x1007cb278*/
  v53 = v18; /*0x1007cb27d*/
  v19 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(v50 + 136) + 4872LL) + 16LL); /*0x1007cb297*/
  v20 = v19; /*0x1007cb29c*/
  if ( !v19 ) /*0x1007cb2a2*/
  {
    v44[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1007cb542*/
    v44[1] = 76; /*0x1007cb549*/
    v41[0] = v44; /*0x1007cb55b*/
    v41[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007cb569*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1007cb585*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v41,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v21 = *v19; /*0x1007cb2a8*/
  if ( !*v19 ) /*0x1007cb2a8*/
    v21 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v19); /*0x1007cb597*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x1007cb2b4*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v23 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, v15, v22, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x1007cb5a7*/
    if ( *((_BYTE *)v20 + 8) ) /*0x1007cb5ab*/
      goto LABEL_18; /*0x1007cb5b1*/
  }
  else
  {
    v23 = 0; /*0x1007cb2cf*/
    if ( *((_BYTE *)v20 + 8) )
    {
LABEL_18:
      v44[0] = 0; /*0x1007cb2de*/
      v44[1] = 1; /*0x1007cb2e9*/
      v44[2] = 0; /*0x1007cb2f4*/
      v41[2] = 1610612768; /*0x1007cb2ff*/
      v41[0] = v44; /*0x1007cb311*/
      v41[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cb31f*/
      v24 = _$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
              "poisoned lock: another task failed inside",
              41,
              v41);
      v26 = v23; /*0x1007cb33e*/
      if ( v24 ) /*0x1007cb343*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cb691*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v54,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v27 = v44[0]; /*0x1007cb349*/
      v28 = v44[1]; /*0x1007cb350*/
      v29 = v44[2]; /*0x1007cb357*/
      LODWORD(v49[0]) = *(_DWORD *)((char *)&v44[2] + 1); /*0x1007cb365*/
      *(_DWORD *)((char *)v49 + 3) = HIDWORD(v44[2]); /*0x1007cb36e*/
      if ( !v26
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v25,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v20 + 8) = 1; /*0x1007cb6d3*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v20); /*0x1007cb396*/
      v30 = v49[0]; /*0x1007cb39b*/
      *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)v49 + 3); /*0x1007cb3a1*/
      *(_DWORD *)(a1 + 25) = v30; /*0x1007cb3a5*/
      *(_QWORD *)(a1 + 8) = v27; /*0x1007cb3a9*/
      *(_QWORD *)(a1 + 16) = v28; /*0x1007cb3ad*/
      *(_BYTE *)(a1 + 24) = v29; /*0x1007cb3b1*/
      *(_QWORD *)a1 = 1; /*0x1007cb3b5*/
      if ( v53 ) /*0x1007cb3c3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v53, 1); /*0x1007cb3d2*/
      goto LABEL_27; /*0x1007cb3d7*/
    }
  }
  codexmate_lib::core::repository::Repository::get_usage_refresh_interval::hb6d7bcb95d9da811(v41, v20 + 2); /*0x1007cb5c5*/
  v38 = v41[1]; /*0x1007cb5ca*/
  v39 = v41[2]; /*0x1007cb5d1*/
  v48 = v41[1]; /*0x1007cb5d8*/
  v43 = codexmate_lib::core::repository::usage_refresh_interval_seconds::h4f46c0c2397578de(v41[1], v41[2]); /*0x1007cb5e1*/
  if ( !v23 /*0x1007cb6dc*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v38,
                           v39,
                           v40,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v20 + 8) = 1; /*0x1007cb6e9*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v20); /*0x1007cb606*/
  if ( v41[0] ) /*0x1007cb615*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v41[0], 1); /*0x1007cb620*/
  codexmate_lib::commands::system::update_usage_refresh_schedule::h3b3346cd2f479fdc(v43); /*0x1007cb62c*/
  *(_QWORD *)(a1 + 8) = v53; /*0x1007cb635*/
  *(_QWORD *)(a1 + 16) = v51; /*0x1007cb63d*/
  *(_QWORD *)(a1 + 24) = v42; /*0x1007cb648*/
  *(_QWORD *)a1 = 0; /*0x1007cb64c*/
  v35 = *v52; /*0x1007cb657*/
  if ( *v52 ) /*0x1007cb657*/
  {
    v36 = v16; /*0x1007cb668*/
    goto LABEL_29; /*0x1007cb66b*/
  }
LABEL_30:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v50); /*0x1007cb4b6*/
  return a1; /*0x1007cb4c2*/
}