// mac 1.1.8 test_relay_provider_stream node va=0x100b11b00 depth=4
// alloc4sync16Arc::drop_slow
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdc6de128d31cb84a(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 result; // rax

  v1 = *a1; /*0x100b11b0b*/
  v2 = *a1 + 16; /*0x100b11b0e*/
  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h7c85e54303b5a815(*a1 + 352); /*0x100b11b19*/
  core::ptr::drop_in_place$LT$tower..retry..Retry$LT$reqwest..retry..Policy$C$reqwest..async_impl..client..HyperService$GT$$GT$::hcf8ac3daec291689(v2); /*0x100b11b21*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 336)) ) /*0x100b11b2d*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::had6be344b730d94d(v1 + 336); /*0x100b11b3a*/
  v3 = *(_QWORD *)(v1 + 328); /*0x100b11b46*/
  if ( v3 ) /*0x100b11b50*/
  {
    v4 = *(_QWORD *)(v1 + 320) + 8LL; /*0x100b11b52*/
    do /*0x100b11b67*/
    {
      if ( *(_QWORD *)(v4 - 8) ) /*0x100b11b69*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b11b7c*/
      v4 += 88; /*0x100b11b60*/
      --v3; /*0x100b11b64*/
    }
    while ( v3 ); /*0x100b11b67*/
  }
  if ( *(_QWORD *)(v1 + 312) ) /*0x100b11b83*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b11b9b*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 504)) ) /*0x100b11ba7*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h7706a98d4963d3df(v1 + 504); /*0x100b11bb4*/
  result = -*(_QWORD *)(v1 + 448); /*0x100b11bc3*/
  if ( !__OFSUB__(result, 1) && *(_QWORD *)(v1 + 448) ) /*0x100b11bc0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b11bd6*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x100b11be1*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b11bfd*/
  return result; /*0x100b11bf5*/
}