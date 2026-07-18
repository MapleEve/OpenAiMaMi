// mac 1.2.2 NEW export_debug_bundle 0x1013d43d0 d=1
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]

  v1 = 4; /*0x1013d43e9*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x1013d43ef*/
    v1 = 2 * *a1; /*0x1013d43ef*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hb1bf0e7a370b8332(&v3, *a1, a1[1], v1, 8, 24); /*0x1013d440a*/
  if ( v3 == 1 ) /*0x1013d4413*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4); /*0x1013d4431*/
  result = v4; /*0x1013d4415*/
  a1[1] = v4; /*0x1013d4419*/
  *a1 = v1; /*0x1013d441d*/
  return result; /*0x1013d4420*/
}