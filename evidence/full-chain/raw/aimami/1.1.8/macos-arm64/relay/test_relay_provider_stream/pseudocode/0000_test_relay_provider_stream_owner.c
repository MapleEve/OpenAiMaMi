// mac 1.1.8 test_relay_provider_stream node va=0x1000a8f90 depth=0
// test_relay_provider_stream_owner
double __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..relay..test_relay_provider_stream..$u7b$$u7b$closure$u7d$$u7d$$GT$::h55bb64472cfea066(
        __int64 a1)
{
  double result; // xmm0_8
  __int64 v2; // rsi

  if ( *(_BYTE *)(a1 + 1584) ) /*0x1000a8f9a*/
  {
    if ( *(_BYTE *)(a1 + 1584) != 3 ) /*0x1000a8fa8*/
      return result; /*0x1000a8fa8*/
    if ( *(_BYTE *)(a1 + 1576) == 3 ) /*0x1000a8fb8*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..health_check..test_provider_staged..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc1c98660046328a9(a1 + 448); /*0x1000a9039*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(a1 + 216); /*0x1000a9045*/
      *(_BYTE *)(a1 + 1577) = 0; /*0x1000a904a*/
      if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 96)) ) /*0x1000a9055*/
        goto LABEL_19; /*0x1000a9059*/
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 1576) && !__OFSUB__(-*(_QWORD *)(a1 + 104), 1) && *(_QWORD *)(a1 + 104) ) /*0x1000a8fc2*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 104), 1); /*0x1000a8fd5*/
      if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 96)) ) /*0x1000a8fde*/
        goto LABEL_19; /*0x1000a8fe2*/
    }
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb0553122a3c629b0(a1 + 96); /*0x1000a905f*/
LABEL_19:
    *(_BYTE *)(a1 + 1585) = 0; /*0x1000a9064*/
    v2 = *(_QWORD *)(a1 + 72); /*0x1000a906b*/
    if ( v2 ) /*0x1000a9072*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 80), v2, 1); /*0x1000a9081*/
    return result; /*0x1000a9081*/
  }
  if ( *(_QWORD *)a1 ) /*0x1000a8fe6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1); /*0x1000a8ff7*/
  if ( !__OFSUB__(-*(_QWORD *)(a1 + 24), 1) && *(_QWORD *)(a1 + 24) ) /*0x1000a9000*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), 1); /*0x1000a9013*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 56)) ) /*0x1000a901c*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hb0553122a3c629b0(a1 + 56); /*0x1000a902d*/
  return result; /*0x1000a9029*/
}