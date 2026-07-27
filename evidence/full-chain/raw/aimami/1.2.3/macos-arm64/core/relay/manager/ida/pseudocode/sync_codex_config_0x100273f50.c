// __ZN13codexmate_lib4core5relay7manager12RelayManager17sync_codex_config @ 0x100273f50 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::sync_codex_config::haffd47a484d4cdfa(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *result; // rax
  _BYTE v14[8]; // [rsp+0h] [rbp-240h] BYREF
  __int64 v15; // [rsp+8h] [rbp-238h]
  __int64 v16; // [rsp+10h] [rbp-230h]
  char v17; // [rsp+124h] [rbp-11Ch]
  _DWORD v18[24]; // [rsp+128h] [rbp-118h] BYREF
  _QWORD v19[6]; // [rsp+188h] [rbp-B8h] BYREF
  char v20; // [rsp+1B8h] [rbp-88h]
  __int64 v21; // [rsp+1C0h] [rbp-80h] BYREF
  __int64 v22; // [rsp+1C8h] [rbp-78h]
  __int64 v23; // [rsp+1D0h] [rbp-70h]
  __int64 v24; // [rsp+1D8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+1E0h] [rbp-60h]
  __int64 v26; // [rsp+1E8h] [rbp-58h]
  __int64 v27; // [rsp+1F0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+1F8h] [rbp-48h]
  __int64 v29; // [rsp+200h] [rbp-40h]
  _QWORD *v30; // [rsp+208h] [rbp-38h]
  __int64 v31; // [rsp+210h] [rbp-30h]

  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v14, a2); /*0x100273f71*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h83c13dceed25a0ea( /*0x100273f8f*/
    &v27,
    v15,
    v15 + 232 * v16);
  codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(&v24, v14); /*0x100273f9f*/
  v30 = a1; /*0x100273fa4*/
  codexmate_lib::core::relay::manager::RelayManager::proxy_root_url::h0e74109fd00d63ed(&v21, a2); /*0x100273faf*/
  v2 = *a2 + 16LL; /*0x100273fb7*/
  v3 = v29; /*0x100273fbf*/
  v4 = v25; /*0x100273fc3*/
  v5 = v26; /*0x100273fc7*/
  v6 = v21; /*0x100273fcb*/
  v7 = v22; /*0x100273fcf*/
  v8 = 0; /*0x100273fd3*/
  if ( !__OFSUB__(-v21, 1) ) /*0x100273fdf*/
    v8 = v22; /*0x100273fdf*/
  v31 = v28; /*0x100273fea*/
  v19[0] = v28; /*0x100273fee*/
  v19[1] = v29; /*0x100273ff5*/
  v19[2] = v25; /*0x100273ffc*/
  v19[3] = v26; /*0x100274003*/
  v19[4] = v8; /*0x10027400a*/
  v19[5] = v23; /*0x100274011*/
  v20 = v17; /*0x100274018*/
  codexmate_lib::core::relay::codex_config_reconciler::reconcile::h1c034bae44515f5c(v18, v2, v19); /*0x10027402c*/
  if ( 2 * v6 ) /*0x100274031*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x100274050*/
    if ( !v5 ) /*0x100274058*/
      goto LABEL_11; /*0x100274058*/
  }
  else if ( !v5 ) /*0x100274041*/
  {
    goto LABEL_11; /*0x100274041*/
  }
  v9 = (_QWORD *)(v4 + 8); /*0x10027405a*/
  do /*0x100274067*/
  {
    v10 = *(v9 - 1); /*0x100274069*/
    if ( v10 ) /*0x100274071*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v9, v10, 1); /*0x10027407c*/
    v9 += 3; /*0x100274060*/
    --v5; /*0x100274064*/
  }
  while ( v5 ); /*0x100274067*/
LABEL_11:
  if ( v24 ) /*0x10027408a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24 * v24, 8); /*0x10027409c*/
  v11 = v31; /*0x1002740a4*/
  if ( v3 ) /*0x1002740a8*/
  {
    v12 = v31; /*0x1002740aa*/
    do /*0x1002740c2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(v12); /*0x1002740b3*/
      v12 += 232; /*0x1002740b8*/
      --v3; /*0x1002740bf*/
    }
    while ( v3 ); /*0x1002740c2*/
  }
  if ( v27 ) /*0x1002740cb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 232 * v27, 8); /*0x1002740dc*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v14); /*0x1002740e8*/
  result = v30; /*0x1002740f4*/
  if ( v18[0] == 11 ) /*0x1002740f8*/
    *v30 = 11; /*0x1002740fa*/
  else
    qmemcpy(v30, v18, 0x60u); /*0x100274112*/
  return result; /*0x100274115*/
}