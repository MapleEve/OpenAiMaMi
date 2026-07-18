// mac 1.2.2 NEW set_voice_overlay_style 0x1008dc100 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h14952cdf494ac6a1(
        __int64 a1)
{
  if ( !__OFSUB__(0, *(_QWORD *)(a1 + 64)) ) /*0x1008dc110*/
  {
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 88)) ) /*0x1008dc116*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h8c9942892b5ed05c(a1 + 88); /*0x1008dc120*/
    if ( *(_QWORD *)(a1 + 64) ) /*0x1008dc125*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008dc137*/
  }
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h24d55e7af4e141db(a1 + 16); /*0x1008dc140*/
  return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h24d55e7af4e141db(a1 + 40); /*0x1008dc14c*/
}