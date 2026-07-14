// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x100356cd0 depth=1
// tauri4tray17TrayIcon::set_menu
unsigned __int64 *__fastcall tauri::tray::TrayIcon$LT$R$GT$::set_menu::h06c17625418bfc56(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  void *v4; // rax
  __int64 v5; // r12
  void *v6; // rax
  void *v7; // r12
  char v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+40h] [rbp-468h] BYREF
  __int64 v14[5]; // [rsp+58h] [rbp-450h] BYREF
  _OWORD __src[35]; // [rsp+80h] [rbp-428h] BYREF
  _QWORD v16[29]; // [rsp+2B0h] [rbp-1F8h] BYREF
  char v17[8]; // [rsp+398h] [rbp-110h] BYREF
  void *v18; // [rsp+3A0h] [rbp-108h]
  __int64 (__fastcall **v19)(); // [rsp+3A8h] [rbp-100h]

  v13[2] = a3; /*0x100356cf1*/
  *(_QWORD *)&__src[24] = 1; /*0x100356cf6*/
  *((_QWORD *)&__src[24] + 1) = 1; /*0x100356d02*/
  LOBYTE(__src[25]) = 0; /*0x100356d0e*/
  *(_QWORD *)&__src[16] = 0; /*0x100356d16*/
  BYTE8(__src[16]) = 0; /*0x100356d22*/
  *(_QWORD *)&__src[17] = 0; /*0x100356d2a*/
  __src[0] = 0; /*0x100356d39*/
  __src[8] = 0; /*0x100356d41*/
  *((_QWORD *)&__src[17] + 1) = 8; /*0x100356d49*/
  __src[18] = 0; /*0x100356d55*/
  __src[19] = 8u; /*0x100356d5d*/
  LOBYTE(__src[20]) = 1; /*0x100356d75*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100356d7d*/
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x200u, 0x80u); /*0x100356d8c*/
  if ( !v4 ) /*0x100356d94*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(128, 512); /*0x100356f15*/
  v5 = (__int64)v4; /*0x100356d9a*/
  memcpy(v4, __src, 0x200u); /*0x100356dad*/
  v14[3] = 1; /*0x100356db2*/
  v14[4] = v5; /*0x100356dbb*/
  v13[0] = 1; /*0x100356dc0*/
  v13[1] = v5; /*0x100356dc9*/
  _$LT$tauri..tray..TrayIcon$LT$R$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1c370719cb2485d8(__src); /*0x100356ddc*/
  v16[28] = a3; /*0x100356de1*/
  v16[0] = 1; /*0x100356de9*/
  v16[1] = v5; /*0x100356df5*/
  memcpy(&v16[2], __src, 0xD0u); /*0x100356e12*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100356e17*/
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xE8u, 8u); /*0x100356e26*/
  if ( !v6 ) /*0x100356e2e*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 232); /*0x100356f04*/
  v7 = v6; /*0x100356e34*/
  memcpy(v6, v16, 0xE8u); /*0x100356e47*/
  v18 = v7; /*0x100356e4c*/
  v19 = &anon_fdfbeb4f975d8e02b9c40da81dc33589_779; /*0x100356e5b*/
  v17[0] = 28; /*0x100356e63*/
  tauri_runtime_wry::send_user_message::h77ed2756619c4a08(v14, a2, v17); /*0x100356e7e*/
  if ( LODWORD(v14[0]) == 19 ) /*0x100356e88*/
  {
    v8 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5c14a005d7ff5db1(v13); /*0x100356e92*/
    v9 = 37; /*0x100356e9e*/
    if ( v8 ) /*0x100356ea3*/
      v9 = 16; /*0x100356ea3*/
    v10 = v9 | 0x8000000000000000LL; /*0x100356eb1*/
  }
  else
  {
    v10 = 0x8000000000000000LL; /*0x100356eb6*/
    a1[3] = v14[2]; /*0x100356ec5*/
    v11 = v14[0]; /*0x100356ec9*/
    a1[2] = v14[1]; /*0x100356ed3*/
    a1[1] = v11; /*0x100356ed7*/
  }
  *a1 = v10; /*0x100356edb*/
  _$LT$std..sync..mpmc..Receiver$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hbff4d7e580afa72f(v13); /*0x100356ee3*/
  return a1; /*0x100356eeb*/
}