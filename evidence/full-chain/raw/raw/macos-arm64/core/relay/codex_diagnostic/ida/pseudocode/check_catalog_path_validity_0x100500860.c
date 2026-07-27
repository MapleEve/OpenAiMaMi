// __ZN13codexmate_lib4core5relay16codex_diagnostic27check_catalog_path_validity @ 0x100500860 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_catalog_path_validity::hd7a64d474efe9821(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  size_t v9; // r14
  __int64 v10; // r12
  void *v11; // rax
  void *v12; // r15
  _DWORD *v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r12
  void *v17; // rax
  void *v18; // r13
  void *v19; // rcx
  __int64 v20; // r8
  __int64 result; // rax
  void *v22; // rdi
  size_t v23; // rsi
  char v24; // al
  void *v25; // rdx
  char *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r15
  void *v32; // rax
  void *v33; // r12
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rax
  void *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 **v40; // r15
  __int64 (__fastcall *v41)(); // rsi
  __int64 **v42; // rdi
  void *v43; // rax
  void *v44; // r12
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 **v50; // [rsp+8h] [rbp-118h] BYREF
  __int64 (__fastcall *v51)(); // [rsp+10h] [rbp-110h]
  size_t v52; // [rsp+18h] [rbp-108h]
  _QWORD v53[3]; // [rsp+A0h] [rbp-80h] BYREF
  _QWORD v54[3]; // [rsp+B8h] [rbp-68h] BYREF
  __int64 *v55; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-48h] BYREF
  void *__src; // [rsp+E0h] [rbp-40h]
  size_t __n; // [rsp+E8h] [rbp-38h]
  __int64 v59; // [rsp+F0h] [rbp-30h]

  if ( (a6 & 1) == 0 ) /*0x100500878*/
  {
    v19 = &unk_1015FDBD2; /*0x100500a3d*/
    v20 = 44; /*0x100500a49*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100500a7b*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_605,
             21,
             v19,
             v20);
  }
  if ( !a2 ) /*0x100500881*/
  {
    v19 = &unk_1015FDC9E; /*0x100500a58*/
    v20 = 45; /*0x100500a64*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100500a64*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_605,
             21,
             v19,
             v20);
  }
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h30de29ad5c0062ca( /*0x1005008a4*/
    &v56,
    a2,
    a3,
    &unk_1015FC02F,
    18);
  if ( !__OFSUB__(0, v56) ) /*0x1005008af*/
  {
    v55 = &v56; /*0x100500a80*/
    v22 = __src; /*0x100500a84*/
    v23 = __n; /*0x100500a88*/
    v24 = codexmate_lib::core::relay::codex_diagnostic::path_is_under_dir::hbebf74f73253219f( /*0x100500a92*/
            (__int64)__src,
            __n,
            a4,
            a5);
    v25 = __src; /*0x100500a97*/
    v9 = __n; /*0x100500a9b*/
    if ( v24 ) /*0x100500aa1*/
    {
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100500aa6*/
      {
        v10 = 0; /*0x100500aac*/
        goto LABEL_15; /*0x100500aac*/
      }
      if ( !__n ) /*0x100500cc0*/
      {
        v39 = 1; /*0x100500cee*/
        goto LABEL_29; /*0x100500cee*/
      }
      v37 = __src; /*0x100500cc2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v22, v23); /*0x100500cc5*/
      v10 = 1; /*0x100500cca*/
      v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x100500cd8*/
      if ( v38 ) /*0x100500ce0*/
      {
        v39 = v38; /*0x100500ce6*/
        v25 = v37; /*0x100500ce9*/
LABEL_29:
        memcpy((void *)v39, v25, v9); /*0x100500cf3*/
        v59 = v39; /*0x100500d08*/
        std::sys::fs::metadata::h32fa16d3052ea535(&v50, v39, v9); /*0x100500d12*/
        v40 = v50; /*0x100500d17*/
        v41 = v51; /*0x100500d1e*/
        v42 = v50; /*0x100500d25*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100500d28*/
          v50,
          v51);
        if ( v40 ) /*0x100500d30*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v41); /*0x100500d36*/
          v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100500d45*/
          if ( !v43 ) /*0x100500d4d*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100500faf*/
          v44 = v43; /*0x100500d53*/
          qmemcpy(v43, "catalog_path_validity", 21); /*0x100500d7e*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(21, 1); /*0x100500d82*/
          v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100500d91*/
          if ( !v45 ) /*0x100500d99*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100500fc0*/
          v46 = v45; /*0x100500d9f*/
          *(_BYTE *)(v45 + 4) = 114; /*0x100500da2*/
          *(_DWORD *)v45 = 1869771365; /*0x100500da6*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100500dac*/
          v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x100500dbb*/
          if ( !v47 ) /*0x100500dc3*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43); /*0x100500fd1*/
          v48 = v47; /*0x100500dc9*/
          *(_QWORD *)(v47 + 32) = 0x98ADE58DB8E4B6BBLL; /*0x100500dd6*/
          *(_QWORD *)(v47 + 24) = 0xE48796E6849AE791LL; /*0x100500de4*/
          *(_QWORD *)(v47 + 16) = 0x90E5878CE6206E6FLL; /*0x100500df2*/
          qmemcpy((void *)v47, "model_catalog_js", 16); /*0x100500e0e*/
          *(_DWORD *)(v47 + 39) = -1466112616; /*0x100500e11*/
          v50 = &v55; /*0x100500e1d*/
          v51 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100500e2b*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_1017C0270, &v50); /*0x100500e44*/
          *(_QWORD *)(a1 + 88) = v53[2]; /*0x100500e4d*/
          v49 = v53[0]; /*0x100500e51*/
          *(_QWORD *)(a1 + 80) = v53[1]; /*0x100500e59*/
          *(_QWORD *)(a1 + 72) = v49; /*0x100500e5d*/
          *(_QWORD *)a1 = 21; /*0x100500e61*/
          *(_QWORD *)(a1 + 8) = v44; /*0x100500e68*/
          *(_QWORD *)(a1 + 16) = 21; /*0x100500e6c*/
          *(_QWORD *)(a1 + 24) = 5; /*0x100500e74*/
          *(_QWORD *)(a1 + 32) = v46; /*0x100500e7c*/
          *(_QWORD *)(a1 + 40) = 5; /*0x100500e80*/
          *(_QWORD *)(a1 + 48) = 43; /*0x100500e88*/
          *(_QWORD *)(a1 + 56) = v48; /*0x100500e90*/
          *(_QWORD *)(a1 + 64) = 43; /*0x100500e94*/
          *(_BYTE *)(a1 + 96) = 1; /*0x100500e9c*/
        }
        else
        {
          codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100500ebe*/
            a1,
            &anon_92869709a5e99ce1936aa4e326b6c562_605,
            21,
            &unk_1015FDC2F,
            20);
        }
        if ( v9 ) /*0x100500ec6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v9, 1); /*0x100500ed4*/
        goto LABEL_37; /*0x100500ed4*/
      }
LABEL_15:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x100500aaf*/
    }
    v26 = "cc-switchcc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router"; /*0x100500abf*/
    v27 = 9; /*0x100500ac6*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100500b25*/
                            "cc-switchcc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                            9u,
                            __src)
      || (v26 = "cc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
          v27 = 9,
          (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             "cc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                             9u,
                             __src))
      || (v26 = "ccswitchorphaned",
          v27 = 8,
          (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             "ccswitchorphaned",
                             8u,
                             __src))
      || (v26 = "codex-switch[model_providers.cccircuit_breakerprovider_router",
          v27 = 12,
          (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             "codex-switch[model_providers.cccircuit_breakerprovider_router",
                             0xCu,
                             __src)) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v27); /*0x100500b32*/
      v9 = 52; /*0x100500b37*/
      v10 = 1; /*0x100500b3d*/
      v28 = 52; /*0x100500b43*/
      v29 = 1; /*0x100500b48*/
      v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x100500b4d*/
      if ( !v30 ) /*0x100500b55*/
        goto LABEL_15; /*0x100500b55*/
      v31 = v30; /*0x100500b5b*/
      *(_QWORD *)(v30 + 40) = 0xB7E89995E78BAEE6LL; /*0x100500b68*/
      *(_QWORD *)(v30 + 32) = 0xB785E5A5B7E5B996LL; /*0x100500b76*/
      *(_QWORD *)(v30 + 24) = 0xE689B8E4ACACE791LL; /*0x100500b84*/
      *(_QWORD *)(v30 + 16) = 0x90E5878CE6206E6FLL; /*0x100500b92*/
      qmemcpy((void *)v30, "model_catalog_js", 16); /*0x100500bae*/
      *(_DWORD *)(v30 + 48) = -2067864145; /*0x100500bb1*/
      v59 = 52; /*0x100500bbe*/
    }
    else
    {
      v28 = (__int64)&v50; /*0x100500f18*/
      v29 = (__int64)&unk_1015FDBFE; /*0x100500f2a*/
      core::option::Option$LT$T$GT$::map_or_else::h6b0f1510ad284693(&v50, &unk_1015FDBFE, 42, &unk_1015FDBFE, 85); /*0x100500f2d*/
      v59 = (__int64)v50; /*0x100500f39*/
      v31 = (__int64)v51; /*0x100500f3d*/
      v9 = v52; /*0x100500f44*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v29); /*0x100500bc2*/
    v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100500bd1*/
    if ( !v32 ) /*0x100500bd9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100500f8d*/
    v33 = v32; /*0x100500bdf*/
    qmemcpy(v32, "catalog_path_validity", 21); /*0x100500c0a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(21, 1); /*0x100500c0e*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100500c1d*/
    if ( !v34 ) /*0x100500c25*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100500f9e*/
    v35 = v34; /*0x100500c2b*/
    *(_BYTE *)(v34 + 4) = 114; /*0x100500c2e*/
    *(_DWORD *)v34 = 1869771365; /*0x100500c32*/
    v50 = &v55; /*0x100500c3c*/
    v51 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x100500c4a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, &unk_1017C025E, &v50); /*0x100500c63*/
    *(_QWORD *)(a1 + 88) = v54[2]; /*0x100500c6c*/
    v36 = v54[0]; /*0x100500c70*/
    *(_QWORD *)(a1 + 80) = v54[1]; /*0x100500c78*/
    *(_QWORD *)(a1 + 72) = v36; /*0x100500c7c*/
    *(_QWORD *)a1 = 21; /*0x100500c80*/
    *(_QWORD *)(a1 + 8) = v33; /*0x100500c87*/
    *(_QWORD *)(a1 + 16) = 21; /*0x100500c8b*/
    *(_QWORD *)(a1 + 24) = 5; /*0x100500c93*/
    *(_QWORD *)(a1 + 32) = v35; /*0x100500c9b*/
    *(_QWORD *)(a1 + 40) = 5; /*0x100500c9f*/
    *(_QWORD *)(a1 + 48) = v59; /*0x100500cab*/
    *(_QWORD *)(a1 + 56) = v31; /*0x100500caf*/
    *(_QWORD *)(a1 + 64) = v9; /*0x100500cb3*/
    *(_BYTE *)(a1 + 96) = 1; /*0x100500cb7*/
    goto LABEL_37; /*0x100500cbb*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56, a2); /*0x1005008b5*/
  v9 = 21; /*0x1005008ba*/
  v10 = 1; /*0x1005008c0*/
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x1005008d0*/
  if ( !v11 ) /*0x1005008d8*/
    goto LABEL_15; /*0x1005008d8*/
  v12 = v11; /*0x1005008de*/
  qmemcpy(v11, "catalog_path_validity", 21); /*0x100500907*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(21, 1); /*0x10050090a*/
  v13 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100500919*/
  if ( !v13 ) /*0x100500921*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100500f5a*/
  v14 = v13; /*0x100500927*/
  *(_DWORD *)((char *)v13 + 3) = 1735289198; /*0x10050092a*/
  *v13 = 1852989815; /*0x100500931*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100500937*/
  v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(44, 1); /*0x100500946*/
  if ( !v15 ) /*0x10050094e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 44); /*0x100500f6b*/
  v16 = v15; /*0x100500954*/
  *(_QWORD *)(v15 + 32) = 0xBCE5206E6F736A5FLL; /*0x100500961*/
  *(_QWORD *)(v15 + 24) = 0x676F6C617461635FLL; /*0x100500970*/
  *(_QWORD *)(v15 + 16) = 0x6C65646F6D2091B0LL; /*0x10050097f*/
  *(_QWORD *)(v15 + 8) = 0xE5BABCE7206C6D6FLL; /*0x10050098e*/
  *(_QWORD *)v15 = 0x742E6769666E6F63LL; /*0x10050099d*/
  *(_DWORD *)(v15 + 40) = -1466636395; /*0x1005009a1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(44, 1); /*0x1005009aa*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(87, 1); /*0x1005009b9*/
  if ( !v17 ) /*0x1005009c1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 87); /*0x100500f7c*/
  v18 = v17; /*0x1005009c7*/
  memcpy(v17, &unk_1015FDC47, 0x57u); /*0x1005009d9*/
  *(_QWORD *)a1 = 21; /*0x1005009de*/
  *(_QWORD *)(a1 + 8) = v12; /*0x1005009e5*/
  *(_QWORD *)(a1 + 16) = 21; /*0x1005009e9*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1005009f1*/
  *(_QWORD *)(a1 + 32) = v14; /*0x1005009f9*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1005009fd*/
  *(_QWORD *)(a1 + 48) = 44; /*0x100500a05*/
  *(_QWORD *)(a1 + 56) = v16; /*0x100500a0d*/
  *(_QWORD *)(a1 + 64) = 44; /*0x100500a11*/
  *(_QWORD *)(a1 + 72) = 87; /*0x100500a19*/
  *(_QWORD *)(a1 + 80) = v18; /*0x100500a21*/
  *(_QWORD *)(a1 + 88) = 87; /*0x100500a25*/
  *(_BYTE *)(a1 + 96) = 1; /*0x100500a2d*/
LABEL_37:
  result = 0x8000000000000000LL; /*0x100500ed9*/
  if ( v56 != 0x8000000000000000LL ) /*0x100500eea*/
  {
    if ( v56 ) /*0x100500eef*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v56, 1); /*0x100500efa*/
  }
  return result; /*0x100500a6a*/
}