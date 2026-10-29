// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::fail_with_status::h40ace1ab3fbfea12; addr: 0x1002a8780; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:51Z
void __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::fail_with_status::h40ace1ab3fbfea12(
        _QWORD *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        void *a5,
        size_t a6,
        __int16 a7,
        unsigned __int16 a8)
{
  _QWORD *v11; // r14
  bool v12; // zf
  __int64 v13; // rbx
  __int64 *v14; // rax
  signed __int64 v15; // rbx
  __int64 v16; // r14
  const void *v17; // r12
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rax
  void *v22; // rax
  size_t v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  signed __int64 v27; // rbx
  __int64 v28; // r14
  const void *v29; // r12
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 *v40; // rax
  __int64 v41; // r14
  _QWORD *v42; // r12
  __int64 v43; // rax
  __int64 v44; // rbx
  size_t v45; // r15
  __int64 v46; // rbx
  __int64 *v47; // rax
  size_t v48; // r12
  __int64 v49; // rax
  _DWORD *v50; // rax
  __int64 v51; // r14
  _QWORD *v52; // r12
  __int64 v53; // rax
  __int64 v54; // rbx
  size_t v55; // r15
  __int64 *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rbx
  _DWORD *v59; // rax
  void *v60; // rax
  _QWORD *v61; // rax
  void *v62; // r14
  size_t v63; // rbx
  size_t v64; // r15
  _QWORD *v65; // rdx
  __int64 v66; // rax
  _QWORD v67[9]; // [rsp+0h] [rbp-160h] BYREF
  void *v68; // [rsp+48h] [rbp-118h]
  _QWORD *v69; // [rsp+50h] [rbp-110h]
  __int64 v70; // [rsp+58h] [rbp-108h]
  __int64 v71; // [rsp+60h] [rbp-100h] BYREF
  size_t v72; // [rsp+68h] [rbp-F8h]
  __int64 v73; // [rsp+70h] [rbp-F0h]
  _QWORD v74[2]; // [rsp+78h] [rbp-E8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-D8h]
  size_t v76; // [rsp+90h] [rbp-D0h]
  __int64 v77; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-C0h]
  size_t v79; // [rsp+A8h] [rbp-B8h]
  void *__src; // [rsp+B0h] [rbp-B0h]
  __int64 v81; // [rsp+B8h] [rbp-A8h] BYREF
  _QWORD *v82; // [rsp+C0h] [rbp-A0h]
  __int64 v83; // [rsp+C8h] [rbp-98h]
  size_t __n; // [rsp+D0h] [rbp-90h]
  __int64 v85; // [rsp+D8h] [rbp-88h] BYREF
  __int64 *v86; // [rsp+E0h] [rbp-80h]
  __int64 v87; // [rsp+E8h] [rbp-78h]
  __int64 v88; // [rsp+F0h] [rbp-70h]
  __int64 v89; // [rsp+F8h] [rbp-68h] BYREF
  void *v90; // [rsp+100h] [rbp-60h]
  size_t v91; // [rsp+108h] [rbp-58h]
  __int64 v92; // [rsp+110h] [rbp-50h]
  __int64 v93; // [rsp+118h] [rbp-48h] BYREF
  __int64 v94; // [rsp+120h] [rbp-40h]
  size_t v95; // [rsp+128h] [rbp-38h]
  __int64 v96; // [rsp+130h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 782) ) /*0x1002a8794*/
  {
    *a1 = 0; /*0x1002a879d*/
    a1[1] = 1; /*0x1002a87a4*/
    a1[2] = 0; /*0x1002a87ac*/
    return; /*0x1002a87c5*/
  }
  v11 = (_QWORD *)a2; /*0x1002a87cf*/
  v69 = a1; /*0x1002a87d2*/
  v12 = *(_QWORD *)(a2 + 632) == 0; /*0x1002a87d9*/
  __src = a3; /*0x1002a87e1*/
  if ( !v12 ) /*0x1002a87e8*/
  {
    codexmate_lib::core::relay::anthropic_trace::Trace::response_usage::hb25ead27499d1c78(a2 + 632, 0); /*0x1002a87f6*/
    codexmate_lib::core::relay::anthropic_trace::Trace::failed::h9577e8d7d4502f9f( /*0x1002a880e*/
      (_QWORD *)(a2 + 632),
      (unsigned __int8 *)__src,
      a4,
      (__int64)a5,
      a6);
    a3 = __src; /*0x1002a8813*/
  }
  v68 = a5; /*0x1002a881a*/
  v76 = a6; /*0x1002a8821*/
  __n = a4; /*0x1002a8832*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::failure_diagnostic::h9787bc748bb0ebe9( /*0x1002a883c*/
    (__int64)&v93,
    (_QWORD *)a2,
    (char *)a3,
    a4);
  codexmate_lib::platform::debug_log::app_event::hfe6dedb19b10751f( /*0x1002a885c*/
    "anthropic_streamc_agent_nicknameUntitled Sessionreasoning_effortstruct ApiConfigfield identifier",
    16,
    "failed/error/messageAnthropic tool input is not a complete JSON objectAnthropic message ended with an unclosed content blockanthropic_continuation_requiredAnthropic search has not returned its result; use an authorized client search tool instead",
    6,
    &v93);
  v77 = 0; /*0x1002a8861*/
  v78 = 1; /*0x1002a886c*/
  v79 = 0; /*0x1002a8877*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::h177ed4b42bbb767a( /*0x1002a888c*/
    a2,
    &v77);
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_all_blocks::hc2c7775ec3dd9f5d( /*0x1002a88a7*/
    (__int64 *)a2,
    "stream_truncatedhttp_statusresponse.failed",
    16,
    &v77);
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_terminal_items::hd9e34d556615016b( /*0x1002a88b8*/
    (void **)a2,
    0,
    &v77);
  *(_BYTE *)(a2 + 782) = 1; /*0x1002a88bd*/
  v74[0] = 0; /*0x1002a88c5*/
  v75 = 0; /*0x1002a88d0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2); /*0x1002a88db*/
  v13 = 2; /*0x1002a88e0*/
  v14 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1002a88ef*/
  if ( !v14 ) /*0x1002a88f7*/
    goto LABEL_90; /*0x1002a88f7*/
  *(_WORD *)v14 = 25705; /*0x1002a8900*/
  v85 = 2; /*0x1002a8905*/
  v86 = v14; /*0x1002a8910*/
  v87 = 2; /*0x1002a8914*/
  v15 = *(_QWORD *)(a2 + 104); /*0x1002a891c*/
  if ( v15 < 0 ) /*0x1002a8923*/
  {
    v16 = 0; /*0x1002a8925*/
    goto LABEL_8; /*0x1002a8925*/
  }
  v17 = *(const void **)(a2 + 96); /*0x1002a8938*/
  v70 = a2; /*0x1002a893c*/
  if ( v15 ) /*0x1002a8943*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1002a8945*/
    v16 = 1; /*0x1002a894a*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1002a8958*/
    if ( !v18 ) /*0x1002a8960*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15); /*0x1002a8928*/
    v19 = v18; /*0x1002a8962*/
    v11 = (_QWORD *)v70; /*0x1002a8965*/
  }
  else
  {
    v19 = 1; /*0x1002a896e*/
  }
  memcpy((void *)v19, v17, v15); /*0x1002a897d*/
  LOBYTE(v93) = 3; /*0x1002a8982*/
  v94 = v15; /*0x1002a8986*/
  v95 = v19; /*0x1002a898a*/
  v96 = v15; /*0x1002a898e*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, v74, &v85, &v93); /*0x1002a89a8*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a89b1*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a89b7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a89bc*/
  v13 = 6; /*0x1002a89c1*/
  v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002a89d0*/
  if ( !v20 ) /*0x1002a89d8*/
    goto LABEL_90; /*0x1002a89d8*/
  *(_WORD *)(v20 + 4) = 29795; /*0x1002a89e1*/
  *(_DWORD *)v20 = 1701470831; /*0x1002a89e7*/
  v85 = 6; /*0x1002a89ed*/
  v86 = (__int64 *)v20; /*0x1002a89f8*/
  v87 = 6; /*0x1002a89fc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x1002a8a04*/
  v21 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1002a8a13*/
  if ( !v21 ) /*0x1002a8a1b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x1002a94d0*/
  *v21 = 0x65736E6F70736572LL; /*0x1002a8a2b*/
  LOBYTE(v93) = 3; /*0x1002a8a2e*/
  v94 = 8; /*0x1002a8a32*/
  v95 = (size_t)v21; /*0x1002a8a3a*/
  v96 = 8; /*0x1002a8a3e*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, v74, &v85, &v93); /*0x1002a8a5c*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a8a65*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a8a6b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a8a70*/
  v13 = 10; /*0x1002a8a75*/
  v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1002a8a84*/
  if ( !v22 ) /*0x1002a8a8c*/
    goto LABEL_90; /*0x1002a8a8c*/
  qmemcpy(v22, "created_at", 10); /*0x1002a8a9c*/
  v85 = 10; /*0x1002a8aa5*/
  v86 = (__int64 *)v22; /*0x1002a8ab0*/
  v87 = 10; /*0x1002a8ab4*/
  v23 = v11[80]; /*0x1002a8abc*/
  LOBYTE(v93) = 2; /*0x1002a8aca*/
  v94 = v23 >> 63; /*0x1002a8ace*/
  v95 = v23; /*0x1002a8ad2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, v74, &v85, &v93); /*0x1002a8aec*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a8af5*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a8afb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a8b00*/
  v13 = 6; /*0x1002a8b05*/
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002a8b14*/
  if ( !v24 ) /*0x1002a8b1c*/
    goto LABEL_90; /*0x1002a8b1c*/
  *(_WORD *)(v24 + 4) = 29557; /*0x1002a8b25*/
  *(_DWORD *)v24 = 1952543859; /*0x1002a8b2b*/
  v85 = 6; /*0x1002a8b31*/
  v86 = (__int64 *)v24; /*0x1002a8b3c*/
  v87 = 6; /*0x1002a8b40*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x1002a8b48*/
  v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002a8b57*/
  if ( !v25 ) /*0x1002a8b5f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1002a94e1*/
  *(_WORD *)(v25 + 4) = 25701; /*0x1002a8b65*/
  *(_DWORD *)v25 = 1818845542; /*0x1002a8b6b*/
  LOBYTE(v93) = 3; /*0x1002a8b71*/
  v94 = 6; /*0x1002a8b75*/
  v95 = v25; /*0x1002a8b7d*/
  v96 = 6; /*0x1002a8b81*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, v74, &v85, &v93); /*0x1002a8b9f*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a8ba8*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a8bae*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a8bb3*/
  v13 = 5; /*0x1002a8bb8*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1002a8bc7*/
  if ( !v26 ) /*0x1002a8bcf*/
    goto LABEL_90; /*0x1002a8bcf*/
  *(_BYTE *)(v26 + 4) = 108; /*0x1002a8bd8*/
  *(_DWORD *)v26 = 1701080941; /*0x1002a8bdc*/
  v85 = 5; /*0x1002a8be2*/
  v86 = (__int64 *)v26; /*0x1002a8bed*/
  v87 = 5; /*0x1002a8bf1*/
  v27 = v11[10]; /*0x1002a8bf9*/
  if ( v27 < 0 ) /*0x1002a8c00*/
  {
    v28 = 0; /*0x1002a8c02*/
    goto LABEL_29; /*0x1002a8c02*/
  }
  v29 = (const void *)v11[9]; /*0x1002a8c15*/
  if ( v27 ) /*0x1002a8c19*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5); /*0x1002a8c1b*/
    v28 = 1; /*0x1002a8c20*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x1002a8c2e*/
    if ( !v30 ) /*0x1002a8c36*/
LABEL_29:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v28, v27); /*0x1002a8c05*/
    v31 = v30; /*0x1002a8c38*/
    v11 = (_QWORD *)v70; /*0x1002a8c3b*/
  }
  else
  {
    v31 = 1; /*0x1002a8c44*/
  }
  memcpy((void *)v31, v29, v27); /*0x1002a8c53*/
  LOBYTE(v93) = 3; /*0x1002a8c58*/
  v94 = v27; /*0x1002a8c5c*/
  v95 = v31; /*0x1002a8c60*/
  v96 = v27; /*0x1002a8c64*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, v74, &v85, &v93); /*0x1002a8c7e*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a8c87*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a8c8d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a8c92*/
  v13 = 6; /*0x1002a8c97*/
  v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002a8ca6*/
  if ( !v32 ) /*0x1002a8cae*/
    goto LABEL_90; /*0x1002a8cae*/
  *(_WORD *)(v32 + 4) = 29813; /*0x1002a8cb7*/
  *(_DWORD *)v32 = 1886680431; /*0x1002a8cbd*/
  v81 = 6; /*0x1002a8cc3*/
  v82 = (_QWORD *)v32; /*0x1002a8cce*/
  v83 = 6; /*0x1002a8cd5*/
  v33 = v11[93]; /*0x1002a8ce0*/
  v34 = v11[94]; /*0x1002a8ce7*/
  v35 = 0; /*0x1002a8cee*/
  v36 = v33; /*0x1002a8cf0*/
  if ( v33 ) /*0x1002a8cfa*/
    v36 = v11[95]; /*0x1002a8cfc*/
  LOBYTE(v35) = v33 != 0; /*0x1002a8d03*/
  v67[0] = v35; /*0x1002a8d06*/
  v67[1] = 0; /*0x1002a8d0d*/
  v67[2] = v33; /*0x1002a8d18*/
  v67[3] = v34; /*0x1002a8d1f*/
  v67[4] = v35; /*0x1002a8d26*/
  v67[5] = 0; /*0x1002a8d2d*/
  v67[6] = v33; /*0x1002a8d38*/
  v67[7] = v34; /*0x1002a8d3f*/
  v67[8] = v36; /*0x1002a8d46*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha415583a7e41898e( /*0x1002a8d5b*/
    &v85,
    v67);
  serde_core::ser::Serializer::collect_seq::h3085756ebf7066d9(&v93, &v85); /*0x1002a8d6b*/
  if ( (_BYTE)v93 == 6 ) /*0x1002a8d74*/
  {
    v89 = v94; /*0x1002a9432*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002a9454*/
      "called `Result::unwrap()` on an `Err` valueErrorattempt to join into collection with len > usize::MAXChatgptApikey"
      "Pro5xPro20xConfigAuthCatalogThreadProxy",
      43,
      &v89,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1336,
      &off_101BF2358);
  }
  v92 = v96; /*0x1002a8d7e*/
  v91 = v95; /*0x1002a8d86*/
  v90 = (void *)v94; /*0x1002a8d92*/
  v89 = v93; /*0x1002a8d96*/
  v37 = &v93; /*0x1002a8d9a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v93, v74, &v81, &v89); /*0x1002a8db0*/
  if ( (_BYTE)v93 != 6 ) /*0x1002a8db9*/
  {
    v37 = &v93; /*0x1002a8dbb*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v93); /*0x1002a8dbf*/
  }
  if ( v85 ) /*0x1002a8dce*/
  {
    v37 = v86; /*0x1002a8dd0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 8 * v85, 8); /*0x1002a8ddd*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37); /*0x1002a8de2*/
  v13 = 5; /*0x1002a8de7*/
  v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1002a8df6*/
  if ( !v38 ) /*0x1002a8dfe*/
LABEL_90:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x1002a94bf*/
  *(_BYTE *)(v38 + 4) = 114; /*0x1002a8e04*/
  *(_DWORD *)v38 = 1869771365; /*0x1002a8e08*/
  v71 = 5; /*0x1002a8e0e*/
  v72 = v38; /*0x1002a8e1c*/
  v73 = 5; /*0x1002a8e23*/
  v81 = 0; /*0x1002a8e2e*/
  v83 = 0; /*0x1002a8e39*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5); /*0x1002a8e44*/
  v39 = 4; /*0x1002a8e49*/
  v40 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002a8e59*/
  if ( !v40 ) /*0x1002a8e61*/
    goto LABEL_93; /*0x1002a8e61*/
  *(_DWORD *)v40 = 1701869940; /*0x1002a8e6a*/
  v85 = 4; /*0x1002a8e70*/
  v86 = v40; /*0x1002a8e7b*/
  v87 = 4; /*0x1002a8e7f*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1002a8e8f*/
  {
    v41 = 0; /*0x1002a8e91*/
    goto LABEL_48; /*0x1002a8e91*/
  }
  if ( __n ) /*0x1002a8ea8*/
  {
    v42 = v11; /*0x1002a8eaa*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1002a8ead*/
    v41 = 1; /*0x1002a8eb2*/
    v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1002a8ec4*/
    if ( !v43 ) /*0x1002a8ecc*/
LABEL_48:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v41, __n); /*0x1002a8e94*/
    v44 = v43; /*0x1002a8ece*/
    v11 = v42; /*0x1002a8ed1*/
  }
  else
  {
    v44 = 1; /*0x1002a8ed6*/
  }
  v45 = __n; /*0x1002a8ee5*/
  memcpy((void *)v44, __src, __n); /*0x1002a8eef*/
  LOBYTE(v93) = 3; /*0x1002a8ef4*/
  v94 = v45; /*0x1002a8ef8*/
  v95 = v44; /*0x1002a8efc*/
  v96 = v45; /*0x1002a8f00*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, &v81, &v85, &v93); /*0x1002a8f1a*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a8f23*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a8f29*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a8f2e*/
  v39 = 4; /*0x1002a8f33*/
  v46 = 1; /*0x1002a8f39*/
  v47 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002a8f48*/
  if ( !v47 ) /*0x1002a8f50*/
    goto LABEL_93; /*0x1002a8f50*/
  *(_DWORD *)v47 = 1701080931; /*0x1002a8f56*/
  v85 = 4; /*0x1002a8f5c*/
  v86 = v47; /*0x1002a8f67*/
  v87 = 4; /*0x1002a8f6b*/
  v48 = __n; /*0x1002a8f73*/
  if ( __n ) /*0x1002a8f7d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1002a8f82*/
    v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1); /*0x1002a8f8f*/
    if ( !v49 ) /*0x1002a8f97*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x1002a9512*/
    v46 = v49; /*0x1002a8f9d*/
    v48 = __n; /*0x1002a8fa0*/
  }
  memcpy((void *)v46, __src, v48); /*0x1002a8fb4*/
  LOBYTE(v93) = 3; /*0x1002a8fb9*/
  v94 = v48; /*0x1002a8fbd*/
  v95 = v46; /*0x1002a8fc1*/
  v96 = v48; /*0x1002a8fc5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, &v81, &v85, &v93); /*0x1002a8fdf*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a8fe8*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a8fee*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a8ff3*/
  v39 = 7; /*0x1002a8ff8*/
  v50 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1002a9008*/
  if ( !v50 ) /*0x1002a9010*/
LABEL_93:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39); /*0x1002a94f0*/
  *(_DWORD *)((char *)v50 + 3) = 1701273971; /*0x1002a9019*/
  *v50 = 1936942445; /*0x1002a9020*/
  v85 = 7; /*0x1002a9026*/
  v86 = (__int64 *)v50; /*0x1002a9031*/
  v87 = 7; /*0x1002a9035*/
  if ( (v76 & 0x8000000000000000LL) != 0LL ) /*0x1002a9045*/
  {
    v51 = 0; /*0x1002a9047*/
    goto LABEL_64; /*0x1002a9047*/
  }
  if ( v76 ) /*0x1002a905e*/
  {
    v52 = v11; /*0x1002a9060*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7); /*0x1002a9063*/
    v51 = 1; /*0x1002a9068*/
    v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v76, 1); /*0x1002a907a*/
    if ( !v53 ) /*0x1002a9082*/
LABEL_64:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v51, v76); /*0x1002a904a*/
    v54 = v53; /*0x1002a9084*/
    v11 = v52; /*0x1002a9087*/
  }
  else
  {
    v54 = 1; /*0x1002a908c*/
  }
  v55 = v76; /*0x1002a909b*/
  memcpy((void *)v54, v68, v76); /*0x1002a90a5*/
  LOBYTE(v93) = 3; /*0x1002a90aa*/
  v94 = v55; /*0x1002a90ae*/
  v95 = v54; /*0x1002a90b2*/
  v96 = v55; /*0x1002a90b6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, &v81, &v85, &v93); /*0x1002a90d0*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a90d9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a90df*/
  v94 = v81; /*0x1002a90f2*/
  v95 = (size_t)v82; /*0x1002a90f6*/
  v96 = v83; /*0x1002a9101*/
  LOBYTE(v93) = 5; /*0x1002a9105*/
  v56 = &v89; /*0x1002a9109*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, v74, &v71, &v93); /*0x1002a911f*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a9132*/
  {
    v56 = &v89; /*0x1002a9134*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a9138*/
  }
  v86 = (__int64 *)v74[0]; /*0x1002a914f*/
  v87 = v74[1]; /*0x1002a9153*/
  v88 = v75; /*0x1002a915e*/
  LOBYTE(v85) = 5; /*0x1002a9162*/
  if ( (a7 & 1) != 0 ) /*0x1002a916b*/
  {
    LOBYTE(v93) = 2; /*0x1002a9171*/
    v94 = 0; /*0x1002a9175*/
    v95 = a8; /*0x1002a917d*/
    _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2("errormessage", 5u); /*0x1002a9194*/
    v56 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1002a91b0*/
                       "http_statusresponse.failed",
                       0xBu);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v56); /*0x1002a91b3*/
    v56[3] = v96; /*0x1002a91bc*/
    v56[2] = v95; /*0x1002a91c4*/
    v57 = v93; /*0x1002a91c8*/
    v56[1] = v94; /*0x1002a91d0*/
    *v56 = v57; /*0x1002a91d4*/
  }
  v71 = 0; /*0x1002a91d7*/
  v73 = 0; /*0x1002a91e2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56); /*0x1002a91ed*/
  v58 = 4; /*0x1002a91f2*/
  v59 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002a9201*/
  if ( !v59 ) /*0x1002a9209*/
    goto LABEL_94; /*0x1002a9209*/
  *v59 = 1701869940; /*0x1002a9212*/
  v81 = 4; /*0x1002a9218*/
  v82 = v59; /*0x1002a9223*/
  v83 = 4; /*0x1002a922a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1002a9235*/
  v60 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1002a9244*/
  if ( !v60 ) /*0x1002a924c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1002a9523*/
  qmemcpy(v60, "response.failed", 15); /*0x1002a9260*/
  LOBYTE(v93) = 3; /*0x1002a9263*/
  v94 = 15; /*0x1002a9267*/
  v95 = (size_t)v60; /*0x1002a926f*/
  v96 = 15; /*0x1002a9273*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v89, &v71, &v81, &v93); /*0x1002a9291*/
  if ( (_BYTE)v89 != 6 ) /*0x1002a929a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v89); /*0x1002a92a0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v89); /*0x1002a92a5*/
  v58 = 8; /*0x1002a92aa*/
  v61 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1002a92b9*/
  if ( !v61 ) /*0x1002a92c1*/
LABEL_94:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v58); /*0x1002a94ff*/
  *v61 = 0x65736E6F70736572LL; /*0x1002a92ca*/
  v81 = 8; /*0x1002a92cd*/
  v82 = v61; /*0x1002a92d8*/
  v83 = 8; /*0x1002a92df*/
  serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h13dad87f56710385( /*0x1002a92f5*/
    &v93,
    &v85);
  if ( (_BYTE)v93 == 6 ) /*0x1002a92fe*/
  {
    v89 = v94; /*0x1002a9462*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002a9484*/
      "called `Result::unwrap()` on an `Err` valueErrorattempt to join into collection with len > usize::MAXChatgptApikey"
      "Pro5xPro20xConfigAuthCatalogThreadProxy",
      43,
      &v89,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1336,
      &off_101BF2380);
  }
  v92 = v96; /*0x1002a9308*/
  v91 = v95; /*0x1002a9310*/
  v90 = (void *)v94; /*0x1002a931c*/
  v89 = v93; /*0x1002a9320*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v93, &v71, &v81, &v89); /*0x1002a933a*/
  if ( (_BYTE)v93 != 6 ) /*0x1002a9343*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v93); /*0x1002a9349*/
  v94 = v71; /*0x1002a9363*/
  v95 = v72; /*0x1002a9367*/
  v96 = v73; /*0x1002a9372*/
  LOBYTE(v93) = 5; /*0x1002a9376*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h4082c4e542f661cc( /*0x1002a9391*/
    &v89,
    v11 + 96,
    (__int64)"response.failed",
    (__int64 (__fastcall *)())0xF,
    (char *)&v93);
  v62 = v90; /*0x1002a9396*/
  v63 = v91; /*0x1002a939a*/
  v64 = v79; /*0x1002a93a5*/
  if ( v91 > v77 - v79 ) /*0x1002a93b2*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(&v77, v79, v91, 1, 1); /*0x1002a94a6*/
    v64 = v79; /*0x1002a94ab*/
  }
  memcpy((void *)(v64 + v78), v62, v63); /*0x1002a93c8*/
  v79 = v63 + v64; /*0x1002a93d0*/
  if ( v89 ) /*0x1002a93de*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v89, 1); /*0x1002a93e8*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v93); /*0x1002a93f1*/
  v65 = v69; /*0x1002a93fd*/
  v69[2] = v79; /*0x1002a9404*/
  v66 = v77; /*0x1002a9408*/
  v65[1] = v78; /*0x1002a9416*/
  *v65 = v66; /*0x1002a941a*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v85); /*0x1002a9424*/
}