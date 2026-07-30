// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream15finish_response @ 0x100acfdc0 | 1.2.4 NEW-delta
void __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::finish_response::hac6243fe4458a92a(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // r15
  char *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  __m128i v11; // xmm2
  __int64 v12; // r12
  _WORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int64 v16; // r12
  __int64 v17; // r14
  const void *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v29; // rax
  size_t v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  size_t v36; // r12
  void *v37; // rax
  size_t v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  signed __int64 v44; // r12
  __int64 v45; // r14
  const void *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  void *v59; // rax
  size_t v60; // rbx
  __int64 v61; // rax
  __int64 v62; // r15
  void *v63; // rax
  size_t v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  void *v67; // rax
  size_t v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  void *v71; // rax
  size_t v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbx
  _DWORD *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  void *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  _QWORD *v81; // rax
  void *v82; // r14
  size_t v83; // r15
  size_t v84; // r12
  __int64 v85; // rax
  char *__src; // [rsp+10h] [rbp-100h]
  size_t v88; // [rsp+20h] [rbp-F0h]
  __int64 v89; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+30h] [rbp-E0h]
  size_t v91; // [rsp+38h] [rbp-D8h]
  size_t __n; // [rsp+40h] [rbp-D0h]
  __int64 v93; // [rsp+48h] [rbp-C8h] BYREF
  size_t v94; // [rsp+50h] [rbp-C0h]
  __int64 v95; // [rsp+58h] [rbp-B8h]
  __int64 v96; // [rsp+60h] [rbp-B0h] BYREF
  _WORD *v97; // [rsp+68h] [rbp-A8h]
  __int64 v98; // [rsp+70h] [rbp-A0h]
  __int64 v99; // [rsp+78h] [rbp-98h]
  void *v100; // [rsp+80h] [rbp-90h]
  __int64 v101; // [rsp+88h] [rbp-88h] BYREF
  _QWORD *v102; // [rsp+90h] [rbp-80h]
  __int64 v103; // [rsp+98h] [rbp-78h]
  __int64 v104; // [rsp+A0h] [rbp-70h] BYREF
  void *v105; // [rsp+A8h] [rbp-68h]
  size_t v106; // [rsp+B0h] [rbp-60h]
  __int64 v107; // [rsp+B8h] [rbp-58h]
  int v108; // [rsp+C4h] [rbp-4Ch]
  __int64 v109; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-40h]
  size_t v111; // [rsp+D8h] [rbp-38h]
  __int64 v112; // [rsp+E0h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 253) ) /*0x100acfdd7*/
  {
    *a1 = 0; /*0x100acfde0*/
    a1[1] = 1; /*0x100acfde7*/
    a1[2] = 0; /*0x100acfdef*/
    return; /*0x100acfe08*/
  }
  v4 = a2; /*0x100acfe0c*/
  v89 = 0; /*0x100acfe0f*/
  v90 = 1; /*0x100acfe1a*/
  v91 = 0; /*0x100acfe25*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::hc9d3275bb1622351( /*0x100acfe3a*/
    a2,
    &v89);
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_all_blocks::h0dfc12af4bed1de0( /*0x100acfe4d*/
    a2,
    a3,
    &v89);
  *(_BYTE *)(a2 + 253) = 1; /*0x100acfe52*/
  __n = 10; /*0x100acfe5f*/
  if ( a3 ) /*0x100acfe70*/
  {
    v88 = 17; /*0x100acfe77*/
    v7 = "incomplete"; /*0x100acfe7e*/
    v8 = "max_output_tokensincomplete"; /*0x100acfe85*/
LABEL_5:
    v100 = v8; /*0x100acfe8c*/
LABEL_6:
    v108 = 0; /*0x100acfe93*/
    goto LABEL_19; /*0x100acfe9a*/
  }
  v9 = 0; /*0x100acfe9f*/
  v7 = "completedsummary_text"; /*0x100acfea5*/
  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 72)) ) /*0x100acfeac*/
  {
    v10 = *(_QWORD *)(a2 + 80); /*0x100acfec3*/
    v6 = *(_QWORD *)(a2 + 88); /*0x100acfec7*/
    switch ( v6 ) /*0x100acfecf*/
    {
      case 7LL: /*0x100acfecf*/
        v6 = (unsigned int)anon_22327b6004f579c0722d6ebc68f79196_603 ^ *(_DWORD *)v10; /*0x100acff4d*/
        LODWORD(v10) = v6 | *(int *)((char *)&anon_22327b6004f579c0722d6ebc68f79196_603 + 3) ^ *(_DWORD *)(v10 + 3); /*0x100acff5c*/
        if ( !(_DWORD)v10 ) /*0x100acff5e*/
        {
          v7 = "incomplete"; /*0x100ad0a3d*/
          v100 = "content_filter"; /*0x100ad0a4b*/
          v88 = 14; /*0x100ad0a57*/
          goto LABEL_6; /*0x100ad0a5e*/
        }
        break;
      case 29LL: /*0x100acfecf*/
        v11 = _mm_or_si128( /*0x100acff21*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_22327b6004f579c0722d6ebc68f79196_602 + 13)),
                  _mm_loadu_si128((const __m128i *)(v10 + 13))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v10),
                  _mm_loadu_si128((const __m128i *)&anon_22327b6004f579c0722d6ebc68f79196_602)));
        if ( _mm_testz_si128(v11, v11) ) /*0x100acff25*/
        {
LABEL_15:
          v88 = 17; /*0x100acff2c*/
          v7 = "incomplete"; /*0x100acff38*/
          v8 = (char *)&anon_22327b6004f579c0722d6ebc68f79196_298; /*0x100acff3f*/
          goto LABEL_5; /*0x100acff46*/
        }
        break;
      case 10LL: /*0x100acfecf*/
        v6 = anon_22327b6004f579c0722d6ebc68f79196_299 ^ *(_QWORD *)v10; /*0x100acfee4*/
        v10 = v6 | *(_WORD *)(v10 + 8) ^ 0x736Eu; /*0x100acfef9*/
        if ( !v10 ) /*0x100acfefc*/
          goto LABEL_15; /*0x100acfefc*/
        break;
    }
    LOBYTE(v10) = 1; /*0x100acff64*/
    v108 = v10; /*0x100acff66*/
    v100 = nullptr; /*0x100acff69*/
    goto LABEL_18; /*0x100acff69*/
  }
  v100 = nullptr; /*0x100acfeae*/
  LOBYTE(v9) = 1; /*0x100acfeb9*/
  v108 = v9; /*0x100acfebb*/
LABEL_18:
  __n = 9; /*0x100acff74*/
LABEL_19:
  v101 = 0; /*0x100acff80*/
  v103 = 0; /*0x100acff8b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3, v5, v6); /*0x100acff93*/
  v12 = 2; /*0x100acff98*/
  v13 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100acffa8*/
  if ( !v13 ) /*0x100acffb0*/
    goto LABEL_87; /*0x100acffb0*/
  *v13 = 25705; /*0x100acffb9*/
  v96 = 2; /*0x100acffbe*/
  v97 = v13; /*0x100acffc9*/
  v98 = 2; /*0x100acffd0*/
  v16 = *(_QWORD *)(a2 + 40); /*0x100acffdb*/
  if ( v16 < 0 ) /*0x100acffe2*/
  {
    v17 = 0; /*0x100acffe4*/
    goto LABEL_22; /*0x100acffe4*/
  }
  __src = v7; /*0x100acfff7*/
  v18 = *(const void **)(a2 + 32); /*0x100acfffe*/
  if ( v16 ) /*0x100ad0009*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1, v14, v15); /*0x100ad000b*/
    v17 = 1; /*0x100ad0010*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x100ad001e*/
    if ( !v19 ) /*0x100ad0026*/
LABEL_22:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v16); /*0x100acffe7*/
    v20 = v19; /*0x100ad0028*/
    v4 = a2; /*0x100ad002b*/
  }
  else
  {
    v20 = 1; /*0x100ad0034*/
  }
  memcpy((void *)v20, v18, v16); /*0x100ad0043*/
  LOBYTE(v109) = 3; /*0x100ad0048*/
  v110 = v16; /*0x100ad004c*/
  v111 = v20; /*0x100ad0050*/
  v112 = v16; /*0x100ad0054*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v101, &v96, &v109); /*0x100ad006e*/
  if ( (_BYTE)v104 != 6 ) /*0x100ad007e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad0084*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v101, v21, v22); /*0x100ad0089*/
  v12 = 6; /*0x100ad008e*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ad009e*/
  if ( !v23 ) /*0x100ad00a6*/
    goto LABEL_87; /*0x100ad00a6*/
  *(_WORD *)(v23 + 4) = 29795; /*0x100ad00af*/
  *(_DWORD *)v23 = 1701470831; /*0x100ad00b5*/
  v96 = 6; /*0x100ad00bb*/
  v97 = (_WORD *)v23; /*0x100ad00c6*/
  v98 = 6; /*0x100ad00cd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v24, v25); /*0x100ad00d8*/
  v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100ad00e7*/
  if ( !v26 ) /*0x100ad00ef*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100ad0b05*/
  *v26 = 0x65736E6F70736572LL; /*0x100ad00ff*/
  LOBYTE(v109) = 3; /*0x100ad0102*/
  v110 = 8; /*0x100ad0106*/
  v111 = (size_t)v26; /*0x100ad010e*/
  v112 = 8; /*0x100ad0112*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v101, &v96, &v109); /*0x100ad0130*/
  if ( (_BYTE)v104 != 6 ) /*0x100ad0139*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad013f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v101, v27, v28); /*0x100ad0144*/
  v12 = 10; /*0x100ad0149*/
  v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100ad0159*/
  if ( !v29 ) /*0x100ad0161*/
    goto LABEL_87; /*0x100ad0161*/
  qmemcpy(v29, "created_at", 10); /*0x100ad0171*/
  v96 = 10; /*0x100ad017a*/
  v97 = v29; /*0x100ad0185*/
  v98 = 10; /*0x100ad018c*/
  v30 = *(_QWORD *)(v4 + 192); /*0x100ad0197*/
  LOBYTE(v109) = 2; /*0x100ad01a5*/
  v110 = v30 >> 63; /*0x100ad01a9*/
  v111 = v30; /*0x100ad01ad*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v101, &v96, &v109); /*0x100ad01c7*/
  if ( (_BYTE)v104 != 6 ) /*0x100ad01d0*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad01d6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v101, v31, v32); /*0x100ad01db*/
  v12 = 6; /*0x100ad01e0*/
  v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ad01f0*/
  if ( !v33 ) /*0x100ad01f8*/
    goto LABEL_87; /*0x100ad01f8*/
  *(_WORD *)(v33 + 4) = 29557; /*0x100ad0201*/
  *(_DWORD *)v33 = 1952543859; /*0x100ad0207*/
  v96 = 6; /*0x100ad020d*/
  v97 = (_WORD *)v33; /*0x100ad0218*/
  v98 = 6; /*0x100ad021f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v34, v35); /*0x100ad022a*/
  v36 = __n; /*0x100ad0234*/
  v37 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100ad023e*/
  if ( !v37 ) /*0x100ad0246*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v36); /*0x100ad0b14*/
  v38 = (size_t)v37; /*0x100ad024c*/
  memcpy(v37, __src, v36); /*0x100ad0258*/
  LOBYTE(v109) = 3; /*0x100ad025d*/
  v110 = v36; /*0x100ad0261*/
  v111 = v38; /*0x100ad0265*/
  v112 = v36; /*0x100ad0269*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v101, &v96, &v109); /*0x100ad0283*/
  if ( (_BYTE)v104 != 6 ) /*0x100ad028c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad0292*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v101, v39, v40); /*0x100ad0297*/
  v12 = 5; /*0x100ad029c*/
  v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100ad02ac*/
  if ( !v41 ) /*0x100ad02b4*/
    goto LABEL_87; /*0x100ad02b4*/
  *(_BYTE *)(v41 + 4) = 108; /*0x100ad02bd*/
  *(_DWORD *)v41 = 1701080941; /*0x100ad02c1*/
  v96 = 5; /*0x100ad02c7*/
  v97 = (_WORD *)v41; /*0x100ad02d2*/
  v98 = 5; /*0x100ad02d9*/
  v44 = *(_QWORD *)(v4 + 16); /*0x100ad02e4*/
  if ( v44 < 0 ) /*0x100ad02eb*/
  {
    v45 = 0; /*0x100ad02ed*/
    goto LABEL_43; /*0x100ad02ed*/
  }
  v46 = *(const void **)(v4 + 8); /*0x100ad0300*/
  if ( v44 ) /*0x100ad0304*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v42, v43); /*0x100ad0306*/
    v45 = 1; /*0x100ad030b*/
    v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v44, 1); /*0x100ad0319*/
    if ( !v47 ) /*0x100ad0321*/
LABEL_43:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v44); /*0x100ad02f0*/
    v48 = v47; /*0x100ad0323*/
    v4 = a2; /*0x100ad0326*/
  }
  else
  {
    v48 = 1; /*0x100ad032f*/
  }
  memcpy((void *)v48, v46, v44); /*0x100ad033e*/
  LOBYTE(v109) = 3; /*0x100ad0343*/
  v110 = v44; /*0x100ad0347*/
  v111 = v48; /*0x100ad034b*/
  v112 = v44; /*0x100ad034f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v101, &v96, &v109); /*0x100ad0369*/
  if ( (_BYTE)v104 != 6 ) /*0x100ad0372*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad0378*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v101, v49, v50); /*0x100ad037d*/
  v12 = 6; /*0x100ad0382*/
  v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ad0392*/
  if ( !v51 ) /*0x100ad039a*/
LABEL_87:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v12); /*0x100ad0af4*/
  *(_WORD *)(v51 + 4) = 29813; /*0x100ad03a3*/
  *(_DWORD *)v51 = 1886680431; /*0x100ad03a9*/
  v96 = 6; /*0x100ad03af*/
  v97 = (_WORD *)v51; /*0x100ad03ba*/
  v98 = 6; /*0x100ad03c1*/
  serde_core::ser::Serializer::collect_seq::h85a6285ed47faa03(&v109, v4 + 48); /*0x100ad03d4*/
  if ( (_BYTE)v109 == 6 ) /*0x100ad03dd*/
  {
    v104 = v110; /*0x100ad0a67*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ad0a89*/
      "called `Result::unwrap()` on an `Err` value",
      43,
      &v104,
      &off_101986228,
      &off_101985718);
  }
  v107 = v112; /*0x100ad03e7*/
  v106 = v111; /*0x100ad03ef*/
  v105 = (void *)v110; /*0x100ad03fb*/
  v104 = v109; /*0x100ad03ff*/
  v52 = &v109; /*0x100ad0403*/
  v53 = (__int64)&v101; /*0x100ad0407*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v109, &v101, &v96, &v104); /*0x100ad0419*/
  if ( (_BYTE)v109 != 6 ) /*0x100ad0422*/
  {
    v52 = &v109; /*0x100ad0424*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v109); /*0x100ad0428*/
  }
  v55 = (__int64)v102; /*0x100ad0434*/
  v97 = (_WORD *)v101; /*0x100ad0438*/
  v98 = (__int64)v102; /*0x100ad043f*/
  v99 = v103; /*0x100ad044a*/
  LOBYTE(v96) = 5; /*0x100ad0451*/
  if ( !(_BYTE)v108 ) /*0x100ad045c*/
  {
    v93 = 0; /*0x100ad0462*/
    v95 = 0; /*0x100ad046d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v109, &v101, v54, v102); /*0x100ad0478*/
    v56 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ad0487*/
    if ( !v56 ) /*0x100ad048f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100ad0b54*/
    *(_WORD *)(v56 + 4) = 28271; /*0x100ad0498*/
    *(_DWORD *)v56 = 1935762802; /*0x100ad049e*/
    v101 = 6; /*0x100ad04a4*/
    v102 = (_QWORD *)v56; /*0x100ad04af*/
    v103 = 6; /*0x100ad04b3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v57, v58); /*0x100ad04bb*/
    v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v88, 1); /*0x100ad04cf*/
    if ( !v59 ) /*0x100ad04d7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v88); /*0x100ad0b63*/
    v60 = (size_t)v59; /*0x100ad04dd*/
    memcpy(v59, v100, v88); /*0x100ad04ed*/
    LOBYTE(v109) = 3; /*0x100ad04f2*/
    v110 = v88; /*0x100ad04f6*/
    v111 = v60; /*0x100ad04fa*/
    v112 = v88; /*0x100ad04fe*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v93, &v101, &v109); /*0x100ad0518*/
    if ( (_BYTE)v104 != 6 ) /*0x100ad0521*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad0527*/
    v110 = v93; /*0x100ad053a*/
    v111 = v94; /*0x100ad053e*/
    v112 = v95; /*0x100ad0549*/
    LOBYTE(v109) = 5; /*0x100ad054d*/
    v53 = 18; /*0x100ad055f*/
    v52 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100ad056c*/
                       &unk_10168712A,
                       0x12u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v52); /*0x100ad056f*/
    v52[3] = v112; /*0x100ad0578*/
    v52[2] = v111; /*0x100ad0580*/
    v61 = v109; /*0x100ad0584*/
    v55 = v110; /*0x100ad0588*/
    v52[1] = v110; /*0x100ad058c*/
    *v52 = v61; /*0x100ad0590*/
  }
  if ( *(_BYTE *)(v4 + 254) ) /*0x100ad0593*/
  {
    v93 = 0; /*0x100ad05ab*/
    v95 = 0; /*0x100ad05b6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v53, v54, v55); /*0x100ad05c1*/
    v62 = 12; /*0x100ad05c6*/
    v63 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100ad05d6*/
    if ( !v63 ) /*0x100ad05de*/
      goto LABEL_91; /*0x100ad05de*/
    qmemcpy(v63, "input_tokens", 12); /*0x100ad05ee*/
    v101 = 12; /*0x100ad05f8*/
    v102 = v63; /*0x100ad0603*/
    v103 = 12; /*0x100ad0607*/
    v64 = *(_QWORD *)(v4 + 224); /*0x100ad060f*/
    LOBYTE(v109) = 2; /*0x100ad061d*/
    v110 = v64 >> 63; /*0x100ad0621*/
    v111 = v64; /*0x100ad0625*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v93, &v101, &v109); /*0x100ad063f*/
    if ( (_BYTE)v104 != 6 ) /*0x100ad0648*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad064e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v93, v65, v66); /*0x100ad0653*/
    v62 = 13; /*0x100ad0658*/
    v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100ad0668*/
    if ( !v67 ) /*0x100ad0670*/
      goto LABEL_91; /*0x100ad0670*/
    qmemcpy(v67, "output_tokens", 13); /*0x100ad068e*/
    v101 = 13; /*0x100ad0691*/
    v102 = v67; /*0x100ad069c*/
    v103 = 13; /*0x100ad06a0*/
    v68 = *(_QWORD *)(v4 + 232); /*0x100ad06a8*/
    LOBYTE(v109) = 2; /*0x100ad06b6*/
    v110 = v68 >> 63; /*0x100ad06ba*/
    v111 = v68; /*0x100ad06be*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v93, &v101, &v109); /*0x100ad06d8*/
    if ( (_BYTE)v104 != 6 ) /*0x100ad06e1*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad06e7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v93, v69, v70); /*0x100ad06ec*/
    v62 = 12; /*0x100ad06f1*/
    v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100ad0701*/
    if ( !v71 ) /*0x100ad0709*/
LABEL_91:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v62); /*0x100ad0b32*/
    qmemcpy(v71, "total_tokens", 12); /*0x100ad0719*/
    v101 = 12; /*0x100ad0723*/
    v102 = v71; /*0x100ad072e*/
    v103 = 12; /*0x100ad0732*/
    v72 = *(_QWORD *)(v4 + 224) + *(_QWORD *)(v4 + 232); /*0x100ad0741*/
    LOBYTE(v109) = 2; /*0x100ad074f*/
    v110 = v72 >> 63; /*0x100ad0753*/
    v111 = v72; /*0x100ad0757*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v93, &v101, &v109); /*0x100ad0771*/
    if ( (_BYTE)v104 != 6 ) /*0x100ad077a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad0780*/
    v110 = v93; /*0x100ad0793*/
    v111 = v94; /*0x100ad0797*/
    v112 = v95; /*0x100ad07a2*/
    LOBYTE(v109) = 5; /*0x100ad07a6*/
    v53 = 5; /*0x100ad07b8*/
    v52 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100ad07c5*/
                       &unk_101686C50,
                       5u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v52); /*0x100ad07c8*/
    v52[3] = v112; /*0x100ad07d1*/
    v52[2] = v111; /*0x100ad07d9*/
    v73 = v109; /*0x100ad07dd*/
    v55 = v110; /*0x100ad07e1*/
    v52[1] = v110; /*0x100ad07e5*/
    *v52 = v73; /*0x100ad07e9*/
  }
  v93 = 0; /*0x100ad07ec*/
  v95 = 0; /*0x100ad07f7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v53, v54, v55); /*0x100ad0802*/
  v74 = 4; /*0x100ad0807*/
  v75 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ad0816*/
  if ( !v75 ) /*0x100ad081e*/
    goto LABEL_90; /*0x100ad081e*/
  *v75 = 1701869940; /*0x100ad0827*/
  v101 = 4; /*0x100ad082d*/
  v102 = v75; /*0x100ad0838*/
  v103 = 4; /*0x100ad083c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v76, v77); /*0x100ad0844*/
  v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x100ad0853*/
  if ( !v78 ) /*0x100ad085b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100ad0b43*/
  qmemcpy(v78, "response.completed", 18); /*0x100ad086f*/
  LOBYTE(v109) = 3; /*0x100ad0878*/
  v110 = 18; /*0x100ad087c*/
  v111 = (size_t)v78; /*0x100ad0884*/
  v112 = 18; /*0x100ad0888*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v104, &v93, &v101, &v109); /*0x100ad08a6*/
  if ( (_BYTE)v104 != 6 ) /*0x100ad08af*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v104); /*0x100ad08b5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v93, v79, v80); /*0x100ad08ba*/
  v74 = 8; /*0x100ad08bf*/
  v81 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100ad08ce*/
  if ( !v81 ) /*0x100ad08d6*/
LABEL_90:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v74); /*0x100ad0b23*/
  *v81 = 0x65736E6F70736572LL; /*0x100ad08df*/
  v101 = 8; /*0x100ad08e2*/
  v102 = v81; /*0x100ad08ed*/
  v103 = 8; /*0x100ad08f1*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hf27e369105479cd4( /*0x100ad0904*/
    &v109,
    &v96);
  if ( (_BYTE)v109 == 6 ) /*0x100ad090d*/
  {
    v104 = v110; /*0x100ad0a97*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ad0ab9*/
      "called `Result::unwrap()` on an `Err` value",
      43,
      &v104,
      &off_101986228,
      &off_101985730);
  }
  v107 = v112; /*0x100ad0917*/
  v106 = v111; /*0x100ad091f*/
  v105 = (void *)v110; /*0x100ad092b*/
  v104 = v109; /*0x100ad092f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(&v109, &v93, &v101, &v104); /*0x100ad0949*/
  if ( (_BYTE)v109 != 6 ) /*0x100ad0952*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v109); /*0x100ad0958*/
  v110 = v93; /*0x100ad0972*/
  v111 = v94; /*0x100ad0976*/
  v112 = v95; /*0x100ad0981*/
  LOBYTE(v109) = 5; /*0x100ad0985*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h282dae862ed1fb30( /*0x100ad09a0*/
    &v104,
    v4 + 240,
    &unk_101686CD9,
    18,
    &v109);
  v82 = v105; /*0x100ad09a5*/
  v83 = v106; /*0x100ad09a9*/
  v84 = v91; /*0x100ad09b4*/
  if ( v106 > v89 - v91 ) /*0x100ad09c1*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h87c233067242eb5b(&v89, v91, v106, 1, 1); /*0x100ad0adb*/
    v84 = v91; /*0x100ad0ae0*/
  }
  memcpy((void *)(v84 + v90), v82, v83); /*0x100ad09d7*/
  v91 = v83 + v84; /*0x100ad09df*/
  if ( v104 ) /*0x100ad09ed*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v104, 1); /*0x100ad09f7*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v109); /*0x100ad0a00*/
  a1[2] = v91; /*0x100ad0a13*/
  v85 = v89; /*0x100ad0a17*/
  a1[1] = v90; /*0x100ad0a25*/
  *a1 = v85; /*0x100ad0a29*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v96); /*0x100ad0a33*/
}