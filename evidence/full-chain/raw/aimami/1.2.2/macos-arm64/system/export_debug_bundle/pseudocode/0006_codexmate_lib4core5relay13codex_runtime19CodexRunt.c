// mac 1.2.2 NEW export_debug_bundle 0x1009d2880 d=1
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::resolve_inner::h1d86f7a2ebdfe5ec(
        _QWORD *a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  void *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r15
  signed __int64 v11; // r13
  __int64 v12; // rbx
  void *v13; // rax
  void *v14; // rbx
  unsigned __int64 result; // rax
  void *v16; // rax
  void *v17; // rbx
  void *v18; // r13
  signed __int64 v19; // r12
  __int64 v20; // rdi
  _QWORD *v21; // rax
  char *v22; // r12
  __int64 v23; // rbx
  __int64 v24; // r15
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r15
  const void *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r13
  signed __int64 v32; // rbx
  __int64 v33; // r13
  __int64 v34; // rbx
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // r15
  __int64 v38; // r15
  _QWORD *v39; // rdx
  size_t v40; // rax
  __int64 v41; // r12
  __int64 v42; // rbx
  const void *v43; // rsi
  const void *v44; // r12
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // r15
  __int64 v48; // rbx
  void *v49; // rsi
  void *v50; // r8
  void *v51; // r9
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _BYTE *v55; // r15
  void *v56; // r12
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // r12
  _QWORD *v60; // rax
  _QWORD *v61; // r15
  _QWORD *v62; // rbx
  _QWORD *v63; // rax
  __int64 v64; // rbx
  _QWORD *v65; // r15
  __int64 v66; // rbx
  __int64 v67; // [rsp+0h] [rbp-7C0h]
  _QWORD __src[93]; // [rsp+8h] [rbp-7B8h] BYREF
  size_t __dst[97]; // [rsp+2F0h] [rbp-4D0h] BYREF
  size_t v70[3]; // [rsp+5F8h] [rbp-1C8h] BYREF
  _QWORD v71[3]; // [rsp+610h] [rbp-1B0h] BYREF
  void *v72; // [rsp+628h] [rbp-198h]
  void *v73; // [rsp+630h] [rbp-190h]
  __int128 v74; // [rsp+638h] [rbp-188h]
  __int64 v75; // [rsp+648h] [rbp-178h]
  _BYTE v76[15]; // [rsp+650h] [rbp-170h]
  size_t v77; // [rsp+660h] [rbp-160h] BYREF
  size_t v78; // [rsp+668h] [rbp-158h]
  size_t v79; // [rsp+670h] [rbp-150h]
  unsigned __int64 v80; // [rsp+678h] [rbp-148h] BYREF
  __int64 v81; // [rsp+680h] [rbp-140h]
  __int64 v82; // [rsp+688h] [rbp-138h]
  __int128 v83; // [rsp+690h] [rbp-130h] BYREF
  _BYTE v84[25]; // [rsp+6A0h] [rbp-120h]
  _BYTE v85[15]; // [rsp+6B9h] [rbp-107h]
  __int16 v86; // [rsp+6C8h] [rbp-F8h]
  char v87; // [rsp+6CAh] [rbp-F6h]
  void *__s1; // [rsp+6D0h] [rbp-F0h]
  __int128 v89; // [rsp+6D8h] [rbp-E8h] BYREF
  size_t v90; // [rsp+6E8h] [rbp-D8h]
  _BYTE v91[15]; // [rsp+6F0h] [rbp-D0h]
  void *__s2; // [rsp+700h] [rbp-C0h] BYREF
  void *v93; // [rsp+708h] [rbp-B8h]
  _BYTE v94[25]; // [rsp+710h] [rbp-B0h]
  _BYTE v95[15]; // [rsp+729h] [rbp-97h]
  unsigned __int16 v96; // [rsp+738h] [rbp-88h]
  unsigned __int8 v97; // [rsp+73Ah] [rbp-86h]
  __int64 v98; // [rsp+740h] [rbp-80h] BYREF
  __int64 v99; // [rsp+748h] [rbp-78h]
  __int64 v100; // [rsp+750h] [rbp-70h]
  const void *v101; // [rsp+758h] [rbp-68h]
  __int64 v102; // [rsp+760h] [rbp-60h]
  __int64 v103; // [rsp+768h] [rbp-58h]
  size_t v104; // [rsp+770h] [rbp-50h]
  __int64 v105; // [rsp+778h] [rbp-48h]
  void *v106; // [rsp+780h] [rbp-40h]
  void *v107; // [rsp+788h] [rbp-38h]
  _QWORD *v108; // [rsp+790h] [rbp-30h]

  if ( !(unsigned __int8)codexmate_lib::platform::process::latest_codex_desktop_available::h4c6c3aaf67305b44() ) /*0x1009d28a4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d29ef*/
    v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x83u, 1u); /*0x1009d29fe*/
    if ( !v13 ) /*0x1009d2a06*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009d37af*/
    v14 = v13; /*0x1009d2a0c*/
    memcpy(v13, &unk_1015A04A0, 0x83u); /*0x1009d2a1e*/
    a1[1] = 9; /*0x1009d2a23*/
    a1[2] = 131; /*0x1009d2a2b*/
    a1[3] = v14; /*0x1009d2a33*/
    a1[4] = 131; /*0x1009d2a37*/
    *a1 = 0x8000000000000000LL; /*0x1009d2a49*/
    return 0x8000000000000000LL; /*0x1009d2a4c*/
  }
  LODWORD(v106) = a3; /*0x1009d28aa*/
  v4 = *(_QWORD *)(a2 + 8); /*0x1009d28ae*/
  v105 = a2; /*0x1009d28b2*/
  v5 = *(_QWORD *)(a2 + 16); /*0x1009d28b6*/
  codexmate_lib::platform::paths::CodexPaths::runtime_state_db_candidates_for_home::h23d019504b2cba36(&v80, v4, v5); /*0x1009d28c7*/
  v6 = v82; /*0x1009d28cc*/
  if ( !v82 ) /*0x1009d28d6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d2a51*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x63u, 1u); /*0x1009d2a60*/
    if ( !v16 ) /*0x1009d2a68*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009d37be*/
    v17 = v16; /*0x1009d2a6e*/
    memcpy(v16, &unk_1015A0523, 0x63u); /*0x1009d2a80*/
    a1[1] = 9; /*0x1009d2a85*/
    a1[2] = 99; /*0x1009d2a8d*/
    a1[3] = v17; /*0x1009d2a95*/
    a1[4] = 99; /*0x1009d2a99*/
    *a1 = 0x8000000000000000LL; /*0x1009d2aab*/
    v102 = v81; /*0x1009d2ab5*/
LABEL_13:
    result = v80; /*0x1009d2ab9*/
    if ( !v80 ) /*0x1009d2ac3*/
      return result; /*0x1009d2ac3*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2ac3*/
  }
  v107 = a1; /*0x1009d28dc*/
  v102 = v81; /*0x1009d28ee*/
  codexmate_lib::platform::process::active_codex_state_db_path::h299a86527378393e(&__s2, v81, v82); /*0x1009d28f5*/
  v7 = __s2; /*0x1009d2904*/
  if ( !__OFSUB__(-(__int64)__s2, 1) ) /*0x1009d2911*/
  {
    v18 = v93; /*0x1009d2aed*/
    v19 = *(_QWORD *)v94; /*0x1009d2af4*/
    if ( (unsigned __int8)codexmate_lib::core::relay::codex_runtime::latest_schema_matches::h8f0f381b9dd24bb8( /*0x1009d2b01*/
                            v93,
                            *(_QWORD *)v94) )
    {
      codexmate_lib::core::relay::codex_runtime::maybe_persist_cache::h789a79c744942e19( /*0x1009d2b20*/
        __dst,
        v105,
        v18,
        v19,
        (unsigned __int8)v106);
      if ( LODWORD(__dst[0]) == 10 ) /*0x1009d2b2c*/
      {
        if ( v19 < 0 ) /*0x1009d2b31*/
        {
          v20 = 0; /*0x1009d2b37*/
          goto LABEL_20; /*0x1009d2b37*/
        }
        if ( v19 ) /*0x1009d2dbb*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d2dc1*/
          v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1u); /*0x1009d2dce*/
          v20 = 1; /*0x1009d2dd3*/
          if ( !v26 ) /*0x1009d2ddb*/
LABEL_20:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20); /*0x1009d2b39*/
          v27 = v26; /*0x1009d2de1*/
        }
        else
        {
          v27 = 1; /*0x1009d34e7*/
        }
        memcpy((void *)v27, v18, v19); /*0x1009d34f6*/
        __src[0] = v19; /*0x1009d34fb*/
        __src[1] = v27; /*0x1009d3502*/
        __src[2] = v19; /*0x1009d3509*/
        codexmate_lib::platform::paths::CodexPaths::with_state_db_override::hd7be58989cf86cd6(__dst, v105, __src); /*0x1009d3522*/
        v61 = v107; /*0x1009d3533*/
        memcpy(v107, __dst, 0x2E8u); /*0x1009d353a*/
        v61[93] = v7; /*0x1009d353f*/
        v61[94] = v18; /*0x1009d3546*/
        v61[95] = v19; /*0x1009d354d*/
        *((_BYTE *)v61 + 768) = 0; /*0x1009d3554*/
        goto LABEL_124; /*0x1009d355c*/
      }
    }
    else
    {
      *(_QWORD *)&v83 = v18; /*0x1009d2b46*/
      *((_QWORD *)&v83 + 1) = v19; /*0x1009d2b4d*/
      __src[0] = &v83; /*0x1009d2b5b*/
      __src[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1009d2b69*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&__dst[1], byte_1016FBB22, (unsigned __int64)__src); /*0x1009d2b85*/
      __dst[0] = 9; /*0x1009d2b8a*/
    }
    v21 = v107; /*0x1009d2b95*/
    qmemcpy((char *)v107 + 8, __dst, 0x60u); /*0x1009d2ba9*/
    *v21 = 0x8000000000000000LL; /*0x1009d2bac*/
    if ( !v7 ) /*0x1009d2bb2*/
      goto LABEL_124; /*0x1009d2bb2*/
LABEL_123:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d369b*/
LABEL_124:
    v64 = v102 + 8; /*0x1009d36a0*/
    do /*0x1009d36b7*/
    {
      if ( *(_QWORD *)(v64 - 8) ) /*0x1009d36bd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d36ce*/
      v64 += 24; /*0x1009d36b0*/
      --v6; /*0x1009d36b4*/
    }
    while ( v6 ); /*0x1009d36b7*/
    goto LABEL_13; /*0x1009d36b7*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h98463217e2d1da49( /*0x1009d2927*/
    &v98,
    v102,
    v102 + 24 * v6);
  codexmate_lib::platform::paths::CodexPaths::configured_sqlite_home::hb4c07f0e2e9ab3ef(&v89, v4, v5); /*0x1009d2939*/
  if ( (_QWORD)v89 != 0x8000000000000000LL ) /*0x1009d2945*/
  {
    *(_QWORD *)v84 = v90; /*0x1009d2952*/
    v83 = v89; /*0x1009d296e*/
    v8 = v99; /*0x1009d2975*/
    v9 = v100; /*0x1009d2979*/
    v71[0] = v99; /*0x1009d2985*/
    v71[1] = v99 + 24 * v100; /*0x1009d298c*/
    v71[2] = &v83; /*0x1009d299a*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6e874199140921fc( /*0x1009d29af*/
      &__s2,
      v71);
    v10 = *(_QWORD *)v94; /*0x1009d29b4*/
    if ( *(_QWORD *)v94 == 1 ) /*0x1009d29bf*/
    {
      v103 = v8; /*0x1009d29c5*/
      v11 = *((_QWORD *)v93 + 2); /*0x1009d29d0*/
      if ( v11 < 0 ) /*0x1009d29d7*/
      {
        v12 = 0; /*0x1009d29dd*/
        goto LABEL_8; /*0x1009d29dd*/
      }
      v108 = v93; /*0x1009d2de9*/
      v28 = *((const void **)v93 + 1); /*0x1009d2ded*/
      if ( v11 ) /*0x1009d2df1*/
      {
        v101 = *((const void **)v93 + 1); /*0x1009d2df7*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d2dfb*/
        v12 = 1; /*0x1009d2e00*/
        v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1u); /*0x1009d2e0d*/
        if ( !v29 ) /*0x1009d2e1f*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12); /*0x1009d29df*/
        v30 = v29; /*0x1009d2e25*/
        v28 = v101; /*0x1009d2e28*/
      }
      else
      {
        v30 = 1; /*0x1009d3561*/
      }
      memcpy((void *)v30, v28, v11); /*0x1009d3576*/
      codexmate_lib::core::relay::codex_runtime::maybe_persist_cache::h789a79c744942e19( /*0x1009d3591*/
        __dst,
        v105,
        v30,
        v11,
        (unsigned __int8)v106);
      if ( LODWORD(__dst[0]) == 10 ) /*0x1009d359d*/
      {
        __src[0] = v11; /*0x1009d359f*/
        __src[1] = v30; /*0x1009d35a6*/
        __src[2] = v11; /*0x1009d35ad*/
        codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::new::h8ebd5ca3272fdb4c(__dst); /*0x1009d35cb*/
        memcpy(v107, __dst, 0x308u); /*0x1009d35e0*/
        v62 = v108; /*0x1009d35e5*/
      }
      else
      {
        v63 = v107; /*0x1009d35ee*/
        qmemcpy((char *)v107 + 8, __dst, 0x60u); /*0x1009d3602*/
        *v63 = 0x8000000000000000LL; /*0x1009d3605*/
        v62 = v108; /*0x1009d360b*/
        if ( v11 ) /*0x1009d360f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d361c*/
      }
      if ( *v62 ) /*0x1009d3621*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d3632*/
      v31 = v103; /*0x1009d3641*/
      if ( __s2 ) /*0x1009d3645*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d3657*/
      if ( (_QWORD)v83 ) /*0x1009d3666*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d3674*/
LABEL_121:
      if ( !v9 ) /*0x1009d367c*/
      {
LABEL_122:
        if ( !v98 ) /*0x1009d3689*/
          goto LABEL_124; /*0x1009d3689*/
        goto LABEL_123; /*0x1009d3689*/
      }
LABEL_132:
      v66 = v31 + 8; /*0x1009d377a*/
      do /*0x1009d3787*/
      {
        if ( *(_QWORD *)(v66 - 8) ) /*0x1009d378d*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d379e*/
        v66 += 24; /*0x1009d3780*/
        --v9; /*0x1009d3784*/
      }
      while ( v9 ); /*0x1009d3787*/
      goto LABEL_122; /*0x1009d3787*/
    }
    if ( *(_QWORD *)v94 ) /*0x1009d2bd2*/
    {
      v22 = (char *)v93 + 8; /*0x1009d2bd4*/
      do /*0x1009d2be7*/
      {
        if ( *((_QWORD *)v22 - 1) ) /*0x1009d2be9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2bfc*/
        v22 += 24; /*0x1009d2be0*/
        --v10; /*0x1009d2be4*/
      }
      while ( v10 ); /*0x1009d2be7*/
    }
    if ( __s2 ) /*0x1009d2c0d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2c1f*/
    if ( (_QWORD)v83 ) /*0x1009d2c38*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2c46*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1009d2c71*/
    __dst,
    *(const void **)(v105 + 584),
    *(_QWORD *)(v105 + 592),
    byte_1015A0487,
    0x19u);
  std::fs::read::inner::h6a30c15c40add28b(__src, __dst[1], __dst[2]); /*0x1009d2c8e*/
  if ( __dst[0] ) /*0x1009d2c9d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2ca7*/
  v23 = __src[0]; /*0x1009d2cac*/
  if ( __src[0] != 0x8000000000000000LL ) /*0x1009d2cb6*/
  {
    __dst[0] = __src[1]; /*0x1009d2d26*/
    __dst[1] = __src[2]; /*0x1009d2d2d*/
    __dst[2] = 0; /*0x1009d2d34*/
    __dst[3] = 0; /*0x1009d2d3f*/
    serde_json::de::from_trait::hd0d6a570cbb466ae(__src, __dst); /*0x1009d2d58*/
    v25 = __src[0]; /*0x1009d2d5d*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x1009d2d67*/
    {
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(&__src[1]); /*0x1009d2d70*/
      if ( !v23 ) /*0x1009d2d78*/
        goto LABEL_59; /*0x1009d2d78*/
    }
    else
    {
      v108 = (_QWORD *)__src[1]; /*0x1009d2d9a*/
      if ( LODWORD(__src[3]) == 1 ) /*0x1009d2da5*/
      {
        v101 = (const void *)__src[2]; /*0x1009d2db2*/
      }
      else
      {
        if ( __src[0] ) /*0x1009d2e34*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2e42*/
        v25 = 0x8000000000000000LL; /*0x1009d2e47*/
      }
      if ( v23 ) /*0x1009d2e4d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2e5a*/
      if ( v25 == 0x8000000000000000LL ) /*0x1009d2e62*/
        goto LABEL_59; /*0x1009d2e62*/
      v104 = v25; /*0x1009d3104*/
      v46 = v99; /*0x1009d3108*/
      v9 = v100; /*0x1009d310c*/
      v47 = 24 * v100; /*0x1009d3118*/
      v103 = v99; /*0x1009d311c*/
      while ( v47 ) /*0x1009d3123*/
      {
        std::path::Path::components::he8b0f71a48373be5(&v83, *(_QWORD *)(v46 + 8), *(_QWORD *)(v46 + 16)); /*0x1009d3138*/
        std::path::Path::components::he8b0f71a48373be5(&__s2, v108, v101); /*0x1009d314c*/
        v48 = *((_QWORD *)&v83 + 1); /*0x1009d3158*/
        v49 = (void *)v83; /*0x1009d3158*/
        v50 = __s2; /*0x1009d315f*/
        v51 = v93; /*0x1009d3166*/
        if ( *((void **)&v83 + 1) != v93 /*0x1009d31d1*/
          || (_BYTE)v86 != (_BYTE)v96
          || HIBYTE(v86) != 2
          || HIBYTE(v96) != 2
          || (__s1 = (void *)v83,
              v72 = __s2,
              v73 = v93,
              v52 = memcmp((const void *)v83, __s2, *((size_t *)&v83 + 1)),
              v49 = __s1,
              v51 = v73,
              v50 = v72,
              v52) )
        {
          if ( v84[0] != 6 ) /*0x1009d31e0*/
          {
            *(_QWORD *)&v76[7] = *(_QWORD *)&v85[7]; /*0x1009d31ed*/
            *(_QWORD *)v76 = *(_QWORD *)v85; /*0x1009d31f8*/
            v75 = *(_QWORD *)&v84[17]; /*0x1009d3203*/
            v74 = *(_OWORD *)&v84[1]; /*0x1009d3218*/
          }
          __src[0] = v49; /*0x1009d322d*/
          __src[1] = v48; /*0x1009d3234*/
          LOBYTE(__src[2]) = v84[0]; /*0x1009d323b*/
          __src[6] = *(_QWORD *)&v76[7]; /*0x1009d324f*/
          *(_QWORD *)((char *)&__src[5] + 1) = *(_QWORD *)v76; /*0x1009d325a*/
          *(_QWORD *)((char *)&__src[4] + 1) = v75; /*0x1009d3265*/
          *(_OWORD *)((char *)&__src[2] + 1) = v74; /*0x1009d327b*/
          LOWORD(__src[7]) = v86; /*0x1009d327e*/
          BYTE2(__src[7]) = v87; /*0x1009d3285*/
          if ( v94[0] != 6 ) /*0x1009d3294*/
          {
            *(_QWORD *)&v91[7] = *(_QWORD *)&v95[7]; /*0x1009d32a1*/
            *(_QWORD *)v91 = *(_QWORD *)v95; /*0x1009d32ac*/
            v90 = *(_QWORD *)&v94[17]; /*0x1009d32b7*/
            v89 = *(_OWORD *)&v94[1]; /*0x1009d32cc*/
          }
          __dst[0] = (size_t)v50; /*0x1009d32e1*/
          __dst[1] = (size_t)v51; /*0x1009d32e8*/
          LOBYTE(__dst[2]) = v94[0]; /*0x1009d32ef*/
          __dst[6] = *(_QWORD *)&v91[7]; /*0x1009d3303*/
          *(size_t *)((char *)&__dst[5] + 1) = *(_QWORD *)v91; /*0x1009d330e*/
          *(size_t *)((char *)&__dst[4] + 1) = v90; /*0x1009d3319*/
          *(_OWORD *)((char *)&__dst[2] + 1) = v89; /*0x1009d332f*/
          LOWORD(__dst[7]) = v96; /*0x1009d3332*/
          BYTE2(__dst[7]) = v97; /*0x1009d3339*/
          v46 += 24; /*0x1009d3352*/
          v47 -= 24; /*0x1009d3356*/
          if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD *, size_t *, _QWORD, _QWORD, void *, void *, __int64))core::iter::traits::iterator::Iterator::eq_by::h503c0ee61ddcdabe)( /*0x1009d334d*/
                                   __src,
                                   __dst,
                                   v96,
                                   v97,
                                   v50,
                                   v51,
                                   v67) )
            continue; /*0x1009d334d*/
        }
        v77 = v104; /*0x1009d3366*/
        v78 = (size_t)v108; /*0x1009d3371*/
        v79 = (size_t)v101; /*0x1009d337c*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfb19599783dc6180( /*0x1009d3391*/
          __dst,
          &v77,
          v53,
          v54,
          v50,
          v51);
        *(_QWORD *)v94 = __dst[2]; /*0x1009d339d*/
        v93 = (void *)__dst[1]; /*0x1009d33b2*/
        __s2 = (void *)__dst[0]; /*0x1009d33b9*/
        codexmate_lib::platform::paths::CodexPaths::with_state_db_override::hd7be58989cf86cd6(__src, v105, &__s2); /*0x1009d33d2*/
        __dst[93] = v77; /*0x1009d33e5*/
        __dst[94] = v78; /*0x1009d33ec*/
        __dst[95] = v79; /*0x1009d33fa*/
        memcpy(__dst, __src, 0x2E8u); /*0x1009d3417*/
        v55 = v107; /*0x1009d3421*/
        memcpy(v107, __dst, 0x300u); /*0x1009d342b*/
        v55[768] = 2; /*0x1009d3430*/
        v31 = v103; /*0x1009d3438*/
        goto LABEL_121; /*0x1009d343c*/
      }
      if ( !v104 ) /*0x1009d36e6*/
        goto LABEL_59; /*0x1009d36e6*/
    }
    goto LABEL_41; /*0x1009d2d78*/
  }
  if ( (__src[1] & 3) == 1 ) /*0x1009d2cc7*/
  {
    v24 = *(_QWORD *)(__src[1] + 7LL); /*0x1009d2cd8*/
    if ( *(_QWORD *)v24 ) /*0x1009d2cdc*/
      (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)(__src[1] - 1LL)); /*0x1009d2ce7*/
    if ( *(_QWORD *)(v24 + 8) ) /*0x1009d2ce9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2cf9*/
LABEL_41:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2cfe*/
  }
LABEL_59:
  if ( v100 == 1 ) /*0x1009d2e70*/
  {
    v31 = v99; /*0x1009d2e72*/
    v32 = *(_QWORD *)(v99 + 16); /*0x1009d2e76*/
    if ( v32 < 0 ) /*0x1009d2e7d*/
    {
      v33 = 0; /*0x1009d2e83*/
      goto LABEL_62; /*0x1009d2e83*/
    }
    v43 = *(const void **)(v99 + 8); /*0x1009d30c6*/
    if ( v32 ) /*0x1009d30ca*/
    {
      v44 = *(const void **)(v99 + 8); /*0x1009d30d0*/
      v103 = v99; /*0x1009d30d3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d30d7*/
      v33 = 1; /*0x1009d30dc*/
      v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1u); /*0x1009d30ea*/
      if ( !v45 ) /*0x1009d30f2*/
LABEL_62:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v33); /*0x1009d2e86*/
      v31 = v103; /*0x1009d30f8*/
      v43 = v44; /*0x1009d30fc*/
    }
    else
    {
      v45 = 1; /*0x1009d3441*/
    }
    v56 = (void *)v45; /*0x1009d3446*/
    memcpy((void *)v45, v43, v32); /*0x1009d344f*/
    v57 = (unsigned __int8)v106; /*0x1009d3454*/
    v106 = v56; /*0x1009d3464*/
    codexmate_lib::core::relay::codex_runtime::maybe_persist_cache::h789a79c744942e19(__dst, v105, v56, v32, v57); /*0x1009d346e*/
    if ( LODWORD(__dst[0]) == 10 ) /*0x1009d347a*/
    {
      if ( v32 ) /*0x1009d347f*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1009d3485*/
        v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v32, 1u); /*0x1009d3492*/
        if ( !v58 ) /*0x1009d349a*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1009d37cd*/
        v59 = v58; /*0x1009d34a0*/
      }
      else
      {
        v59 = 1; /*0x1009d36fa*/
      }
      memcpy((void *)v59, v106, v32); /*0x1009d370a*/
      __src[0] = v32; /*0x1009d370f*/
      __src[1] = v59; /*0x1009d3716*/
      __src[2] = v32; /*0x1009d371d*/
      codexmate_lib::platform::paths::CodexPaths::with_state_db_override::hd7be58989cf86cd6(__dst, v105, __src); /*0x1009d3736*/
      v65 = v107; /*0x1009d3747*/
      memcpy(v107, __dst, 0x2E8u); /*0x1009d374e*/
      v65[93] = v32; /*0x1009d3753*/
      v65[94] = v106; /*0x1009d375e*/
      v65[95] = v32; /*0x1009d3765*/
      *((_BYTE *)v65 + 768) = 3; /*0x1009d376c*/
      v9 = 1; /*0x1009d3774*/
    }
    else
    {
      v60 = v107; /*0x1009d34a8*/
      qmemcpy((char *)v107 + 8, __dst, 0x60u); /*0x1009d34bc*/
      *v60 = 0x8000000000000000LL; /*0x1009d34bf*/
      v9 = 1; /*0x1009d34c2*/
      if ( v32 ) /*0x1009d34cb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d34dd*/
    }
    goto LABEL_132; /*0x1009d3774*/
  }
  v34 = v99; /*0x1009d2e96*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf74c857a761b0892( /*0x1009d2eac*/
    __src,
    v99,
    v99 + 24 * v100);
  v35 = __src[1]; /*0x1009d2eb1*/
  v36 = __src[2]; /*0x1009d2eb8*/
  alloc::str::join_generic_copy::hfccd3ffc09b1fad9(__dst, __src[1], __src[2], &unk_1015A0586, 3); /*0x1009d2ed9*/
  *(_QWORD *)v94 = __dst[2]; /*0x1009d2ee5*/
  v93 = (void *)__dst[1]; /*0x1009d2efa*/
  __s2 = (void *)__dst[0]; /*0x1009d2f01*/
  if ( v36 ) /*0x1009d2f0b*/
  {
    v37 = v35 + 8; /*0x1009d2f0d*/
    do /*0x1009d2f27*/
    {
      if ( *(_QWORD *)(v37 - 8) ) /*0x1009d2f29*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2f3a*/
      v37 += 24; /*0x1009d2f20*/
      --v36; /*0x1009d2f24*/
    }
    while ( v36 ); /*0x1009d2f27*/
  }
  if ( __src[0] ) /*0x1009d2f4b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2f5d*/
  v38 = v100; /*0x1009d2f62*/
  __src[0] = v100; /*0x1009d2f66*/
  __dst[0] = (size_t)__src; /*0x1009d2f74*/
  __dst[1] = (size_t)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1009d2f82*/
  __dst[2] = (size_t)&__s2; /*0x1009d2f90*/
  __dst[3] = (size_t)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1009d2f9e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v70, byte_1015A0589, (unsigned __int64)__dst); /*0x1009d2fba*/
  v39 = v107; /*0x1009d2fc6*/
  *((_QWORD *)v107 + 4) = v70[2]; /*0x1009d2fca*/
  v40 = v70[0]; /*0x1009d2fce*/
  v39[3] = v70[1]; /*0x1009d2fdc*/
  v39[2] = v40; /*0x1009d2fe0*/
  v39[1] = 9; /*0x1009d2fe4*/
  *v39 = 0x8000000000000000LL; /*0x1009d2ff6*/
  if ( __s2 ) /*0x1009d3003*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d3011*/
  if ( v38 ) /*0x1009d3019*/
  {
    v41 = v34 + 8; /*0x1009d301b*/
    do /*0x1009d3037*/
    {
      if ( *(_QWORD *)(v41 - 8) ) /*0x1009d3039*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d304c*/
      v41 += 24; /*0x1009d3030*/
      --v38; /*0x1009d3034*/
    }
    while ( v38 ); /*0x1009d3037*/
  }
  if ( v98 ) /*0x1009d305a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d306c*/
  v42 = v102 + 8; /*0x1009d3075*/
  do /*0x1009d3087*/
  {
    if ( *(_QWORD *)(v42 - 8) ) /*0x1009d3089*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d309a*/
    v42 += 24; /*0x1009d3080*/
    --v6; /*0x1009d3084*/
  }
  while ( v6 ); /*0x1009d3087*/
  result = v80; /*0x1009d30a1*/
  if ( v80 ) /*0x1009d30ab*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2ad6*/
  return result; /*0x1009d2adb*/
}