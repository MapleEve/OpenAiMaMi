// mac 1.1.8 test_relay_provider_stream node va=0x1000aaa10 depth=5
// core3ptr114drop_in_place::hc4c89cbca36bb6e2E_0
__int64 __fastcall core::ptr::drop_in_place$LT$tower..retry..Retry$LT$reqwest..retry..Policy$C$reqwest..async_impl..client..HyperService$GT$$GT$::hc4c89cbca36bb6e2(
        __int64 a1)
{
  volatile signed __int64 *v1; // rax
  volatile signed __int64 *v2; // rax

  v1 = *(volatile signed __int64 **)(a1 + 264); /*0x1000aaa1a*/
  if ( v1 && !_InterlockedDecrement64(v1) ) /*0x1000aaa26*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::ha2204132ef099176(a1 + 264); /*0x1000aaa33*/
  if ( *(_DWORD *)(a1 + 240) >= 2u && !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 248)) ) /*0x1000aaa48*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe6834b48e3dcc53((__int64 *)(a1 + 248)); /*0x1000aaa55*/
  v2 = *(volatile signed __int64 **)(a1 + 272); /*0x1000aaa5a*/
  if ( v2 && !_InterlockedDecrement64(v2) ) /*0x1000aaa66*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe6834b48e3dcc53((__int64 *)(a1 + 272)); /*0x1000aaa73*/
  return core::ptr::drop_in_place$LT$reqwest..async_impl..client..HyperService$GT$::h5e4ae044f213aa5a(a1); /*0x1000aaa7b*/
}