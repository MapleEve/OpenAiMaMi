// __ZN13codexmate_lib8commands5relay19quit_keeping_router @ 0x10053d7b0
_QWORD *__fastcall codexmate_lib::commands::relay::quit_keeping_router::h9b0c52730a6e320a(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  _QWORD *v6; // rax
  void *v7; // rax
  _QWORD v9[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::ha887099746f9e103(a3, a2) ) /*0x10053d7cd*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a2); /*0x10053d86f*/
    v5 = 47; /*0x10053d874*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x10053d884*/
    if ( v7 ) /*0x10053d88c*/
    {
      qmemcpy(v7, "user chose to quit while keeping router enabled", 47); /*0x10053d8e2*/
      v9[0] = 47; /*0x10053d8e5*/
      v9[1] = v7; /*0x10053d8ed*/
      v9[2] = 47; /*0x10053d8f1*/
      codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x10053d915*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1153,
        10,
        "keep_router_exit",
        16,
        v9);
      codexmate_lib::EXIT_APPROVED::h7d8393eb9503152a = 1; /*0x10053d91c*/
      tauri::app::AppHandle$LT$R$GT$::exit::h3fe6fa98deeed9cb(a2, 0); /*0x10053d927*/
      *a1 = 0x8000000000000000LL; /*0x10053d936*/
      goto LABEL_6; /*0x10053d936*/
    }
LABEL_7:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x10053d94f*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3, a2); /*0x10053d7d3*/
  v5 = 54; /*0x10053d7d8*/
  v6 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x10053d7e8*/
  if ( !v6 ) /*0x10053d7f0*/
    goto LABEL_7; /*0x10053d7f0*/
  *(_QWORD *)((char *)v6 + 46) = 0xBA87E58080E98D86LL; /*0x10053d800*/
  v6[5] = 0x8D86E58E90E59088LL; /*0x10053d80e*/
  v6[4] = 0xE68CAEE585BEE589LL; /*0x10053d81c*/
  v6[3] = 0xADE7B7AFE88CBCEFLL; /*0x10053d82a*/
  v6[2] = 0xA28DE68788E5A89CLL; /*0x10053d838*/
  v6[1] = 0xE5A3ADE6B194E7AFLL; /*0x10053d846*/
  *v6 = 0xB7E8BD83E8BA99E6LL; /*0x10053d854*/
  *a1 = 54; /*0x10053d857*/
  a1[1] = v6; /*0x10053d85e*/
  a1[2] = 54; /*0x10053d862*/
LABEL_6:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x10053d939*/
  return a1; /*0x10053d944*/
}