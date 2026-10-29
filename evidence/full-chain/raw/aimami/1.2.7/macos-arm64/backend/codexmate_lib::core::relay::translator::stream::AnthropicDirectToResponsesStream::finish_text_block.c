// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::finish_text_block::h1c3335ab70e5a5f9; addr: 0x1002a9710; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:51Z
double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::finish_text_block::h1c3335ab70e5a5f9(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  _DWORD *v5; // rax
  void *v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int64 *v10; // r15
  signed __int64 v11; // rbx
  __int64 v12; // r15
  const void *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rbx
  void *v19; // rax
  __int64 v20; // r14
  const void *v21; // r14
  size_t v22; // rbx
  __int64 v23; // r15
  double result; // xmm0_8
  size_t __n; // [rsp+8h] [rbp-C8h]
  _QWORD *v26; // [rsp+10h] [rbp-C0h]
  __int64 v27; // [rsp+20h] [rbp-B0h] BYREF
  void *__src; // [rsp+28h] [rbp-A8h]
  size_t v29; // [rsp+30h] [rbp-A0h]
  _QWORD v30[2]; // [rsp+38h] [rbp-98h] BYREF
  __int64 v31; // [rsp+48h] [rbp-88h]
  _QWORD v32[2]; // [rsp+50h] [rbp-80h] BYREF
  size_t v33; // [rsp+60h] [rbp-70h]
  __int64 v34; // [rsp+70h] [rbp-60h] BYREF
  _DWORD *v35; // [rsp+78h] [rbp-58h]
  __int64 v36; // [rsp+80h] [rbp-50h]
  char v37[8]; // [rsp+88h] [rbp-48h] BYREF
  __int64 v38; // [rsp+90h] [rbp-40h]
  __int64 v39; // [rsp+98h] [rbp-38h]
  __int64 v40; // [rsp+A0h] [rbp-30h]

  codexmate_lib::core::relay::translator::anthropic_text::TextProjection::finish_block::hab87c391927773eb(&v27, a2 + 24); /*0x1002a9738*/
  if ( v29 ) /*0x1002a9747*/
  {
    __n = v29; /*0x1002a974d*/
    v26 = a3; /*0x1002a9754*/
    v30[0] = 0; /*0x1002a975b*/
    v31 = 0; /*0x1002a9766*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v27); /*0x1002a9771*/
    v4 = 4; /*0x1002a9776*/
    v5 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002a9785*/
    if ( !v5 ) /*0x1002a978d*/
      goto LABEL_34; /*0x1002a978d*/
    *v5 = 1701869940; /*0x1002a9796*/
    v34 = 4; /*0x1002a979c*/
    v35 = v5; /*0x1002a97a4*/
    v36 = 4; /*0x1002a97a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1002a97b0*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x1002a97bf*/
    if ( !v6 ) /*0x1002a97c7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x1002a9bf3*/
    qmemcpy(v6, "response.output_text.delta", 26); /*0x1002a97f3*/
    v37[0] = 3; /*0x1002a97fc*/
    v38 = 26; /*0x1002a9800*/
    v39 = (__int64)v6; /*0x1002a9808*/
    v40 = 26; /*0x1002a980c*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v32, v30, &v34, v37); /*0x1002a9827*/
    if ( LOBYTE(v32[0]) != 6 ) /*0x1002a9830*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v32); /*0x1002a9836*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32); /*0x1002a983b*/
    v4 = 12; /*0x1002a9840*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1002a984f*/
    if ( !v7 ) /*0x1002a9857*/
      goto LABEL_34; /*0x1002a9857*/
    qmemcpy(v7, "output_index", 12); /*0x1002a9867*/
    v34 = 12; /*0x1002a9871*/
    v35 = v7; /*0x1002a9879*/
    v36 = 12; /*0x1002a987d*/
    v8 = *(unsigned int *)(a2 + 112); /*0x1002a9885*/
    v37[0] = 2; /*0x1002a988a*/
    v38 = 0; /*0x1002a988e*/
    v39 = v8; /*0x1002a9896*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v32, v30, &v34, v37); /*0x1002a98ad*/
    if ( LOBYTE(v32[0]) != 6 ) /*0x1002a98b6*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v32); /*0x1002a98bc*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32); /*0x1002a98c1*/
    v4 = 7; /*0x1002a98c6*/
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1002a98d5*/
    if ( !v9 ) /*0x1002a98dd*/
      goto LABEL_34; /*0x1002a98dd*/
    v10 = (__int64 *)(a1 + 768); /*0x1002a98e6*/
    *(_DWORD *)((char *)v9 + 3) = 1684627309; /*0x1002a98ed*/
    *v9 = 1835365481; /*0x1002a98f4*/
    v34 = 7; /*0x1002a98fa*/
    v35 = v9; /*0x1002a9902*/
    v36 = 7; /*0x1002a9906*/
    v11 = *(_QWORD *)(a2 + 16); /*0x1002a990e*/
    if ( v11 < 0 ) /*0x1002a9916*/
    {
      v12 = 0; /*0x1002a9918*/
      goto LABEL_12; /*0x1002a9918*/
    }
    v13 = *(const void **)(a2 + 8); /*0x1002a992b*/
    if ( v11 ) /*0x1002a9930*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7); /*0x1002a9939*/
      v12 = 1; /*0x1002a993e*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x1002a994c*/
      if ( !v14 ) /*0x1002a9954*/
LABEL_12:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x1002a991b*/
      v15 = v14; /*0x1002a9956*/
      v10 = (__int64 *)(a1 + 768); /*0x1002a9959*/
    }
    else
    {
      v15 = 1; /*0x1002a9962*/
    }
    memcpy((void *)v15, v13, v11); /*0x1002a9971*/
    v37[0] = 3; /*0x1002a9976*/
    v38 = v11; /*0x1002a997a*/
    v39 = v15; /*0x1002a997e*/
    v40 = v11; /*0x1002a9982*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v32, v30, &v34, v37); /*0x1002a9999*/
    if ( LOBYTE(v32[0]) != 6 ) /*0x1002a99a2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v32); /*0x1002a99a8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32); /*0x1002a99ad*/
    v4 = 13; /*0x1002a99b2*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1002a99c1*/
    if ( !v16 ) /*0x1002a99c9*/
      goto LABEL_34; /*0x1002a99c9*/
    qmemcpy(v16, "content_index", 13); /*0x1002a99e7*/
    v34 = 13; /*0x1002a99ea*/
    v35 = v16; /*0x1002a99f2*/
    v36 = 13; /*0x1002a99f6*/
    v37[0] = 2; /*0x1002a99fe*/
    v38 = 0; /*0x1002a9a02*/
    v39 = 0; /*0x1002a9a0a*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v32, v30, &v34, v37); /*0x1002a9a25*/
    if ( LOBYTE(v32[0]) != 6 ) /*0x1002a9a2e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v32); /*0x1002a9a34*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32); /*0x1002a9a39*/
    v4 = 5; /*0x1002a9a3e*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1002a9a4d*/
    if ( !v17 ) /*0x1002a9a55*/
LABEL_34:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x1002a9be2*/
    *(_BYTE *)(v17 + 4) = 97; /*0x1002a9a5e*/
    *(_DWORD *)v17 = 1953260900; /*0x1002a9a62*/
    v34 = 5; /*0x1002a9a68*/
    v35 = (_DWORD *)v17; /*0x1002a9a70*/
    v36 = 5; /*0x1002a9a74*/
    v18 = __src; /*0x1002a9a7c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5); /*0x1002a9a83*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1002a9a97*/
    if ( !v19 ) /*0x1002a9a9f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x1002a9c02*/
    v20 = (__int64)v19; /*0x1002a9aa5*/
    memcpy(v19, v18, __n); /*0x1002a9ab1*/
    v37[0] = 3; /*0x1002a9ab6*/
    v38 = __n; /*0x1002a9aba*/
    v39 = v20; /*0x1002a9abe*/
    v40 = __n; /*0x1002a9ac2*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v32, v30, &v34, v37); /*0x1002a9ad9*/
    if ( LOBYTE(v32[0]) != 6 ) /*0x1002a9ae2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v32); /*0x1002a9ae8*/
    v38 = v30[0]; /*0x1002a9afb*/
    v39 = v30[1]; /*0x1002a9aff*/
    v40 = v31; /*0x1002a9b0a*/
    v37[0] = 5; /*0x1002a9b0e*/
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h4082c4e542f661cc( /*0x1002a9b29*/
      v32,
      v10,
      (__int64)"response.output_text.deltaresponse.reasoning_summary_text.done",
      (__int64 (__fastcall *)())0x1A,
      v37);
    v21 = (const void *)v32[1]; /*0x1002a9b2e*/
    v22 = v33; /*0x1002a9b32*/
    v23 = v26[2]; /*0x1002a9b41*/
    if ( v33 > *v26 - v23 ) /*0x1002a9b4c*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(v26, v26[2], v33, 1, 1); /*0x1002a9bcb*/
      v23 = v26[2]; /*0x1002a9bd0*/
    }
    memcpy((void *)(v23 + v26[1]), v21, v22); /*0x1002a9b5c*/
    v26[2] = v22 + v23; /*0x1002a9b64*/
    if ( v32[0] ) /*0x1002a9b70*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v32[0], 1); /*0x1002a9b7a*/
    result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v37); /*0x1002a9b83*/
  }
  if ( v27 ) /*0x1002a9b92*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v27, 1); /*0x1002a9ba0*/
  return result; /*0x1002a9ba5*/
}