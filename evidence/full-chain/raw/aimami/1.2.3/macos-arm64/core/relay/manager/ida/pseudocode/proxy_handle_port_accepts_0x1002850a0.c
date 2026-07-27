// __ZN13codexmate_lib4core5relay7manager25proxy_handle_port_accepts @ 0x1002850a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::proxy_handle_port_accepts::hc74fa5e0e8f8c6b2(__int64 a1)
{
  __int16 v1; // ax
  _DWORD *v2; // rbx
  int v3; // r14d
  __int16 v5; // [rsp+0h] [rbp-40h] BYREF
  int v6; // [rsp+2h] [rbp-3Eh]
  __int16 v7; // [rsp+6h] [rbp-3Ah]
  _DWORD v8[8]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL) ) /*0x1002850af*/
  {
    v1 = *(_WORD *)(a1 + 16); /*0x1002850b7*/
    v6 = 16777343; /*0x1002850bb*/
    v7 = v1; /*0x1002850c2*/
    v5 = 0; /*0x1002850c6*/
    v2 = v8; /*0x1002850cc*/
    std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(v8, &v5, 0, 300000000); /*0x1002850de*/
    v3 = v8[0]; /*0x1002850e3*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(v8); /*0x1002850ea*/
    if ( v3 ) /*0x1002850f2*/
    {
      std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x1002850fb*/
      std::net::tcp::TcpStream::connect_timeout::hd13685ddcef94a0c(v8, &v5, 0, 300000000); /*0x100285112*/
      LODWORD(v2) = LOBYTE(v8[0]) ^ 1; /*0x10028511b*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpStream$C$std..io..error..Error$GT$$GT$::h545daae1b7c8c2ff(v8); /*0x100285121*/
    }
    else
    {
      LOBYTE(v2) = 1; /*0x10028512c*/
    }
  }
  else
  {
    LODWORD(v2) = 0; /*0x100285128*/
  }
  return (unsigned int)v2; /*0x100285130*/
}