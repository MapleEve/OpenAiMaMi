// mac 1.1.8 refresh_usage_snapshot node va=0x1004c7ef0 depth=1
// codexmate_lib8commands8accounts26broadcast_runtime_snapshot
__int64 __fastcall codexmate_lib::commands::accounts::broadcast_runtime_snapshot::hd40df0804c6b6468(
        __int64 a1,
        _BYTE *a2,
        void *a3,
        __int64 a4)
{
  pthread_mutex_t *v6; // rdi
  bool v7; // r12
  __int64 v8; // rdi
  __int64 i; // r15
  __int64 v10; // rdi
  void *v11; // rdx
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 result; // rax
  _BYTE v19[680]; // [rsp+0h] [rbp-AF0h] BYREF
  _BYTE v20[680]; // [rsp+2A8h] [rbp-848h] BYREF
  _QWORD __dst[85]; // [rsp+550h] [rbp-5A0h] BYREF
  _QWORD __src[88]; // [rsp+7F8h] [rbp-2F8h] BYREF
  __int64 v23; // [rsp+AB8h] [rbp-38h]
  void *v24; // [rsp+AC0h] [rbp-30h]

  v24 = a3; /*0x1004c7f07*/
  if ( codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h18ef54396c9c45f0 ) /*0x1004c7f1b*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h9d69757b532c22a5(&codexmate_lib::commands::accounts::DISPLAY_SNAPSHOT_CACHE::h18ef54396c9c45f0); /*0x1004c825c*/
    v6 = (pthread_mutex_t *)qword_1015B1BA0; /*0x1004c8261*/
    if ( qword_1015B1BA0 ) /*0x1004c826b*/
      goto LABEL_3; /*0x1004c826b*/
  }
  else
  {
    v6 = (pthread_mutex_t *)qword_1015B1BA0; /*0x1004c7f21*/
    if ( qword_1015B1BA0 ) /*0x1004c7f2b*/
      goto LABEL_3; /*0x1004c7f2b*/
  }
  v6 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(&qword_1015B1BA0); /*0x1004c827d*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1004c7f31*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1004c7f40*/
    v7 = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004c828d*/
  else
    v7 = 0; /*0x1004c7f4c*/
  __src[1] = &qword_1015B1BA0; /*0x1004c7f64*/
  LOBYTE(__src[2]) = v7; /*0x1004c7f6b*/
  __src[0] = byte_1015B1BA8 != 0; /*0x1004c7f72*/
  if ( byte_1015B1BA8 ) /*0x1004c7f79*/
  {
    _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::h921a54e95aa6bad7( /*0x1004c7f85*/
      v20,
      a2);
    if ( v7 ) /*0x1004c7f8d*/
      goto LABEL_16; /*0x1004c7f8d*/
    goto LABEL_15; /*0x1004c7f8d*/
  }
  _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::h921a54e95aa6bad7( /*0x1004c7fa2*/
    v19,
    a2);
  _$LT$codexmate_lib..core..models..CoreSnapshotPayload$u20$as$u20$core..clone..Clone$GT$::clone::h921a54e95aa6bad7( /*0x1004c7fb5*/
    __src,
    v19);
  memcpy(__dst, __src, sizeof(__dst)); /*0x1004c7fcd*/
  if ( dword_1015B1BB0 != 3 ) /*0x1004c7fd9*/
  {
    v23 = a1; /*0x1004c7fdb*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(&dword_1015B1BB0); /*0x1004c7fe6*/
    v8 = qword_1015B1E48; /*0x1004c7feb*/
    for ( i = qword_1015B1E50 + 1; i != 1; --i ) /*0x1004c7ff9*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(); /*0x1004c8010*/
      v8 += 336; /*0x1004c8015*/
    }
    a1 = v23; /*0x1004c8024*/
    if ( qword_1015B1E40 ) /*0x1004c8028*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004c803d*/
  }
  memcpy(&dword_1015B1BB0, __dst, 0x2A8u); /*0x1004c8055*/
  a2 = v19; /*0x1004c8061*/
  memcpy(v20, v19, sizeof(v20)); /*0x1004c806d*/
  if ( !v7 ) /*0x1004c8075*/
  {
LABEL_15:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1004c8296*/
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      byte_1015B1BA8 = 1; /*0x1004c82a3*/
    }
  }
LABEL_16:
  v10 = qword_1015B1BA0; /*0x1004c808d*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d((pthread_mutex_t *)qword_1015B1BA0); /*0x1004c8094*/
  switch ( a4 ) /*0x1004c80b5*/
  {
    case 4LL: /*0x1004c80b5*/
      if ( *(_DWORD *)v24 == 1819047270 ) /*0x1004c80c1*/
        goto LABEL_24; /*0x1004c80c1*/
      break; /*0x1004c80c1*/
    case 5LL: /*0x1004c80b5*/
      if ( !(*(_DWORD *)v24 ^ 0x67617375 | *((unsigned __int8 *)v24 + 4) ^ 0x65) ) /*0x1004c80f4*/
        goto LABEL_24; /*0x1004c80f6*/
      break; /*0x1004c80f6*/
    case 8LL: /*0x1004c80b5*/
      if ( *(_QWORD *)v24 == 0x6E6F69746174756DLL ) /*0x1004c80da*/
        goto LABEL_24; /*0x1004c80da*/
      break; /*0x1004c80da*/
    case 11LL: /*0x1004c80b5*/
      v11 = v24; /*0x1004c8104*/
      if ( !(*(_QWORD *)v24 ^ 0x73736572676F7270LL | *(_QWORD *)((char *)v24 + 3) ^ 0x6576697373657267LL) ) /*0x1004c8119*/
      {
LABEL_24:
        __dst[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v10, a2, v11); /*0x1004c811e*/
        LODWORD(__dst[1]) = v12; /*0x1004c812a*/
        std::time::SystemTime::duration_since::had059553cab94f96(__src, __dst, 0, 0); /*0x1004c8142*/
        if ( LOBYTE(__src[0]) ) /*0x1004c814e*/
          v13 = 0; /*0x1004c8159*/
        else
          v13 = __src[1]; /*0x1004c8150*/
        codexmate_lib::commands::system::note_usage_refresh_activity::h512b4f9bdf3496a8(v13); /*0x1004c815b*/
      }
      break; /*0x1004c815b*/
    default:
      break;
  }
  codexmate_lib::commands::tray_menu::refresh_tray_menu_with_snapshot::h6e34c3f16c01270d(a1, v20); /*0x1004c8160*/
  memcpy(__dst, v20, sizeof(__dst)); /*0x1004c8182*/
  if ( a4 < 0 ) /*0x1004c818a*/
  {
    v14 = 0; /*0x1004c818c*/
    goto LABEL_30; /*0x1004c818c*/
  }
  if ( a4 ) /*0x1004c819c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004c819e*/
    v14 = 1; /*0x1004c81a3*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1u); /*0x1004c81b1*/
    if ( !v15 ) /*0x1004c81b9*/
LABEL_30:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, a4); /*0x1004c818f*/
    v16 = v15; /*0x1004c81bb*/
    v17 = a1; /*0x1004c81be*/
  }
  else
  {
    v17 = a1; /*0x1004c81c3*/
    v16 = 1; /*0x1004c81c6*/
  }
  memcpy((void *)v16, v24, a4); /*0x1004c81d6*/
  memcpy(__src, __dst, 0x2A8u); /*0x1004c81f1*/
  __src[85] = a4; /*0x1004c81f6*/
  __src[86] = v16; /*0x1004c81fa*/
  __src[87] = a4; /*0x1004c81fe*/
  tauri::Emitter::emit::hb3872f1d98cc1c48(__dst, v17, "runtime-state-updated", 21, __src); /*0x1004c821b*/
  result = 0x8000000000000025LL; /*0x1004c822a*/
  if ( __dst[0] != 0x8000000000000025LL ) /*0x1004c8235*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(__dst); /*0x1004c823e*/
  return result; /*0x1004c8243*/
}