// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream14fail_with_type @ 0x100aced60 | 1.2.4 NEW-delta
void __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::fail_with_type::h1bfbe94b99e9370d(
        _QWORD *a1,
        __int64 a2,
        const void *a3,
        size_t a4,
        const void *a5,
        size_t a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  _WORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int64 v13; // r15
  __int64 v14; // r14
  const void *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  size_t v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  signed __int64 v39; // r15
  __int64 v40; // r14
  const void *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r12
  _DWORD *v53; // rax
  __int64 v54; // rcx
  size_t v55; // rdx
  const void *v56; // rsi
  __int64 v57; // r14
  _QWORD *v58; // r12
  __int64 v59; // rax
  __int64 v60; // rbx
  size_t v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  _DWORD *v64; // rax
  __int64 v65; // rcx
  size_t v66; // rdx
  const void *v67; // rsi
  __int64 v68; // r14
  _QWORD *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rbx
  size_t v72; // r14
  _QWORD *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // r12
  _DWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  void *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  _QWORD *v82; // rax
  void *v83; // r14
  size_t v84; // r15
  size_t v85; // r12
  __int64 v86; // rax
  __int64 v89; // [rsp+28h] [rbp-F8h] BYREF
  size_t v90; // [rsp+30h] [rbp-F0h]
  __int64 v91; // [rsp+38h] [rbp-E8h]
  size_t __n; // [rsp+40h] [rbp-E0h]
  size_t v93; // [rsp+48h] [rbp-D8h]
  _DWORD *v94; // [rsp+50h] [rbp-D0h] BYREF
  __int64 v95; // [rsp+58h] [rbp-C8h]
  __int64 v96; // [rsp+60h] [rbp-C0h]
  __int64 v97; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD *v98; // [rsp+70h] [rbp-B0h]
  __int64 v99; // [rsp+78h] [rbp-A8h]
  __int64 v100; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v101; // [rsp+88h] [rbp-98h]
  size_t v102; // [rsp+90h] [rbp-90h]
  __int64 v103; // [rsp+98h] [rbp-88h] BYREF
  _DWORD *v104; // [rsp+A0h] [rbp-80h]
  __int64 v105; // [rsp+A8h] [rbp-78h]
  __int64 v106; // [rsp+B0h] [rbp-70h]
  __int64 v107; // [rsp+B8h] [rbp-68h] BYREF
  void *v108; // [rsp+C0h] [rbp-60h]
  size_t v109; // [rsp+C8h] [rbp-58h]
  __int64 v110; // [rsp+D0h] [rbp-50h]
  __int64 v111; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v112; // [rsp+E0h] [rbp-40h]
  size_t v113; // [rsp+E8h] [rbp-38h]
  __int64 v114; // [rsp+F0h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 253) ) /*0x100aced74*/
  {
    *a1 = 0; /*0x100aced7d*/
    a1[1] = 1; /*0x100aced84*/
    a1[2] = 0; /*0x100aced8c*/
    return; /*0x100aceda5*/
  }
  v6 = (_QWORD *)a2; /*0x100aceda6*/
  __n = a4; /*0x100aceda9*/
  v93 = a6; /*0x100acedc5*/
  v100 = 0; /*0x100acedcc*/
  v101 = 1; /*0x100acedd7*/
  v102 = 0; /*0x100acede2*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::hc9d3275bb1622351( /*0x100acedf7*/
    a2,
    &v100);
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_all_blocks::h0dfc12af4bed1de0( /*0x100acee0b*/
    a2,
    1,
    &v100);
  *(_BYTE *)(a2 + 253) = 1; /*0x100acee10*/
  v94 = nullptr; /*0x100acee18*/
  v96 = 0; /*0x100acee23*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, 1, v7, v8); /*0x100acee2e*/
  v9 = 2; /*0x100acee33*/
  v10 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100acee43*/
  if ( !v10 ) /*0x100acee4b*/
    goto LABEL_76; /*0x100acee4b*/
  *v10 = 25705; /*0x100acee54*/
  v103 = 2; /*0x100acee59*/
  v104 = v10; /*0x100acee64*/
  v105 = 2; /*0x100acee68*/
  v13 = *(_QWORD *)(a2 + 40); /*0x100acee70*/
  if ( v13 < 0 ) /*0x100acee77*/
  {
    v14 = 0; /*0x100acee79*/
    goto LABEL_6; /*0x100acee79*/
  }
  v15 = *(const void **)(a2 + 32); /*0x100acee8c*/
  if ( v13 ) /*0x100acee97*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v11, v12); /*0x100acee99*/
    v14 = 1; /*0x100acee9e*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1); /*0x100aceeac*/
    if ( !v16 ) /*0x100aceeb4*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v13); /*0x100acee7c*/
    v17 = v16; /*0x100aceeb6*/
    v6 = (_QWORD *)a2; /*0x100aceeb9*/
  }
  else
  {
    v17 = 1; /*0x100aceec2*/
  }
  memcpy((void *)v17, v15, v13); /*0x100aceed0*/
  LOBYTE(v111) = 3; /*0x100aceed5*/
  v112 = v13; /*0x100aceed9*/
  v113 = v17; /*0x100aceedd*/
  v114 = v13; /*0x100aceee1*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v94, &v103, &v111); /*0x100aceefb*/
  if ( (_BYTE)v107 != 6 ) /*0x100acef04*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acef0a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v94, v18, v19); /*0x100acef0f*/
  v9 = 6; /*0x100acef14*/
  v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100acef24*/
  if ( !v20 ) /*0x100acef2c*/
    goto LABEL_76; /*0x100acef2c*/
  *(_WORD *)(v20 + 4) = 29795; /*0x100acef35*/
  *(_DWORD *)v20 = 1701470831; /*0x100acef3b*/
  v103 = 6; /*0x100acef41*/
  v104 = (_DWORD *)v20; /*0x100acef4c*/
  v105 = 6; /*0x100acef50*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v21, v22); /*0x100acef58*/
  v23 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100acef67*/
  if ( !v23 ) /*0x100acef6f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100acf856*/
  *v23 = 0x65736E6F70736572LL; /*0x100acef7f*/
  LOBYTE(v111) = 3; /*0x100acef82*/
  v112 = 8; /*0x100acef86*/
  v113 = (size_t)v23; /*0x100acef8e*/
  v114 = 8; /*0x100acef92*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v94, &v103, &v111); /*0x100acefb0*/
  if ( (_BYTE)v107 != 6 ) /*0x100acefb9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acefbf*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v94, v24, v25); /*0x100acefc4*/
  v9 = 10; /*0x100acefc9*/
  v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100acefd9*/
  if ( !v26 ) /*0x100acefe1*/
    goto LABEL_76; /*0x100acefe1*/
  qmemcpy(v26, "created_at", 10); /*0x100aceff1*/
  v103 = 10; /*0x100aceffa*/
  v104 = v26; /*0x100acf005*/
  v105 = 10; /*0x100acf009*/
  v27 = v6[24]; /*0x100acf011*/
  LOBYTE(v111) = 2; /*0x100acf01f*/
  v112 = v27 >> 63; /*0x100acf023*/
  v113 = v27; /*0x100acf027*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v94, &v103, &v111); /*0x100acf041*/
  if ( (_BYTE)v107 != 6 ) /*0x100acf04a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acf050*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v94, v28, v29); /*0x100acf055*/
  v9 = 6; /*0x100acf05a*/
  v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100acf06a*/
  if ( !v30 ) /*0x100acf072*/
    goto LABEL_76; /*0x100acf072*/
  *(_WORD *)(v30 + 4) = 29557; /*0x100acf07b*/
  *(_DWORD *)v30 = 1952543859; /*0x100acf081*/
  v103 = 6; /*0x100acf087*/
  v104 = (_DWORD *)v30; /*0x100acf092*/
  v105 = 6; /*0x100acf096*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v31, v32); /*0x100acf09e*/
  v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100acf0ad*/
  if ( !v33 ) /*0x100acf0b5*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100acf867*/
  *(_WORD *)(v33 + 4) = 25701; /*0x100acf0bb*/
  *(_DWORD *)v33 = 1818845542; /*0x100acf0c1*/
  LOBYTE(v111) = 3; /*0x100acf0c7*/
  v112 = 6; /*0x100acf0cb*/
  v113 = v33; /*0x100acf0d3*/
  v114 = 6; /*0x100acf0d7*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v94, &v103, &v111); /*0x100acf0f5*/
  if ( (_BYTE)v107 != 6 ) /*0x100acf0fe*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acf104*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v94, v34, v35); /*0x100acf109*/
  v9 = 5; /*0x100acf10e*/
  v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100acf11e*/
  if ( !v36 ) /*0x100acf126*/
    goto LABEL_76; /*0x100acf126*/
  *(_BYTE *)(v36 + 4) = 108; /*0x100acf12f*/
  *(_DWORD *)v36 = 1701080941; /*0x100acf133*/
  v103 = 5; /*0x100acf139*/
  v104 = (_DWORD *)v36; /*0x100acf144*/
  v105 = 5; /*0x100acf148*/
  v39 = v6[2]; /*0x100acf150*/
  if ( v39 < 0 ) /*0x100acf157*/
  {
    v40 = 0; /*0x100acf159*/
    goto LABEL_27; /*0x100acf159*/
  }
  v41 = (const void *)v6[1]; /*0x100acf16c*/
  if ( v39 ) /*0x100acf170*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v37, v38); /*0x100acf172*/
    v40 = 1; /*0x100acf177*/
    v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v39, 1); /*0x100acf185*/
    if ( !v42 ) /*0x100acf18d*/
LABEL_27:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v40, v39); /*0x100acf15c*/
    v43 = v42; /*0x100acf18f*/
    v6 = (_QWORD *)a2; /*0x100acf192*/
  }
  else
  {
    v43 = 1; /*0x100acf19b*/
  }
  memcpy((void *)v43, v41, v39); /*0x100acf1a9*/
  LOBYTE(v111) = 3; /*0x100acf1ae*/
  v112 = v39; /*0x100acf1b2*/
  v113 = v43; /*0x100acf1b6*/
  v114 = v39; /*0x100acf1ba*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v94, &v103, &v111); /*0x100acf1d4*/
  if ( (_BYTE)v107 != 6 ) /*0x100acf1dd*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acf1e3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v94, v44, v45); /*0x100acf1e8*/
  v9 = 6; /*0x100acf1ed*/
  v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100acf1fd*/
  if ( !v46 ) /*0x100acf205*/
    goto LABEL_76; /*0x100acf205*/
  *(_WORD *)(v46 + 4) = 29813; /*0x100acf20e*/
  *(_DWORD *)v46 = 1886680431; /*0x100acf214*/
  v103 = 6; /*0x100acf21a*/
  v104 = (_DWORD *)v46; /*0x100acf225*/
  v105 = 6; /*0x100acf229*/
  serde_core::ser::Serializer::collect_seq::h85a6285ed47faa03(&v111, v6 + 6); /*0x100acf239*/
  if ( (_BYTE)v111 == 6 ) /*0x100acf242*/
  {
    v107 = v112; /*0x100acf7b8*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100acf7da*/
      "called `Result::unwrap()` on an `Err` value",
      43,
      &v107,
      &off_101986228,
      &off_1019856D0);
  }
  v110 = v114; /*0x100acf24c*/
  v109 = v113; /*0x100acf254*/
  v108 = (void *)v112; /*0x100acf260*/
  v107 = v111; /*0x100acf264*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v111, &v94, &v103, &v107); /*0x100acf27e*/
  if ( (_BYTE)v111 != 6 ) /*0x100acf287*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v111); /*0x100acf28d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v111, &v94, v47, v48); /*0x100acf292*/
  v9 = 5; /*0x100acf297*/
  v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100acf2a7*/
  if ( !v49 ) /*0x100acf2af*/
LABEL_76:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x100acf845*/
  *(_BYTE *)(v49 + 4) = 114; /*0x100acf2b8*/
  *(_DWORD *)v49 = 1869771365; /*0x100acf2bc*/
  v89 = 5; /*0x100acf2c2*/
  v90 = v49; /*0x100acf2cd*/
  v91 = 5; /*0x100acf2d4*/
  v97 = 0; /*0x100acf2df*/
  v99 = 0; /*0x100acf2ea*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v50, v51); /*0x100acf2f5*/
  v52 = 4; /*0x100acf2fa*/
  v53 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100acf30a*/
  if ( !v53 ) /*0x100acf312*/
    goto LABEL_79; /*0x100acf312*/
  *v53 = 1701869940; /*0x100acf31b*/
  v103 = 4; /*0x100acf321*/
  v104 = v53; /*0x100acf32c*/
  v105 = 4; /*0x100acf330*/
  v55 = __n; /*0x100acf338*/
  v56 = a3; /*0x100acf342*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100acf349*/
  {
    v57 = 0; /*0x100acf34b*/
    goto LABEL_42; /*0x100acf34b*/
  }
  if ( __n ) /*0x100acf35e*/
  {
    v58 = v6; /*0x100acf360*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, a3, __n, v54); /*0x100acf363*/
    v57 = 1; /*0x100acf368*/
    v59 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100acf37a*/
    v55 = __n; /*0x100acf37f*/
    if ( !v59 ) /*0x100acf389*/
LABEL_42:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v57, v55); /*0x100acf34e*/
    v60 = v59; /*0x100acf38b*/
    v56 = a3; /*0x100acf38e*/
    v6 = v58; /*0x100acf395*/
  }
  else
  {
    v60 = 1; /*0x100acf39a*/
  }
  v61 = v55; /*0x100acf3a2*/
  memcpy((void *)v60, v56, v55); /*0x100acf3a5*/
  LOBYTE(v111) = 3; /*0x100acf3aa*/
  v112 = v61; /*0x100acf3ae*/
  v113 = v60; /*0x100acf3b2*/
  v114 = v61; /*0x100acf3b6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v97, &v103, &v111); /*0x100acf3d0*/
  if ( (_BYTE)v107 != 6 ) /*0x100acf3d9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acf3df*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v97, v62, v63); /*0x100acf3e4*/
  v52 = 7; /*0x100acf3e9*/
  v64 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100acf3f9*/
  if ( !v64 ) /*0x100acf401*/
LABEL_79:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v52); /*0x100acf876*/
  *(_DWORD *)((char *)v64 + 3) = 1701273971; /*0x100acf40a*/
  *v64 = 1936942445; /*0x100acf411*/
  v103 = 7; /*0x100acf417*/
  v104 = v64; /*0x100acf422*/
  v105 = 7; /*0x100acf426*/
  v66 = v93; /*0x100acf42e*/
  v67 = a5; /*0x100acf438*/
  if ( (v93 & 0x8000000000000000LL) != 0LL ) /*0x100acf43f*/
  {
    v68 = 0; /*0x100acf441*/
    goto LABEL_52; /*0x100acf441*/
  }
  v69 = v6; /*0x100acf454*/
  if ( v93 ) /*0x100acf457*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, a5, v93, v65); /*0x100acf459*/
    v68 = 1; /*0x100acf45e*/
    v70 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v93, 1); /*0x100acf470*/
    v66 = v93; /*0x100acf475*/
    if ( !v70 ) /*0x100acf47f*/
LABEL_52:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v68, v66); /*0x100acf444*/
    v71 = v70; /*0x100acf481*/
    v67 = a5; /*0x100acf484*/
  }
  else
  {
    v71 = 1; /*0x100acf48d*/
  }
  v72 = v66; /*0x100acf495*/
  memcpy((void *)v71, v67, v66); /*0x100acf498*/
  LOBYTE(v111) = 3; /*0x100acf49d*/
  v112 = v72; /*0x100acf4a1*/
  v113 = v71; /*0x100acf4a5*/
  v114 = v72; /*0x100acf4a9*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v97, &v103, &v111); /*0x100acf4c3*/
  v73 = v69; /*0x100acf4cc*/
  if ( (_BYTE)v107 != 6 ) /*0x100acf4cf*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acf4d5*/
  v112 = v97; /*0x100acf4e8*/
  v113 = (size_t)v98; /*0x100acf4ec*/
  v114 = v99; /*0x100acf4f7*/
  LOBYTE(v111) = 5; /*0x100acf4fb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v94, &v89, &v111); /*0x100acf515*/
  if ( (_BYTE)v107 != 6 ) /*0x100acf51e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acf524*/
  v104 = v94; /*0x100acf537*/
  v105 = v95; /*0x100acf53b*/
  v106 = v96; /*0x100acf546*/
  LOBYTE(v103) = 5; /*0x100acf54a*/
  v89 = 0; /*0x100acf551*/
  v91 = 0; /*0x100acf55c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v94, v74, v95); /*0x100acf567*/
  v75 = 4; /*0x100acf56c*/
  v76 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100acf57c*/
  if ( !v76 ) /*0x100acf58e*/
    goto LABEL_80; /*0x100acf58e*/
  *v76 = 1701869940; /*0x100acf597*/
  v97 = 4; /*0x100acf59d*/
  v98 = v76; /*0x100acf5a8*/
  v99 = 4; /*0x100acf5af*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v77, v78); /*0x100acf5ba*/
  v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x100acf5c9*/
  if ( !v79 ) /*0x100acf5d1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x100acf896*/
  qmemcpy(v79, "response.failed", 15); /*0x100acf5e5*/
  LOBYTE(v111) = 3; /*0x100acf5e8*/
  v112 = 15; /*0x100acf5ec*/
  v113 = (size_t)v79; /*0x100acf5f4*/
  v114 = 15; /*0x100acf5f8*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v107, &v89, &v97, &v111); /*0x100acf616*/
  if ( (_BYTE)v107 != 6 ) /*0x100acf61f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v107); /*0x100acf625*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v107, &v89, v80, v81); /*0x100acf62a*/
  v75 = 8; /*0x100acf62f*/
  v82 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100acf63f*/
  if ( !v82 ) /*0x100acf647*/
LABEL_80:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v75); /*0x100acf885*/
  *v82 = 0x65736E6F70736572LL; /*0x100acf650*/
  v97 = 8; /*0x100acf653*/
  v98 = v82; /*0x100acf65e*/
  v99 = 8; /*0x100acf665*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4( /*0x100acf67b*/
    &v111,
    &v103);
  if ( (_BYTE)v111 == 6 ) /*0x100acf684*/
  {
    v107 = v112; /*0x100acf7e8*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100acf80a*/
      "called `Result::unwrap()` on an `Err` value",
      43,
      &v107,
      &off_101986228,
      &off_1019856E8);
  }
  v110 = v114; /*0x100acf68e*/
  v109 = v113; /*0x100acf696*/
  v108 = (void *)v112; /*0x100acf6a2*/
  v107 = v111; /*0x100acf6a6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v111, &v89, &v97, &v107); /*0x100acf6c0*/
  if ( (_BYTE)v111 != 6 ) /*0x100acf6c9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v111); /*0x100acf6cf*/
  v112 = v89; /*0x100acf6e9*/
  v113 = v90; /*0x100acf6ed*/
  v114 = v91; /*0x100acf6f8*/
  LOBYTE(v111) = 5; /*0x100acf6fc*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30( /*0x100acf717*/
    &v107,
    v73 + 30,
    "response.failedmax_output_tokensincomplete",
    15,
    &v111);
  v83 = v108; /*0x100acf71c*/
  v84 = v109; /*0x100acf720*/
  v85 = v102; /*0x100acf72b*/
  if ( v109 > v100 - v102 ) /*0x100acf738*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v100, v102, v109, 1, 1); /*0x100acf82c*/
    v85 = v102; /*0x100acf831*/
  }
  memcpy((void *)(v85 + v101), v83, v84); /*0x100acf74e*/
  v102 = v84 + v85; /*0x100acf756*/
  if ( v107 ) /*0x100acf764*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v107, 1); /*0x100acf76e*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v111); /*0x100acf777*/
  a1[2] = v102; /*0x100acf78a*/
  v86 = v100; /*0x100acf78e*/
  a1[1] = v101; /*0x100acf79c*/
  *a1 = v86; /*0x100acf7a0*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v103); /*0x100acf7aa*/
}