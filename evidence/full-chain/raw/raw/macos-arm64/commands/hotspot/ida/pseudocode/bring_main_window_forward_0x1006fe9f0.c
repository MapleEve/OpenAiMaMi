// __ZN13codexmate_lib8commands7hotspot25bring_main_window_forward @ 0x1006fe9f0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::hotspot::bring_main_window_forward::h660f5335335ce718(
        __int64 a1,
        double a2,
        double a3)
{
  void *v4; // r14
  void *v5; // rdi
  void *v6; // r15
  int v7; // r15d
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+8h] [rbp-D8h]
  __int64 v11; // [rsp+10h] [rbp-D0h]
  __int64 v12; // [rsp+18h] [rbp-C8h]
  int v13; // [rsp+48h] [rbp-98h]
  __int64 v14; // [rsp+B0h] [rbp-30h] BYREF
  __int64 v15; // [rsp+B8h] [rbp-28h]
  __int64 v16; // [rsp+C0h] [rbp-20h]

  codexmate_lib::commands::hotspot::set_window_alpha::ha954231ad8285ecd(a1, 1.0); /*0x1006fea0b*/
  if ( pthread_main_np() == 1 ) /*0x1006fea18*/
  {
    v4 = (void *)objc2_app_kit::generated::__NSApplication::NSApplication::sharedApplication::hd928ea64bfa1419e(); /*0x1006fea1f*/
    objc2_app_kit::generated::__NSApplication::NSApplication::setActivationPolicy::hbd67cd6f9a32a8c1(v4, 0); /*0x1006fea27*/
    objc_release(v4); /*0x1006fea2f*/
  }
  if ( pthread_main_np() == 1 ) /*0x1006fea3c*/
  {
    v5 = (void *)objc2_app_kit::generated::__NSApplication::NSApplication::sharedApplication::hd928ea64bfa1419e(); /*0x1006fea46*/
    objc2_app_kit::generated::__NSApplication::NSApplication::activateIgnoringOtherApps::h76e5d714f4750754(v5); /*0x1006fea4e*/
    v6 = (void *)objc2_app_kit::generated::__NSRunningApplication::NSRunningApplication::currentApplication::hd2192673fb338013( /*0x1006fea58*/
                   v5,
                   1);
    objc2_app_kit::generated::__NSRunningApplication::NSRunningApplication::activateWithOptions::h11575015a15fa6da( /*0x1006fea63*/
      v6,
      3);
    objc_release(v6); /*0x1006fea6b*/
    objc_release(v5); /*0x1006fea73*/
  }
  v7 = *(_DWORD *)(a1 + 136); /*0x1006fea82*/
  v13 = v7; /*0x1006fea89*/
  LODWORD(v10) = 40; /*0x1006fea90*/
  LOBYTE(v9) = 33; /*0x1006fea9a*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v14, a1, &v9, 1.0, a3); /*0x1006feaaf*/
  if ( (_DWORD)v14 != 19 ) /*0x1006feab8*/
  {
    v12 = v16; /*0x1006feabe*/
    v11 = v15; /*0x1006feacd*/
    v10 = v14; /*0x1006fead4*/
    v9 = 0x8000000000000000LL; /*0x1006feadb*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v9); /*0x1006feae9*/
  }
  v13 = v7; /*0x1006feaee*/
  LODWORD(v10) = 39; /*0x1006feaf5*/
  LOBYTE(v9) = 33; /*0x1006feaff*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v14, a1, &v9, 1.0, a3); /*0x1006feb14*/
  if ( (_DWORD)v14 != 19 ) /*0x1006feb1d*/
  {
    v12 = v16; /*0x1006feb23*/
    v11 = v15; /*0x1006feb32*/
    v10 = v14; /*0x1006feb39*/
    v9 = 0x8000000000000000LL; /*0x1006feb40*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v9); /*0x1006feb4e*/
  }
  v13 = v7; /*0x1006feb53*/
  LODWORD(v10) = 58; /*0x1006feb5a*/
  BYTE4(v10) = 1; /*0x1006feb64*/
  LOBYTE(v9) = 33; /*0x1006feb6b*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v14, a1, &v9, 1.0, a3); /*0x1006feb80*/
  if ( (_DWORD)v14 != 19 ) /*0x1006feb89*/
  {
    v12 = v16; /*0x1006feb8f*/
    v11 = v15; /*0x1006feb9e*/
    v10 = v14; /*0x1006feba5*/
    v9 = 0x8000000000000000LL; /*0x1006febac*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v9); /*0x1006febba*/
  }
  v13 = v7; /*0x1006febbf*/
  LODWORD(v10) = 57; /*0x1006febc6*/
  LOBYTE(v9) = 33; /*0x1006febd0*/
  result = tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v14, a1, &v9, 1.0, a3); /*0x1006febe5*/
  if ( (_DWORD)v14 != 19 ) /*0x1006febee*/
  {
    v12 = v16; /*0x1006febf4*/
    v11 = v15; /*0x1006fec03*/
    v10 = v14; /*0x1006fec0a*/
    v9 = 0x8000000000000000LL; /*0x1006fec11*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v9); /*0x1006fec1f*/
  }
  return result; /*0x1006fec24*/
}