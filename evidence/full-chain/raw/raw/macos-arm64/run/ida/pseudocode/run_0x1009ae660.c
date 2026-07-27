// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ae660 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb783d06ee3cfb2f5(
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
  _BYTE v14[360]; // [rsp+8h] [rbp-7A8h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-640h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-438h] BYREF
  _QWORD v17[50]; // [rsp+508h] [rbp-2A8h] BYREF
  _QWORD v18[12]; // [rsp+698h] [rbp-118h] BYREF
  _QWORD v19[12]; // [rsp+6F8h] [rbp-B8h] BYREF
  _QWORD v20[3]; // [rsp+758h] [rbp-58h] BYREF
  __int64 v21; // [rsp+770h] [rbp-40h] BYREF
  __int64 v22; // [rsp+778h] [rbp-38h]
  __int64 v23; // [rsp+780h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ae689*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009ae6a4*/
  v23 = *((_QWORD *)__src + 117); /*0x1009ae6b0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009ae6b4*/
  v22 = *((_QWORD *)__src + 116); /*0x1009ae6c2*/
  v21 = v2; /*0x1009ae6c6*/
  v17[6] = 0; /*0x1009ae6ca*/
  v17[0] = "cleanset_auto_switchconfigure_auto_switchset_api_proxy_configtest_api_proxy_configdetect_api_proxy_configget_" /*0x1009ae6dc*/
           "usage_refresh_intervalset_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update";
  v17[1] = 5; /*0x1009ae6e3*/
  v17[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009ae6f5*/
  v17[3] = 4; /*0x1009ae6fc*/
  v17[4] = __dst; /*0x1009ae707*/
  v17[5] = &v21; /*0x1009ae712*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009ae727*/
  if ( !v3 ) /*0x1009ae739*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009ae750*/
      v19,
      v17,
      &v17[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x1009ae75c*/
    {
      v17[4] = v19[3]; /*0x1009ae816*/
      v17[3] = v19[2]; /*0x1009ae824*/
      v17[2] = v19[1]; /*0x1009ae839*/
      v17[1] = v19[0]; /*0x1009ae840*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009ae859*/
      v10 = *((_QWORD *)__src + 111); /*0x1009ae86c*/
      v20[0] = *((_QWORD *)__src + 110); /*0x1009ae873*/
      v20[1] = v10; /*0x1009ae877*/
      v20[2] = *((_QWORD *)__src + 112); /*0x1009ae882*/
      v17[0] = 1; /*0x1009ae894*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ae8b0*/
        v14,
        v16[48],
        v17,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009ae8b5*/
    }
    v3 = (__int64 *)v19[1]; /*0x1009ae762*/
  }
  codexmate_lib::commands::system::clean::h6320031e03e410b2(v18, v3); /*0x1009ae773*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009ae787*/
  if ( v18[0] == 0x8000000000000000LL ) /*0x1009ae793*/
  {
    v4 = v18[1]; /*0x1009ae795*/
    v5 = (const void *)v18[2]; /*0x1009ae79c*/
    v6 = v18[3]; /*0x1009ae7a3*/
    if ( v18[3] < 0LL ) /*0x1009ae7ad*/
    {
      v7 = 0; /*0x1009ae7af*/
      goto LABEL_7; /*0x1009ae7af*/
    }
    if ( v18[3] ) /*0x1009ae7da*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009ae7e0*/
      v7 = 1; /*0x1009ae7e5*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009ae7f3*/
      if ( !v8 ) /*0x1009ae7fb*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009ae7b2*/
      v9 = v8; /*0x1009ae7fd*/
    }
    else
    {
      v9 = 1; /*0x1009ae8b7*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009ae8c6*/
    if ( v4 ) /*0x1009ae8ce*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009ae8db*/
    LOBYTE(v19[1]) = 3; /*0x1009ae8e0*/
    v19[2] = v6; /*0x1009ae8e7*/
    v19[3] = v9; /*0x1009ae8ee*/
    v19[4] = v6; /*0x1009ae8f5*/
    v19[0] = 0x8000000000000000LL; /*0x1009ae8fc*/
  }
  else
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x1009ae7d2*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h69701a8f8f7ef126(v17); /*0x1009ae911*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x1009ae91a*/
  {
    v11 = v22; /*0x1009ae91c*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009ae924*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009ae93d*/
      v11 += 96; /*0x1009ae942*/
    }
    if ( v21 ) /*0x1009ae94e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009ae961*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ae972*/
}