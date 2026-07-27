// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a4b90 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h55ea7778f499d8db(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // r14
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-7C8h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-660h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-458h] BYREF
  _QWORD v17[50]; // [rsp+508h] [rbp-2C8h] BYREF
  _QWORD v18[14]; // [rsp+698h] [rbp-138h] BYREF
  _QWORD v19[14]; // [rsp+708h] [rbp-C8h] BYREF
  _QWORD v20[3]; // [rsp+778h] [rbp-58h] BYREF
  __int64 v21; // [rsp+790h] [rbp-40h] BYREF
  __int64 v22; // [rsp+798h] [rbp-38h]
  __int64 v23; // [rsp+7A0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a4bb9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009a4bd4*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a4be0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a4be4*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a4bf2*/
  v21 = v2; /*0x1009a4bf6*/
  v17[6] = 0; /*0x1009a4bfa*/
  v17[0] = "rebuild_registryforce_kill_codexget_image_compatset_image_compatload_relay_stateget_relay_activeholdModifierM" /*0x1009a4c0c*/
           "askPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister";
  v17[1] = 16; /*0x1009a4c13*/
  v17[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a4c25*/
  v17[3] = 4; /*0x1009a4c2c*/
  v17[4] = __dst; /*0x1009a4c37*/
  v17[5] = &v21; /*0x1009a4c42*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009a4c57*/
  if ( !v3 ) /*0x1009a4c69*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a4c80*/
      v19,
      v17,
      &v17[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009a4c8c*/
    {
      v17[4] = v19[3]; /*0x1009a4d46*/
      v17[3] = v19[2]; /*0x1009a4d54*/
      v17[2] = v19[1]; /*0x1009a4d69*/
      v17[1] = v19[0]; /*0x1009a4d70*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009a4d89*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a4d9c*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009a4da3*/
      v20[1] = v10; /*0x1009a4da7*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009a4db2*/
      v17[0] = 1; /*0x1009a4dc4*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a4de0*/
        v14,
        v16[48],
        v17,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009a4de5*/
    }
    v3 = (__int64 *)v19[1]; /*0x1009a4c92*/
  }
  codexmate_lib::commands::system::rebuild_registry::h5cca334a5a752c9d(v18, v3); /*0x1009a4ca3*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a4cb7*/
  if ( v18[0] == 0x8000000000000000LL ) /*0x1009a4cc3*/
  {
    v4 = v18[1]; /*0x1009a4cc5*/
    v5 = (const void *)v18[2]; /*0x1009a4ccc*/
    v6 = v18[3]; /*0x1009a4cd3*/
    if ( v18[3] < 0LL ) /*0x1009a4cdd*/
    {
      v7 = 0; /*0x1009a4cdf*/
      goto LABEL_7; /*0x1009a4cdf*/
    }
    if ( v18[3] ) /*0x1009a4d0a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a4d10*/
      v7 = 1; /*0x1009a4d15*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a4d23*/
      if ( !v8 ) /*0x1009a4d2b*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a4ce2*/
      v9 = v8; /*0x1009a4d2d*/
    }
    else
    {
      v9 = 1; /*0x1009a4de7*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009a4df6*/
    if ( v4 ) /*0x1009a4dfe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009a4e0b*/
    LOBYTE(v19[1]) = 3; /*0x1009a4e10*/
    v19[2] = v6; /*0x1009a4e17*/
    v19[3] = v9; /*0x1009a4e1e*/
    v19[4] = v6; /*0x1009a4e25*/
    v19[0] = 0x8000000000000000LL; /*0x1009a4e2c*/
  }
  else
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x1009a4d02*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hee45c0935de195ea(v17); /*0x1009a4e41*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009a4e4a*/
  {
    v11 = v22; /*0x1009a4e4c*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a4e54*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009a4e6d*/
      v11 += 96; /*0x1009a4e72*/
    }
    if ( v21 ) /*0x1009a4e7e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a4e91*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a4ea2*/
}