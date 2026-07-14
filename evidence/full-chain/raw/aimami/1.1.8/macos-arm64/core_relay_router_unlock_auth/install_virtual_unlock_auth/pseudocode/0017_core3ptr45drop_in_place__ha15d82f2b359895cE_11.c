// mac 1.1.8 behavioral install_virtual_unlock_auth 0x10069e8e0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13

  v1 = *a1; /*0x10069e8ee*/
  v2 = **a1; /*0x10069e8f1*/
  if ( v2 == 1 ) /*0x10069e8f8*/
  {
    v3 = v1[1]; /*0x10069e913*/
    if ( (v1[1] & 3) == 1 ) /*0x10069e91f*/
    {
      v4 = *(_QWORD *)(v3 + 7); /*0x10069e929*/
      if ( *(_QWORD *)v4 ) /*0x10069e92d*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v3 - 1)); /*0x10069e939*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x10069e93b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10069e94b*/
      goto LABEL_10; /*0x10069e94b*/
    }
  }
  else if ( !v2 && v1[2] ) /*0x10069e8ff*/
  {
LABEL_10:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10069e95d*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10069e973*/
}