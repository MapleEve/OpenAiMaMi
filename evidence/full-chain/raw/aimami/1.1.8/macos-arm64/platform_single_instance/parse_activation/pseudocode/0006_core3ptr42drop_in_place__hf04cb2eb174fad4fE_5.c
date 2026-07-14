// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100421da0 depth=2
// core3ptr42drop_in_place::hf04cb2eb174fad4fE_5
__int64 __fastcall core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r12

  result = *a1; /*0x100421dab*/
  if ( (*(_DWORD *)a1 & 3) == 1 ) /*0x100421db6*/
  {
    v2 = *(_QWORD *)(result + 7); /*0x100421dc9*/
    if ( *(_QWORD *)v2 ) /*0x100421dcd*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(result - 1)); /*0x100421dd9*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x100421ddb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100421ded*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100421e07*/
  }
  return result; /*0x100421db8*/
}