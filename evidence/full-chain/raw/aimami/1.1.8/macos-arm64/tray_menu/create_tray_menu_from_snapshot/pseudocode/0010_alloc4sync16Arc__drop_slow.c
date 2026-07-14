// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x100492640 depth=1
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1; /*0x100492647*/
  result = core::ptr::drop_in_place$LT$tauri..menu..MenuItemInner$GT$::heb211ffbbe49e51c(*a1 + 16); /*0x10049264e*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100492659*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100492671*/
  return result; /*0x10049266d*/
}