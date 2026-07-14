// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1005f3450 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$std..net..tcp..TcpListener$C$std..io..error..Error$GT$$GT$::h5e072ede2f9d0326(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12

  if ( !*(_BYTE *)a1 ) /*0x1005f345b*/
    return close_NOCANCEL(*(unsigned int *)(a1 + 4)); /*0x1005f3482*/
  result = *(_QWORD *)(a1 + 8); /*0x1005f3460*/
  if ( (*(_DWORD *)(a1 + 8) & 3) == 1 ) /*0x1005f346c*/
  {
    v2 = *(_QWORD *)(result + 7); /*0x1005f348f*/
    if ( *(_QWORD *)v2 ) /*0x1005f3493*/
      (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(result - 1)); /*0x1005f349f*/
    if ( *(_QWORD *)(v2 + 8) ) /*0x1005f34a1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f34b3*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005f34cd*/
  }
  return result; /*0x1005f346e*/
}