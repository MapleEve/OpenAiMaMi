// __ZN13codexmate_lib4core5voice7runtime7overlay25show_voice_search_overlay @ 0x1006f8360 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::overlay::show_voice_search_overlay::hd6eaa132172eee52(
        __int64 a1,
        _QWORD *a2,
        double result,
        double a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // r12
  void *v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // rsi
  char v16; // of
  volatile signed __int64 *v17; // r15
  __int64 v18; // rt0
  volatile signed __int64 *v19; // r12
  __int64 v20; // rt0
  __int64 v21; // rcx
  void *v22; // rax
  void *v23; // rbx
  _QWORD v24[77]; // [rsp+0h] [rbp-1320h] BYREF
  _QWORD v25[38]; // [rsp+268h] [rbp-10B8h] BYREF
  char v26; // [rsp+398h] [rbp-F88h]
  int v27; // [rsp+399h] [rbp-F87h]
  __int16 v28; // [rsp+39Dh] [rbp-F83h]
  char v29; // [rsp+39Fh] [rbp-F81h]
  _BYTE v30[176]; // [rsp+3A0h] [rbp-F80h] BYREF
  _BYTE v31[592]; // [rsp+450h] [rbp-ED0h] BYREF
  _QWORD __dst[135]; // [rsp+6A0h] [rbp-C80h] BYREF
  unsigned __int64 v33; // [rsp+AD8h] [rbp-848h] BYREF
  __int64 v34; // [rsp+AE0h] [rbp-840h] BYREF
  __int64 v35; // [rsp+AE8h] [rbp-838h]
  __int64 v36; // [rsp+AF0h] [rbp-830h]
  __int64 v37; // [rsp+AF8h] [rbp-828h]
  __int64 v38; // [rsp+B00h] [rbp-820h]
  __int64 v39; // [rsp+B08h] [rbp-818h]
  _BYTE v40[480]; // [rsp+B10h] [rbp-810h] BYREF
  _BYTE v41[360]; // [rsp+CF0h] [rbp-630h] BYREF
  __int64 __src[135]; // [rsp+E58h] [rbp-4C8h] BYREF
  _QWORD v43[3]; // [rsp+1290h] [rbp-90h] BYREF
  _QWORD v44[3]; // [rsp+12A8h] [rbp-78h] BYREF
  _QWORD *v45; // [rsp+12C0h] [rbp-60h]
  __int64 v46; // [rsp+12C8h] [rbp-58h]
  __int64 v47; // [rsp+12D0h] [rbp-50h]
  __int64 v48; // [rsp+12D8h] [rbp-48h]
  __int64 v49; // [rsp+12E0h] [rbp-40h]
  __int64 v50; // [rsp+12E8h] [rbp-38h]
  __int64 v51; // [rsp+12F0h] [rbp-30h]

  v25[18] = 0; /*0x1006f8374*/
  v6 = a2[1]; /*0x1006f8389*/
  v7 = a2[2]; /*0x1006f838d*/
  if ( v7 >= 0x20 ) /*0x1006f8395*/
    v8 = core::str::count::do_count_chars::h4875767a8f682eeb(v6, v7); /*0x1006f839e*/
  else
    v8 = core::str::count::char_count_general_case::h35f326d7c82e4f55(v6, v7); /*0x1006f8397*/
  v33 = v8; /*0x1006f83a3*/
  v9 = a2[4]; /*0x1006f83aa*/
  v10 = a2[5]; /*0x1006f83ae*/
  if ( v10 >= 0x20 ) /*0x1006f83b6*/
    v11 = core::str::count::do_count_chars::h4875767a8f682eeb(v9, v10); /*0x1006f83bf*/
  else
    v11 = core::str::count::char_count_general_case::h35f326d7c82e4f55(v9, v10); /*0x1006f83b8*/
  __dst[0] = v11; /*0x1006f83c4*/
  __src[0] = (__int64)&v33; /*0x1006f83d2*/
  __src[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1006f83e0*/
  __src[2] = (__int64)__dst; /*0x1006f83ee*/
  __src[3] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1006f83f5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v44, &unk_1017C4108, __src); /*0x1006f840e*/
  if ( v44[0] ) /*0x1006f841a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44[1], v44[0], 1); /*0x1006f8425*/
  v12 = (_QWORD *)tauri::Manager::state::hdb449afff486731a(a1); /*0x1006f8432*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v33, a2); /*0x1006f843f*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, a2 + 3); /*0x1006f8452*/
  __src[2] = v35; /*0x1006f845e*/
  __src[1] = v34; /*0x1006f8473*/
  __src[0] = v33; /*0x1006f847a*/
  __src[3] = __dst[0]; /*0x1006f848f*/
  __src[4] = __dst[1]; /*0x1006f8496*/
  __src[5] = __dst[2]; /*0x1006f84a4*/
  codexmate_lib::core::voice::runtime::overlay::VoiceSearchResultState::store::h6eda1f6a3378cea0(v12, __src); /*0x1006f84b5*/
  tauri::Manager::get_webview_window::h1747e48e34798fb5(__src); /*0x1006f84d0*/
  if ( LODWORD(__src[0]) == 3 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, a1); /*0x1006f84e2*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1006f84f1*/
    if ( !v13 ) /*0x1006f84f9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x1006f8ad0*/
    qmemcpy(v13, "index.html", 10); /*0x1006f8509*/
    __dst[1] = 10; /*0x1006f8512*/
    __dst[2] = v13; /*0x1006f851d*/
    __dst[3] = 10; /*0x1006f8524*/
    __dst[0] = 1; /*0x1006f852f*/
    tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::new::h19859b2eb47061c2(__src); /*0x1006f8557*/
    memcpy(__dst, __src, 0x1E8u); /*0x1006f8572*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::title::hda1044b6a8f8e720(v31, __dst); /*0x1006f858d*/
    memcpy(__src, v31, 0x1E8u); /*0x1006f85a8*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1006f85bf*/
    memcpy(__src, __dst, 0x1E8u); /*0x1006f85cf*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::inner_size::hca0bac5172724d08(v31, __src); /*0x1006f85ee*/
    v45 = a2 + 3; /*0x1006f85f3*/
    memcpy(__dst, v31, 0x1E8u); /*0x1006f860d*/
    memcpy(__src, __dst, sizeof(__src)); /*0x1006f8624*/
    memcpy(__dst, __src, 0x1E8u); /*0x1006f863b*/
    result = 0.0; /*0x1006f8647*/
    a4 = 0.0; /*0x1006f864a*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::position::hb123cd8e68e8cce4(v31, __dst); /*0x1006f8650*/
    memcpy(__src, v31, 0x1E8u); /*0x1006f866b*/
    memcpy(v25, __src, sizeof(v25)); /*0x1006f8682*/
    memcpy(v24, &__src[39], 0x264u); /*0x1006f86a4*/
    memcpy(&v31[437], (char *)&__src[115] + 5, 0x9Bu); /*0x1006f86bc*/
    v26 = 1; /*0x1006f86c1*/
    v27 = *(_DWORD *)((char *)&__src[38] + 1); /*0x1006f86c8*/
    v28 = 256; /*0x1006f86cf*/
    v29 = 0; /*0x1006f86d8*/
    memcpy(v30, v24, sizeof(v30)); /*0x1006f86ee*/
    memcpy(v31, &v24[22], 0x1B4u); /*0x1006f8709*/
    v31[436] = 1; /*0x1006f870e*/
    tauri::window::WindowBuilder$LT$R$C$M$GT$::with_webview::h6a90cf786cbcb2cd(__src, v25); /*0x1006f8722*/
    v14 = v45; /*0x1006f8727*/
    v46 = __src[1]; /*0x1006f8739*/
    v47 = __src[2]; /*0x1006f8744*/
    v48 = __src[3]; /*0x1006f874f*/
    v49 = __src[4]; /*0x1006f875a*/
    v50 = __src[5]; /*0x1006f8765*/
    v51 = __src[6]; /*0x1006f8770*/
    if ( __src[0] == 3 )
    {
      v34 = v46; /*0x1006f878d*/
      v35 = v47; /*0x1006f8794*/
      v36 = v48; /*0x1006f879f*/
      v37 = v49; /*0x1006f87aa*/
      v38 = v50; /*0x1006f87b5*/
      v39 = v51; /*0x1006f87c0*/
      v33 = 3; /*0x1006f87c7*/
      __dst[0] = &v34; /*0x1006f87d2*/
      __src[0] = (__int64)__dst; /*0x1006f87e0*/
      __src[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3735fa2474f551a6; /*0x1006f87ee*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        v43,
        "\x06error=\xC0\x1Cdebug bundle worker failed: \xC0\tcategory=\xC0src/commands/debug_report.rs",
        __src);
      v15 = v43[0]; /*0x1006f880f*/
      if ( v43[0] ) /*0x1006f8819*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43[1], v43[0], 1); /*0x1006f8827*/
      if ( (_DWORD)v33 == 3 ) /*0x1006f8833*/
      {
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v34); /*0x1006f883c*/
      }
      else
      {
        core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(&v33, v15); /*0x1006f8a66*/
        core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(v41); /*0x1006f8a72*/
      }
      if ( *a2 ) /*0x1006f8a77*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[1], *a2, 1); /*0x1006f8a88*/
      if ( *v14 ) /*0x1006f8a8d*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2[4], *v14, 1); /*0x1006f8a9e*/
      return result; /*0x1006f8a9e*/
    }
    memcpy(__dst, &__src[7], 0x348u); /*0x1006f8879*/
    v34 = v46; /*0x1006f8886*/
    v35 = v47; /*0x1006f888d*/
    v36 = v48; /*0x1006f8898*/
    v37 = v49; /*0x1006f88a3*/
    v38 = v50; /*0x1006f88ae*/
    v39 = v51; /*0x1006f88b9*/
    memcpy(v40, __dst, sizeof(v40)); /*0x1006f88cf*/
    memcpy(v41, &__dst[60], sizeof(v41)); /*0x1006f88ea*/
    v33 = __src[0]; /*0x1006f88ef*/
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(&v33, &__dst[60]); /*0x1006f88fd*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(v41); /*0x1006f8905*/
  }
  else
  {
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(__src, a1); /*0x1006f884d*/
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(&__src[67]); /*0x1006f8859*/
  }
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__dst, a1); /*0x1006f8914*/
  v17 = *(volatile signed __int64 **)(a1 + 136); /*0x1006f8919*/
  v18 = _InterlockedIncrement64(v17); /*0x1006f8920*/
  if ( (v18 < 0) ^ v16 | (v18 == 0) /*0x1006f8936*/
    || (v19 = *(volatile signed __int64 **)(a1 + 144), v20 = _InterlockedIncrement64(v19), (v20 < 0) ^ v16 | (v20 == 0)) )
  {
    BUG(); /*0x1006f8ad5*/
  }
  memcpy(__src, __dst, 0x88u); /*0x1006f894f*/
  __src[17] = (__int64)v17; /*0x1006f8954*/
  __src[18] = (__int64)v19; /*0x1006f895b*/
  v21 = a2[1]; /*0x1006f8965*/
  __src[19] = *a2; /*0x1006f8969*/
  __src[20] = v21; /*0x1006f8970*/
  __src[21] = a2[2]; /*0x1006f897b*/
  __src[22] = a2[3]; /*0x1006f8986*/
  __src[23] = a2[4]; /*0x1006f8991*/
  __src[24] = a2[5]; /*0x1006f899c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, __dst); /*0x1006f89a3*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(200, 8); /*0x1006f89b2*/
  if ( !v22 ) /*0x1006f89ba*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 200); /*0x1006f8abf*/
  v23 = v22; /*0x1006f89c0*/
  memcpy(v22, __src, 0xC8u); /*0x1006f89d2*/
  __dst[1] = v23; /*0x1006f89d7*/
  __dst[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1286; /*0x1006f89e5*/
  LOBYTE(__dst[0]) = 28; /*0x1006f89ec*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(v24, a1, __dst, result, a4); /*0x1006f8a04*/
  if ( LODWORD(v24[0]) != 19 ) /*0x1006f8a10*/
  {
    v36 = v24[2]; /*0x1006f8a1d*/
    v35 = v24[1]; /*0x1006f8a32*/
    v34 = v24[0]; /*0x1006f8a39*/
    v33 = 0x8000000000000000LL; /*0x1006f8a4a*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v33); /*0x1006f8a58*/
  }
  return result; /*0x1006f8aa3*/
}