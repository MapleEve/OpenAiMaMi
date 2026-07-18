// mac 1.2.2 NEW codexmate_lib4core12debug_bundle21thread_catalog_h 0x10044fed0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13

  v1 = *a1; /*0x10044fede*/
  v2 = **a1; /*0x10044fee1*/
  if ( v2 == 1 ) /*0x10044fee8*/
  {
    v3 = v1[1]; /*0x10044ff03*/
    if ( (v1[1] & 3) == 1 ) /*0x10044ff0f*/
    {
      v4 = *(_QWORD *)(v3 + 7); /*0x10044ff19*/
      if ( *(_QWORD *)v4 ) /*0x10044ff1d*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v3 - 1)); /*0x10044ff29*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x10044ff2b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10044ff3b*/
      goto LABEL_10; /*0x10044ff3b*/
    }
  }
  else if ( !v2 && v1[2] ) /*0x10044feef*/
  {
LABEL_10:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10044ff4d*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10044ff63*/
}