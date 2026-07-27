// __ZN13codexmate_lib8commands7hotspot18reveal_main_window @ 0x1006fd480
// 1.2.3 NEW-delta | codexmate_lib::commands::hotspot::reveal_main_window | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::commands::hotspot::reveal_main_window::h80f6ed4cf735a5fa(
        __int64 a1,
        double a2,
        double a3)
{
  char v3; // of
  volatile signed __int64 *v4; // r14
  __int64 v5; // rt0
  volatile signed __int64 *v6; // r15
  __int64 v7; // rt0
  void *v8; // rax
  void *v9; // r14
  __int64 result; // rax
  _QWORD __dst[20]; // [rsp+0h] [rbp-180h] BYREF
  _QWORD __src[22]; // [rsp+A0h] [rbp-E0h] BYREF
  _QWORD v13[6]; // [rsp+150h] [rbp-30h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006fd49d*/
  v4 = *(volatile signed __int64 **)(a1 + 136); /*0x1006fd4a2*/
  v5 = _InterlockedIncrement64(v4); /*0x1006fd4a9*/
  if ( (v5 < 0) ^ v3 | (v5 == 0) /*0x1006fd4be*/
    || (v6 = *(volatile signed __int64 **)(a1 + 144), v7 = _InterlockedIncrement64(v6), (v7 < 0) ^ v3 | (v7 == 0)) )
  {
    BUG(); /*0x1006fd5b5*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1006fd4d7*/
  __dst[17] = v4; /*0x1006fd4dc*/
  __dst[18] = v6; /*0x1006fd4e3*/
  LOBYTE(__dst[19]) = 0; /*0x1006fd4ea*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006fd4f1*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(160, 8); /*0x1006fd500*/
  if ( !v8 ) /*0x1006fd508*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 160); /*0x1006fd5b0*/
  v9 = v8; /*0x1006fd50e*/
  memcpy(v8, __dst, 0xA0u); /*0x1006fd520*/
  __src[1] = v9; /*0x1006fd525*/
  __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1168; /*0x1006fd533*/
  LOBYTE(__src[0]) = 28; /*0x1006fd53a*/
  result = tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(v13, a1, __src, a2, a3); /*0x1006fd54f*/
  if ( LODWORD(v13[0]) != 19 ) /*0x1006fd558*/
  {
    __src[3] = v13[2]; /*0x1006fd55e*/
    __src[2] = v13[1]; /*0x1006fd56d*/
    __src[1] = v13[0]; /*0x1006fd574*/
    __src[0] = 0x8000000000000000LL; /*0x1006fd585*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006fd593*/
  }
  return result; /*0x1006fd598*/
}