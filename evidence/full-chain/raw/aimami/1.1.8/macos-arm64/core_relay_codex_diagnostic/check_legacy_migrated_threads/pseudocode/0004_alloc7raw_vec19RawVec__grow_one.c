// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x101121a90 depth=1
// alloc7raw_vec19RawVec::grow_one
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf1c28b903a79a71b(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x101121aa9*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x101121aaf*/
    v1 = 2 * *a1; /*0x101121aaf*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h377e0610a3ee04be(&v3, *a1, a1[1], v1, 8, 16); /*0x101121aca*/
  if ( v3 == 1 ) /*0x101121ad3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x101121af1*/
  result = v4; /*0x101121ad5*/
  a1[1] = v4; /*0x101121ad9*/
  *a1 = v1; /*0x101121add*/
  return result; /*0x101121ae0*/
}