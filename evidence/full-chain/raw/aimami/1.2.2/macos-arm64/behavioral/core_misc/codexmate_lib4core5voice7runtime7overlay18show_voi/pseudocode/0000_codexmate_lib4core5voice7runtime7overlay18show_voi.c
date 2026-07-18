// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x1005600b0 d=0
int __fastcall codexmate_lib::core::voice::runtime::overlay::show_voice_overlay::hf117215e3b6418e8(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  pthread_mutex_t *v4; // rdi
  bool v5; // r12
  int result; // eax
  void *v7; // rax
  size_t v8; // rsi
  __int64 *v9; // rdi
  char v10; // of
  __int64 v11; // rt0
  volatile signed __int64 *v12; // r14
  __int64 v13; // rt0
  void *v14; // rax
  void *v15; // r14
  bool v16; // al
  __int64 v17; // [rsp+8h] [rbp-C58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-C50h] BYREF
  __int64 v19; // [rsp+18h] [rbp-C48h]
  __int64 v20; // [rsp+20h] [rbp-C40h]
  __int64 v21; // [rsp+28h] [rbp-C38h]
  __int64 v22; // [rsp+30h] [rbp-C30h]
  __int64 v23; // [rsp+38h] [rbp-C28h]
  _BYTE v24[840]; // [rsp+40h] [rbp-C20h] BYREF
  _QWORD __dst[135]; // [rsp+388h] [rbp-8D8h] BYREF
  _QWORD __src[135]; // [rsp+7C0h] [rbp-4A0h] BYREF
  size_t v27; // [rsp+BF8h] [rbp-68h] BYREF
  size_t v28; // [rsp+C10h] [rbp-50h] BYREF
  volatile signed __int64 *v29; // [rsp+C28h] [rbp-38h]
  bool v30; // [rsp+C37h] [rbp-29h] BYREF

  v29 = *(volatile signed __int64 **)(a1 + 136); /*0x1005600ce*/
  v2 = tauri::state::StateManager::try_get::h2b9974199800432e(*((_QWORD *)v29 + 609) + 16LL); /*0x1005600dd*/
  if ( !v2 ) /*0x1005600e5*/
  {
    __dst[0] = &anon_f7eb15af4f65309b05b1b96532dfcdc2_758; /*0x1005605be*/
    __dst[1] = 56; /*0x1005605c5*/
    __src[0] = __dst; /*0x1005605d7*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1005605e5*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100560601*/
      (__int64)&anon_f7eb15af4f65309b05b1b96532dfcdc2_1030,
      (__int64)__src,
      (__int64)&anon_f7eb15af4f65309b05b1b96532dfcdc2_1031);
  }
  v3 = v2; /*0x1005600eb*/
  v4 = *(pthread_mutex_t **)(v2 + 32); /*0x1005600ee*/
  if ( !v4 ) /*0x1005600f5*/
    v4 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa((volatile signed __int64 *)(v2 + 32)); /*0x10056060f*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x100560105*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100560114*/
  {
    if ( *(_BYTE *)(v3 + 40) ) /*0x100560120*/
      goto LABEL_6; /*0x100560127*/
    v5 = *(_BYTE *)(v3 + 904) == 3; /*0x10056014f*/
LABEL_9:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100560673*/
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      *(_BYTE *)(v3 + 40) = 1; /*0x100560680*/
    }
    goto LABEL_10; /*0x100560685*/
  }
  v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100560617*/
  if ( *(_BYTE *)(v3 + 40) ) /*0x10056061c*/
  {
    if ( !v16 ) /*0x100560627*/
    {
LABEL_7:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)(v3 + 32)); /*0x10056013c*/
      goto LABEL_11; /*0x100560145*/
    }
LABEL_6:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100560643*/
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      *(_BYTE *)(v3 + 40) = 1; /*0x100560650*/
    }
    goto LABEL_7; /*0x100560655*/
  }
  v5 = *(_BYTE *)(v3 + 904) == 3; /*0x100560662*/
  if ( v16 ) /*0x100560668*/
    goto LABEL_9; /*0x100560668*/
LABEL_10:
  result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)(v3 + 32)); /*0x10056015f*/
  if ( v5 ) /*0x10056016b*/
    return result; /*0x10056016b*/
LABEL_11:
  tauri::Manager::get_webview_window::he0735f023a9a1cd3(__src); /*0x100560171*/
  v30 = __src[0] == 3; /*0x100560197*/
  if ( LODWORD(__src[0]) != 3 ) /*0x10056019e*/
  {
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::hfe47e84740130a13(__src, a1); /*0x1005601a7*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h5bd7b95035dcc5b0(&__src[67]); /*0x1005601b3*/
  }
  __src[0] = &v30; /*0x1005601bc*/
  __src[1] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005601ca*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v28, (unsigned __int8 *)&loc_1016F3885, (unsigned __int64)__src); /*0x1005601e3*/
  if ( v28 ) /*0x1005601ef*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005601fa*/
  if ( v30 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100560209*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x100560218*/
    if ( !v7 ) /*0x100560220*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100560694*/
    qmemcpy(v7, "index.html", 10); /*0x100560230*/
    __dst[1] = 10; /*0x100560239*/
    __dst[2] = v7; /*0x100560244*/
    __dst[3] = 10; /*0x10056024b*/
    __dst[0] = 1; /*0x100560256*/
    tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::new::h62f6dc3c9d9f2a15(__src); /*0x10056027e*/
    if ( __src[13] ) /*0x10056028d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10056029b*/
    __src[13] = 0; /*0x1005602a0*/
    __src[14] = 1; /*0x1005602ab*/
    __src[15] = 0; /*0x1005602b6*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1005602d7*/
    tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::inner_size::hf378bab6e794452e(__src, __dst); /*0x1005602f9*/
    tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::position::h86000f74c4553f64(__dst, __src); /*0x100560304*/
    HIBYTE(__dst[38]) = 0; /*0x100560310*/
    memcpy(__src, __dst, 0x130u); /*0x100560322*/
    memcpy((char *)&__src[38] + 7, (char *)&__dst[38] + 7, 0x265u); /*0x10056033d*/
    memcpy((char *)&__src[115] + 5, (char *)&__dst[115] + 5, 0x9Bu); /*0x100560355*/
    LOBYTE(__src[38]) = 0; /*0x10056035a*/
    *(_DWORD *)((char *)&__src[38] + 1) = *(_DWORD *)((char *)&__dst[38] + 1); /*0x100560361*/
    *(_WORD *)((char *)&__src[38] + 5) = 256; /*0x100560368*/
    BYTE4(__src[115]) = 1; /*0x100560371*/
    tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::build::hc39030aceba83fed( /*0x100560382*/
      &v17,
      __src,
      432.0,
      492.0);
    if ( v17 == 3 )
    {
      __dst[0] = &v18; /*0x10056039b*/
      __src[0] = __dst; /*0x1005603a2*/
      __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hea18e06c7fd244d2; /*0x1005603b0*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        &v27,
        (unsigned __int8 *)"\x06error=\xC0\x1Cdebug bundle worker failed: \xC0\tcategory=\xC0src/commands/debug_report.rs",
        (unsigned __int64)__src);
      v8 = v27; /*0x1005603ce*/
      if ( v27 ) /*0x1005603d5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005603e0*/
      if ( (_DWORD)v17 == 3 ) /*0x1005603ec*/
      {
        v9 = &v18; /*0x1005603f2*/
        return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h6c215028dbad9df8(v9); /*0x10056058b*/
      }
      core::ptr::drop_in_place$LT$tauri..window..Window$GT$::hfe47e84740130a13(&v17, v8); /*0x100560594*/
      return core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h5bd7b95035dcc5b0(&v24[480]); /*0x1005605a0*/
    }
    __src[6] = v23; /*0x1005603fe*/
    __src[5] = v22; /*0x100560409*/
    __src[4] = v21; /*0x100560414*/
    __src[3] = v20; /*0x10056041f*/
    __src[2] = v19; /*0x10056042d*/
    __src[1] = v18; /*0x100560434*/
    memcpy(&__src[7], v24, 0x348u); /*0x10056044e*/
    __src[0] = v17; /*0x100560453*/
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::hfe47e84740130a13(__src, v24); /*0x100560461*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h5bd7b95035dcc5b0(&__src[67]); /*0x10056046d*/
  }
  _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::overlay::OVERLAY_GENERATION::h073d0448bbd27983); /*0x10056047c*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf6e473e13a6bc9af( /*0x10056048e*/
    (__int64)__src,
    a1);
  v11 = _InterlockedIncrement64(v29); /*0x100560497*/
  if ( (v11 < 0) ^ v10 | (v11 == 0) /*0x1005604ac*/
    || (v12 = *(volatile signed __int64 **)(a1 + 144), v13 = _InterlockedIncrement64(v12), (v13 < 0) ^ v10 | (v13 == 0)) )
  {
    BUG(); /*0x100560641*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1005604c5*/
  __dst[17] = v29; /*0x1005604ce*/
  __dst[18] = v12; /*0x1005604d5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005604dc*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x98u, 8u); /*0x1005604eb*/
  if ( !v14 ) /*0x1005604f3*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 152); /*0x10056063c*/
  v15 = v14; /*0x1005604f9*/
  memcpy(v14, __dst, 0x98u); /*0x10056050b*/
  __src[1] = v15; /*0x100560510*/
  __src[2] = &off_101894C18; /*0x10056051e*/
  LOBYTE(__src[0]) = 28; /*0x100560525*/
  result = tauri_runtime_wry::send_user_message::hfc7290eb007ad3a4(&v17, a1, __src); /*0x10056053d*/
  if ( (_DWORD)v17 != 19 ) /*0x100560549*/
  {
    __src[3] = v19; /*0x100560552*/
    __src[2] = v18; /*0x100560567*/
    __src[1] = v17; /*0x10056056e*/
    __src[0] = 0x8000000000000000LL; /*0x100560578*/
    v9 = __src; /*0x10056057f*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h6c215028dbad9df8(v9); /*0x10056057f*/
  }
  return result; /*0x1005605a5*/
}