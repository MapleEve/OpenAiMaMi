// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::responses_tools_to_anthropic_tools_with_options::hc741651288a52cfe; addr: 0x100832090; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:45Z
double __fastcall codexmate_lib::core::relay::translator::responses_tools_to_anthropic_tools_with_options::hc741651288a52cfe(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  __m128i v17; // xmm0
  __int64 v18; // rax
  signed __int64 v19; // rcx
  __int64 v20; // r8
  signed __int64 v21; // r9
  size_t v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  _QWORD *v26; // r14
  __int64 v27; // rax
  _BYTE *v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rbx
  _BYTE *v32; // rax
  __int64 v33; // rbx
  _BYTE *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r14
  __int64 v38; // rax
  void *v39; // rbx
  signed __int64 v40; // r15
  __int64 v41; // rax
  unsigned __int16 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  _BYTE *v52; // rax
  _BYTE *v53; // rax
  _QWORD *v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  _BYTE *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  char *v61; // rax
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rcx
  __int64 v70; // rcx
  _QWORD *v71; // rdx
  _QWORD v73[3]; // [rsp+10h] [rbp-1C0h] BYREF
  void *v74; // [rsp+28h] [rbp-1A8h]
  __int64 v75; // [rsp+30h] [rbp-1A0h]
  __int64 v76; // [rsp+38h] [rbp-198h]
  __m128i v77; // [rsp+40h] [rbp-190h]
  unsigned __int16 *v78; // [rsp+50h] [rbp-180h] BYREF
  __int64 v79; // [rsp+58h] [rbp-178h]
  unsigned __int64 v80; // [rsp+60h] [rbp-170h] BYREF
  __int64 v81; // [rsp+68h] [rbp-168h]
  __int64 v82; // [rsp+70h] [rbp-160h]
  __int64 v83; // [rsp+78h] [rbp-158h]
  __int64 v84; // [rsp+80h] [rbp-150h]
  __int64 v85; // [rsp+88h] [rbp-148h]
  __int64 v86; // [rsp+90h] [rbp-140h]
  __int64 v87; // [rsp+98h] [rbp-138h]
  __int64 v88; // [rsp+A0h] [rbp-130h]
  int v89; // [rsp+ACh] [rbp-124h]
  _BYTE v90[7]; // [rsp+B0h] [rbp-120h]
  _BYTE v91[7]; // [rsp+B8h] [rbp-118h]
  __int64 v92; // [rsp+C0h] [rbp-110h] BYREF
  _QWORD v93[3]; // [rsp+C8h] [rbp-108h] BYREF
  unsigned int v94; // [rsp+E0h] [rbp-F0h]
  int v95; // [rsp+E4h] [rbp-ECh]
  __int64 v96; // [rsp+E8h] [rbp-E8h]
  __int64 v97; // [rsp+F0h] [rbp-E0h]
  int v98; // [rsp+FCh] [rbp-D4h]
  _QWORD *v99; // [rsp+100h] [rbp-D0h]
  __int64 v100; // [rsp+108h] [rbp-C8h] BYREF
  __int64 v101; // [rsp+110h] [rbp-C0h]
  __int64 v102; // [rsp+118h] [rbp-B8h]
  void *__src; // [rsp+120h] [rbp-B0h]
  _BYTE v104[88]; // [rsp+128h] [rbp-A8h] BYREF
  signed __int64 v105; // [rsp+180h] [rbp-50h]
  __int64 v106; // [rsp+188h] [rbp-48h] BYREF
  __int64 v107; // [rsp+190h] [rbp-40h]
  __m128i v108; // [rsp+198h] [rbp-38h]

  v89 = a6; /*0x1008320a4*/
  v95 = a4; /*0x1008320ab*/
  v99 = a1; /*0x1008320b1*/
  v100 = 0; /*0x1008320c2*/
  v101 = 8; /*0x1008320cd*/
  v102 = 0; /*0x1008320d8*/
  v84 = 0; /*0x1008320e3*/
  v86 = 0; /*0x1008320ee*/
  LOBYTE(v87) = 2; /*0x1008320f9*/
  v80 = 0x8000000000000000LL; /*0x100832100*/
  BYTE2(v87) = a5; /*0x100832107*/
  if ( !a3 ) /*0x100832111*/
  {
    v98 = 0; /*0x100832c21*/
LABEL_100:
    if ( (_BYTE)v89 ) /*0x100832c32*/
    {
      v61 = codexmate_lib::core::relay::translator::anthropic_tools::validate_definitions::h66dea8e23488a8ee( /*0x100832c44*/
              (_BYTE *)v101,
              v102,
              a3,
              (_BYTE *)a4,
              a5,
              a6);
      if ( v61 ) /*0x100832c4c*/
      {
        v62 = v99; /*0x100832c4e*/
        v99[1] = v61; /*0x100832c55*/
        v62[2] = 72; /*0x100832c59*/
        *v62 = 0x8000000000000000LL; /*0x100832c61*/
        goto LABEL_106; /*0x100832c64*/
      }
    }
    *(_QWORD *)&v104[16] = v102; /*0x100832c70*/
    *(_QWORD *)&v104[8] = v101; /*0x100832c85*/
    *(_QWORD *)v104 = v100; /*0x100832c8c*/
    *(double *)v10.i64 = codexmate_lib::core::relay::translator::dedupe_anthropic_tools_by_name::h45a5b28270b34445( /*0x100832ca0*/
                           &v106,
                           v104);
    *(_QWORD *)&v104[24] = v80; /*0x100832cb3*/
    *(_QWORD *)&v104[32] = v81; /*0x100832cba*/
    *(_QWORD *)&v104[40] = v82; /*0x100832cc8*/
    *(_QWORD *)&v104[48] = v83; /*0x100832cd3*/
    *(_QWORD *)&v104[56] = v84; /*0x100832cde*/
    *(_QWORD *)&v104[64] = v85; /*0x100832ce9*/
    *(_QWORD *)&v104[72] = v86; /*0x100832cf4*/
    *(_QWORD *)&v104[80] = v87; /*0x100832cff*/
    *(_QWORD *)v104 = v106; /*0x100832d0b*/
    *(_QWORD *)&v104[8] = v107; /*0x100832d12*/
    *(_QWORD *)&v104[16] = v108.i64[0]; /*0x100832d1d*/
    v63 = v99; /*0x100832d30*/
    qmemcpy(v99, v104, 0x58u); /*0x100832d3a*/
    *((_BYTE *)v63 + 88) = v98; /*0x100832d43*/
    return *(double *)v10.i64; /*0x100832d46*/
  }
  v6 = a2; /*0x100832117*/
  v88 = a2 + 32 * a3; /*0x100832121*/
  v94 = (unsigned __int8)a5; /*0x100832133*/
  v98 = 0; /*0x100832139*/
  while ( 1 ) /*0x10083214b*/
  {
    v96 = v6; /*0x10083214b*/
    v7 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100832155*/
           &anon_5fc5982723cbea77922f0a3a965b6f67_91,
           4,
           v6);
    v8 = 1; /*0x10083215a*/
    if ( !v7 || *(_BYTE *)v7 != 3 ) /*0x100832168*/
    {
      v9 = 0; /*0x1008321b0*/
      goto LABEL_19; /*0x1008321b3*/
    }
    v8 = *(_QWORD *)(v7 + 16); /*0x10083216a*/
    v9 = *(_QWORD *)(v7 + 24); /*0x10083216e*/
    if ( v9 == 10 ) /*0x100832176*/
    {
      v12 = *(_QWORD *)v8 ^ 0x726165735F626577LL; /*0x1008321c5*/
      v13 = *(unsigned __int16 *)(v8 + 8) ^ 0x6863LL; /*0x1008321cd*/
      v9 = 10; /*0x1008321d4*/
      goto LABEL_18; /*0x1008321da*/
    }
    if ( v9 == 18 ) /*0x10083217c*/
    {
      v10 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_101820240); /*0x100832183*/
      v11 = _mm_or_si128( /*0x10083219c*/
              _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v8 + 16)), (__m128i)xmmword_101820250),
              v10);
      if ( _mm_testz_si128(v11, v11) ) /*0x1008321a0*/
        goto LABEL_49; /*0x1008321a5*/
      goto LABEL_17; /*0x1008321a5*/
    }
    if ( v9 < 0xB ) /*0x1008321e3*/
      break; /*0x1008321e3*/
LABEL_17:
    v12 = *(_QWORD *)v8 ^ 0x726165735F626577LL; /*0x100832257*/
    v13 = *(_QWORD *)(v8 + 3) ^ 0x5F6863726165735FLL; /*0x100832275*/
LABEL_18:
    if ( !(v12 | v13) ) /*0x10083227b*/
    {
LABEL_49:
      v14 = v96; /*0x1008325dd*/
      codexmate_lib::core::relay::translator::anthropic_search::tool::hc333f77ef425ba05(v104, v96); /*0x1008325ee*/
      if ( v104[0] == 6 ) /*0x1008325fc*/
      {
LABEL_104:
        v64 = *(_QWORD *)&v104[16]; /*0x100832d4b*/
        v65 = v99; /*0x100832d59*/
        v99[1] = *(_QWORD *)&v104[8]; /*0x100832d60*/
        v65[2] = v64; /*0x100832d64*/
        *v65 = 0x8000000000000000LL; /*0x100832d68*/
        goto LABEL_106; /*0x100832d6b*/
      }
      HIDWORD(v75) = *(_DWORD *)&v104[4]; /*0x100832615*/
      *(_DWORD *)((char *)&v75 + 1) = *(_DWORD *)&v104[1]; /*0x100832618*/
      v10 = _mm_loadu_si128((const __m128i *)&v104[16]); /*0x100832621*/
      LOBYTE(v75) = v104[0]; /*0x100832629*/
      v76 = *(_QWORD *)&v104[8]; /*0x10083262f*/
      v77 = v10; /*0x100832636*/
      v33 = v102; /*0x10083263e*/
      if ( v102 == v100 ) /*0x10083264c*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v100); /*0x100832655*/
      v34 = (_BYTE *)v101; /*0x10083265a*/
      a4 = 32 * v33; /*0x100832664*/
      *(__m128i *)(v101 + a4 + 16) = v77; /*0x10083267b*/
      a3 = v75; /*0x100832680*/
      *(_QWORD *)&v34[a4 + 8] = v76; /*0x10083268e*/
      *(_QWORD *)&v34[a4] = a3; /*0x100832693*/
      v102 = v33 + 1; /*0x10083269a*/
      LOBYTE(v34) = 1; /*0x1008326a1*/
      v98 = (int)v34; /*0x1008326a3*/
      goto LABEL_47; /*0x1008326a3*/
    }
LABEL_19:
    codexmate_lib::core::relay::translator::responses_tool_to_anthropic_tool::hfe2eb77d92556b84(v104, v96, v94); /*0x100832281*/
    if ( v104[0] == 7 ) /*0x1008322a3*/
      goto LABEL_104; /*0x1008322a3*/
    a4 = *(unsigned int *)&v104[1]; /*0x1008322b0*/
    a3 = *(unsigned int *)&v104[4]; /*0x1008322b2*/
    *(_DWORD *)&v90[3] = *(_DWORD *)&v104[4]; /*0x1008322b5*/
    *(_DWORD *)v90 = *(_DWORD *)&v104[1]; /*0x1008322bb*/
    if ( v104[0] == 6 ) /*0x1008322c3*/
      goto LABEL_46; /*0x1008322c3*/
    v17 = _mm_loadu_si128((const __m128i *)&v104[16]); /*0x1008322d0*/
    LOBYTE(v106) = v104[0]; /*0x1008322d8*/
    HIDWORD(v106) = *(_DWORD *)&v90[3]; /*0x1008322eb*/
    *(_DWORD *)((char *)&v106 + 1) = *(_DWORD *)v90; /*0x1008322ee*/
    v107 = *(_QWORD *)&v104[8]; /*0x1008322f0*/
    v108 = v17; /*0x1008322f4*/
    v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100832309*/
            &anon_5fc5982723cbea77922f0a3a965b6f67_189,
            4,
            &v106);
    v20 = 1; /*0x10083230e*/
    if ( v18 && *(_BYTE *)v18 == 3 ) /*0x10083231c*/
    {
      v20 = *(_QWORD *)(v18 + 16); /*0x10083231e*/
      v21 = *(_QWORD *)(v18 + 24); /*0x100832322*/
    }
    else
    {
      v21 = 0; /*0x100832330*/
    }
    *(double *)v10.i64 = codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::register::h115de28204431356( /*0x10083234c*/
                           (const char **)v104,
                           &v80,
                           nullptr,
                           v19,
                           (void *)v20,
                           v21,
                           (unsigned __int16 *)v8,
                           v9);
    __src = *(void **)&v104[8]; /*0x10083235f*/
    v22 = *(_QWORD *)&v104[16]; /*0x100832366*/
    v105 = *(_QWORD *)v104; /*0x10083236d*/
    if ( *(_QWORD *)v104 == 0x8000000000000000LL ) /*0x100832374*/
    {
      v66 = v99; /*0x100832d6d*/
      v99[1] = __src; /*0x100832d7b*/
      v66[2] = v22; /*0x100832d7f*/
      *v66 = 0x8000000000000000LL; /*0x100832d83*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v106); /*0x100832d8c*/
      goto LABEL_106; /*0x100832d8c*/
    }
    if ( *(__int64 *)&v104[16] < 0 ) /*0x10083237d*/
    {
      v23 = 0; /*0x100832c0f*/
LABEL_98:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, v22); /*0x100832c11*/
    }
    if ( *(_QWORD *)&v104[16] ) /*0x100832383*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v104); /*0x100832385*/
      v23 = 1; /*0x10083238a*/
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1); /*0x100832397*/
      if ( !v24 ) /*0x10083239f*/
        goto LABEL_98; /*0x10083239f*/
      v25 = v24; /*0x1008323a5*/
    }
    else
    {
      v25 = 1; /*0x1008323aa*/
    }
    memcpy((void *)v25, __src, v22); /*0x1008323bd*/
    v104[0] = 3; /*0x1008323c2*/
    *(_QWORD *)&v104[8] = v22; /*0x1008323c9*/
    *(_QWORD *)&v104[16] = v25; /*0x1008323d0*/
    *(_QWORD *)&v104[24] = v22; /*0x1008323d7*/
    v26 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1008323f3*/
                      &anon_5fc5982723cbea77922f0a3a965b6f67_189,
                      4u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v26); /*0x1008323f9*/
    v26[3] = *(_QWORD *)&v104[24]; /*0x10083240f*/
    v26[2] = *(_QWORD *)&v104[16]; /*0x10083241a*/
    v27 = *(_QWORD *)v104; /*0x10083241e*/
    v26[1] = *(_QWORD *)&v104[8]; /*0x10083242c*/
    *v26 = v27; /*0x100832430*/
    if ( (_BYTE)v95 ) /*0x10083243a*/
    {
      if ( v9 == 6 ) /*0x100832444*/
      {
        if ( !(*(_DWORD *)v8 ^ 0x74737563 | *(unsigned __int16 *)(v8 + 4) ^ 0x6D6F) ) /*0x10083247a*/
          goto LABEL_37; /*0x10083247c*/
      }
      else if ( v9 == 8 && *(_QWORD *)v8 == 0x6E6F6974636E7566LL ) /*0x10083245d*/
      {
LABEL_37:
        v28 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100832482*/
                         "defer_loading",
                         13,
                         v96);
        if ( !v28 ) /*0x10083249d*/
          v28 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x10083249f*/
        if ( *v28 == 1 && v28[1] == 1 ) /*0x1008324af*/
        {
          *(_WORD *)v104 = 257; /*0x1008324b1*/
          v29 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1008324cf*/
                            "defer_loading",
                            0xDu);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v29); /*0x1008324d5*/
          v29[3] = *(_QWORD *)&v104[24]; /*0x1008324e1*/
          v29[2] = *(_QWORD *)&v104[16]; /*0x1008324ec*/
          v30 = *(_QWORD *)v104; /*0x1008324f0*/
          v29[1] = *(_QWORD *)&v104[8]; /*0x1008324fe*/
          *v29 = v30; /*0x100832502*/
        }
      }
    }
    *(__m128i *)&v104[16] = v108; /*0x100832510*/
    *(_QWORD *)&v104[8] = v107; /*0x10083252e*/
    *(_QWORD *)v104 = v106; /*0x100832535*/
    v31 = v102; /*0x10083253c*/
    if ( v102 == v100 ) /*0x10083254a*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v100); /*0x100832553*/
    v32 = (_BYTE *)v101; /*0x100832558*/
    a4 = 32 * v31; /*0x100832562*/
    *(_QWORD *)(v101 + a4 + 24) = *(_QWORD *)&v104[24]; /*0x10083256d*/
    *(_QWORD *)&v32[a4 + 16] = *(_QWORD *)&v104[16]; /*0x100832579*/
    a3 = *(_QWORD *)v104; /*0x10083257e*/
    *(_QWORD *)&v32[a4 + 8] = *(_QWORD *)&v104[8]; /*0x10083258c*/
    *(_QWORD *)&v32[a4] = a3; /*0x100832591*/
    v102 = v31 + 1; /*0x100832598*/
    if ( v105 ) /*0x1008325a6*/
      *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v105, 1); /*0x1008325b4*/
LABEL_46:
    v14 = v96; /*0x1008325c0*/
LABEL_47:
    v6 = v14 + 32; /*0x1008325c7*/
    if ( v6 == v88 ) /*0x1008325d2*/
      goto LABEL_100; /*0x1008325d2*/
  }
  if ( v9 != 9 ) /*0x1008321e9*/
    goto LABEL_19; /*0x1008321e9*/
  v9 = 9; /*0x100832208*/
  if ( *(_QWORD *)v8 ^ 0x63617073656D616ELL | *(unsigned __int8 *)(v8 + 8) ^ 0x65LL ) /*0x10083220e*/
    goto LABEL_19; /*0x100832211*/
  v14 = v96; /*0x10083221f*/
  v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100832229*/
          &anon_5fc5982723cbea77922f0a3a965b6f67_189,
          4,
          v96);
  v16 = 1; /*0x10083222e*/
  if ( v15 && *(_BYTE *)v15 == 3 ) /*0x100832240*/
  {
    v16 = *(_QWORD *)(v15 + 16); /*0x100832246*/
    v105 = *(_QWORD *)(v15 + 24); /*0x10083224e*/
  }
  else
  {
    v105 = 0; /*0x1008326b5*/
  }
  v35 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1018CB9E5, 5, v14); /*0x1008326cc*/
  if ( !v35 ) /*0x1008326d4*/
    goto LABEL_47; /*0x1008326d4*/
  if ( *(_BYTE *)v35 != 4 ) /*0x1008326dd*/
    goto LABEL_47; /*0x1008326dd*/
  v36 = *(_QWORD *)(v35 + 24); /*0x1008326e3*/
  if ( !v36 ) /*0x1008326ea*/
    goto LABEL_47; /*0x1008326ea*/
  v74 = (void *)v16; /*0x1008326f0*/
  a3 = *(_QWORD *)(v35 + 16); /*0x1008326f7*/
  v37 = 32 * v36; /*0x1008326fb*/
  while ( 2 ) /*0x100832712*/
  {
    __src = (void *)a3; /*0x100832712*/
    v38 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100832725*/
            &anon_5fc5982723cbea77922f0a3a965b6f67_189,
            4,
            a3);
    if ( !v38 || *(_BYTE *)v38 != 3 ) /*0x100832732*/
    {
LABEL_59:
      a3 = (__int64)__src + 32; /*0x100832701*/
      v37 -= 32; /*0x10083270c*/
      if ( !v37 ) /*0x100832710*/
        goto LABEL_47; /*0x100832710*/
      continue; /*0x100832710*/
    }
    break;
  }
  v39 = *(void **)(v38 + 16); /*0x100832734*/
  v40 = *(_QWORD *)(v38 + 24); /*0x100832738*/
  v41 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10083274f*/
          &anon_5fc5982723cbea77922f0a3a965b6f67_91,
          4,
          __src);
  if ( v41 && *(_BYTE *)v41 == 3 ) /*0x10083275c*/
  {
    v42 = *(unsigned __int16 **)(v41 + 16); /*0x10083275e*/
    v43 = *(_QWORD *)(v41 + 24); /*0x100832762*/
    v78 = v42; /*0x100832766*/
    v79 = v43; /*0x10083276d*/
    if ( v43 != 6 ) /*0x100832778*/
    {
      if ( v43 != 8 ) /*0x100832782*/
        goto LABEL_96; /*0x100832782*/
      goto LABEL_68; /*0x100832782*/
    }
    v44 = 6; /*0x100832be0*/
    if ( *(_DWORD *)v42 ^ 0x74737563 | v42[2] ^ 0x6D6F ) /*0x100832be5*/
    {
LABEL_96:
      v60 = v99; /*0x100832bed*/
      v99[1] = "Unsupported namespaced tool typegeminiclaude"; /*0x100832bfb*/
      v60[2] = 32; /*0x100832bff*/
      *v60 = 0x8000000000000000LL; /*0x100832c07*/
      goto LABEL_106; /*0x100832c0a*/
    }
  }
  else
  {
    v42 = (unsigned __int16 *)&unk_101820368; /*0x100832789*/
    v78 = (unsigned __int16 *)&unk_101820368; /*0x100832790*/
    v79 = 8; /*0x100832797*/
LABEL_68:
    v44 = 8; /*0x1008327a2*/
    if ( *(_QWORD *)v42 != 0x6E6F6974636E7566LL ) /*0x1008327b4*/
      goto LABEL_96; /*0x1008327b4*/
  }
  *(double *)v10.i64 = codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::register::h115de28204431356( /*0x1008327e2*/
                         (const char **)v104,
                         &v80,
                         v74,
                         v105,
                         v39,
                         v40,
                         v42,
                         v44);
  v45 = *(_QWORD *)v104; /*0x1008327e7*/
  v46 = *(_QWORD *)&v104[16]; /*0x1008327f5*/
  if ( *(_QWORD *)v104 == 0x8000000000000000LL ) /*0x1008327ff*/
  {
    v69 = v99; /*0x100832e65*/
    v99[1] = *(_QWORD *)&v104[8]; /*0x100832e6c*/
    v69[2] = v46; /*0x100832e70*/
    *v69 = 0x8000000000000000LL; /*0x100832e74*/
    goto LABEL_106; /*0x100832e77*/
  }
  v73[0] = *(_QWORD *)v104; /*0x100832805*/
  v97 = *(_QWORD *)&v104[8]; /*0x10083280c*/
  v73[1] = *(_QWORD *)&v104[8]; /*0x100832813*/
  v73[2] = *(_QWORD *)&v104[16]; /*0x10083281a*/
  switch ( *(_BYTE *)__src ) /*0x100832840*/
  {
    case 0: /*0x100832840*/
      LOBYTE(v92) = 0; /*0x10083288c*/
      break; /*0x100832893*/
    case 1: /*0x100832840*/
    case 2: /*0x100832840*/
      v93[2] = *((_QWORD *)__src + 3); /*0x100832846*/
      v93[1] = *((_QWORD *)__src + 2); /*0x100832851*/
      v47 = *(_QWORD *)__src; /*0x100832858*/
      v93[0] = *((_QWORD *)__src + 1); /*0x10083285f*/
      v92 = v47; /*0x100832866*/
      break; /*0x10083286d*/
    case 3: /*0x100832840*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v93, (char *)__src + 8); /*0x1008328a0*/
      LOBYTE(v92) = 3; /*0x1008328a5*/
      break; /*0x1008328ac*/
    case 4: /*0x100832840*/
      _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7792aaf1fd665bd1( /*0x10083287e*/
        v93,
        *((_QWORD *)__src + 2),
        *((_QWORD *)__src + 3));
      LOBYTE(v92) = 4; /*0x100832883*/
      break; /*0x10083288a*/
    case 5: /*0x100832840*/
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h597e84f914b16b07( /*0x1008328b9*/
        v93,
        (char *)__src + 8);
      LOBYTE(v92) = 5; /*0x1008328be*/
      break; /*0x1008328be*/
  }
  serde_json::value::to_value::h0cd76aed73b0309e(v104, &v78); /*0x1008328d3*/
  if ( v104[0] == 6 ) /*0x1008328df*/
  {
    v106 = *(_QWORD *)&v104[8]; /*0x100832f03*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100832f25*/
      &anon_5fc5982723cbea77922f0a3a965b6f67_1788,
      43,
      &v106,
      &off_101C03980,
      &off_101C028C8);
  }
  v108 = *(__m128i *)&v104[16]; /*0x1008328f7*/
  v107 = *(_QWORD *)&v104[8]; /*0x100832909*/
  v106 = *(_QWORD *)v104; /*0x10083290d*/
  v48 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100832925*/
          &anon_5fc5982723cbea77922f0a3a965b6f67_91,
          4u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v48); /*0x10083292b*/
  *(__m128i *)(v48 + 16) = v108; /*0x10083293c*/
  v49 = v106; /*0x100832940*/
  *(_QWORD *)(v48 + 8) = v107; /*0x100832948*/
  *(_QWORD *)v48 = v49; /*0x10083294c*/
  serde_json::value::to_value::ha7c9e0f76bf239c2(v104, v73); /*0x10083295d*/
  if ( v104[0] == 6 ) /*0x100832969*/
  {
    v106 = *(_QWORD *)&v104[8]; /*0x100832ed3*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100832ef5*/
      &anon_5fc5982723cbea77922f0a3a965b6f67_1788,
      43,
      &v106,
      &off_101C03980,
      &off_101C028E0);
  }
  v108 = *(__m128i *)&v104[16]; /*0x100832981*/
  v107 = *(_QWORD *)&v104[8]; /*0x100832993*/
  v106 = *(_QWORD *)v104; /*0x100832997*/
  v50 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1008329b3*/
          &anon_5fc5982723cbea77922f0a3a965b6f67_189,
          4u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v50); /*0x1008329b9*/
  *(__m128i *)(v50 + 16) = v108; /*0x1008329ca*/
  v51 = v106; /*0x1008329ce*/
  *(_QWORD *)(v50 + 8) = v107; /*0x1008329d6*/
  *(_QWORD *)v50 = v51; /*0x1008329da*/
  codexmate_lib::core::relay::translator::responses_tool_to_anthropic_tool::hfe2eb77d92556b84(v104, &v92, v94); /*0x1008329f1*/
  if ( v104[0] != 7 ) /*0x1008329ff*/
  {
    *(_DWORD *)&v91[3] = *(_DWORD *)&v104[4]; /*0x100832a11*/
    *(_DWORD *)v91 = *(_DWORD *)&v104[1]; /*0x100832a17*/
    if ( v104[0] != 6 ) /*0x100832a1f*/
    {
      v10 = _mm_loadu_si128((const __m128i *)&v104[16]); /*0x100832a2c*/
      LOBYTE(v106) = v104[0]; /*0x100832a34*/
      HIDWORD(v106) = *(_DWORD *)&v91[3]; /*0x100832a47*/
      *(_DWORD *)((char *)&v106 + 1) = *(_DWORD *)v91; /*0x100832a4a*/
      v107 = *(_QWORD *)&v104[8]; /*0x100832a4c*/
      v108 = v10; /*0x100832a50*/
      if ( (_BYTE)v95 ) /*0x100832a5c*/
      {
        v52 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100832a75*/
                         "defer_loading",
                         13,
                         __src);
        if ( !v52 ) /*0x100832a7d*/
          v52 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100832a7f*/
        if ( *v52 == 1 && v52[1] ) /*0x100832a8b*/
          goto LABEL_89; /*0x100832a8b*/
        v53 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100832aa0*/
                         "defer_loading",
                         13,
                         v14);
        if ( !v53 ) /*0x100832aa8*/
          v53 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100832aaa*/
        if ( *v53 == 1 && v53[1] ) /*0x100832ab6*/
        {
LABEL_89:
          *(_WORD *)v104 = 257; /*0x100832abc*/
          v54 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100832ada*/
                            "defer_loading",
                            0xDu);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v54); /*0x100832ae0*/
          v54[3] = *(_QWORD *)&v104[24]; /*0x100832aec*/
          v54[2] = *(_QWORD *)&v104[16]; /*0x100832af7*/
          v55 = *(_QWORD *)v104; /*0x100832afb*/
          v54[1] = *(_QWORD *)&v104[8]; /*0x100832b09*/
          *v54 = v55; /*0x100832b0d*/
        }
      }
      *(__m128i *)&v104[16] = v108; /*0x100832b1f*/
      *(_QWORD *)&v104[8] = v107; /*0x100832b2e*/
      *(_QWORD *)v104 = v106; /*0x100832b35*/
      v56 = v102; /*0x100832b3c*/
      if ( v102 == v100 ) /*0x100832b4a*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v100); /*0x100832b53*/
      v57 = (_BYTE *)v101; /*0x100832b58*/
      v58 = 32 * v56; /*0x100832b62*/
      *(_QWORD *)(v101 + v58 + 24) = *(_QWORD *)&v104[24]; /*0x100832b6d*/
      *(_QWORD *)&v57[v58 + 16] = *(_QWORD *)&v104[16]; /*0x100832b79*/
      v59 = *(_QWORD *)v104; /*0x100832b7e*/
      *(_QWORD *)&v57[v58 + 8] = *(_QWORD *)&v104[8]; /*0x100832b8c*/
      *(_QWORD *)&v57[v58] = v59; /*0x100832b91*/
      v102 = v56 + 1; /*0x100832b98*/
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v92); /*0x100832ba6*/
    if ( v45 ) /*0x100832bae*/
      *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v45, 1); /*0x100832bc3*/
    goto LABEL_59; /*0x100832bc8*/
  }
  v70 = *(_QWORD *)&v104[16]; /*0x100832e83*/
  v71 = v99; /*0x100832e8a*/
  v99[1] = *(_QWORD *)&v104[8]; /*0x100832e91*/
  v71[2] = v70; /*0x100832e95*/
  *v71 = 0x8000000000000000LL; /*0x100832e9c*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v92); /*0x100832ea6*/
  if ( v45 ) /*0x100832eae*/
    *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v45, 1); /*0x100832ebf*/
LABEL_106:
  if ( v84 ) /*0x100832d9b*/
  {
    v67 = v86; /*0x100832da4*/
    *(_QWORD *)&v104[8] = 0; /*0x100832dab*/
    *(_QWORD *)&v104[16] = v84; /*0x100832db6*/
    *(_QWORD *)&v104[24] = v85; /*0x100832dbd*/
    *(_QWORD *)&v104[40] = 0; /*0x100832dc4*/
    *(_QWORD *)&v104[48] = v84; /*0x100832dcc*/
    *(_QWORD *)&v104[56] = v85; /*0x100832dd0*/
    v68 = 1; /*0x100832dd4*/
  }
  else
  {
    v68 = 0; /*0x100832ddb*/
    v67 = 0; /*0x100832ddd*/
  }
  *(_QWORD *)v104 = v68; /*0x100832ddf*/
  *(_QWORD *)&v104[32] = v68; /*0x100832de6*/
  *(_QWORD *)&v104[64] = v67; /*0x100832ded*/
  _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdf8beb86d98b7008(v104); /*0x100832df8*/
  if ( v80 != 0x8000000000000000LL && v80 ) /*0x100832e0c*/
    *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v80, 1); /*0x100832e1a*/
  core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::ha19a7c594533c243(v101, v102); /*0x100832e2d*/
  if ( v100 ) /*0x100832e3c*/
    *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, 32 * v100, 8); /*0x100832e4e*/
  return *(double *)v10.i64; /*0x100832e53*/
}