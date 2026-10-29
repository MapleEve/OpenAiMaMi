// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::system::start_usage_refresh_watcher::h47ff73fe0ee6079d; addr: 0x100501f30; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
char __fastcall codexmate_lib::commands::system::start_usage_refresh_watcher::h47ff73fe0ee6079d(__int64 a1, double a2)
{
  char result; // al
  __int64 v4; // r15
  __int64 *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rdi
  char v8; // r13
  __int64 v9; // r15
  volatile signed __int64 *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // r15
  char v15; // of
  __int64 v16; // rt0
  volatile signed __int64 *v17; // rbx
  __int64 v18; // rt0
  int v19; // ecx
  _QWORD __dst[19]; // [rsp+8h] [rbp-178h] BYREF
  int v21[2]; // [rsp+A0h] [rbp-E0h] BYREF
  _QWORD __src[17]; // [rsp+B8h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+140h] [rbp-40h]
  __int64 v24; // [rsp+148h] [rbp-38h]
  volatile signed __int64 *v25; // [rsp+150h] [rbp-30h]

  result = codexmate_lib::commands::system::USAGE_REFRESH_WATCHER_STARTED::h495510999452e027; /*0x100501f46*/
  codexmate_lib::commands::system::USAGE_REFRESH_WATCHER_STARTED::h495510999452e027 = 1; /*0x100501f46*/
  if ( result ) /*0x100501f4e*/
    return result; /*0x100501f4e*/
  v4 = *(_QWORD *)(a1 + 136); /*0x100501f57*/
  v5 = (__int64 *)tauri::state::StateManager::try_get::h8e5dc1ea73807325(*(_QWORD *)(v4 + 4872) + 16LL); /*0x100501f69*/
  if ( !v5 ) /*0x100501f71*/
  {
    __src[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1507; /*0x100502001*/
    __src[1] = 76; /*0x100502008*/
    __dst[0] = __src; /*0x10050201a*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100502028*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100502044*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      __dst,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  v6 = v5; /*0x100501f77*/
  v7 = *v5; /*0x100501f7a*/
  if ( !*v5 ) /*0x100501f7a*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v5); /*0x100502051*/
  v25 = (volatile signed __int64 *)v4; /*0x100501f86*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a2); /*0x100501f8a*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100501f99*/
  {
    v8 = 0; /*0x100501fa5*/
    if ( *((_BYTE *)v6 + 8) ) /*0x100501fb2*/
      goto LABEL_7; /*0x100501fb9*/
LABEL_13:
    codexmate_lib::core::repository::Repository::get_usage_refresh_interval::hfb7719930c5dbc84(__dst, v6 + 2); /*0x100502082*/
    v11 = __dst[1]; /*0x100502095*/
    v7 = __dst[1]; /*0x1005020a3*/
    v24 = codexmate_lib::core::repository::usage_refresh_interval_seconds::h687040f962c82b9d(__dst[1], __dst[2]); /*0x1005020ab*/
    v23 = v12; /*0x1005020af*/
    if ( __dst[0] ) /*0x1005020bd*/
    {
      v7 = v11; /*0x1005020c4*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, __dst[0], 1); /*0x1005020c7*/
    }
    if ( v8 ) /*0x1005020cf*/
    {
      v10 = v25; /*0x1005020d1*/
      v9 = v23; /*0x1005020d5*/
      goto LABEL_18; /*0x1005020d9*/
    }
    v10 = v25; /*0x1005020e8*/
    v9 = v23; /*0x1005020ec*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005020f0*/
      goto LABEL_18; /*0x1005020f0*/
    goto LABEL_25; /*0x1005020f0*/
  }
  v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7) ^ 1; /*0x100502067*/
  if ( !*((_BYTE *)v6 + 8) ) /*0x100502075*/
    goto LABEL_13; /*0x10050207c*/
LABEL_7:
  v9 = 60; /*0x100501fbf*/
  v24 = 1; /*0x100501fca*/
  if ( !v8 ) /*0x100501fd1*/
  {
    v10 = v25; /*0x100501fe2*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100501fe6*/
      goto LABEL_18; /*0x100501fe6*/
    v24 = 1; /*0x100501ff1*/
LABEL_25:
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7) ) /*0x100502214*/
      *((_BYTE *)v6 + 8) = 1; /*0x100502221*/
    goto LABEL_18; /*0x100502226*/
  }
  v10 = v25; /*0x100501fd3*/
LABEL_18:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x1005020f6*/
  codexmate_lib::commands::system::update_usage_refresh_schedule::h903ad3dfc475531b(v24, v9, a2); /*0x100502105*/
  __src[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10050210f*/
  LODWORD(__src[1]) = v13; /*0x100502116*/
  v14 = 0; /*0x10050211c*/
  std::time::SystemTime::duration_since::had059553cab94f96(__dst, __src, 0, 0); /*0x100502134*/
  if ( !LOBYTE(__dst[0]) ) /*0x100502140*/
    v14 = __dst[1]; /*0x100502142*/
  codexmate_lib::commands::system::note_usage_refresh_activity::h9dde7be7e073efcb(v14, a2); /*0x10050214c*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hffa92f17b8a5938b(__src, a1); /*0x10050215b*/
  v16 = _InterlockedIncrement64(v10); /*0x100502160*/
  if ( (v16 < 0) ^ v15 | (v16 == 0) /*0x100502176*/
    || (v17 = *(volatile signed __int64 **)(a1 + 144), v18 = _InterlockedIncrement64(v17), (v18 < 0) ^ v15 | (v18 == 0)) )
  {
    BUG(); /*0x100502258*/
  }
  memcpy(__dst, __src, 0x88u); /*0x10050218b*/
  __dst[17] = v10; /*0x100502190*/
  __dst[18] = v17; /*0x100502197*/
  *(_QWORD *)v21 = 0x8000000000000000LL; /*0x1005021a1*/
  std::thread::lifecycle::spawn_unchecked::he21ba194deec8c1a((int)__src, (int)v21, 0, v19, 0, 0, __dst); /*0x1005021c2*/
  if ( !__src[0] ) /*0x1005021d8*/
  {
    __src[0] = __src[1]; /*0x10050222b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100502253*/
      &anon_90096945ae5392e7faa4fe68e375fd44_877,
      22,
      __src,
      &anon_90096945ae5392e7faa4fe68e375fd44_1039,
      &anon_90096945ae5392e7faa4fe68e375fd44_879);
  }
  return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::hf53371beab0c23ae(__src); /*0x100502202*/
}