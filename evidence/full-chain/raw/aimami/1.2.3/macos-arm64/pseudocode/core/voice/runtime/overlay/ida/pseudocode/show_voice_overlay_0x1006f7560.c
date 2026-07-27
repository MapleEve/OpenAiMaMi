// __ZN13codexmate_lib4core5voice7runtime7overlay18show_voice_overlay @ 0x1006f7560 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::overlay::show_voice_overlay::h4dc30be668a4a289(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // r12
  __int64 result; // rax
  __int64 *v12; // rdi
  __int64 v13; // rsi
  void *v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rdi
  char v17; // of
  volatile signed __int64 *v18; // r14
  __int64 v19; // rt0
  volatile signed __int64 *v20; // r15
  __int64 v21; // rt0
  void *v22; // rax
  void *v23; // r14
  char v24; // al
  _BYTE v25[612]; // [rsp+0h] [rbp-1320h] BYREF
  _QWORD v26[38]; // [rsp+268h] [rbp-10B8h] BYREF
  char v27; // [rsp+398h] [rbp-F88h]
  int v28; // [rsp+399h] [rbp-F87h]
  __int16 v29; // [rsp+39Dh] [rbp-F83h]
  char v30; // [rsp+39Fh] [rbp-F81h]
  _BYTE v31[176]; // [rsp+3A0h] [rbp-F80h] BYREF
  _BYTE v32[592]; // [rsp+450h] [rbp-ED0h] BYREF
  _QWORD __dst[135]; // [rsp+6A0h] [rbp-C80h] BYREF
  __int64 v34; // [rsp+AD8h] [rbp-848h] BYREF
  __int64 v35; // [rsp+AE0h] [rbp-840h] BYREF
  __int64 v36; // [rsp+AE8h] [rbp-838h]
  __int64 v37; // [rsp+AF0h] [rbp-830h]
  __int64 v38; // [rsp+AF8h] [rbp-828h]
  __int64 v39; // [rsp+B00h] [rbp-820h]
  __int64 v40; // [rsp+B08h] [rbp-818h]
  _BYTE v41[840]; // [rsp+B10h] [rbp-810h] BYREF
  _QWORD __src[135]; // [rsp+E58h] [rbp-4C8h] BYREF
  _QWORD v43[3]; // [rsp+1290h] [rbp-90h] BYREF
  __int64 v44; // [rsp+12A8h] [rbp-78h] BYREF
  __int64 *v45; // [rsp+12B0h] [rbp-70h]
  __int64 v46; // [rsp+12C0h] [rbp-60h]
  __int64 v47; // [rsp+12C8h] [rbp-58h]
  __int64 v48; // [rsp+12D0h] [rbp-50h]
  __int64 v49; // [rsp+12D8h] [rbp-48h]
  __int64 v50; // [rsp+12E0h] [rbp-40h]
  __int64 v51; // [rsp+12E8h] [rbp-38h]
  bool v52; // [rsp+12F7h] [rbp-29h] BYREF

  v26[18] = 0; /*0x1006f7574*/
  v5 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x1006f7586*/
  v6 = v5; /*0x1006f758b*/
  v7 = *(_QWORD *)(v5 + 32); /*0x1006f758e*/
  if ( !v7 ) /*0x1006f7595*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v5 + 32); /*0x1006f7c42*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1006f75a5*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006f75b4*/
  {
    if ( *(_BYTE *)(v6 + 40) ) /*0x1006f75c0*/
      goto LABEL_5; /*0x1006f75c7*/
    v10 = *(_BYTE *)(v6 + 904) == 3; /*0x1006f75ef*/
LABEL_8:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006f7ca6*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9) )
    {
      *(_BYTE *)(v6 + 40) = 1; /*0x1006f7cb3*/
    }
    goto LABEL_9; /*0x1006f7cb8*/
  }
  v24 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9); /*0x1006f7c4a*/
  v9 = *(unsigned __int8 *)(v6 + 40); /*0x1006f7c4f*/
  if ( (_BYTE)v9 ) /*0x1006f7c56*/
  {
    if ( !v24 ) /*0x1006f7c5a*/
    {
LABEL_6:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v6 + 32)); /*0x1006f75dc*/
      goto LABEL_10; /*0x1006f75e5*/
    }
LABEL_5:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006f7c76*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9) )
    {
      *(_BYTE *)(v6 + 40) = 1; /*0x1006f7c83*/
    }
    goto LABEL_6; /*0x1006f7c88*/
  }
  v10 = *(_BYTE *)(v6 + 904) == 3; /*0x1006f7c95*/
  if ( v24 ) /*0x1006f7c9b*/
    goto LABEL_8; /*0x1006f7c9b*/
LABEL_9:
  result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v6 + 32)); /*0x1006f75ff*/
  if ( v10 ) /*0x1006f760b*/
    return result; /*0x1006f760b*/
LABEL_10:
  tauri::Manager::get_webview_window::h1747e48e34798fb5(__src); /*0x1006f7611*/
  v52 = __src[0] == 3; /*0x1006f7637*/
  if ( LODWORD(__src[0]) != 3 ) /*0x1006f763e*/
  {
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(__src, a1); /*0x1006f7647*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(&__src[67]); /*0x1006f7653*/
  }
  __src[0] = &v52; /*0x1006f765c*/
  __src[1] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1006f766a*/
  v12 = &v44; /*0x1006f7678*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v44, &unk_1017C40F9, __src); /*0x1006f7683*/
  v13 = v44; /*0x1006f7688*/
  if ( v44 ) /*0x1006f768f*/
  {
    v12 = v45; /*0x1006f7691*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x1006f769a*/
  }
  if ( v52 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x1006f76a9*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1006f76b8*/
    if ( !v14 ) /*0x1006f76c0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x1006f7cc7*/
    qmemcpy(v14, "index.html", 10); /*0x1006f76d0*/
    tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::new::h19859b2eb47061c2(__src); /*0x1006f7721*/
    memcpy(__dst, __src, 0x1E8u); /*0x1006f7738*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::title::hda1044b6a8f8e720(v32, __dst); /*0x1006f774e*/
    memcpy(__src, v32, 0x1E8u); /*0x1006f7762*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1006f7772*/
    memcpy(__src, __dst, 0x1E8u); /*0x1006f7782*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::inner_size::hca0bac5172724d08(v32, __src); /*0x1006f77a1*/
    memcpy(__dst, v32, 0x1E8u); /*0x1006f77bc*/
    memcpy(__src, __dst, sizeof(__src)); /*0x1006f77d3*/
    memcpy(__dst, __src, 0x1E8u); /*0x1006f77e3*/
    a3 = 0.0; /*0x1006f77ef*/
    a4 = 0.0; /*0x1006f77f2*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::position::hb123cd8e68e8cce4(v32, __dst); /*0x1006f77f8*/
    memcpy(__src, v32, 0x1E8u); /*0x1006f7813*/
    memcpy(v26, __src, sizeof(v26)); /*0x1006f782a*/
    memcpy(v25, &__src[39], sizeof(v25)); /*0x1006f784c*/
    memcpy(&v32[437], (char *)&__src[115] + 5, 0x9Bu); /*0x1006f7864*/
    v27 = 0; /*0x1006f7869*/
    v28 = *(_DWORD *)((char *)&__src[38] + 1); /*0x1006f7870*/
    v29 = 256; /*0x1006f7877*/
    v30 = 0; /*0x1006f7880*/
    memcpy(v31, v25, sizeof(v31)); /*0x1006f7896*/
    memcpy(v32, &v25[176], 0x1B4u); /*0x1006f78b1*/
    v32[436] = 1; /*0x1006f78b6*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::with_webview::h6a90cf786cbcb2cd(__src, v26); /*0x1006f78ca*/
    v46 = __src[1]; /*0x1006f78dd*/
    v47 = __src[2]; /*0x1006f78e8*/
    v48 = __src[3]; /*0x1006f78f3*/
    v49 = __src[4]; /*0x1006f78fe*/
    v50 = __src[5]; /*0x1006f7909*/
    v51 = __src[6]; /*0x1006f7914*/
    if ( __src[0] == 3 )
    {
      v35 = v46; /*0x1006f7931*/
      v36 = v47; /*0x1006f7938*/
      v37 = v48; /*0x1006f7943*/
      v38 = v49; /*0x1006f794e*/
      v39 = v50; /*0x1006f7959*/
      v40 = v51; /*0x1006f7964*/
      v34 = 3; /*0x1006f796b*/
      __dst[0] = &v35; /*0x1006f7976*/
      __src[0] = __dst; /*0x1006f7984*/
      __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3735fa2474f551a6; /*0x1006f7992*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        v43,
        "\x06error=\xC0\x1Cdebug bundle worker failed: \xC0\tcategory=\xC0src/commands/debug_report.rs",
        __src);
      v15 = v43[0]; /*0x1006f79b3*/
      if ( v43[0] ) /*0x1006f79bd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43[1], v43[0], 1); /*0x1006f79cb*/
      if ( (_DWORD)v34 == 3 ) /*0x1006f79d7*/
      {
        v16 = &v35; /*0x1006f79dd*/
        return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v16); /*0x1006f7c0d*/
      }
      core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(&v34, v15); /*0x1006f7c16*/
      return core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(&v41[480]); /*0x1006f7c22*/
    }
    memcpy(__dst, &__src[7], 0x348u); /*0x1006f79fb*/
    v35 = v46; /*0x1006f7a08*/
    v36 = v47; /*0x1006f7a0f*/
    v37 = v48; /*0x1006f7a1a*/
    v38 = v49; /*0x1006f7a25*/
    v39 = v50; /*0x1006f7a30*/
    v40 = v51; /*0x1006f7a3b*/
    memcpy(v41, __dst, 0x1E0u); /*0x1006f7a54*/
    memcpy(&v41[480], &__dst[60], 0x168u); /*0x1006f7a6c*/
    v34 = __src[0]; /*0x1006f7a71*/
    __src[6] = v51; /*0x1006f7a7f*/
    __src[5] = v50; /*0x1006f7a8d*/
    __src[4] = v49; /*0x1006f7a9b*/
    __src[3] = v48; /*0x1006f7aa9*/
    __src[2] = v47; /*0x1006f7abe*/
    __src[1] = v46; /*0x1006f7ac5*/
    memcpy(&__src[7], v41, 0x348u); /*0x1006f7adb*/
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(__src, v41); /*0x1006f7aee*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(&__src[67]); /*0x1006f7afa*/
  }
  _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::overlay::OVERLAY_GENERATION::h6f99dc283d7029eb); /*0x1006f7aff*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006f7b11*/
  v18 = *(volatile signed __int64 **)(a1 + 136); /*0x1006f7b16*/
  v19 = _InterlockedIncrement64(v18); /*0x1006f7b1d*/
  if ( (v19 < 0) ^ v17 | (v19 == 0) /*0x1006f7b32*/
    || (v20 = *(volatile signed __int64 **)(a1 + 144), v21 = _InterlockedIncrement64(v20), (v21 < 0) ^ v17 | (v21 == 0)) )
  {
    BUG(); /*0x1006f7c74*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1006f7b4b*/
  __dst[17] = v18; /*0x1006f7b50*/
  __dst[18] = v20; /*0x1006f7b57*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006f7b5e*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(152, 8); /*0x1006f7b6d*/
  if ( !v22 ) /*0x1006f7b75*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 152); /*0x1006f7c6f*/
  v23 = v22; /*0x1006f7b7b*/
  memcpy(v22, __dst, 0x98u); /*0x1006f7b8d*/
  __src[1] = v23; /*0x1006f7b92*/
  __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1283; /*0x1006f7ba0*/
  LOBYTE(__src[0]) = 28; /*0x1006f7ba7*/
  result = tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v34, a1, __src, a3, a4); /*0x1006f7bbf*/
  if ( (_DWORD)v34 != 19 ) /*0x1006f7bcb*/
  {
    __src[3] = v36; /*0x1006f7bd4*/
    __src[2] = v35; /*0x1006f7be9*/
    __src[1] = v34; /*0x1006f7bf0*/
    __src[0] = 0x8000000000000000LL; /*0x1006f7bfa*/
    v16 = __src; /*0x1006f7c01*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(v16); /*0x1006f7c01*/
  }
  return result; /*0x1006f7c27*/
}