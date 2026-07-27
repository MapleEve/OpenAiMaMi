// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b4d30 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf8545171ba55ebc3(
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
  _BYTE v14[360]; // [rsp+8h] [rbp-FC8h] BYREF
  _QWORD __srca[142]; // [rsp+170h] [rbp-E60h] BYREF
  _QWORD __dst[65]; // [rsp+5E0h] [rbp-9F0h] BYREF
  _QWORD v17[50]; // [rsp+7E8h] [rbp-7E8h] BYREF
  _QWORD v18[142]; // [rsp+978h] [rbp-658h] BYREF
  _QWORD v19[50]; // [rsp+DE8h] [rbp-1E8h] BYREF
  _QWORD v20[3]; // [rsp+F78h] [rbp-58h] BYREF
  __int64 v21; // [rsp+F90h] [rbp-40h] BYREF
  __int64 v22; // [rsp+F98h] [rbp-38h]
  __int64 v23; // [rsp+FA0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b4d59*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b4d74*/
  v23 = *((_QWORD *)__src + 117); /*0x1009b4d80*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b4d84*/
  v22 = *((_QWORD *)__src + 116); /*0x1009b4d92*/
  v21 = v2; /*0x1009b4d96*/
  v18[6] = 0; /*0x1009b4d9a*/
  v18[0] = "load_bootstrap_stateload_pending_auto_switchdismiss_pending_auto_switch"; /*0x1009b4dac*/
  v18[1] = 20; /*0x1009b4db3*/
  v18[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009b4dc5*/
  v18[3] = 4; /*0x1009b4dcc*/
  v18[4] = __dst; /*0x1009b4dd7*/
  v18[5] = &v21; /*0x1009b4de2*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009b4df7*/
  if ( !v3 ) /*0x1009b4dff*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009b4e16*/
      v19,
      v18,
      &v18[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009b4e22*/
    {
      v18[4] = v19[3]; /*0x1009b4ed4*/
      v18[3] = v19[2]; /*0x1009b4ee2*/
      v18[2] = v19[1]; /*0x1009b4ef7*/
      v18[1] = v19[0]; /*0x1009b4efe*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009b4f17*/
      v10 = *((_QWORD *)__src + 111); /*0x1009b4f2a*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009b4f31*/
      v20[1] = v10; /*0x1009b4f35*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009b4f40*/
      v18[0] = 1; /*0x1009b4f52*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b4f6e*/
        v14,
        v17[48],
        v18,
        v20,
        LODWORD(v17[49]),
        HIDWORD(v17[49]));
      goto LABEL_18; /*0x1009b4f73*/
    }
    v3 = (__int64 *)v19[1]; /*0x1009b4e28*/
  }
  codexmate_lib::commands::system::load_bootstrap_state::h133866e46475fbff((char *)__srca, v3); /*0x1009b4e39*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009b4e4d*/
  if ( LODWORD(__srca[0]) == 2 ) /*0x1009b4e59*/
  {
    v4 = __srca[1]; /*0x1009b4e5b*/
    v5 = (const void *)__srca[2]; /*0x1009b4e62*/
    v6 = __srca[3]; /*0x1009b4e69*/
    if ( __srca[3] < 0LL ) /*0x1009b4e73*/
    {
      v7 = 0; /*0x1009b4e75*/
      goto LABEL_7; /*0x1009b4e75*/
    }
    if ( __srca[3] ) /*0x1009b4ea2*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, __src + 520); /*0x1009b4ea8*/
      v7 = 1; /*0x1009b4ead*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009b4ebb*/
      if ( !v8 ) /*0x1009b4ec3*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009b4e78*/
      v9 = v8; /*0x1009b4ec5*/
    }
    else
    {
      v9 = 1; /*0x1009b4f75*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009b4f84*/
    if ( v4 ) /*0x1009b4f8c*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009b4f99*/
    LOBYTE(v18[1]) = 3; /*0x1009b4f9e*/
    v18[2] = v6; /*0x1009b4fa5*/
    v18[3] = v9; /*0x1009b4fac*/
    v18[4] = v6; /*0x1009b4fb3*/
    v18[0] = 2; /*0x1009b4fba*/
  }
  else
  {
    memcpy(v18, __srca, sizeof(v18)); /*0x1009b4e98*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h3cd6eccc3768e5cc(v19, v18); /*0x1009b4fd3*/
LABEL_18:
  if ( !__OFSUB__(0, v21) ) /*0x1009b4fde*/
  {
    v11 = v22; /*0x1009b4fe0*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009b4fe8*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009b4ffd*/
      v11 += 96; /*0x1009b5002*/
    }
    if ( v21 ) /*0x1009b500e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009b5021*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b5032*/
}