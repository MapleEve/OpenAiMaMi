// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009aae90 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h98c07b0a1b33e388(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // r14
  void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-728h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-5C0h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-3B8h] BYREF
  _QWORD v17[50]; // [rsp+508h] [rbp-228h] BYREF
  _QWORD v18[3]; // [rsp+698h] [rbp-98h] BYREF
  int v19; // [rsp+6B0h] [rbp-80h] BYREF
  __int64 *v20; // [rsp+6B8h] [rbp-78h]
  void *__srca; // [rsp+6C0h] [rbp-70h]
  size_t __n; // [rsp+6C8h] [rbp-68h]
  __int64 v23; // [rsp+6D0h] [rbp-60h] BYREF
  __int64 *v24; // [rsp+6D8h] [rbp-58h]
  __int64 v25; // [rsp+6E0h] [rbp-50h]
  size_t v26; // [rsp+6E8h] [rbp-48h]
  __int64 v27; // [rsp+6F0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+6F8h] [rbp-38h]
  __int64 v29; // [rsp+700h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009aaeb9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x1009aaed4*/
  v29 = *((_QWORD *)__src + 117); /*0x1009aaee0*/
  v2 = *((_QWORD *)__src + 115); /*0x1009aaee4*/
  v28 = *((_QWORD *)__src + 116); /*0x1009aaef2*/
  v27 = v2; /*0x1009aaef6*/
  v17[6] = 0; /*0x1009aaefa*/
  v17[0] = "get_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info"; /*0x1009aaf0c*/
  v17[1] = 34; /*0x1009aaf13*/
  v17[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009aaf25*/
  v17[3] = 4; /*0x1009aaf2c*/
  v17[4] = __dst; /*0x1009aaf37*/
  v17[5] = &v27; /*0x1009aaf42*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009aaf57*/
  if ( !v3 ) /*0x1009aaf5f*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009aaf73*/
      &v23,
      v17,
      &v17[2]);
    if ( (_BYTE)v23 != 6 ) /*0x1009aaf7c*/
    {
      v17[4] = v26; /*0x1009ab020*/
      v17[3] = v25; /*0x1009ab02b*/
      v17[2] = v24; /*0x1009ab03a*/
      v17[1] = v23; /*0x1009ab041*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x1009ab05a*/
      v10 = *((_QWORD *)__src + 111); /*0x1009ab06d*/
      v18[0] = *((_QWORD *)__src + 110); /*0x1009ab074*/
      v18[1] = v10; /*0x1009ab07b*/
      v18[2] = *((_QWORD *)__src + 112); /*0x1009ab089*/
      v17[0] = 1; /*0x1009ab09e*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009ab0bd*/
        v14,
        v16[48],
        v17,
        v18,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x1009ab0c2*/
    }
    v3 = v24; /*0x1009aaf82*/
  }
  codexmate_lib::commands::system::get_or_create_remote_device_secret::h374c980ebcbce2e3((__int64)&v19, v3); /*0x1009aaf8d*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009aafa1*/
  if ( v19 == 1 ) /*0x1009aafaa*/
  {
    v4 = v20; /*0x1009aafac*/
    v5 = __srca; /*0x1009aafb0*/
    v6 = __n; /*0x1009aafb4*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009aafbb*/
    {
      v7 = 0; /*0x1009aafbd*/
      goto LABEL_7; /*0x1009aafbd*/
    }
    if ( __n ) /*0x1009aaff1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009aaff7*/
      v7 = 1; /*0x1009aaffc*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009ab00a*/
      if ( !v8 ) /*0x1009ab012*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009aafc0*/
      v9 = v8; /*0x1009ab014*/
    }
    else
    {
      v9 = 1; /*0x1009ab0c4*/
    }
    memcpy((void *)v9, v5, v6); /*0x1009ab0d3*/
    if ( v4 ) /*0x1009ab0db*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x1009ab0e8*/
    LOBYTE(v23) = 3; /*0x1009ab0ed*/
    v24 = (__int64 *)v6; /*0x1009ab0f1*/
    v25 = v9; /*0x1009ab0f5*/
    v26 = v6; /*0x1009ab0f9*/
  }
  else
  {
    v26 = __n; /*0x1009aafd5*/
    v25 = (__int64)__srca; /*0x1009aafe0*/
    v24 = v20; /*0x1009aafe4*/
    LOBYTE(v23) = 6; /*0x1009aafe8*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h95a2ba7235076756(v17); /*0x1009ab108*/
LABEL_18:
  if ( !__OFSUB__(0, v27) ) /*0x1009ab113*/
  {
    v11 = v28; /*0x1009ab115*/
    for ( i = v29 + 1; i != 1; --i ) /*0x1009ab11d*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009ab12d*/
      v11 += 96; /*0x1009ab132*/
    }
    if ( v27 ) /*0x1009ab13e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 96 * v27, 8); /*0x1009ab151*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ab162*/
}