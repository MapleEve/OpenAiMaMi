// __ZN13codexmate_lib8commands7hotspot16set_window_alpha @ 0x1006fd220 | 基线 same-set
void __fastcall codexmate_lib::commands::hotspot::set_window_alpha::ha954231ad8285ecd(__int64 a1, double a2)
{
  void *v2; // rax
  id v3; // rax
  id v4; // rax
  void *v5; // rbx
  unsigned __int64 v6; // [rsp+0h] [rbp-60h] BYREF
  char v7; // [rsp+8h] [rbp-58h]
  int v8; // [rsp+30h] [rbp-30h] BYREF
  char v9; // [rsp+34h] [rbp-2Ch]
  __int64 v10; // [rsp+38h] [rbp-28h]
  double v11; // [rsp+48h] [rbp-18h]

  v11 = a2; /*0x1006fd22b*/
  _$LT$tauri_runtime_wry..WryWindowDispatcher$LT$T$GT$$u20$as$u20$tauri_runtime..WindowDispatch$LT$T$GT$$GT$::window_handle::h7be38ff28fcf4992( /*0x1006fd237*/
    &v8,
    a1);
  if ( v8 == 16 ) /*0x1006fd242*/
  {
    v6 = 0x8000000000000020LL; /*0x1006fd256*/
    v7 = v9; /*0x1006fd25a*/
LABEL_8:
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v6); /*0x1006fd2af*/
    return; /*0x1006fd2b3*/
  }
  if ( v8 != 1 ) /*0x1006fd262*/
  {
    v6 = 0x800000000000000FLL; /*0x1006fd2ab*/
    goto LABEL_8; /*0x1006fd2ab*/
  }
  v2 = (void *)objc2_app_kit::generated::__NSView::NSView::window::h1496bb5f280328b6(v10); /*0x1006fd268*/
  if ( !v2 ) /*0x1006fd270*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1006fd2d4*/
      &anon_3ce6d1417794db0febde534c64082f90_560,
      30,
      &anon_3ce6d1417794db0febde534c64082f90_561);
  v3 = objc_autorelease(v2); /*0x1006fd275*/
  v4 = objc_retain(v3); /*0x1006fd27d*/
  if ( v4 ) /*0x1006fd285*/
  {
    v5 = v4; /*0x1006fd287*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setAlphaValue::ha6a3567530e23a16(v4); /*0x1006fd292*/
    objc_release(v5); /*0x1006fd29a*/
  }
}