// __ZN13codexmate_lib4core5relay16codex_diagnostic36fix_thread_model_catalog_consistency @ 0x100513c50 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_thread_model_catalog_consistency::h09ef669ed095bbda(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 (__fastcall *a5)(_QWORD *, __int64))
{
  _QWORD *v5; // rbx
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // r14
  void *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r14
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // r14
  void *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rsi
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  _QWORD *v40; // rax
  __int64 v41; // rbx
  _QWORD *v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rax
  _QWORD *v45; // r15
  _BYTE *v46; // rsi
  __int64 *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // r15
  void *v51; // rax
  __int64 v52; // rax
  _BYTE v53[24]; // [rsp+0h] [rbp-1C0h] BYREF
  _QWORD v54[3]; // [rsp+18h] [rbp-1A8h] BYREF
  _QWORD v55[3]; // [rsp+30h] [rbp-190h] BYREF
  __int64 (__fastcall *v56)(_QWORD *, __int64); // [rsp+48h] [rbp-178h]
  __int64 v57; // [rsp+50h] [rbp-170h]
  __int64 v58; // [rsp+58h] [rbp-168h]
  __int64 v59; // [rsp+60h] [rbp-160h]
  _QWORD v60[9]; // [rsp+68h] [rbp-158h] BYREF
  _QWORD v61[13]; // [rsp+B0h] [rbp-110h] BYREF
  _QWORD *v62; // [rsp+118h] [rbp-A8h]
  _QWORD v63[9]; // [rsp+120h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+168h] [rbp-58h] BYREF
  _QWORD *v65; // [rsp+170h] [rbp-50h]
  __int64 v66; // [rsp+178h] [rbp-48h]
  __int64 v67; // [rsp+180h] [rbp-40h] BYREF
  __int64 v68; // [rsp+188h] [rbp-38h]
  __int64 v69; // [rsp+190h] [rbp-30h]

  v5 = a1; /*0x100513c64*/
  if ( (a3 & 1) == 0 ) /*0x100513c6a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100513e3a*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100513e49*/
    if ( v15 ) /*0x100513e51*/
    {
      v16 = (_QWORD *)v15; /*0x100513e57*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100513e5a*/
      v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100513e69*/
      if ( !v17 ) /*0x100513e71*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100514767*/
      qmemcpy(v17, "thread_model_catalog_consistency", 32); /*0x100513eab*/
      *v16 = 32; /*0x100513eae*/
      v16[1] = v17; /*0x100513eb5*/
      v16[2] = 32; /*0x100513eb9*/
      v60[0] = 1; /*0x100513ec1*/
      v60[1] = v16; /*0x100513ecc*/
      v60[2] = 1; /*0x100513ed3*/
      v63[0] = 0; /*0x100513ede*/
      v63[1] = 8; /*0x100513ee9*/
      v63[2] = 0; /*0x100513ef4*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1); /*0x100513eff*/
      v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100513f0e*/
      if ( !v18 ) /*0x100513f16*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005146f5*/
      v13 = (_QWORD *)v18; /*0x100513f1c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100513f1f*/
      v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x100513f2e*/
      if ( !v19 ) /*0x100513f36*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 60); /*0x100514778*/
      *(_QWORD *)(v19 + 48) = 0x87E880B8E420676FLL; /*0x100513f46*/
      *(_QWORD *)(v19 + 40) = 0x6C617461632D6C65LL; /*0x100513f54*/
      *(_QWORD *)(v19 + 32) = 0x646F6D208BA8E7BFLL; /*0x100513f62*/
      *(_QWORD *)(v19 + 24) = 0xBAE78DA4E5AEBFE4LL; /*0x100513f70*/
      *(_QWORD *)(v19 + 16) = 0x809CE9A097E68CBCLL; /*0x100513f7e*/
      *(_QWORD *)(v19 + 8) = 0xEFA894E7AF90E5AALL; /*0x100513f8c*/
      *(_QWORD *)v19 = 0x9CE6B194E7AFB7E8LL; /*0x100513f9a*/
      *(_DWORD *)(v19 + 56) = -1484724556; /*0x100513f9d*/
      *v13 = 60; /*0x100513fa4*/
      v13[1] = v19; /*0x100513fab*/
      v13[2] = 60; /*0x100513faf*/
      goto LABEL_13; /*0x100513faf*/
    }
LABEL_57:
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1005146dc*/
  }
  v62 = a1; /*0x100513c73*/
  v56 = a5; /*0x100513c7d*/
  codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::hef17cfa3d974fdef(v61, a2); /*0x100513c8e*/
  v7 = v61[2]; /*0x100513c93*/
  v8 = v61[8]; /*0x100513c9a*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(v61); /*0x100513ca4*/
  if ( !(v7 | v8) ) /*0x100513ca9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, a2); /*0x100513cb2*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100513cc1*/
    if ( v9 ) /*0x100513cc9*/
    {
      v10 = (_QWORD *)v9; /*0x100513ccf*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100513cd2*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100513ce1*/
      if ( !v11 ) /*0x100513ce9*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100514789*/
      qmemcpy(v11, "thread_model_catalog_consistency", 32); /*0x100513d23*/
      *v10 = 32; /*0x100513d26*/
      v10[1] = v11; /*0x100513d2d*/
      v10[2] = 32; /*0x100513d31*/
      v60[0] = 1; /*0x100513d39*/
      v60[1] = v10; /*0x100513d44*/
      v60[2] = 1; /*0x100513d4b*/
      v63[0] = 0; /*0x100513d56*/
      v63[1] = 8; /*0x100513d61*/
      v63[2] = 0; /*0x100513d6c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1); /*0x100513d77*/
      v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100513d86*/
      v5 = v62; /*0x100513d8e*/
      if ( !v12 ) /*0x100513d95*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100514709*/
      v13 = (_QWORD *)v12; /*0x100513d9b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100513d9e*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(58, 1); /*0x100513dad*/
      if ( !v14 ) /*0x100513db5*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 58); /*0x10051479a*/
      *(_QWORD *)(v14 + 48) = 0xE5AEBFE4809CE9A0LL; /*0x100513dc5*/
      *(_QWORD *)(v14 + 40) = 0x97E68CBCEFADB8E4LL; /*0x100513dd3*/
      *(_QWORD *)(v14 + 32) = 0x20676F6C61746143LL; /*0x100513de1*/
      *(_QWORD *)(v14 + 24) = 0x208D89E593BDE5A8LL; /*0x100513def*/
      *(_QWORD *)(v14 + 16) = 0x9CE5A883E9A885E5LL; /*0x100513dfd*/
      *(_QWORD *)(v14 + 8) = 0xB2B7E5206C65646FLL; /*0x100513e0b*/
      *(_QWORD *)v14 = 0x6D208BA8E7BFBAE7LL; /*0x100513e19*/
      *(_WORD *)(v14 + 56) = -29276; /*0x100513e1c*/
      *v13 = 58; /*0x100513e22*/
      v13[1] = v14; /*0x100513e29*/
      v13[2] = 58; /*0x100513e2d*/
LABEL_13:
      result = v60[2]; /*0x100513fb7*/
      v61[2] = v60[2]; /*0x100513fbe*/
      v21 = v60[0]; /*0x100513fc5*/
      v22 = v60[1]; /*0x100513fcc*/
      v61[1] = v60[1]; /*0x100513fd3*/
      v61[0] = v60[0]; /*0x100513fda*/
      v23 = v63[0]; /*0x100513fe1*/
      v24 = v63[1]; /*0x100513fe8*/
      v61[3] = v63[0]; /*0x100513fef*/
      v61[4] = v63[1]; /*0x100513ff6*/
      v61[5] = v63[2]; /*0x100514004*/
      v5[6] = v63[2]; /*0x10051400b*/
      v5[5] = v24; /*0x10051400f*/
      v5[4] = v23; /*0x100514013*/
      v5[3] = result; /*0x100514017*/
      v5[2] = v22; /*0x10051401b*/
      v5[1] = v21; /*0x10051401f*/
      v5[7] = 1; /*0x100514023*/
      v5[8] = v13; /*0x10051402b*/
      v5[9] = 1; /*0x10051402f*/
      *v5 = 11; /*0x100514037*/
      return result; /*0x100514037*/
    }
    goto LABEL_57; /*0x100513cc9*/
  }
  result = v56(v61, a4); /*0x10051405a*/
  if ( LODWORD(v61[0]) != 11 ) /*0x100514067*/
  {
    qmemcpy(v62, v61, 0x60u); /*0x10051421d*/
    return result; /*0x10051421d*/
  }
  codexmate_lib::core::relay::codex_thread_visibility::converge_router_thread_models_to_catalog::h65d472a51982a375( /*0x100514077*/
    v61,
    a2);
  result = v61[0]; /*0x10051407c*/
  qmemcpy(v63, &v61[1], sizeof(v63)); /*0x100514096*/
  v25 = v62; /*0x10051409d*/
  if ( v61[0] != 11 ) /*0x1005140a4*/
  {
    v32 = v61[10]; /*0x100514225*/
    v62[11] = v61[11]; /*0x100514233*/
    v25[10] = v32; /*0x100514237*/
    qmemcpy(v25 + 1, v63, 0x48u); /*0x10051424b*/
    *v25 = result; /*0x10051424e*/
    return result; /*0x100514251*/
  }
  qmemcpy(v60, v63, sizeof(v60)); /*0x1005140bd*/
  codexmate_lib::core::relay::codex_diagnostic::check_thread_model_catalog_consistency::h789673723c3e4b34(v61, a2, 1); /*0x1005140cf*/
  if ( v61[5] == 2 && (v26 = v61[4], *(_WORD *)v61[4] == 27503) ) /*0x1005140eb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, a2); /*0x10051442f*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10051443e*/
    if ( !v44 ) /*0x100514446*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100514745*/
    v45 = (_QWORD *)v44; /*0x10051444c*/
    v63[0] = &v60[5]; /*0x10051445d*/
    v63[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10051446b*/
    v63[2] = &v60[6]; /*0x100514472*/
    v63[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100514479*/
    v46 = &unk_1017C0EB7; /*0x100514480*/
    v47 = v55; /*0x100514487*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v55, &unk_1017C0EB7, v63); /*0x100514495*/
    v45[2] = v55[2]; /*0x1005144a1*/
    v48 = v55[0]; /*0x1005144a5*/
    v45[1] = v55[1]; /*0x1005144b3*/
    *v45 = v48; /*0x1005144b7*/
    v64 = 1; /*0x1005144ba*/
    v65 = v45; /*0x1005144c2*/
    v66 = 1; /*0x1005144c6*/
    if ( v60[8] ) /*0x1005144d6*/
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6(v63, v60[1], v60[2], &unk_1015FD2A7, 3); /*0x1005144fe*/
      v69 = v63[2]; /*0x100514511*/
      v68 = v63[1]; /*0x100514523*/
      v67 = v63[0]; /*0x100514527*/
      v63[0] = &v60[8]; /*0x10051452b*/
      v63[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100514532*/
      v63[2] = &v67; /*0x10051453d*/
      v63[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10051454b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_1017C0EED, v63); /*0x100514567*/
      if ( v67 ) /*0x100514573*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v67, 1); /*0x10051457e*/
      v47 = &v64; /*0x100514583*/
      v46 = v53; /*0x100514587*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h9bf2c417fdf77799(&v64, v53); /*0x10051458e*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v46); /*0x100514593*/
    v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005145a2*/
    if ( !v49 ) /*0x1005145aa*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100514756*/
    v50 = (_QWORD *)v49; /*0x1005145b0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1005145b3*/
    v51 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x1005145c2*/
    if ( !v51 ) /*0x1005145ca*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x1005147bc*/
    qmemcpy(v51, "thread_model_catalog_consistency", 32); /*0x100514604*/
    *v50 = 32; /*0x100514607*/
    v50[1] = v51; /*0x10051460e*/
    v50[2] = 32; /*0x100514612*/
    v25[9] = v66; /*0x10051461e*/
    v52 = v64; /*0x100514622*/
    v25[8] = (__int64)v65; /*0x10051462a*/
    v25[7] = v52; /*0x10051462e*/
    v25[1] = 1; /*0x100514632*/
    v25[2] = (__int64)v50; /*0x10051463a*/
    v25[3] = 1; /*0x10051463e*/
    v25[4] = 0; /*0x100514646*/
    v25[5] = 8; /*0x10051464e*/
    v25[6] = 0; /*0x100514656*/
    *v25 = 11; /*0x10051465e*/
    if ( v61[0] ) /*0x10051466f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[1], v61[0], 1); /*0x10051467d*/
    if ( v61[3] ) /*0x10051468c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v61[3], 1); /*0x100514696*/
    if ( v61[6] ) /*0x1005146a5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[7], v61[6], 1); /*0x1005146b3*/
    v39 = v61[9]; /*0x1005146b8*/
    if ( !(2LL * v61[9]) ) /*0x1005146ca*/
      goto LABEL_35; /*0x1005146ca*/
    v40 = &v61[10]; /*0x1005146d0*/
  }
  else
  {
    v57 = 0; /*0x1005140f1*/
    v58 = 8; /*0x1005140fc*/
    v59 = 0; /*0x100514107*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v61, a2); /*0x100514112*/
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100514121*/
    if ( !v27 ) /*0x100514129*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10051471d*/
    v28 = (_QWORD *)v27; /*0x10051412f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x100514132*/
    v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100514141*/
    if ( !v29 ) /*0x100514149*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x1005147ab*/
    qmemcpy(v29, "thread_model_catalog_consistency", 32); /*0x100514183*/
    *v28 = 32; /*0x100514186*/
    v28[1] = v29; /*0x10051418d*/
    v28[2] = 32; /*0x100514191*/
    v64 = 1; /*0x100514199*/
    v65 = v28; /*0x1005141a1*/
    v66 = 1; /*0x1005141a5*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1); /*0x1005141ad*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1005141bc*/
    if ( !v30 ) /*0x1005141c8*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100514731*/
    v31 = (_QWORD *)v30; /*0x1005141ce*/
    if ( __OFSUB__(-v61[9], 1) ) /*0x1005141e2*/
    {
      v69 = v61[8]; /*0x1005141f2*/
      v68 = v61[7]; /*0x1005141fd*/
      v67 = v61[6]; /*0x100514201*/
    }
    else
    {
      v67 = v61[9]; /*0x100514264*/
      v68 = v61[10]; /*0x100514276*/
      v69 = v61[11]; /*0x10051427a*/
      if ( v61[6] ) /*0x100514281*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[7], v61[6], 1); /*0x100514288*/
    }
    v63[0] = &v60[5]; /*0x10051428d*/
    v63[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10051429b*/
    v63[2] = &v67; /*0x1005142a6*/
    v63[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005142b4*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, &unk_1017C0E7A, v63); /*0x1005142d0*/
    if ( v67 ) /*0x1005142dc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v67, 1); /*0x1005142e7*/
    v31[2] = v54[2]; /*0x1005142f3*/
    v33 = v54[0]; /*0x1005142f7*/
    v31[1] = v54[1]; /*0x100514305*/
    *v31 = v33; /*0x100514309*/
    v34 = v57; /*0x10051430c*/
    v35 = v58; /*0x100514313*/
    v63[0] = v57; /*0x10051431a*/
    v63[1] = v58; /*0x100514321*/
    v36 = v59; /*0x100514328*/
    v63[2] = v59; /*0x10051432f*/
    v37 = v64; /*0x100514336*/
    v38 = v65; /*0x10051433a*/
    v63[3] = v64; /*0x10051433e*/
    v63[4] = v65; /*0x100514345*/
    v63[5] = v66; /*0x10051434d*/
    v25[6] = v66; /*0x100514351*/
    v25[5] = (__int64)v38; /*0x100514355*/
    v25[4] = v37; /*0x100514359*/
    v25[3] = v36; /*0x10051435d*/
    v25[2] = v35; /*0x100514361*/
    v25[1] = v34; /*0x100514365*/
    v25[7] = 1; /*0x100514369*/
    v25[8] = (__int64)v31; /*0x100514371*/
    v25[9] = 1; /*0x100514375*/
    *v25 = 11; /*0x10051437d*/
    if ( v61[0] ) /*0x10051438e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61[1], v61[0], 1); /*0x10051439c*/
    v39 = v61[3]; /*0x1005143a1*/
    if ( !v61[3] ) /*0x1005143ab*/
      goto LABEL_35; /*0x1005143ab*/
    v40 = &v61[4]; /*0x1005143ad*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v40, v39, 1); /*0x1005143bc*/
LABEL_35:
  v41 = v60[2]; /*0x1005143c1*/
  if ( v60[2] ) /*0x1005143cb*/
  {
    v42 = (_QWORD *)(v60[1] + 8LL); /*0x1005143d4*/
    do /*0x1005143e7*/
    {
      v43 = *(v42 - 1); /*0x1005143e9*/
      if ( v43 ) /*0x1005143f0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v42, v43, 1); /*0x1005143fa*/
      v42 += 3; /*0x1005143e0*/
      --v41; /*0x1005143e4*/
    }
    while ( v41 ); /*0x1005143e7*/
  }
  result = v60[0]; /*0x100514401*/
  if ( v60[0] ) /*0x10051440b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60[1], 24LL * v60[0], 8); /*0x100514425*/
  return result; /*0x10051403e*/
}