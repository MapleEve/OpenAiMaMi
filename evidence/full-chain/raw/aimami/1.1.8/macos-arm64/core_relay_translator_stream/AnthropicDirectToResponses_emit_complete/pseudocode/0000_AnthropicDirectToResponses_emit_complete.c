// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_complete 0x1001abad0 d=0
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_completed::h3bc772549814e44e(
        size_t *a1,
        __int64 a2)
{
  __int64 v2; // r12
  unsigned __int16 *v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbx
  const void *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rax
  void *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  const void *v18; // r13
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  void *v23; // rax
  unsigned __int64 v24; // rbx
  void *v25; // rax
  unsigned __int64 v26; // r14
  void *v27; // rax
  unsigned __int64 v28; // r14
  char *v29; // r15
  __int64 v30; // rax
  __int64 v31; // r12
  _DWORD *v32; // rax
  void *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int16 *v37; // [rsp+18h] [rbp-B8h] BYREF
  _QWORD *v38; // [rsp+20h] [rbp-B0h]
  __int64 v39; // [rsp+28h] [rbp-A8h]
  __int64 v40; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int16 *v41; // [rsp+38h] [rbp-98h]
  __int64 v42; // [rsp+40h] [rbp-90h]
  __int64 v43; // [rsp+48h] [rbp-88h]
  __int64 v44; // [rsp+50h] [rbp-80h] BYREF
  _QWORD *v45; // [rsp+58h] [rbp-78h]
  __int64 v46; // [rsp+60h] [rbp-70h]
  __int64 v47; // [rsp+68h] [rbp-68h] BYREF
  __int64 v48; // [rsp+70h] [rbp-60h]
  _QWORD *v49; // [rsp+78h] [rbp-58h]
  __int64 v50; // [rsp+80h] [rbp-50h]
  __int64 v51; // [rsp+88h] [rbp-48h] BYREF
  __int64 v52; // [rsp+90h] [rbp-40h]
  _QWORD *v53; // [rsp+98h] [rbp-38h]
  __int64 v54; // [rsp+A0h] [rbp-30h]

  v44 = 0; /*0x1001abaee*/
  v46 = 0; /*0x1001abaf6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abafe*/
  v2 = 2; /*0x1001abb03*/
  v3 = (unsigned __int16 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1001abb13*/
  if ( !v3 ) /*0x1001abb1b*/
    goto LABEL_58; /*0x1001abb1b*/
  *v3 = 25705; /*0x1001abb24*/
  v40 = 2; /*0x1001abb29*/
  v41 = v3; /*0x1001abb34*/
  v42 = 2; /*0x1001abb3b*/
  v4 = *(_QWORD *)(a2 + 40); /*0x1001abb46*/
  if ( v4 < 0 ) /*0x1001abb4d*/
  {
    v5 = 0; /*0x1001abb4f*/
    goto LABEL_4; /*0x1001abb4f*/
  }
  v6 = *(const void **)(a2 + 32); /*0x1001abb68*/
  if ( v4 ) /*0x1001abb6c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abb6e*/
    v5 = 1; /*0x1001abb73*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1u); /*0x1001abb80*/
    if ( !v7 ) /*0x1001abb88*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x1001abb51*/
    v8 = v7; /*0x1001abb8a*/
  }
  else
  {
    v8 = 1; /*0x1001abb8f*/
  }
  memcpy((void *)v8, v6, v4); /*0x1001abb9e*/
  LOBYTE(v51) = 3; /*0x1001abba3*/
  v52 = v4; /*0x1001abba7*/
  v53 = (_QWORD *)v8; /*0x1001abbab*/
  v54 = v4; /*0x1001abbaf*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001abbc6*/
    &v47,
    (unsigned __int16 **)&v44,
    (__int64)&v40,
    &v51);
  if ( (_BYTE)v47 != 6 ) /*0x1001abbd6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001abbdc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abbe1*/
  v2 = 6; /*0x1001abbe6*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1001abbf6*/
  if ( !v9 ) /*0x1001abbfe*/
    goto LABEL_58; /*0x1001abbfe*/
  *(_WORD *)(v9 + 4) = 29795; /*0x1001abc07*/
  *(_DWORD *)v9 = 1701470831; /*0x1001abc0d*/
  v40 = 6; /*0x1001abc13*/
  v41 = (unsigned __int16 *)v9; /*0x1001abc1e*/
  v42 = 6; /*0x1001abc25*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abc30*/
  v10 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1001abc3f*/
  if ( !v10 ) /*0x1001abc47*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x1001ac434*/
  *v10 = 0x65736E6F70736572LL; /*0x1001abc57*/
  LOBYTE(v51) = 3; /*0x1001abc5a*/
  v52 = 8; /*0x1001abc5e*/
  v53 = v10; /*0x1001abc66*/
  v54 = 8; /*0x1001abc6a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001abc85*/
    &v47,
    (unsigned __int16 **)&v44,
    (__int64)&v40,
    &v51);
  if ( (_BYTE)v47 != 6 ) /*0x1001abc8e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001abc94*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abc99*/
  v2 = 10; /*0x1001abc9e*/
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x1001abcae*/
  if ( !v11 ) /*0x1001abcb6*/
    goto LABEL_58; /*0x1001abcb6*/
  qmemcpy(v11, "created_at", 10); /*0x1001abcc6*/
  v40 = 10; /*0x1001abccf*/
  v41 = (unsigned __int16 *)v11; /*0x1001abcda*/
  v42 = 10; /*0x1001abce1*/
  v12 = *(_QWORD *)(a2 + 328); /*0x1001abcec*/
  LOBYTE(v51) = 2; /*0x1001abcfa*/
  v52 = v12 >> 63; /*0x1001abcfe*/
  v53 = (_QWORD *)v12; /*0x1001abd02*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001abd19*/
    &v47,
    (unsigned __int16 **)&v44,
    (__int64)&v40,
    &v51);
  if ( (_BYTE)v47 != 6 ) /*0x1001abd22*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001abd28*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abd2d*/
  v2 = 6; /*0x1001abd32*/
  v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1001abd42*/
  if ( !v13 ) /*0x1001abd4a*/
    goto LABEL_58; /*0x1001abd4a*/
  *(_WORD *)(v13 + 4) = 29557; /*0x1001abd53*/
  *(_DWORD *)v13 = 1952543859; /*0x1001abd59*/
  v40 = 6; /*0x1001abd5f*/
  v41 = (unsigned __int16 *)v13; /*0x1001abd6a*/
  v42 = 6; /*0x1001abd71*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abd7c*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1001abd8b*/
  if ( !v14 ) /*0x1001abd93*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x1001ac445*/
  *(_QWORD *)v14 = 0x6574656C706D6F63LL; /*0x1001abda3*/
  *(_BYTE *)(v14 + 8) = 100; /*0x1001abda6*/
  LOBYTE(v51) = 3; /*0x1001abdaa*/
  v52 = 9; /*0x1001abdae*/
  v53 = (_QWORD *)v14; /*0x1001abdb6*/
  v54 = 9; /*0x1001abdba*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001abdd5*/
    &v47,
    (unsigned __int16 **)&v44,
    (__int64)&v40,
    &v51);
  if ( (_BYTE)v47 != 6 ) /*0x1001abdde*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001abde4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abde9*/
  v2 = 5; /*0x1001abdee*/
  v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1001abdfe*/
  if ( !v15 ) /*0x1001abe06*/
    goto LABEL_58; /*0x1001abe06*/
  *(_BYTE *)(v15 + 4) = 108; /*0x1001abe0f*/
  *(_DWORD *)v15 = 1701080941; /*0x1001abe13*/
  v40 = 5; /*0x1001abe19*/
  v41 = (unsigned __int16 *)v15; /*0x1001abe24*/
  v42 = 5; /*0x1001abe2b*/
  v16 = *(_QWORD *)(a2 + 16); /*0x1001abe36*/
  if ( v16 < 0 ) /*0x1001abe3d*/
  {
    v17 = 0; /*0x1001abe3f*/
    goto LABEL_25; /*0x1001abe3f*/
  }
  v18 = *(const void **)(a2 + 8); /*0x1001abe51*/
  if ( v16 ) /*0x1001abe55*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abe57*/
    v17 = 1; /*0x1001abe5c*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1u); /*0x1001abe69*/
    if ( !v19 ) /*0x1001abe71*/
LABEL_25:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v16); /*0x1001abe41*/
    v20 = v19; /*0x1001abe73*/
  }
  else
  {
    v20 = 1; /*0x1001abe78*/
  }
  memcpy((void *)v20, v18, v16); /*0x1001abe87*/
  LOBYTE(v51) = 3; /*0x1001abe8c*/
  v52 = v16; /*0x1001abe90*/
  v53 = (_QWORD *)v20; /*0x1001abe94*/
  v54 = v16; /*0x1001abe98*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001abeaf*/
    &v47,
    (unsigned __int16 **)&v44,
    (__int64)&v40,
    &v51);
  if ( (_BYTE)v47 != 6 ) /*0x1001abec9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001abecf*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abed4*/
  v2 = 6; /*0x1001abed9*/
  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1001abee9*/
  if ( !v21 ) /*0x1001abef1*/
LABEL_58:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v2); /*0x1001ac423*/
  *(_WORD *)(v21 + 4) = 29813; /*0x1001abefa*/
  *(_DWORD *)v21 = 1886680431; /*0x1001abf00*/
  v40 = 6; /*0x1001abf06*/
  v41 = (unsigned __int16 *)v21; /*0x1001abf11*/
  v42 = 6; /*0x1001abf18*/
  serde_core::ser::Serializer::collect_seq::hc801605adc45be37((__int64)&v51, a2 + 48); /*0x1001abf2b*/
  if ( (_BYTE)v51 == 6 ) /*0x1001abf34*/
  {
    v47 = v52; /*0x1001ac3c2*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1001ac3e4*/
      (__int64)"called `Result::unwrap()` on an `Err` value",
      43,
      (__int64)&v47,
      (__int64)&off_101526418,
      (__int64)&off_101525FC0);
  }
  v50 = v54; /*0x1001abf3e*/
  v49 = v53; /*0x1001abf46*/
  v48 = v52; /*0x1001abf52*/
  v47 = v51; /*0x1001abf56*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001abf6d*/
    &v51,
    (unsigned __int16 **)&v44,
    (__int64)&v40,
    &v47);
  if ( (_BYTE)v51 != 6 ) /*0x1001abf76*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v51); /*0x1001abf7c*/
  v41 = (unsigned __int16 *)v44; /*0x1001abf89*/
  v42 = (__int64)v45; /*0x1001abf90*/
  v43 = v46; /*0x1001abf9b*/
  LOBYTE(v40) = 5; /*0x1001abfa2*/
  if ( *(_BYTE *)(a2 + 366) ) /*0x1001abfa9*/
  {
    v37 = nullptr; /*0x1001abfb7*/
    v39 = 0; /*0x1001abfc2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001abfcd*/
    v22 = 12; /*0x1001abfd2*/
    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1001abfe2*/
    if ( !v23 ) /*0x1001abfea*/
      goto LABEL_62; /*0x1001abfea*/
    qmemcpy(v23, "input_tokens", 12); /*0x1001abffa*/
    v44 = 12; /*0x1001ac004*/
    v45 = v23; /*0x1001ac00c*/
    v46 = 12; /*0x1001ac010*/
    v24 = *(_QWORD *)(a2 + 336); /*0x1001ac018*/
    LOBYTE(v51) = 2; /*0x1001ac026*/
    v52 = v24 >> 63; /*0x1001ac02a*/
    v53 = (_QWORD *)v24; /*0x1001ac02e*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001ac045*/
      &v47,
      &v37,
      (__int64)&v44,
      &v51);
    if ( (_BYTE)v47 != 6 ) /*0x1001ac04e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001ac054*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001ac059*/
    v22 = 13; /*0x1001ac05e*/
    v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1001ac06e*/
    if ( !v25 ) /*0x1001ac076*/
      goto LABEL_62; /*0x1001ac076*/
    qmemcpy(v25, "output_tokens", 13); /*0x1001ac094*/
    v44 = 13; /*0x1001ac097*/
    v45 = v25; /*0x1001ac09f*/
    v46 = 13; /*0x1001ac0a3*/
    v26 = *(_QWORD *)(a2 + 344); /*0x1001ac0ab*/
    LOBYTE(v51) = 2; /*0x1001ac0b9*/
    v52 = v26 >> 63; /*0x1001ac0bd*/
    v53 = (_QWORD *)v26; /*0x1001ac0c1*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001ac0d8*/
      &v47,
      &v37,
      (__int64)&v44,
      &v51);
    if ( (_BYTE)v47 != 6 ) /*0x1001ac0e1*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001ac0e7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001ac0ec*/
    v22 = 12; /*0x1001ac0f1*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1001ac101*/
    if ( !v27 ) /*0x1001ac109*/
LABEL_62:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x1001ac463*/
    qmemcpy(v27, "total_tokens", 12); /*0x1001ac119*/
    v44 = 12; /*0x1001ac123*/
    v45 = v27; /*0x1001ac12b*/
    v46 = 12; /*0x1001ac12f*/
    v28 = v24 + v26; /*0x1001ac137*/
    LOBYTE(v51) = 2; /*0x1001ac141*/
    v52 = v28 >> 63; /*0x1001ac145*/
    v53 = (_QWORD *)v28; /*0x1001ac149*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001ac160*/
      &v47,
      &v37,
      (__int64)&v44,
      &v51);
    if ( (_BYTE)v47 != 6 ) /*0x1001ac169*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001ac16f*/
    v52 = (__int64)v37; /*0x1001ac182*/
    v53 = v38; /*0x1001ac186*/
    v54 = v39; /*0x1001ac191*/
    LOBYTE(v51) = 5; /*0x1001ac195*/
    v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1001ac1b1*/
            "usageoutput_tokensinput_tokensmax_tokenscontent_filterlengthresponse.in_progress",
            5,
            &v40);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v29); /*0x1001ac1b7*/
    *((_QWORD *)v29 + 3) = v54; /*0x1001ac1ca*/
    *((_QWORD *)v29 + 2) = v53; /*0x1001ac1d2*/
    v30 = v51; /*0x1001ac1d6*/
    *((_QWORD *)v29 + 1) = v52; /*0x1001ac1de*/
    *(_QWORD *)v29 = v30; /*0x1001ac1e2*/
  }
  v37 = nullptr; /*0x1001ac1e5*/
  v39 = 0; /*0x1001ac1f0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001ac1fb*/
  v31 = 4; /*0x1001ac200*/
  v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1001ac210*/
  if ( !v32 ) /*0x1001ac218*/
    goto LABEL_61; /*0x1001ac218*/
  *v32 = 1701869940; /*0x1001ac221*/
  v44 = 4; /*0x1001ac227*/
  v45 = v32; /*0x1001ac22f*/
  v46 = 4; /*0x1001ac233*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001ac23b*/
  v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1001ac24a*/
  if ( !v33 ) /*0x1001ac252*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1001ac474*/
  qmemcpy(v33, "response.completed", 18); /*0x1001ac266*/
  LOBYTE(v51) = 3; /*0x1001ac26f*/
  v52 = 18; /*0x1001ac273*/
  v53 = v33; /*0x1001ac27b*/
  v54 = 18; /*0x1001ac27f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v47, &v37, (__int64)&v44, &v51); /*0x1001ac29a*/
  if ( (_BYTE)v47 != 6 ) /*0x1001ac2a3*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v47); /*0x1001ac2a9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001ac2ae*/
  v31 = 8; /*0x1001ac2b3*/
  v34 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1001ac2c3*/
  if ( !v34 ) /*0x1001ac2cb*/
LABEL_61:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v31); /*0x1001ac454*/
  *v34 = 0x65736E6F70736572LL; /*0x1001ac2d4*/
  v44 = 8; /*0x1001ac2d7*/
  v45 = v34; /*0x1001ac2df*/
  v46 = 8; /*0x1001ac2e3*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h20dffb7c3269d000( /*0x1001ac2f6*/
    (__int64)&v51,
    (unsigned __int8 *)&v40,
    v35);
  if ( (_BYTE)v51 == 6 ) /*0x1001ac2ff*/
  {
    v47 = v52; /*0x1001ac3f2*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1001ac414*/
      (__int64)"called `Result::unwrap()` on an `Err` value",
      43,
      (__int64)&v47,
      (__int64)&off_101526418,
      (__int64)&off_101525FD8);
  }
  v50 = v54; /*0x1001ac309*/
  v49 = v53; /*0x1001ac311*/
  v48 = v52; /*0x1001ac31d*/
  v47 = v51; /*0x1001ac321*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v51, &v37, (__int64)&v44, &v47); /*0x1001ac338*/
  if ( (_BYTE)v51 != 6 ) /*0x1001ac341*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v51); /*0x1001ac347*/
  v52 = (__int64)v37; /*0x1001ac361*/
  v53 = v38; /*0x1001ac365*/
  v54 = v39; /*0x1001ac370*/
  LOBYTE(v51) = 5; /*0x1001ac374*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h034f66559c0783cb( /*0x1001ac392*/
    a1,
    (__int64 *)(a2 + 352),
    (__int64)"response.completedid",
    18,
    (char *)&v51);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v40); /*0x1001ac39e*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v51); /*0x1001ac3ac*/
}