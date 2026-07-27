// __ZN13codexmate_lib4core5relay13codex_runtime19CodexRuntimeContext13resolve_inner @ 0x100ac5e60 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::resolve_inner::h0014a02535f56cc8(
        _QWORD *__dst,
        __int64 a2,
        int a3)
{
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r12
  size_t v11; // r13
  const void *v12; // rsi
  size_t v13; // r13
  __int64 v14; // rbx
  void *v15; // rax
  void *v16; // rbx
  void *v17; // rax
  void *v18; // rbx
  __int64 v19; // r15
  double result; // xmm0_8
  void *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // rbx
  _QWORD *v26; // r12
  __int64 v27; // rsi
  __int64 *v28; // rbx
  __int64 *v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rsi
  __int64 *v44; // rbx
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r13
  char v48; // al
  __int64 v49; // r12
  const void *v50; // r12
  size_t v51; // rbx
  __int64 v52; // r13
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r12
  _QWORD *v57; // r13
  __int64 v58; // rsi
  __int64 v59; // r13
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r13
  _QWORD *v63; // r12
  __int64 v64; // rsi
  __int64 v65; // rax
  _QWORD *v66; // rbx
  __int64 v67; // rsi
  __int64 v68; // rbx
  __int64 v69; // r12
  __int64 v70; // rax
  _QWORD *v71; // r15
  __int64 v72; // rsi
  _QWORD *v73; // rbx
  __int64 v74; // rsi
  _QWORD *v75; // rbx
  __int64 v76; // rsi
  _QWORD __dsta[97]; // [rsp+8h] [rbp-728h] BYREF
  __int64 v78[93]; // [rsp+310h] [rbp-420h] BYREF
  _QWORD v79[3]; // [rsp+5F8h] [rbp-138h] BYREF
  _QWORD v80[3]; // [rsp+610h] [rbp-120h] BYREF
  __int64 v81[3]; // [rsp+628h] [rbp-108h] BYREF
  __int128 v82; // [rsp+640h] [rbp-F0h] BYREF
  __int64 v83; // [rsp+650h] [rbp-E0h]
  __int64 v84; // [rsp+658h] [rbp-D8h] BYREF
  __int64 *v85; // [rsp+660h] [rbp-D0h]
  __int64 v86; // [rsp+668h] [rbp-C8h]
  __int64 v87; // [rsp+670h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+678h] [rbp-B8h]
  __int64 v89; // [rsp+680h] [rbp-B0h]
  __int64 v90; // [rsp+688h] [rbp-A8h]
  __int128 v91; // [rsp+690h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+6A0h] [rbp-90h]
  __int64 v93; // [rsp+6A8h] [rbp-88h] BYREF
  __int64 v94; // [rsp+6B0h] [rbp-80h]
  __int64 v95; // [rsp+6B8h] [rbp-78h]
  __int64 v96; // [rsp+6C0h] [rbp-70h]
  void *__src; // [rsp+6C8h] [rbp-68h]
  __int64 v98; // [rsp+6D0h] [rbp-60h]
  __int64 v99; // [rsp+6D8h] [rbp-58h] BYREF
  __int64 v100; // [rsp+6E0h] [rbp-50h]
  size_t __n; // [rsp+6E8h] [rbp-48h]
  __int64 *v102; // [rsp+6F0h] [rbp-40h]
  __int64 v103; // [rsp+6F8h] [rbp-38h]
  __int64 v104; // [rsp+700h] [rbp-30h]

  if ( (unsigned __int8)codexmate_lib::platform::process::latest_codex_desktop_available::h2802674a4700aee5( /*0x100ac5e7d*/
                          (__int64)__dst,
                          a2) )
  {
    LODWORD(__src) = a3; /*0x100ac5e8a*/
    v5 = *(_QWORD *)(a2 + 8); /*0x100ac5e8e*/
    v6 = *(_QWORD *)(a2 + 16); /*0x100ac5e92*/
    codexmate_lib::platform::paths::CodexPaths::runtime_state_db_candidates_for_home::h1661ca7d95ec4c4d(&v87, v5, v6); /*0x100ac5ea3*/
    v7 = v89; /*0x100ac5ea8*/
    if ( !v89 ) /*0x100ac5eb2*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v87, v5); /*0x100ac6051*/
      v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(99, 1); /*0x100ac6060*/
      if ( !v17 ) /*0x100ac6068*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 99); /*0x100ac6d3e*/
      v18 = v17; /*0x100ac606e*/
      memcpy(v17, &unk_10167CF83, 0x63u); /*0x100ac6080*/
      __dst[1] = 10; /*0x100ac6085*/
      __dst[2] = 99; /*0x100ac608d*/
      __dst[3] = v18; /*0x100ac6095*/
      __dst[4] = 99; /*0x100ac6099*/
      *__dst = 0x8000000000000000LL; /*0x100ac60ab*/
      v19 = v88; /*0x100ac60ae*/
      goto LABEL_13; /*0x100ac60ae*/
    }
    v104 = a2; /*0x100ac5eb8*/
    v103 = v88; /*0x100ac5ec7*/
    codexmate_lib::platform::process::active_codex_state_db_path::h818f4f52b19d1134((unsigned __int64 *)&v99, v88, v89); /*0x100ac5ece*/
    v8 = v99; /*0x100ac5ed3*/
    if ( !__OFSUB__(-v99, 1) ) /*0x100ac5edd*/
    {
      v21 = (void *)v100; /*0x100ac60e8*/
      v22 = __n; /*0x100ac60ec*/
      if ( (unsigned __int8)codexmate_lib::core::relay::codex_runtime::latest_schema_matches::h0cd4310943fdc6c4( /*0x100ac60f6*/
                              v100,
                              __n) )
      {
        v23 = v104; /*0x100ac610b*/
        codexmate_lib::core::relay::codex_runtime::maybe_persist_cache::h21efd8099eef9b8c( /*0x100ac6115*/
          __dsta,
          v104,
          v21,
          v22,
          (unsigned __int8)__src);
        if ( LODWORD(__dsta[0]) == 11 ) /*0x100ac6121*/
        {
          __src = v21; /*0x100ac6127*/
          if ( v22 ) /*0x100ac612e*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dsta, v23); /*0x100ac6134*/
            v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1); /*0x100ac6146*/
            if ( !v24 ) /*0x100ac614c*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x100ac615a*/
          }
          else
          {
            v24 = 1; /*0x100ac63ee*/
          }
          memcpy((void *)v24, __src, v22); /*0x100ac63fe*/
          v78[0] = v22; /*0x100ac6403*/
          v78[1] = v24; /*0x100ac640a*/
          v78[2] = v22; /*0x100ac6411*/
          codexmate_lib::platform::paths::CodexPaths::with_state_db_override::h18e8997204347fac(__dsta, v104, v78); /*0x100ac642a*/
          memcpy(__dst, __dsta, 0x2E8u); /*0x100ac643e*/
          __dst[93] = v8; /*0x100ac6443*/
          __dst[94] = __src; /*0x100ac644e*/
          __dst[95] = v22; /*0x100ac6455*/
          *((_BYTE *)__dst + 768) = 0; /*0x100ac645c*/
          v19 = v103; /*0x100ac6464*/
          goto LABEL_106; /*0x100ac6468*/
        }
      }
      else
      {
        *(_QWORD *)&v91 = v21; /*0x100ac6164*/
        *((_QWORD *)&v91 + 1) = v22; /*0x100ac616b*/
        v78[0] = (__int64)&v91; /*0x100ac6179*/
        v78[1] = (__int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ac6187*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&__dsta[1], &unk_1017C9F9A, v78); /*0x100ac61a3*/
        __dsta[0] = 10; /*0x100ac61a8*/
      }
      qmemcpy(__dst + 1, __dsta, 0x60u); /*0x100ac61c3*/
      *__dst = 0x8000000000000000LL; /*0x100ac61d0*/
      if ( v8 ) /*0x100ac61d6*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v8, 1); /*0x100ac61e3*/
      v19 = v103; /*0x100ac61e8*/
      goto LABEL_106; /*0x100ac61ec*/
    }
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hbc79f47ce6b369c6( /*0x100ac5ef6*/
      &v93,
      v103,
      v103 + 24 * v7);
    codexmate_lib::platform::paths::CodexPaths::configured_sqlite_home::hd0cd1e7be263d666(&v82, v5, v6); /*0x100ac5f08*/
    v9 = v104; /*0x100ac5f0d*/
    if ( (_QWORD)v82 != 0x8000000000000000LL ) /*0x100ac5f22*/
    {
      v92 = v83; /*0x100ac5f2f*/
      v91 = v82; /*0x100ac5f4b*/
      v10 = v95; /*0x100ac5f56*/
      v98 = v94; /*0x100ac5f62*/
      v81[0] = v94; /*0x100ac5f66*/
      v81[1] = v94 + 24 * v95; /*0x100ac5f6d*/
      v81[2] = (__int64)&v91; /*0x100ac5f7b*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heba56f4e8d45d900( /*0x100ac5f8d*/
        &v99,
        v81);
      v11 = __n; /*0x100ac5f92*/
      if ( __n == 1 ) /*0x100ac5f9a*/
      {
        v12 = *(const void **)(v100 + 8); /*0x100ac5fa4*/
        v102 = (__int64 *)v100; /*0x100ac5fa8*/
        v13 = *(_QWORD *)(v100 + 16); /*0x100ac5fac*/
        if ( v13 ) /*0x100ac5fb3*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v99, v12); /*0x100ac5fbc*/
          v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1); /*0x100ac5fd1*/
          if ( !v14 ) /*0x100ac5fd7*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x100ac5fe5*/
        }
        else
        {
          v14 = 1; /*0x100ac646d*/
        }
        memcpy((void *)v14, v12, v13); /*0x100ac6478*/
        codexmate_lib::core::relay::codex_runtime::maybe_persist_cache::h21efd8099eef9b8c( /*0x100ac6493*/
          __dsta,
          v104,
          v14,
          v13,
          (unsigned __int8)__src);
        if ( LODWORD(__dsta[0]) == 11 ) /*0x100ac649f*/
        {
          v78[0] = v13; /*0x100ac64a1*/
          v78[1] = v14; /*0x100ac64a8*/
          v78[2] = v13; /*0x100ac64af*/
          codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::new::h6df372db35f953b8(__dsta); /*0x100ac64cd*/
          memcpy(__dst, __dsta, 0x308u); /*0x100ac64e1*/
        }
        else
        {
          qmemcpy(__dst + 1, __dsta, 0x60u); /*0x100ac64f8*/
          *__dst = 0x8000000000000000LL; /*0x100ac6505*/
          if ( v13 ) /*0x100ac650b*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x100ac6518*/
        }
        v44 = v102; /*0x100ac651d*/
        v19 = v103; /*0x100ac6527*/
        if ( *v102 ) /*0x100ac6521*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102[1], *v102, 1); /*0x100ac6536*/
        v45 = v98; /*0x100ac6542*/
        if ( v99 ) /*0x100ac6546*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 24 * v99, 8); /*0x100ac6558*/
        if ( (_QWORD)v91 ) /*0x100ac6567*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v91 + 1), v91, 1); /*0x100ac6579*/
LABEL_74:
        if ( !v10 ) /*0x100ac66f1*/
          goto LABEL_104; /*0x100ac66f1*/
        goto LABEL_132; /*0x100ac66f1*/
      }
      v25 = v100; /*0x100ac61f1*/
      if ( __n ) /*0x100ac61f8*/
      {
        v26 = (_QWORD *)(v100 + 8); /*0x100ac61fa*/
        do /*0x100ac6207*/
        {
          v27 = *(v26 - 1); /*0x100ac6209*/
          if ( v27 ) /*0x100ac6211*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v26, v27, 1); /*0x100ac621c*/
          v26 += 3; /*0x100ac6200*/
          --v11; /*0x100ac6204*/
        }
        while ( v11 ); /*0x100ac6207*/
      }
      if ( v99 ) /*0x100ac622a*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24 * v99, 8); /*0x100ac623c*/
      if ( (_QWORD)v91 ) /*0x100ac624b*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v91 + 1), v91, 1); /*0x100ac6259*/
      v9 = v104; /*0x100ac625e*/
    }
    std::path::Path::_join::hb1a495d4f06b13b8(__dsta, *(_QWORD *)(v9 + 584), *(_QWORD *)(v9 + 592), &unk_10167CEE7, 25); /*0x100ac6284*/
    v28 = (__int64 *)__dsta[1]; /*0x100ac6289*/
    v29 = v78; /*0x100ac6297*/
    std::fs::read::inner::h6a30c15c40add28b(v78, __dsta[1], __dsta[2]); /*0x100ac62a1*/
    v30 = __dsta[0]; /*0x100ac62a6*/
    if ( __dsta[0] ) /*0x100ac62b0*/
    {
      v29 = v28; /*0x100ac62b7*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, __dsta[0], 1); /*0x100ac62ba*/
    }
    v31 = v78[0]; /*0x100ac62bf*/
    if ( v78[0] == 0x8000000000000000LL ) /*0x100ac62d3*/
    {
      if ( (v78[1] & 3) != 1 ) /*0x100ac62e4*/
        goto LABEL_82; /*0x100ac62e4*/
      v32 = v78[1] - 1; /*0x100ac62ea*/
      v33 = *(_QWORD *)(v78[1] - 1); /*0x100ac62ee*/
      v34 = *(_QWORD *)(v78[1] + 7); /*0x100ac62f2*/
      if ( *(_QWORD *)v34 ) /*0x100ac62f6*/
        (*(void (__fastcall **)(__int64))v34)(v33); /*0x100ac6302*/
      v35 = *(_QWORD *)(v34 + 8); /*0x100ac6304*/
      if ( v35 ) /*0x100ac630b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x100ac6314*/
      v30 = 24; /*0x100ac6319*/
      v36 = 8; /*0x100ac631e*/
      v29 = (__int64 *)v32; /*0x100ac6323*/
      goto LABEL_81; /*0x100ac6326*/
    }
    v37 = v78[1]; /*0x100ac632b*/
    __dsta[0] = v78[1]; /*0x100ac6339*/
    __dsta[1] = v78[2]; /*0x100ac6340*/
    __dsta[2] = 0; /*0x100ac6347*/
    __dsta[3] = 0; /*0x100ac6352*/
    v29 = v78; /*0x100ac635d*/
    v30 = (__int64)__dsta; /*0x100ac6364*/
    serde_json::de::from_trait::hc5346aaf6a1cdfda(v78, __dsta); /*0x100ac636b*/
    v41 = v78[0]; /*0x100ac6370*/
    if ( v78[0] == 0x8000000000000000LL ) /*0x100ac6384*/
    {
      v42 = v78[1]; /*0x100ac6386*/
      if ( *(_QWORD *)v78[1] == 1 ) /*0x100ac6394*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v78[1] + 8, __dsta, v38, v39, v40); /*0x100ac6700*/
      }
      else if ( !*(_QWORD *)v78[1] ) /*0x100ac638d*/
      {
        v43 = *(_QWORD *)(v78[1] + 16); /*0x100ac63a3*/
        if ( v43 ) /*0x100ac63aa*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v78[1] + 8), v43, 1); /*0x100ac63b9*/
      }
      v30 = 40; /*0x100ac6705*/
      v29 = (__int64 *)v42; /*0x100ac670f*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 40, 8); /*0x100ac6712*/
      if ( v31 ) /*0x100ac671a*/
      {
        v36 = 1; /*0x100ac671c*/
        v29 = (__int64 *)v37; /*0x100ac6721*/
        v30 = v31; /*0x100ac6724*/
LABEL_81:
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v30, v36); /*0x100ac673b*/
      }
    }
    else
    {
      v102 = (__int64 *)v78[1]; /*0x100ac63ca*/
      if ( LODWORD(v78[3]) == 1 ) /*0x100ac63d5*/
      {
        v90 = v78[2]; /*0x100ac63e2*/
      }
      else
      {
        if ( v78[0] ) /*0x100ac6586*/
        {
          v29 = v102; /*0x100ac658d*/
          v30 = v78[0]; /*0x100ac6591*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v78[0], 1); /*0x100ac6594*/
        }
        v41 = 0x8000000000000000LL; /*0x100ac6599*/
      }
      if ( v31 ) /*0x100ac65a6*/
      {
        v29 = (__int64 *)v37; /*0x100ac65ad*/
        v30 = v31; /*0x100ac65b0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v31, 1); /*0x100ac65b3*/
      }
      if ( v41 != 0x8000000000000000LL ) /*0x100ac65c5*/
      {
        v96 = v41; /*0x100ac65cb*/
        v46 = v94; /*0x100ac65cf*/
        v10 = v95; /*0x100ac65d3*/
        v47 = 24 * v95; /*0x100ac65df*/
        v98 = v94; /*0x100ac65e3*/
        while ( v47 ) /*0x100ac65f3*/
        {
          v29 = *(__int64 **)(v46 + 8); /*0x100ac65f9*/
          v48 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x100ac660c*/
                  v29,
                  *(_QWORD *)(v46 + 16),
                  v102,
                  v90);
          v46 += 24; /*0x100ac6611*/
          v47 -= 24; /*0x100ac6615*/
          if ( v48 ) /*0x100ac661b*/
          {
            v84 = v96; /*0x100ac6621*/
            v85 = v102; /*0x100ac662c*/
            v86 = v90; /*0x100ac663a*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4ccd5ea377d1fd44(__dsta, &v84); /*0x100ac664f*/
            __n = __dsta[2]; /*0x100ac665b*/
            v100 = __dsta[1]; /*0x100ac666d*/
            v99 = __dsta[0]; /*0x100ac6671*/
            codexmate_lib::platform::paths::CodexPaths::with_state_db_override::h18e8997204347fac(v78, v104, &v99); /*0x100ac6684*/
            __dsta[93] = v84; /*0x100ac6697*/
            __dsta[94] = v85; /*0x100ac669e*/
            __dsta[95] = v86; /*0x100ac66ac*/
            memcpy(__dsta, v78, 0x2E8u); /*0x100ac66c9*/
            memcpy(__dst, __dsta, 0x300u); /*0x100ac66d9*/
            *((_BYTE *)__dst + 768) = 2; /*0x100ac66de*/
            v19 = v103; /*0x100ac66e6*/
            v45 = v98; /*0x100ac66ea*/
            goto LABEL_74; /*0x100ac66ea*/
          }
        }
        v30 = v96; /*0x100ac6729*/
        if ( v96 ) /*0x100ac6730*/
        {
          v36 = 1; /*0x100ac6732*/
          v29 = v102; /*0x100ac6737*/
          goto LABEL_81; /*0x100ac6737*/
        }
      }
    }
LABEL_82:
    v49 = v95; /*0x100ac6740*/
    if ( v95 ) /*0x100ac6747*/
    {
      if ( v95 == 1 ) /*0x100ac674d*/
      {
        v50 = *(const void **)(v94 + 8); /*0x100ac6757*/
        v98 = v94; /*0x100ac675b*/
        v51 = *(_QWORD *)(v94 + 16); /*0x100ac675f*/
        if ( v51 ) /*0x100ac6766*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30); /*0x100ac676c*/
          v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1); /*0x100ac677e*/
          if ( !v52 ) /*0x100ac6784*/
          {
            v53 = 1; /*0x100ac678a*/
            goto LABEL_139; /*0x100ac678f*/
          }
        }
        else
        {
          v52 = 1; /*0x100ac6c25*/
        }
        memcpy((void *)v52, v50, v51); /*0x100ac6c34*/
        codexmate_lib::core::relay::codex_runtime::maybe_persist_cache::h21efd8099eef9b8c( /*0x100ac6c4f*/
          __dsta,
          v104,
          v52,
          v51,
          (unsigned __int8)__src);
        if ( LODWORD(__dsta[0]) == 11 ) /*0x100ac6c5b*/
        {
          v78[0] = v51; /*0x100ac6c5d*/
          v78[1] = v52; /*0x100ac6c64*/
          v78[2] = v51; /*0x100ac6c6b*/
          codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::new::h6df372db35f953b8(__dsta); /*0x100ac6c89*/
          memcpy(__dst, __dsta, 0x308u); /*0x100ac6c9d*/
        }
        else
        {
          qmemcpy(__dst + 1, __dsta, 0x60u); /*0x100ac6cb4*/
          *__dst = 0x8000000000000000LL; /*0x100ac6cc1*/
          if ( v51 ) /*0x100ac6cc7*/
          {
            v10 = 1; /*0x100ac6cc9*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x100ac6cda*/
LABEL_131:
            v19 = v103; /*0x100ac6ce7*/
            v45 = v98; /*0x100ac6ceb*/
LABEL_132:
            v75 = (_QWORD *)(v45 + 8); /*0x100ac6cef*/
            do /*0x100ac6d07*/
            {
              v76 = *(v75 - 1); /*0x100ac6d0d*/
              if ( v76 ) /*0x100ac6d14*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v75, v76, 1); /*0x100ac6d1e*/
              v75 += 3; /*0x100ac6d00*/
              --v10; /*0x100ac6d04*/
            }
            while ( v10 ); /*0x100ac6d07*/
LABEL_104:
            if ( v93 ) /*0x100ac6a90*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 24 * v93, 8); /*0x100ac6aa2*/
LABEL_106:
            v66 = (_QWORD *)(v19 + 8); /*0x100ac6aa7*/
            do /*0x100ac6ab7*/
            {
              v67 = *(v66 - 1); /*0x100ac6abd*/
              if ( v67 ) /*0x100ac6ac4*/
                result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v66, v67, 1); /*0x100ac6ace*/
              v66 += 3; /*0x100ac6ab0*/
              --v7; /*0x100ac6ab4*/
            }
            while ( v7 ); /*0x100ac6ab7*/
LABEL_13:
            if ( v87 ) /*0x100ac60bf*/
              return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24 * v87, 8); /*0x100ac60d1*/
            return result; /*0x100ac60d1*/
          }
        }
        v10 = 1; /*0x100ac6ce1*/
        goto LABEL_131; /*0x100ac6ce1*/
      }
      v59 = v94; /*0x100ac68b6*/
      v51 = 24 * v95; /*0x100ac68c2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30); /*0x100ac68c6*/
      v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v49, 8); /*0x100ac68d3*/
      if ( v60 ) /*0x100ac68db*/
      {
        v78[0] = v49; /*0x100ac68e4*/
        v78[1] = v60; /*0x100ac68eb*/
        v78[2] = 0; /*0x100ac68f9*/
        __dsta[2] = v60; /*0x100ac6904*/
        __dsta[0] = &v78[2]; /*0x100ac690b*/
        __dsta[1] = 0; /*0x100ac6912*/
        v104 = v59; /*0x100ac6924*/
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hd9704d67be879d9c( /*0x100ac692e*/
          v59,
          v59 + v51,
          __dsta);
        v61 = v78[1]; /*0x100ac693a*/
        v99 = v78[0]; /*0x100ac6941*/
        v100 = v78[1]; /*0x100ac6945*/
        v62 = v78[2]; /*0x100ac6949*/
        __n = v78[2]; /*0x100ac6950*/
        alloc::str::join_generic_copy::heca7a5e86402c6b6(__dsta, v78[1], v78[2], " | ", 3); /*0x100ac696e*/
        v78[2] = __dsta[2]; /*0x100ac697a*/
        v78[1] = __dsta[1]; /*0x100ac698f*/
        v78[0] = __dsta[0]; /*0x100ac6996*/
        if ( v62 ) /*0x100ac69a0*/
        {
          v63 = (_QWORD *)(v61 + 8); /*0x100ac69a6*/
          do /*0x100ac69b7*/
          {
            v64 = *(v63 - 1); /*0x100ac69bd*/
            if ( v64 ) /*0x100ac69c5*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v63, v64, 1); /*0x100ac69d0*/
            v63 += 3; /*0x100ac69b0*/
            --v62; /*0x100ac69b4*/
          }
          while ( v62 ); /*0x100ac69b7*/
        }
        if ( v99 ) /*0x100ac6adc*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, 24 * v99, 8); /*0x100ac6aee*/
        v68 = v95; /*0x100ac6af3*/
        v99 = v95; /*0x100ac6af7*/
        __dsta[0] = &v99; /*0x100ac6aff*/
        __dsta[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ac6b0d*/
        __dsta[2] = v78; /*0x100ac6b1b*/
        __dsta[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ac6b29*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v79, &unk_10167D0AD, __dsta); /*0x100ac6b45*/
        v69 = v104; /*0x100ac6b4a*/
        __dst[4] = v79[2]; /*0x100ac6b55*/
        v70 = v79[0]; /*0x100ac6b59*/
        __dst[3] = v79[1]; /*0x100ac6b67*/
        __dst[2] = v70; /*0x100ac6b6b*/
        __dst[1] = 10; /*0x100ac6b6f*/
        *__dst = 0x8000000000000000LL; /*0x100ac6b81*/
        if ( v78[0] ) /*0x100ac6b8e*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78[1], v78[0], 1); /*0x100ac6b9c*/
        if ( v68 ) /*0x100ac6ba4*/
        {
          v71 = (_QWORD *)(v69 + 8); /*0x100ac6ba6*/
          do /*0x100ac6bb7*/
          {
            v72 = *(v71 - 1); /*0x100ac6bb9*/
            if ( v72 ) /*0x100ac6bc0*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v71, v72, 1); /*0x100ac6bca*/
            v71 += 3; /*0x100ac6bb0*/
            --v68; /*0x100ac6bb4*/
          }
          while ( v68 ); /*0x100ac6bb7*/
        }
        if ( v93 ) /*0x100ac6bdb*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, 24 * v93, 8); /*0x100ac6bed*/
        v19 = v103; /*0x100ac6bf2*/
        v73 = (_QWORD *)(v103 + 8); /*0x100ac6bf6*/
        do /*0x100ac6c07*/
        {
          v74 = *(v73 - 1); /*0x100ac6c0d*/
          if ( v74 ) /*0x100ac6c14*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v73, v74, 1); /*0x100ac6c1e*/
          v73 += 3; /*0x100ac6c00*/
          --v7; /*0x100ac6c04*/
        }
        while ( v7 ); /*0x100ac6c07*/
        goto LABEL_13; /*0x100ac6c07*/
      }
    }
    else
    {
      v51 = 24 * v7; /*0x100ac679c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30); /*0x100ac67a0*/
      v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v7, 8); /*0x100ac67ad*/
      if ( v54 ) /*0x100ac67b5*/
      {
        v78[0] = v7; /*0x100ac67c2*/
        v78[1] = v54; /*0x100ac67c9*/
        v78[2] = 0; /*0x100ac67d7*/
        __dsta[2] = v54; /*0x100ac67e2*/
        __dsta[0] = &v78[2]; /*0x100ac67e9*/
        __dsta[1] = 0; /*0x100ac67f0*/
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hd9704d67be879d9c( /*0x100ac6805*/
          v103,
          v103 + v51,
          __dsta);
        v55 = v78[1]; /*0x100ac6811*/
        v99 = v78[0]; /*0x100ac6818*/
        v100 = v78[1]; /*0x100ac681c*/
        v56 = v78[2]; /*0x100ac6820*/
        __n = v78[2]; /*0x100ac6827*/
        alloc::str::join_generic_copy::heca7a5e86402c6b6(__dsta, v78[1], v78[2], " | ", 3); /*0x100ac6845*/
        v78[2] = __dsta[2]; /*0x100ac6851*/
        v78[1] = __dsta[1]; /*0x100ac6866*/
        v78[0] = __dsta[0]; /*0x100ac686d*/
        if ( v56 ) /*0x100ac6877*/
        {
          v57 = (_QWORD *)(v55 + 8); /*0x100ac687d*/
          do /*0x100ac6897*/
          {
            v58 = *(v57 - 1); /*0x100ac689d*/
            if ( v58 ) /*0x100ac68a4*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v57, v58, 1); /*0x100ac68af*/
            v57 += 3; /*0x100ac6890*/
            --v56; /*0x100ac6894*/
          }
          while ( v56 ); /*0x100ac6897*/
        }
        if ( v99 ) /*0x100ac69de*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, 24 * v99, 8); /*0x100ac69f0*/
        __dsta[0] = v78; /*0x100ac69fc*/
        __dsta[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ac6a0a*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v80, &unk_10167CFE6, __dsta); /*0x100ac6a26*/
        __dst[4] = v80[2]; /*0x100ac6a32*/
        v65 = v80[0]; /*0x100ac6a36*/
        __dst[3] = v80[1]; /*0x100ac6a44*/
        __dst[2] = v65; /*0x100ac6a48*/
        __dst[1] = 10; /*0x100ac6a4c*/
        *__dst = 0x8000000000000000LL; /*0x100ac6a5e*/
        if ( v78[0] ) /*0x100ac6a6b*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78[1], v78[0], 1); /*0x100ac6a79*/
        v45 = v94; /*0x100ac6a7e*/
        v19 = v103; /*0x100ac6a82*/
        goto LABEL_104; /*0x100ac6a82*/
      }
    }
    v53 = 8; /*0x100ac6d45*/
LABEL_139:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v53, v51); /*0x100ac6d4a*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2); /*0x100ac5fef*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(131, 1); /*0x100ac5ffe*/
  if ( !v15 ) /*0x100ac6006*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 131); /*0x100ac6d2f*/
  v16 = v15; /*0x100ac600c*/
  memcpy(v15, &unk_10167CF00, 0x83u); /*0x100ac601e*/
  __dst[1] = 10; /*0x100ac6023*/
  __dst[2] = 131; /*0x100ac602b*/
  __dst[3] = v16; /*0x100ac6033*/
  __dst[4] = 131; /*0x100ac6037*/
  *__dst = 0x8000000000000000LL; /*0x100ac6049*/
  return result; /*0x100ac60d6*/
}