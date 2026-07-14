// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x101114660 depth=2
// alloc7raw_vec19RawVec::grow_one
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc3b3c7e0bc34be38(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x101114679*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x10111467f*/
    v1 = 2 * *a1; /*0x10111467f*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hb1bf0e7a370b8332(&v3, *a1, a1[1], v1, 8, 24); /*0x10111469a*/
  if ( v3 == 1 ) /*0x1011146a3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x1011146c1*/
  result = v4; /*0x1011146a5*/
  a1[1] = v4; /*0x1011146a9*/
  *a1 = v1; /*0x1011146ad*/
  return result; /*0x1011146b0*/
}