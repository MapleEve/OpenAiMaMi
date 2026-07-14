// mac 1.1.8 behavioral OpenAiToAnthropic_emit_message_start 0x10019ffd0 d=0
__int64 __fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_message_start::h67332e39bc57c608(
        size_t *a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  _DWORD *v3; // rax
  void *v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // r12
  _WORD *v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // r12
  __int64 v10; // r15
  const void *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r15
  const void *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  _DWORD *v24; // rax
  void *v25; // rax
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  void *v29; // rax
  void *v30; // rax
  size_t *v31; // r14
  _QWORD v33[4]; // [rsp+0h] [rbp-130h] BYREF
  _QWORD v34[3]; // [rsp+20h] [rbp-110h] BYREF
  _QWORD v35[4]; // [rsp+38h] [rbp-F8h] BYREF
  size_t *v36; // [rsp+58h] [rbp-D8h]
  unsigned __int16 *v37[2]; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-C0h]
  unsigned __int16 *v39[2]; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+88h] [rbp-A8h]
  _QWORD *v41; // [rsp+90h] [rbp-A0h]
  unsigned __int16 *v42[2]; // [rsp+98h] [rbp-98h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-88h]
  __int64 v44; // [rsp+B0h] [rbp-80h] BYREF
  unsigned __int16 *v45; // [rsp+B8h] [rbp-78h]
  __int64 v46; // [rsp+C0h] [rbp-70h]
  __int64 v47; // [rsp+C8h] [rbp-68h]
  __int64 v48; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-58h]
  __int64 v50; // [rsp+E0h] [rbp-50h]
  __int64 *v51; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-40h]
  __int64 v53; // [rsp+F8h] [rbp-38h]
  __int64 v54; // [rsp+100h] [rbp-30h]

  v41 = a2; /*0x10019ffe4*/
  v37[0] = nullptr; /*0x10019ffee*/
  v38 = 0; /*0x10019fff9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0004*/
  v2 = 4; /*0x1001a0009*/
  v3 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1001a0019*/
  if ( !v3 ) /*0x1001a0021*/
    goto LABEL_56; /*0x1001a0021*/
  *v3 = 1701869940; /*0x1001a002a*/
  v48 = 4; /*0x1001a0030*/
  v49 = (__int64)v3; /*0x1001a0038*/
  v50 = 4; /*0x1001a003c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0044*/
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1001a0053*/
  if ( !v4 ) /*0x1001a005b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x1001a087f*/
  qmemcpy(v4, "message_start", 13); /*0x1001a0079*/
  LOBYTE(v51) = 3; /*0x1001a007c*/
  v52 = 13; /*0x1001a0080*/
  v53 = (__int64)v4; /*0x1001a0088*/
  v54 = 13; /*0x1001a008c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v37, (__int64)&v48, &v51); /*0x1001a00a7*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a00b0*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a00b6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a00bb*/
  v2 = 7; /*0x1001a00c0*/
  v5 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1001a00d0*/
  if ( !v5 ) /*0x1001a00d8*/
LABEL_56:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v2); /*0x1001a086e*/
  v36 = a1; /*0x1001a00de*/
  *(_DWORD *)((char *)v5 + 3) = 1701273971; /*0x1001a00e5*/
  *v5 = 1936942445; /*0x1001a00ec*/
  v35[0] = 7; /*0x1001a00f2*/
  v35[3] = v5; /*0x1001a00fd*/
  v35[1] = v5; /*0x1001a0104*/
  v35[2] = 7; /*0x1001a010b*/
  v42[0] = nullptr; /*0x1001a0116*/
  v43 = 0; /*0x1001a0121*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a012c*/
  v6 = 2; /*0x1001a0131*/
  v7 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1001a0141*/
  v8 = v41; /*0x1001a0149*/
  if ( !v7 ) /*0x1001a0150*/
    goto LABEL_55; /*0x1001a0150*/
  *v7 = 25705; /*0x1001a0159*/
  v48 = 2; /*0x1001a015e*/
  v49 = (__int64)v7; /*0x1001a0166*/
  v50 = 2; /*0x1001a016a*/
  v9 = v8[5]; /*0x1001a0172*/
  if ( v9 < 0 ) /*0x1001a0179*/
  {
    v10 = 0; /*0x1001a017b*/
    goto LABEL_9; /*0x1001a017b*/
  }
  v11 = (const void *)v8[4]; /*0x1001a018e*/
  if ( v9 ) /*0x1001a0192*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0194*/
    v10 = 1; /*0x1001a0199*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1u); /*0x1001a01a7*/
    if ( !v12 ) /*0x1001a01af*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1001a017e*/
    v13 = v12; /*0x1001a01b1*/
    v8 = v41; /*0x1001a01b4*/
  }
  else
  {
    v13 = 1; /*0x1001a01bd*/
  }
  memcpy((void *)v13, v11, v9); /*0x1001a01cb*/
  LOBYTE(v51) = 3; /*0x1001a01d0*/
  v52 = v9; /*0x1001a01d4*/
  v53 = v13; /*0x1001a01d8*/
  v54 = v9; /*0x1001a01dc*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v42, (__int64)&v48, &v51); /*0x1001a01f3*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a01fc*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a0202*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0207*/
  v6 = 4; /*0x1001a020c*/
  v14 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1001a021c*/
  if ( !v14 ) /*0x1001a0224*/
    goto LABEL_55; /*0x1001a0224*/
  *v14 = 1701869940; /*0x1001a022d*/
  v48 = 4; /*0x1001a0233*/
  v49 = (__int64)v14; /*0x1001a023b*/
  v50 = 4; /*0x1001a023f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0247*/
  v15 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1001a0256*/
  if ( !v15 ) /*0x1001a025e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1001a0890*/
  *(_DWORD *)((char *)v15 + 3) = 1701273971; /*0x1001a0264*/
  *v15 = 1936942445; /*0x1001a026b*/
  LOBYTE(v51) = 3; /*0x1001a0271*/
  v52 = 7; /*0x1001a0275*/
  v53 = (__int64)v15; /*0x1001a027d*/
  v54 = 7; /*0x1001a0281*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v42, (__int64)&v48, &v51); /*0x1001a029c*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a02a5*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a02ab*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a02b0*/
  v16 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1001a02bf*/
  if ( !v16 ) /*0x1001a02c7*/
    goto LABEL_55; /*0x1001a02c7*/
  *v16 = 1701605234; /*0x1001a02d0*/
  v48 = 4; /*0x1001a02d6*/
  v49 = (__int64)v16; /*0x1001a02de*/
  v50 = 4; /*0x1001a02e2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a02ea*/
  v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1001a02f9*/
  if ( !v17 ) /*0x1001a0301*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x1001a08a1*/
  *(_QWORD *)v17 = 0x6E61747369737361LL; /*0x1001a0311*/
  *(_BYTE *)(v17 + 8) = 116; /*0x1001a0314*/
  LOBYTE(v51) = 3; /*0x1001a0318*/
  v52 = 9; /*0x1001a031c*/
  v53 = v17; /*0x1001a0324*/
  v54 = 9; /*0x1001a0328*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v42, (__int64)&v48, &v51); /*0x1001a0343*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a034c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a0352*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0357*/
  v6 = 5; /*0x1001a035c*/
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1001a036c*/
  if ( !v18 ) /*0x1001a0374*/
    goto LABEL_55; /*0x1001a0374*/
  *(_BYTE *)(v18 + 4) = 108; /*0x1001a037d*/
  *(_DWORD *)v18 = 1701080941; /*0x1001a0381*/
  v48 = 5; /*0x1001a0387*/
  v49 = v18; /*0x1001a038f*/
  v50 = 5; /*0x1001a0393*/
  v19 = v8[2]; /*0x1001a039b*/
  if ( v19 < 0 ) /*0x1001a03a2*/
  {
    v20 = 0; /*0x1001a03a4*/
    goto LABEL_27; /*0x1001a03a4*/
  }
  v21 = (const void *)v8[1]; /*0x1001a03b7*/
  if ( v19 ) /*0x1001a03bb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a03bd*/
    v20 = 1; /*0x1001a03c2*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1u); /*0x1001a03d0*/
    if ( !v22 ) /*0x1001a03d8*/
LABEL_27:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v19); /*0x1001a03a7*/
    v23 = v22; /*0x1001a03da*/
  }
  else
  {
    v23 = 1; /*0x1001a03df*/
  }
  memcpy((void *)v23, v21, v19); /*0x1001a03ed*/
  LOBYTE(v51) = 3; /*0x1001a03f2*/
  v52 = v19; /*0x1001a03f6*/
  v53 = v23; /*0x1001a03fa*/
  v54 = v19; /*0x1001a03fe*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v42, (__int64)&v48, &v51); /*0x1001a0415*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a041e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a0424*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0429*/
  v6 = 7; /*0x1001a042e*/
  v24 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1001a043e*/
  if ( !v24 ) /*0x1001a0446*/
    goto LABEL_55; /*0x1001a0446*/
  *(_DWORD *)((char *)v24 + 3) = 1953391988; /*0x1001a044c*/
  *v24 = 1953394531; /*0x1001a0453*/
  v48 = 7; /*0x1001a0459*/
  v49 = (__int64)v24; /*0x1001a0461*/
  v50 = 7; /*0x1001a0465*/
  v52 = 0; /*0x1001a046d*/
  v53 = 8; /*0x1001a0475*/
  v54 = 0; /*0x1001a047d*/
  LOBYTE(v51) = 4; /*0x1001a0485*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v42, (__int64)&v48, &v51); /*0x1001a049c*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a04a5*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a04ab*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a04b0*/
  v6 = 11; /*0x1001a04b5*/
  v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xBu, 1u); /*0x1001a04c5*/
  if ( !v25 ) /*0x1001a04cd*/
    goto LABEL_55; /*0x1001a04cd*/
  qmemcpy(v25, "stop_reason", 11); /*0x1001a04dd*/
  v44 = 11; /*0x1001a04e7*/
  v45 = (unsigned __int16 *)v25; /*0x1001a04ef*/
  v46 = 11; /*0x1001a04f3*/
  LOBYTE(v33[0]) = 0; /*0x1001a04fb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v51, v42, (__int64)&v44, v33); /*0x1001a0518*/
  if ( (_BYTE)v51 != 6 ) /*0x1001a0521*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v51); /*0x1001a0527*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a052c*/
  v6 = 13; /*0x1001a0531*/
  v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1001a0541*/
  if ( !v26 ) /*0x1001a0549*/
    goto LABEL_55; /*0x1001a0549*/
  qmemcpy(v26, "stop_sequence", 13); /*0x1001a0567*/
  v44 = 13; /*0x1001a056a*/
  v45 = (unsigned __int16 *)v26; /*0x1001a0572*/
  v46 = 13; /*0x1001a0576*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v51, v42, (__int64)&v44, v33); /*0x1001a0594*/
  if ( (_BYTE)v51 != 6 ) /*0x1001a059d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v51); /*0x1001a05a3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a05a8*/
  v6 = 5; /*0x1001a05ad*/
  v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1001a05bd*/
  if ( !v27 ) /*0x1001a05c5*/
LABEL_55:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x1001a085f*/
  *(_BYTE *)(v27 + 4) = 101; /*0x1001a05ce*/
  *(_DWORD *)v27 = 1734439797; /*0x1001a05d2*/
  v34[0] = 5; /*0x1001a05d8*/
  v34[1] = v27; /*0x1001a05e3*/
  v34[2] = 5; /*0x1001a05ea*/
  v39[0] = nullptr; /*0x1001a05f5*/
  v40 = 0; /*0x1001a0600*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a060b*/
  v28 = 12; /*0x1001a0610*/
  v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1001a0620*/
  if ( !v29 ) /*0x1001a0628*/
    goto LABEL_60; /*0x1001a0628*/
  qmemcpy(v29, "input_tokens", 12); /*0x1001a0638*/
  v48 = 12; /*0x1001a0642*/
  v49 = (__int64)v29; /*0x1001a064a*/
  v50 = 12; /*0x1001a064e*/
  LOBYTE(v51) = 2; /*0x1001a0656*/
  v52 = 0; /*0x1001a065a*/
  v53 = 0; /*0x1001a0662*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v39, (__int64)&v48, &v51); /*0x1001a067d*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a0686*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a068c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1001a0691*/
  v28 = 13; /*0x1001a0696*/
  v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1001a06a6*/
  if ( !v30 ) /*0x1001a06ae*/
LABEL_60:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x1001a08b0*/
  qmemcpy(v30, "output_tokens", 13); /*0x1001a06cc*/
  v48 = 13; /*0x1001a06cf*/
  v49 = (__int64)v30; /*0x1001a06d7*/
  v50 = 13; /*0x1001a06db*/
  LOBYTE(v51) = 2; /*0x1001a06e3*/
  v52 = 0; /*0x1001a06e7*/
  v53 = 0; /*0x1001a06ef*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v39, (__int64)&v48, &v51); /*0x1001a0710*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a0719*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a071f*/
  v52 = (__int64)v39[0]; /*0x1001a0732*/
  v53 = (__int64)v39[1]; /*0x1001a0736*/
  v54 = v40; /*0x1001a0741*/
  LOBYTE(v51) = 5; /*0x1001a0745*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v42, (__int64)v34, &v51); /*0x1001a075f*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a0768*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a076e*/
  v52 = (__int64)v42[0]; /*0x1001a0781*/
  v53 = (__int64)v42[1]; /*0x1001a0785*/
  v54 = v43; /*0x1001a0790*/
  LOBYTE(v51) = 5; /*0x1001a0794*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33a950bf8e7a0c8(&v44, v37, (__int64)v35, &v51); /*0x1001a07b1*/
  v31 = v36; /*0x1001a07b6*/
  if ( (_BYTE)v44 != 6 ) /*0x1001a07c1*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a07c7*/
  v45 = v37[0]; /*0x1001a07da*/
  v46 = (__int64)v37[1]; /*0x1001a07de*/
  v47 = v38; /*0x1001a07e9*/
  LOBYTE(v44) = 5; /*0x1001a07ed*/
  v48 = (__int64)"message_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop"; /*0x1001a07f8*/
  v49 = 13; /*0x1001a07fc*/
  v39[0] = (unsigned __int16 *)&v44; /*0x1001a0804*/
  v51 = &v48; /*0x1001a080b*/
  v52 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001a0816*/
  v53 = (__int64)v39; /*0x1001a081a*/
  v54 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x1001a0825*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(
    v31,
    (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
    (unsigned __int64)&v51);
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v44); /*0x1001a0845*/
}