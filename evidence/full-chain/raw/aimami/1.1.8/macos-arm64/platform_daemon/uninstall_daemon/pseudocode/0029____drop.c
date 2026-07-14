// mac 1.1.8 BEHAVIORAL-BACKEND uninstall_daemon node 0x101092640 depth=2
// _::drop
_BYTE *__fastcall _$LT$std..sys..process..unix..common..cstring_array..CStringArray$u20$as$u20$core..ops..drop..Drop$GT$::drop::h592902080c93a71d(
        __int64 a1)
{
  __int64 v1; // rbx
  bool v2; // cf
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r15
  _BYTE *result; // rax
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 16); /*0x10109264a*/
  v2 = v1 == 0; /*0x10109264e*/
  v3 = v1 - 1; /*0x10109264e*/
  if ( v2 ) /*0x101092652*/
    core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v3, 0, (__int64)&off_1015ADC08); /*0x1010926b5*/
  if ( v3 ) /*0x101092654*/
  {
    v4 = *(_QWORD *)(a1 + 8); /*0x101092656*/
    v5 = 8 * v3; /*0x10109265a*/
    v6 = 0; /*0x10109265e*/
    do /*0x101092677*/
    {
      result = (_BYTE *)alloc::ffi::c_str::CString::from_raw::hb0b0b2dbcea4c319(*(_QWORD *)(v4 + v6)); /*0x10109267d*/
      *result = 0; /*0x101092682*/
      if ( v8 ) /*0x101092688*/
        result = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101092695*/
      v6 += 8; /*0x101092670*/
    }
    while ( v5 != v6 ); /*0x101092677*/
  }
  return result; /*0x1010926a0*/
}