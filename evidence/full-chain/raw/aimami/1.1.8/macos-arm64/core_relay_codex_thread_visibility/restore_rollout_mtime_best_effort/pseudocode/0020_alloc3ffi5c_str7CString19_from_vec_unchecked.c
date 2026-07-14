// mac 1.1.8 behavioral restore_rollout_mtime_best_effort 0x1010d9940 d=4
__int64 __fastcall alloc::ffi::c_str::CString::_from_vec_unchecked::hf813a0aca6310dca(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r14
  _BYTE *v3; // r15
  unsigned __int64 v4; // r14
  __int64 result; // rax
  int v6; // [rsp+0h] [rbp-30h] BYREF
  __int64 v7; // [rsp+8h] [rbp-28h]
  __int64 v8; // [rsp+10h] [rbp-20h]

  v1 = *a1; /*0x1010d994d*/
  v2 = a1[2]; /*0x1010d9950*/
  if ( *a1 == v2 ) /*0x1010d9957*/
  {
    v1 = v2 + 1; /*0x1010d99b9*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h9cd9672d40ea281a(&v6, v2, a1[1], v2 + 1); /*0x1010d99ce*/
    if ( v6 == 1 ) /*0x1010d99d7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v8); /*0x1010d99f1*/
    a1[1] = v7; /*0x1010d99e0*/
  }
  v3 = (_BYTE *)a1[1]; /*0x1010d9959*/
  v3[v2] = 0; /*0x1010d995d*/
  v4 = v2 + 1; /*0x1010d9962*/
  if ( v1 <= v4 ) /*0x1010d9968*/
    return (__int64)v3; /*0x1010d9996*/
  if ( v4 ) /*0x1010d9972*/
  {
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_realloc(v3); /*0x1010d997d*/
    if ( !result ) /*0x1010d9985*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x1010d998f*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010d99a1*/
    return 1; /*0x1010d99a6*/
  }
  return result; /*0x1010d99ae*/
}