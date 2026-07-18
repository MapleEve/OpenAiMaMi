// mac 1.2.2 NEW set_voice_overlay_style 0x1004ec9e0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::h40b07b6a5ad3f5dc(__int64 a1)
{
  core::ptr::drop_in_place$LT$tauri..webview..Webview$GT$::h5bd7b95035dcc5b0(); /*0x1004ec9ea*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) ) /*0x1004ec9f6*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h86d1e043d8e9c602(a1 + 512); /*0x1004eca03*/
  if ( *(_QWORD *)(a1 + 456) ) /*0x1004eca08*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eca20*/
  if ( *(_BYTE *)(a1 + 480) == 6 ) /*0x1004eca2c*/
  {
    if ( *(_QWORD *)(a1 + 488) ) /*0x1004eca2e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004eca46*/
  }
  else
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(a1 + 480); /*0x1004eca54*/
  }
  return core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h9b045214780a6b3e(a1 + 360); /*0x1004eca63*/
}