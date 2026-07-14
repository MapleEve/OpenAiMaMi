// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x100549370 depth=2
__int64 __fastcall core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r12

  result = *a1; /*0x10054937b*/
  if ( (*(_DWORD *)a1 & 3) == 1 ) /*0x100549386*/
  {
    v2 = *(_QWORD *)(result + 7); /*0x100549399*/
    if ( *(_QWORD *)v2 ) /*0x10054939d*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(result - 1)); /*0x1005493a9*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x1005493ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005493bd*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005493d7*/
  }
  return result; /*0x100549388*/
}