// __ZN13codexmate_lib4core5relay7manager12RelayManager31reconcile_native_off_after_stop @ 0x10027b660 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::reconcile_native_off_after_stop::h8a1470d90b34391b(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v28; // [rsp+0h] [rbp-180h]
  _QWORD v29[3]; // [rsp+30h] [rbp-150h] BYREF
  __int64 v30; // [rsp+48h] [rbp-138h] BYREF
  __int64 v31; // [rsp+50h] [rbp-130h]
  __int64 v32; // [rsp+58h] [rbp-128h]
  _QWORD v33[12]; // [rsp+60h] [rbp-120h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-B8h]
  __int64 v36; // [rsp+D0h] [rbp-B0h]
  _QWORD *v37; // [rsp+D8h] [rbp-A8h]
  __int64 v38; // [rsp+E0h] [rbp-A0h]
  __int64 v39; // [rsp+E8h] [rbp-98h]
  __int64 v40; // [rsp+F0h] [rbp-90h]
  __int64 v41; // [rsp+F8h] [rbp-88h] BYREF
  __int64 v42; // [rsp+100h] [rbp-80h]
  __int64 v43; // [rsp+108h] [rbp-78h]
  __int64 v44; // [rsp+110h] [rbp-70h]
  __int64 v45; // [rsp+118h] [rbp-68h]
  __int64 v46; // [rsp+120h] [rbp-60h]
  __int64 v47; // [rsp+128h] [rbp-58h]
  __int64 v48; // [rsp+130h] [rbp-50h]
  __int64 v49; // [rsp+138h] [rbp-48h]
  __int64 v50; // [rsp+140h] [rbp-40h]
  __int64 v51; // [rsp+148h] [rbp-38h]
  __int64 v52; // [rsp+150h] [rbp-30h]

  v37 = a1; /*0x10027b680*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h83c13dceed25a0ea( /*0x10027b69d*/
    &v30,
    *(_QWORD *)(a4 + 8),
    *(_QWORD *)(a4 + 8) + 232LL * *(_QWORD *)(a4 + 16));
  codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(&v34, a4); /*0x10027b6ac*/
  v14 = v32; /*0x10027b6c8*/
  v15 = v36; /*0x10027b6d6*/
  v28 = a5; /*0x10027b6fb*/
  v16 = v31; /*0x10027b6ff*/
  v52 = v35; /*0x10027b712*/
  codexmate_lib::core::relay::router_reconciler::reconcile_native_off::h9c7a4e89d050482c( /*0x10027b719*/
    (unsigned int)v33,
    a3,
    v31,
    v32,
    v35,
    v36,
    v28,
    a6,
    a7,
    a8,
    a9,
    a10);
  v17 = v33[0]; /*0x10027b71e*/
  v45 = v33[1]; /*0x10027b72c*/
  v46 = v33[2]; /*0x10027b737*/
  v47 = v33[3]; /*0x10027b742*/
  v48 = v33[4]; /*0x10027b74d*/
  v49 = v33[5]; /*0x10027b758*/
  v50 = v33[6]; /*0x10027b763*/
  v51 = v33[7]; /*0x10027b76e*/
  v18 = v37; /*0x10027b776*/
  if ( v33[0] == 11 ) /*0x10027b77d*/
  {
    v38 = v45; /*0x10027b78b*/
    v39 = v46; /*0x10027b792*/
    v40 = v47; /*0x10027b79d*/
    v41 = v48; /*0x10027b7a8*/
    v42 = v49; /*0x10027b7b3*/
    v43 = v50; /*0x10027b7bb*/
    v44 = v51; /*0x10027b7c3*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(v29, &v41); /*0x10027b7d5*/
    v33[6] = v44; /*0x10027b7de*/
    v33[5] = v43; /*0x10027b7e9*/
    v33[4] = v42; /*0x10027b7f4*/
    v33[3] = v41; /*0x10027b802*/
    v33[2] = v40; /*0x10027b810*/
    v33[1] = v39; /*0x10027b825*/
    v33[0] = v38; /*0x10027b82c*/
    v33[7] = v29[0]; /*0x10027b841*/
    v33[8] = v29[1]; /*0x10027b848*/
    v33[9] = v29[2]; /*0x10027b856*/
    qmemcpy(v18 + 1, v33, 0x50u); /*0x10027b86d*/
    *v18 = 11; /*0x10027b870*/
    if ( v15 ) /*0x10027b87a*/
    {
      v19 = (_QWORD *)(v52 + 8); /*0x10027b884*/
      do /*0x10027b897*/
      {
        v20 = *(v19 - 1); /*0x10027b89d*/
        if ( v20 ) /*0x10027b8a4*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v19, v20, 1); /*0x10027b8ae*/
        v19 += 3; /*0x10027b890*/
        --v15; /*0x10027b894*/
      }
      while ( v15 ); /*0x10027b897*/
    }
    if ( v34 ) /*0x10027b9a0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 24 * v34, 8); /*0x10027b9b3*/
    if ( v14 ) /*0x10027b9bb*/
    {
      v26 = v16; /*0x10027b9bd*/
      do /*0x10027b9d2*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v26); /*0x10027b9c3*/
        v26 += 232; /*0x10027b9c8*/
        --v14; /*0x10027b9cf*/
      }
      while ( v14 ); /*0x10027b9d2*/
    }
  }
  else
  {
    v37[11] = v33[11]; /*0x10027b8bc*/
    v18[10] = v33[10]; /*0x10027b8c7*/
    v21 = v33[8]; /*0x10027b8cb*/
    v18[9] = v33[9]; /*0x10027b8d9*/
    v18[8] = v21; /*0x10027b8dd*/
    v18[7] = v51; /*0x10027b8e5*/
    v18[6] = v50; /*0x10027b8ed*/
    v18[5] = v49; /*0x10027b8f5*/
    v18[4] = v48; /*0x10027b8fd*/
    v18[3] = v47; /*0x10027b905*/
    v22 = v45; /*0x10027b909*/
    v18[2] = v46; /*0x10027b911*/
    v18[1] = v22; /*0x10027b915*/
    *v18 = v17; /*0x10027b919*/
    if ( v15 ) /*0x10027b91f*/
    {
      v23 = (_QWORD *)(v52 + 8); /*0x10027b925*/
      do /*0x10027b937*/
      {
        v24 = *(v23 - 1); /*0x10027b939*/
        if ( v24 ) /*0x10027b940*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v23, v24, 1); /*0x10027b94a*/
        v23 += 3; /*0x10027b930*/
        --v15; /*0x10027b934*/
      }
      while ( v15 ); /*0x10027b937*/
    }
    if ( v34 ) /*0x10027b95b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 24 * v34, 8); /*0x10027b96e*/
    if ( v14 ) /*0x10027b976*/
    {
      v25 = v16; /*0x10027b978*/
      do /*0x10027b992*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v25); /*0x10027b983*/
        v25 += 232; /*0x10027b988*/
        --v14; /*0x10027b98f*/
      }
      while ( v14 ); /*0x10027b992*/
    }
  }
  if ( v30 ) /*0x10027b9de*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 232 * v30, 8); /*0x10027b9ef*/
  return v18; /*0x10027b9f7*/
}