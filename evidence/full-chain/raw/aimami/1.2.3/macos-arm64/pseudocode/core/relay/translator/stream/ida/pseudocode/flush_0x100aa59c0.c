// __ZN13codexmate_lib4core5relay10translator6stream23AnthropicToOpenAiStream5flush @ 0x100aa59c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::flush::hd0bb8415045171e1(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r13
  size_t v3; // r14
  __int64 v4; // r9
  void *v5; // r15
  size_t v6; // r12
  size_t v7; // r14
  __int64 v8; // r9
  void *v9; // r15
  size_t v10; // r12
  __int64 v11; // r9
  size_t v12; // r14
  __int64 v13; // rax
  __int64 v15; // [rsp+8h] [rbp-58h] BYREF
  void *__src; // [rsp+10h] [rbp-50h]
  size_t __n; // [rsp+18h] [rbp-48h]
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h]
  size_t v20; // [rsp+30h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 101) )
  {
    *a1 = 0; /*0x100aa59da*/
    a1[1] = 1; /*0x100aa59e1*/
    a1[2] = 0; /*0x100aa59e9*/
  }
  else
  {
    *(_BYTE *)(a2 + 101) = 1; /*0x100aa59f6*/
    v18 = 0; /*0x100aa59fa*/
    v19 = 1; /*0x100aa5a02*/
    v20 = 0; /*0x100aa5a0a*/
    if ( *(_BYTE *)(a2 + 100) ) /*0x100aa5a12*/
    {
      v2 = 1; /*0x100aa5a18*/
      v3 = 0; /*0x100aa5a1e*/
    }
    else
    {
      *(_BYTE *)(a2 + 100) = 1; /*0x100aa5a23*/
      codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::role_chunk::h2e72a2692fdff48c( /*0x100aa5a2f*/
        (__int64)&v15,
        a2);
      v5 = __src; /*0x100aa5a34*/
      v6 = __n; /*0x100aa5a38*/
      if ( __n ) /*0x100aa5a3f*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v18, 0, __n, 1, 1, v4); /*0x100aa5b95*/
        v2 = v19; /*0x100aa5b9a*/
        v7 = v20; /*0x100aa5b9e*/
      }
      else
      {
        v2 = 1; /*0x100aa5a45*/
        v7 = 0; /*0x100aa5a4b*/
      }
      memcpy((void *)(v2 + v7), v5, v6); /*0x100aa5a59*/
      v3 = v6 + v7; /*0x100aa5a5e*/
      v20 = v3; /*0x100aa5a61*/
      if ( v15 ) /*0x100aa5a6c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v15, 1); /*0x100aa5a76*/
    }
    codexmate_lib::core::relay::translator::stream::AnthropicToOpenAiStream::final_chunk::ha5572247707e26bb( /*0x100aa5a8f*/
      &v15,
      a2,
      "stop",
      4u);
    v9 = __src; /*0x100aa5a94*/
    v10 = __n; /*0x100aa5a98*/
    if ( __n > v18 - v3 ) /*0x100aa5aa6*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v18, v3, __n, 1, 1, v8); /*0x100aa5b46*/
      v2 = v19; /*0x100aa5b4b*/
      v3 = v20; /*0x100aa5b4f*/
    }
    memcpy((void *)(v2 + v3), v9, v10); /*0x100aa5ab7*/
    v12 = v10 + v3; /*0x100aa5abc*/
    v20 = v12; /*0x100aa5abf*/
    if ( v15 ) /*0x100aa5aca*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v15, 1); /*0x100aa5ad4*/
    if ( v18 - v12 <= 0xD ) /*0x100aa5ae4*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v18, v12, 14, 1, 1, v11); /*0x100aa5b6f*/
      v2 = v19; /*0x100aa5b74*/
      v12 = v20; /*0x100aa5b78*/
    }
    qmemcpy((void *)(v2 + v12), "data: [DONE]\n\n", 14);
    v20 = v12 + 14; /*0x100aa5b08*/
    a1[2] = v12 + 14; /*0x100aa5b0c*/
    v13 = v18; /*0x100aa5b10*/
    a1[1] = v19; /*0x100aa5b18*/
    *a1 = v13; /*0x100aa5b1c*/
  }
  return a1; /*0x100aa5b22*/
}