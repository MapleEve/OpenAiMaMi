// __ZN13codexmate_lib4core5relay10translator6stream23OpenAiToAnthropicStream5flush @ 0x100aada50 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::flush::h3e0622257d8ea8fb(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r15
  size_t v3; // r14
  __int64 v4; // r9
  void *v5; // r12
  size_t v6; // r13
  size_t v7; // r14
  __int64 v8; // r9
  void *v9; // r12
  size_t v10; // r13
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-58h] BYREF
  void *__src; // [rsp+10h] [rbp-50h]
  size_t __n; // [rsp+18h] [rbp-48h]
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h]
  size_t v18; // [rsp+30h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 109) ) /*0x100aada64*/
  {
    *a1 = 0; /*0x100aada6a*/
    a1[1] = 1; /*0x100aada71*/
    a1[2] = 0; /*0x100aada79*/
  }
  else
  {
    v16 = 0; /*0x100aada86*/
    v17 = 1; /*0x100aada8e*/
    v18 = 0; /*0x100aada96*/
    if ( *(_BYTE *)(a2 + 108) ) /*0x100aada9e*/
    {
      v2 = 1; /*0x100aadaa4*/
      v3 = 0; /*0x100aadaaa*/
    }
    else
    {
      *(_BYTE *)(a2 + 108) = 1; /*0x100aadaaf*/
      codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_message_start::h172b875acf9978ec( /*0x100aadabb*/
        (__int64)&v13,
        (_QWORD *)a2);
      v5 = __src; /*0x100aadac0*/
      v6 = __n; /*0x100aadac4*/
      if ( __n ) /*0x100aadacb*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v16, 0, __n, 1, 1, v4); /*0x100aadbc2*/
        v2 = v17; /*0x100aadbc7*/
        v7 = v18; /*0x100aadbcb*/
      }
      else
      {
        v2 = 1; /*0x100aadad1*/
        v7 = 0; /*0x100aadad7*/
      }
      memcpy((void *)(v2 + v7), v5, v6); /*0x100aadae4*/
      v3 = v6 + v7; /*0x100aadae9*/
      v18 = v3; /*0x100aadaec*/
      if ( v13 ) /*0x100aadaf7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v13, 1); /*0x100aadb01*/
    }
    codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_finish::h75b5ad39ebee2be7( /*0x100aadb1a*/
      &v13,
      a2,
      (__int64)"stop",
      4);
    v9 = __src; /*0x100aadb1f*/
    v10 = __n; /*0x100aadb23*/
    if ( __n > v16 - v3 ) /*0x100aadb31*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v16, v3, __n, 1, 1, v8); /*0x100aadb9f*/
      v2 = v17; /*0x100aadba4*/
      v3 = v18; /*0x100aadba8*/
    }
    memcpy((void *)(v3 + v2), v9, v10); /*0x100aadb3f*/
    v18 = v10 + v3; /*0x100aadb47*/
    if ( v13 ) /*0x100aadb52*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v13, 1); /*0x100aadb5c*/
    a1[2] = v18; /*0x100aadb65*/
    v11 = v16; /*0x100aadb69*/
    a1[1] = v17; /*0x100aadb71*/
    *a1 = v11; /*0x100aadb75*/
  }
  return a1; /*0x100aadb7b*/
}