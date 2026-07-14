// mac 1.1.8 switch_account_and_restart_codex node va=0x100e754c0 depth=2
// alloc4sync16Arc::drop_slow
volatile signed __int64 *__fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb59fb20f0e1eded7(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  pthread_mutex_t **v3; // r13
  pthread_mutex_t *v4; // r12
  __int64 v5; // r12
  volatile signed __int64 *result; // rax
  __int64 v7; // r12

  v1 = *a1; /*0x100e754ce*/
  v2 = *a1 + 16LL; /*0x100e754d1*/
  v3 = (pthread_mutex_t **)(*a1 + 4920LL); /*0x100e754d5*/
  _$LT$std..sys..sync..mutex..pthread..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcc5545e7d5877829(v3); /*0x100e754df*/
  v4 = *v3; /*0x100e754e4*/
  *v3 = nullptr; /*0x100e754e8*/
  if ( v4 ) /*0x100e754f3*/
  {
    _$LT$std..sys..pal..unix..sync..mutex..Mutex$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd703c6747fbb3b28(v4); /*0x100e754f8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e7550a*/
  }
  core::ptr::drop_in_place$LT$core..cell..UnsafeCell$LT$tauri..ipc..authority..RuntimeAuthority$GT$$GT$::hcc736adc1867db11(v1 + 4936); /*0x100e75516*/
  core::ptr::drop_in_place$LT$tauri..manager..window..WindowManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::h5e667a2af897f004(v1 + 4448); /*0x100e75522*/
  core::ptr::drop_in_place$LT$tauri..manager..webview..WebviewManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::h98d2fa8bee93511c(v1 + 4072); /*0x100e7552e*/
  core::ptr::drop_in_place$LT$tauri..manager..tray..TrayManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::hfc33f05072fc3999(v1 + 4552); /*0x100e7553a*/
  core::ptr::drop_in_place$LT$tauri..manager..menu..MenuManager$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::h3f4770c32d7c05d5(v1 + 4728); /*0x100e75546*/
  core::ptr::drop_in_place$LT$std..sync..poison..mutex..Mutex$LT$tauri..plugin..PluginStore$GT$$GT$::h68c50c0e00b37848(v1 + 5136); /*0x100e75552*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 4864)) ) /*0x100e7555e*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdfb64b25354f1526(v1 + 4864); /*0x100e7556b*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 4872)) ) /*0x100e75577*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h86d1e043d8e9c602(v1 + 4872); /*0x100e75584*/
  core::ptr::drop_in_place$LT$tauri_utils..config..Config$GT$::h3d6d315db2b64edb(v2); /*0x100e7558c*/
  v5 = *(_QWORD *)(v1 + 4888); /*0x100e75598*/
  if ( *(_QWORD *)v5 ) /*0x100e7559f*/
    (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v1 + 4880)); /*0x100e755ab*/
  if ( *(_QWORD *)(v5 + 8) ) /*0x100e755ad*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e755bf*/
  if ( !__OFSUB__(-*(_QWORD *)(v1 + 4424), 1) && *(_QWORD *)(v1 + 4424) ) /*0x100e755cb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e755e1*/
  if ( *(_QWORD *)(v1 + 4288) ) /*0x100e755e6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e755fe*/
  _$LT$semver..identifier..Identifier$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6cbbb6751041c15a(v1 + 4312); /*0x100e7560a*/
  _$LT$semver..identifier..Identifier$u20$as$u20$core..ops..drop..Drop$GT$::drop::h6cbbb6751041c15a(v1 + 4320); /*0x100e75616*/
  if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 4896)) ) /*0x100e75622*/
  {
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 4904)) ) /*0x100e7562f*/
      goto LABEL_18; /*0x100e75633*/
LABEL_21:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h39505fe98a83b5ce(v1 + 4904); /*0x100e7565d*/
    result = *(volatile signed __int64 **)(v1 + 4912); /*0x100e75669*/
    if ( _InterlockedDecrement64(result) ) /*0x100e75670*/
      goto LABEL_23; /*0x100e75674*/
    goto LABEL_22; /*0x100e75674*/
  }
  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h7fbb1c3df0628752(v1 + 4896); /*0x100e7564b*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 4904)) ) /*0x100e75657*/
    goto LABEL_21; /*0x100e7565b*/
LABEL_18:
  result = *(volatile signed __int64 **)(v1 + 4912); /*0x100e75635*/
  if ( !_InterlockedDecrement64(result) ) /*0x100e75640*/
LABEL_22:
    result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hd8add882f5013821(v1 + 4912); /*0x100e75676*/
LABEL_23:
  if ( *(_QWORD *)(v1 + 4400) ) /*0x100e75682*/
    result = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e7569a*/
  if ( *(_QWORD *)(v1 + 5176) ) /*0x100e7569f*/
  {
    v7 = *(_QWORD *)(v1 + 5184); /*0x100e756ab*/
    result = *(volatile signed __int64 **)v7; /*0x100e756b2*/
    if ( *(_QWORD *)v7 ) /*0x100e756b2*/
      result = (volatile signed __int64 *)((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(v1 + 5176)); /*0x100e756be*/
    if ( *(_QWORD *)(v7 + 8) ) /*0x100e756c0*/
      result = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e756d2*/
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100e756dd*/
    return (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100e756ff*/
  return result; /*0x100e756f5*/
}