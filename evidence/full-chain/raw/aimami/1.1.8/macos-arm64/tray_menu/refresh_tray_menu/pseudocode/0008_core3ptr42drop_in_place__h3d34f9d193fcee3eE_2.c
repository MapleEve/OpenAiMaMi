// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x1004ef8a0 depth=1
// core3ptr42drop_in_place::h3d34f9d193fcee3eE_2
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tauri..tray..TrayIcon$GT$::h3d34f9d193fcee3e(
        _QWORD *a1)
{
  _QWORD *v1; // rax

  if ( a1[19] ) /*0x1004ef8aa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ef8c2*/
  if ( a1[22] ) /*0x1004ef8c7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ef8df*/
  v1 = (_QWORD *)a1[25]; /*0x1004ef8e4*/
  if ( (*v1)-- == 1 ) /*0x1004ef8eb*/
    alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::hd88f2f004f07f7bb(a1 + 25); /*0x1004ef8f7*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f((__int64)a1); /*0x1004ef8ff*/
}