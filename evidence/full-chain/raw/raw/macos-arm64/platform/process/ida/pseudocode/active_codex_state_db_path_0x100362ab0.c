// __ZN13codexmate_lib8platform7process26active_codex_state_db_path @ 0x100362ab0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::platform::process::active_codex_state_db_path::h818f4f52b19d1134(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // r15
  __int64 v12; // rsi
  _QWORD *v13; // r15
  __int64 v14; // rsi
  unsigned __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // r12
  _QWORD v18[2]; // [rsp+0h] [rbp-F0h] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-E0h]
  __int64 v20; // [rsp+18h] [rbp-D8h]
  __int64 v21; // [rsp+20h] [rbp-D0h]
  __int64 *v22; // [rsp+28h] [rbp-C8h] BYREF
  char *v23; // [rsp+30h] [rbp-C0h]
  __int64 v24; // [rsp+38h] [rbp-B8h]
  __int64 v25; // [rsp+40h] [rbp-B0h]
  const char *v26; // [rsp+48h] [rbp-A8h]
  __int64 v27; // [rsp+50h] [rbp-A0h]
  __int64 v28; // [rsp+58h] [rbp-98h]
  char *v29; // [rsp+60h] [rbp-90h]
  __int64 v30; // [rsp+68h] [rbp-88h]
  __int64 v31; // [rsp+70h] [rbp-80h]
  void *v32; // [rsp+78h] [rbp-78h]
  _QWORD *v33; // [rsp+80h] [rbp-70h]
  __int64 v34; // [rsp+88h] [rbp-68h]
  __int64 v35; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 *v36; // [rsp+98h] [rbp-58h]
  unsigned __int64 v37; // [rsp+A0h] [rbp-50h]
  _QWORD *v38; // [rsp+A8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-40h]
  __int64 v40; // [rsp+B8h] [rbp-38h] BYREF
  _BYTE v41[41]; // [rsp+C7h] [rbp-29h] BYREF

  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7d9099dd5089d20b( /*0x100362ad3*/
    &v35,
    a2,
    a2 + 24 * a3);
  v3 = v37; /*0x100362ad8*/
  if ( v37 >= 2 ) /*0x100362ae0*/
  {
    v15 = v36; /*0x100362db5*/
    if ( v37 >= 0x15 ) /*0x100362dbd*/
    {
      core::slice::sort::stable::driftsort_main::h98ec17c2c396a2d3(v36, v37, v41); /*0x100362dee*/
    }
    else
    {
      v16 = 24 * v37; /*0x100362dc3*/
      v17 = 24; /*0x100362dc7*/
      do /*0x100362de0*/
      {
        v3 = (unsigned __int64)&v15[(unsigned __int64)v17 / 8]; /*0x100362dcd*/
        core::slice::sort::shared::smallsort::insert_tail::h02e919025eafbda0(v15, &v15[(unsigned __int64)v17 / 8]); /*0x100362dd4*/
        v17 += 24; /*0x100362dd9*/
      }
      while ( v16 != v17 ); /*0x100362de0*/
    }
  }
  alloc::vec::Vec$LT$T$C$A$GT$::dedup_by::h4f38dd315a2592af(&v35); /*0x100362aea*/
  v4 = v37; /*0x100362aef*/
  if ( v37 == 1 ) /*0x100362af7*/
  {
    v5 = v36; /*0x100362b0e*/
    a1[2] = v36[2]; /*0x100362b16*/
    v6 = *v5; /*0x100362b1a*/
    a1[1] = v5[1]; /*0x100362b21*/
    goto LABEL_6; /*0x100362b21*/
  }
  if ( !v37 ) /*0x100362afc*/
  {
    v5 = v36; /*0x100362afe*/
    v6 = 0x8000000000000000LL; /*0x100362b02*/
LABEL_6:
    *a1 = v6; /*0x100362b25*/
    goto LABEL_7; /*0x100362b25*/
  }
  v5 = v36; /*0x100362b65*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 1u ) /*0x100362b6d*/
  {
    *a1 = 0x8000000000000000LL; /*0x100362d4b*/
LABEL_23:
    v13 = v5 + 1; /*0x100362d88*/
    do /*0x100362d97*/
    {
      v14 = *(v13 - 1); /*0x100362d9d*/
      if ( v14 ) /*0x100362da4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x100362dae*/
      v13 += 3; /*0x100362d90*/
      --v4; /*0x100362d94*/
    }
    while ( v4 ); /*0x100362d97*/
    goto LABEL_7; /*0x100362d97*/
  }
  v8 = 3 * v37; /*0x100362b7b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v35, v3); /*0x100362b7f*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24 * v4, 8); /*0x100362b8c*/
  if ( !v9 ) /*0x100362b94*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 24 * v4); /*0x100362e00*/
  v38 = (_QWORD *)v4; /*0x100362b9d*/
  v39 = v9; /*0x100362ba1*/
  v40 = 0; /*0x100362ba9*/
  v24 = v9; /*0x100362bb1*/
  v22 = &v40; /*0x100362bb8*/
  v23 = nullptr; /*0x100362bbf*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hd9704d67be879d9c( /*0x100362bd7*/
    v5,
    &v5[v8],
    &v22);
  v19 = v38; /*0x100362be4*/
  v20 = v39; /*0x100362beb*/
  v10 = v40; /*0x100362bf2*/
  v21 = v40; /*0x100362bf6*/
  v34 = v39; /*0x100362c11*/
  alloc::str::join_generic_copy::heca7a5e86402c6b6(&v22, v39, v40, " | ps-ocodexmate_lib::platform::process", 3); /*0x100362c18*/
  v40 = v24; /*0x100362c24*/
  v39 = (__int64)v23; /*0x100362c36*/
  v38 = v22; /*0x100362c3a*/
  v18[0] = &v38; /*0x100362c42*/
  v18[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100362c50*/
  v28 = 2; /*0x100362c57*/
  v29 = "codexmate_lib::platform::process"; /*0x100362c69*/
  v30 = 32; /*0x100362c70*/
  v32 = &unk_1017BD133; /*0x100362c82*/
  v33 = v18; /*0x100362c8d*/
  v22 = nullptr; /*0x100362c91*/
  v23 = "codexmate_lib::platform::process"; /*0x100362c9c*/
  v24 = 32; /*0x100362ca3*/
  v25 = 0; /*0x100362cae*/
  v26 = "src/platform/process.rs"; /*0x100362cc0*/
  v27 = 23; /*0x100362cc7*/
  v31 = 0x3E600000001LL; /*0x100362cdc*/
  _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v41, &v22); /*0x100362ceb*/
  if ( v38 ) /*0x100362cf7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1); /*0x100362d02*/
  if ( v10 ) /*0x100362d0a*/
  {
    v11 = (_QWORD *)(v34 + 8); /*0x100362d10*/
    do /*0x100362d27*/
    {
      v12 = *(v11 - 1); /*0x100362d29*/
      if ( v12 ) /*0x100362d30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1); /*0x100362d3a*/
      v11 += 3; /*0x100362d20*/
      --v10; /*0x100362d24*/
    }
    while ( v10 ); /*0x100362d27*/
  }
  if ( v19 ) /*0x100362d5a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 24LL * (_QWORD)v19, 8); /*0x100362d6d*/
  *a1 = 0x8000000000000000LL; /*0x100362d7c*/
  if ( v4 ) /*0x100362d82*/
    goto LABEL_23; /*0x100362d82*/
LABEL_7:
  if ( v35 ) /*0x100362b2f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24 * v35, 8); /*0x100362b41*/
  return a1; /*0x100362b49*/
}