// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream14ensure_created @ 0x100abac40 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::h4369870c09ea9ab6(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  double result; // xmm0_8
  const void *v4; // rbx
  size_t v5; // r15
  __int64 v6; // r12
  _QWORD v7[2]; // [rsp+8h] [rbp-38h] BYREF
  size_t __n; // [rsp+18h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 364) ) /*0x100abac4f*/
  {
    result = codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_created::hc26f89a9f2216241( /*0x100abac62*/
               v7,
               a1);
    v4 = (const void *)v7[1]; /*0x100abac67*/
    v5 = __n; /*0x100abac6b*/
    v6 = a2[2]; /*0x100abac72*/
    if ( __n > *a2 - v6 ) /*0x100abac7c*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(a2, a2[2], __n, 1, 1, v2); /*0x100abacce*/
      v6 = a2[2]; /*0x100abacd3*/
    }
    memcpy((void *)(v6 + a2[1]), v4, v5); /*0x100abac8b*/
    a2[2] = v5 + v6; /*0x100abac93*/
    if ( v7[0] ) /*0x100abac9e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v7[0], 1); /*0x100abaca8*/
  }
  return result; /*0x100abacad*/
}