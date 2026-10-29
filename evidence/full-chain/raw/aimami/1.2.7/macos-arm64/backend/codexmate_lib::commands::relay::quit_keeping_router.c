// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::quit_keeping_router::h9d7000d453cf10d2; addr: 0x100a02730; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:32Z
_QWORD *__fastcall codexmate_lib::commands::relay::quit_keeping_router::h9d7000d453cf10d2(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 v6; // rdx
  __int64 v7; // r15
  _QWORD *v8; // rax
  void *v9; // rax
  _QWORD v11[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !(unsigned __int8)codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::h9a37fd2bd6754c1e(a3) ) /*0x100a0274d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a2, v6); /*0x100a027ef*/
    v7 = 47; /*0x100a027f4*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x100a02804*/
    if ( v9 ) /*0x100a0280c*/
    {
      qmemcpy(v9, "user chose to quit while keeping router enabled", 47); /*0x100a02862*/
      v11[0] = 47; /*0x100a02865*/
      v11[1] = v9; /*0x100a0286d*/
      v11[2] = 47; /*0x100a02871*/
      a4 = codexmate_lib::platform::debug_log::app_event::h5d690f20bb61e31b( /*0x100a02895*/
             (__int64)&anon_25039b10cfdf58965817401c80a821a1_480,
             10,
             (__int64)"keep_router_exit",
             16,
             v11);
      codexmate_lib::EXIT_APPROVED::ha12d97f48f3e2a91 = 1; /*0x100a0289c*/
      tauri::app::AppHandle$LT$R$GT$::exit::h8d820cc0d0463b9b(a2, 0); /*0x100a028a7*/
      *a1 = 0x8000000000000000LL; /*0x100a028b6*/
      goto LABEL_6; /*0x100a028b6*/
    }
LABEL_7:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x100a028cf*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a2, v6); /*0x100a02753*/
  v7 = 54; /*0x100a02758*/
  v8 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x100a02768*/
  if ( !v8 ) /*0x100a02770*/
    goto LABEL_7; /*0x100a02770*/
  *(_QWORD *)((char *)v8 + 46) = 0xBA87E58080E98D86LL; /*0x100a02780*/
  v8[5] = 0x8D86E58E90E59088LL; /*0x100a0278e*/
  v8[4] = 0xE68CAEE585BEE589LL; /*0x100a0279c*/
  v8[3] = 0xADE7B7AFE88CBCEFLL; /*0x100a027aa*/
  v8[2] = 0xA28DE68788E5A89CLL; /*0x100a027b8*/
  v8[1] = 0xE5A3ADE6B194E7AFLL; /*0x100a027c6*/
  *v8 = 0xB7E8BD83E8BA99E6LL; /*0x100a027d4*/
  *a1 = 54; /*0x100a027d7*/
  a1[1] = v8; /*0x100a027de*/
  a1[2] = 54; /*0x100a027e2*/
LABEL_6:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(a2, a4); /*0x100a028b9*/
  return a1; /*0x100a028c4*/
}