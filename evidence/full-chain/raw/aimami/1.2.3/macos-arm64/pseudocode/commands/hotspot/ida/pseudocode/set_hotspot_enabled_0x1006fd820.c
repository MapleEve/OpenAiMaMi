// __ZN13codexmate_lib8commands7hotspot19set_hotspot_enabled @ 0x1006fd820 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::hotspot::set_hotspot_enabled::h51292592b27a8b15(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r12
  char v13; // r13
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rsi
  _QWORD __dst[112]; // [rsp+0h] [rbp-8B0h] BYREF
  _QWORD __src[112]; // [rsp+380h] [rbp-530h] BYREF
  _QWORD v29[22]; // [rsp+700h] [rbp-1B0h] BYREF
  _QWORD v30[22]; // [rsp+7B0h] [rbp-100h] BYREF
  __int64 v31; // [rsp+860h] [rbp-50h] BYREF
  __int64 v32; // [rsp+868h] [rbp-48h]
  __int64 v33; // [rsp+870h] [rbp-40h]
  __int64 v34; // [rsp+878h] [rbp-38h]
  int v35; // [rsp+884h] [rbp-2Ch]

  v34 = a2; /*0x1006fd83a*/
  v7 = *a3; /*0x1006fd841*/
  if ( !*a3 ) /*0x1006fd841*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a3); /*0x1006fd96c*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1006fd84d*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9); /*0x1006fd974*/
    LOBYTE(v15) = v15 ^ 1; /*0x1006fd979*/
    v35 = v15; /*0x1006fd97b*/
    if ( *((_BYTE *)a3 + 8) ) /*0x1006fd988*/
      goto LABEL_5; /*0x1006fd98f*/
  }
  else
  {
    v35 = 0; /*0x1006fd868*/
    if ( *((_BYTE *)a3 + 8) )
    {
LABEL_5:
      __src[0] = 0; /*0x1006fd886*/
      __src[1] = 1; /*0x1006fd891*/
      __src[2] = 0; /*0x1006fd89c*/
      __dst[2] = 1610612768; /*0x1006fd8a7*/
      __dst[0] = __src; /*0x1006fd8b9*/
      __dst[1] = &off_101969DD0; /*0x1006fd8c7*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __dst) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v31, &unk_101969E38, &off_101969E00); /*0x1006fdd12*/
      v11 = __src[0]; /*0x1006fd8f1*/
      v12 = __src[1]; /*0x1006fd8f8*/
      v13 = __src[2]; /*0x1006fd8ff*/
      LODWORD(v30[0]) = *(_DWORD *)((char *)&__src[2] + 1); /*0x1006fd90d*/
      *(_DWORD *)((char *)v30 + 3) = HIDWORD(__src[2]); /*0x1006fd919*/
      if ( !(_BYTE)v35
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v10,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)a3 + 8) = 1; /*0x1006fdd29*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a3); /*0x1006fd93b*/
      v14 = v30[0]; /*0x1006fd940*/
      *(_DWORD *)(a1 + 20) = *(_DWORD *)((char *)v30 + 3); /*0x1006fd94c*/
      *(_DWORD *)(a1 + 17) = v14; /*0x1006fd950*/
      *(_QWORD *)a1 = v11; /*0x1006fd954*/
      *(_QWORD *)(a1 + 8) = v12; /*0x1006fd957*/
      *(_BYTE *)(a1 + 16) = v13; /*0x1006fd95b*/
      goto LABEL_28; /*0x1006fd95f*/
    }
  }
  codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst); /*0x1006fd9a3*/
  LOBYTE(__dst[18]) = a4; /*0x1006fd9a8*/
  v16 = a3 + 2; /*0x1006fd9bd*/
  codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(__src, a3 + 2, __dst); /*0x1006fd9c0*/
  v17 = __src[0]; /*0x1006fd9c5*/
  if ( __src[0] != 11 ) /*0x1006fd9d0*/
  {
    qmemcpy(v30, &__src[1], 0x58u); /*0x1006fd9e5*/
    v16 = &__src[12]; /*0x1006fd9e5*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v16); /*0x1006fd9ef*/
  if ( (_DWORD)v17 == 11 ) /*0x1006fd9f7*/
  {
    if ( !(_BYTE)v35 /*0x1006fdd58*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, v16, v18, v19) )
    {
      *((_BYTE *)a3 + 8) = 1; /*0x1006fdd65*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a3); /*0x1006fda19*/
    if ( a4 ) /*0x1006fda21*/
    {
      v20 = codexmate_lib::commands::hotspot::create_hotspot_window::h668f40b5e1bf1f30(v34); /*0x1006fda30*/
      if ( v20 ) /*0x1006fda36*/
      {
        __src[0] = 0; /*0x1006fda3c*/
        __src[1] = 1; /*0x1006fda47*/
        __src[2] = 0; /*0x1006fda52*/
        __dst[2] = 1610612768; /*0x1006fda5d*/
        __dst[0] = __src; /*0x1006fda6f*/
        __dst[1] = &off_101969DD0; /*0x1006fda7d*/
        if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80( /*0x1006fda8e*/
                                v20,
                                __dst) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v31, &unk_101969E38, &off_101969E00); /*0x1006fdda4*/
        v30[0] = __src[0]; /*0x1006fdaa9*/
        v30[1] = __src[1]; /*0x1006fdab0*/
        v30[2] = __src[2]; /*0x1006fdabe*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v20); /*0x1006fdac8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 48, 8); /*0x1006fdada*/
        *(_QWORD *)(a1 + 16) = v30[2]; /*0x1006fdae6*/
        v21 = v30[0]; /*0x1006fdaea*/
        *(_QWORD *)(a1 + 8) = v30[1]; /*0x1006fdaf8*/
        *(_QWORD *)a1 = v21; /*0x1006fdafc*/
        goto LABEL_28; /*0x1006fdaff*/
      }
    }
    else
    {
      tauri::Manager::get_webview_window::h1747e48e34798fb5(__src); /*0x1006fdc05*/
      if ( LODWORD(__src[0]) != 3 ) /*0x1006fdc11*/
      {
        memcpy(__dst, __src, sizeof(__dst)); /*0x1006fdc2d*/
        LODWORD(v30[9]) = __dst[17]; /*0x1006fdc38*/
        LODWORD(v30[1]) = 42; /*0x1006fdc3e*/
        LOBYTE(v30[0]) = 33; /*0x1006fdc48*/
        v25 = __src; /*0x1006fdc5d*/
        tao::platform_impl::platform::event_loop::Proxy$LT$T$GT$::send_event::h81f358db223dc68e(v29, __src, v30); /*0x1006fdc60*/
        if ( LOBYTE(v29[0]) != 40 ) /*0x1006fdc6c*/
        {
          v25 = v29; /*0x1006fdc75*/
          memcpy(v30, v29, sizeof(v30)); /*0x1006fdc84*/
          core::ptr::drop_in_place$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$::hbdd50d5f20be591e(v30); /*0x1006fdc8c*/
          v30[1] = 3; /*0x1006fdc91*/
          v30[0] = 0x8000000000000000LL; /*0x1006fdca1*/
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v30); /*0x1006fdcaf*/
        }
        core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(__dst, v25); /*0x1006fdcbb*/
        core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(&__dst[67]); /*0x1006fdcc7*/
      }
    }
    *(_BYTE *)(a1 + 8) = a4; /*0x1006fdccc*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006fdcd3*/
    goto LABEL_28; /*0x1006fdcd3*/
  }
  __dst[0] = v17; /*0x1006fdb04*/
  qmemcpy(&__dst[1], v30, 0x58u); /*0x1006fdb1e*/
  v29[0] = 0; /*0x1006fdb21*/
  v29[1] = 1; /*0x1006fdb2c*/
  v29[2] = 0; /*0x1006fdb37*/
  __src[2] = 1610612768; /*0x1006fdb42*/
  __src[0] = v29; /*0x1006fdb54*/
  __src[1] = &off_101969DD0; /*0x1006fdb62*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fdb77*/
                          __dst,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v31, &unk_101969E38, &off_101969E00); /*0x1006fdd51*/
  v31 = v29[0]; /*0x1006fdb92*/
  v32 = v29[1]; /*0x1006fdb96*/
  v33 = v29[2]; /*0x1006fdba1*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x1006fdbac*/
  *(_QWORD *)(a1 + 16) = v33; /*0x1006fdbb5*/
  v23 = v31; /*0x1006fdbb9*/
  v24 = v32; /*0x1006fdbbd*/
  *(_QWORD *)(a1 + 8) = v32; /*0x1006fdbc1*/
  *(_QWORD *)a1 = v23; /*0x1006fdbc5*/
  if ( !(_BYTE)v35 /*0x1006fdd6f*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, __src, v22, v24) )
  {
    *((_BYTE *)a3 + 8) = 1; /*0x1006fdd7c*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a3); /*0x1006fdbe4*/
LABEL_28:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v34); /*0x1006fdcd6*/
  return a1; /*0x1006fdce2*/
}