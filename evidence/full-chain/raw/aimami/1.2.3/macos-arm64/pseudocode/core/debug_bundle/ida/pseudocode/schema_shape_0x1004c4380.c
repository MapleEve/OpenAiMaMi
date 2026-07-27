// __ZN13codexmate_lib4core12debug_bundle12schema_shape @ 0x1004c4380 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::schema_shape::hea4006a9eea0f4c9(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  const void *v6; // rsi
  __int64 v7; // rdi
  const void *v8; // r13
  size_t v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 i; // r15
  __int64 result; // rax
  _QWORD v19[4]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD v20[4]; // [rsp+28h] [rbp-158h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-138h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-120h] BYREF
  __int64 v23; // [rsp+80h] [rbp-100h] BYREF
  __int64 v24; // [rsp+88h] [rbp-F8h]
  __int64 v25; // [rsp+90h] [rbp-F0h]
  __int64 v26; // [rsp+98h] [rbp-E8h]
  __int64 v27; // [rsp+A0h] [rbp-E0h]
  __int64 v28; // [rsp+A8h] [rbp-D8h]
  __int64 v29; // [rsp+B0h] [rbp-D0h]
  __int64 v30; // [rsp+B8h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-C0h]
  __int64 v32; // [rsp+C8h] [rbp-B8h]
  __int64 v33; // [rsp+D0h] [rbp-B0h]
  __int64 v34; // [rsp+D8h] [rbp-A8h]
  __int64 v35; // [rsp+E0h] [rbp-A0h]
  __int64 v36; // [rsp+E8h] [rbp-98h]
  _QWORD v37[2]; // [rsp+F0h] [rbp-90h] BYREF
  __int64 v38; // [rsp+100h] [rbp-80h]
  __int64 v39; // [rsp+108h] [rbp-78h] BYREF
  __int64 v40; // [rsp+110h] [rbp-70h]
  __int64 v41; // [rsp+118h] [rbp-68h]
  size_t v42; // [rsp+120h] [rbp-60h] BYREF
  __int64 v43; // [rsp+128h] [rbp-58h]
  size_t v44; // [rsp+130h] [rbp-50h]
  __int64 v45; // [rsp+138h] [rbp-48h]
  __int64 v46; // [rsp+140h] [rbp-40h]
  __int64 v47; // [rsp+148h] [rbp-38h]
  __int64 v48; // [rsp+150h] [rbp-30h]

  if ( __OFSUB__(0, a2[90]) ) /*0x1004c439f*/
  {
    v6 = (const void *)a2[1]; /*0x1004c43a8*/
    v7 = (__int64)&v42; /*0x1004c43b2*/
    codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(&v42, v6, a2[2]); /*0x1004c43b6*/
  }
  else
  {
    v8 = (const void *)a2[91]; /*0x1004c43bd*/
    v9 = a2[92]; /*0x1004c43c5*/
    if ( v9 ) /*0x1004c43d0*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004c43d2*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1004c43e4*/
      if ( !v7 ) /*0x1004c43ea*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x1004c43f4*/
    }
    else
    {
      v7 = 1; /*0x1004c43f9*/
    }
    v42 = v9; /*0x1004c43fe*/
    v43 = v7; /*0x1004c4402*/
    v6 = v8; /*0x1004c4406*/
    memcpy((void *)v7, v8, v9); /*0x1004c440c*/
    v44 = v9; /*0x1004c4411*/
  }
  v37[0] = 0; /*0x1004c4415*/
  v38 = 0; /*0x1004c4420*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6); /*0x1004c4428*/
  v10 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1004c4437*/
  if ( !v10 ) /*0x1004c443f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x1004c472c*/
  *v10 = 0x7362446574617473LL; /*0x1004c4452*/
  v21[0] = 8; /*0x1004c4455*/
  v21[1] = v10; /*0x1004c4460*/
  v21[2] = 8; /*0x1004c4467*/
  v11 = a2[94] + 24LL * a2[95]; /*0x1004c4486*/
  v20[0] = a2[94]; /*0x1004c448a*/
  v20[1] = v11; /*0x1004c4491*/
  v20[2] = a3; /*0x1004c4498*/
  v20[3] = &v42; /*0x1004c44a3*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9833243a63b872fb( /*0x1004c44b5*/
    &v39,
    v20);
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v30, &v39); /*0x1004c44c5*/
  if ( (_BYTE)v30 == 6 ) /*0x1004c44d1*/
  {
    v23 = v31; /*0x1004c46f3*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c471b*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v23,
      &off_101964900,
      &off_101963F78);
  }
  v48 = v33; /*0x1004c44de*/
  v47 = v32; /*0x1004c44e9*/
  v46 = v31; /*0x1004c44fb*/
  v45 = v30; /*0x1004c44ff*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v23, v37, v21); /*0x1004c4518*/
  if ( v23 == 0x8000000000000000LL ) /*0x1004c452e*/
  {
    v12 = v24; /*0x1004c4534*/
    v13 = 32 * v26; /*0x1004c4542*/
    v22[3] = *(_QWORD *)(v24 + 32 * v26 + 24); /*0x1004c454b*/
    v22[2] = *(_QWORD *)(v24 + 32 * v26 + 16); /*0x1004c4557*/
    v14 = *(_QWORD *)(v24 + 32 * v26); /*0x1004c455e*/
    v22[1] = *(_QWORD *)(v24 + 32 * v26 + 8); /*0x1004c4567*/
    v22[0] = v14; /*0x1004c456e*/
    *(_QWORD *)(v24 + v13 + 24) = v48; /*0x1004c4579*/
    *(_QWORD *)(v12 + v13 + 16) = v47; /*0x1004c4582*/
    v15 = v45; /*0x1004c4587*/
    *(_QWORD *)(v12 + v13 + 8) = v46; /*0x1004c458f*/
    *(_QWORD *)(v12 + v13) = v15; /*0x1004c4594*/
    if ( LOBYTE(v22[0]) != 6 ) /*0x1004c459f*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v22); /*0x1004c45ac*/
  }
  else
  {
    v36 = v29; /*0x1004c45bd*/
    v35 = v28; /*0x1004c45cb*/
    v34 = v27; /*0x1004c45d9*/
    v33 = v26; /*0x1004c45e7*/
    v32 = v25; /*0x1004c45f5*/
    v31 = v24; /*0x1004c460a*/
    v30 = v23; /*0x1004c4611*/
    v19[3] = v48; /*0x1004c461c*/
    v19[2] = v47; /*0x1004c4627*/
    v19[1] = v46; /*0x1004c4636*/
    v19[0] = v45; /*0x1004c463d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(v22, &v30, v19); /*0x1004c4659*/
  }
  v16 = v40; /*0x1004c465e*/
  for ( i = v41 + 1; i != 1; --i ) /*0x1004c4666*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v16); /*0x1004c467d*/
    v16 += 32; /*0x1004c4682*/
  }
  if ( v39 ) /*0x1004c468e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 32 * v39, 8); /*0x1004c469d*/
  *(_QWORD *)(a1 + 24) = v38; /*0x1004c46a6*/
  result = v37[0]; /*0x1004c46aa*/
  *(_QWORD *)(a1 + 16) = v37[1]; /*0x1004c46b8*/
  *(_QWORD *)(a1 + 8) = result; /*0x1004c46bc*/
  *(_BYTE *)a1 = 5; /*0x1004c46c0*/
  if ( v42 ) /*0x1004c46ca*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v42, 1); /*0x1004c46d5*/
  return result; /*0x1004c46da*/
}