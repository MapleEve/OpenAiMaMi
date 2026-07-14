// mac 1.1.8 upsert_relay_provider node va=0x101101550 depth=2
// alloc7raw_vec19RawVec::grow_one
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h268242bfb87af67e(__int64 *a1)
{
  unsigned __int64 v1; // r14
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x101101569*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x10110156f*/
    v1 = 2 * *a1; /*0x10110156f*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h1ffa785b217faa63(&v3, *a1, a1[1], v1, 8u, 232); /*0x10110158a*/
  if ( (_DWORD)v3 == 1 ) /*0x101101593*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x1011015b1*/
  result = v4; /*0x101101595*/
  a1[1] = v4; /*0x101101599*/
  *a1 = v1; /*0x10110159d*/
  return result; /*0x1011015a0*/
}