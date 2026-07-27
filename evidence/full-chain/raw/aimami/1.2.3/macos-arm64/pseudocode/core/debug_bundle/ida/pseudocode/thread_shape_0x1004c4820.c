// __ZN13codexmate_lib4core12debug_bundle12thread_shape @ 0x1004c4820 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::thread_shape::h10a55c72bc332555(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rax
  __int64 *v6; // r15
  __int64 v7; // r13
  __int64 *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 **v15; // r14
  __int64 **v16; // r14
  void *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 *v23; // rsi
  void *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 result; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _BYTE v33[112]; // [rsp+8h] [rbp-268h] BYREF
  _BYTE v34[112]; // [rsp+78h] [rbp-1F8h] BYREF
  _QWORD v35[3]; // [rsp+E8h] [rbp-188h] BYREF
  _QWORD v36[3]; // [rsp+100h] [rbp-170h] BYREF
  __int64 v37; // [rsp+118h] [rbp-158h]
  __int64 v38; // [rsp+120h] [rbp-150h]
  _QWORD v39[2]; // [rsp+128h] [rbp-148h] BYREF
  __int64 v40; // [rsp+138h] [rbp-138h]
  _QWORD *v41; // [rsp+140h] [rbp-130h] BYREF
  _QWORD *v42; // [rsp+148h] [rbp-128h]
  __int64 v43; // [rsp+150h] [rbp-120h]
  __int64 v44; // [rsp+158h] [rbp-118h]
  __int64 v45; // [rsp+160h] [rbp-110h] BYREF
  __int64 *v46; // [rsp+168h] [rbp-108h]
  __int64 v47; // [rsp+170h] [rbp-100h]
  _QWORD *v48; // [rsp+178h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+180h] [rbp-F0h]
  __int64 v50; // [rsp+188h] [rbp-E8h]
  __int64 v51; // [rsp+190h] [rbp-E0h]
  __int64 v52; // [rsp+198h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp-D0h]
  __int64 v54; // [rsp+1A8h] [rbp-C8h]
  __int64 v55; // [rsp+1B0h] [rbp-C0h]
  _QWORD *v56; // [rsp+1B8h] [rbp-B8h] BYREF
  _QWORD *v57; // [rsp+1C0h] [rbp-B0h]
  __int64 v58; // [rsp+1C8h] [rbp-A8h]
  __int64 v59; // [rsp+1D0h] [rbp-A0h]
  __int64 v60; // [rsp+1D8h] [rbp-98h]
  __int64 v61; // [rsp+1E0h] [rbp-90h]
  __int64 v62; // [rsp+1E8h] [rbp-88h]
  _QWORD *v63; // [rsp+1F0h] [rbp-80h] BYREF
  _QWORD *v64; // [rsp+1F8h] [rbp-78h]
  __int64 v65; // [rsp+200h] [rbp-70h]
  __int64 v66; // [rsp+208h] [rbp-68h]
  __int64 v67; // [rsp+210h] [rbp-60h]
  __int64 v68; // [rsp+218h] [rbp-58h]
  __int64 v69; // [rsp+220h] [rbp-50h]
  __int64 v70; // [rsp+228h] [rbp-48h] BYREF
  __int64 *v71; // [rsp+230h] [rbp-40h]
  __int64 v72; // [rsp+238h] [rbp-38h]
  __int64 v73; // [rsp+240h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 1329) == 1 && *(_QWORD *)(a2 + 1256) != 0x8000000000000000LL ) /*0x1004c4854*/
  {
    v31 = *(_QWORD **)(a2 + 1264); /*0x1004c4fd6*/
    v32 = *(_QWORD *)(a2 + 1272); /*0x1004c4fdd*/
    if ( v32 == 8 ) /*0x1004c4fe8*/
    {
      if ( *v31 != anon_b0ee9adff4519c22b647af231a5a39fa_251 ) /*0x1004c5044*/
        goto LABEL_3; /*0x1004c5044*/
    }
    else if ( v32 == 11 ) /*0x1004c4fee*/
    {
      if ( anon_b0ee9adff4519c22b647af231a5a39fa_250 ^ *v31 /*0x1004c502f*/
         | *(__int64 *)((char *)&anon_b0ee9adff4519c22b647af231a5a39fa_250 + 3) ^ *(_QWORD *)((char *)v31 + 3) )
      {
        goto LABEL_3; /*0x1004c5032*/
      }
    }
    else if ( v32 != 14 /*0x1004c500f*/
           || anon_b0ee9adff4519c22b647af231a5a39fa_249 ^ *v31
            | *(__int64 *)((char *)&anon_b0ee9adff4519c22b647af231a5a39fa_249 + 6) ^ *(_QWORD *)((char *)v31 + 6) )
    {
      goto LABEL_3; /*0x1004c5012*/
    }
    return codexmate_lib::core::debug_bundle::skipped_transition_scan::h7b2228ab191b8cab( /*0x1004c5071*/
             a1,
             a2 + 1256,
             "thread provider convergence scanaimai1openaicodex_router_catalog.jsonmodels_cache.json",
             0x20u);
  }
LABEL_3:
  v38 = a1; /*0x1004c485a*/
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::he6857c591f482337( /*0x1004c4877*/
    v34,
    a2,
    "aimai1openaicodex_router_catalog.jsonmodels_cache.json",
    6);
  codexmate_lib::core::relay::codex_thread_visibility::inspect_thread_provider_convergence::he6857c591f482337( /*0x1004c4892*/
    v33,
    a2,
    "openaicodex_router_catalog.jsonmodels_cache.json",
    6);
  v39[0] = 0; /*0x1004c4897*/
  v40 = 0; /*0x1004c48a2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, a2); /*0x1004c48ad*/
  v4 = 8; /*0x1004c48b2*/
  v5 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1004c48c2*/
  if ( !v5 ) /*0x1004c48ca*/
    goto LABEL_48; /*0x1004c48ca*/
  *v5 = 0x7362446574617473LL; /*0x1004c48dd*/
  v36[0] = 8; /*0x1004c48e1*/
  v36[1] = v5; /*0x1004c48ec*/
  v36[2] = 8; /*0x1004c48f3*/
  codexmate_lib::platform::paths::CodexPaths::all_codex_state_dbs::h71c26bfd8fc5bceb(&v70); /*0x1004c4905*/
  v6 = v71; /*0x1004c490a*/
  v7 = v72; /*0x1004c490e*/
  v35[0] = v71; /*0x1004c491b*/
  v35[1] = &v71[3 * v72]; /*0x1004c4922*/
  v35[2] = a3; /*0x1004c4929*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4d2b0adaadefc572( /*0x1004c493e*/
    &v45,
    v35);
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v63, &v45); /*0x1004c494e*/
  if ( (_BYTE)v63 == 6 ) /*0x1004c4957*/
  {
    v56 = v64; /*0x1004c507a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c50a2*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v56,
      &off_101964900,
      &off_101963F90);
  }
  v51 = v66; /*0x1004c4961*/
  v50 = v65; /*0x1004c496c*/
  v49 = (__int64)v64; /*0x1004c497b*/
  v48 = v63; /*0x1004c4982*/
  v8 = (__int64 *)&v56; /*0x1004c4989*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v56, v39, v36); /*0x1004c499e*/
  v37 = a3; /*0x1004c49aa*/
  if ( v56 == (_QWORD *)0x8000000000000000LL ) /*0x1004c49b1*/
  {
    v9 = v57; /*0x1004c49ba*/
    v10 = 4 * v59; /*0x1004c49c8*/
    v55 = v57[4 * v59 + 3]; /*0x1004c49d1*/
    v54 = v57[4 * v59 + 2]; /*0x1004c49dd*/
    v11 = v57[4 * v59]; /*0x1004c49e4*/
    v53 = v57[4 * v59 + 1]; /*0x1004c49ed*/
    v52 = v11; /*0x1004c49f4*/
    v57[v10 + 3] = v51; /*0x1004c4a02*/
    v9[v10 + 2] = v50; /*0x1004c4a0e*/
    v12 = v48; /*0x1004c4a13*/
    v13 = v49; /*0x1004c4a1a*/
    v9[v10 + 1] = v49; /*0x1004c4a21*/
    v9[v10] = v12; /*0x1004c4a26*/
    if ( (_BYTE)v52 != 6 ) /*0x1004c4a31*/
    {
      v8 = &v52; /*0x1004c4a37*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v52); /*0x1004c4a3e*/
    }
  }
  else
  {
    v69 = v62; /*0x1004c4a4f*/
    v68 = v61; /*0x1004c4a5a*/
    v67 = v60; /*0x1004c4a65*/
    v66 = v59; /*0x1004c4a70*/
    v65 = v58; /*0x1004c4a7b*/
    v64 = v57; /*0x1004c4a8d*/
    v63 = v56; /*0x1004c4a91*/
    v44 = v51; /*0x1004c4a9c*/
    v43 = v50; /*0x1004c4aaa*/
    v42 = (_QWORD *)v49; /*0x1004c4abf*/
    v41 = v48; /*0x1004c4ac6*/
    v8 = &v52; /*0x1004c4acd*/
    v13 = (__int64)&v63; /*0x1004c4ad4*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c4adf*/
      &v52,
      &v63,
      &v41);
    LOBYTE(v52) = 6; /*0x1004c4ae7*/
  }
  v14 = v47; /*0x1004c4aee*/
  if ( v47 ) /*0x1004c4af8*/
  {
    v15 = (__int64 **)(v46 + 1); /*0x1004c4b01*/
    do /*0x1004c4b17*/
    {
      v13 = (__int64)*(v15 - 1); /*0x1004c4b19*/
      if ( v13 ) /*0x1004c4b20*/
      {
        v8 = *v15; /*0x1004c4b22*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v15, v13, 1); /*0x1004c4b2a*/
      }
      v15 += 3; /*0x1004c4b10*/
      --v14; /*0x1004c4b14*/
    }
    while ( v14 ); /*0x1004c4b17*/
  }
  if ( v45 ) /*0x1004c4b3b*/
  {
    v8 = v46; /*0x1004c4b3d*/
    v13 = 24 * v45; /*0x1004c4b48*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24 * v45, 8); /*0x1004c4b51*/
  }
  if ( v7 ) /*0x1004c4b59*/
  {
    v16 = (__int64 **)(v6 + 1); /*0x1004c4b5b*/
    do /*0x1004c4b77*/
    {
      v13 = (__int64)*(v16 - 1); /*0x1004c4b79*/
      if ( v13 ) /*0x1004c4b80*/
      {
        v8 = *v16; /*0x1004c4b82*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v16, v13, 1); /*0x1004c4b8a*/
      }
      v16 += 3; /*0x1004c4b70*/
      --v7; /*0x1004c4b74*/
    }
    while ( v7 ); /*0x1004c4b77*/
  }
  if ( v70 ) /*0x1004c4b9b*/
  {
    v13 = 24 * v70; /*0x1004c4ba1*/
    v8 = v6; /*0x1004c4baa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24 * v70, 8); /*0x1004c4bad*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v13); /*0x1004c4bb2*/
  v4 = 12; /*0x1004c4bb7*/
  v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004c4bc7*/
  v18 = v37; /*0x1004c4bcf*/
  if ( !v17 ) /*0x1004c4bd6*/
LABEL_48:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x1004c5120*/
  qmemcpy(v17, "routerTarget", 12); /*0x1004c4be9*/
  v45 = 12; /*0x1004c4bf4*/
  v46 = (__int64 *)v17; /*0x1004c4bff*/
  v47 = 12; /*0x1004c4c06*/
  codexmate_lib::core::debug_bundle::inspection_json::hbfb29f9e4e7dfd29(&v48, v34, v18); /*0x1004c4c22*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004c4c32*/
    &v63,
    &v48);
  if ( (_BYTE)v63 == 6 ) /*0x1004c4c3b*/
  {
    v56 = v64; /*0x1004c50b0*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c50d8*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v56,
      &off_101964900,
      &off_101963F90);
  }
  v73 = v66; /*0x1004c4c45*/
  v72 = v65; /*0x1004c4c4d*/
  v71 = v64; /*0x1004c4c59*/
  v70 = (__int64)v63; /*0x1004c4c5d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v56, v39, &v45); /*0x1004c4c76*/
  if ( v56 == (_QWORD *)0x8000000000000000LL ) /*0x1004c4c82*/
  {
    v19 = v57; /*0x1004c4c88*/
    v20 = 4 * v59; /*0x1004c4c96*/
    v55 = v57[4 * v59 + 3]; /*0x1004c4c9f*/
    v54 = v57[4 * v59 + 2]; /*0x1004c4cab*/
    v21 = v57[4 * v59]; /*0x1004c4cb2*/
    v53 = v57[4 * v59 + 1]; /*0x1004c4cbb*/
    v52 = v21; /*0x1004c4cc2*/
    v57[v20 + 3] = v73; /*0x1004c4ccd*/
    v19[v20 + 2] = v72; /*0x1004c4cd6*/
    v22 = v70; /*0x1004c4cdb*/
    v23 = v71; /*0x1004c4cdf*/
    v19[v20 + 1] = v71; /*0x1004c4ce3*/
    v19[v20] = v22; /*0x1004c4ce8*/
    if ( (_BYTE)v52 != 6 ) /*0x1004c4cf3*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v52); /*0x1004c4d00*/
  }
  else
  {
    v69 = v62; /*0x1004c4d11*/
    v68 = v61; /*0x1004c4d1c*/
    v67 = v60; /*0x1004c4d27*/
    v66 = v59; /*0x1004c4d32*/
    v65 = v58; /*0x1004c4d3d*/
    v64 = v57; /*0x1004c4d4f*/
    v63 = v56; /*0x1004c4d53*/
    v44 = v73; /*0x1004c4d5b*/
    v43 = v72; /*0x1004c4d66*/
    v42 = v71; /*0x1004c4d75*/
    v41 = (_QWORD *)v70; /*0x1004c4d7c*/
    v23 = (__int64 *)&v63; /*0x1004c4d8a*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c4d95*/
      &v52,
      &v63,
      &v41);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v48); /*0x1004c4da7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, v23); /*0x1004c4dac*/
  v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004c4dbb*/
  if ( !v24 ) /*0x1004c4dc3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1004c5134*/
  qmemcpy(v24, "nativeTarget", 12); /*0x1004c4dd6*/
  v45 = 12; /*0x1004c4de1*/
  v46 = (__int64 *)v24; /*0x1004c4dec*/
  v47 = 12; /*0x1004c4df3*/
  codexmate_lib::core::debug_bundle::inspection_json::hbfb29f9e4e7dfd29(&v48, v33, v18); /*0x1004c4e0f*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004c4e1f*/
    &v63,
    &v48);
  if ( (_BYTE)v63 == 6 ) /*0x1004c4e28*/
  {
    v56 = v64; /*0x1004c50e3*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c510b*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v56,
      &off_101964900,
      &off_101963F90);
  }
  v73 = v66; /*0x1004c4e32*/
  v72 = v65; /*0x1004c4e3a*/
  v71 = v64; /*0x1004c4e46*/
  v70 = (__int64)v63; /*0x1004c4e4a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v56, v39, &v45); /*0x1004c4e63*/
  if ( v56 == (_QWORD *)0x8000000000000000LL ) /*0x1004c4e6f*/
  {
    v25 = v57; /*0x1004c4e75*/
    v26 = 4 * v59; /*0x1004c4e83*/
    v55 = v57[4 * v59 + 3]; /*0x1004c4e8c*/
    v54 = v57[4 * v59 + 2]; /*0x1004c4e98*/
    v27 = v57[4 * v59]; /*0x1004c4e9f*/
    v53 = v57[4 * v59 + 1]; /*0x1004c4ea8*/
    v52 = v27; /*0x1004c4eaf*/
    v57[v26 + 3] = v73; /*0x1004c4eba*/
    v25[v26 + 2] = v72; /*0x1004c4ec3*/
    v28 = v70; /*0x1004c4ec8*/
    v25[v26 + 1] = v71; /*0x1004c4ed0*/
    v25[v26] = v28; /*0x1004c4ed5*/
    if ( (_BYTE)v52 != 6 ) /*0x1004c4ee0*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v52); /*0x1004c4eed*/
  }
  else
  {
    v69 = v62; /*0x1004c4efe*/
    v68 = v61; /*0x1004c4f09*/
    v67 = v60; /*0x1004c4f14*/
    v66 = v59; /*0x1004c4f1f*/
    v65 = v58; /*0x1004c4f2a*/
    v64 = v57; /*0x1004c4f3c*/
    v63 = v56; /*0x1004c4f40*/
    v44 = v73; /*0x1004c4f48*/
    v43 = v72; /*0x1004c4f53*/
    v42 = v71; /*0x1004c4f62*/
    v41 = (_QWORD *)v70; /*0x1004c4f69*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c4f82*/
      &v52,
      &v63,
      &v41);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v48); /*0x1004c4f94*/
  v29 = v38; /*0x1004c4fa0*/
  *(_QWORD *)(v38 + 24) = v40; /*0x1004c4fa7*/
  result = v39[0]; /*0x1004c4fab*/
  *(_QWORD *)(v29 + 16) = v39[1]; /*0x1004c4fb9*/
  *(_QWORD *)(v29 + 8) = result; /*0x1004c4fbd*/
  *(_BYTE *)v29 = 5; /*0x1004c4fc1*/
  return result; /*0x1004c4fc4*/
}