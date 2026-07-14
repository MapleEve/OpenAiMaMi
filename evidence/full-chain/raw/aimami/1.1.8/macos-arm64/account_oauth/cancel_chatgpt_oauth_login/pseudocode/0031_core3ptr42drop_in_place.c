// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x1010af890 depth=3
// core3ptr42drop_in_place
__int64 __fastcall core::ptr::drop_in_place$LT$std..io..error..Error$GT$::ha17a254a70c10330(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r12

  result = *a1; /*0x1010af89b*/
  if ( (*(_DWORD *)a1 & 3) == 1 ) /*0x1010af8a6*/
  {
    v2 = *(_QWORD *)(result + 7); /*0x1010af8b9*/
    if ( *(_QWORD *)v2 ) /*0x1010af8bd*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(result - 1)); /*0x1010af8c9*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x1010af8cb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010af8dd*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010af8f7*/
  }
  return result; /*0x1010af8a8*/
}