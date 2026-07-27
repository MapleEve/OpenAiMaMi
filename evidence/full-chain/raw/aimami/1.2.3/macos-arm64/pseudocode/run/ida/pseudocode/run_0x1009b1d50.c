// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b1d50 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc1ea7e752371d179(
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
  _BYTE v14[360]; // [rsp+8h] [rbp-C98h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-B30h] BYREF
  _QWORD __srca[91]; // [rsp+378h] [rbp-928h] BYREF
  _QWORD v17[50]; // [rsp+650h] [rbp-650h] BYREF
  _QWORD v18[50]; // [rsp+7E0h] [rbp-4C0h] BYREF
  _QWORD v19[91]; // [rsp+970h] [rbp-330h] BYREF
  _QWORD v20[3]; // [rsp+C48h] [rbp-58h] BYREF
  __int64 v21; // [rsp+C60h] [rbp-40h] BYREF
  __int64 v22; // [rsp+C68h] [rbp-38h]
  __int64 v23; // [rsp+C70h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b1d79*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b1d94*/
  v23 = *((_QWORD *)__src + 117); /*0x1009b1da0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b1da4*/
  v22 = *((_QWORD *)__src + 116); /*0x1009b1db2*/
  v21 = v2; /*0x1009b1db6*/
  v19[6] = 0; /*0x1009b1dba*/
  v19[0] = "load_pending_auto_switchdismiss_pending_auto_switch"; /*0x1009b1dcc*/
  v19[1] = 24; /*0x1009b1dd3*/
  v19[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009b1de5*/
  v19[3] = 4; /*0x1009b1dec*/
  v19[4] = __dst; /*0x1009b1df7*/
  v19[5] = &v21; /*0x1009b1e02*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009b1e17*/
  if ( !v3 ) /*0x1009b1e1f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009b1e36*/
      v18,
      v19,
      &v19[2]);
    if ( LOBYTE(v18[0]) != 6 ) /*0x1009b1e42*/
    {
      v19[4] = v18[3]; /*0x1009b1ef4*/
      v19[3] = v18[2]; /*0x1009b1f02*/
      v19[2] = v18[1]; /*0x1009b1f17*/
      v19[1] = v18[0]; /*0x1009b1f1e*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009b1f37*/
      v10 = *((_QWORD *)__src + 111); /*0x1009b1f4a*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009b1f51*/
      v20[1] = v10; /*0x1009b1f55*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009b1f60*/
      v19[0] = 1; /*0x1009b1f72*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b1f8e*/
        v14,
        v17[48],
        v19,
        v20,
        LODWORD(v17[49]),
        HIDWORD(v17[49]));
      goto LABEL_18; /*0x1009b1f93*/
    }
    v3 = (__int64 *)v18[1]; /*0x1009b1e48*/
  }
  codexmate_lib::commands::system::load_pending_auto_switch::hcf7ef10873c61e68((char *)__srca, v3); /*0x1009b1e59*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009b1e6d*/
  if ( LODWORD(__srca[0]) == 3 ) /*0x1009b1e79*/
  {
    v4 = __srca[1]; /*0x1009b1e7b*/
    v5 = (const void *)__srca[2]; /*0x1009b1e82*/
    v6 = __srca[3]; /*0x1009b1e89*/
    if ( __srca[3] < 0LL ) /*0x1009b1e93*/
    {
      v7 = 0; /*0x1009b1e95*/
      goto LABEL_7; /*0x1009b1e95*/
    }
    if ( __srca[3] ) /*0x1009b1ec2*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, __src + 520); /*0x1009b1ec8*/
      v7 = 1; /*0x1009b1ecd*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009b1edb*/
      if ( !v8 ) /*0x1009b1ee3*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009b1e98*/
      v9 = v8; /*0x1009b1ee5*/
    }
    else
    {
      v9 = 1; /*0x1009b1f95*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009b1fa4*/
    if ( v4 ) /*0x1009b1fac*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009b1fb9*/
    LOBYTE(v19[1]) = 3; /*0x1009b1fbe*/
    v19[2] = v6; /*0x1009b1fc5*/
    v19[3] = v9; /*0x1009b1fcc*/
    v19[4] = v6; /*0x1009b1fd3*/
    v19[0] = 3; /*0x1009b1fda*/
  }
  else
  {
    memcpy(v19, __srca, sizeof(v19)); /*0x1009b1eb8*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcd05b2d6e11bbc92(v18, v19); /*0x1009b1ff3*/
LABEL_18:
  if ( !__OFSUB__(0, v21) ) /*0x1009b1ffe*/
  {
    v11 = v22; /*0x1009b2000*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009b2008*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009b201d*/
      v11 += 96; /*0x1009b2022*/
    }
    if ( v21 ) /*0x1009b202e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009b2041*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b2052*/
}