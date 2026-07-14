// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b57220 depth=2
__int64 *__fastcall hyper_util::client::legacy::connect::http::HttpConnector$LT$R$GT$::new_with_resolver::hac1dd0e61b4c85ae(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b5723e*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xA8u, 8u); /*0x100b5724d*/
  if ( !v4 ) /*0x100b57255*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 168); /*0x100b572e9*/
  *(_QWORD *)v4 = 1; /*0x100b5725b*/
  *(_QWORD *)(v4 + 8) = 1; /*0x100b57262*/
  *(_QWORD *)(v4 + 16) = 0; /*0x100b5726a*/
  *(_QWORD *)(v4 + 32) = 0; /*0x100b57272*/
  *(_DWORD *)(v4 + 48) = 0; /*0x100b5727a*/
  *(_DWORD *)(v4 + 64) = 1000000000; /*0x100b57281*/
  *(_DWORD *)(v4 + 80) = 1000000000; /*0x100b57288*/
  *(_DWORD *)(v4 + 96) = 1000000000; /*0x100b5728f*/
  *(_QWORD *)(v4 + 104) = 0; /*0x100b57296*/
  *(_DWORD *)(v4 + 112) = 300000000; /*0x100b5729e*/
  *(_QWORD *)(v4 + 120) = 0; /*0x100b572a5*/
  *(_WORD *)(v4 + 136) = 1; /*0x100b572ad*/
  *(_BYTE *)(v4 + 142) = 0; /*0x100b572b6*/
  *(_WORD *)(v4 + 159) = 0; /*0x100b572bd*/
  *a1 = v4; /*0x100b572c6*/
  a1[1] = a2; /*0x100b572c9*/
  a1[2] = a3; /*0x100b572cd*/
  return a1; /*0x100b572d4*/
}