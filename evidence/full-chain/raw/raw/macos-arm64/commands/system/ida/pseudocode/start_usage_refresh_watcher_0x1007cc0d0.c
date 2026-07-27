// __ZN13codexmate_lib8commands6system27start_usage_refresh_watcher @ 0x1007cc0d0 | 基线 same-set
char __fastcall codexmate_lib::commands::system::start_usage_refresh_watcher::hf7a0e0e285568f6d(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // r15
  __int64 *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // rcx
  char v10; // r12
  __int64 v11; // r15
  volatile signed __int64 *v12; // r12
  char v13; // al
  __int64 v14; // r15
  int v15; // edx
  __int64 v16; // r15
  char v17; // of
  __int64 v18; // rt0
  volatile signed __int64 *v19; // rbx
  __int64 v20; // rt0
  int v21; // ecx
  _QWORD __dst[19]; // [rsp+10h] [rbp-170h] BYREF
  int v23[2]; // [rsp+A8h] [rbp-D8h] BYREF
  _QWORD __src[17]; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+148h] [rbp-38h]
  volatile signed __int64 *v26; // [rsp+150h] [rbp-30h]

  result = codexmate_lib::commands::system::USAGE_REFRESH_WATCHER_STARTED::h29a16d6a3b86271d; /*0x1007cc0e6*/
  codexmate_lib::commands::system::USAGE_REFRESH_WATCHER_STARTED::h29a16d6a3b86271d = 1; /*0x1007cc0e6*/
  if ( result ) /*0x1007cc0ee*/
    return result; /*0x1007cc0ee*/
  v4 = *(_QWORD *)(a1 + 136); /*0x1007cc0f7*/
  v5 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v4 + 4872) + 16LL); /*0x1007cc109*/
  if ( !v5 ) /*0x1007cc111*/
  {
    __src[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1007cc18b*/
    __src[1] = 76; /*0x1007cc192*/
    __dst[0] = __src; /*0x1007cc1a4*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007cc1b2*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1007cc1ce*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __dst,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v6 = v5; /*0x1007cc113*/
  v7 = *v5; /*0x1007cc116*/
  if ( !*v5 ) /*0x1007cc116*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v5); /*0x1007cc1db*/
  v26 = (volatile signed __int64 *)v4; /*0x1007cc122*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1007cc126*/
  v9 = &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6; /*0x1007cc12b*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1007cc135*/
  {
    v10 = 0; /*0x1007cc141*/
    if ( *((_BYTE *)v6 + 8) ) /*0x1007cc14e*/
      goto LABEL_7; /*0x1007cc155*/
LABEL_13:
    codexmate_lib::core::repository::Repository::get_usage_refresh_interval::hb6d7bcb95d9da811(__dst, v6 + 2); /*0x1007cc20c*/
    v14 = __dst[1]; /*0x1007cc21f*/
    v7 = __dst[1]; /*0x1007cc22d*/
    v25 = codexmate_lib::core::repository::usage_refresh_interval_seconds::h4f46c0c2397578de(__dst[1], __dst[2]); /*0x1007cc235*/
    a2 = __dst[0]; /*0x1007cc239*/
    if ( __dst[0] ) /*0x1007cc243*/
    {
      v7 = v14; /*0x1007cc24a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, __dst[0], 1); /*0x1007cc24d*/
    }
    if ( v10 ) /*0x1007cc255*/
    {
      v12 = v26; /*0x1007cc257*/
      v11 = v25; /*0x1007cc25b*/
      goto LABEL_18; /*0x1007cc25f*/
    }
    v12 = v26; /*0x1007cc26e*/
    v11 = v25; /*0x1007cc272*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1007cc276*/
      goto LABEL_18; /*0x1007cc276*/
    goto LABEL_25; /*0x1007cc276*/
  }
  v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1007cc1e6*/
          v7,
          a2,
          v8,
          &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6);
  v9 = &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6; /*0x1007cc1eb*/
  v10 = v13 ^ 1; /*0x1007cc1f1*/
  if ( !*((_BYTE *)v6 + 8) ) /*0x1007cc1ff*/
    goto LABEL_13; /*0x1007cc206*/
LABEL_7:
  v11 = 60; /*0x1007cc15b*/
  if ( !v10 ) /*0x1007cc164*/
  {
    v12 = v26; /*0x1007cc175*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1007cc179*/
      goto LABEL_18; /*0x1007cc179*/
LABEL_25:
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9) ) /*0x1007cc396*/
      *((_BYTE *)v6 + 8) = 1; /*0x1007cc3a3*/
    goto LABEL_18; /*0x1007cc3a8*/
  }
  v12 = v26; /*0x1007cc166*/
LABEL_18:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x1007cc27c*/
  codexmate_lib::commands::system::update_usage_refresh_schedule::h3b3346cd2f479fdc(v11); /*0x1007cc287*/
  __src[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v11, a2); /*0x1007cc291*/
  LODWORD(__src[1]) = v15; /*0x1007cc298*/
  v16 = 0; /*0x1007cc29e*/
  std::time::SystemTime::duration_since::had059553cab94f96(__dst, __src, 0, 0); /*0x1007cc2b6*/
  if ( !LOBYTE(__dst[0]) ) /*0x1007cc2c2*/
    v16 = __dst[1]; /*0x1007cc2c4*/
  codexmate_lib::commands::system::note_usage_refresh_activity::h0d537a565f552410(v16, (__int64)__src); /*0x1007cc2ce*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1007cc2dd*/
  v18 = _InterlockedIncrement64(v12); /*0x1007cc2e2*/
  if ( (v18 < 0) ^ v17 | (v18 == 0) /*0x1007cc2f8*/
    || (v19 = *(volatile signed __int64 **)(a1 + 144), v20 = _InterlockedIncrement64(v19), (v20 < 0) ^ v17 | (v20 == 0)) )
  {
    BUG(); /*0x1007cc3da*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1007cc30d*/
  __dst[17] = v12; /*0x1007cc312*/
  __dst[18] = v19; /*0x1007cc319*/
  *(_QWORD *)v23 = 0x8000000000000000LL; /*0x1007cc323*/
  std::thread::lifecycle::spawn_unchecked::hf8b34eb5a280435f((int)__src, (int)v23, 0, v21, 0, 0, __dst); /*0x1007cc344*/
  if ( !__src[0] ) /*0x1007cc35a*/
  {
    __src[0] = __src[1]; /*0x1007cc3ad*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cc3d5*/
      "failed to spawn thread",
      22,
      __src,
      &anon_3ce6d1417794db0febde534c64082f90_433,
      &anon_3ce6d1417794db0febde534c64082f90_277);
  }
  return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(__src); /*0x1007cc384*/
}