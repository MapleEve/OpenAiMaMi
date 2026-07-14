// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x1004891d0 depth=2
// core3ptr47drop_in_place::heb211ffbbe49e51cE_0
__int64 __fastcall core::ptr::drop_in_place$LT$tauri..menu..MenuItemInner$GT$::heb211ffbbe49e51c(_QWORD *a1)
{
  _QWORD *v1; // rax
  bool v2; // zf
  _QWORD *v3; // rax

  _$LT$tauri..menu..MenuItemInner$LT$R$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha3eae9ed1996caea(); /*0x1004891da*/
  if ( a1[19] ) /*0x1004891df*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004891f7*/
  v1 = (_QWORD *)a1[22]; /*0x1004891fc*/
  if ( v1 ) /*0x100489206*/
  {
    v2 = (*v1)-- == 1; /*0x100489208*/
    if ( v2 ) /*0x10048920b*/
      alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::hba72a0e3072c8f0d(a1 + 22); /*0x100489214*/
    v3 = (_QWORD *)a1[23]; /*0x100489219*/
    v2 = (*v3)-- == 1; /*0x100489220*/
    if ( v2 ) /*0x100489223*/
      alloc::rc::Rc$LT$T$C$A$GT$::drop_slow::hb9f5e6dcbdb9637b(a1 + 23); /*0x10048922c*/
  }
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1); /*0x100489234*/
}