// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_mcp_servers node 0x10111fa80 depth=2
// Alternative name is '__ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$8grow_one17h1041a70fc9e52b3aE'
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h7dcd16e4969e8b44(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x10111fa99*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x10111fa9f*/
    v1 = 2 * *a1; /*0x10111fa9f*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h1e7bbc5e21182956(&v3, *a1, a1[1], v1, 8, 64); /*0x10111faba*/
  if ( v3 == 1 ) /*0x10111fac3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x10111fae1*/
  result = v4; /*0x10111fac5*/
  a1[1] = v4; /*0x10111fac9*/
  *a1 = v1; /*0x10111facd*/
  return result; /*0x10111fad0*/
}