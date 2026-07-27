// __ZN13codexmate_lib8commands7hotspot31apply_native_hotspot_properties @ 0x1006fef70 | 基线 same-set
void __fastcall codexmate_lib::commands::hotspot::apply_native_hotspot_properties::h65990866066cffaf(
        __int64 a1,
        char a2)
{
  void *v2; // rax
  id v3; // rax
  id v4; // rax
  void *v5; // rbx
  void *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD v10[2]; // [rsp+0h] [rbp-80h] BYREF
  int v11; // [rsp+20h] [rbp-60h] BYREF
  char v12; // [rsp+24h] [rbp-5Ch]
  __int64 v13; // [rsp+28h] [rbp-58h]
  unsigned __int64 v14; // [rsp+38h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-30h]

  _$LT$tauri_runtime_wry..WryWindowDispatcher$LT$T$GT$$u20$as$u20$tauri_runtime..WindowDispatch$LT$T$GT$$GT$::window_handle::h7be38ff28fcf4992( /*0x1006fef87*/
    &v11,
    a1);
  if ( v11 == 16 ) /*0x1006fef92*/
  {
    v14 = 0x8000000000000020LL; /*0x1006fefa6*/
    LOBYTE(v15) = v12; /*0x1006fefaa*/
LABEL_13:
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v14); /*0x1006ff093*/
    return; /*0x1006ff097*/
  }
  if ( v11 != 1 ) /*0x1006fefb5*/
  {
    v14 = 0x800000000000000FLL; /*0x1006ff08f*/
    goto LABEL_13; /*0x1006ff08f*/
  }
  v2 = (void *)objc2_app_kit::generated::__NSView::NSView::window::h1496bb5f280328b6(v13); /*0x1006fefbf*/
  if ( !v2 ) /*0x1006fefc7*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1006ff0ba*/
      &anon_3ce6d1417794db0febde534c64082f90_560,
      30,
      &anon_3ce6d1417794db0febde534c64082f90_561);
  v3 = objc_autorelease(v2); /*0x1006fefd0*/
  v4 = objc_retain(v3); /*0x1006fefd8*/
  if ( v4 ) /*0x1006fefe0*/
  {
    v5 = v4; /*0x1006fefe6*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setLevel::h4d0136e8fbb8e50d(v4); /*0x1006feff1*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setCollectionBehavior::hb07551fa78179ef1(v5); /*0x1006feffe*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setHasShadow::h928dcf02e4b34a27(v5); /*0x1006ff008*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setOpaque::h9d2849f481ac4493(v5); /*0x1006ff012*/
    v6 = (void *)objc2_app_kit::generated::__NSColor::NSColor::clearColor::h054d59e583e3e510(v5, 0); /*0x1006ff01c*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setBackgroundColor::hd2127465cdcf52e8(v5); /*0x1006ff025*/
    codexmate_lib::platform::screen::compute_hotspot_frame::h4e2ac12e0c110f5a(&v14, v6); /*0x1006ff02e*/
    if ( (_DWORD)v14 == 1 ) /*0x1006ff037*/
    {
      v10[0] = v15; /*0x1006ff041*/
      v10[1] = v16; /*0x1006ff045*/
      objc2_app_kit::generated::__NSWindow::NSWindow::setFrame_display::hd0a0e4df3f89a0cf(v5, v10, 1, v7, v8, v9); /*0x1006ff055*/
    }
    if ( a2 ) /*0x1006ff05d*/
    {
      if ( (unsigned __int8)objc2_app_kit::generated::__NSWindow::NSWindow::isVisible::hf12c664f6d39c689(v5) ) /*0x1006ff062*/
        objc2_app_kit::generated::__NSWindow::NSWindow::orderFrontRegardless::h0ed05c2da29dee74(v5); /*0x1006ff06e*/
    }
    objc_release(v6); /*0x1006ff076*/
    objc_release(v5); /*0x1006ff07e*/
  }
}