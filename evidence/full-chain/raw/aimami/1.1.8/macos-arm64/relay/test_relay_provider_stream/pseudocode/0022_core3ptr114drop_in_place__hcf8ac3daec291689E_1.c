// mac 1.1.8 test_relay_provider_stream node va=0x100b0aae0 depth=5
// core3ptr114drop_in_place::hcf8ac3daec291689E_1
__int64 __fastcall core::ptr::drop_in_place$LT$tower..retry..Retry$LT$reqwest..retry..Policy$C$reqwest..async_impl..client..HyperService$GT$$GT$::hcf8ac3daec291689(
        __int64 a1)
{
  volatile signed __int64 *v1; // rax
  volatile signed __int64 *v2; // rax

  v1 = *(volatile signed __int64 **)(a1 + 264); /*0x100b0aaea*/
  if ( v1 && !_InterlockedDecrement64(v1) ) /*0x100b0aaf6*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h28736d088ed87f42(a1 + 264); /*0x100b0ab03*/
  if ( *(_DWORD *)(a1 + 240) >= 2u && !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 248)) ) /*0x100b0ab18*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe6834b48e3dcc53(a1 + 248); /*0x100b0ab25*/
  v2 = *(volatile signed __int64 **)(a1 + 272); /*0x100b0ab2a*/
  if ( v2 && !_InterlockedDecrement64(v2) ) /*0x100b0ab36*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hfe6834b48e3dcc53(a1 + 272); /*0x100b0ab43*/
  return core::ptr::drop_in_place$LT$reqwest..async_impl..client..HyperService$GT$::h7ebedba7fe3cbcdf(a1); /*0x100b0ab4b*/
}