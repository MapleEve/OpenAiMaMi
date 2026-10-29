// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::account_observer::start::h2792dcdfcdbe5d38; addr: 0x100a59c00; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
_QWORD *__fastcall codexmate_lib::commands::account_observer::start::h2792dcdfcdbe5d38(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  char v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx
  void *v12; // rax
  const void *v13; // rbx
  size_t v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  char v17; // of
  __int64 v18; // rt0
  volatile signed __int64 *v19; // rbx
  __int64 v20; // rt0
  __int64 v21; // rdx
  void *v22; // rax
  void *v23; // r12
  void *v24; // rdi
  __int64 v25; // rdx
  char *v26; // rax
  char *v27; // r15
  __int128 v28; // xmm0
  __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  _QWORD *v33; // rax
  size_t __n; // [rsp+40h] [rbp-3E8h]
  int v36[2]; // [rsp+48h] [rbp-3E0h] BYREF
  char *v37; // [rsp+50h] [rbp-3D8h]
  __int64 v38; // [rsp+58h] [rbp-3D0h]
  __int64 v39; // [rsp+60h] [rbp-3C8h]
  _OWORD *v40; // [rsp+68h] [rbp-3C0h]
  int v41[4]; // [rsp+70h] [rbp-3B8h] BYREF
  __int64 v42; // [rsp+80h] [rbp-3A8h]
  __int64 v43; // [rsp+88h] [rbp-3A0h]
  __int64 v44; // [rsp+90h] [rbp-398h]
  unsigned __int8 v45; // [rsp+98h] [rbp-390h]
  _QWORD v46[2]; // [rsp+A0h] [rbp-388h] BYREF
  int v47[2]; // [rsp+B0h] [rbp-378h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-370h]
  __int64 v49; // [rsp+C0h] [rbp-368h]
  __int64 v50; // [rsp+C8h] [rbp-360h]
  void *v51; // [rsp+D0h] [rbp-358h]
  _QWORD v52[3]; // [rsp+D8h] [rbp-350h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-338h]
  _OWORD __src[35]; // [rsp+100h] [rbp-328h] BYREF
  _QWORD __dst[31]; // [rsp+330h] [rbp-F8h] BYREF

  v4 = *(_QWORD *)(a2 + 136); /*0x100a59c1e*/
  v5 = (_QWORD *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(v4 + 4872) + 16LL); /*0x100a59c30*/
  if ( !v5 ) /*0x100a59c38*/
  {
    __dst[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100a59d17*/
    __dst[1] = 76; /*0x100a59d1f*/
    *(_QWORD *)&__src[0] = __dst; /*0x100a59d33*/
    *((_QWORD *)&__src[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100a59d42*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a59d60*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      __src,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v6 = v5; /*0x100a59c3e*/
  v7 = *v5; /*0x100a59c41*/
  if ( !*v5 ) /*0x100a59c41*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v5); /*0x100a59d6d*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a3); /*0x100a59c4d*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100a59c5c*/
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7) ^ 1; /*0x100a59d83*/
    if ( *((_BYTE *)v6 + 8) ) /*0x100a59d87*/
    {
LABEL_6:
      if ( !v9 /*0x100a5a1fa*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7) )
      {
        *((_BYTE *)v6 + 8) = 1; /*0x100a5a207*/
      }
      v10 = *v6; /*0x100a59c94*/
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100a59c98*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, a2, v11); /*0x100a59c9d*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x100a59cac*/
      if ( !v12 ) /*0x100a59cb4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x100a5a25d*/
      qmemcpy(v12, "Account repository lock is poisoned", 35); /*0x100a59cee*/
      *a1 = 35; /*0x100a59cf8*/
      a1[1] = v12; /*0x100a59cff*/
      a1[2] = 35; /*0x100a59d03*/
      return a1; /*0x100a59d0b*/
    }
  }
  else
  {
    v9 = 0; /*0x100a59c68*/
    if ( *((_BYTE *)v6 + 8) ) /*0x100a59c6b*/
      goto LABEL_6; /*0x100a59c73*/
  }
  v40 = a1; /*0x100a59d95*/
  v13 = (const void *)v6[6]; /*0x100a59d9a*/
  v14 = v6[7]; /*0x100a59d9f*/
  __n = v14; /*0x100a59da7*/
  if ( v14 ) /*0x100a59dac*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, a2, v8); /*0x100a59dae*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100a59dbd*/
    v14 = __n; /*0x100a59dc2*/
    if ( !v15 ) /*0x100a59dca*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x100a59dd4*/
  }
  else
  {
    v15 = 1; /*0x100a59dde*/
  }
  v39 = v15; /*0x100a59de3*/
  v16 = v15; /*0x100a59de8*/
  memcpy((void *)v15, v13, v14); /*0x100a59df1*/
  if ( !v9 /*0x100a5a212*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16) )
  {
    *((_BYTE *)v6 + 8) = 1; /*0x100a5a21f*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100a59e1c*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hffa92f17b8a5938b(__src, a2); /*0x100a59e2c*/
  v18 = _InterlockedIncrement64((volatile signed __int64 *)v4); /*0x100a59e31*/
  if ( (v18 < 0) ^ v17 | (v18 == 0) /*0x100a59e46*/
    || (v19 = *(volatile signed __int64 **)(a2 + 144), v20 = _InterlockedIncrement64(v19), (v20 < 0) ^ v17 | (v20 == 0)) )
  {
    BUG(); /*0x100a5a271*/
  }
  memcpy(__dst, __src, 0x88u); /*0x100a59e61*/
  __dst[17] = v4; /*0x100a59e66*/
  __dst[18] = v19; /*0x100a59e6e*/
  *(_QWORD *)&__src[24] = 1; /*0x100a59e76*/
  *((_QWORD *)&__src[24] + 1) = 1; /*0x100a59e82*/
  LOBYTE(__src[25]) = 0; /*0x100a59e8e*/
  *(_QWORD *)&__src[16] = 0; /*0x100a59e96*/
  BYTE8(__src[16]) = 0; /*0x100a59ea2*/
  *(_QWORD *)&__src[17] = 0; /*0x100a59eaa*/
  __src[0] = 0; /*0x100a59eb9*/
  __src[8] = 0; /*0x100a59ec1*/
  *((_QWORD *)&__src[17] + 1) = 8; /*0x100a59ec9*/
  __src[18] = 0; /*0x100a59ed5*/
  __src[19] = 8u; /*0x100a59edd*/
  LOBYTE(__src[20]) = 1; /*0x100a59ef5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src, v21); /*0x100a59efd*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(512, 128); /*0x100a59f0c*/
  if ( !v22 ) /*0x100a59f14*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x100a5a1f3*/
  v23 = v22; /*0x100a59f1a*/
  v24 = v22; /*0x100a59f2a*/
  memcpy(v22, __src, 0x200u); /*0x100a59f2d*/
  v46[0] = 1; /*0x100a59f32*/
  v46[1] = v23; /*0x100a59f3e*/
  v50 = 1; /*0x100a59f46*/
  v51 = v23; /*0x100a59f52*/
  *(_QWORD *)&__src[1] = 0x8000000000000000LL; /*0x100a59f60*/
  *(_QWORD *)&__src[0] = 0; /*0x100a59f68*/
  BYTE8(__src[2]) = 0; /*0x100a59f74*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, __src, v25); /*0x100a59f7c*/
  v26 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100a59f8b*/
  if ( !v26 ) /*0x100a59f93*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x100a5a26c*/
  qmemcpy(v26, "aimami-account-observer", 23); /*0x100a59fbf*/
  *(_QWORD *)v36 = 23; /*0x100a59fc2*/
  v37 = v26; /*0x100a59fcb*/
  v38 = 23; /*0x100a59fd0*/
  std::thread::builder::Builder::name::h877bc8a9f9cdb5c8(v41, __src, v36); /*0x100a59ff1*/
  a1 = v40; /*0x100a59ff6*/
  memcpy(__src, __dst, 0x98u); /*0x100a5a00b*/
  *((_QWORD *)&__src[10] + 1) = __n; /*0x100a5a015*/
  *(_QWORD *)&__src[11] = v39; /*0x100a5a022*/
  *((_QWORD *)&__src[11] + 1) = __n; /*0x100a5a02a*/
  *((_QWORD *)&__src[9] + 1) = 1; /*0x100a5a032*/
  *(_QWORD *)&__src[10] = v23; /*0x100a5a03e*/
  v49 = v44; /*0x100a5a04e*/
  v48 = v43; /*0x100a5a05e*/
  *(_QWORD *)v47 = v42; /*0x100a5a06e*/
  std::thread::lifecycle::spawn_unchecked::hfdce8fc7995b5e08((int)v36, (int)v47, v41[0], v41[2], v45, 0, __src); /*0x100a5a09d*/
  v27 = v37; /*0x100a5a0aa*/
  if ( *(_QWORD *)v36 ) /*0x100a5a0b2*/
  {
    v52[0] = *(_QWORD *)v36; /*0x100a5a0b9*/
    v52[1] = v37; /*0x100a5a0c1*/
    v52[2] = v38; /*0x100a5a0c9*/
    core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::hf53371beab0c23ae(v52); /*0x100a5a0d9*/
    a1[1] = 1; /*0x100a5a0de*/
    a1[2] = v23; /*0x100a5a0e6*/
    *a1 = 0x8000000000000000LL; /*0x100a5a0ea*/
  }
  else
  {
    *(_QWORD *)v36 = v37; /*0x100a5a0f2*/
    *(_QWORD *)v41 = 0; /*0x100a5a0f7*/
    *(_QWORD *)&v41[2] = 1; /*0x100a5a100*/
    v42 = 0; /*0x100a5a109*/
    *(_QWORD *)&__src[1] = 1610612768; /*0x100a5a115*/
    *(_QWORD *)&__src[0] = v41; /*0x100a5a121*/
    *((_QWORD *)&__src[0] + 1) = &anon_442098b8dbdde10fede7d79fc85e0df3_290; /*0x100a5a130*/
    if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0( /*0x100a5a145*/
                            v36,
                            __src) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a5a24c*/
        &anon_442098b8dbdde10fede7d79fc85e0df3_291,
        55,
        v47,
        &anon_442098b8dbdde10fede7d79fc85e0df3_301,
        &anon_442098b8dbdde10fede7d79fc85e0df3_293);
    v28 = *(_OWORD *)v41; /*0x100a5a152*/
    v29 = v42; /*0x100a5a157*/
    if ( ((unsigned __int8)v27 & 3) == 1 ) /*0x100a5a168*/
    {
      v53 = *(_OWORD *)v41; /*0x100a5a16a*/
      v30 = *(_QWORD *)(v27 - 1); /*0x100a5a176*/
      v31 = *(_QWORD *)(v27 + 7); /*0x100a5a17a*/
      if ( *(_QWORD *)v31 ) /*0x100a5a17e*/
        (*(void (__fastcall **)(_QWORD, double))v31)(*(_QWORD *)(v27 - 1), *(double *)v41); /*0x100a5a18a*/
      v32 = *(_QWORD *)(v31 + 8); /*0x100a5a18c*/
      if ( v32 ) /*0x100a5a193*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x100a5a19c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27 - 1, 24, 8); /*0x100a5a1ae*/
      v28 = v53; /*0x100a5a1b3*/
    }
    v33 = v40; /*0x100a5a1bb*/
    *v40 = v28; /*0x100a5a1c0*/
    v33[2] = v29; /*0x100a5a1c3*/
    a1 = v33; /*0x100a5a1c7*/
    _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he6bc7475e938ed81(v46); /*0x100a5a1d2*/
  }
  return a1; /*0x100a5a1da*/
}