// mac 1.1.8 get_relay_provider_quota node va=0x100b00740 depth=4
// core3ptr44drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$reqwest..proxy..Matcher$GT$::he79c42ba748c7da0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // r12

  if ( __OFSUB__(0, *(_QWORD *)(a1 + 136)) ) /*0x100b0075a*/
  {
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 168)) ) /*0x100b0076a*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe6834b48e3dcc53((__int64 *)(a1 + 168)); /*0x100b00777*/
    v1 = *(_QWORD *)(a1 + 144); /*0x100b0077c*/
    if ( v1 != 0x8000000000000000LL && v1 ) /*0x100b0078f*/
LABEL_19:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b0085f*/
  }
  else
  {
    if ( *(_QWORD *)(a1 + 184) != 0x8000000000000002LL ) /*0x100b007b1*/
      core::ptr::drop_in_place$LT$hyper_util..client..proxy..matcher..Intercept$GT$::h8af8b0c3c4f83cd5(a1 + 184); /*0x100b007ba*/
    if ( *(_QWORD *)(a1 + 320) != 0x8000000000000002LL ) /*0x100b007c6*/
      core::ptr::drop_in_place$LT$hyper_util..client..proxy..matcher..Intercept$GT$::h8af8b0c3c4f83cd5(a1 + 320); /*0x100b007cf*/
    if ( *(_QWORD *)(a1 + 136) ) /*0x100b007d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b007f3*/
    v2 = *(_QWORD *)(a1 + 176); /*0x100b007ff*/
    if ( v2 ) /*0x100b00809*/
    {
      v3 = *(_QWORD *)(a1 + 168) + 8LL; /*0x100b0080b*/
      do /*0x100b00827*/
      {
        if ( *(_QWORD *)(v3 - 8) ) /*0x100b00829*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100b0083c*/
        v3 += 24; /*0x100b00820*/
        --v2; /*0x100b00824*/
      }
      while ( v2 ); /*0x100b00827*/
    }
    if ( *(_QWORD *)(a1 + 160) ) /*0x100b00843*/
      goto LABEL_19; /*0x100b0084d*/
  }
  if ( *(_BYTE *)(a1 + 128) != 2 ) /*0x100b0086b*/
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 96) + 32LL))( /*0x100b0087d*/
      a1 + 120,
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 112));
  return core::ptr::drop_in_place$LT$core..option..Option$LT$http..header..map..HeaderMap$GT$$GT$::h3bf179d7b491f74b(a1); /*0x100b00883*/
}