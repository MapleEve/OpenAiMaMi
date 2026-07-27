// __ZN13codexmate_lib8commands7hotspot35register_hotspot_relayout_observers @ 0x1006ff6f0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::hotspot::register_hotspot_relayout_observers::hfc47e959a1209e7b(
        __int64 a1,
        double a2,
        double a3)
{
  __int64 result; // rax
  char v4; // of
  volatile signed __int64 *v5; // r14
  __int64 v6; // rt0
  volatile signed __int64 *v7; // r15
  __int64 v8; // rt0
  void *v9; // rax
  void *v10; // r14
  _QWORD __dst[19]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD __src[22]; // [rsp+A0h] [rbp-E0h] BYREF
  _QWORD v13[6]; // [rsp+150h] [rbp-30h] BYREF

  LOBYTE(__src[0]) = 1; /*0x1006ff703*/
  result = codexmate_lib::commands::hotspot::register_hotspot_relayout_observers::INSTALLED::ha63527f6fc70fb01; /*0x1006ff70a*/
  if ( codexmate_lib::commands::hotspot::register_hotspot_relayout_observers::INSTALLED::ha63527f6fc70fb01 ) /*0x1006ff714*/
  {
    result = std::sync::once_lock::OnceLock$LT$T$GT$::initialize::heef147efd38a4a0d( /*0x1006ff841*/
               &codexmate_lib::commands::hotspot::register_hotspot_relayout_observers::INSTALLED::ha63527f6fc70fb01,
               __src);
    if ( !LOBYTE(__src[0]) ) /*0x1006ff84d*/
    {
      _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006ff731*/
      v5 = *(volatile signed __int64 **)(a1 + 136); /*0x1006ff736*/
      v6 = _InterlockedIncrement64(v5); /*0x1006ff73d*/
      if ( (v6 < 0) ^ v4 | (v6 == 0) /*0x1006ff752*/
        || (v7 = *(volatile signed __int64 **)(a1 + 144), v8 = _InterlockedIncrement64(v7), (v8 < 0) ^ v4 | (v8 == 0)) )
      {
        BUG(); /*0x1006ff864*/
      }
      memcpy(__dst, __src, 0x88u); /*0x1006ff76b*/
      __dst[17] = v5; /*0x1006ff770*/
      __dst[18] = v7; /*0x1006ff777*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006ff77e*/
      v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(152, 8); /*0x1006ff78d*/
      if ( !v9 ) /*0x1006ff795*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 152); /*0x1006ff85f*/
      v10 = v9; /*0x1006ff79b*/
      memcpy(v9, __dst, 0x98u); /*0x1006ff7ad*/
      __src[1] = v10; /*0x1006ff7b2*/
      __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1215; /*0x1006ff7c0*/
      LOBYTE(__src[0]) = 28; /*0x1006ff7c7*/
      result = tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(v13, a1, __src, a2, a3); /*0x1006ff7dc*/
      if ( LODWORD(v13[0]) != 19 ) /*0x1006ff7e5*/
      {
        __src[3] = v13[2]; /*0x1006ff7eb*/
        __src[2] = v13[1]; /*0x1006ff7fa*/
        __src[1] = v13[0]; /*0x1006ff801*/
        __src[0] = 0x8000000000000000LL; /*0x1006ff812*/
        return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006ff820*/
      }
    }
  }
  return result; /*0x1006ff825*/
}