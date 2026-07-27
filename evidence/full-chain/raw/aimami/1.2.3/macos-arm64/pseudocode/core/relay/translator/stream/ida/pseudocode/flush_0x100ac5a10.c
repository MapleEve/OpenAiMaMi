// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream5flush @ 0x100ac5a10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::flush::hbbf48238264a5f19(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // r9
  void *v4; // r15
  size_t v5; // r12
  __int64 v6; // rdi
  size_t v7; // r13
  __int64 v8; // r9
  void *v9; // r14
  size_t v10; // r15
  size_t v11; // r12
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-58h] BYREF
  void *__src; // [rsp+10h] [rbp-50h]
  size_t __n; // [rsp+18h] [rbp-48h]
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h]
  size_t v19; // [rsp+30h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 365) ) /*0x100ac5a24*/
  {
    *a1 = 0; /*0x100ac5a2d*/
    a1[1] = 1; /*0x100ac5a34*/
    a1[2] = 0; /*0x100ac5a3c*/
  }
  else
  {
    *(_BYTE *)(a2 + 365) = 1; /*0x100ac5a4c*/
    v17 = 0; /*0x100ac5a53*/
    v18 = 1; /*0x100ac5a5b*/
    v19 = 0; /*0x100ac5a63*/
    if ( !*(_BYTE *)(a2 + 364) ) /*0x100ac5a6b*/
    {
      codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_created::hc26f89a9f2216241( /*0x100ac5a7b*/
        &v14,
        a2);
      v4 = __src; /*0x100ac5a80*/
      v5 = __n; /*0x100ac5a84*/
      if ( __n ) /*0x100ac5a8b*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v17, 0, __n, 1, 1, v3); /*0x100ac5b98*/
        v6 = v18; /*0x100ac5b9d*/
        v7 = v19; /*0x100ac5ba1*/
      }
      else
      {
        v6 = 1; /*0x100ac5a91*/
        v7 = 0; /*0x100ac5a96*/
      }
      memcpy((void *)(v7 + v6), v4, v5); /*0x100ac5aa2*/
      v19 = v5 + v7; /*0x100ac5aaa*/
      if ( v14 ) /*0x100ac5ab5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v14, 1); /*0x100ac5abf*/
    }
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_thinking_block::h437259882a7eca68( /*0x100ac5acb*/
      a2,
      &v17);
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_text_block::h9e7dc35fe5891c9d( /*0x100ac5ad7*/
      (_QWORD *)a2,
      &v17);
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_tool_blocks::h5dcb0d71adf5eb70( /*0x100ac5ae3*/
      (_QWORD *)a2,
      (__int64)&v17);
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_completed::h5f3d3616a675ff4b( /*0x100ac5aef*/
      (__int64)&v14,
      a2);
    v9 = __src; /*0x100ac5af4*/
    v10 = __n; /*0x100ac5af8*/
    v11 = v19; /*0x100ac5b00*/
    if ( __n > v17 - v19 ) /*0x100ac5b0a*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v17, v19, __n, 1, 1, v8); /*0x100ac5b79*/
      v11 = v19; /*0x100ac5b7e*/
    }
    memcpy((void *)(v11 + v18), v9, v10); /*0x100ac5b19*/
    v19 = v10 + v11; /*0x100ac5b21*/
    if ( v14 ) /*0x100ac5b2c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v14, 1); /*0x100ac5b36*/
    a1[2] = v19; /*0x100ac5b3f*/
    v12 = v17; /*0x100ac5b43*/
    a1[1] = v18; /*0x100ac5b4b*/
    *a1 = v12; /*0x100ac5b4f*/
  }
  return a1; /*0x100ac5b55*/
}