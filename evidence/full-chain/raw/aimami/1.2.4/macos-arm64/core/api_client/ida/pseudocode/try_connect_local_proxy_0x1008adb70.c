// __ZN13codexmate_lib4core10api_client23try_connect_local_proxy @ 0x1008adb70 | 1.2.4 NEW-delta
bool __fastcall codexmate_lib::core::api_client::try_connect_local_proxy::h7e20bd02fca974b6(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  _DWORD v7[2]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v8; // [rsp+8h] [rbp-28h]

  std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(v7, a1, 0, 200000000); /*0x1008adb8d*/
  v1 = v7[0]; /*0x1008adb92*/
  if ( v7[0] ) /*0x1008adb99*/
  {
    if ( (v8 & 3) == 1 ) /*0x1008adba7*/
    {
      v2 = v8 - 1; /*0x1008adba9*/
      v3 = *(_QWORD *)(v8 - 1); /*0x1008adbad*/
      v4 = *(_QWORD *)(v8 + 7); /*0x1008adbb1*/
      if ( *(_QWORD *)v4 ) /*0x1008adbb5*/
        (*(void (__fastcall **)(__int64))v4)(v3); /*0x1008adbc1*/
      v5 = *(_QWORD *)(v4 + 8); /*0x1008adbc3*/
      if ( v5 ) /*0x1008adbcb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, *(_QWORD *)(v4 + 16)); /*0x1008adbd5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 24, 8); /*0x1008adbe7*/
    }
  }
  else
  {
    close_NOCANCEL(v7[1]); /*0x1008adbf1*/
  }
  return v1 == 0; /*0x1008adbfc*/
}