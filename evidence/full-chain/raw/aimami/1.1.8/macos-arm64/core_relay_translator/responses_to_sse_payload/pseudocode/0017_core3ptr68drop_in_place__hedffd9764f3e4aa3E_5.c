// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND responses_to_sse_payload node 0x1006e1c80 depth=2
__int64 __fastcall core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$serde_json..value..Value$GT$$GT$::hedffd9764f3e4aa3(
        _QWORD *a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rdi
  __int64 result; // rax

  v2 = a1[2] + 1LL; /*0x1006e1c99*/
  v3 = (_QWORD *)a1[1]; /*0x1006e1c9c*/
  while ( v2 != 1 ) /*0x1006e1ca4*/
  {
    --v2; /*0x1006e1caa*/
    result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v3); /*0x1006e1cad*/
    v3 += 4; /*0x1006e1cb2*/
  }
  if ( *a1 ) /*0x1006e1cb7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006e1cd9*/
  return result; /*0x1006e1ccf*/
}