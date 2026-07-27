// __ZN13codexmate_lib4core5relay16codex_diagnostic18fix_auth_integrity @ 0x1004e7a40 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_auth_integrity::hd25994f874548912(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r12
  bool v14; // r14
  unsigned __int64 *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // r14
  void *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r14
  void *v21; // rax
  void *v22; // rbx
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  _QWORD *v27; // r8
  size_t v28; // rsi
  __int64 v29; // rdx
  __int64 **v30; // r12
  __int64 **v31; // rdi
  __int64 *v32; // rbx
  __int64 **v33; // r14
  __int64 v34; // r12
  _QWORD *v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rsi
  __int64 *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // r14
  void *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 (__fastcall *v50)(_QWORD, _QWORD); // rcx
  __int64 v51; // rdx
  __int64 *v52; // rsi
  __int64 v53; // rdi
  _QWORD *v54; // r9
  _QWORD *v55; // rbx
  __int64 v56; // rsi
  _QWORD v57[3]; // [rsp+0h] [rbp-1D0h] BYREF
  __int64 v58; // [rsp+18h] [rbp-1B8h] BYREF
  __int64 *v59; // [rsp+20h] [rbp-1B0h]
  __int64 **v60; // [rsp+28h] [rbp-1A8h]
  _QWORD v61[2]; // [rsp+30h] [rbp-1A0h] BYREF
  __int64 *v62; // [rsp+40h] [rbp-190h] BYREF
  __int64 **v63; // [rsp+48h] [rbp-188h]
  __int64 v64; // [rsp+50h] [rbp-180h]
  __int64 v65; // [rsp+58h] [rbp-178h]
  __int64 v66; // [rsp+60h] [rbp-170h]
  __int64 (__fastcall *v67)(_QWORD, _QWORD); // [rsp+68h] [rbp-168h]
  _QWORD v68[2]; // [rsp+D8h] [rbp-F8h] BYREF
  unsigned __int64 v69; // [rsp+E8h] [rbp-E8h]
  __int64 v70; // [rsp+F0h] [rbp-E0h]
  __int64 v71; // [rsp+F8h] [rbp-D8h] BYREF
  __int64 (__fastcall *v72)(_QWORD, _QWORD); // [rsp+100h] [rbp-D0h]
  __int64 v73; // [rsp+108h] [rbp-C8h]
  __int64 *v74; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+118h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+120h] [rbp-B0h]
  __int64 v77; // [rsp+128h] [rbp-A8h]
  __int64 v78; // [rsp+130h] [rbp-A0h] BYREF
  _QWORD *v79; // [rsp+138h] [rbp-98h]
  __int64 v80; // [rsp+140h] [rbp-90h]
  __int64 v81; // [rsp+148h] [rbp-88h]
  __int64 *v82; // [rsp+150h] [rbp-80h] BYREF
  char v83; // [rsp+158h] [rbp-78h]
  size_t v84; // [rsp+160h] [rbp-70h]
  unsigned __int64 v85; // [rsp+168h] [rbp-68h]
  __int64 v86; // [rsp+170h] [rbp-60h]
  _QWORD *v87; // [rsp+178h] [rbp-58h]
  __int64 *v88; // [rsp+180h] [rbp-50h] BYREF
  __int64 v89; // [rsp+188h] [rbp-48h]
  __int64 v90; // [rsp+190h] [rbp-40h]
  __int64 v91; // [rsp+198h] [rbp-38h]
  unsigned __int64 v92; // [rsp+1A0h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 272); /*0x1004e7a5a*/
  v5 = *(_QWORD *)(a2 + 280); /*0x1004e7a61*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v62, v4, v5); /*0x1004e7a75*/
  v6 = (__int64)v63; /*0x1004e7a7a*/
  if ( (_DWORD)v62 == 1 ) /*0x1004e7a88*/
  {
    v7 = 1; /*0x1004e7a8a*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1004e7a8f*/
      1,
      v63);
LABEL_35:
    v74 = nullptr; /*0x1004e7d82*/
    v75 = 8; /*0x1004e7d8d*/
    v76 = 0; /*0x1004e7d98*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004e7da3*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e7db2*/
    if ( !v16 ) /*0x1004e7dba*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e82e5*/
    v17 = (_QWORD *)v16; /*0x1004e7dc0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e7dc3*/
    v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1004e7dd2*/
    if ( !v18 ) /*0x1004e7dda*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1004e8352*/
    qmemcpy(v18, "auth_integrity", 14); /*0x1004e7df8*/
    *v17 = 14; /*0x1004e7dfb*/
    v17[1] = v18; /*0x1004e7e02*/
    v17[2] = 14; /*0x1004e7e06*/
    v78 = 1; /*0x1004e7e0e*/
    v79 = v17; /*0x1004e7e19*/
    v80 = 1; /*0x1004e7e20*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1); /*0x1004e7e2b*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e7e3a*/
    if ( !v19 ) /*0x1004e7e42*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e82f9*/
    v20 = (_QWORD *)v19; /*0x1004e7e48*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e7e4b*/
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(87, 1); /*0x1004e7e5a*/
    if ( !v21 ) /*0x1004e7e62*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 87); /*0x1004e8363*/
    v22 = v21; /*0x1004e7e68*/
    memcpy(v21, &unk_1015FCB09, 0x57u); /*0x1004e7e7a*/
    *v20 = 87; /*0x1004e7e7f*/
    v20[1] = v22; /*0x1004e7e86*/
    v20[2] = 87; /*0x1004e7e8a*/
    result = (__int64)v74; /*0x1004e7e92*/
    v24 = v75; /*0x1004e7e99*/
    v62 = v74; /*0x1004e7ea0*/
    v63 = (__int64 **)v75; /*0x1004e7ea7*/
    v25 = v76; /*0x1004e7eae*/
    v64 = v76; /*0x1004e7eb5*/
    v67 = (__int64 (__fastcall *)(_QWORD, _QWORD))v80; /*0x1004e7ec3*/
    v26 = v78; /*0x1004e7eca*/
    v27 = v79; /*0x1004e7ed1*/
    v66 = (__int64)v79; /*0x1004e7ed8*/
    v65 = v78; /*0x1004e7edf*/
    a1[6] = v80; /*0x1004e7ee6*/
    a1[5] = v27; /*0x1004e7eea*/
    a1[4] = v26; /*0x1004e7eee*/
    a1[3] = v25; /*0x1004e7ef2*/
    a1[2] = v24; /*0x1004e7ef6*/
    a1[1] = result; /*0x1004e7efa*/
    a1[7] = 1; /*0x1004e7efe*/
    a1[8] = v20; /*0x1004e7f06*/
    a1[9] = 1; /*0x1004e7f0a*/
    *a1 = 11; /*0x1004e7f12*/
    return result; /*0x1004e7f12*/
  }
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1004e7a9b*/
    0,
    v63);
  std::sys::fs::read_dir::h768dda1fe4336014(&v62, v4, v5); /*0x1004e7aad*/
  v6 = (__int64)v62; /*0x1004e7ab9*/
  v82 = v62; /*0x1004e7ac0*/
  v83 = (char)v63; /*0x1004e7ac4*/
  if ( (_BYTE)v63 == 2 ) /*0x1004e7ac9*/
  {
LABEL_34:
    v7 = (unsigned __int64)&v82; /*0x1004e7d79*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(&v82); /*0x1004e7d7d*/
    goto LABEL_35; /*0x1004e7d7d*/
  }
  v70 = a2; /*0x1004e7acf*/
  v7 = (unsigned __int64)v68; /*0x1004e7ad9*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h02d34eae5a76d0cf( /*0x1004e7ae0*/
    v68,
    v62,
    (unsigned __int8)v63);
  v92 = v68[1]; /*0x1004e7aec*/
  v8 = v69; /*0x1004e7af0*/
  v62 = &v78; /*0x1004e7afe*/
  if ( v69 >= 2 ) /*0x1004e7b09*/
  {
    if ( v69 >= 0x15 ) /*0x1004e8307*/
      core::slice::sort::stable::driftsort_main::h16cb2011370a7823(v92, v69, &v62); /*0x1004e8378*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h36c9ed290b959e7c(v92, v69, 1, &v62); /*0x1004e831c*/
    goto LABEL_6; /*0x1004e8321*/
  }
  if ( !v69 ) /*0x1004e7b12*/
  {
LABEL_31:
    if ( v68[0] ) /*0x1004e7d5b*/
    {
      v6 = 24LL * v68[0]; /*0x1004e7d61*/
      v7 = v92; /*0x1004e7d6a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, 24LL * v68[0], 8); /*0x1004e7d6e*/
    }
    if ( v83 != 2 ) /*0x1004e7d77*/
      goto LABEL_35; /*0x1004e7d77*/
    goto LABEL_34; /*0x1004e7d77*/
  }
LABEL_6:
  v87 = a1; /*0x1004e7b18*/
  v84 = 24 * v8; /*0x1004e7b28*/
  v9 = 0; /*0x1004e7b2c*/
  while ( 1 ) /*0x1004e7b68*/
  {
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v58, *(_QWORD *)(v92 + v9 + 8), *(_QWORD *)(v92 + v9 + 16)); /*0x1004e7b68*/
    v6 = (__int64)v59; /*0x1004e7b74*/
    v91 = v58; /*0x1004e7b7b*/
    v7 = 0x8000000000000000LL; /*0x1004e7b7f*/
    if ( v58 != 0x8000000000000000LL ) /*0x1004e7b8c*/
      break; /*0x1004e7b8c*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x1004e7b40*/
      0x8000000000000000LL,
      v59);
LABEL_8:
    v9 += 24; /*0x1004e7b45*/
    if ( v84 == v9 ) /*0x1004e7b4d*/
    {
      a1 = v87; /*0x1004e7d14*/
      if ( v8 ) /*0x1004e7d18*/
      {
        v15 = (unsigned __int64 *)(v92 + 8); /*0x1004e7d1e*/
        do /*0x1004e7d37*/
        {
          v6 = *(v15 - 1); /*0x1004e7d39*/
          if ( v6 ) /*0x1004e7d40*/
          {
            v7 = *v15; /*0x1004e7d42*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v15, v6, 1); /*0x1004e7d4a*/
          }
          v15 += 3; /*0x1004e7d30*/
          --v8; /*0x1004e7d34*/
        }
        while ( v8 ); /*0x1004e7d37*/
      }
      goto LABEL_31; /*0x1004e7d37*/
    }
  }
  v62 = v59; /*0x1004e7b95*/
  v63 = v60; /*0x1004e7b9c*/
  v65 = 0; /*0x1004e7baa*/
  v64 = 0; /*0x1004e7bb2*/
  v85 = (unsigned __int64)v59; /*0x1004e7bb9*/
  v66 = (__int64)v59; /*0x1004e7bbd*/
  v67 = (__int64 (__fastcall *)(_QWORD, _QWORD))v60; /*0x1004e7bc4*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v74, &v62); /*0x1004e7bd9*/
  if ( (_BYTE)v74 == 6 ) /*0x1004e7be5*/
  {
    v7 = (unsigned __int64)&v75; /*0x1004e7be7*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v75); /*0x1004e7bee*/
    goto LABEL_24; /*0x1004e7bf3*/
  }
  v81 = v77; /*0x1004e7c07*/
  v80 = v76; /*0x1004e7c15*/
  v79 = (_QWORD *)v75; /*0x1004e7c2a*/
  v78 = (__int64)v74; /*0x1004e7c31*/
  v10 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(&v78, "/tokens/access_tokenOPENAI_API_KEY", 20); /*0x1004e7c4b*/
  if ( v10 && *(_BYTE *)v10 == 3 ) /*0x1004e7c58*/
  {
    v86 = *(_QWORD *)(v10 + 16); /*0x1004e7c5e*/
    v11 = *(_QWORD *)(v10 + 24); /*0x1004e7c62*/
  }
  else
  {
    v86 = 1; /*0x1004e7c6d*/
    v11 = 0; /*0x1004e7c71*/
  }
  v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004e7c86*/
          "OPENAI_API_KEY",
          14,
          &v78);
  v13 = 1; /*0x1004e7c8b*/
  v14 = 1; /*0x1004e7c91*/
  if ( v12 && *(_BYTE *)v12 == 3 ) /*0x1004e7c9c*/
  {
    v13 = *(_QWORD *)(v12 + 16); /*0x1004e7c9e*/
    v14 = *(_QWORD *)(v12 + 24) < 3u; /*0x1004e7ca7*/
  }
  if ( (!v11 /*0x1004e7cdc*/
     || (unsigned __int8)codexmate_lib::core::relay::codex_diagnostic::is_known_placeholder_token::h0dfcb00f92fc875c(
                           v86,
                           v11))
    && (v14 || *(_WORD *)v13 ^ 0x6B73 | *(unsigned __int8 *)(v13 + 2) ^ 0x2D) )
  {
    v7 = (unsigned __int64)&v74; /*0x1004e7ce5*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v74); /*0x1004e7cec*/
LABEL_24:
    v6 = v91; /*0x1004e7cf1*/
    if ( v91 ) /*0x1004e7cf8*/
    {
      v7 = v85; /*0x1004e7d03*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v91, 1); /*0x1004e7d07*/
    }
    goto LABEL_8; /*0x1004e7d0c*/
  }
  v28 = *(_QWORD *)(v92 + v9 + 8); /*0x1004e7f2f*/
  v29 = *(_QWORD *)(v92 + v9 + 16); /*0x1004e7f34*/
  v30 = *(__int64 ***)(v70 + 32); /*0x1004e7f40*/
  v84 = *(_QWORD *)(v70 + 40); /*0x1004e7f48*/
  v31 = &v62; /*0x1004e7f4c*/
  std::fs::read::inner::h6a30c15c40add28b(&v62, v28, v29); /*0x1004e7f53*/
  v32 = v62; /*0x1004e7f58*/
  v33 = v63; /*0x1004e7f5f*/
  if ( v62 != (__int64 *)0x8000000000000000LL ) /*0x1004e7f73*/
  {
    v31 = v30; /*0x1004e7f7c*/
    v28 = v84; /*0x1004e7f7f*/
    v34 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1004e7f91*/
            v30,
            v84,
            (__int64)v63,
            v64,
            1);
    if ( v32 ) /*0x1004e7f97*/
    {
      v31 = v33; /*0x1004e7f9e*/
      v28 = (size_t)v32; /*0x1004e7fa1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v32, 1); /*0x1004e7fa4*/
    }
    v33 = (__int64 **)v34; /*0x1004e7fa9*/
  }
  if ( v33 ) /*0x1004e7faf*/
  {
    v71 = (__int64)v33; /*0x1004e7fb5*/
    v88 = &v71; /*0x1004e7fc3*/
    v89 = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004e7fce*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v62, &unk_1017BF8A9, &v88); /*0x1004e7fe4*/
    v88 = v62; /*0x1004e7ff7*/
    v89 = (__int64)v63; /*0x1004e7ffb*/
    v90 = v64; /*0x1004e8006*/
    v35 = v87; /*0x1004e8019*/
    v36 = v91; /*0x1004e801d*/
    if ( (v71 & 3) == 1 ) /*0x1004e8021*/
    {
      v37 = v71 - 1; /*0x1004e8023*/
      v38 = *(_QWORD *)(v71 - 1); /*0x1004e8027*/
      v39 = *(_QWORD *)(v71 + 7); /*0x1004e802b*/
      if ( *(_QWORD *)v39 ) /*0x1004e802f*/
        (*(void (__fastcall **)(__int64, void *, _QWORD *))v39)(v38, &unk_1017BF8A9, v87); /*0x1004e803a*/
      v40 = *(_QWORD *)(v39 + 8); /*0x1004e803c*/
      if ( v40 ) /*0x1004e8043*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v40, *(_QWORD *)(v39 + 16)); /*0x1004e804c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 24, 8); /*0x1004e805e*/
      v35 = v87; /*0x1004e8063*/
      v36 = v91; /*0x1004e8067*/
    }
    v35[3] = v90; /*0x1004e806f*/
    v41 = v88; /*0x1004e8073*/
    v35[2] = v89; /*0x1004e807b*/
    v35[1] = v41; /*0x1004e807f*/
    *v35 = 10; /*0x1004e8083*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v31, v28); /*0x1004e808f*/
    v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e809e*/
    if ( !v42 ) /*0x1004e80a6*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e8330*/
    v43 = (_QWORD *)v42; /*0x1004e80ac*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e80af*/
    v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1004e80be*/
    if ( !v44 ) /*0x1004e80c6*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1004e838c*/
    qmemcpy(v44, "auth_integrity", 14); /*0x1004e80e4*/
    *v43 = 14; /*0x1004e80e7*/
    v43[1] = v44; /*0x1004e80ee*/
    v43[2] = 14; /*0x1004e80f2*/
    v71 = 1; /*0x1004e80fa*/
    v72 = (__int64 (__fastcall *)(_QWORD, _QWORD))v43; /*0x1004e8105*/
    v73 = 1; /*0x1004e810c*/
    v88 = nullptr; /*0x1004e8117*/
    v89 = 8; /*0x1004e811f*/
    v90 = 0; /*0x1004e8127*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1); /*0x1004e812f*/
    v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e813e*/
    if ( !v45 ) /*0x1004e8146*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e8341*/
    v46 = (_QWORD *)v45; /*0x1004e814c*/
    v47 = *(_QWORD *)(v92 + v9 + 16); /*0x1004e8158*/
    v61[0] = *(_QWORD *)(v92 + v9 + 8); /*0x1004e815d*/
    v61[1] = v47; /*0x1004e8164*/
    v62 = v61; /*0x1004e8172*/
    v63 = (__int64 **)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004e8180*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v57, &unk_1017BF87A, &v62); /*0x1004e819c*/
    v46[2] = v57[2]; /*0x1004e81a8*/
    v48 = v57[0]; /*0x1004e81ac*/
    v46[1] = v57[1]; /*0x1004e81ba*/
    *v46 = v48; /*0x1004e81be*/
    v49 = v71; /*0x1004e81c1*/
    v50 = v72; /*0x1004e81c8*/
    v62 = (__int64 *)v71; /*0x1004e81cf*/
    v63 = (__int64 **)v72; /*0x1004e81d6*/
    v51 = v73; /*0x1004e81dd*/
    v64 = v73; /*0x1004e81e4*/
    v52 = v88; /*0x1004e81eb*/
    v53 = v89; /*0x1004e81ef*/
    v65 = (__int64)v88; /*0x1004e81f3*/
    v66 = v89; /*0x1004e81fa*/
    v67 = (__int64 (__fastcall *)(_QWORD, _QWORD))v90; /*0x1004e8205*/
    v54 = v87; /*0x1004e820c*/
    v87[6] = v90; /*0x1004e8210*/
    v54[5] = v53; /*0x1004e8214*/
    v54[4] = v52; /*0x1004e8218*/
    v54[3] = v51; /*0x1004e821c*/
    v54[2] = v50; /*0x1004e8220*/
    v54[1] = v49; /*0x1004e8224*/
    v54[7] = 1; /*0x1004e8228*/
    v54[8] = v46; /*0x1004e8230*/
    v54[9] = 1; /*0x1004e8234*/
    *v54 = 11; /*0x1004e823c*/
    v36 = v91; /*0x1004e8243*/
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v78); /*0x1004e824e*/
  if ( v36 ) /*0x1004e8256*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v36, 1); /*0x1004e8264*/
  if ( v8 ) /*0x1004e826c*/
  {
    v55 = (_QWORD *)(v92 + 8); /*0x1004e8272*/
    do /*0x1004e8287*/
    {
      v56 = *(v55 - 1); /*0x1004e8289*/
      if ( v56 ) /*0x1004e8290*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v55, v56, 1); /*0x1004e829a*/
      v55 += 3; /*0x1004e8280*/
      --v8; /*0x1004e8284*/
    }
    while ( v8 ); /*0x1004e8287*/
  }
  result = v68[0]; /*0x1004e82a1*/
  if ( v68[0] ) /*0x1004e82ab*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, 24LL * v68[0], 8); /*0x1004e82be*/
  if ( v83 == 2 ) /*0x1004e82c7*/
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h313f17e113e3a02b(&v82); /*0x1004e82d1*/
  return result; /*0x1004e7f19*/
}