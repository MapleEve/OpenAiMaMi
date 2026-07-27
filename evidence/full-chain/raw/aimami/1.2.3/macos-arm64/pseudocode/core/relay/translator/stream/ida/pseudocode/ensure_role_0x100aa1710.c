// __ZN13codexmate_lib4core5relay10translator6stream23AnthropicToOpenAiStream11ensure_role @ 0x100aa1710 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::ensure_role::hf90773975f12cc1d(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  const void *v3; // rbx
  size_t v4; // r15
  __int64 v5; // r12
  double result; // xmm0_8
  _QWORD v7[2]; // [rsp+8h] [rbp-38h] BYREF
  size_t __n; // [rsp+18h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 100) ) /*0x100aa171f*/
  {
    *(_BYTE *)(a1 + 100) = 1; /*0x100aa172b*/
    codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::role_chunk::h2e72a2692fdff48c( /*0x100aa1733*/
      (__int64)v7,
      a1);
    v3 = (const void *)v7[1]; /*0x100aa1738*/
    v4 = __n; /*0x100aa173c*/
    v5 = a2[2]; /*0x100aa1743*/
    if ( __n > *a2 - v5 ) /*0x100aa174d*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(a2, a2[2], __n, 1, 1, v2); /*0x100aa179f*/
      v5 = a2[2]; /*0x100aa17a4*/
    }
    memcpy((void *)(v5 + a2[1]), v3, v4); /*0x100aa175c*/
    a2[2] = v4 + v5; /*0x100aa1764*/
    if ( v7[0] ) /*0x100aa176f*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v7[0], 1); /*0x100aa1779*/
  }
  return result; /*0x100aa177e*/
}