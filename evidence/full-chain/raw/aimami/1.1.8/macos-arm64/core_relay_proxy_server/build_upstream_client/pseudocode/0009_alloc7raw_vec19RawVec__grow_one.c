// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x10110a8e0 depth=2
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h80331b437424b7d3(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x10110a8f9*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x10110a8ff*/
    v1 = 2 * *a1; /*0x10110a8ff*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf08d518c599f16ac(&v3, *a1, a1[1], v1, 8, 464); /*0x10110a91a*/
  if ( v3 == 1 ) /*0x10110a923*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x10110a941*/
  result = v4; /*0x10110a925*/
  a1[1] = v4; /*0x10110a929*/
  *a1 = v1; /*0x10110a92d*/
  return result; /*0x10110a930*/
}