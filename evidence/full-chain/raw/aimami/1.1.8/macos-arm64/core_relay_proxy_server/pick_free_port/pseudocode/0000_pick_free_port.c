// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1005a5b80 depth=0
__int16 __fastcall codexmate_lib::core::relay::proxy_server::pick_free_port::h71e7e47aeeac29b8(int a1)
{
  unsigned __int16 v1; // r13
  __int16 v2; // bx
  __int16 i; // r15
  unsigned __int16 v4; // ax
  size_t v5; // r12
  __int16 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r12
  __int16 v10; // [rsp+8h] [rbp-98h] BYREF
  int v11; // [rsp+Ah] [rbp-96h]
  __int16 v12; // [rsp+Eh] [rbp-92h]
  __int64 v13; // [rsp+10h] [rbp-90h]
  __int64 v14; // [rsp+18h] [rbp-88h]
  __int64 v15; // [rsp+20h] [rbp-80h]
  __int64 v16; // [rsp+28h] [rbp-78h]
  __int64 v17; // [rsp+30h] [rbp-70h]
  size_t v18; // [rsp+38h] [rbp-68h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+40h] [rbp-60h]
  __int64 v20; // [rsp+48h] [rbp-58h]
  int v21; // [rsp+54h] [rbp-4Ch]
  __int64 (__fastcall *v22)(); // [rsp+58h] [rbp-48h]
  __int16 *v23; // [rsp+60h] [rbp-40h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+68h] [rbp-38h]
  int v25; // [rsp+70h] [rbp-30h]
  __int16 v26; // [rsp+74h] [rbp-2Ch]
  __int16 v27; // [rsp+76h] [rbp-2Ah] BYREF

  v21 = a1; /*0x1005a5b91*/
  v1 = -1; /*0x1005a5b94*/
  v2 = 32; /*0x1005a5b99*/
  for ( i = 0; ; ++i ) /*0x1005a5b9d*/
  {
    v4 = v1; /*0x1005a5bc6*/
    if ( (unsigned __int16)v21 < v1 ) /*0x1005a5bc9*/
      v4 = v21; /*0x1005a5bc9*/
    v27 = i + v4; /*0x1005a5bd0*/
    if ( !(i + v4) ) /*0x1005a5bd4*/
      goto LABEL_2; /*0x1005a5bd4*/
    v23 = &v27; /*0x1005a5bda*/
    v24 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1005a5be5*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1005a5bf6*/
      &v18,
      anon_1f22c03b288e649fafb3d21192ed4cff_331,
      (unsigned __int64)&v23);
    v5 = v18; /*0x1005a5bfb*/
    v22 = v19; /*0x1005a5c0e*/
    core::net::parser::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$core..net..socket_addr..SocketAddr$GT$::from_str::hf536c02ca64a266a( /*0x1005a5c12*/
      &v10,
      v19,
      v20);
    v6 = v10; /*0x1005a5c17*/
    if ( v10 == 2 ) /*0x1005a5c24*/
    {
      if ( v5 ) /*0x1005a5ce0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a5cee*/
      return 0; /*0x1005a5cf5*/
    }
    v26 = v12; /*0x1005a5c35*/
    v25 = v11; /*0x1005a5c3b*/
    v7 = v13; /*0x1005a5c3e*/
    v16 = v14; /*0x1005a5c4d*/
    v17 = v15; /*0x1005a5c51*/
    if ( v5 ) /*0x1005a5c58*/
    {
      v8 = v13; /*0x1005a5c62*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a5c69*/
      v7 = v8; /*0x1005a5c6e*/
    }
    v10 = v6; /*0x1005a5c71*/
    v12 = v26; /*0x1005a5c84*/
    v11 = v25; /*0x1005a5c8b*/
    v13 = v7; /*0x1005a5c8d*/
    v15 = v17; /*0x1005a5c9c*/
    v14 = v16; /*0x1005a5ca0*/
    std::sys::net::connection::socket::TcpListener::bind::inner::h34af0de907fa1c41(&v18, &v10); /*0x1005a5cb2*/
    if ( !(_BYTE)v18 ) /*0x1005a5cbb*/
      break; /*0x1005a5cbb*/
    v24 = v19; /*0x1005a5cc1*/
    LODWORD(v23) = 1; /*0x1005a5cc5*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpListener$C$std..io..error..Error$GT$$GT$::h5e072ede2f9d0326(&v23); /*0x1005a5cd3*/
LABEL_2:
    --v1; /*0x1005a5bb0*/
    if ( !--v2 ) /*0x1005a5bb9*/
      return 0; /*0x1005a5bb9*/
  }
  HIDWORD(v23) = HIDWORD(v18); /*0x1005a5cfa*/
  LODWORD(v23) = 0; /*0x1005a5cfd*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpListener$C$std..io..error..Error$GT$$GT$::h5e072ede2f9d0326(&v23); /*0x1005a5d08*/
  return 1; /*0x1005a5d15*/
}