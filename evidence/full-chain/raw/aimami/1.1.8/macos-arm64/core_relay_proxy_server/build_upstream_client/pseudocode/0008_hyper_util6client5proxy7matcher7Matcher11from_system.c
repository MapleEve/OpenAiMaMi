// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100df0800 depth=2
__int64 __fastcall hyper_util::client::proxy::matcher::Matcher::from_system::hb5b2e8b1e372901f(__int64 a1)
{
  _BYTE v2[104]; // [rsp+0h] [rbp-E0h] BYREF
  _BYTE v3[120]; // [rsp+68h] [rbp-78h] BYREF

  hyper_util::client::proxy::matcher::Builder::from_env::h2c6e10f964943a0b(v3); /*0x100df0818*/
  hyper_util::client::proxy::matcher::mac::with_system::h985d7f3226db7417(v3); /*0x100df0820*/
  qmemcpy(v2, v3, sizeof(v2)); /*0x100df0838*/
  hyper_util::client::proxy::matcher::Builder::build::hbfe1cfa7a9b78212(a1, v2); /*0x100df0841*/
  return a1; /*0x100df0849*/
}