// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_complete 0x101128490 d=2
__int64 __fastcall alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(__int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v3; // [rsp+8h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-20h]
  __int64 v5; // [rsp+18h] [rbp-18h]

  v1 = 4; /*0x1011284a9*/
  if ( (unsigned __int64)(2 * *a1) >= 5 ) /*0x1011284af*/
    v1 = 2 * *a1; /*0x1011284af*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::h762642490da8452f(&v3, *a1, a1[1], v1, 8); /*0x1011284ca*/
  if ( v3 == 1 ) /*0x1011284d3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v5); /*0x1011284f1*/
  result = v4; /*0x1011284d5*/
  a1[1] = v4; /*0x1011284d9*/
  *a1 = v1; /*0x1011284dd*/
  return result; /*0x1011284e0*/
}