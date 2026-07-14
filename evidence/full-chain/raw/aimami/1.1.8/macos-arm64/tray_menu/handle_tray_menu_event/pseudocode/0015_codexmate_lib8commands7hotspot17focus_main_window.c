// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x10030fa20 depth=1
// codexmate_lib8commands7hotspot17focus_main_window
_QWORD *__fastcall codexmate_lib::commands::hotspot::focus_main_window::hc921ac903a91f29c(_QWORD *a1, __int64 a2)
{
  char v2; // of
  volatile signed __int64 *v3; // r15
  __int64 v4; // rt0
  volatile signed __int64 *v5; // r12
  __int64 v6; // rt0
  void *v7; // rax
  void *v8; // r15
  _QWORD __dst[20]; // [rsp+8h] [rbp-188h] BYREF
  _QWORD __src[22]; // [rsp+A8h] [rbp-E8h] BYREF
  _QWORD v12[7]; // [rsp+158h] [rbp-38h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87ba61d57448fd51(__src, a2); /*0x10030fa3f*/
  v3 = *(volatile signed __int64 **)(a2 + 136); /*0x10030fa44*/
  v4 = _InterlockedIncrement64(v3); /*0x10030fa4b*/
  if ( (v4 < 0) ^ v2 | (v4 == 0) /*0x10030fa61*/
    || (v5 = *(volatile signed __int64 **)(a2 + 144), v6 = _InterlockedIncrement64(v5), (v6 < 0) ^ v2 | (v6 == 0)) )
  {
    BUG(); /*0x10030fb68*/
  }
  memcpy(__dst, __src, 0x88u); /*0x10030fa7a*/
  __dst[17] = v3; /*0x10030fa7f*/
  __dst[18] = v5; /*0x10030fa86*/
  LOBYTE(__dst[19]) = 1; /*0x10030fa8d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst); /*0x10030fa94*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(160, 8); /*0x10030faa3*/
  if ( !v7 ) /*0x10030faab*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 160); /*0x10030fb63*/
  v8 = v7; /*0x10030fab1*/
  memcpy(v7, __dst, 0xA0u); /*0x10030fac3*/
  __src[1] = v8; /*0x10030fac8*/
  __src[2] = &anon_fdfbeb4f975d8e02b9c40da81dc33589_845; /*0x10030fad6*/
  LOBYTE(__src[0]) = 28; /*0x10030fadd*/
  tauri_runtime_wry::send_user_message::h77ed2756619c4a08(v12, a2, __src); /*0x10030faf2*/
  if ( LODWORD(v12[0]) != 19 ) /*0x10030fb05*/
  {
    __src[3] = v12[2]; /*0x10030fb0b*/
    __src[2] = v12[1]; /*0x10030fb1a*/
    __src[1] = v12[0]; /*0x10030fb21*/
    __src[0] = 0x8000000000000000LL; /*0x10030fb28*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(__src); /*0x10030fb36*/
  }
  *a1 = 0x8000000000000000LL; /*0x10030fb3b*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a2); /*0x10030fb41*/
  return a1; /*0x10030fb49*/
}