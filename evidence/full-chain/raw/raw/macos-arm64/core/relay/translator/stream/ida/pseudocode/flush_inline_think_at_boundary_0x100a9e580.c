// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream30flush_inline_think_at_boundary @ 0x100a9e580 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::flush_inline_think_at_boundary::ha5d2a72723807855(
        __int64 a1,
        _QWORD *a2)
{
  void *v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  size_t v9; // r13
  __int64 v10; // rbx
  void *v11; // r14
  size_t v12; // r13
  double result; // xmm0_8
  __int64 v14; // r8
  __int64 v15; // r9
  size_t v16; // rbx
  size_t v17; // rsi
  void *v18; // rdi
  void *v19[2]; // [rsp+0h] [rbp-90h] BYREF
  size_t v20; // [rsp+10h] [rbp-80h]
  __int64 v21; // [rsp+18h] [rbp-78h]
  void *v22; // [rsp+20h] [rbp-70h]
  size_t v23; // [rsp+28h] [rbp-68h]
  size_t v24[3]; // [rsp+30h] [rbp-60h] BYREF
  void *v25; // [rsp+48h] [rbp-48h]
  __int64 v26; // [rsp+50h] [rbp-40h]
  void *v27; // [rsp+58h] [rbp-38h]
  size_t v28; // [rsp+60h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 112) ) /*0x100a9e597*/
  {
    if ( *(_BYTE *)(a1 + 112) != 1 ) /*0x100a9e5a6*/
      return result; /*0x100a9e5a6*/
    v28 = *(_QWORD *)(a1 + 88); /*0x100a9e5b1*/
    v2 = *(void **)(a1 + 96); /*0x100a9e5b5*/
    v3 = *(_QWORD *)(a1 + 104); /*0x100a9e5ba*/
    *(_QWORD *)(a1 + 88) = 0; /*0x100a9e5bf*/
    *(_QWORD *)(a1 + 96) = 1; /*0x100a9e5c8*/
    *(_QWORD *)(a1 + 104) = 0; /*0x100a9e5d1*/
    *(_BYTE *)(a1 + 112) = 2; /*0x100a9e5da*/
    codexmate_lib::core::relay::translator::split_leading_think_block::h4ed0c1254350f15e(v19, (__int64)v2, v3); /*0x100a9e5ed*/
    v6 = v19[0]; /*0x100a9e5f2*/
    if ( __OFSUB__(-(__int64)v19[0], 1) ) /*0x100a9e5fc*/
    {
      codexmate_lib::core::relay::translator::strip_leading_think_open_tag::hf8b9a36c2dfc5d12(v24, (__int64)v2, v3); /*0x100a9e60f*/
      v9 = v24[0]; /*0x100a9e61e*/
      if ( v24[0] == 0x8000000000000000LL ) /*0x100a9e625*/
      {
        v9 = v28; /*0x100a9e62b*/
        if ( !v3 ) /*0x100a9e632*/
          goto LABEL_25; /*0x100a9e632*/
      }
      else
      {
        v27 = (void *)v24[1]; /*0x100a9e752*/
        v3 = v24[2]; /*0x100a9e756*/
        if ( v28 ) /*0x100a9e761*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v28, 1); /*0x100a9e76b*/
        v2 = v27; /*0x100a9e770*/
        if ( !v3 ) /*0x100a9e777*/
          goto LABEL_25; /*0x100a9e777*/
      }
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_reasoning_delta::h2d795741751d5865( /*0x100a9e785*/
        a1,
        v2,
        v3,
        a2,
        v7,
        v8);
      result = codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29( /*0x100a9e790*/
                 (_QWORD *)a1,
                 a2);
LABEL_25:
      if ( !v9 ) /*0x100a9e798*/
        return result; /*0x100a9e798*/
      v18 = v2; /*0x100a9e79f*/
      v17 = v9; /*0x100a9e7a2*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100a9e7a2*/
    }
    v27 = v19[1]; /*0x100a9e6bc*/
    v26 = v21; /*0x100a9e6c8*/
    v25 = v22; /*0x100a9e6d0*/
    v16 = v23; /*0x100a9e6d4*/
    if ( v20 ) /*0x100a9e6db*/
    {
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_reasoning_delta::h2d795741751d5865( /*0x100a9e6e7*/
        a1,
        v27,
        v20,
        a2,
        v4,
        v5);
      result = codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29( /*0x100a9e6f2*/
                 (_QWORD *)a1,
                 a2);
    }
    if ( v16 ) /*0x100a9e6fa*/
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_text_delta::h49a6433a1b443499( /*0x100a9e709*/
        a1,
        v25,
        v16,
        a2,
        v4,
        v5);
    if ( v26 ) /*0x100a9e715*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v26, 1); /*0x100a9e720*/
    if ( v6 ) /*0x100a9e728*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v6, 1); /*0x100a9e736*/
    v17 = v28; /*0x100a9e73b*/
    if ( v28 ) /*0x100a9e742*/
    {
      v18 = v2; /*0x100a9e749*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100a9e7a5*/
    }
  }
  else
  {
    *(_BYTE *)(a1 + 112) = 2; /*0x100a9e63d*/
    v10 = *(_QWORD *)(a1 + 88); /*0x100a9e643*/
    v11 = *(void **)(a1 + 96); /*0x100a9e648*/
    v12 = *(_QWORD *)(a1 + 104); /*0x100a9e64d*/
    *(_QWORD *)(a1 + 88) = 0; /*0x100a9e652*/
    *(_QWORD *)(a1 + 96) = 1; /*0x100a9e65b*/
    *(_QWORD *)(a1 + 104) = 0; /*0x100a9e664*/
    if ( v12 ) /*0x100a9e670*/
    {
      result = codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29( /*0x100a9e678*/
                 (_QWORD *)a1,
                 a2);
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_text_delta::h49a6433a1b443499( /*0x100a9e689*/
        a1,
        v11,
        v12,
        a2,
        v14,
        v15);
    }
    if ( v10 ) /*0x100a9e691*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x100a9e6b0*/
  }
  return result; /*0x100a9e6a2*/
}