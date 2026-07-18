// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x1013a6ab0 d=1
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h5938a00ffec6ff8cE'
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h6486f20dadaa129cE'
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he1dc941f57474ec4(__int64 *a1)
{
  unsigned __int64 v1; // r14
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]

  v1 = 4; /*0x1013a6ac9*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x1013a6acf*/
    v1 = 2 * *a1; /*0x1013a6acf*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::he615ae145ac364e6(&v3, *a1, a1[1], v1, 8u, 64); /*0x1013a6aea*/
  if ( (_DWORD)v3 == 1 ) /*0x1013a6af3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4); /*0x1013a6b11*/
  result = v4; /*0x1013a6af5*/
  a1[1] = v4; /*0x1013a6af9*/
  *a1 = v1; /*0x1013a6afd*/
  return result; /*0x1013a6b00*/
}