// __ZN13codexmate_lib4core5relay10translator32responses_tool_to_anthropic_tool @ 0x1008739a0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::responses_tool_to_anthropic_tool::h3e01159f33a1ab88(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // rax
  const void *v10; // r15
  size_t v11; // r13
  const void *v12; // r12
  __int64 v13; // r15
  _DWORD *v14; // rax
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // r14
  _DWORD *v18; // rax
  void *v19; // rax
  __int64 v20; // r14
  _DWORD *v21; // rax
  __int64 v22; // r14
  _DWORD *v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rax
  void *v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // r14
  _DWORD *v29; // rax
  void *v30; // rax
  void *v31; // rax
  __int64 v32; // r14
  _DWORD *v33; // rax
  void *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _OWORD *v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rax
  size_t v40; // r15
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // rax
  size_t v44; // r13
  __int64 v45; // r15
  void *v46; // r12
  char *v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  size_t v50; // r12
  __int64 v51; // rax
  __int64 v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // r9
  char *v55; // r13
  size_t v56; // r14
  __int64 v57; // r15
  _DWORD *v58; // rax
  void *v59; // rax
  void *v60; // rax
  __int64 v61; // r15
  _DWORD *v62; // rax
  void *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  _DWORD *v66; // rax
  void *v67; // rax
  void *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  _OWORD *v71; // r15
  __int64 v73; // [rsp+38h] [rbp-178h] BYREF
  _DWORD *v74; // [rsp+40h] [rbp-170h]
  __int64 v75; // [rsp+48h] [rbp-168h]
  __int64 v76; // [rsp+50h] [rbp-160h] BYREF
  void *v77; // [rsp+58h] [rbp-158h]
  __int64 v78; // [rsp+60h] [rbp-150h]
  __int64 v79; // [rsp+68h] [rbp-148h]
  __int64 v80; // [rsp+70h] [rbp-140h]
  __int128 v81; // [rsp+78h] [rbp-138h] BYREF
  __int64 v82; // [rsp+88h] [rbp-128h]
  __int64 v83; // [rsp+90h] [rbp-120h] BYREF
  void *v84; // [rsp+98h] [rbp-118h]
  __int64 v85; // [rsp+A0h] [rbp-110h]
  __int64 v86; // [rsp+A8h] [rbp-108h] BYREF
  _DWORD *v87; // [rsp+B0h] [rbp-100h]
  __int64 v88; // [rsp+B8h] [rbp-F8h]
  __int64 v89; // [rsp+C0h] [rbp-F0h] BYREF
  __int128 v90; // [rsp+C8h] [rbp-E8h]
  __int64 v91; // [rsp+D8h] [rbp-D8h] BYREF
  __int128 v92; // [rsp+E0h] [rbp-D0h]
  __int64 v93; // [rsp+F0h] [rbp-C0h]
  __int64 v94; // [rsp+F8h] [rbp-B8h] BYREF
  __int128 v95; // [rsp+100h] [rbp-B0h]
  __int64 v96; // [rsp+110h] [rbp-A0h] BYREF
  __int128 v97; // [rsp+118h] [rbp-98h]
  void *__src; // [rsp+128h] [rbp-88h]
  __int64 v99; // [rsp+130h] [rbp-80h] BYREF
  _DWORD *v100; // [rsp+138h] [rbp-78h]
  __int64 v101; // [rsp+140h] [rbp-70h]
  __int128 v102; // [rsp+148h] [rbp-68h] BYREF
  __int128 v103; // [rsp+158h] [rbp-58h]
  __m512i v104; // [rsp+168h] [rbp-48h] BYREF

  v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008739c9*/
         &anon_10420c9971c21f44d230d15b39fb3fec_75,
         4,
         a2);
  if ( !v4 || *(_BYTE *)v4 != 3 ) /*0x1008739da*/
    goto LABEL_87; /*0x1008739da*/
  v5 = *(_QWORD *)(v4 + 16); /*0x1008739e0*/
  v6 = *(_QWORD *)(v4 + 24); /*0x1008739e4*/
  if ( v6 == 18 ) /*0x1008739ec*/
  {
    v7 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_1015E35D0); /*0x100873a26*/
    v8 = _mm_or_si128(_mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v5 + 16)), (__m128i)xmmword_1015E35E0), v7); /*0x100873a36*/
    if ( _mm_testz_si128(v8, v8) ) /*0x100873a3a*/
      goto LABEL_20; /*0x100873a3f*/
LABEL_10:
    if ( !(*(_QWORD *)v5 ^ 0x726165735F626577LL | *(_QWORD *)(v5 + 3) ^ 0x5F6863726165735FLL) ) /*0x100873a66*/
    {
LABEL_20:
      codexmate_lib::core::relay::translator::anthropic_web_search_tool_with_type::hfff20b2e3593893f(a1); /*0x100873b4a*/
      return *(double *)v7.i64; /*0x100873b5e*/
    }
    goto LABEL_11; /*0x100873a66*/
  }
  if ( v6 == 10 ) /*0x1008739f2*/
  {
    if ( !(*(_QWORD *)v5 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v5 + 8) ^ 0x6863LL) ) /*0x100873a0c*/
      goto LABEL_20; /*0x100873a0f*/
LABEL_87:
    *(_BYTE *)a1 = 6; /*0x1008747b4*/
    return *(double *)v7.i64; /*0x1008747b4*/
  }
  if ( v6 > 0xA ) /*0x100873a46*/
    goto LABEL_10; /*0x100873a46*/
LABEL_11:
  switch ( v6 ) /*0x100873a70*/
  {
    case 6uLL: /*0x100873a70*/
      if ( *(_DWORD *)v5 ^ 0x74737563 | *(unsigned __int16 *)(v5 + 4) ^ 0x6D6F ) /*0x1008747b0*/
        goto LABEL_87; /*0x1008747b0*/
      v39 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, a2); /*0x1008747d8*/
      if ( !v39 || *(_BYTE *)v39 != 3 ) /*0x1008747e5*/
        goto LABEL_87; /*0x1008747e5*/
      __src = *(void **)(v39 + 16); /*0x1008747eb*/
      v40 = *(_QWORD *)(v39 + 24); /*0x1008747f2*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v104, v40, 0, 1, 1); /*0x10087480a*/
      v41 = v104.i64[1]; /*0x10087480f*/
      if ( v104.i32[0] == 1 ) /*0x100874817*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v104.i64[1], v104.i64[2]); /*0x100875360*/
      v42 = v104.i64[2]; /*0x10087481d*/
      memcpy((void *)v104.i64[2], __src, v40); /*0x10087482e*/
      v80 = v41; /*0x100874833*/
      *(_QWORD *)&v81 = v41; /*0x10087483a*/
      v79 = v42; /*0x100874841*/
      *((_QWORD *)&v81 + 1) = v42; /*0x100874848*/
      v82 = v40; /*0x10087484f*/
      v43 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100874865*/
              "descriptionparametersstrict",
              11,
              a2);
      if ( v43 && *(_BYTE *)v43 == 3 ) /*0x100874872*/
      {
        __src = *(void **)(v43 + 16); /*0x100874878*/
        v44 = *(_QWORD *)(v43 + 24); /*0x10087487f*/
      }
      else
      {
        __src = (void *)1; /*0x10087488a*/
        v44 = 0; /*0x100874891*/
      }
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v104, v44, 0, 1, 1); /*0x1008748a8*/
      v45 = v104.i64[1]; /*0x1008748ad*/
      if ( v104.i32[0] == 1 ) /*0x1008748b5*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v104.i64[1], v104.i64[2]); /*0x10087537c*/
      v46 = (void *)v104.i64[2]; /*0x1008748bb*/
      memcpy((void *)v104.i64[2], __src, v44); /*0x1008748cc*/
      v83 = v45; /*0x1008748d1*/
      __src = v46; /*0x1008748d8*/
      v84 = v46; /*0x1008748df*/
      v85 = v44; /*0x1008748e6*/
      v47 = (char *)&unk_101674C96; /*0x1008748ed*/
      v48 = 6; /*0x1008748f4*/
      v49 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008748fc*/
              &unk_101674C96,
              6,
              a2);
      if ( v49 ) /*0x100874904*/
      {
        v50 = v44; /*0x10087490a*/
        v47 = (char *)&anon_10420c9971c21f44d230d15b39fb3fec_75; /*0x10087490d*/
        v48 = 4; /*0x100874914*/
        v51 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10087491c*/
                &anon_10420c9971c21f44d230d15b39fb3fec_75,
                4,
                v49);
        if ( v51 ) /*0x100874924*/
        {
          if ( *(_BYTE *)v51 == 3 ) /*0x10087492d*/
          {
            v52 = *(_QWORD *)(v51 + 16); /*0x100874933*/
            v53 = *(_DWORD **)(v51 + 24); /*0x100874937*/
            v99 = v52; /*0x10087493b*/
            v100 = v53; /*0x10087493f*/
            if ( v53 ) /*0x100874946*/
            {
              *(_QWORD *)&v102 = &v99; /*0x10087494c*/
              *((_QWORD *)&v102 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100874957*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(&v104, &unk_1017C5D4B, &v102); /*0x10087496a*/
              v55 = (char *)v104.i64[1]; /*0x10087497a*/
              v93 = v104.i64[0]; /*0x10087497a*/
              v56 = v104.u64[2]; /*0x10087497e*/
              if ( v104.i64[2] > v45 - v50 ) /*0x100874988*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008754d2*/
                  &v83,
                  v50,
                  v104.i64[2],
                  1,
                  1,
                  v54);
                __src = v84; /*0x1008754de*/
                v50 = v85; /*0x1008754e5*/
              }
              v47 = (char *)__src + v50; /*0x100874995*/
              memcpy((char *)__src + v50, v55, v56); /*0x10087499f*/
              v85 = v56 + v50; /*0x1008749a7*/
              v48 = v93; /*0x1008749ae*/
              if ( v93 ) /*0x1008749b8*/
              {
                v47 = v55; /*0x1008749bf*/
                *(double *)v7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v93, 1); /*0x1008749c2*/
              }
            }
          }
        }
      }
      v91 = 0; /*0x1008749c7*/
      *((_QWORD *)&v92 + 1) = 0; /*0x1008749d2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v48); /*0x1008749dd*/
      v57 = 4; /*0x1008749e2*/
      v58 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1008749f2*/
      if ( !v58 ) /*0x1008749fa*/
        goto LABEL_176; /*0x1008749fa*/
      *v58 = 1701667182; /*0x100874a03*/
      v99 = 4; /*0x100874a09*/
      v100 = v58; /*0x100874a11*/
      v101 = 4; /*0x100874a15*/
      serde_json::value::to_value::hf4a5c51664f5d8d6(&v104, &v81); /*0x100874a28*/
      if ( v104.i8[0] == 6 ) /*0x100874a31*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x10087538a*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008753ac*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE38);
      }
      v103 = v104.i128[1]; /*0x100874a43*/
      v102 = v104.i128[0]; /*0x100874a53*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v91, &v99, &v102); /*0x100874a6a*/
      if ( v104.i8[0] != 6 ) /*0x100874a73*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100874a79*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v91); /*0x100874a7e*/
      v57 = 11; /*0x100874a83*/
      v59 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100874a93*/
      if ( !v59 ) /*0x100874a9b*/
        goto LABEL_176; /*0x100874a9b*/
      qmemcpy(v59, "description", 11); /*0x100874aae*/
      v99 = 11; /*0x100874ab9*/
      v100 = v59; /*0x100874ac1*/
      v101 = 11; /*0x100874ac5*/
      serde_json::value::to_value::hf4a5c51664f5d8d6(&v104, &v83); /*0x100874ad8*/
      if ( v104.i8[0] == 6 ) /*0x100874ae1*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x1008753ba*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008753dc*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE38);
      }
      v103 = v104.i128[1]; /*0x100874af3*/
      v102 = v104.i128[0]; /*0x100874b03*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v91, &v99, &v102); /*0x100874b1a*/
      if ( v104.i8[0] != 6 ) /*0x100874b23*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100874b29*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v91); /*0x100874b2e*/
      v57 = 12; /*0x100874b33*/
      v60 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100874b43*/
      if ( !v60 ) /*0x100874b4b*/
LABEL_176:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v57); /*0x100875579*/
      qmemcpy(v60, "input_schema", 12); /*0x100874b5b*/
      v76 = 12; /*0x100874b65*/
      v93 = (__int64)v60; /*0x100874b70*/
      v77 = v60; /*0x100874b77*/
      v78 = 12; /*0x100874b7e*/
      v94 = 0; /*0x100874b89*/
      *((_QWORD *)&v95 + 1) = 0; /*0x100874b94*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x100874b9f*/
      v61 = 4; /*0x100874ba4*/
      v62 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100874bb4*/
      if ( !v62 ) /*0x100874bbc*/
        goto LABEL_174; /*0x100874bbc*/
      *v62 = 1701869940; /*0x100874bc5*/
      v99 = 4; /*0x100874bcb*/
      v100 = v62; /*0x100874bd3*/
      v101 = 4; /*0x100874bd7*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196C868); /*0x100874bea*/
      if ( v104.i8[0] == 6 ) /*0x100874bf3*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x1008753ea*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087540c*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE38);
      }
      v103 = v104.i128[1]; /*0x100874c05*/
      v102 = v104.i128[0]; /*0x100874c15*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v94, &v99, &v102); /*0x100874c2c*/
      if ( v104.i8[0] != 6 ) /*0x100874c35*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100874c3b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v94); /*0x100874c40*/
      v61 = 10; /*0x100874c45*/
      v63 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100874c55*/
      if ( !v63 ) /*0x100874c5d*/
        goto LABEL_174; /*0x100874c5d*/
      qmemcpy(v63, "properties", 10); /*0x100874c70*/
      v73 = 10; /*0x100874c7a*/
      v74 = v63; /*0x100874c85*/
      v75 = 10; /*0x100874c8c*/
      v89 = 0; /*0x100874c97*/
      *((_QWORD *)&v90 + 1) = 0; /*0x100874ca2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1); /*0x100874cad*/
      v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100874cbc*/
      if ( !v64 ) /*0x100874cc4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100875599*/
      *(_BYTE *)(v64 + 4) = 116; /*0x100874ccd*/
      *(_DWORD *)v64 = 1970302569; /*0x100874cd1*/
      v86 = 5; /*0x100874cd7*/
      v87 = (_DWORD *)v64; /*0x100874ce2*/
      v88 = 5; /*0x100874ce9*/
      v96 = 0; /*0x100874cf4*/
      *((_QWORD *)&v97 + 1) = 0; /*0x100874cff*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100874d0a*/
      v65 = 4; /*0x100874d0f*/
      v66 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100874d1f*/
      if ( !v66 ) /*0x100874d27*/
        goto LABEL_177; /*0x100874d27*/
      *v66 = 1701869940; /*0x100874d30*/
      v99 = 4; /*0x100874d36*/
      v100 = v66; /*0x100874d3e*/
      v101 = 4; /*0x100874d42*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CBB0); /*0x100874d55*/
      if ( v104.i8[0] == 6 ) /*0x100874d5e*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x10087541a*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087543c*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE38);
      }
      v103 = v104.i128[1]; /*0x100874d70*/
      v102 = v104.i128[0]; /*0x100874d80*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v96, &v99, &v102); /*0x100874d97*/
      if ( v104.i8[0] != 6 ) /*0x100874da0*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100874da6*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v96); /*0x100874dab*/
      v65 = 11; /*0x100874db0*/
      v67 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100874dc0*/
      if ( !v67 ) /*0x100874dc8*/
LABEL_177:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v65); /*0x100875588*/
      qmemcpy(v67, "description", 11); /*0x100874ddb*/
      v99 = 11; /*0x100874de7*/
      v100 = v67; /*0x100874def*/
      v101 = 11; /*0x100874df3*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CBC0); /*0x100874e06*/
      if ( v104.i8[0] == 6 ) /*0x100874e0f*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x10087544a*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087546c*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE38);
      }
      v103 = v104.i128[1]; /*0x100874e21*/
      v102 = v104.i128[0]; /*0x100874e31*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v96, &v99, &v102); /*0x100874e48*/
      if ( v104.i8[0] != 6 ) /*0x100874e51*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100874e57*/
      v104.i64[1] = v96; /*0x100874e6a*/
      v104.i128[1] = v97; /*0x100874e6e*/
      v104.i8[0] = 5; /*0x100874e7d*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v89, &v86, &v104); /*0x100874e97*/
      if ( (_BYTE)v102 != 6 ) /*0x100874ea0*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100874ea6*/
      v104.i64[1] = v89; /*0x100874eb9*/
      v104.i128[1] = v90; /*0x100874ebd*/
      v104.i8[0] = 5; /*0x100874ecc*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v94, &v73, &v104); /*0x100874ee6*/
      if ( (_BYTE)v102 != 6 ) /*0x100874eef*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100874ef5*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, &v94); /*0x100874efa*/
      v61 = 20; /*0x100874eff*/
      v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x100874f0f*/
      if ( !v68 ) /*0x100874f17*/
        goto LABEL_174; /*0x100874f17*/
      qmemcpy(v68, "additionalProperties", 20); /*0x100874f35*/
      v99 = 20; /*0x100874f3f*/
      v100 = v68; /*0x100874f47*/
      v101 = 20; /*0x100874f4b*/
      v104.i16[0] = 257; /*0x100874f53*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v94, &v99, &v104); /*0x100874f6c*/
      if ( (_BYTE)v102 != 6 ) /*0x100874f75*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100874f7b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, &v94); /*0x100874f80*/
      v61 = 8; /*0x100874f85*/
      v69 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100874f95*/
      if ( !v69 ) /*0x100874f9d*/
LABEL_174:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v61); /*0x100875559*/
      *v69 = 0x6465726975716572LL; /*0x100874fb0*/
      v99 = 8; /*0x100874fb3*/
      v100 = v69; /*0x100874fbb*/
      v101 = 8; /*0x100874fbf*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x100874fc7*/
      v70 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100874fd6*/
      if ( !v70 ) /*0x100874fde*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100875480*/
      v71 = (_OWORD *)v70; /*0x100874fe4*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CBD0); /*0x100874ff2*/
      if ( v104.i8[0] == 6 ) /*0x100874ffb*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x10087548e*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008754b0*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE38);
      }
      v71[1] = v104.i128[1]; /*0x10087500d*/
      *v71 = v104.i128[0]; /*0x10087501d*/
      v104.i64[1] = 1; /*0x100875020*/
      v104.i64[2] = (__int64)v71; /*0x100875028*/
      v104.i64[3] = 1; /*0x10087502c*/
      v104.i8[0] = 4; /*0x100875034*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v94, &v99, &v104); /*0x10087504b*/
      if ( (_BYTE)v102 != 6 ) /*0x100875054*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x10087505a*/
      v104.i64[1] = v94; /*0x10087506d*/
      v104.i128[1] = v95; /*0x100875071*/
      v104.i8[0] = 5; /*0x100875080*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v91, &v76, &v104); /*0x10087509a*/
      if ( (_BYTE)v102 != 6 ) /*0x1008750a3*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x1008750a9*/
      *(__int64 *)((char *)v104.i64 + 7) = v91; /*0x1008750c3*/
      *(__int128 *)((char *)v104.i128 + 15) = v92; /*0x1008750c7*/
      *(_BYTE *)a1 = 5; /*0x1008750cf*/
      *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v104.i64[2] + 7); /*0x1008750d6*/
      *(_QWORD *)(a1 + 17) = v104.i64[2]; /*0x1008750de*/
      *(_OWORD *)(a1 + 1) = v104.i128[0]; /*0x1008750ee*/
      if ( v83 ) /*0x1008750fc*/
        *(double *)v7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v83, 1); /*0x10087510a*/
      if ( v80 ) /*0x100875119*/
        *(double *)v7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v80, 1); /*0x10087512b*/
      break;
    case 0xBuLL: /*0x100873a70*/
      if ( *(_QWORD *)v5 ^ 0x68735F6C61636F6CLL | *(_QWORD *)(v5 + 3) ^ 0x6C6C6568735F6C61LL ) /*0x100873b7e*/
        goto LABEL_87; /*0x100873b81*/
      *(_QWORD *)&v81 = 0; /*0x100873b87*/
      v82 = 0; /*0x100873b92*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&anon_10420c9971c21f44d230d15b39fb3fec_75, v5); /*0x100873b9d*/
      v13 = 4; /*0x100873ba2*/
      v14 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100873bb2*/
      if ( !v14 ) /*0x100873bba*/
        goto LABEL_168; /*0x100873bba*/
      *v14 = 1701667182; /*0x100873bc3*/
      v99 = 4; /*0x100873bc9*/
      v100 = v14; /*0x100873bd1*/
      v101 = 4; /*0x100873bd5*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CBE0); /*0x100873be8*/
      if ( v104.i8[0] == 6 ) /*0x100873bf1*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x100875139*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087515b*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x100873c03*/
      v102 = v104.i128[0]; /*0x100873c13*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v81, &v99, &v102); /*0x100873c2a*/
      if ( v104.i8[0] != 6 ) /*0x100873c33*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100873c39*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v81); /*0x100873c3e*/
      v13 = 11; /*0x100873c43*/
      v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100873c53*/
      if ( !v15 ) /*0x100873c5b*/
        goto LABEL_168; /*0x100873c5b*/
      qmemcpy(v15, "description", 11); /*0x100873c6e*/
      v99 = 11; /*0x100873c79*/
      v100 = v15; /*0x100873c81*/
      v101 = 11; /*0x100873c85*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CBF0); /*0x100873c98*/
      if ( v104.i8[0] == 6 ) /*0x100873ca1*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x100875169*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087518b*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x100873cb3*/
      v102 = v104.i128[0]; /*0x100873cc3*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v81, &v99, &v102); /*0x100873cda*/
      if ( v104.i8[0] != 6 ) /*0x100873ce3*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100873ce9*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v81); /*0x100873cee*/
      v13 = 12; /*0x100873cf3*/
      v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100873d03*/
      if ( !v16 ) /*0x100873d0b*/
LABEL_168:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x1008754f9*/
      qmemcpy(v16, "input_schema", 12); /*0x100873d1b*/
      v83 = 12; /*0x100873d25*/
      __src = v16; /*0x100873d30*/
      v84 = v16; /*0x100873d37*/
      v85 = 12; /*0x100873d3e*/
      v91 = 0; /*0x100873d49*/
      *((_QWORD *)&v92 + 1) = 0; /*0x100873d54*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x100873d5f*/
      v17 = 4; /*0x100873d64*/
      v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100873d74*/
      if ( !v18 ) /*0x100873d7c*/
        goto LABEL_170; /*0x100873d7c*/
      *v18 = 1701869940; /*0x100873d85*/
      v99 = 4; /*0x100873d8b*/
      v100 = v18; /*0x100873d93*/
      v101 = 4; /*0x100873d97*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196C868); /*0x100873daa*/
      if ( v104.i8[0] == 6 ) /*0x100873db3*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x100875199*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008751bb*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x100873dc5*/
      v102 = v104.i128[0]; /*0x100873dd5*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v91, &v99, &v102); /*0x100873dec*/
      if ( v104.i8[0] != 6 ) /*0x100873df5*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100873dfb*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v91); /*0x100873e00*/
      v17 = 10; /*0x100873e05*/
      v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100873e15*/
      if ( !v19 ) /*0x100873e1d*/
        goto LABEL_170; /*0x100873e1d*/
      qmemcpy(v19, "properties", 10); /*0x100873e30*/
      v76 = 10; /*0x100873e3a*/
      v77 = v19; /*0x100873e45*/
      v78 = 10; /*0x100873e4c*/
      v94 = 0; /*0x100873e57*/
      *((_QWORD *)&v95 + 1) = 0; /*0x100873e62*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1); /*0x100873e6d*/
      v20 = 7; /*0x100873e72*/
      v21 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100873e82*/
      if ( !v21 ) /*0x100873e8a*/
        goto LABEL_171; /*0x100873e8a*/
      *(_DWORD *)((char *)v21 + 3) = 1684955501; /*0x100873e93*/
      *v21 = 1835888483; /*0x100873e9a*/
      v73 = 7; /*0x100873ea0*/
      v74 = v21; /*0x100873eab*/
      v75 = 7; /*0x100873eb2*/
      v89 = 0; /*0x100873ebd*/
      *((_QWORD *)&v90 + 1) = 0; /*0x100873ec8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100873ed3*/
      v22 = 4; /*0x100873ed8*/
      v23 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100873ee8*/
      if ( !v23 ) /*0x100873ef0*/
        goto LABEL_169; /*0x100873ef0*/
      *v23 = 1701869940; /*0x100873ef9*/
      v99 = 4; /*0x100873eff*/
      v100 = v23; /*0x100873f07*/
      v101 = 4; /*0x100873f0b*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CC00); /*0x100873f1e*/
      if ( v104.i8[0] == 6 ) /*0x100873f27*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x1008751c9*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008751eb*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x100873f39*/
      v102 = v104.i128[0]; /*0x100873f49*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v89, &v99, &v102); /*0x100873f60*/
      if ( v104.i8[0] != 6 ) /*0x100873f69*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100873f6f*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v89); /*0x100873f74*/
      v22 = 5; /*0x100873f79*/
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100873f89*/
      if ( !v24 ) /*0x100873f91*/
        goto LABEL_169; /*0x100873f91*/
      *(_BYTE *)(v24 + 4) = 115; /*0x100873f9a*/
      *(_DWORD *)v24 = 1835365481; /*0x100873f9e*/
      v86 = 5; /*0x100873fa4*/
      v87 = (_DWORD *)v24; /*0x100873faf*/
      v88 = 5; /*0x100873fb6*/
      v96 = 0; /*0x100873fc1*/
      *((_QWORD *)&v97 + 1) = 0; /*0x100873fcc*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100873fd7*/
      v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100873fe6*/
      if ( !v25 ) /*0x100873fee*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10087556a*/
      *v25 = 1701869940; /*0x100873ff7*/
      v99 = 4; /*0x100873ffd*/
      v100 = v25; /*0x100874005*/
      v101 = 4; /*0x100874009*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CBB0); /*0x10087401c*/
      if ( v104.i8[0] == 6 ) /*0x100874025*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x1008751f9*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087521b*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x100874037*/
      v102 = v104.i128[0]; /*0x100874047*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v96, &v99, &v102); /*0x10087405e*/
      if ( v104.i8[0] != 6 ) /*0x100874067*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x10087406d*/
      v104.i64[1] = v96; /*0x100874080*/
      v104.i128[1] = v97; /*0x100874084*/
      v104.i8[0] = 5; /*0x100874093*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v89, &v86, &v104); /*0x1008740ad*/
      if ( (_BYTE)v102 != 6 ) /*0x1008740b6*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x1008740bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, &v89); /*0x1008740c1*/
      v22 = 11; /*0x1008740c6*/
      v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1008740d6*/
      if ( !v26 ) /*0x1008740de*/
LABEL_169:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x10087550b*/
      qmemcpy(v26, "description", 11); /*0x1008740f1*/
      v99 = 11; /*0x1008740fd*/
      v100 = v26; /*0x100874105*/
      v101 = 11; /*0x100874109*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CC10); /*0x10087411c*/
      if ( v104.i8[0] == 6 ) /*0x100874125*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x100875229*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087524b*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x100874137*/
      v102 = v104.i128[0]; /*0x100874147*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v89, &v99, &v102); /*0x10087415e*/
      if ( v104.i8[0] != 6 ) /*0x100874167*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x10087416d*/
      v104.i64[1] = v89; /*0x100874180*/
      v104.i128[1] = v90; /*0x100874184*/
      v104.i8[0] = 5; /*0x100874193*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v94, &v73, &v104); /*0x1008741ad*/
      if ( (_BYTE)v102 != 6 ) /*0x1008741b6*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x1008741bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, &v94); /*0x1008741c1*/
      v20 = 7; /*0x1008741c6*/
      v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008741d6*/
      if ( !v27 ) /*0x1008741de*/
        goto LABEL_171; /*0x1008741de*/
      *(_DWORD *)((char *)v27 + 3) = 1919509611; /*0x1008741e7*/
      *v27 = 1802661751; /*0x1008741ee*/
      v86 = 7; /*0x1008741f4*/
      v87 = v27; /*0x1008741ff*/
      v88 = 7; /*0x100874206*/
      v96 = 0; /*0x100874211*/
      *((_QWORD *)&v97 + 1) = 0; /*0x10087421c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100874227*/
      v28 = 4; /*0x10087422c*/
      v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10087423c*/
      if ( !v29 ) /*0x100874244*/
        goto LABEL_172; /*0x100874244*/
      *v29 = 1701869940; /*0x10087424d*/
      v99 = 4; /*0x100874253*/
      v100 = v29; /*0x10087425b*/
      v101 = 4; /*0x10087425f*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CBB0); /*0x100874272*/
      if ( v104.i8[0] == 6 ) /*0x10087427b*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x100875259*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087527b*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x10087428d*/
      v102 = v104.i128[0]; /*0x10087429d*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v96, &v99, &v102); /*0x1008742b4*/
      if ( v104.i8[0] != 6 ) /*0x1008742bd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x1008742c3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v96); /*0x1008742c8*/
      v28 = 11; /*0x1008742cd*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1008742dd*/
      if ( !v30 ) /*0x1008742e5*/
LABEL_172:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x10087553b*/
      qmemcpy(v30, "description", 11); /*0x1008742f8*/
      v99 = 11; /*0x100874304*/
      v100 = v30; /*0x10087430c*/
      v101 = 11; /*0x100874310*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CC20); /*0x100874323*/
      if ( v104.i8[0] == 6 ) /*0x10087432c*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x100875289*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008752ab*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x10087433e*/
      v102 = v104.i128[0]; /*0x10087434e*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v96, &v99, &v102); /*0x100874365*/
      if ( v104.i8[0] != 6 ) /*0x10087436e*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100874374*/
      v104.i64[1] = v96; /*0x100874387*/
      v104.i128[1] = v97; /*0x10087438b*/
      v104.i8[0] = 5; /*0x10087439a*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v94, &v86, &v104); /*0x1008743b4*/
      if ( (_BYTE)v102 != 6 ) /*0x1008743bd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x1008743c3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, &v94); /*0x1008743c8*/
      v20 = 10; /*0x1008743cd*/
      v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1008743dd*/
      if ( !v31 ) /*0x1008743e5*/
LABEL_171:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v20); /*0x10087552c*/
      qmemcpy(v31, "timeout_ms", 10); /*0x1008743f8*/
      v86 = 10; /*0x100874404*/
      v87 = v31; /*0x10087440f*/
      v88 = 10; /*0x100874416*/
      v96 = 0; /*0x100874421*/
      *((_QWORD *)&v97 + 1) = 0; /*0x10087442c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1); /*0x100874437*/
      v32 = 4; /*0x10087443c*/
      v33 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10087444c*/
      if ( !v33 ) /*0x100874454*/
        goto LABEL_173; /*0x100874454*/
      *v33 = 1701869940; /*0x10087445d*/
      v99 = 4; /*0x100874463*/
      v100 = v33; /*0x10087446b*/
      v101 = 4; /*0x10087446f*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CC30); /*0x100874482*/
      if ( v104.i8[0] == 6 ) /*0x10087448b*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x1008752b9*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008752db*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x10087449d*/
      v102 = v104.i128[0]; /*0x1008744ad*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v96, &v99, &v102); /*0x1008744c4*/
      if ( v104.i8[0] != 6 ) /*0x1008744cd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x1008744d3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &v96); /*0x1008744d8*/
      v32 = 11; /*0x1008744dd*/
      v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1008744ed*/
      if ( !v34 ) /*0x1008744f5*/
LABEL_173:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v32); /*0x10087554a*/
      qmemcpy(v34, "description", 11); /*0x100874508*/
      v99 = 11; /*0x100874514*/
      v100 = v34; /*0x10087451c*/
      v101 = 11; /*0x100874520*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CC40); /*0x100874533*/
      if ( v104.i8[0] == 6 ) /*0x10087453c*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x1008752e9*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087530b*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v103 = v104.i128[1]; /*0x10087454e*/
      v102 = v104.i128[0]; /*0x10087455e*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v104, &v96, &v99, &v102); /*0x100874575*/
      if ( v104.i8[0] != 6 ) /*0x10087457e*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v104); /*0x100874584*/
      v104.i64[1] = v96; /*0x100874597*/
      v104.i128[1] = v97; /*0x10087459b*/
      v104.i8[0] = 5; /*0x1008745aa*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v94, &v86, &v104); /*0x1008745c4*/
      if ( (_BYTE)v102 != 6 ) /*0x1008745cd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x1008745d3*/
      v104.i64[1] = v94; /*0x1008745e6*/
      v104.i128[1] = v95; /*0x1008745ea*/
      v104.i8[0] = 5; /*0x1008745f9*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v91, &v76, &v104); /*0x100874613*/
      if ( (_BYTE)v102 != 6 ) /*0x10087461c*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100874622*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v102, &v91); /*0x100874627*/
      v17 = 8; /*0x10087462c*/
      v35 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10087463c*/
      if ( !v35 ) /*0x100874644*/
LABEL_170:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v17); /*0x10087551d*/
      *v35 = 0x6465726975716572LL; /*0x100874657*/
      v99 = 8; /*0x10087465a*/
      v100 = v35; /*0x100874662*/
      v101 = 8; /*0x100874666*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x10087466e*/
      v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10087467d*/
      if ( !v36 ) /*0x100874685*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x10087531f*/
      v37 = (_OWORD *)v36; /*0x10087468b*/
      serde_json::value::to_value::h29e3c39dc75a9151(&v104, &off_10196CC50); /*0x100874699*/
      if ( v104.i8[0] == 6 ) /*0x1008746a2*/
      {
        *(_QWORD *)&v102 = v104.i64[1]; /*0x10087532d*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10087534f*/
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v102,
          &off_10196D480,
          &off_10196CE50);
      }
      v37[1] = v104.i128[1]; /*0x1008746b5*/
      *v37 = v104.i128[0]; /*0x1008746c7*/
      v104.i64[1] = 1; /*0x1008746cb*/
      v104.i64[2] = (__int64)v37; /*0x1008746d3*/
      v104.i64[3] = 1; /*0x1008746d7*/
      v104.i8[0] = 4; /*0x1008746df*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v91, &v99, &v104); /*0x1008746f6*/
      if ( (_BYTE)v102 != 6 ) /*0x1008746ff*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100874705*/
      v104.i64[1] = v91; /*0x100874718*/
      v104.i128[1] = v92; /*0x10087471c*/
      v104.i8[0] = 5; /*0x10087472b*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v102, &v81, &v83, &v104); /*0x100874745*/
      if ( (_BYTE)v102 != 6 ) /*0x10087474e*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100874754*/
      *(__int128 *)((char *)v104.i128 + 7) = v81; /*0x10087476e*/
      *(__int64 *)((char *)&v104.i64[2] + 7) = v82; /*0x100874776*/
      *(_BYTE *)a1 = 5; /*0x10087477a*/
      v38 = v104.i64[1]; /*0x100874781*/
      *(_QWORD *)(a1 + 1) = v104.i64[0]; /*0x100874785*/
      *(_OWORD *)(a1 + 9) = __PAIR128__(v104.u64[2], v38); /*0x100874789*/
      *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v104.i64[2] + 7); /*0x100874799*/
      break;
    case 8uLL: /*0x100873a70*/
      if ( *(_QWORD *)v5 != 0x6E6F6974636E7566LL ) /*0x100873a97*/
        goto LABEL_87; /*0x100873a97*/
      v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, a2); /*0x100873aac*/
      if ( !v9 || *(_BYTE *)v9 != 3 ) /*0x100873abd*/
        goto LABEL_87; /*0x100873abd*/
      v10 = *(const void **)(v9 + 16); /*0x100873ac3*/
      v11 = *(_QWORD *)(v9 + 24); /*0x100873ac7*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v104, v11, 0, 1, 1); /*0x100873adf*/
      __src = (void *)v104.i64[1]; /*0x100873ae8*/
      if ( v104.i32[0] == 1 ) /*0x100873af3*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__src, v104.i64[2]); /*0x100875370*/
      v12 = (const void *)v104.i64[2]; /*0x100873af9*/
      memcpy((void *)v104.i64[2], v10, v11); /*0x100873b06*/
      codexmate_lib::core::relay::translator::build_anthropic_function_tool::h3dd52af57e76e160( /*0x100873b17*/
        (_BYTE *)a1,
        a2,
        v12,
        v11);
      if ( __src ) /*0x100873b26*/
        *(double *)v7.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, __src, 1); /*0x100873b45*/
      break;
    default:
      goto LABEL_87; /*0x100873a84*/
  }
  return *(double *)v7.i64; /*0x100873b34*/
}