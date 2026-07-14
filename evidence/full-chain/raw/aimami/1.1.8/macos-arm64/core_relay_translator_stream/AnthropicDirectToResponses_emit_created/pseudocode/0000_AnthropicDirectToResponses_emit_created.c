// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_created 0x1001a1100 d=0
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_created::h0b0e834b8baefc38(
        unsigned __int64 *a1,
        __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // r15
  unsigned __int16 *v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  const void *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  void *v12; // rax
  size_t v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  const void *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r12
  _DWORD *v24; // rax
  void *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r14
  __int64 v29; // r12
  _DWORD *v30; // rax
  void *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  void *v34; // r14
  size_t v35; // r15
  __int64 v36; // r12
  unsigned __int64 v37; // rax
  unsigned __int64 v39; // [rsp+10h] [rbp-D0h] BYREF
  unsigned __int64 v40; // [rsp+18h] [rbp-C8h]
  __int64 v41; // [rsp+20h] [rbp-C0h]
  unsigned __int16 *v42; // [rsp+28h] [rbp-B8h] BYREF
  size_t v43; // [rsp+30h] [rbp-B0h]
  __int64 v44; // [rsp+38h] [rbp-A8h]
  __int64 v45; // [rsp+40h] [rbp-A0h] BYREF
  unsigned __int16 *v46; // [rsp+48h] [rbp-98h]
  __int64 v47; // [rsp+50h] [rbp-90h]
  __int64 v48; // [rsp+58h] [rbp-88h]
  __int64 v49; // [rsp+60h] [rbp-80h] BYREF
  _QWORD *v50; // [rsp+68h] [rbp-78h]
  __int64 v51; // [rsp+70h] [rbp-70h]
  __int64 v52; // [rsp+78h] [rbp-68h] BYREF
  void *__src; // [rsp+80h] [rbp-60h]
  size_t __n; // [rsp+88h] [rbp-58h]
  __int64 v55; // [rsp+90h] [rbp-50h]
  __int64 v56; // [rsp+98h] [rbp-48h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-40h]
  size_t v58; // [rsp+A8h] [rbp-38h]
  __int64 v59; // [rsp+B0h] [rbp-30h]

  v2 = (_QWORD *)a2; /*0x1001a1114*/
  *(_BYTE *)(a2 + 364) = 1; /*0x1001a111e*/
  v49 = 0; /*0x1001a1125*/
  v51 = 0; /*0x1001a112d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1135*/
  v3 = 2; /*0x1001a113a*/
  v4 = (unsigned __int16 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1001a114a*/
  if ( !v4 ) /*0x1001a1152*/
    goto LABEL_58; /*0x1001a1152*/
  *v4 = 25705; /*0x1001a115b*/
  v45 = 2; /*0x1001a1160*/
  v46 = v4; /*0x1001a116b*/
  v47 = 2; /*0x1001a1172*/
  v5 = *(_QWORD *)(a2 + 40); /*0x1001a117d*/
  if ( v5 < 0 ) /*0x1001a1184*/
  {
    v6 = 0; /*0x1001a1186*/
    goto LABEL_4; /*0x1001a1186*/
  }
  v7 = *(const void **)(a2 + 32); /*0x1001a1199*/
  if ( v5 ) /*0x1001a11a4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a11a6*/
    v6 = 1; /*0x1001a11ab*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1u); /*0x1001a11b9*/
    if ( !v8 ) /*0x1001a11c1*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1001a1189*/
    v9 = v8; /*0x1001a11c3*/
    v2 = (_QWORD *)a2; /*0x1001a11c6*/
  }
  else
  {
    v9 = 1; /*0x1001a11cf*/
  }
  memcpy((void *)v9, v7, v5); /*0x1001a11dd*/
  LOBYTE(v56) = 3; /*0x1001a11e2*/
  v57 = v5; /*0x1001a11e6*/
  v58 = v9; /*0x1001a11ea*/
  v59 = v5; /*0x1001a11ee*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001a1205*/
    &v52,
    (unsigned __int16 **)&v49,
    (__int64)&v45,
    &v56);
  if ( (_BYTE)v52 != 6 ) /*0x1001a120e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a1214*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1219*/
  v3 = 6; /*0x1001a121e*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1001a122e*/
  if ( !v10 ) /*0x1001a1236*/
    goto LABEL_58; /*0x1001a1236*/
  *(_WORD *)(v10 + 4) = 29795; /*0x1001a123f*/
  *(_DWORD *)v10 = 1701470831; /*0x1001a1245*/
  v45 = 6; /*0x1001a124b*/
  v46 = (unsigned __int16 *)v10; /*0x1001a1256*/
  v47 = 6; /*0x1001a125d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1268*/
  v11 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1001a1277*/
  if ( !v11 ) /*0x1001a127f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x1001a1a6c*/
  *v11 = 0x65736E6F70736572LL; /*0x1001a128f*/
  LOBYTE(v56) = 3; /*0x1001a1292*/
  v57 = 8; /*0x1001a1296*/
  v58 = (size_t)v11; /*0x1001a129e*/
  v59 = 8; /*0x1001a12a2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001a12bd*/
    &v52,
    (unsigned __int16 **)&v49,
    (__int64)&v45,
    &v56);
  if ( (_BYTE)v52 != 6 ) /*0x1001a12c6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a12cc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a12d1*/
  v3 = 10; /*0x1001a12d6*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x1001a12e6*/
  if ( !v12 ) /*0x1001a12ee*/
    goto LABEL_58; /*0x1001a12ee*/
  qmemcpy(v12, "created_at", 10); /*0x1001a12fe*/
  v45 = 10; /*0x1001a1307*/
  v46 = (unsigned __int16 *)v12; /*0x1001a1312*/
  v47 = 10; /*0x1001a1319*/
  v13 = v2[41]; /*0x1001a1324*/
  LOBYTE(v56) = 2; /*0x1001a1332*/
  v57 = v13 >> 63; /*0x1001a1336*/
  v58 = v13; /*0x1001a133a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001a1351*/
    &v52,
    (unsigned __int16 **)&v49,
    (__int64)&v45,
    &v56);
  if ( (_BYTE)v52 != 6 ) /*0x1001a135a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a1360*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1365*/
  v3 = 6; /*0x1001a136a*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1001a137a*/
  if ( !v14 ) /*0x1001a1382*/
    goto LABEL_58; /*0x1001a1382*/
  *(_WORD *)(v14 + 4) = 29557; /*0x1001a138b*/
  *(_DWORD *)v14 = 1952543859; /*0x1001a1391*/
  v45 = 6; /*0x1001a1397*/
  v46 = (unsigned __int16 *)v14; /*0x1001a13a2*/
  v47 = 6; /*0x1001a13a9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a13b4*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xBu, 1u); /*0x1001a13c3*/
  if ( !v15 ) /*0x1001a13cb*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x1001a1a7d*/
  qmemcpy(v15, "in_progress", 11); /*0x1001a13db*/
  LOBYTE(v56) = 3; /*0x1001a13e5*/
  v57 = 11; /*0x1001a13e9*/
  v58 = (size_t)v15; /*0x1001a13f1*/
  v59 = 11; /*0x1001a13f5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001a1410*/
    &v52,
    (unsigned __int16 **)&v49,
    (__int64)&v45,
    &v56);
  if ( (_BYTE)v52 != 6 ) /*0x1001a1419*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a141f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1424*/
  v3 = 5; /*0x1001a1429*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1001a1439*/
  if ( !v16 ) /*0x1001a1441*/
    goto LABEL_58; /*0x1001a1441*/
  *(_BYTE *)(v16 + 4) = 108; /*0x1001a144a*/
  *(_DWORD *)v16 = 1701080941; /*0x1001a144e*/
  v45 = 5; /*0x1001a1454*/
  v46 = (unsigned __int16 *)v16; /*0x1001a145f*/
  v47 = 5; /*0x1001a1466*/
  v17 = v2[2]; /*0x1001a1471*/
  if ( v17 < 0 ) /*0x1001a1478*/
  {
    v18 = 0; /*0x1001a147a*/
    goto LABEL_25; /*0x1001a147a*/
  }
  v19 = (const void *)v2[1]; /*0x1001a148d*/
  if ( v17 ) /*0x1001a1491*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1493*/
    v18 = 1; /*0x1001a1498*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1u); /*0x1001a14a6*/
    if ( !v20 ) /*0x1001a14ae*/
LABEL_25:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v17); /*0x1001a147d*/
    v21 = v20; /*0x1001a14b0*/
    v2 = (_QWORD *)a2; /*0x1001a14b3*/
  }
  else
  {
    v21 = 1; /*0x1001a14bc*/
  }
  memcpy((void *)v21, v19, v17); /*0x1001a14ca*/
  LOBYTE(v56) = 3; /*0x1001a14cf*/
  v57 = v17; /*0x1001a14d3*/
  v58 = v21; /*0x1001a14d7*/
  v59 = v17; /*0x1001a14db*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001a14f2*/
    &v52,
    (unsigned __int16 **)&v49,
    (__int64)&v45,
    &v56);
  if ( (_BYTE)v52 != 6 ) /*0x1001a1505*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a150b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1510*/
  v3 = 6; /*0x1001a1515*/
  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1001a1525*/
  if ( !v22 ) /*0x1001a152d*/
LABEL_58:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x1001a1a5b*/
  *(_WORD *)(v22 + 4) = 29813; /*0x1001a1533*/
  *(_DWORD *)v22 = 1886680431; /*0x1001a1539*/
  v45 = 6; /*0x1001a153f*/
  v46 = (unsigned __int16 *)v22; /*0x1001a154a*/
  v47 = 6; /*0x1001a1551*/
  v57 = 0; /*0x1001a155c*/
  v58 = 8; /*0x1001a1564*/
  v59 = 0; /*0x1001a156c*/
  LOBYTE(v56) = 4; /*0x1001a1574*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8( /*0x1001a158b*/
    &v52,
    (unsigned __int16 **)&v49,
    (__int64)&v45,
    &v56);
  if ( (_BYTE)v52 != 6 ) /*0x1001a1594*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a159a*/
  v46 = (unsigned __int16 *)v49; /*0x1001a15a7*/
  v47 = (__int64)v50; /*0x1001a15ae*/
  v48 = v51; /*0x1001a15b9*/
  LOBYTE(v45) = 5; /*0x1001a15c0*/
  v42 = nullptr; /*0x1001a15c7*/
  v44 = 0; /*0x1001a15d2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a15dd*/
  v23 = 4; /*0x1001a15e2*/
  v24 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1001a15f2*/
  if ( !v24 ) /*0x1001a15fa*/
    goto LABEL_61; /*0x1001a15fa*/
  *v24 = 1701869940; /*0x1001a1603*/
  v49 = 4; /*0x1001a1609*/
  v50 = v24; /*0x1001a1611*/
  v51 = 4; /*0x1001a1615*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a161d*/
  v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x10u, 1u); /*0x1001a162c*/
  if ( !v25 ) /*0x1001a1634*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x1001a1aac*/
  qmemcpy(v25, "response.created", 16); /*0x1001a1648*/
  LOBYTE(v56) = 3; /*0x1001a164b*/
  v57 = 16; /*0x1001a164f*/
  v58 = (size_t)v25; /*0x1001a1657*/
  v59 = 16; /*0x1001a165b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v52, &v42, (__int64)&v49, &v56); /*0x1001a1676*/
  if ( (_BYTE)v52 != 6 ) /*0x1001a167f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a1685*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a168a*/
  v23 = 8; /*0x1001a168f*/
  v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1001a169f*/
  if ( !v26 ) /*0x1001a16a7*/
LABEL_61:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x1001a1a8c*/
  *v26 = 0x65736E6F70736572LL; /*0x1001a16b0*/
  v49 = 8; /*0x1001a16b3*/
  v50 = v26; /*0x1001a16bb*/
  v51 = 8; /*0x1001a16bf*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h20dffb7c3269d000( /*0x1001a16d2*/
    (__int64)&v56,
    (unsigned __int8 *)&v45,
    v27);
  if ( (_BYTE)v56 == 6 ) /*0x1001a16db*/
  {
    v52 = v57; /*0x1001a19ce*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1001a19f0*/
      (__int64)"called `Result::unwrap()` on an `Err` value",
      43,
      (__int64)&v52,
      (__int64)&off_101526418,
      (__int64)&off_101525D90);
  }
  v55 = v59; /*0x1001a16e5*/
  __n = v58; /*0x1001a16ed*/
  __src = (void *)v57; /*0x1001a16f9*/
  v52 = v56; /*0x1001a16fd*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v56, &v42, (__int64)&v49, &v52); /*0x1001a1714*/
  if ( (_BYTE)v56 != 6 ) /*0x1001a171d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v56); /*0x1001a1723*/
  v28 = v2 + 44; /*0x1001a1728*/
  v57 = (__int64)v42; /*0x1001a173d*/
  v58 = v43; /*0x1001a1741*/
  v59 = v44; /*0x1001a174c*/
  LOBYTE(v56) = 5; /*0x1001a1750*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h034f66559c0783cb( /*0x1001a176e*/
    &v39,
    v28,
    "response.createdcustom_tool_callcom.openai.codexcom.openai.Codex",
    16,
    &v56);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v56); /*0x1001a1777*/
  v42 = nullptr; /*0x1001a177c*/
  v44 = 0; /*0x1001a1787*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1792*/
  v29 = 4; /*0x1001a1797*/
  v30 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1001a17a7*/
  if ( !v30 ) /*0x1001a17af*/
    goto LABEL_62; /*0x1001a17af*/
  *v30 = 1701869940; /*0x1001a17b8*/
  v49 = 4; /*0x1001a17be*/
  v50 = v30; /*0x1001a17c6*/
  v51 = 4; /*0x1001a17ca*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a17d2*/
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x14u, 1u); /*0x1001a17e1*/
  if ( !v31 ) /*0x1001a17e9*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1001a1abd*/
  qmemcpy(v31, "response.in_progress", 20); /*0x1001a17fd*/
  LOBYTE(v56) = 3; /*0x1001a1807*/
  v57 = 20; /*0x1001a180b*/
  v58 = (size_t)v31; /*0x1001a1813*/
  v59 = 20; /*0x1001a1817*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v52, &v42, (__int64)&v49, &v56); /*0x1001a1832*/
  if ( (_BYTE)v52 != 6 ) /*0x1001a183b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v52); /*0x1001a1841*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a1846*/
  v29 = 8; /*0x1001a184b*/
  v32 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1001a185b*/
  if ( !v32 ) /*0x1001a1863*/
LABEL_62:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v29); /*0x1001a1a9b*/
  *v32 = 0x65736E6F70736572LL; /*0x1001a186c*/
  v49 = 8; /*0x1001a186f*/
  v50 = v32; /*0x1001a1877*/
  v51 = 8; /*0x1001a187b*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h20dffb7c3269d000( /*0x1001a188e*/
    (__int64)&v56,
    (unsigned __int8 *)&v45,
    v33);
  if ( (_BYTE)v56 == 6 ) /*0x1001a1897*/
  {
    v52 = v57; /*0x1001a19fe*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1001a1a20*/
      (__int64)"called `Result::unwrap()` on an `Err` value",
      43,
      (__int64)&v52,
      (__int64)&off_101526418,
      (__int64)&off_101525DA8);
  }
  v55 = v59; /*0x1001a18a1*/
  __n = v58; /*0x1001a18a9*/
  __src = (void *)v57; /*0x1001a18b5*/
  v52 = v56; /*0x1001a18b9*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v56, &v42, (__int64)&v49, &v52); /*0x1001a18d0*/
  if ( (_BYTE)v56 != 6 ) /*0x1001a18d9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v56); /*0x1001a18df*/
  v57 = (__int64)v42; /*0x1001a18f2*/
  v58 = v43; /*0x1001a18f6*/
  v59 = v44; /*0x1001a1901*/
  LOBYTE(v56) = 5; /*0x1001a1905*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h034f66559c0783cb( /*0x1001a1920*/
    &v52,
    v28,
    "response.in_progress",
    20,
    &v56);
  v34 = __src; /*0x1001a1925*/
  v35 = __n; /*0x1001a1929*/
  v36 = v41; /*0x1001a1934*/
  if ( __n > v39 - v41 ) /*0x1001a1941*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v39, v41, __n, 1, 1u); /*0x1001a1a42*/
    v36 = v41; /*0x1001a1a47*/
  }
  memcpy((void *)(v36 + v40), v34, v35); /*0x1001a1957*/
  v41 = v35 + v36; /*0x1001a195f*/
  if ( v52 ) /*0x1001a196d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001a1977*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v56); /*0x1001a1980*/
  a1[2] = v41; /*0x1001a1993*/
  v37 = v39; /*0x1001a1997*/
  a1[1] = v40; /*0x1001a19a5*/
  *a1 = v37; /*0x1001a19a9*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v45); /*0x1001a19b8*/
}