// __ZN13codexmate_lib8commands7hotspot17focus_main_window @ 0x1006fd300
// 1.2.3 NEW-delta | codexmate_lib::commands::hotspot::focus_main_window | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::commands::hotspot::focus_main_window::h83b1e451cc929a03(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4)
{
  char v4; // of
  volatile signed __int64 *v5; // r15
  __int64 v6; // rt0
  volatile signed __int64 *v7; // r12
  __int64 v8; // rt0
  void *v9; // rax
  void *v10; // r15
  _QWORD __dst[20]; // [rsp+8h] [rbp-188h] BYREF
  _QWORD __src[22]; // [rsp+A8h] [rbp-E8h] BYREF
  _QWORD v14[7]; // [rsp+158h] [rbp-38h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a2); /*0x1006fd31f*/
  v5 = *(volatile signed __int64 **)(a2 + 136); /*0x1006fd324*/
  v6 = _InterlockedIncrement64(v5); /*0x1006fd32b*/
  if ( (v6 < 0) ^ v4 | (v6 == 0) /*0x1006fd341*/
    || (v7 = *(volatile signed __int64 **)(a2 + 144), v8 = _InterlockedIncrement64(v7), (v8 < 0) ^ v4 | (v8 == 0)) )
  {
    BUG(); /*0x1006fd448*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1006fd35a*/
  __dst[17] = v5; /*0x1006fd35f*/
  __dst[18] = v7; /*0x1006fd366*/
  LOBYTE(__dst[19]) = 1; /*0x1006fd36d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006fd374*/
  v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(160, 8); /*0x1006fd383*/
  if ( !v9 ) /*0x1006fd38b*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 160); /*0x1006fd443*/
  v10 = v9; /*0x1006fd391*/
  memcpy(v9, __dst, 0xA0u); /*0x1006fd3a3*/
  __src[1] = v10; /*0x1006fd3a8*/
  __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1168; /*0x1006fd3b6*/
  LOBYTE(__src[0]) = 28; /*0x1006fd3bd*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(v14, a2, __src, a3, a4); /*0x1006fd3d2*/
  if ( LODWORD(v14[0]) != 19 ) /*0x1006fd3e5*/
  {
    __src[3] = v14[2]; /*0x1006fd3eb*/
    __src[2] = v14[1]; /*0x1006fd3fa*/
    __src[1] = v14[0]; /*0x1006fd401*/
    __src[0] = 0x8000000000000000LL; /*0x1006fd408*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006fd416*/
  }
  *a1 = 0x8000000000000000LL; /*0x1006fd41b*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fd421*/
  return a1; /*0x1006fd429*/
}