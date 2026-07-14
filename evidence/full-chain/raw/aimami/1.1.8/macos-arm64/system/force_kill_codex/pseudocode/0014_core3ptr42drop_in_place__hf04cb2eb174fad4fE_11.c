// mac 1.1.8 force_kill_codex node va=0x1006dcaa0 depth=2
// core3ptr42drop_in_place::hf04cb2eb174fad4fE_11
__int64 __fastcall core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r12

  result = *a1; /*0x1006dcaab*/
  if ( (*(_DWORD *)a1 & 3) == 1 ) /*0x1006dcab6*/
  {
    v2 = *(_QWORD *)(result + 7); /*0x1006dcac9*/
    if ( *(_QWORD *)v2 ) /*0x1006dcacd*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(result - 1)); /*0x1006dcad9*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x1006dcadb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006dcaed*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006dcb07*/
  }
  return result; /*0x1006dcab8*/
}