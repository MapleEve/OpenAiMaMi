// __ZN13codexmate_lib4core5relay7manager12RelayManager33reconcile_current_mode_after_stop @ 0x10027cd40 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_after_stop::h8008c833b4b9f7f0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r15
  _QWORD *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // rax
  void *v26; // r14
  _QWORD *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // r8
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // r15
  _QWORD *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v40; // [rsp+18h] [rbp-348h]
  _BYTE v41[8]; // [rsp+20h] [rbp-340h] BYREF
  __int64 v42; // [rsp+28h] [rbp-338h]
  __int64 v43; // [rsp+30h] [rbp-330h]
  char v44; // [rsp+144h] [rbp-21Ch]
  char v45; // [rsp+145h] [rbp-21Bh]
  _QWORD v46[10]; // [rsp+148h] [rbp-218h] BYREF
  _QWORD v47[3]; // [rsp+198h] [rbp-1C8h] BYREF
  __int64 v48; // [rsp+1B0h] [rbp-1B0h] BYREF
  _QWORD v49[10]; // [rsp+1B8h] [rbp-1A8h] BYREF
  __int64 v50; // [rsp+208h] [rbp-158h]
  __int64 v51; // [rsp+210h] [rbp-150h]
  __int64 v52; // [rsp+218h] [rbp-148h]
  __int64 v53; // [rsp+220h] [rbp-140h]
  __int64 v54; // [rsp+228h] [rbp-138h]
  __int64 v55; // [rsp+230h] [rbp-130h]
  __int64 v56; // [rsp+238h] [rbp-128h] BYREF
  __int64 v57; // [rsp+240h] [rbp-120h]
  __int64 v58; // [rsp+248h] [rbp-118h]
  __int64 v59; // [rsp+250h] [rbp-110h]
  __int64 v60; // [rsp+258h] [rbp-108h] BYREF
  __int64 v61; // [rsp+260h] [rbp-100h]
  __int64 v62; // [rsp+268h] [rbp-F8h]
  __int64 v63; // [rsp+270h] [rbp-F0h]
  __int64 v64; // [rsp+278h] [rbp-E8h]
  __int64 v65; // [rsp+280h] [rbp-E0h]
  char v66; // [rsp+288h] [rbp-D8h]
  _QWORD v67[10]; // [rsp+290h] [rbp-D0h] BYREF
  _QWORD v68[10]; // [rsp+2E0h] [rbp-80h] BYREF
  _QWORD *v69; // [rsp+330h] [rbp-30h]

  v69 = a1; /*0x10027cd63*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v41, a2); /*0x10027cd6e*/
  if ( v44 ) /*0x10027cd7a*/
  {
    v51 = a4; /*0x10027cd80*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h83c13dceed25a0ea( /*0x10027cda3*/
      v67,
      v42,
      v42 + 232 * v43);
    v52 = a5; /*0x10027cda8*/
    codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(&v48, v41); /*0x10027cdbd*/
    v10 = v67[2]; /*0x10027cdc2*/
    v62 = v67[2]; /*0x10027cdc9*/
    v61 = v67[1]; /*0x10027cdde*/
    v60 = v67[0]; /*0x10027cde5*/
    v63 = v48; /*0x10027ce01*/
    v64 = v49[0]; /*0x10027ce08*/
    v65 = v49[1]; /*0x10027ce16*/
    v66 = v45; /*0x10027ce1d*/
    if ( v67[2] && (v11 = v65) != 0 ) /*0x10027ce36*/
    {
      codexmate_lib::core::relay::router_reconciler::reconcile_router_on::h272fc0aa71fd25a1( /*0x10027ce66*/
        (unsigned int)&v48,
        a3,
        a2,
        (unsigned int)&v60,
        v51,
        v52,
        0);
      v12 = v48; /*0x10027ce6b*/
      v67[0] = v49[0]; /*0x10027ce79*/
      v67[1] = v49[1]; /*0x10027ce87*/
      v67[2] = v49[2]; /*0x10027ce95*/
      v67[3] = v49[3]; /*0x10027cea3*/
      v67[4] = v49[4]; /*0x10027ceb1*/
      v67[5] = v49[5]; /*0x10027cebf*/
      v67[6] = v49[6]; /*0x10027cecd*/
      if ( v48 == 11 ) /*0x10027ced8*/
      {
        v53 = v67[0]; /*0x10027ceec*/
        v54 = v67[1]; /*0x10027cef3*/
        v55 = v67[2]; /*0x10027cf01*/
        v56 = v67[3]; /*0x10027cf0f*/
        v57 = v67[4]; /*0x10027cf1d*/
        v58 = v67[5]; /*0x10027cf2b*/
        v59 = v67[6]; /*0x10027cf39*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(v47, &v56); /*0x10027cf4e*/
        v68[6] = v59; /*0x10027cf5a*/
        v68[5] = v58; /*0x10027cf65*/
        v68[4] = v57; /*0x10027cf70*/
        v68[3] = v56; /*0x10027cf7b*/
        v68[2] = v55; /*0x10027cf86*/
        v68[1] = v54; /*0x10027cf98*/
        v68[0] = v53; /*0x10027cf9c*/
        v68[7] = v47[0]; /*0x10027cfae*/
        v68[8] = v47[1]; /*0x10027cfb2*/
        v68[9] = v47[2]; /*0x10027cfbd*/
        v13 = v69; /*0x10027cfc5*/
        v69[8] = v59; /*0x10027cfc9*/
        v13[7] = v68[5]; /*0x10027cfd1*/
        v13[6] = v68[4]; /*0x10027cfd9*/
        v13[5] = v68[3]; /*0x10027cfe1*/
        v13[4] = v68[2]; /*0x10027cfe9*/
        v14 = v68[0]; /*0x10027cfed*/
        v13[3] = v68[1]; /*0x10027cff5*/
        v13[2] = v14; /*0x10027cff9*/
        v15 = v68[8]; /*0x10027d001*/
        v13[9] = v68[7]; /*0x10027d005*/
        v13[10] = v15; /*0x10027d009*/
        v13[11] = v68[9]; /*0x10027d011*/
        v13[1] = 0; /*0x10027d015*/
        *v13 = 11; /*0x10027d01d*/
        v16 = v61; /*0x10027d024*/
        v17 = v61; /*0x10027d02b*/
        do /*0x10027d042*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v17); /*0x10027d033*/
          v17 += 232; /*0x10027d038*/
          --v10; /*0x10027d03f*/
        }
        while ( v10 ); /*0x10027d042*/
        if ( v60 ) /*0x10027d04e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 232 * v60, 8); /*0x10027d05f*/
        v18 = v64; /*0x10027d064*/
        v19 = (_QWORD *)(v64 + 8); /*0x10027d06b*/
        do /*0x10027d087*/
        {
          v20 = *(v19 - 1); /*0x10027d08d*/
          if ( v20 ) /*0x10027d095*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v19, v20, 1); /*0x10027d0a0*/
          v19 += 3; /*0x10027d080*/
          --v11; /*0x10027d084*/
        }
        while ( v11 ); /*0x10027d087*/
        if ( !v63 ) /*0x10027d393*/
          goto LABEL_32; /*0x10027d393*/
        v37 = 24 * v63; /*0x10027d399*/
        v38 = v18; /*0x10027d3a2*/
LABEL_31:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 8); /*0x10027d35f*/
LABEL_32:
        v22 = v69; /*0x10027d364*/
        goto LABEL_33; /*0x10027d364*/
      }
      v68[9] = v49[9]; /*0x10027d237*/
      v68[8] = v49[8]; /*0x10027d249*/
      v68[7] = v49[7]; /*0x10027d24d*/
      v30 = v50; /*0x10027d251*/
      v68[0] = v67[0]; /*0x10027d266*/
      v68[1] = v67[1]; /*0x10027d26a*/
      v68[2] = v67[2]; /*0x10027d275*/
      v68[3] = v67[3]; /*0x10027d280*/
      v68[4] = v67[4]; /*0x10027d28b*/
      v68[5] = v67[5]; /*0x10027d296*/
      v68[6] = v67[6]; /*0x10027d2a1*/
      v31 = v69; /*0x10027d2a5*/
      qmemcpy(v69 + 1, v68, 0x50u); /*0x10027d2b6*/
      *v31 = v12; /*0x10027d2b9*/
      v31[11] = v30; /*0x10027d2bc*/
      v28 = v61; /*0x10027d2c0*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, v41); /*0x10027d19e*/
      v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(157, 1); /*0x10027d1ad*/
      if ( !v25 ) /*0x10027d1b5*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 157); /*0x10027d3b1*/
      v26 = v25; /*0x10027d1bb*/
      memcpy(v25, &anon_b0ee9adff4519c22b647af231a5a39fa_171, 0x9Du); /*0x10027d1cd*/
      v27 = v69; /*0x10027d1d2*/
      *v69 = 10; /*0x10027d1d6*/
      v27[1] = 157; /*0x10027d1dd*/
      v27[2] = v26; /*0x10027d1e5*/
      v27[3] = 157; /*0x10027d1e9*/
      v28 = v61; /*0x10027d1f1*/
      if ( !v10 ) /*0x10027d1fb*/
        goto LABEL_22; /*0x10027d1fb*/
    }
    v32 = v28; /*0x10027d2c7*/
    do /*0x10027d2e2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v32); /*0x10027d2d3*/
      v32 += 232; /*0x10027d2d8*/
      --v10; /*0x10027d2df*/
    }
    while ( v10 ); /*0x10027d2e2*/
LABEL_22:
    if ( v60 ) /*0x10027d2ee*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 232 * v60, 8); /*0x10027d2ff*/
    v33 = v64; /*0x10027d304*/
    v34 = v65; /*0x10027d30b*/
    if ( v65 ) /*0x10027d315*/
    {
      v35 = (_QWORD *)(v64 + 8); /*0x10027d317*/
      do /*0x10027d327*/
      {
        v36 = *(v35 - 1); /*0x10027d329*/
        if ( v36 ) /*0x10027d331*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v35, v36, 1); /*0x10027d33c*/
        v35 += 3; /*0x10027d320*/
        --v34; /*0x10027d324*/
      }
      while ( v34 ); /*0x10027d327*/
    }
    if ( !v63 ) /*0x10027d34d*/
      goto LABEL_32; /*0x10027d34d*/
    v37 = 24 * v63; /*0x10027d353*/
    v38 = v33; /*0x10027d35c*/
    goto LABEL_31; /*0x10027d35c*/
  }
  codexmate_lib::core::relay::manager::RelayManager::reconcile_native_off_after_stop::h8a1470d90b34391b( /*0x10027d0d6*/
    &v48,
    a2,
    a3,
    (__int64)v41,
    a4,
    a5,
    0,
    a6,
    0,
    v40);
  v21 = v48; /*0x10027d0db*/
  qmemcpy(v67, v49, sizeof(v67)); /*0x10027d0f5*/
  if ( v48 == 11 ) /*0x10027d0fc*/
  {
    qmemcpy(v46, v67, sizeof(v46)); /*0x10027d115*/
    v22 = v69; /*0x10027d11f*/
    v69[8] = v46[6]; /*0x10027d123*/
    v22[7] = v46[5]; /*0x10027d12e*/
    v22[6] = v46[4]; /*0x10027d139*/
    v22[5] = v46[3]; /*0x10027d144*/
    v22[4] = v46[2]; /*0x10027d14f*/
    v23 = v46[0]; /*0x10027d153*/
    v22[3] = v46[1]; /*0x10027d161*/
    v22[2] = v23; /*0x10027d165*/
    v24 = v46[7]; /*0x10027d169*/
    v22[10] = v46[8]; /*0x10027d177*/
    v22[11] = v46[9]; /*0x10027d182*/
    v22[9] = v24; /*0x10027d186*/
    v22[1] = 1; /*0x10027d18a*/
    *v22 = 11; /*0x10027d192*/
  }
  else
  {
    v29 = v50; /*0x10027d206*/
    v22 = v69; /*0x10027d20d*/
    qmemcpy(v69 + 1, v67, 0x50u); /*0x10027d221*/
    *v22 = v21; /*0x10027d224*/
    v22[11] = v29; /*0x10027d227*/
  }
LABEL_33:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v41); /*0x10027d368*/
  return v22; /*0x10027d377*/
}