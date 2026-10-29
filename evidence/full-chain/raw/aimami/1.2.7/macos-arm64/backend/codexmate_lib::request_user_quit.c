// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::request_user_quit::hf20f19d54a4c8ff8; addr: 0x1006e69a0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
__int64 __fastcall codexmate_lib::request_user_quit::hf20f19d54a4c8ff8(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // r15
  char v5; // r14
  char v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  __m128i v10; // xmm0
  void *v11; // rax
  __int64 v12; // rdi
  char v13; // r15
  const __m128i *v14; // rax
  __int64 v15; // rcx
  __m128i si128; // xmm0
  const char *v17; // rsi
  _BYTE v18[24]; // [rsp+8h] [rbp-3A8h] BYREF
  const char *v19; // [rsp+20h] [rbp-390h] BYREF
  const __m128i *v20; // [rsp+28h] [rbp-388h]
  __m128i v21; // [rsp+30h] [rbp-380h] BYREF
  const char *v22; // [rsp+40h] [rbp-370h]
  __int64 v23; // [rsp+48h] [rbp-368h]
  char v24; // [rsp+18Ch] [rbp-224h]
  char *v25; // [rsp+1A0h] [rbp-210h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+1A8h] [rbp-208h]
  __m128i v27; // [rsp+1B0h] [rbp-200h] BYREF
  const char *v28; // [rsp+1C0h] [rbp-1F0h]
  __int64 v29; // [rsp+1C8h] [rbp-1E8h]
  __int64 v30; // [rsp+1D0h] [rbp-1E0h]
  void *v31; // [rsp+1D8h] [rbp-1D8h]
  __int64 v32; // [rsp+1E0h] [rbp-1D0h]
  __int64 v33; // [rsp+1E8h] [rbp-1C8h]
  void *v34; // [rsp+1F0h] [rbp-1C0h]
  char **v35; // [rsp+1F8h] [rbp-1B8h]
  __m128i inserted; // [rsp+320h] [rbp-90h] BYREF
  char *v37; // [rsp+338h] [rbp-78h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+340h] [rbp-70h]
  __m128i v39; // [rsp+348h] [rbp-68h]
  const char *v40; // [rsp+358h] [rbp-58h]
  __int64 v41; // [rsp+360h] [rbp-50h]
  const char *v42; // [rsp+368h] [rbp-48h]
  __int64 v43; // [rsp+370h] [rbp-40h]
  const char *v44; // [rsp+378h] [rbp-38h]
  char v45; // [rsp+386h] [rbp-2Ah] BYREF
  char v46; // [rsp+387h] [rbp-29h] BYREF

  if ( codexmate_lib::EXIT_APPROVED::ha12d97f48f3e2a91 ) /*0x1006e69bd*/
    return tauri::app::AppHandle$LT$R$GT$::exit::h8d820cc0d0463b9b(a1, 0); /*0x1006e69d2*/
  v2 = *(_QWORD *)(a1 + 136); /*0x1006e69da*/
  v3 = tauri::state::StateManager::try_get::hfb94ac00f7cb3951(*(_QWORD *)(v2 + 4872) + 16LL); /*0x1006e69ec*/
  if ( !v3 ) /*0x1006e69f4*/
  {
    v46 = 0; /*0x1006e6a0e*/
    goto LABEL_12; /*0x1006e6a12*/
  }
  v4 = v3; /*0x1006e69f6*/
  v5 = codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::h9a37fd2bd6754c1e(v3); /*0x1006e6a01*/
  if ( v5 ) /*0x1006e6a06*/
  {
    v46 = 2; /*0x1006e6a08*/
    goto LABEL_8; /*0x1006e6a0c*/
  }
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h527950d12ca05baa(&v25, v4); /*0x1006e6a24*/
  codexmate_lib::core::relay::storage::sanitize_for_export::h611985cee17feb5d((__int64)&v19, (__int64)&v25); /*0x1006e6a33*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(&v25); /*0x1006e6a3f*/
  v6 = v24; /*0x1006e6a44*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(&v19); /*0x1006e6a53*/
  v46 = v6; /*0x1006e6a58*/
  if ( !v6 ) /*0x1006e6a5f*/
  {
LABEL_12:
    codexmate_lib::EXIT_APPROVED::ha12d97f48f3e2a91 = 1; /*0x1006e6b75*/
    return tauri::app::AppHandle$LT$R$GT$::exit::h8d820cc0d0463b9b(a1, 0); /*0x1006e6b87*/
  }
LABEL_8:
  v25 = &v46; /*0x1006e6a65*/
  v26 = _$LT$codexmate_lib..RouterExitGuardState$u20$as$u20$core..fmt..Debug$GT$::fmt::h4a7f47fe2eb55e5a; /*0x1006e6a77*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v18, &unk_1018FCED8, &v25); /*0x1006e6a96*/
  codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b(&unk_101700850, 10, &unk_10170085A, 11, v18); /*0x1006e6ab6*/
  codexmate_lib::commands::hotspot::force_reveal_main_window::hacbf9cdb42212ea3(a1); /*0x1006e6abe*/
  v45 = v5; /*0x1006e6ac3*/
  if ( !(unsigned __int8)tauri::event::event_name::is_event_name_valid::h2f6b76d307fb8a33(&unk_101700865, 23) ) /*0x1006e6ada*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101700865, 23, v7); /*0x1006e6b8c*/
    v9 = 23; /*0x1006e6b91*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x1006e6ba1*/
    if ( !v11 ) /*0x1006e6ba9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x1006e6ffc*/
    qmemcpy(v11, "codex-router-exit-guard", 23); /*0x1006e6bd5*/
    inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1016FF940), (signed __int64)v11, 0); /*0x1006e6be7*/
    v8 = 0x8000000000000023LL; /*0x1006e6bf9*/
    goto LABEL_15; /*0x1006e6bf9*/
  }
  tauri::event::EmitArgs::new::h8d6f6aab0b0246bb(&v25, &unk_101700865, 23, &v45); /*0x1006e6af7*/
  v8 = (unsigned __int64)v26; /*0x1006e6afc*/
  v9 = v27.i64[0]; /*0x1006e6b03*/
  v10 = _mm_loadu_si128((const __m128i *)&v27.u64[1]); /*0x1006e6b0a*/
  v19 = (const char *)v29; /*0x1006e6b19*/
  v20 = (const __m128i *)v30; /*0x1006e6b27*/
  if ( (_BYTE)v25 ) /*0x1006e6b35*/
  {
    inserted = v10; /*0x1006e6b3b*/
    v43 = (__int64)v20; /*0x1006e6b51*/
    v42 = v19; /*0x1006e6b55*/
    result = 0x8000000000000025LL; /*0x1006e6b63*/
    if ( v26 == (__int64 (__fastcall *)())0x8000000000000025LL ) /*0x1006e6b6a*/
      return result; /*0x1006e6b6a*/
    goto LABEL_15; /*0x1006e6b6a*/
  }
  v37 = (char *)v26; /*0x1006e6d18*/
  v38 = (__int64 (__fastcall *)())v27.i64[0]; /*0x1006e6d1c*/
  v39 = v10; /*0x1006e6d20*/
  v40 = v19; /*0x1006e6d33*/
  v41 = (__int64)v20; /*0x1006e6d37*/
  v44 = (const char *)(v2 + 4144); /*0x1006e6d42*/
  v12 = *(_QWORD *)(v2 + 4144); /*0x1006e6d46*/
  if ( !v12 ) /*0x1006e6d50*/
    v12 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v44); /*0x1006e6f60*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(*(double *)v10.i64); /*0x1006e6d56*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006e6d65*/
  {
    v13 = 0; /*0x1006e6d71*/
    if ( !*(_BYTE *)(v2 + 4152) ) /*0x1006e6d74*/
      goto LABEL_23; /*0x1006e6d7e*/
LABEL_35:
    v19 = v44; /*0x1006e6f84*/
    LOBYTE(v20) = v13; /*0x1006e6f8f*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006e6fb7*/
      "poisoned webview managerindex.html",
      24,
      &v19,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1347,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1797);
  }
  v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12) ^ 1; /*0x1006e6f70*/
  if ( *(_BYTE *)(v2 + 4152) ) /*0x1006e6f74*/
    goto LABEL_35; /*0x1006e6f7e*/
LABEL_23:
  v14 = *(const __m128i **)(v2 + 4160); /*0x1006e6d84*/
  v15 = (__int64)v14->i64 + *(_QWORD *)(v2 + 4168) + 1; /*0x1006e6d99*/
  si128 = _mm_load_si128(v14); /*0x1006e6d9e*/
  v17 = *(const char **)(v2 + 4184); /*0x1006e6da8*/
  v19 = (const char *)v14; /*0x1006e6daf*/
  v20 = v14 + 1; /*0x1006e6dba*/
  v21.i64[0] = v15; /*0x1006e6dc1*/
  v21.i16[4] = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x1006e6dc8*/
  v22 = v17; /*0x1006e6dcf*/
  tauri::event::listener::Listeners::emit_js_filter::h50ee169cdbc6cf41(&v25, v2 + 4864, &v19, &v37, 0); /*0x1006e6dee*/
  v8 = (unsigned __int64)v25; /*0x1006e6dfd*/
  if ( v25 != (char *)0x8000000000000025LL ) /*0x1006e6e0b*/
  {
    v9 = (__int64)v26; /*0x1006e6ecf*/
    inserted = _mm_loadu_si128(&v27); /*0x1006e6ede*/
    v42 = v28; /*0x1006e6eed*/
    v43 = v29; /*0x1006e6ef8*/
    if ( !v13 /*0x1006e6fd8*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v25) )
    {
      *(_BYTE *)(v2 + 4152) = 1; /*0x1006e6fe5*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v44); /*0x1006e6f1b*/
    if ( v37 ) /*0x1006e6f27*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 1); /*0x1006e6f32*/
    if ( v39.i64[1] ) /*0x1006e6f3e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v39.i64[1], 1); /*0x1006e6f4d*/
    goto LABEL_15; /*0x1006e6f52*/
  }
  if ( !v13 /*0x1006e6fbe*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v25) )
  {
    *(_BYTE *)(v2 + 4152) = 1; /*0x1006e6fcb*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v44); /*0x1006e6e30*/
  v29 = v41; /*0x1006e6e39*/
  v28 = v40; /*0x1006e6e44*/
  v27 = v39; /*0x1006e6e5a*/
  v26 = v38; /*0x1006e6e69*/
  v25 = v37; /*0x1006e6e70*/
  result = tauri::event::listener::Listeners::emit::hbfa57bdfd1ad6320(&v19, v2 + 4864, &v25); /*0x1006e6e88*/
  v8 = (unsigned __int64)v19; /*0x1006e6e8d*/
  if ( v19 != (const char *)0x8000000000000025LL ) /*0x1006e6e97*/
  {
    v9 = (__int64)v20; /*0x1006e6e9d*/
    inserted = _mm_loadu_si128(&v21); /*0x1006e6eac*/
    v42 = v22; /*0x1006e6ebb*/
    v43 = v23; /*0x1006e6ec6*/
LABEL_15:
    v19 = (const char *)v8; /*0x1006e6bfd*/
    v20 = (const __m128i *)v9; /*0x1006e6c04*/
    v21 = _mm_load_si128(&inserted); /*0x1006e6c13*/
    v22 = v42; /*0x1006e6c23*/
    v23 = v43; /*0x1006e6c2a*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006e6c3f*/
    {
      v37 = (char *)&v19; /*0x1006e6c4c*/
      v38 = (__int64 (__fastcall *)())_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80; /*0x1006e6c57*/
      v30 = 2; /*0x1006e6c5b*/
      v31 = &unk_10170087C; /*0x1006e6c6d*/
      v32 = 13; /*0x1006e6c74*/
      v34 = &unk_1018FCF0C; /*0x1006e6c86*/
      v35 = &v37; /*0x1006e6c91*/
      v25 = nullptr; /*0x1006e6c98*/
      v26 = (__int64 (__fastcall *)())&unk_10170087C; /*0x1006e6ca3*/
      v27 = (__m128i)0xDuLL; /*0x1006e6caa*/
      v28 = "src/lib.rs"; /*0x1006e6cc7*/
      v29 = 10; /*0x1006e6cce*/
      v33 = 0x6200000001LL; /*0x1006e6ce3*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v45, &v25); /*0x1006e6cf5*/
    }
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hfe65776dda13dd86(&v19); /*0x1006e6d01*/
  }
  return result; /*0x1006e69c1*/
}