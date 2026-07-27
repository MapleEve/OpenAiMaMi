// __ZN13codexmate_lib8commands7hotspot32install_native_hotspot_observers @ 0x1006ff200
// 1.2.3 NEW-delta | codexmate_lib::commands::hotspot::install_native_hotspot_observers | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::commands::hotspot::install_native_hotspot_observers::h8f323d4cc8c073d7(__int64 a1)
{
  void *v2; // r13
  void *v3; // r15
  NSNotificationName v4; // r12
  char v5; // of
  volatile signed __int64 *v6; // r13
  __int64 v7; // rt0
  volatile signed __int64 *v8; // r14
  __int64 v9; // rt0
  void *v10; // r13
  id v11; // rdi
  NSNotificationName v12; // r12
  char v13; // of
  volatile signed __int64 *v14; // r13
  __int64 v15; // rt0
  volatile signed __int64 *v16; // r14
  __int64 v17; // rt0
  void *v18; // r13
  char v19; // of
  volatile signed __int64 *v20; // r13
  __int64 v21; // rt0
  volatile signed __int64 *v22; // r14
  __int64 v23; // rt0
  void *v24; // r13
  NSNotificationName v25; // r12
  char v26; // of
  volatile signed __int64 *v27; // r13
  __int64 v28; // rt0
  volatile signed __int64 *v29; // r14
  __int64 v30; // rt0
  void *v31; // r13
  char v32; // of
  volatile signed __int64 *v33; // r13
  __int64 v34; // rt0
  volatile signed __int64 *v35; // r14
  __int64 v36; // rt0
  void *v37; // r13
  _BYTE __src[136]; // [rsp+0h] [rbp-170h] BYREF
  void **aBlock; // [rsp+88h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+90h] [rbp-E0h]
  __int64 (__fastcall *v42)(); // [rsp+98h] [rbp-D8h]
  void *v43; // [rsp+A0h] [rbp-D0h]
  _BYTE __dst[136]; // [rsp+A8h] [rbp-C8h] BYREF
  volatile signed __int64 *v45; // [rsp+130h] [rbp-40h]
  volatile signed __int64 *v46; // [rsp+138h] [rbp-38h]
  id v47; // [rsp+140h] [rbp-30h]

  v47 = (id)objc2_foundation::generated::__NSNotification::NSNotificationCenter::defaultCenter::h56adc7e34f306acc(); /*0x1006ff21c*/
  v2 = (void *)objc2_app_kit::generated::__NSWorkspace::NSWorkspace::sharedWorkspace::h4cad2dfdc001dd71(); /*0x1006ff225*/
  v3 = (void *)objc2_app_kit::generated::__NSWorkspace::NSWorkspace::notificationCenter::h2088a6d932d9d759(v2); /*0x1006ff230*/
  objc_release(v2); /*0x1006ff236*/
  v4 = NSApplicationDidChangeScreenParametersNotification; /*0x1006ff242*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006ff24f*/
  v6 = *(volatile signed __int64 **)(a1 + 136); /*0x1006ff254*/
  v7 = _InterlockedIncrement64(v6); /*0x1006ff25b*/
  if ( (v7 < 0) ^ v5 | (v7 == 0) ) /*0x1006ff260*/
    goto LABEL_18; /*0x1006ff260*/
  v8 = *(volatile signed __int64 **)(a1 + 144); /*0x1006ff266*/
  v9 = _InterlockedIncrement64(v8); /*0x1006ff26d*/
  if ( (v9 < 0) ^ v5 | (v9 == 0) ) /*0x1006ff271*/
    goto LABEL_18; /*0x1006ff271*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006ff28a*/
  aBlock = _NSConcreteStackBlock; /*0x1006ff296*/
  v41 = 0x2000000; /*0x1006ff29d*/
  v42 = _$LT$Closure$u20$as$u20$block2..traits..IntoBlock$LT$$LP$T0$C$$RP$$C$R$GT$$GT$::__get_invoke_stack_block::invoke::h6dd204352fa13d9c; /*0x1006ff2af*/
  v43 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_466; /*0x1006ff2bd*/
  v45 = v6; /*0x1006ff2c4*/
  v46 = v8; /*0x1006ff2c8*/
  v10 = _Block_copy(&aBlock); /*0x1006ff2d8*/
  if ( !v10 ) /*0x1006ff2de*/
    goto LABEL_17; /*0x1006ff2de*/
  v11 = v47; /*0x1006ff2e4*/
  objc2_foundation::generated::__NSNotification::NSNotificationCenter::addObserverForName_object_queue_usingBlock::h67ec6ef9102ce04c(v47); /*0x1006ff2f2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v4); /*0x1006ff2f7*/
  _Block_release(v10); /*0x1006ff2ff*/
  v12 = NSWorkspaceDidWakeNotification; /*0x1006ff30b*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006ff318*/
  v14 = *(volatile signed __int64 **)(a1 + 136); /*0x1006ff31d*/
  v15 = _InterlockedIncrement64(v14); /*0x1006ff324*/
  if ( (v15 < 0) ^ v13 | (v15 == 0) ) /*0x1006ff329*/
    goto LABEL_18; /*0x1006ff329*/
  v16 = *(volatile signed __int64 **)(a1 + 144); /*0x1006ff32f*/
  v17 = _InterlockedIncrement64(v16); /*0x1006ff336*/
  if ( (v17 < 0) ^ v13 | (v17 == 0) ) /*0x1006ff33a*/
    goto LABEL_18; /*0x1006ff33a*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006ff353*/
  aBlock = _NSConcreteStackBlock; /*0x1006ff35f*/
  v41 = 0x2000000; /*0x1006ff366*/
  v42 = _$LT$Closure$u20$as$u20$block2..traits..IntoBlock$LT$$LP$T0$C$$RP$$C$R$GT$$GT$::__get_invoke_stack_block::invoke::h6dd204352fa13d9c; /*0x1006ff378*/
  v43 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_466; /*0x1006ff386*/
  v45 = v14; /*0x1006ff38d*/
  v46 = v16; /*0x1006ff391*/
  v18 = _Block_copy(&aBlock); /*0x1006ff3a1*/
  if ( !v18 ) /*0x1006ff3a7*/
    goto LABEL_17; /*0x1006ff3a7*/
  objc2_foundation::generated::__NSNotification::NSNotificationCenter::addObserverForName_object_queue_usingBlock::h67ec6ef9102ce04c(v3); /*0x1006ff3ba*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v12); /*0x1006ff3bf*/
  _Block_release(v18); /*0x1006ff3c7*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006ff3e0*/
  v20 = *(volatile signed __int64 **)(a1 + 136); /*0x1006ff3e5*/
  v21 = _InterlockedIncrement64(v20); /*0x1006ff3ec*/
  if ( (v21 < 0) ^ v19 | (v21 == 0) ) /*0x1006ff3f1*/
    goto LABEL_18; /*0x1006ff3f1*/
  v22 = *(volatile signed __int64 **)(a1 + 144); /*0x1006ff3f7*/
  v23 = _InterlockedIncrement64(v22); /*0x1006ff3fe*/
  if ( (v23 < 0) ^ v19 | (v23 == 0) ) /*0x1006ff402*/
    goto LABEL_18; /*0x1006ff402*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006ff41b*/
  aBlock = _NSConcreteStackBlock; /*0x1006ff427*/
  v41 = 0x2000000; /*0x1006ff42e*/
  v42 = _$LT$Closure$u20$as$u20$block2..traits..IntoBlock$LT$$LP$T0$C$$RP$$C$R$GT$$GT$::__get_invoke_stack_block::invoke::h6dd204352fa13d9c; /*0x1006ff440*/
  v43 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_466; /*0x1006ff44e*/
  v45 = v20; /*0x1006ff455*/
  v46 = v22; /*0x1006ff459*/
  v24 = _Block_copy(&aBlock); /*0x1006ff469*/
  if ( !v24 ) /*0x1006ff46f*/
    goto LABEL_17; /*0x1006ff46f*/
  objc2_foundation::generated::__NSNotification::NSNotificationCenter::addObserverForName_object_queue_usingBlock::h67ec6ef9102ce04c(v3); /*0x1006ff482*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, NSWorkspaceScreensDidWakeNotification); /*0x1006ff487*/
  _Block_release(v24); /*0x1006ff48f*/
  v25 = NSWorkspaceSessionDidBecomeActiveNotification; /*0x1006ff49b*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006ff4a8*/
  v27 = *(volatile signed __int64 **)(a1 + 136); /*0x1006ff4ad*/
  v28 = _InterlockedIncrement64(v27); /*0x1006ff4b4*/
  if ( (v28 < 0) ^ v26 | (v28 == 0) ) /*0x1006ff4b9*/
    goto LABEL_18; /*0x1006ff4b9*/
  v29 = *(volatile signed __int64 **)(a1 + 144); /*0x1006ff4bf*/
  v30 = _InterlockedIncrement64(v29); /*0x1006ff4c6*/
  if ( (v30 < 0) ^ v26 | (v30 == 0) ) /*0x1006ff4ca*/
    goto LABEL_18; /*0x1006ff4ca*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006ff4e3*/
  aBlock = _NSConcreteStackBlock; /*0x1006ff4ef*/
  v41 = 0x2000000; /*0x1006ff4f6*/
  v42 = _$LT$Closure$u20$as$u20$block2..traits..IntoBlock$LT$$LP$T0$C$$RP$$C$R$GT$$GT$::__get_invoke_stack_block::invoke::h6dd204352fa13d9c; /*0x1006ff508*/
  v43 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_466; /*0x1006ff516*/
  v45 = v27; /*0x1006ff51d*/
  v46 = v29; /*0x1006ff521*/
  v31 = _Block_copy(&aBlock); /*0x1006ff531*/
  if ( !v31 ) /*0x1006ff537*/
    goto LABEL_17; /*0x1006ff537*/
  objc2_foundation::generated::__NSNotification::NSNotificationCenter::addObserverForName_object_queue_usingBlock::h67ec6ef9102ce04c(v3); /*0x1006ff54a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, v25); /*0x1006ff54f*/
  _Block_release(v31); /*0x1006ff557*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006ff570*/
  v33 = *(volatile signed __int64 **)(a1 + 136); /*0x1006ff575*/
  v34 = _InterlockedIncrement64(v33); /*0x1006ff57c*/
  if ( (v34 < 0) ^ v32 | (v34 == 0) /*0x1006ff592*/
    || (v35 = *(volatile signed __int64 **)(a1 + 144), v36 = _InterlockedIncrement64(v35), (v36 < 0) ^ v32 | (v36 == 0)) )
  {
LABEL_18:
    BUG(); /*0x1006ff650*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006ff5ab*/
  aBlock = _NSConcreteStackBlock; /*0x1006ff5b7*/
  v41 = 0x2000000; /*0x1006ff5be*/
  v42 = _$LT$Closure$u20$as$u20$block2..traits..IntoBlock$LT$$LP$T0$C$$RP$$C$R$GT$$GT$::__get_invoke_stack_block::invoke::h6dd204352fa13d9c; /*0x1006ff5d0*/
  v43 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_466; /*0x1006ff5de*/
  v45 = v33; /*0x1006ff5e5*/
  v46 = v35; /*0x1006ff5e9*/
  v37 = _Block_copy(&aBlock); /*0x1006ff5f9*/
  if ( !v37 ) /*0x1006ff5ff*/
LABEL_17:
    block2::rc_block::rc_new_fail::h2853e256ab727530(); /*0x1006ff64b*/
  objc2_foundation::generated::__NSNotification::NSNotificationCenter::addObserverForName_object_queue_usingBlock::h67ec6ef9102ce04c(v3); /*0x1006ff60e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, NSWorkspaceActiveSpaceDidChangeNotification); /*0x1006ff613*/
  _Block_release(v37); /*0x1006ff61b*/
  objc_release(v3); /*0x1006ff623*/
  objc_release(v47); /*0x1006ff62c*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a1); /*0x1006ff639*/
}