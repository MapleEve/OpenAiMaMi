// mac 1.1.8 behavioral install_virtual_unlock_auth 0x1006a0380 d=2
__int64 __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h4fb359e0125554c9(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12

  result = -a1; /*0x1006a038e*/
  if ( __OFSUB__(-a1, 1) ) /*0x1006a0391*/
  {
    result = a2 & 3; /*0x1006a03b2*/
    if ( (_DWORD)result == 1 ) /*0x1006a03b8*/
    {
      v3 = *(_QWORD *)(a2 + 7); /*0x1006a03cb*/
      if ( *(_QWORD *)v3 ) /*0x1006a03cf*/
        (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(a2 - 1)); /*0x1006a03db*/
      if ( *(_QWORD *)(v3 + 8) ) /*0x1006a03dd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006a03ef*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006a03ef*/
    }
  }
  else if ( a1 ) /*0x1006a0393*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006a03a3*/
  }
  return result; /*0x1006a03a3*/
}