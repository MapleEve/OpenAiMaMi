// mac 1.1.8 behavioral stream_emit_completed 0x10018ddf0 d=0
__int64 __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::emit_completed::h7b54bc7d4f1e7578(
        size_t *a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  _DWORD *v3; // rax
  void *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r13
  _WORD *v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // r13
  __int64 v10; // r15
  const void *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int16 **v15; // rax
  void *v16; // rax
  unsigned __int16 **v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r15
  const void *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  size_t *v27; // r14
  _QWORD v29[4]; // [rsp+0h] [rbp-E0h] BYREF
  size_t *v30; // [rsp+20h] [rbp-C0h]
  unsigned __int16 *v31[2]; // [rsp+28h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-A8h]
  _QWORD *v33; // [rsp+40h] [rbp-A0h]
  unsigned __int16 *v34[2]; // [rsp+48h] [rbp-98h] BYREF
  __int64 v35; // [rsp+58h] [rbp-88h]
  __int64 v36; // [rsp+60h] [rbp-80h] BYREF
  unsigned __int16 *v37; // [rsp+68h] [rbp-78h]
  unsigned __int16 *v38; // [rsp+70h] [rbp-70h]
  __int64 v39; // [rsp+78h] [rbp-68h]
  __int64 v40; // [rsp+80h] [rbp-60h] BYREF
  __int64 v41; // [rsp+88h] [rbp-58h]
  __int64 v42; // [rsp+90h] [rbp-50h]
  __int64 *v43; // [rsp+98h] [rbp-48h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-40h]
  unsigned __int16 **v45; // [rsp+A8h] [rbp-38h]
  __int64 v46; // [rsp+B0h] [rbp-30h]

  v33 = a2; /*0x10018de04*/
  v31[0] = nullptr; /*0x10018de0e*/
  v32 = 0; /*0x10018de19*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018de24*/
  v2 = 4; /*0x10018de29*/
  v3 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x10018de39*/
  if ( !v3 ) /*0x10018de41*/
    goto LABEL_46; /*0x10018de41*/
  *v3 = 1701869940; /*0x10018de4a*/
  v40 = 4; /*0x10018de50*/
  v41 = (__int64)v3; /*0x10018de58*/
  v42 = 4; /*0x10018de5c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018de64*/
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x10018de73*/
  if ( !v4 ) /*0x10018de7b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x10018e4cf*/
  qmemcpy(v4, "response.completed", 18); /*0x10018de99*/
  LOBYTE(v43) = 3; /*0x10018dea2*/
  v44 = 18; /*0x10018dea6*/
  v45 = (unsigned __int16 **)v4; /*0x10018deae*/
  v46 = 18; /*0x10018deb2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v36, v31, (__int64)&v40, &v43); /*0x10018decd*/
  if ( (_BYTE)v36 != 6 ) /*0x10018ded6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018dedc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018dee1*/
  v2 = 8; /*0x10018dee6*/
  v5 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x10018def6*/
  if ( !v5 ) /*0x10018defe*/
LABEL_46:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v2); /*0x10018e4be*/
  v30 = a1; /*0x10018df04*/
  *v5 = 0x65736E6F70736572LL; /*0x10018df0b*/
  v29[0] = 8; /*0x10018df0e*/
  v29[3] = v5; /*0x10018df19*/
  v29[1] = v5; /*0x10018df20*/
  v29[2] = 8; /*0x10018df27*/
  v34[0] = nullptr; /*0x10018df32*/
  v35 = 0; /*0x10018df3d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018df48*/
  v6 = 2; /*0x10018df4d*/
  v7 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x10018df5d*/
  v8 = v33; /*0x10018df65*/
  if ( !v7 ) /*0x10018df6c*/
    goto LABEL_45; /*0x10018df6c*/
  *v7 = 25705; /*0x10018df75*/
  v40 = 2; /*0x10018df7a*/
  v41 = (__int64)v7; /*0x10018df82*/
  v42 = 2; /*0x10018df86*/
  v9 = v8[5]; /*0x10018df8e*/
  if ( v9 < 0 ) /*0x10018df95*/
  {
    v10 = 0; /*0x10018df97*/
    goto LABEL_9; /*0x10018df97*/
  }
  v11 = (const void *)v8[4]; /*0x10018dfaa*/
  if ( v9 ) /*0x10018dfae*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018dfb0*/
    v10 = 1; /*0x10018dfb5*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1u); /*0x10018dfc3*/
    if ( !v12 ) /*0x10018dfcb*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x10018df9a*/
    v13 = v12; /*0x10018dfcd*/
    v8 = v33; /*0x10018dfd0*/
  }
  else
  {
    v13 = 1; /*0x10018dfd9*/
  }
  memcpy((void *)v13, v11, v9); /*0x10018dfe7*/
  LOBYTE(v43) = 3; /*0x10018dfec*/
  v44 = v9; /*0x10018dff0*/
  v45 = (unsigned __int16 **)v13; /*0x10018dff4*/
  v46 = v9; /*0x10018dff8*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v36, v34, (__int64)&v40, &v43); /*0x10018e00f*/
  if ( (_BYTE)v36 != 6 ) /*0x10018e022*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018e028*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e02d*/
  v6 = 6; /*0x10018e032*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x10018e042*/
  if ( !v14 ) /*0x10018e04a*/
    goto LABEL_45; /*0x10018e04a*/
  *(_WORD *)(v14 + 4) = 29795; /*0x10018e053*/
  *(_DWORD *)v14 = 1701470831; /*0x10018e059*/
  v40 = 6; /*0x10018e05f*/
  v41 = v14; /*0x10018e067*/
  v42 = 6; /*0x10018e06b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e073*/
  v15 = (unsigned __int16 **)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x10018e082*/
  if ( !v15 ) /*0x10018e08a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x10018e4e0*/
  *v15 = (unsigned __int16 *)0x65736E6F70736572LL; /*0x10018e090*/
  LOBYTE(v43) = 3; /*0x10018e093*/
  v44 = 8; /*0x10018e097*/
  v45 = v15; /*0x10018e09f*/
  v46 = 8; /*0x10018e0a3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v36, v34, (__int64)&v40, &v43); /*0x10018e0be*/
  if ( (_BYTE)v36 != 6 ) /*0x10018e0c7*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018e0cd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e0d2*/
  v6 = 10; /*0x10018e0d7*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x10018e0e7*/
  if ( !v16 ) /*0x10018e0ef*/
    goto LABEL_45; /*0x10018e0ef*/
  qmemcpy(v16, "created_at", 10); /*0x10018e0ff*/
  v40 = 10; /*0x10018e108*/
  v41 = (__int64)v16; /*0x10018e110*/
  v42 = 10; /*0x10018e114*/
  v17 = (unsigned __int16 **)v8[45]; /*0x10018e11c*/
  LOBYTE(v43) = 2; /*0x10018e12a*/
  v44 = (unsigned __int64)v17 >> 63; /*0x10018e12e*/
  v45 = v17; /*0x10018e132*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v36, v34, (__int64)&v40, &v43); /*0x10018e149*/
  if ( (_BYTE)v36 != 6 ) /*0x10018e152*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018e158*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e15d*/
  v6 = 6; /*0x10018e162*/
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x10018e172*/
  if ( !v18 ) /*0x10018e17a*/
    goto LABEL_45; /*0x10018e17a*/
  *(_WORD *)(v18 + 4) = 29557; /*0x10018e183*/
  *(_DWORD *)v18 = 1952543859; /*0x10018e189*/
  v40 = 6; /*0x10018e18f*/
  v41 = v18; /*0x10018e197*/
  v42 = 6; /*0x10018e19b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e1a3*/
  v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x10018e1b2*/
  if ( !v19 ) /*0x10018e1ba*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x10018e4f1*/
  *(_QWORD *)v19 = 0x6574656C706D6F63LL; /*0x10018e1ca*/
  *(_BYTE *)(v19 + 8) = 100; /*0x10018e1cd*/
  LOBYTE(v43) = 3; /*0x10018e1d1*/
  v44 = 9; /*0x10018e1d5*/
  v45 = (unsigned __int16 **)v19; /*0x10018e1dd*/
  v46 = 9; /*0x10018e1e1*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v36, v34, (__int64)&v40, &v43); /*0x10018e1fc*/
  if ( (_BYTE)v36 != 6 ) /*0x10018e205*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018e20b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e210*/
  v6 = 5; /*0x10018e215*/
  v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x10018e225*/
  if ( !v20 ) /*0x10018e22d*/
    goto LABEL_45; /*0x10018e22d*/
  *(_BYTE *)(v20 + 4) = 108; /*0x10018e236*/
  *(_DWORD *)v20 = 1701080941; /*0x10018e23a*/
  v40 = 5; /*0x10018e240*/
  v41 = v20; /*0x10018e248*/
  v42 = 5; /*0x10018e24c*/
  v21 = v8[2]; /*0x10018e254*/
  if ( v21 < 0 ) /*0x10018e25b*/
  {
    v22 = 0; /*0x10018e25d*/
    goto LABEL_30; /*0x10018e25d*/
  }
  v23 = (const void *)v8[1]; /*0x10018e270*/
  if ( v21 ) /*0x10018e274*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e276*/
    v22 = 1; /*0x10018e27b*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v21, 1u); /*0x10018e289*/
    if ( !v24 ) /*0x10018e291*/
LABEL_30:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v21); /*0x10018e260*/
    v25 = v24; /*0x10018e293*/
    v8 = v33; /*0x10018e296*/
  }
  else
  {
    v25 = 1; /*0x10018e29f*/
  }
  memcpy((void *)v25, v23, v21); /*0x10018e2ad*/
  LOBYTE(v43) = 3; /*0x10018e2b2*/
  v44 = v21; /*0x10018e2b6*/
  v45 = (unsigned __int16 **)v25; /*0x10018e2ba*/
  v46 = v21; /*0x10018e2be*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v36, v34, (__int64)&v40, &v43); /*0x10018e2d5*/
  if ( (_BYTE)v36 != 6 ) /*0x10018e2de*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018e2e4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10018e2e9*/
  v6 = 6; /*0x10018e2ee*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x10018e2fe*/
  if ( !v26 ) /*0x10018e306*/
LABEL_45:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x10018e4af*/
  *(_WORD *)(v26 + 4) = 29813; /*0x10018e30f*/
  *(_DWORD *)v26 = 1886680431; /*0x10018e315*/
  v40 = 6; /*0x10018e31b*/
  v41 = v26; /*0x10018e323*/
  v42 = 6; /*0x10018e327*/
  serde_core::ser::Serializer::collect_seq::hc801605adc45be37(&v43, v8 + 6); /*0x10018e33a*/
  if ( (_BYTE)v43 == 6 ) /*0x10018e343*/
  {
    v36 = v44; /*0x10018e47e*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10018e4a0*/
      (__int64)"called `Result::unwrap()` on an `Err` value",
      43,
      (__int64)&v36,
      (__int64)&off_101526418,
      (__int64)&off_101525A68);
  }
  v39 = v46; /*0x10018e34d*/
  v38 = (unsigned __int16 *)v45; /*0x10018e355*/
  v37 = (unsigned __int16 *)v44; /*0x10018e361*/
  v36 = (__int64)v43; /*0x10018e365*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v43, v34, (__int64)&v40, &v36); /*0x10018e382*/
  if ( (_BYTE)v43 != 6 ) /*0x10018e38b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v43); /*0x10018e391*/
  v44 = (__int64)v34[0]; /*0x10018e3a4*/
  v45 = (unsigned __int16 **)v34[1]; /*0x10018e3a8*/
  v46 = v35; /*0x10018e3b3*/
  LOBYTE(v43) = 5; /*0x10018e3b7*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v36, v31, (__int64)v29, &v43); /*0x10018e3d4*/
  v27 = v30; /*0x10018e3dd*/
  if ( (_BYTE)v36 != 6 ) /*0x10018e3e4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018e3ea*/
  v37 = v31[0]; /*0x10018e3fd*/
  v38 = v31[1]; /*0x10018e401*/
  v39 = v32; /*0x10018e40c*/
  LOBYTE(v36) = 5; /*0x10018e410*/
  v40 = (__int64)"response.completedid"; /*0x10018e41b*/
  v41 = 18; /*0x10018e41f*/
  v34[0] = (unsigned __int16 *)&v36; /*0x10018e427*/
  v43 = &v40; /*0x10018e42e*/
  v44 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10018e439*/
  v45 = v34; /*0x10018e43d*/
  v46 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x10018e448*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(
    v27,
    (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
    (unsigned __int64)&v43);
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v36); /*0x10018e468*/
}