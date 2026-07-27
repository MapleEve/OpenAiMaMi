// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ac9d0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::ha91e978b51144017(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // r14
  void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+0h] [rbp-720h] BYREF
  _QWORD __dst[65]; // [rsp+168h] [rbp-5B8h] BYREF
  _QWORD v16[50]; // [rsp+370h] [rbp-3B0h] BYREF
  _QWORD v17[50]; // [rsp+500h] [rbp-220h] BYREF
  _QWORD v18[3]; // [rsp+690h] [rbp-90h] BYREF
  __int64 v19; // [rsp+6A8h] [rbp-78h] BYREF
  void *__srca; // [rsp+6B0h] [rbp-70h]
  size_t __n; // [rsp+6B8h] [rbp-68h]
  __int64 v22; // [rsp+6C0h] [rbp-60h] BYREF
  __int64 *v23; // [rsp+6C8h] [rbp-58h]
  __int64 v24; // [rsp+6D0h] [rbp-50h]
  size_t v25; // [rsp+6D8h] [rbp-48h]
  __int64 v26; // [rsp+6E0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+6E8h] [rbp-38h]
  __int64 v28; // [rsp+6F0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ac9f9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009aca14*/
  v28 = *((_QWORD *)__src + 117); /*0x1009aca20*/
  v2 = *((_QWORD *)__src + 115); /*0x1009aca24*/
  v27 = *((_QWORD *)__src + 116); /*0x1009aca32*/
  v26 = v2; /*0x1009aca36*/
  v17[6] = 0; /*0x1009aca3a*/
  v17[0] = "get_hotspot_enabledset_hotspot_enabledfocus_main_windowhotspot_readyget_codex_router_auth_readinessupsert_relay_providerdelete_relay_provideractivate_relay_providerdeactivate_relay_providerset_relay_provider_networkreorder_relay_providerstest_relay_provider_streamtest_relay_draft_stream"; /*0x1009aca4c*/
  v17[1] = 19; /*0x1009aca53*/
  v17[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009aca65*/
  v17[3] = 4; /*0x1009aca6c*/
  v17[4] = __dst; /*0x1009aca77*/
  v17[5] = &v26; /*0x1009aca82*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009aca97*/
  if ( v3 ) /*0x1009acaa9*/
  {
LABEL_4:
    codexmate_lib::commands::hotspot::get_hotspot_enabled::h8e3704e0ef7761d3((__int64)&v19, v3); /*0x1009acad0*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1009acaeb*/
    v4 = v19; /*0x1009acaf0*/
    if ( v19 == 0x8000000000000000LL ) /*0x1009acaf7*/
    {
      BYTE1(v22) = (_BYTE)__srca; /*0x1009acafd*/
      LOBYTE(v22) = 6; /*0x1009acb00*/
LABEL_17:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hec5d67e463ed9f2c(v17); /*0x1009acc39*/
      goto LABEL_18; /*0x1009acc44*/
    }
    v5 = __srca; /*0x1009acb09*/
    v6 = __n; /*0x1009acb0d*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009acb14*/
    {
      v7 = 0; /*0x1009acb16*/
      goto LABEL_8; /*0x1009acb16*/
    }
    if ( __n ) /*0x1009acb26*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009acb2c*/
      v7 = 1; /*0x1009acb31*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009acb3f*/
      if ( !v8 ) /*0x1009acb47*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009acb19*/
      v9 = v8; /*0x1009acb49*/
    }
    else
    {
      v9 = 1; /*0x1009acc00*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009acc0f*/
    if ( v4 ) /*0x1009acc17*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009acc24*/
    LOBYTE(v22) = 3; /*0x1009acc29*/
    v23 = (__int64 *)v6; /*0x1009acc2d*/
    v24 = v9; /*0x1009acc31*/
    v25 = v6; /*0x1009acc35*/
    goto LABEL_17; /*0x1009acc35*/
  }
  _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009acabd*/
    &v22,
    v17,
    &v17[2]);
  if ( (_BYTE)v22 == 6 ) /*0x1009acac6*/
  {
    v3 = v23; /*0x1009acacc*/
    goto LABEL_4; /*0x1009acacc*/
  }
  v17[4] = v25; /*0x1009acb5f*/
  v17[3] = v24; /*0x1009acb6a*/
  v17[2] = v23; /*0x1009acb79*/
  v17[1] = v22; /*0x1009acb80*/
  memcpy(v14, __src + 520, sizeof(v14)); /*0x1009acb99*/
  v10 = *((_QWORD *)__src + 111); /*0x1009acbac*/
  v18[0] = *((_QWORD *)__src + 110); /*0x1009acbb3*/
  v18[1] = v10; /*0x1009acbba*/
  v18[2] = *((_QWORD *)__src + 112); /*0x1009acbc8*/
  v17[0] = 1; /*0x1009acbda*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009acbf9*/
    v14,
    v16[48],
    v17,
    v18,
    LODWORD(v16[49]),
    HIDWORD(v16[49]));
LABEL_18:
  if ( v26 != 0x8000000000000000LL ) /*0x1009acc4d*/
  {
    v11 = v27; /*0x1009acc4f*/
    for ( i = v28 + 1; i != 1; --i ) /*0x1009acc57*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009acc6d*/
      v11 += 96; /*0x1009acc72*/
    }
    if ( v26 ) /*0x1009acc7e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 96 * v26, 8); /*0x1009acc91*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009acca2*/
}