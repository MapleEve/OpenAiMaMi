// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_diagnostic::check_catalog_integrity::hd6aec66bc81e5f8d; addr: 0x100856d40; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
double __fastcall codexmate_lib::core::relay::codex_diagnostic::check_catalog_integrity::hd6aec66bc81e5f8d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128i si128)
{
  const __m128i *v7; // rbx
  const __m128i *v8; // rsi
  const __m128i *v9; // rdi
  __int64 v10; // rdx
  void *v11; // rax
  __int64 v12; // rdx
  void *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  void *v20; // rax
  void *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdx
  void *v24; // rax
  __int64 v25; // rdx
  void *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdi
  const __m128i *v40; // r14
  const __m128i *v41; // rbx
  const __m128i *v42; // rdi
  const __m128i *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  void *v46; // rax
  __int64 v47; // rdx
  void *v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r13
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // r14
  __int64 v55; // rax
  void *v56; // rax
  __int64 v57; // rdx
  void *v58; // r15
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r13
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // bl
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rdx
  void *v74; // r15
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // r15
  __int64 v84; // rbx
  __int64 v85; // r13
  _BYTE *v86; // rsi
  __int64 v87; // rdx
  void *v88; // rax
  __int64 v89; // rdx
  void *v90; // rbx
  _DWORD *v91; // rax
  __int64 v92; // rdx
  _DWORD *v93; // r13
  _QWORD *v94; // rax
  _QWORD *v95; // r15
  __int64 v96; // rax
  _BYTE v98[24]; // [rsp+8h] [rbp-278h] BYREF
  _BYTE v99[24]; // [rsp+20h] [rbp-260h] BYREF
  _QWORD v100[3]; // [rsp+38h] [rbp-248h] BYREF
  __int16 v101; // [rsp+50h] [rbp-230h]
  __int64 v102; // [rsp+58h] [rbp-228h]
  const __m128i **v103; // [rsp+60h] [rbp-220h]
  _QWORD v104[3]; // [rsp+68h] [rbp-218h] BYREF
  __int16 v105; // [rsp+80h] [rbp-200h]
  __int64 v106; // [rsp+88h] [rbp-1F8h]
  const __m128i **v107; // [rsp+90h] [rbp-1F0h]
  const __m128i *v108; // [rsp+98h] [rbp-1E8h] BYREF
  const __m128i *v109; // [rsp+A0h] [rbp-1E0h]
  const __m128i *v110; // [rsp+A8h] [rbp-1D8h]
  __int64 v111; // [rsp+B0h] [rbp-1D0h]
  const __m128i *v112; // [rsp+B8h] [rbp-1C8h]
  const __m128i *v113; // [rsp+C0h] [rbp-1C0h]
  _QWORD v114[3]; // [rsp+130h] [rbp-150h] BYREF
  _QWORD v115[3]; // [rsp+148h] [rbp-138h] BYREF
  char v116[8]; // [rsp+160h] [rbp-120h] BYREF
  __int64 v117; // [rsp+168h] [rbp-118h]
  __int64 v118; // [rsp+170h] [rbp-110h]
  __int64 v119; // [rsp+178h] [rbp-108h] BYREF
  __int64 v120; // [rsp+180h] [rbp-100h]
  __int64 v121; // [rsp+188h] [rbp-F8h]
  __int64 v122; // [rsp+190h] [rbp-F0h] BYREF
  __int64 v123; // [rsp+198h] [rbp-E8h]
  __int64 v124; // [rsp+1A0h] [rbp-E0h]
  const __m128i *v125; // [rsp+1A8h] [rbp-D8h] BYREF
  char *v126; // [rsp+1B0h] [rbp-D0h]
  __int64 v127; // [rsp+1B8h] [rbp-C8h]
  __int64 v128; // [rsp+1C0h] [rbp-C0h]
  _QWORD v129[4]; // [rsp+1D8h] [rbp-A8h] BYREF
  __int64 v130; // [rsp+1F8h] [rbp-88h] BYREF
  __int64 v131; // [rsp+200h] [rbp-80h]
  __int64 v132; // [rsp+208h] [rbp-78h]
  const __m128i *v133; // [rsp+210h] [rbp-70h]
  __int64 v134; // [rsp+218h] [rbp-68h]
  const __m128i *v135; // [rsp+220h] [rbp-60h]
  _QWORD *v136; // [rsp+228h] [rbp-58h] BYREF
  __int64 (__fastcall *v137)(); // [rsp+230h] [rbp-50h]
  __int64 v138; // [rsp+238h] [rbp-48h]
  _QWORD *v139; // [rsp+240h] [rbp-40h] BYREF
  __int64 (__fastcall *v140)(); // [rsp+248h] [rbp-38h]
  __int64 v141; // [rsp+250h] [rbp-30h]

  if ( !*(_BYTE *)(a4 + 364) ) /*0x100856d5e*/
  {
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h1acccb3a8c182d3a( /*0x100856f35*/
      a1,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_318,
      17,
      &unk_10178855A,
      47);
    return *(double *)si128.i64; /*0x100856f35*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v119, a2, a3, "codex_router_catalog.json", 25); /*0x100856d7b*/
  v134 = v120; /*0x100856d95*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v108, v120, v121); /*0x100856d9c*/
  v7 = v108; /*0x100856da1*/
  v8 = v109; /*0x100856da8*/
  v9 = v108; /*0x100856daf*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h47ac3589c64e6d2a( /*0x100856db2*/
    v108,
    v109);
  if ( v7 ) /*0x100856dba*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v8, v10); /*0x100856dc0*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x100856dcf*/
    if ( !v11 ) /*0x100856dd7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x100857bf2*/
    v13 = v11; /*0x100856ddd*/
    qmemcpy(v11, "catalog_integrity", 17); /*0x100856df8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1, v12); /*0x100856e00*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100856e0f*/
    if ( !v14 ) /*0x100856e17*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100857c06*/
    v16 = v14; /*0x100856e1d*/
    *(_BYTE *)(v14 + 4) = 114; /*0x100856e20*/
    *(_DWORD *)v14 = 1869771365; /*0x100856e24*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v15); /*0x100856e2a*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x100856e39*/
    if ( !v17 ) /*0x100856e41*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x100857c1a*/
    v19 = v17; /*0x100856e47*/
    *(_QWORD *)(v17 + 8) = 0xBCE7B6BBE48796E6LL; /*0x100856e54*/
    *(_QWORD *)v17 = 0x20676F6C61746143LL; /*0x100856e62*/
    *(_DWORD *)(v17 + 16) = -1314593350; /*0x100856e66*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1, v18); /*0x100856e6e*/
    v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(75, 1); /*0x100856e7d*/
    if ( !v20 ) /*0x100856e85*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 75); /*0x100857c2e*/
    v21 = v20; /*0x100856e8b*/
    memcpy(v20, &unk_1017885A6, 0x4Bu); /*0x100856e9d*/
    *(_QWORD *)a1 = 17; /*0x100856ea2*/
    *(_QWORD *)(a1 + 8) = v13; /*0x100856eaa*/
    *(_QWORD *)(a1 + 16) = 17; /*0x100856eaf*/
    *(_QWORD *)(a1 + 24) = 5; /*0x100856eb8*/
    *(_QWORD *)(a1 + 32) = v16; /*0x100856ec1*/
    *(_QWORD *)(a1 + 40) = 5; /*0x100856ec6*/
    *(_QWORD *)(a1 + 48) = 20; /*0x100856ecf*/
    *(_QWORD *)(a1 + 56) = v19; /*0x100856ed8*/
    *(_QWORD *)(a1 + 64) = 20; /*0x100856edd*/
    *(_QWORD *)(a1 + 72) = 75; /*0x100856ee6*/
    *(_QWORD *)(a1 + 80) = v21; /*0x100856eef*/
    *(_QWORD *)(a1 + 88) = 75; /*0x100856ef4*/
    *(_BYTE *)(a1 + 96) = 1; /*0x100856efd*/
    goto LABEL_44; /*0x100856f03*/
  }
  v22 = v134; /*0x100856f41*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v108); /*0x100856f48*/
  v135 = v108; /*0x100856f54*/
  if ( __OFSUB__(-(__int64)v108, 1) ) /*0x100856f58*/
  {
    v129[0] = v109; /*0x100856f68*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v108, v22, v23); /*0x100856f6f*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x100856f7e*/
    if ( !v24 ) /*0x100856f86*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x100857c42*/
    v26 = v24; /*0x100856f8c*/
    qmemcpy(v24, "catalog_integrity", 17); /*0x100856fa7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1, v25); /*0x100856faf*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100856fbe*/
    if ( !v27 ) /*0x100856fc6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100857c56*/
    v29 = v27; /*0x100856fcc*/
    *(_BYTE *)(v27 + 4) = 114; /*0x100856fcf*/
    *(_DWORD *)v27 = 1869771365; /*0x100856fd3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v28); /*0x100856fd9*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x100856fe8*/
    if ( !v30 ) /*0x100856ff0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x100857c6a*/
    v31 = v30; /*0x100856ff6*/
    *(_QWORD *)(v30 + 16) = 0xE5BBAFE895B3E6A0LL; /*0x100857003*/
    *(_QWORD *)(v30 + 8) = 0x97E6B6BBE48796E6LL; /*0x100857011*/
    *(_QWORD *)v30 = 0x20676F6C61746143LL; /*0x10085701f*/
    *(_WORD *)(v30 + 24) = -26993; /*0x100857023*/
    v125 = (const __m128i *)v129; /*0x100857031*/
    v126 = (char *)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10085703f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v115, &unk_1018F4375, &v125); /*0x10085705b*/
    *(_QWORD *)(a1 + 88) = v115[2]; /*0x100857067*/
    v32 = v115[0]; /*0x10085706c*/
    *(_QWORD *)(a1 + 80) = v115[1]; /*0x10085707a*/
    *(_QWORD *)(a1 + 72) = v32; /*0x10085707f*/
    *(_QWORD *)a1 = 17; /*0x100857084*/
    *(_QWORD *)(a1 + 8) = v26; /*0x10085708c*/
    *(_QWORD *)(a1 + 16) = 17; /*0x100857091*/
    *(_QWORD *)(a1 + 24) = 5; /*0x10085709a*/
    *(_QWORD *)(a1 + 32) = v29; /*0x1008570a3*/
    *(_QWORD *)(a1 + 40) = 5; /*0x1008570a8*/
    *(_QWORD *)(a1 + 48) = 26; /*0x1008570b1*/
    *(_QWORD *)(a1 + 56) = v31; /*0x1008570ba*/
    *(_QWORD *)(a1 + 64) = 26; /*0x1008570bf*/
    *(_BYTE *)(a1 + 96) = 1; /*0x1008570c8*/
    if ( (v129[0] & 3) != 1 ) /*0x1008570dd*/
      goto LABEL_44; /*0x1008570dd*/
    v33 = v129[0] - 1LL; /*0x1008570e3*/
    v34 = *(_QWORD *)(v129[0] - 1LL); /*0x1008570e7*/
    v35 = *(_QWORD *)(v129[0] + 7LL); /*0x1008570eb*/
    if ( *(_QWORD *)v35 ) /*0x1008570ef*/
      (*(void (__fastcall **)(__int64))v35)(v34); /*0x1008570fa*/
    v36 = *(_QWORD *)(v35 + 8); /*0x1008570fc*/
    if ( v36 ) /*0x100857103*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16)); /*0x10085710c*/
    v37 = 24; /*0x100857111*/
    v38 = 8; /*0x100857116*/
    v39 = v33; /*0x10085711b*/
    goto LABEL_43; /*0x10085711e*/
  }
  v40 = v109; /*0x100857123*/
  v41 = v110; /*0x10085712a*/
  v42 = v109; /*0x100857131*/
  v43 = v110; /*0x100857134*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v109, v110); /*0x100857137*/
  v133 = v40; /*0x10085713f*/
  if ( !v44 ) /*0x100857143*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v43, 0); /*0x10085730f*/
    v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x10085731e*/
    if ( !v56 ) /*0x100857326*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x100857c7e*/
    v58 = v56; /*0x10085732c*/
    qmemcpy(v56, "catalog_integrity", 17); /*0x100857347*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1, v57); /*0x10085734f*/
    v59 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10085735e*/
    if ( !v59 ) /*0x100857366*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100857c92*/
    v61 = v59; /*0x10085736c*/
    *(_BYTE *)(v59 + 4) = 114; /*0x10085736f*/
    *(_DWORD *)v59 = 1869771365; /*0x100857373*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v60); /*0x100857379*/
    v62 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x100857388*/
    if ( !v62 ) /*0x100857390*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x100857ca6*/
    v64 = v62; /*0x100857396*/
    *(_QWORD *)(v62 + 8) = 0xB8E4B6BBE48796E6LL; /*0x1008573a3*/
    *(_QWORD *)v62 = 0x20676F6C61746143LL; /*0x1008573b1*/
    *(_DWORD *)(v62 + 16) = -1163270214; /*0x1008573b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1, v63); /*0x1008573bc*/
    v65 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1008573cb*/
    if ( !v65 ) /*0x1008573d3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100857cba*/
    *(_QWORD *)(v65 + 8) = 0xE69F94E7B096E68DLL; /*0x1008573e3*/
    *(_QWORD *)v65 = 0x87E981A6E8809CE9LL; /*0x1008573f1*/
    *(_WORD *)(v65 + 16) = -28536; /*0x1008573f4*/
    *(_QWORD *)a1 = 17; /*0x1008573fa*/
    *(_QWORD *)(a1 + 8) = v58; /*0x100857402*/
    *(_QWORD *)(a1 + 16) = 17; /*0x100857407*/
    *(_QWORD *)(a1 + 24) = 5; /*0x100857410*/
    *(_QWORD *)(a1 + 32) = v61; /*0x100857419*/
    *(_QWORD *)(a1 + 40) = 5; /*0x10085741e*/
    *(_QWORD *)(a1 + 48) = 20; /*0x100857427*/
    *(_QWORD *)(a1 + 56) = v64; /*0x100857430*/
    *(_QWORD *)(a1 + 64) = 20; /*0x100857435*/
    *(_QWORD *)(a1 + 72) = 18; /*0x10085743e*/
    *(_QWORD *)(a1 + 80) = v65; /*0x100857447*/
    *(_QWORD *)(a1 + 88) = 18; /*0x10085744c*/
    *(_BYTE *)(a1 + 96) = 1; /*0x100857455*/
    goto LABEL_41; /*0x10085745b*/
  }
  v108 = v40; /*0x100857149*/
  v109 = v41; /*0x100857150*/
  v110 = nullptr; /*0x100857157*/
  v111 = 0; /*0x100857162*/
  v112 = v40; /*0x10085716d*/
  v113 = v41; /*0x100857174*/
  serde_json::de::from_trait::hb66530a7a5e497bc(&v125, &v108); /*0x10085718c*/
  if ( (_BYTE)v125 == 6 ) /*0x100857198*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v125, &v108, v45); /*0x10085719e*/
    v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x1008571ad*/
    if ( !v46 ) /*0x1008571b5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x100857cce*/
    v48 = v46; /*0x1008571bb*/
    qmemcpy(v46, "catalog_integrity", 17); /*0x1008571d6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1, v47); /*0x1008571de*/
    v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1008571ed*/
    if ( !v49 ) /*0x1008571f5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100857ce2*/
    v51 = v49; /*0x1008571fb*/
    *(_BYTE *)(v49 + 4) = 114; /*0x1008571fe*/
    *(_DWORD *)v49 = 1869771365; /*0x100857202*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v50); /*0x100857208*/
    v52 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100857217*/
    if ( !v52 ) /*0x10085721f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100857cf6*/
    v54 = v52; /*0x100857225*/
    v52[3] = 0x8F9DE59F8DE68FBCLL; /*0x100857232*/
    v52[2] = 0xE5BCA0E6204E4F53LL; /*0x100857240*/
    v52[1] = 0x4A20B6BBE48796E6LL; /*0x10085724e*/
    *v52 = 0x20676F6C61746143LL; /*0x10085725c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1, v53); /*0x10085725f*/
    v55 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x10085726e*/
    if ( !v55 ) /*0x100857276*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100857d0a*/
    *(_QWORD *)(v55 + 8) = 0xE69F94E7B096E68DLL; /*0x100857286*/
    *(_QWORD *)v55 = 0x87E981A6E8809CE9LL; /*0x100857294*/
    *(_WORD *)(v55 + 16) = -28536; /*0x100857297*/
    *(_QWORD *)a1 = 17; /*0x10085729d*/
    *(_QWORD *)(a1 + 8) = v48; /*0x1008572a5*/
    *(_QWORD *)(a1 + 16) = 17; /*0x1008572aa*/
    *(_QWORD *)(a1 + 24) = 5; /*0x1008572b3*/
    *(_QWORD *)(a1 + 32) = v51; /*0x1008572bc*/
    *(_QWORD *)(a1 + 40) = 5; /*0x1008572c1*/
    *(_QWORD *)(a1 + 48) = 32; /*0x1008572ca*/
    *(_QWORD *)(a1 + 56) = v54; /*0x1008572d3*/
    *(_QWORD *)(a1 + 64) = 32; /*0x1008572d8*/
    *(_QWORD *)(a1 + 72) = 18; /*0x1008572e1*/
    *(_QWORD *)(a1 + 80) = v55; /*0x1008572ea*/
    *(_QWORD *)(a1 + 88) = 18; /*0x1008572ef*/
    *(_BYTE *)(a1 + 96) = 1; /*0x1008572f8*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h4c10ab9eca38c556(&v125); /*0x100857305*/
    goto LABEL_41; /*0x10085730a*/
  }
  v129[3] = v128; /*0x100857467*/
  v129[2] = v127; /*0x100857475*/
  v129[1] = v126; /*0x10085748a*/
  v129[0] = v125; /*0x100857491*/
  v66 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1017885F7, 6, v129); /*0x1008574ab*/
  if ( v66 && *(_BYTE *)v66 == 4 ) /*0x1008574b8*/
  {
    _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h384234f12a77a710( /*0x1008574d3*/
      &v125,
      *(_QWORD *)(v66 + 16),
      *(_QWORD *)(v66 + 16) + 32LL * *(_QWORD *)(v66 + 24));
    v68 = *(_BYTE *)(a4 + 382); /*0x1008574d8*/
    v69 = *(_QWORD *)(a4 + 8); /*0x1008574e0*/
    v70 = *(_QWORD *)(a4 + 16); /*0x1008574e4*/
    v71 = *(_QWORD *)(a4 + 32); /*0x1008574e8*/
    if ( v68 ) /*0x1008574f2*/
      codexmate_lib::core::relay::codex_catalog::no_account_catalog_slugs::ha287925272baa99f( /*0x100857511*/
        (unsigned int)&v108,
        v69,
        v70,
        v71,
        *(_QWORD *)(a4 + 40),
        *(_QWORD *)(a4 + 136),
        *(_QWORD *)(a4 + 144));
    else
      codexmate_lib::core::relay::models::active_codex_relay_model_slugs::h9a933a6b28cd2144(&v108, v69, v70, v71); /*0x1008576cb*/
    si128 = _mm_load_si128(v108); /*0x1008576e3*/
    v104[0] = v108; /*0x1008576f4*/
    v104[1] = v108 + 1; /*0x1008576ff*/
    v104[2] = (char *)v109->i64 + (_QWORD)v108 + 1; /*0x100857706*/
    v105 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x10085770d*/
    v106 = v111; /*0x100857714*/
    v107 = &v125; /*0x10085771b*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf58d689e1ea2cc6a( /*0x100857730*/
      v116,
      v104);
    v82 = v117; /*0x100857735*/
    v83 = v118; /*0x10085773c*/
    alloc::slice::stable_sort::hf8103a67a66ae6bf(v117, v118); /*0x100857749*/
    if ( v68 ) /*0x100857750*/
    {
      si128 = _mm_load_si128(v125); /*0x100857765*/
      v100[0] = v125; /*0x100857776*/
      v100[1] = v125 + 1; /*0x100857781*/
      v100[2] = &v126[(_QWORD)v125 + 1]; /*0x100857788*/
      v101 = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x10085778f*/
      v102 = v128; /*0x100857796*/
      v103 = &v108; /*0x10085779d*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf58d689e1ea2cc6a( /*0x1008577b2*/
        &v122,
        v100);
      v84 = v123; /*0x1008577b7*/
      v85 = v124; /*0x1008577be*/
    }
    else
    {
      v122 = 0; /*0x1008577c7*/
      v123 = 8; /*0x1008577d2*/
      v124 = 0; /*0x1008577dd*/
      v84 = 8; /*0x1008577e8*/
      v85 = 0; /*0x1008577ed*/
    }
    alloc::slice::stable_sort::hf8103a67a66ae6bf(v84, v85); /*0x1008577f6*/
    if ( v83 ) /*0x1008577fe*/
    {
      v130 = 0; /*0x100857804*/
      v131 = 8; /*0x10085780f*/
      v132 = 0; /*0x100857817*/
      alloc::str::join_generic_copy::h877a7dfcc3252013(&v136, v82, v83, &unk_10178860B, 3); /*0x100857836*/
      v141 = v138; /*0x10085783f*/
      v140 = v137; /*0x10085784b*/
      v139 = v136; /*0x10085784f*/
      v136 = &v139; /*0x100857857*/
      v137 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100857862*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v99, &unk_1018FFA78, &v136); /*0x100857878*/
      if ( v139 ) /*0x100857884*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v139, 1); /*0x10085788f*/
      v86 = v99; /*0x10085789b*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hb8bb194c206a063c(&v130, v99, *(double *)si128.i64); /*0x1008578a2*/
      if ( !v85 ) /*0x1008578aa*/
        goto LABEL_61; /*0x1008578aa*/
      goto LABEL_58; /*0x1008578aa*/
    }
    if ( v85 ) /*0x1008578b4*/
    {
      v130 = 0; /*0x1008578ba*/
      v131 = 8; /*0x1008578c5*/
      v132 = 0; /*0x1008578cd*/
LABEL_58:
      alloc::str::join_generic_copy::h877a7dfcc3252013(&v136, v84, v85, &unk_10178860B, 3); /*0x1008578d5*/
      v141 = v138; /*0x1008578f5*/
      v140 = v137; /*0x100857901*/
      v139 = v136; /*0x100857905*/
      v136 = &v139; /*0x10085790d*/
      v137 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100857918*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v98, &unk_1018FFA84, &v136); /*0x10085792e*/
      if ( v139 ) /*0x10085793a*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v139, 1); /*0x100857945*/
      v86 = v98; /*0x100857951*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hb8bb194c206a063c(&v130, v98, *(double *)si128.i64); /*0x100857958*/
LABEL_61:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v130, v86, v87); /*0x10085795d*/
      v88 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x10085796c*/
      if ( !v88 ) /*0x100857974*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x100857d5f*/
      v90 = v88; /*0x10085797a*/
      qmemcpy(v88, "catalog_integrity", 17); /*0x100857995*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1, v89); /*0x10085799c*/
      v91 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008579ab*/
      if ( !v91 ) /*0x1008579b3*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100857d70*/
      v93 = v91; /*0x1008579b9*/
      *(_DWORD *)((char *)v91 + 3) = 1735289198; /*0x1008579bc*/
      *v91 = 1852989815; /*0x1008579c3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v92); /*0x1008579c9*/
      v94 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1); /*0x1008579d8*/
      if ( !v94 ) /*0x1008579e0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53); /*0x100857d81*/
      v95 = v94; /*0x1008579e6*/
      *(_QWORD *)((char *)v94 + 45) = 0xB487E880B8E48DB8LL; /*0x1008579f3*/
      v94[5] = 0xE48DB8E484B0E5A0LL; /*0x100857a01*/
      v94[4] = 0x98E6B9AEE5BC85E5LL; /*0x100857a0f*/
      v94[3] = 0xB28FE5868EE58A8FLL; /*0x100857a1d*/
      v94[2] = 0xE58B9EE5A1A8E687LL; /*0x100857a2b*/
      v94[1] = 0x89E7A18DE58EB8E4LL; /*0x100857a39*/
      *v94 = 0x20676F6C61746143LL; /*0x100857a47*/
      alloc::str::join_generic_copy::h877a7dfcc3252013(&v136, v131, v132, &unk_101787E23, 3); /*0x100857a63*/
      v141 = v138; /*0x100857a6c*/
      v140 = v137; /*0x100857a78*/
      v139 = v136; /*0x100857a7c*/
      v136 = &v139; /*0x100857a84*/
      v137 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100857a8f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v114, &unk_1018FFAAE, &v136); /*0x100857aa5*/
      if ( v139 ) /*0x100857ab1*/
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, v139, 1); /*0x100857abc*/
      *(_QWORD *)(a1 + 88) = v114[2]; /*0x100857ac8*/
      v96 = v114[0]; /*0x100857acd*/
      *(_QWORD *)(a1 + 80) = v114[1]; /*0x100857adb*/
      *(_QWORD *)(a1 + 72) = v96; /*0x100857ae0*/
      *(_QWORD *)a1 = 17; /*0x100857ae5*/
      *(_QWORD *)(a1 + 8) = v90; /*0x100857aed*/
      *(_QWORD *)(a1 + 16) = 17; /*0x100857af2*/
      *(_QWORD *)(a1 + 24) = 7; /*0x100857afb*/
      *(_QWORD *)(a1 + 32) = v93; /*0x100857b04*/
      *(_QWORD *)(a1 + 40) = 7; /*0x100857b09*/
      *(_QWORD *)(a1 + 48) = 53; /*0x100857b12*/
      *(_QWORD *)(a1 + 56) = v95; /*0x100857b1b*/
      *(_QWORD *)(a1 + 64) = 53; /*0x100857b20*/
      *(_BYTE *)(a1 + 96) = 1; /*0x100857b29*/
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v130); /*0x100857b36*/
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v122); /*0x100857b42*/
      core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(v116); /*0x100857b4e*/
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87dcd97a83e749a4(&v108); /*0x100857b5a*/
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87dcd97a83e749a4(&v125); /*0x100857b66*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v129); /*0x100857b72*/
      v37 = (__int64)v135; /*0x100857b77*/
      if ( !v135 ) /*0x100857b7e*/
        goto LABEL_44; /*0x100857b7e*/
      v38 = 1; /*0x100857b84*/
      v39 = (__int64)v133; /*0x100857b89*/
      goto LABEL_43; /*0x100857b8d*/
    }
    codexmate_lib::core::relay::codex_diagnostic::ok_item::h1acccb3a8c182d3a( /*0x100857bae*/
      a1,
      &anon_0868f19ff3e9f3569e732f60bdb020cc_318,
      17,
      &unk_1017885FD,
      14);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v122); /*0x100857bba*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(v116); /*0x100857bc6*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87dcd97a83e749a4(&v108); /*0x100857bd2*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87dcd97a83e749a4(&v125); /*0x100857bde*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1017885F7, 6, v67); /*0x10085751b*/
    v72 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1); /*0x10085752a*/
    if ( !v72 ) /*0x100857532*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 17); /*0x100857d1b*/
    v74 = v72; /*0x100857538*/
    qmemcpy(v72, "catalog_integrity", 17); /*0x100857553*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1, v73); /*0x10085755b*/
    v75 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10085756a*/
    if ( !v75 ) /*0x100857572*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100857d2c*/
    v77 = v75; /*0x100857578*/
    *(_BYTE *)(v75 + 4) = 114; /*0x10085757b*/
    *(_DWORD *)v75 = 1869771365; /*0x10085757f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v76); /*0x100857585*/
    v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1); /*0x100857594*/
    if ( !v78 ) /*0x10085759c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28); /*0x100857d3d*/
    v80 = v78; /*0x1008575a2*/
    *(_QWORD *)(v78 + 16) = 0x95E620736C65646FLL; /*0x1008575af*/
    *(_QWORD *)(v78 + 8) = 0x6D2091B0E5BABCE7LL; /*0x1008575bd*/
    *(_QWORD *)v78 = 0x20676F6C61746143LL; /*0x1008575cb*/
    *(_DWORD *)(v78 + 24) = -2068060240; /*0x1008575ce*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(28, 1, v79); /*0x1008575d6*/
    v81 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1008575e5*/
    if ( !v81 ) /*0x1008575ed*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100857d4e*/
    *(_QWORD *)(v81 + 8) = 0xE69F94E7B096E68DLL; /*0x1008575fd*/
    *(_QWORD *)v81 = 0x87E981A6E8809CE9LL; /*0x10085760b*/
    *(_WORD *)(v81 + 16) = -28536; /*0x10085760e*/
    *(_QWORD *)a1 = 17; /*0x100857614*/
    *(_QWORD *)(a1 + 8) = v74; /*0x10085761c*/
    *(_QWORD *)(a1 + 16) = 17; /*0x100857621*/
    *(_QWORD *)(a1 + 24) = 5; /*0x10085762a*/
    *(_QWORD *)(a1 + 32) = v77; /*0x100857633*/
    *(_QWORD *)(a1 + 40) = 5; /*0x100857638*/
    *(_QWORD *)(a1 + 48) = 28; /*0x100857641*/
    *(_QWORD *)(a1 + 56) = v80; /*0x10085764a*/
    *(_QWORD *)(a1 + 64) = 28; /*0x10085764f*/
    *(_QWORD *)(a1 + 72) = 18; /*0x100857658*/
    *(_QWORD *)(a1 + 80) = v81; /*0x100857661*/
    *(_QWORD *)(a1 + 88) = 18; /*0x100857666*/
    *(_BYTE *)(a1 + 96) = 1; /*0x10085766f*/
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v129); /*0x10085767c*/
LABEL_41:
  v37 = (__int64)v135; /*0x100857681*/
  v39 = (__int64)v133; /*0x100857688*/
  if ( !v135 ) /*0x10085768c*/
    goto LABEL_44; /*0x10085768c*/
  v38 = 1; /*0x10085768e*/
LABEL_43:
  *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v37, v38); /*0x100857693*/
LABEL_44:
  if ( v119 ) /*0x1008576a2*/
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v134, v119, 1); /*0x1008576ad*/
  return *(double *)si128.i64; /*0x100856f24*/
}