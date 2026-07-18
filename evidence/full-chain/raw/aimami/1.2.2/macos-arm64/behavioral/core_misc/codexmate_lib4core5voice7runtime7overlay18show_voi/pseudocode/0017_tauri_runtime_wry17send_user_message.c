// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x100583dc0 d=1
__int64 __fastcall tauri_runtime_wry::send_user_message::hfc7290eb007ad3a4(__int64 *a1, __int64 a2, const void *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // al
  char v7; // of
  __int64 v8; // rt0
  __int64 v9; // rt0
  __int64 result; // rax
  _BYTE __src[176]; // [rsp+8h] [rbp-178h] BYREF
  __int64 __dst[25]; // [rsp+B8h] [rbp-C8h] BYREF

  __dst[0] = std::thread::current::current::hd610940328775657(); /*0x100583dde*/
  v4 = *(_QWORD *)(__dst[0] + 16); /*0x100583de5*/
  v5 = *(_QWORD *)(a2 + 80); /*0x100583de9*/
  v6 = _InterlockedDecrement64((volatile signed __int64 *)__dst[0]) == 0; /*0x100583df1*/
  if ( v4 == v5 ) /*0x100583df7*/
  {
    if ( v6 ) /*0x100583dfb*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__dst); /*0x100583e04*/
    memcpy(__dst, a3, 0xB0u); /*0x100583e18*/
    v8 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 72)); /*0x100583e21*/
    if ( (v8 < 0) ^ v7 | (v8 == 0) /*0x100583e33*/
      || (v9 = _InterlockedIncrement64(*(volatile signed __int64 **)(a2 + 64)), (v9 < 0) ^ v7 | (v9 == 0)) )
    {
      BUG(); /*0x100583ebe*/
    }
    result = tauri_runtime_wry::handle_user_message::hcc9da93ee72389a1(a2 + 24, __dst); /*0x100583e47*/
    *a1 = 19; /*0x100583e4c*/
  }
  else
  {
    if ( v6 ) /*0x100583e57*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(__dst); /*0x100583e60*/
    tao::platform_impl::platform::event_loop::Proxy$LT$T$GT$::send_event::h22dfbe29a164bc9d(__src, a2, a3); /*0x100583e72*/
    result = 19; /*0x100583e77*/
    if ( __src[0] != 40 ) /*0x100583e83*/
    {
      memcpy(__dst, __src, 0xB0u); /*0x100583e9b*/
      core::ptr::drop_in_place$LT$tauri_runtime_wry..Message$LT$tauri..EventLoopMessage$GT$$GT$::h4a36df3d900205a0(__dst); /*0x100583ea3*/
      result = 3; /*0x100583ea8*/
    }
    *a1 = result; /*0x100583ead*/
  }
  return result; /*0x100583eb0*/
}