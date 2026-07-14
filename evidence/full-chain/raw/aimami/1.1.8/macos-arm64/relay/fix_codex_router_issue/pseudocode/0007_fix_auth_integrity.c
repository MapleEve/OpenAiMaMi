// owner: codexmate_lib::core::relay::codex_diagnostic::fix_auth_integrity::hc27e410586ca73c0
// VA: 0x1003dde60 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>

double __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_auth_integrity::hc27e410586ca73c0(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r13
  bool v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // rsi
  double result; // xmm0_8
  __int64 **v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rax
  _QWORD *v32; // r14
  void *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // r14
  void *v36; // rax
  void *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdi
  _QWORD *v42; // r8
  void *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 v49; // rsi
  _QWORD *v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // r14
  void *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // r14
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // r9
  __int64 v64; // rbx
  _QWORD *v65; // rbx
  __int64 v66; // rsi
  _QWORD v67[3]; // [rsp+0h] [rbp-1C0h] BYREF
  _QWORD v68[2]; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 v69; // [rsp+28h] [rbp-198h] BYREF
  __int64 *v70; // [rsp+30h] [rbp-190h]
  __int64 v71; // [rsp+38h] [rbp-188h]
  _QWORD v72[19]; // [rsp+40h] [rbp-180h] BYREF
  _QWORD v73[2]; // [rsp+D8h] [rbp-E8h] BYREF
  unsigned __int64 v74; // [rsp+E8h] [rbp-D8h]
  __int64 v75; // [rsp+F0h] [rbp-D0h]
  __int64 v76; // [rsp+F8h] [rbp-C8h]
  __int64 v77; // [rsp+100h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+108h] [rbp-B8h]
  __int64 v79; // [rsp+110h] [rbp-B0h]
  __int64 v80; // [rsp+118h] [rbp-A8h] BYREF
  _QWORD *v81; // [rsp+120h] [rbp-A0h]
  __int64 v82; // [rsp+128h] [rbp-98h]
  __int64 v83; // [rsp+130h] [rbp-90h] BYREF
  __int64 v84; // [rsp+138h] [rbp-88h]
  __int64 v85; // [rsp+140h] [rbp-80h]
  __int64 v86; // [rsp+148h] [rbp-78h]
  __int64 v87; // [rsp+150h] [rbp-70h] BYREF
  _QWORD *v88; // [rsp+158h] [rbp-68h]
  __int64 v89; // [rsp+160h] [rbp-60h]
  __int64 v90; // [rsp+168h] [rbp-58h]
  __int64 *v91; // [rsp+170h] [rbp-50h]
  __int64 v92; // [rsp+178h] [rbp-48h]
  _QWORD *v93; // [rsp+180h] [rbp-40h]
  __int64 v94; // [rsp+188h] [rbp-38h]
  __int64 *v95; // [rsp+190h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 272); /*0x1003dde7a*/
  v4 = *(_QWORD *)(a2 + 280); /*0x1003dde81*/
  v5 = v72; /*0x1003dde88*/
  std::sys::fs::metadata::h32fa16d3052ea535(v72, v3, v4); /*0x1003dde95*/
  if ( LODWORD(v72[0]) == 1 ) /*0x1003ddea1*/
  {
    if ( (v72[1] & 3) == 1 ) /*0x1003ddeb2*/
    {
      v6 = v72[1] - 1LL; /*0x1003ddeb8*/
      v7 = *(_QWORD *)(v72[1] - 1LL); /*0x1003ddebc*/
      v8 = *(_QWORD *)(v72[1] + 7LL); /*0x1003ddec0*/
      if ( *(_QWORD *)v8 ) /*0x1003ddec4*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x1003ddecf*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1003dded1*/
      if ( !v9 ) /*0x1003dded8*/
        goto LABEL_14; /*0x1003dded8*/
      v10 = *(_QWORD *)(v8 + 16); /*0x1003ddeda*/
      v11 = v7; /*0x1003ddede*/
LABEL_13:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, v10); /*0x1003ddf3e*/
LABEL_14:
      v14 = 24; /*0x1003ddf43*/
      v5 = (__int64 *)v6; /*0x1003ddf4d*/
LABEL_50:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v14, 8); /*0x1003de21e*/
      goto LABEL_51; /*0x1003de21e*/
    }
    goto LABEL_51; /*0x1003ddeb2*/
  }
  v5 = v72; /*0x1003ddee3*/
  std::sys::fs::read_dir::h768dda1fe4336014(v72, v3, v4); /*0x1003ddef0*/
  if ( LOBYTE(v72[1]) == 2 ) /*0x1003ddf05*/
  {
    if ( (v72[0] & 3) == 1 ) /*0x1003ddf0f*/
    {
      v6 = v72[0] - 1LL; /*0x1003ddf15*/
      v12 = *(_QWORD *)(v72[0] - 1LL); /*0x1003ddf19*/
      v13 = *(_QWORD *)(v72[0] + 7LL); /*0x1003ddf1d*/
      if ( *(_QWORD *)v13 ) /*0x1003ddf21*/
        (*(void (__fastcall **)(_QWORD, _QWORD))v13)(*(_QWORD *)(v72[0] - 1LL), v72[0]); /*0x1003ddf2c*/
      v9 = *(_QWORD *)(v13 + 8); /*0x1003ddf2e*/
      if ( !v9 ) /*0x1003ddf35*/
        goto LABEL_14; /*0x1003ddf35*/
      v10 = *(_QWORD *)(v13 + 16); /*0x1003ddf37*/
      v11 = v12; /*0x1003ddf3b*/
      goto LABEL_13; /*0x1003ddf3b*/
    }
LABEL_51:
    v83 = 0; /*0x1003de223*/
    v84 = 8; /*0x1003de22e*/
    v85 = 0; /*0x1003de239*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5); /*0x1003de241*/
    v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1003de250*/
    if ( !v31 ) /*0x1003de258*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1003de716*/
    v32 = (_QWORD *)v31; /*0x1003de25e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24); /*0x1003de261*/
    v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1003de270*/
    if ( !v33 ) /*0x1003de278*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1003de783*/
    qmemcpy(v33, "auth_integrity", 14); /*0x1003de296*/
    *v32 = 14; /*0x1003de299*/
    v32[1] = v33; /*0x1003de2a0*/
    v32[2] = 14; /*0x1003de2a4*/
    v87 = 1; /*0x1003de2ac*/
    v88 = v32; /*0x1003de2b4*/
    v89 = 1; /*0x1003de2b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14); /*0x1003de2c0*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1003de2cf*/
    if ( !v34 ) /*0x1003de2d7*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1003de72a*/
    v35 = (_QWORD *)v34; /*0x1003de2dd*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24); /*0x1003de2e0*/
    v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(87, 1); /*0x1003de2ef*/
    if ( !v36 ) /*0x1003de2f7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 87); /*0x1003de794*/
    v37 = v36; /*0x1003de2fd*/
    memcpy(v36, &unk_1012C280F, 0x57u); /*0x1003de30f*/
    *v35 = 87; /*0x1003de314*/
    v35[1] = v37; /*0x1003de31b*/
    v35[2] = 87; /*0x1003de31f*/
    v38 = v83; /*0x1003de327*/
    v39 = v84; /*0x1003de32e*/
    v72[0] = v83; /*0x1003de335*/
    v72[1] = v84; /*0x1003de33c*/
    v40 = v85; /*0x1003de343*/
    v72[2] = v85; /*0x1003de347*/
    v72[5] = v89; /*0x1003de352*/
    v41 = v87; /*0x1003de359*/
    v42 = v88; /*0x1003de35d*/
    v72[4] = v88; /*0x1003de361*/
    v72[3] = v87; /*0x1003de368*/
    a1[6] = v89; /*0x1003de36f*/
    a1[5] = v42; /*0x1003de374*/
    a1[4] = v41; /*0x1003de379*/
    a1[3] = v40; /*0x1003de37e*/
    a1[2] = v39; /*0x1003de383*/
    a1[1] = v38; /*0x1003de388*/
    a1[7] = 1; /*0x1003de38d*/
    a1[8] = v35; /*0x1003de396*/
    a1[9] = 1; /*0x1003de39b*/
    *a1 = 10; /*0x1003de3a4*/
    return result; /*0x1003de3a4*/
  }
  v76 = a2; /*0x1003ddf55*/
  v5 = v73; /*0x1003ddf5f*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1e6b019684b5d4f6( /*0x1003ddf66*/
    v73,
    v72[0],
    LOBYTE(v72[1]));
  v95 = (__int64 *)v73[1]; /*0x1003ddf72*/
  v15 = v74; /*0x1003ddf76*/
  v72[0] = &v87; /*0x1003ddf81*/
  if ( v74 >= 2 ) /*0x1003ddf8c*/
  {
    if ( v74 >= 0x15 ) /*0x1003de738*/
      core::slice::sort::stable::driftsort_main::h1d2b0a45d1ce9a2f(v95, v74, v72); /*0x1003de7a9*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h05b76c25b47b706e(v95, v74, 1, v72); /*0x1003de74d*/
  }
  else if ( !v74 ) /*0x1003ddf95*/
  {
LABEL_48:
    if ( v73[0] ) /*0x1003de20b*/
    {
      v14 = 24LL * v73[0]; /*0x1003de211*/
      v5 = v95; /*0x1003de21a*/
      goto LABEL_50; /*0x1003de21a*/
    }
    goto LABEL_51; /*0x1003de20b*/
  }
  v93 = a1; /*0x1003ddf9b*/
  v75 = 24 * v15; /*0x1003ddfab*/
  v16 = 0; /*0x1003ddfb2*/
  while ( 1 ) /*0x1003ddff4*/
  {
    v5 = &v69; /*0x1003ddff4*/
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v69, v95[v16 / 8 + 1], v95[v16 / 8 + 2]); /*0x1003ddffb*/
    v94 = v69; /*0x1003de007*/
    if ( !__OFSUB__(-v69, 1) ) /*0x1003de00e*/
      break; /*0x1003de00e*/
    if ( ((unsigned __int8)v70 & 3) == 1 ) /*0x1003ddfcf*/
    {
      v24 = (__int64 *)((char *)v70 - 1); /*0x1003de180*/
      v25 = *(__int64 *)((char *)v70 - 1); /*0x1003de184*/
      v26 = *(__int64 *)((char *)v70 + 7); /*0x1003de188*/
      if ( *(_QWORD *)v26 ) /*0x1003de18c*/
        (*(void (__fastcall **)(__int64))v26)(v25); /*0x1003de198*/
      v27 = *(_QWORD *)(v26 + 8); /*0x1003de19a*/
      if ( v27 ) /*0x1003de1a1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v27, *(_QWORD *)(v26 + 16)); /*0x1003de1aa*/
      v22 = 24; /*0x1003de1af*/
      v23 = 8; /*0x1003de1b4*/
      v5 = v24; /*0x1003de1b9*/
      goto LABEL_42; /*0x1003de1b9*/
    }
LABEL_19:
    v16 += 24LL; /*0x1003ddfd5*/
    if ( v75 == v16 ) /*0x1003ddfe0*/
    {
      a1 = v93; /*0x1003de1c9*/
      if ( v15 ) /*0x1003de1cd*/
      {
        v29 = (__int64 **)(v95 + 1); /*0x1003de1d3*/
        do /*0x1003de1e7*/
        {
          v30 = (__int64)*(v29 - 1); /*0x1003de1e9*/
          if ( v30 ) /*0x1003de1f0*/
          {
            v5 = *v29; /*0x1003de1f2*/
            result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v30, 1); /*0x1003de1fa*/
          }
          v29 += 3; /*0x1003de1e0*/
          --v15; /*0x1003de1e4*/
        }
        while ( v15 ); /*0x1003de1e7*/
      }
      goto LABEL_48; /*0x1003de1e7*/
    }
  }
  v72[0] = v70; /*0x1003de01e*/
  v72[1] = v71; /*0x1003de025*/
  v72[3] = 0; /*0x1003de033*/
  v72[2] = 0; /*0x1003de03b*/
  v91 = v70; /*0x1003de042*/
  v72[4] = v70; /*0x1003de046*/
  v72[5] = v71; /*0x1003de04d*/
  serde_json::de::from_trait::h13c6255c2aa0fc50(&v83, v72); /*0x1003de062*/
  if ( (_BYTE)v83 == 6 ) /*0x1003de06e*/
  {
    v5 = &v83; /*0x1003de070*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::ha21db7e75e29d7ea(&v83); /*0x1003de077*/
    goto LABEL_35; /*0x1003de07c*/
  }
  v90 = v86; /*0x1003de094*/
  v89 = v85; /*0x1003de09c*/
  v88 = (_QWORD *)v84; /*0x1003de0ae*/
  v87 = v83; /*0x1003de0b2*/
  v17 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(&v87, "/tokens/access_tokenOPENAI_API_KEY", 20); /*0x1003de0c6*/
  if ( v17 && *(_BYTE *)v17 == 3 ) /*0x1003de0d3*/
  {
    v92 = *(_QWORD *)(v17 + 16); /*0x1003de0d9*/
    v18 = *(_QWORD *)(v17 + 24); /*0x1003de0dd*/
  }
  else
  {
    v92 = 1; /*0x1003de0e8*/
    v18 = 0; /*0x1003de0ec*/
  }
  v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1003de0fe*/
          "OPENAI_API_KEY",
          14,
          &v87);
  v20 = 1; /*0x1003de103*/
  v21 = 1; /*0x1003de109*/
  if ( v19 && *(_BYTE *)v19 == 3 ) /*0x1003de114*/
  {
    v20 = *(_QWORD *)(v19 + 16); /*0x1003de116*/
    v21 = *(_QWORD *)(v19 + 24) < 3u; /*0x1003de11f*/
  }
  if ( (!v18 /*0x1003de153*/
     || (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_known_placeholder_token::h23ce613c3d4f7a9b(
                           v92,
                           v18))
    && (v21 || *(_WORD *)v20 ^ 0x6B73 | *(unsigned __int8 *)(v20 + 2) ^ 0x2D) )
  {
    v5 = &v83; /*0x1003de15c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v83); /*0x1003de163*/
LABEL_35:
    v22 = v94; /*0x1003de168*/
    if ( v94 ) /*0x1003de16f*/
    {
      v23 = 1; /*0x1003de175*/
      v5 = v91; /*0x1003de17a*/
LABEL_42:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v22, v23); /*0x1003de1bc*/
      goto LABEL_19; /*0x1003de1c1*/
    }
    goto LABEL_19; /*0x1003de16f*/
  }
  v43 = (void *)v95[v16 / 8 + 1]; /*0x1003de3c2*/
  if ( (std::sys::fs::copy::hcda968f022f0a0e3(v43, v95[v16 / 8 + 2], *(void **)(v76 + 32), *(_QWORD *)(v76 + 40)) & 1) != 0 ) /*0x1003de3e2*/
  {
    v80 = v44; /*0x1003de3e8*/
    v72[0] = &v80; /*0x1003de3f6*/
    v72[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1003de404*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v77, &unk_101226DC5, v72); /*0x1003de420*/
    v45 = v77; /*0x1003de425*/
    v72[0] = v78; /*0x1003de433*/
    v72[1] = v79; /*0x1003de441*/
    if ( (v80 & 3) == 1 ) /*0x1003de457*/
    {
      v46 = v80 - 1; /*0x1003de459*/
      v47 = *(_QWORD *)(v80 - 1); /*0x1003de45d*/
      v48 = *(_QWORD *)(v80 + 7); /*0x1003de461*/
      if ( *(_QWORD *)v48 ) /*0x1003de465*/
        (*(void (__fastcall **)(__int64))v48)(v47); /*0x1003de471*/
      v49 = *(_QWORD *)(v48 + 8); /*0x1003de473*/
      if ( v49 ) /*0x1003de47a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v49, *(_QWORD *)(v48 + 16)); /*0x1003de483*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8); /*0x1003de495*/
    }
    v50 = v93; /*0x1003de49a*/
    qmemcpy(v93 + 2, v72, 0x50u); /*0x1003de4ae*/
    *v50 = 9; /*0x1003de4b1*/
    v50[1] = v45; /*0x1003de4b8*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v43); /*0x1003de4c1*/
    v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1003de4d0*/
    if ( !v51 ) /*0x1003de4d8*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1003de761*/
    v52 = (_QWORD *)v51; /*0x1003de4de*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24); /*0x1003de4e1*/
    v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1003de4f0*/
    if ( !v53 ) /*0x1003de4f8*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1003de7bd*/
    qmemcpy(v53, "auth_integrity", 14); /*0x1003de516*/
    *v52 = 14; /*0x1003de519*/
    v52[1] = v53; /*0x1003de520*/
    v52[2] = 14; /*0x1003de524*/
    v80 = 1; /*0x1003de52c*/
    v81 = v52; /*0x1003de537*/
    v82 = 1; /*0x1003de53e*/
    v77 = 0; /*0x1003de549*/
    v78 = 8; /*0x1003de554*/
    v79 = 0; /*0x1003de55f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14); /*0x1003de56a*/
    v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1003de579*/
    if ( !v54 ) /*0x1003de581*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1003de772*/
    v55 = (_QWORD *)v54; /*0x1003de587*/
    v56 = v95[v16 / 8 + 2]; /*0x1003de593*/
    v68[0] = v95[v16 / 8 + 1]; /*0x1003de598*/
    v68[1] = v56; /*0x1003de59f*/
    v72[0] = v68; /*0x1003de5ad*/
    v72[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1003de5bb*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v67, &unk_101226D96, v72); /*0x1003de5d7*/
    v55[2] = v67[2]; /*0x1003de5e3*/
    v57 = v67[0]; /*0x1003de5e7*/
    v55[1] = v67[1]; /*0x1003de5f5*/
    *v55 = v57; /*0x1003de5f9*/
    v58 = v80; /*0x1003de5fc*/
    v59 = v81; /*0x1003de603*/
    v72[0] = v80; /*0x1003de60a*/
    v72[1] = v81; /*0x1003de611*/
    v60 = v82; /*0x1003de618*/
    v72[2] = v82; /*0x1003de61f*/
    v61 = v77; /*0x1003de626*/
    v62 = v78; /*0x1003de62d*/
    v72[3] = v77; /*0x1003de634*/
    v72[4] = v78; /*0x1003de63b*/
    v72[5] = v79; /*0x1003de649*/
    v63 = v93; /*0x1003de650*/
    v93[6] = v79; /*0x1003de654*/
    v63[5] = v62; /*0x1003de658*/
    v63[4] = v61; /*0x1003de65c*/
    v63[3] = v60; /*0x1003de660*/
    v63[2] = v59; /*0x1003de664*/
    v63[1] = v58; /*0x1003de668*/
    v63[7] = 1; /*0x1003de66c*/
    v63[8] = v55; /*0x1003de674*/
    v63[9] = 1; /*0x1003de678*/
    *v63 = 10; /*0x1003de680*/
  }
  v64 = v94; /*0x1003de687*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v87); /*0x1003de68f*/
  if ( v64 ) /*0x1003de697*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v64, 1); /*0x1003de6a5*/
  if ( v15 ) /*0x1003de6ad*/
  {
    v65 = v95 + 1; /*0x1003de6b3*/
    do /*0x1003de6c7*/
    {
      v66 = *(v65 - 1); /*0x1003de6c9*/
      if ( v66 ) /*0x1003de6d0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v65, v66, 1); /*0x1003de6da*/
      v65 += 3; /*0x1003de6c0*/
      --v15; /*0x1003de6c4*/
    }
    while ( v15 ); /*0x1003de6c7*/
  }
  if ( v73[0] ) /*0x1003de6eb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, 24LL * v73[0], 8); /*0x1003de702*/
  return result; /*0x1003de3ac*/
}