// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream27drain_complete_inline_think @ 0x100a9e450 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::drain_complete_inline_think::h20088e5ce42b1e2b(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  void *v4; // rbx
  void *v5; // rdx
  void *v6; // r15
  void *v7; // r12
  double result; // xmm0_8
  void *v9[6]; // [rsp+8h] [rbp-68h] BYREF
  void *v10; // [rsp+38h] [rbp-38h]
  void *v11; // [rsp+40h] [rbp-30h]

  codexmate_lib::core::relay::translator::split_leading_think_block::h4ed0c1254350f15e( /*0x100a9e473*/
    v9,
    *(_QWORD *)(a1 + 96),
    *(_QWORD *)(a1 + 104));
  v4 = v9[0]; /*0x100a9e478*/
  if ( !__OFSUB__(-(__int64)v9[0], 1) ) /*0x100a9e482*/
  {
    v10 = v9[1]; /*0x100a9e48c*/
    v5 = v9[2]; /*0x100a9e490*/
    v6 = v9[3]; /*0x100a9e494*/
    v11 = v9[4]; /*0x100a9e49c*/
    v7 = v9[5]; /*0x100a9e4a0*/
    *(_BYTE *)(a1 + 112) = 2; /*0x100a9e4a4*/
    *(_QWORD *)(a1 + 104) = 0; /*0x100a9e4a9*/
    if ( v5 ) /*0x100a9e4b4*/
    {
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_reasoning_delta::h2d795741751d5865( /*0x100a9e4c0*/
        a1,
        v10,
        (size_t)v5,
        a2,
        v2,
        v3);
      result = codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29( /*0x100a9e4cb*/
                 (_QWORD *)a1,
                 a2);
    }
    if ( v7 ) /*0x100a9e4d3*/
      codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_text_delta::h49a6433a1b443499( /*0x100a9e4e2*/
        a1,
        v11,
        (size_t)v7,
        a2,
        v2,
        v3);
    if ( v6 ) /*0x100a9e4ea*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v6, 1); /*0x100a9e4f8*/
    if ( v4 ) /*0x100a9e500*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v4, 1); /*0x100a9e51c*/
  }
  return result; /*0x100a9e50e*/
}