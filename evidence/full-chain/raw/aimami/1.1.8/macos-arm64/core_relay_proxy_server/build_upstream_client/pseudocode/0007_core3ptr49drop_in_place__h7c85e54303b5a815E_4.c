// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b2c320 depth=2
__int64 __fastcall core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h7c85e54303b5a815(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 i; // r13
  __int64 result; // rax

  if ( a1[10] ) /*0x100b2c331*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2c347*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7d19d717653625ea((__int64)(a1 + 3)); /*0x100b2c353*/
  if ( a1[3] ) /*0x100b2c358*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2c36d*/
  v2 = a1[7] + 56LL; /*0x100b2c37a*/
  for ( i = a1[8] + 1LL; i != 1; --i ) /*0x100b2c37e*/
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v2 - 24) + 32LL))( /*0x100b2c3a9*/
      v2,
      *(_QWORD *)(v2 - 16),
      *(_QWORD *)(v2 - 8));
    v2 += 72; /*0x100b2c3ac*/
  }
  result = a1[6]; /*0x100b2c3b1*/
  if ( result ) /*0x100b2c3b8*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b2c3d8*/
  return result; /*0x100b2c3ce*/
}