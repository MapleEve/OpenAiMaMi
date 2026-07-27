// __ZN13codexmate_lib8commands7hotspot23refresh_hotspot_on_main @ 0x1006fe740 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::hotspot::refresh_hotspot_on_main::h21d504a8f1f7bbe2(
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
  _QWORD __dst[19]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD __src[22]; // [rsp+A0h] [rbp-E0h] BYREF
  _QWORD v13[6]; // [rsp+150h] [rbp-30h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006fe75d*/
  v4 = *(volatile signed __int64 **)(a1 + 136); /*0x1006fe762*/
  v5 = _InterlockedIncrement64(v4); /*0x1006fe769*/
  if ( (v5 < 0) ^ v3 | (v5 == 0) /*0x1006fe77e*/
    || (v6 = *(volatile signed __int64 **)(a1 + 144), v7 = _InterlockedIncrement64(v6), (v7 < 0) ^ v3 | (v7 == 0)) )
  {
    BUG(); /*0x1006fe86e*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1006fe797*/
  __dst[17] = v4; /*0x1006fe79c*/
  __dst[18] = v6; /*0x1006fe7a3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1006fe7aa*/
  v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(152, 8); /*0x1006fe7b9*/
  if ( !v8 ) /*0x1006fe7c1*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 152); /*0x1006fe869*/
  v9 = v8; /*0x1006fe7c7*/
  memcpy(v8, __dst, 0x98u); /*0x1006fe7d9*/
  __src[1] = v9; /*0x1006fe7de*/
  __src[2] = &anon_0df76e0cec988e6dc281ac0519b88803_1163; /*0x1006fe7ec*/
  LOBYTE(__src[0]) = 28; /*0x1006fe7f3*/
  result = tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(v13, a1, __src, a2, a3); /*0x1006fe808*/
  if ( LODWORD(v13[0]) != 19 ) /*0x1006fe811*/
  {
    __src[3] = v13[2]; /*0x1006fe817*/
    __src[2] = v13[1]; /*0x1006fe826*/
    __src[1] = v13[0]; /*0x1006fe82d*/
    __src[0] = 0x8000000000000000LL; /*0x1006fe83e*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__src); /*0x1006fe84c*/
  }
  return result; /*0x1006fe851*/
}