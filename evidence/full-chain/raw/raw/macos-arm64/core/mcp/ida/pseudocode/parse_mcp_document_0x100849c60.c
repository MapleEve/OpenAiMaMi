// __ZN13codexmate_lib4core3mcp18parse_mcp_document @ 0x100849c60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::mcp::parse_mcp_document::hd6580a239eb217f7(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  const void *v20; // r15
  __int64 v21; // rbx
  size_t v22; // r14
  __int64 v23; // r13
  void *v24; // rax
  bool v25; // zf
  unsigned __int64 v26; // r15
  void *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r14
  size_t v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 result; // rax
  char v35[24]; // [rsp+8h] [rbp-188h] BYREF
  _BYTE v36[24]; // [rsp+20h] [rbp-170h] BYREF
  _QWORD v37[7]; // [rsp+38h] [rbp-158h] BYREF
  char v38; // [rsp+70h] [rbp-120h]
  __int16 v39; // [rsp+78h] [rbp-118h]
  _QWORD v40[3]; // [rsp+80h] [rbp-110h] BYREF
  __int64 v41; // [rsp+98h] [rbp-F8h]
  unsigned __int64 v42; // [rsp+A0h] [rbp-F0h] BYREF
  void *__s1; // [rsp+A8h] [rbp-E8h]
  size_t __n; // [rsp+B0h] [rbp-E0h]
  __int64 v45; // [rsp+B8h] [rbp-D8h]
  __int64 v46; // [rsp+C0h] [rbp-D0h]
  __int64 v47; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-B8h]
  __int64 v49; // [rsp+E0h] [rbp-B0h]
  __int128 *v50; // [rsp+E8h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-A0h]
  __int64 v52; // [rsp+F8h] [rbp-98h]
  __int64 v53; // [rsp+100h] [rbp-90h]
  __int64 v54; // [rsp+108h] [rbp-88h]
  __int64 v55; // [rsp+110h] [rbp-80h]
  __int64 v56; // [rsp+118h] [rbp-78h]
  _QWORD *v57; // [rsp+120h] [rbp-70h]
  size_t v58; // [rsp+128h] [rbp-68h]
  __int64 v59; // [rsp+130h] [rbp-60h]
  unsigned __int64 v60; // [rsp+138h] [rbp-58h] BYREF
  void *__s2; // [rsp+140h] [rbp-50h]
  size_t v62; // [rsp+148h] [rbp-48h]
  __int64 v63; // [rsp+150h] [rbp-40h]
  unsigned __int64 v64; // [rsp+158h] [rbp-38h]
  __int64 v65; // [rsp+160h] [rbp-30h]

  v4 = a1; /*0x100849c74*/
  v37[0] = 0; /*0x100849c77*/
  v37[1] = a3; /*0x100849c82*/
  v37[2] = a2; /*0x100849c89*/
  v37[3] = a3; /*0x100849c90*/
  v37[4] = 0; /*0x100849c97*/
  v37[5] = a3; /*0x100849ca2*/
  v37[6] = 0xA0000000ALL; /*0x100849cb3*/
  v38 = 1; /*0x100849cba*/
  v39 = 0; /*0x100849cc1*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h043a13fb4acaf5c1( /*0x100849cd8*/
    &v47,
    v37);
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100849ce4*/
  v8 = v5; /*0x100849ce6*/
  if ( *(_BYTE *)(v5 + 16) == 1 ) /*0x100849ced*/
  {
    v9 = *(_QWORD *)v5; /*0x100849cf3*/
    v10 = *(_QWORD *)(v8 + 8); /*0x100849cf6*/
  }
  else
  {
    v9 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x10084a113*/
           &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
           v37,
           v6,
           v7);
    *(_QWORD *)v8 = v9; /*0x10084a118*/
    *(_QWORD *)(v8 + 8) = v10; /*0x10084a11b*/
    *(_BYTE *)(v8 + 16) = 1; /*0x10084a11f*/
  }
  *(_QWORD *)v8 = v9 + 1; /*0x100849d08*/
  v53 = 0; /*0x100849d12*/
  v52 = 0; /*0x100849d20*/
  v51 = 0; /*0x100849d2e*/
  v50 = &xmmword_1015FBEC0; /*0x100849d3c*/
  v54 = v9; /*0x100849d43*/
  v55 = v10; /*0x100849d4a*/
  v60 = 0x8000000000000000LL; /*0x100849d4e*/
  if ( !v49 ) /*0x100849d5c*/
    goto LABEL_45; /*0x100849d5c*/
  v57 = a1; /*0x100849d62*/
  v11 = v48; /*0x100849d66*/
  v41 = v49; /*0x100849d6d*/
  v12 = v48 + 24 * v49; /*0x100849d78*/
  v63 = 0; /*0x100849d7c*/
  v13 = 0; /*0x100849d84*/
  do /*0x10084a005*/
  {
    v14 = v11 + 24; /*0x100849d86*/
    while ( 1 ) /*0x100849d8a*/
    {
      v65 = v13; /*0x100849d8a*/
      v15 = codexmate_lib::core::mcp::strip_toml_comment::h49b8f15aecbab7d7(*(_QWORD *)(v14 - 16)); /*0x100849d9b*/
      v17 = v16; /*0x100849d9e*/
      v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v15, v16); /*0x100849da1*/
      if ( v19 < 0 ) /*0x100849da9*/
      {
        v31 = v3; /*0x10084a074*/
        v23 = 0; /*0x10084a077*/
        goto LABEL_42; /*0x10084a077*/
      }
      v20 = (const void *)v18; /*0x100849daf*/
      if ( !v19 ) /*0x100849db5*/
      {
        v3 = 1; /*0x100849e1b*/
        goto LABEL_13; /*0x100849e1b*/
      }
      v56 = v14; /*0x100849db7*/
      v21 = v12; /*0x100849dbb*/
      v22 = v19; /*0x100849dbe*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v17); /*0x100849dc1*/
      v23 = 1; /*0x100849dc6*/
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1); /*0x100849dd4*/
      if ( !v24 ) /*0x100849ddc*/
      {
        v31 = v22; /*0x10084a129*/
LABEL_42:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v31); /*0x10084a07a*/
      }
      v3 = (__int64)v24; /*0x100849de2*/
      memcpy(v24, v20, v22); /*0x100849dee*/
      v12 = v21; /*0x100849df8*/
      if ( *(_BYTE *)v3 == 91 && *(_BYTE *)(v3 + v22 - 1) == 93 ) /*0x100849e03*/
        break; /*0x100849e03*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v22, 1); /*0x100849e10*/
      v14 = v56; /*0x100849e15*/
LABEL_13:
      v13 = v65 + 1; /*0x100849e2e*/
      v25 = v14 == v12; /*0x100849e35*/
      v14 += 24; /*0x100849e38*/
      if ( v25 ) /*0x100849e3c*/
        goto LABEL_38; /*0x100849e3c*/
    }
    v11 = v56; /*0x100849e4d*/
    v58 = v22; /*0x100849e51*/
    if ( v22 == 1 || *(char *)(v3 + 1) < -64 ) /*0x100849e61*/
      core::str::slice_error_fail::h480e51fbd8b15eba(v3, v22, 1, v22 - 1, &off_10196C728); /*0x10084a146*/
    codexmate_lib::core::mcp::parse_mcp_section_header::hea0ffbf53ee9ae95(&v42, v3 + 1, v22 - 2); /*0x100849e77*/
    v26 = v60; /*0x100849e8a*/
    v64 = v42; /*0x100849e9d*/
    if ( ((v60 != 0x8000000000000000LL) & (unsigned __int8)v63) == 0 ) /*0x100849ea1*/
    {
      if ( v42 == 0x8000000000000000LL ) /*0x100849f46*/
        goto LABEL_36; /*0x100849f46*/
      if ( v60 == 0x8000000000000000LL ) /*0x100849f4f*/
        goto LABEL_27; /*0x100849f4f*/
      v27 = __s1; /*0x100849f84*/
LABEL_30:
      if ( v64 ) /*0x100849f9d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v64, 1); /*0x100849fa7*/
      v28 = v65; /*0x100849fac*/
      v29 = v59; /*0x100849fb0*/
      goto LABEL_33; /*0x100849fb0*/
    }
    if ( v42 != 0x8000000000000000LL && __n == v62 ) /*0x100849ebe*/
    {
      v27 = __s1; /*0x100849ec0*/
      if ( !memcmp(__s1, __s2, __n) ) /*0x100849edc*/
      {
        v63 = 1; /*0x100849f92*/
        goto LABEL_30; /*0x100849f92*/
      }
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v36, &v60); /*0x100849ee9*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hf32b97b8ee994d67(v35, &v50, v36, v59, v65); /*0x100849f07*/
    if ( v26 ) /*0x100849f0f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v26, 1); /*0x100849f1d*/
    v60 = 0x8000000000000000LL; /*0x100849f2c*/
    if ( v64 == 0x8000000000000000LL ) /*0x100849f34*/
    {
      v63 = 0; /*0x100849f36*/
      goto LABEL_36; /*0x100849f3e*/
    }
LABEL_27:
    v62 = __n; /*0x100849f51*/
    __s2 = __s1; /*0x100849f6a*/
    v60 = v42; /*0x100849f6e*/
    v63 = 1; /*0x100849f77*/
    v28 = v65; /*0x100849f7b*/
    v29 = v65; /*0x100849f7f*/
LABEL_33:
    v59 = v29; /*0x100849fb4*/
    if ( v45 != 0x8000000000000000LL && v45 ) /*0x100849fd1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v45, 1); /*0x100849fdf*/
LABEL_36:
      v28 = v65; /*0x100849fe4*/
    }
    v30 = v28 + 1; /*0x100849ff7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v58, 1); /*0x100849ffa*/
    v13 = v30; /*0x100849fff*/
  }
  while ( v11 != v12 ); /*0x10084a005*/
LABEL_38:
  if ( v60 == 0x8000000000000000LL || (v63 & 1) == 0 ) /*0x10084a026*/
  {
    v4 = v57; /*0x10084a092*/
    if ( 2 * v60 ) /*0x10084a087*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v60, 1); /*0x10084a09d*/
  }
  else
  {
    v40[2] = v62; /*0x10084a02c*/
    v40[1] = __s2; /*0x10084a03b*/
    v40[0] = v60; /*0x10084a042*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hf32b97b8ee994d67(&v42, &v50, v40, v59, v41); /*0x10084a069*/
    v4 = v57; /*0x10084a06e*/
  }
LABEL_45:
  v4[2] = v49; /*0x10084a0a2*/
  v32 = v47; /*0x10084a0ad*/
  v4[1] = v48; /*0x10084a0bb*/
  *v4 = v32; /*0x10084a0bf*/
  v33 = v51; /*0x10084a0c9*/
  v4[3] = v50; /*0x10084a0d0*/
  v4[4] = v33; /*0x10084a0d4*/
  v4[5] = v52; /*0x10084a0df*/
  v4[6] = v53; /*0x10084a0ea*/
  v4[7] = v54; /*0x10084a0f5*/
  result = v55; /*0x10084a0f9*/
  v4[8] = v55; /*0x10084a0fd*/
  return result; /*0x10084a101*/
}