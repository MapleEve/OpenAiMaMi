// __ZN13codexmate_lib8commands7hotspot31bring_main_window_force_forward @ 0x1006ff0f0
// 1.2.3 NEW-delta | codexmate_lib::commands::hotspot::bring_main_window_force_forward | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::commands::hotspot::bring_main_window_force_forward::h5bb914e64a7c0bbf(
        __int64 a1,
        double a2,
        double a3)
{
  double v3; // xmm0_8
  int v4; // r15d
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+8h] [rbp-D8h]
  __int64 v8; // [rsp+10h] [rbp-D0h]
  __int64 v9; // [rsp+18h] [rbp-C8h]
  int v10; // [rsp+48h] [rbp-98h]
  __int64 v11; // [rsp+B0h] [rbp-30h] BYREF
  __int64 v12; // [rsp+B8h] [rbp-28h]
  __int64 v13; // [rsp+C0h] [rbp-20h]

  v3 = codexmate_lib::commands::hotspot::bring_main_window_forward::h660f5335335ce718(); /*0x1006ff10d*/
  v4 = *(_DWORD *)(a1 + 136); /*0x1006ff112*/
  v10 = v4; /*0x1006ff119*/
  LODWORD(v7) = 47; /*0x1006ff120*/
  BYTE4(v7) = 1; /*0x1006ff12a*/
  LOBYTE(v6) = 33; /*0x1006ff131*/
  tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v11, a1, &v6, v3, a3); /*0x1006ff146*/
  if ( (_DWORD)v11 != 19 ) /*0x1006ff14f*/
  {
    v9 = v13; /*0x1006ff155*/
    v8 = v12; /*0x1006ff164*/
    v7 = v11; /*0x1006ff16b*/
    v6 = 0x8000000000000000LL; /*0x1006ff172*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v6); /*0x1006ff180*/
  }
  v10 = v4; /*0x1006ff185*/
  LODWORD(v7) = 57; /*0x1006ff18c*/
  LOBYTE(v6) = 33; /*0x1006ff196*/
  result = tauri_runtime_wry::send_user_message::hc1b34a713e06d7a0(&v11, a1, &v6, v3, a3); /*0x1006ff1ab*/
  if ( (_DWORD)v11 != 19 ) /*0x1006ff1b4*/
  {
    v9 = v13; /*0x1006ff1ba*/
    v8 = v12; /*0x1006ff1c9*/
    v7 = v11; /*0x1006ff1d0*/
    v6 = 0x8000000000000000LL; /*0x1006ff1d7*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v6); /*0x1006ff1e5*/
  }
  return result; /*0x1006ff1ea*/
}