// __ZN13codexmate_lib8commands7hotspot21create_hotspot_window @ 0x1006fded0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::hotspot::create_hotspot_window::h668f40b5e1bf1f30(__int64 a1)
{
  void *v1; // rax
  _QWORD *result; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  char v6; // of
  volatile signed __int64 *v7; // r14
  __int64 v8; // rt0
  volatile signed __int64 *v9; // r15
  __int64 v10; // rt0
  void *v11; // rax
  void *v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  _BYTE v16[612]; // [rsp+8h] [rbp-1688h] BYREF
  _QWORD v17[105]; // [rsp+270h] [rbp-1420h] BYREF
  _QWORD v18[38]; // [rsp+5B8h] [rbp-10D8h] BYREF
  char v19; // [rsp+6E8h] [rbp-FA8h]
  int v20; // [rsp+6E9h] [rbp-FA7h]
  __int16 v21; // [rsp+6EDh] [rbp-FA3h]
  char v22; // [rsp+6EFh] [rbp-FA1h]
  _BYTE v23[176]; // [rsp+6F0h] [rbp-FA0h] BYREF
  _BYTE v24[592]; // [rsp+7A0h] [rbp-EF0h] BYREF
  _QWORD __dst[135]; // [rsp+9F0h] [rbp-CA0h] BYREF
  _QWORD v26[7]; // [rsp+E28h] [rbp-868h] BYREF
  _DWORD v27[210]; // [rsp+E60h] [rbp-830h] BYREF
  _QWORD __src[137]; // [rsp+11A8h] [rbp-4E8h] BYREF
  __int64 v29; // [rsp+15F0h] [rbp-A0h]
  __int64 v30; // [rsp+15F8h] [rbp-98h]
  __int64 v31; // [rsp+1600h] [rbp-90h]
  __int64 v32; // [rsp+1608h] [rbp-88h]
  __int64 v33; // [rsp+1610h] [rbp-80h]
  __int64 v34; // [rsp+1618h] [rbp-78h]
  __int64 v35; // [rsp+1620h] [rbp-70h]
  __int64 v36; // [rsp+1628h] [rbp-68h]
  __int64 v37; // [rsp+1630h] [rbp-60h]
  __int64 v38; // [rsp+1638h] [rbp-58h]
  __int64 v39; // [rsp+1640h] [rbp-50h]
  __int64 v40; // [rsp+1648h] [rbp-48h]
  __int64 v41; // [rsp+1650h] [rbp-40h]
  __int64 v42; // [rsp+1658h] [rbp-38h]
  __int64 v43; // [rsp+1660h] [rbp-30h]
  __int64 v44; // [rsp+1668h] [rbp-28h]

  v18[23] = 0; /*0x1006fdee2*/
  tauri::Manager::get_webview_window::h1747e48e34798fb5(__src); /*0x1006fdf0a*/
  if ( LODWORD(__src[0]) != 3 ) /*0x1006fdf16*/
  {
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(__src, a1); /*0x1006fe266*/
    v4 = &__src[67]; /*0x1006fe26b*/
LABEL_15:
    core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(v4); /*0x1006fe536*/
    return nullptr; /*0x1006fe53b*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, a1); /*0x1006fdf1c*/
  v1 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1006fdf2b*/
  if ( !v1 ) /*0x1006fdf33*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x1006fe64d*/
  qmemcpy(v1, "index.html", 10); /*0x1006fdf43*/
  tauri::webview::webview_window::WebviewWindowBuilder$LT$R$C$M$GT$::new::h19859b2eb47061c2(__src); /*0x1006fdf94*/
  memcpy(__dst, __src, 0x1E8u); /*0x1006fdfab*/
  tauri::window::WindowBuilder$LT$R$C$M$GT$::title::hda1044b6a8f8e720(v24, __dst); /*0x1006fdfc1*/
  memcpy(__src, v24, 0x1E8u); /*0x1006fdfd5*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fdfe5*/
  memcpy(__src, __dst, 0x1E8u); /*0x1006fdff5*/
  tauri::window::WindowBuilder$LT$R$C$M$GT$::inner_size::hca0bac5172724d08(v24, __src); /*0x1006fe014*/
  memcpy(__dst, v24, 0x1E8u); /*0x1006fe02f*/
  memcpy(__src, __dst, 0x438u); /*0x1006fe046*/
  memcpy(__dst, __src, 0x1E8u); /*0x1006fe056*/
  tauri::window::WindowBuilder$LT$R$C$M$GT$::position::hb123cd8e68e8cce4(v24, __dst); /*0x1006fe06b*/
  memcpy(__src, v24, 0x1E8u); /*0x1006fe07f*/
  memcpy(v18, __src, sizeof(v18)); /*0x1006fe096*/
  memcpy(v16, &__src[39], sizeof(v16)); /*0x1006fe0b8*/
  memcpy(&v24[437], (char *)&__src[115] + 5, 0x9Bu); /*0x1006fe0d0*/
  v19 = 0; /*0x1006fe0d5*/
  v20 = *(_DWORD *)((char *)&__src[38] + 1); /*0x1006fe0dc*/
  v21 = 256; /*0x1006fe0e3*/
  v22 = 0; /*0x1006fe0ec*/
  memcpy(v23, v16, sizeof(v23)); /*0x1006fe102*/
  memcpy(v24, &v16[176], 0x1B4u); /*0x1006fe11d*/
  v24[436] = 1; /*0x1006fe122*/
  tauri::window::WindowBuilder$LT$R$C$M$GT$::with_webview::h6a90cf786cbcb2cd(__src, v18); /*0x1006fe136*/
  v33 = __src[1]; /*0x1006fe149*/
  v34 = __src[2]; /*0x1006fe154*/
  v35 = __src[3]; /*0x1006fe15f*/
  v36 = __src[4]; /*0x1006fe16a*/
  v37 = __src[5]; /*0x1006fe175*/
  v38 = __src[6]; /*0x1006fe180*/
  if ( __src[0] == 3 ) /*0x1006fe188*/
  {
    v29 = v35; /*0x1006fe192*/
    v30 = v36; /*0x1006fe19d*/
    v39 = v33; /*0x1006fe1b4*/
    v40 = v34; /*0x1006fe1b8*/
    v41 = v35; /*0x1006fe1bc*/
    v42 = v36; /*0x1006fe1c0*/
    v43 = v37; /*0x1006fe1c4*/
    v44 = v38; /*0x1006fe1c8*/
    __src[5] = v38; /*0x1006fe1d0*/
    __src[4] = v37; /*0x1006fe1db*/
    __src[3] = v36; /*0x1006fe1e6*/
    __src[2] = v35; /*0x1006fe1f1*/
    __src[1] = v34; /*0x1006fe200*/
    __src[0] = v33; /*0x1006fe207*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v37); /*0x1006fe20e*/
    result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x1006fe21d*/
    if ( !result ) /*0x1006fe225*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1006fe61a*/
    result[5] = v44; /*0x1006fe22f*/
    result[4] = v43; /*0x1006fe237*/
    result[3] = v42; /*0x1006fe23f*/
    result[2] = v41; /*0x1006fe247*/
    v3 = v39; /*0x1006fe24b*/
    result[1] = v40; /*0x1006fe253*/
    *result = v3; /*0x1006fe257*/
    return result; /*0x1006fe25a*/
  }
  memcpy(__dst, &__src[7], 0x348u); /*0x1006fe28d*/
  __src[135] = v33; /*0x1006fe29a*/
  __src[136] = v34; /*0x1006fe2a1*/
  v29 = v35; /*0x1006fe2ac*/
  v30 = v36; /*0x1006fe2b7*/
  v31 = v37; /*0x1006fe2c2*/
  v32 = v38; /*0x1006fe2cd*/
  memcpy(v17, __dst, 0x1E0u); /*0x1006fe2e6*/
  memcpy(&v17[60], &__dst[60], 0x168u); /*0x1006fe2fe*/
  v39 = v33; /*0x1006fe311*/
  v40 = v34; /*0x1006fe315*/
  v41 = v35; /*0x1006fe320*/
  v42 = v36; /*0x1006fe32b*/
  v43 = v37; /*0x1006fe336*/
  v44 = v38; /*0x1006fe341*/
  memcpy(v27, v17, sizeof(v27)); /*0x1006fe354*/
  v26[1] = v33; /*0x1006fe361*/
  v26[2] = v34; /*0x1006fe368*/
  v26[3] = v35; /*0x1006fe373*/
  v26[4] = v36; /*0x1006fe37e*/
  v26[5] = v37; /*0x1006fe389*/
  v26[6] = v38; /*0x1006fe394*/
  v26[0] = __src[0]; /*0x1006fe39b*/
  if ( pthread_main_np() == 1 ) /*0x1006fe3aa*/
  {
    codexmate_lib::commands::hotspot::apply_native_hotspot_properties::h65990866066cffaf(v26, 0, 0.0, 0.0); /*0x1006fe3b9*/
    codexmate_lib::commands::hotspot::set_window_alpha::ha954231ad8285ecd((__int64)v26, 0.0); /*0x1006fe3c8*/
    LODWORD(__src[9]) = v27[20]; /*0x1006fe3d3*/
    LODWORD(__src[1]) = 40; /*0x1006fe3d9*/
    LOBYTE(__src[0]) = 33; /*0x1006fe3e3*/
    v5 = v26; /*0x1006fe3f1*/
    tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(__dst, v26, __src, 0.0, 0.0); /*0x1006fe3ff*/
    if ( LODWORD(__dst[0]) != 19 ) /*0x1006fe40b*/
    {
      __src[3] = __dst[2]; /*0x1006fe418*/
      __src[2] = __dst[1]; /*0x1006fe42d*/
      __src[1] = __dst[0]; /*0x1006fe434*/
      __src[0] = 0x8000000000000000LL; /*0x1006fe445*/
      core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006fe453*/
    }
LABEL_14:
    core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(v26, v5); /*0x1006fe523*/
    v4 = &v27[120]; /*0x1006fe52f*/
    goto LABEL_15; /*0x1006fe52f*/
  }
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006fe467*/
  v7 = *(volatile signed __int64 **)(a1 + 136); /*0x1006fe46c*/
  v8 = _InterlockedIncrement64(v7); /*0x1006fe473*/
  if ( (v8 < 0) ^ v6 | (v8 == 0) /*0x1006fe488*/
    || (v9 = *(volatile signed __int64 **)(a1 + 144), v10 = _InterlockedIncrement64(v9), (v10 < 0) ^ v6 | (v10 == 0)) )
  {
    BUG(); /*0x1006fe641*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1006fe4a1*/
  __dst[17] = v7; /*0x1006fe4a6*/
  __dst[18] = v9; /*0x1006fe4ad*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006fe4b4*/
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(152, 8); /*0x1006fe4c3*/
  if ( !v11 ) /*0x1006fe4cb*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 152); /*0x1006fe62b*/
  v12 = v11; /*0x1006fe4d1*/
  memcpy(v11, __dst, 0x98u); /*0x1006fe4e3*/
  __src[1] = v12; /*0x1006fe4e8*/
  __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1210; /*0x1006fe4f6*/
  LOBYTE(__src[0]) = 28; /*0x1006fe4fd*/
  v5 = (_QWORD *)a1; /*0x1006fe512*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(v17, a1, __src, 0.0, 0.0); /*0x1006fe515*/
  if ( LODWORD(v17[0]) == 19 ) /*0x1006fe521*/
    goto LABEL_14; /*0x1006fe521*/
  __src[3] = v17[2]; /*0x1006fe55b*/
  __src[2] = v17[1]; /*0x1006fe570*/
  __src[1] = v17[0]; /*0x1006fe577*/
  __src[0] = 0x8000000000000000LL; /*0x1006fe588*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, a1); /*0x1006fe58f*/
  v13 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x1006fe59e*/
  if ( !v13 ) /*0x1006fe5a6*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1006fe63c*/
  v13[5] = __src[5]; /*0x1006fe5b3*/
  v13[4] = __src[4]; /*0x1006fe5be*/
  v13[3] = __src[3]; /*0x1006fe5c9*/
  v13[2] = __src[2]; /*0x1006fe5d4*/
  v14 = __src[0]; /*0x1006fe5d8*/
  v13[1] = __src[1]; /*0x1006fe5e6*/
  v15 = v13; /*0x1006fe5ea*/
  *v13 = v14; /*0x1006fe5ed*/
  core::ptr::drop_in_place$LT$tauri..window..Window$GT$::h00a1cd5478c8773e(v26, 8); /*0x1006fe5f7*/
  core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h4246a4a063072089(&v27[120]); /*0x1006fe603*/
  return v15; /*0x1006fe544*/
}