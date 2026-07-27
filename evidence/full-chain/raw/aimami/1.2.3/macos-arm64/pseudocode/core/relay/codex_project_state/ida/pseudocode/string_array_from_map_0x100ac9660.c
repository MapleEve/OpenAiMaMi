// __ZN13codexmate_lib4core5relay19codex_project_state21string_array_from_map @ 0x100ac9660 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_project_state::string_array_from_map::h0ffa82e2ae3b7828(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rbx
  const void *v11; // rsi
  size_t v12; // rdx
  __int64 v13; // r14
  int v14; // eax
  char v15; // cl
  size_t v16; // rbx
  void *v17; // rax
  void *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  _QWORD *result; // rax
  __int64 v24; // rax
  _QWORD *v25; // rdx
  _QWORD v26[4]; // [rsp+8h] [rbp-158h] BYREF
  _QWORD v27[3]; // [rsp+28h] [rbp-138h] BYREF
  _QWORD v28[4]; // [rsp+40h] [rbp-120h] BYREF
  __int64 v29; // [rsp+60h] [rbp-100h]
  __int64 v30; // [rsp+68h] [rbp-F8h]
  _QWORD v31[2]; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+80h] [rbp-E0h]
  _QWORD *v33; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-D0h]
  __int64 v35; // [rsp+98h] [rbp-C8h]
  __int64 v36; // [rsp+A0h] [rbp-C0h]
  __int64 v37; // [rsp+A8h] [rbp-B8h]
  __int64 v38; // [rsp+B0h] [rbp-B0h]
  __int64 v39; // [rsp+B8h] [rbp-A8h]
  size_t __n; // [rsp+C0h] [rbp-A0h]
  __int64 v41; // [rsp+C8h] [rbp-98h]
  _QWORD *v42; // [rsp+D0h] [rbp-90h]
  _QWORD *v43; // [rsp+D8h] [rbp-88h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-80h]
  __int64 v45; // [rsp+E8h] [rbp-78h]
  __int64 v46; // [rsp+F0h] [rbp-70h]
  __int64 v47; // [rsp+F8h] [rbp-68h]
  __int64 v48; // [rsp+100h] [rbp-60h]
  __int64 v49; // [rsp+108h] [rbp-58h]
  _QWORD *v50; // [rsp+110h] [rbp-50h]
  __int64 v51; // [rsp+118h] [rbp-48h]
  __int64 v52; // [rsp+120h] [rbp-40h]
  __int64 v53; // [rsp+128h] [rbp-38h]
  void *__s1; // [rsp+130h] [rbp-30h]

  __s1 = a4; /*0x100ac9674*/
  v42 = a1; /*0x100ac9678*/
  if ( a2 ) /*0x100ac9682*/
  {
    v41 = a3; /*0x100ac9688*/
    __n = a5; /*0x100ac968f*/
LABEL_3:
    v5 = a2 + 360; /*0x100ac9696*/
    v6 = *(unsigned __int16 *)(a2 + 626); /*0x100ac969d*/
    v29 = a2; /*0x100ac96a4*/
    v7 = a2 - 32; /*0x100ac96ab*/
    v30 = v6; /*0x100ac96af*/
    v8 = 3LL * (unsigned int)(8 * v6); /*0x100ac96bd*/
    v9 = -1; /*0x100ac96c1*/
    do /*0x100ac971f*/
    {
      if ( !v8 ) /*0x100ac96d3*/
      {
        v9 = v30; /*0x100ac9730*/
LABEL_13:
        if ( !v41 ) /*0x100ac9749*/
          goto LABEL_20; /*0x100ac9749*/
        --v41; /*0x100ac974f*/
        a2 = *(_QWORD *)(v29 + 8 * v9 + 632); /*0x100ac9756*/
        goto LABEL_3; /*0x100ac975e*/
      }
      v10 = v5 + 24; /*0x100ac96d5*/
      v11 = *(const void **)(v5 + 8); /*0x100ac96d9*/
      v12 = *(_QWORD *)(v5 + 16); /*0x100ac96dd*/
      v13 = __n - v12; /*0x100ac96eb*/
      if ( __n < v12 ) /*0x100ac96ee*/
        v12 = __n; /*0x100ac96ee*/
      v14 = memcmp(__s1, v11, v12); /*0x100ac96f6*/
      if ( v14 ) /*0x100ac96ff*/
        v13 = v14; /*0x100ac96ff*/
      v15 = (v13 > 0) - (v13 < 0); /*0x100ac970c*/
      v7 += 32; /*0x100ac970e*/
      ++v9; /*0x100ac9712*/
      v8 -= 24; /*0x100ac9715*/
      v5 = v10; /*0x100ac9719*/
    }
    while ( v15 == 1 ); /*0x100ac971f*/
    if ( v15 ) /*0x100ac9726*/
      goto LABEL_13; /*0x100ac9726*/
    v31[0] = 0; /*0x100ac9763*/
    v32 = 0; /*0x100ac976e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__s1, v11); /*0x100ac9779*/
    v16 = __n; /*0x100ac9783*/
    v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100ac978d*/
    if ( !v17 ) /*0x100ac9795*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x100ac9a68*/
    v18 = v17; /*0x100ac979b*/
    memcpy(v17, __s1, __n); /*0x100ac97a8*/
    v27[0] = __n; /*0x100ac97ad*/
    v27[1] = v18; /*0x100ac97b4*/
    v27[2] = __n; /*0x100ac97bb*/
    serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x100ac97cc*/
      &v43,
      v7);
    if ( (_BYTE)v43 == 6 ) /*0x100ac97d8*/
    {
      v33 = (_QWORD *)v44; /*0x100ac9a31*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v33, &off_101974C58, &off_101974770); /*0x100ac9a59*/
    }
    v53 = v46; /*0x100ac97e2*/
    v52 = v45; /*0x100ac97ea*/
    v51 = v44; /*0x100ac97f9*/
    v50 = v43; /*0x100ac97fd*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v33, v31, v27); /*0x100ac9816*/
    if ( __OFSUB__(0, v33) ) /*0x100ac981d*/
    {
      v19 = v34; /*0x100ac982a*/
      v20 = 32 * v36; /*0x100ac9838*/
      v28[3] = *(_QWORD *)(v34 + 32 * v36 + 24); /*0x100ac9841*/
      v28[2] = *(_QWORD *)(v34 + 32 * v36 + 16); /*0x100ac984d*/
      v21 = *(_QWORD *)(v34 + 32 * v36); /*0x100ac9854*/
      v28[1] = *(_QWORD *)(v34 + 32 * v36 + 8); /*0x100ac985d*/
      v28[0] = v21; /*0x100ac9864*/
      *(_QWORD *)(v34 + v20 + 24) = v53; /*0x100ac986f*/
      *(_QWORD *)(v19 + v20 + 16) = v52; /*0x100ac9878*/
      v22 = v50; /*0x100ac987d*/
      *(_QWORD *)(v19 + v20 + 8) = v51; /*0x100ac9885*/
      *(_QWORD *)(v19 + v20) = v22; /*0x100ac988a*/
      if ( LOBYTE(v28[0]) != 6 ) /*0x100ac9895*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v28); /*0x100ac98a2*/
    }
    else
    {
      v49 = v39; /*0x100ac98d6*/
      v48 = v38; /*0x100ac98e1*/
      v47 = v37; /*0x100ac98ec*/
      v46 = v36; /*0x100ac98f7*/
      v45 = v35; /*0x100ac9902*/
      v44 = v34; /*0x100ac9914*/
      v43 = v33; /*0x100ac9918*/
      v26[3] = v53; /*0x100ac9923*/
      v26[2] = v52; /*0x100ac992e*/
      v26[1] = v51; /*0x100ac993d*/
      v26[0] = v50; /*0x100ac9944*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100ac9960*/
        v28,
        &v43,
        v26);
    }
    v44 = v31[0]; /*0x100ac9973*/
    v45 = v31[1]; /*0x100ac9977*/
    v46 = v32; /*0x100ac9982*/
    LOBYTE(v43) = 5; /*0x100ac9986*/
    v24 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(__s1, v16, &v43); /*0x100ac999b*/
    if ( v24 && *(_BYTE *)v24 == 4 ) /*0x100ac99a8*/
    {
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1048dfd19ac0896e( /*0x100ac99c0*/
        &v33,
        *(_QWORD *)(v24 + 16),
        *(_QWORD *)(v24 + 16) + 32LL * *(_QWORD *)(v24 + 24));
    }
    else
    {
      v33 = nullptr; /*0x100ac99c7*/
      v34 = 8; /*0x100ac99d2*/
      v35 = 0; /*0x100ac99dd*/
    }
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v43); /*0x100ac99ef*/
    v25 = v42; /*0x100ac99fb*/
    v42[2] = v35; /*0x100ac9a02*/
    result = v33; /*0x100ac9a06*/
    v25[1] = v34; /*0x100ac9a14*/
    *v25 = result; /*0x100ac9a18*/
  }
  else
  {
LABEL_20:
    result = v42; /*0x100ac98ac*/
    *v42 = 0; /*0x100ac98b3*/
    result[1] = 8; /*0x100ac98ba*/
    result[2] = 0; /*0x100ac98c2*/
  }
  return result; /*0x100ac9a1b*/
}