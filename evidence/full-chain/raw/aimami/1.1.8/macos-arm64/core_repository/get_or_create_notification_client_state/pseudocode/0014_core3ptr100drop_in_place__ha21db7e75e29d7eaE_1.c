// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x100545de0 depth=2
__int64 __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::ha21db7e75e29d7ea(
        __int64 a1)
{
  _QWORD *v1; // rbx

  if ( *(_BYTE *)a1 != 6 ) /*0x100545dea*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(a1); /*0x100545e1b*/
  v1 = *(_QWORD **)(a1 + 8); /*0x100545dec*/
  if ( *v1 == 1 ) /*0x100545df7*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v1 + 1); /*0x100545e24*/
  }
  else if ( !*v1 ) /*0x100545df0*/
  {
    if ( v1[2] ) /*0x100545dfe*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100545e10*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100545e17*/
}