// mac 1.1.8 upsert_relay_provider node va=0x100e74aa0 depth=2
// alloc4sync16Arc::drop_slow
volatile signed __int64 *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12106b736b96e93e(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  _QWORD **v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD **v7; // r13
  bool v8; // zf
  volatile signed __int64 *result; // rax
  _QWORD v10[6]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v11[8]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *a1; /*0x100e74ab1*/
  v2 = *a1 + 16; /*0x100e74ab4*/
  v3 = (_QWORD **)(v1 + 192); /*0x100e74ab8*/
  v4 = *(_QWORD *)(*a1 + 192); /*0x100e74abf*/
  v5 = *(_QWORD *)(*a1 + 200); /*0x100e74ac6*/
  *(_QWORD *)(v1 + 192) = 0; /*0x100e74acd*/
  _$LT$tauri_runtime_wry..WryHandle$LT$T$GT$$u20$as$u20$tauri_runtime..RuntimeHandle$LT$T$GT$$GT$::run_on_main_thread::h0716344a9861738d( /*0x100e74adf*/
    v11,
    v2,
    v4,
    v5);
  if ( LODWORD(v11[0]) != 19 ) /*0x100e74ae8*/
  {
    v10[3] = v11[2]; /*0x100e74aee*/
    v10[2] = v11[1]; /*0x100e74afa*/
    v10[1] = v11[0]; /*0x100e74afe*/
    v10[0] = 0x8000000000000000LL; /*0x100e74b0c*/
    ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h7333deff63250a1b)(v10); /*0x100e74b14*/
  }
  if ( *(_QWORD *)(v1 + 168) ) /*0x100e74b19*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e74b31*/
  v6 = *v3; /*0x100e74b36*/
  if ( *v3 ) /*0x100e74b36*/
  {
    v7 = (_QWORD **)(v1 + 200); /*0x100e74b3f*/
    v8 = (*v6)-- == 1; /*0x100e74b46*/
    if ( v8 ) /*0x100e74b49*/
      alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::hba72a0e3072c8f0d(v1 + 192); /*0x100e74b4e*/
    v8 = (**v7)-- == 1; /*0x100e74b57*/
    if ( v8 ) /*0x100e74b5a*/
      alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::h8dc44b7c01f1b4a9(v1 + 200); /*0x100e74b5f*/
  }
  core::ptr::drop_in_place$LT$tauri_runtime_wry..Context$LT$tauri..EventLoopMessage$GT$$GT$::hb2366fd59f50b4c5(v2); /*0x100e74b67*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 152)) ) /*0x100e74b73*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb59fb20f0e1eded7((_QWORD *)(v1 + 152)); /*0x100e74b80*/
  result = *(volatile signed __int64 **)(v1 + 160); /*0x100e74b85*/
  if ( !_InterlockedDecrement64(result) ) /*0x100e74b8c*/
    result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h4471ce70b2d68f08(v1 + 160); /*0x100e74b99*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e74ba4*/
    return (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e74bc6*/
  return result; /*0x100e74bb8*/
}