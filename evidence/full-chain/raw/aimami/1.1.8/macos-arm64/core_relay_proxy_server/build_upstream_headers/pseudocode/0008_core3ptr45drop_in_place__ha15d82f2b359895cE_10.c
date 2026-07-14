// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1005eb4d0 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13

  v1 = *a1; /*0x1005eb4de*/
  v2 = **a1; /*0x1005eb4e1*/
  if ( v2 == 1 ) /*0x1005eb4e8*/
  {
    v3 = v1[1]; /*0x1005eb503*/
    if ( (v1[1] & 3) == 1 ) /*0x1005eb50f*/
    {
      v4 = *(_QWORD *)(v3 + 7); /*0x1005eb519*/
      if ( *(_QWORD *)v4 ) /*0x1005eb51d*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v3 - 1)); /*0x1005eb529*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x1005eb52b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005eb53b*/
      goto LABEL_10; /*0x1005eb53b*/
    }
  }
  else if ( !v2 && v1[2] ) /*0x1005eb4ef*/
  {
LABEL_10:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005eb54d*/
  }
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005eb563*/
}