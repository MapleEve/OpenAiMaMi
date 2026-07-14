// mac 1.1.8 activate_relay_provider node va=0x1004b13f0 depth=3
// codexmate_lib4core5relay7storage17lazy_load_api_key
char __fastcall codexmate_lib::core::relay::storage::lazy_load_api_key::ha9615138a2254373(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp-40h] [rbp-40h] BYREF
  __int64 v8; // [rsp-38h] [rbp-38h]
  __int64 v9; // [rsp-30h] [rbp-30h]
  __int64 v10; // [rsp-28h] [rbp-28h]

  if ( *(_QWORD *)(a2 + 88) ) /*0x1004b13f0*/
    return 0; /*0x1004b13f9*/
  codexmate_lib::core::relay::keychain::get_api_key::h8c18c83d5092fbfd( /*0x1004b141c*/
    &v7,
    a1,
    *(void **)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  if ( (_BYTE)v7 ) /*0x1004b1425*/
  {
    v4 = v8; /*0x1004b1427*/
    goto LABEL_5; /*0x1004b1427*/
  }
  v4 = v8; /*0x1004b1440*/
  if ( __OFSUB__(-v8, 1) ) /*0x1004b1447*/
    return 0; /*0x1004b144c*/
  if ( !v10 ) /*0x1004b145e*/
  {
LABEL_5:
    if ( v4 ) /*0x1004b142e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004b1439*/
    return 0; /*0x1004b143e*/
  }
  v5 = a2; /*0x1004b1460*/
  if ( *(_QWORD *)(a2 + 72) ) /*0x1004b146b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004b147c*/
    v5 = a2; /*0x1004b1481*/
  }
  *(_QWORD *)(a2 + 88) = v10; /*0x1004b1488*/
  v6 = v8; /*0x1004b148c*/
  *(_QWORD *)(a2 + 80) = v9; /*0x1004b1493*/
  *(_QWORD *)(a2 + 72) = v6; /*0x1004b1497*/
  result = 1; /*0x1004b149a*/
  if ( !*(_BYTE *)(v5 + 228) ) /*0x1004b149c*/
    *(_BYTE *)(v5 + 228) = 1; /*0x1004b14a5*/
  return result; /*0x1004b13f9*/
}