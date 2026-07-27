// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099c910 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1153927551ed0888(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rcx
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+8h] [rbp-738h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-5D0h] BYREF
  _QWORD v15[50]; // [rsp+378h] [rbp-3C8h] BYREF
  _QWORD v16[50]; // [rsp+508h] [rbp-238h] BYREF
  _QWORD v17[3]; // [rsp+698h] [rbp-A8h] BYREF
  __int64 v18[3]; // [rsp+6B0h] [rbp-90h] BYREF
  _QWORD v19[2]; // [rsp+6C8h] [rbp-78h] BYREF
  size_t __n; // [rsp+6D8h] [rbp-68h]
  __int64 v21; // [rsp+6E0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+6E8h] [rbp-58h]
  __int64 v23; // [rsp+6F0h] [rbp-50h]
  __int64 v24; // [rsp+6F8h] [rbp-48h]
  __int64 v25; // [rsp+700h] [rbp-40h] BYREF
  __int64 v26; // [rsp+708h] [rbp-38h]
  __int64 v27; // [rsp+710h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099c939*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x10099c954*/
  v27 = *((_QWORD *)__src + 117); /*0x10099c960*/
  v2 = *((_QWORD *)__src + 115); /*0x10099c964*/
  v26 = *((_QWORD *)__src + 116); /*0x10099c972*/
  v25 = v2; /*0x10099c976*/
  v16[6] = 0; /*0x10099c97a*/
  v16[0] = "open_pathget_device_idget_or_create_remote_device_secretimport_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info"; /*0x10099c98c*/
  v16[1] = 9; /*0x10099c993*/
  v16[2] = "pathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099c9a5*/
  v16[3] = 4; /*0x10099c9ac*/
  v16[4] = __dst; /*0x10099c9b7*/
  v16[5] = &v25; /*0x10099c9c2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v21, v16); /*0x10099c9d7*/
  if ( (_BYTE)v21 == 6 ) /*0x10099c9ea*/
  {
    v18[2] = v24; /*0x10099c9f0*/
    v18[1] = v23; /*0x10099c9fc*/
    v18[0] = v22; /*0x10099ca03*/
    codexmate_lib::commands::system::open_path::h987a265cbb3bd987((__int64)v19, v18); /*0x10099ca15*/
    memcpy(v16, __src + 520, sizeof(v16)); /*0x10099ca29*/
    v3 = v19[0]; /*0x10099ca2e*/
    if ( v19[0] == 0x8000000000000000LL ) /*0x10099ca35*/
    {
      LOBYTE(v21) = 6; /*0x10099ca3b*/
LABEL_15:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(v16); /*0x10099cb73*/
      goto LABEL_16; /*0x10099cb7e*/
    }
    v5 = (const void *)v19[1]; /*0x10099caef*/
    v6 = __n; /*0x10099caf3*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x10099cafa*/
    {
      v7 = 0; /*0x10099cafc*/
      goto LABEL_7; /*0x10099cafc*/
    }
    if ( __n ) /*0x10099cb0c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, __src + 520); /*0x10099cb0e*/
      v7 = 1; /*0x10099cb13*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x10099cb21*/
      if ( !v8 ) /*0x10099cb29*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x10099caff*/
      v9 = v8; /*0x10099cb2b*/
    }
    else
    {
      v9 = 1; /*0x10099cb3a*/
    }
    memcpy((void *)v9, v5, v6); /*0x10099cb49*/
    if ( v3 ) /*0x10099cb51*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v3, 1); /*0x10099cb5e*/
    LOBYTE(v21) = 3; /*0x10099cb63*/
    v22 = v6; /*0x10099cb67*/
    v23 = v9; /*0x10099cb6b*/
    v24 = v6; /*0x10099cb6f*/
    goto LABEL_15; /*0x10099cb6f*/
  }
  v16[4] = v24; /*0x10099ca48*/
  v16[3] = v23; /*0x10099ca53*/
  v16[2] = v22; /*0x10099ca62*/
  v16[1] = v21; /*0x10099ca69*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x10099ca82*/
  v4 = *((_QWORD *)__src + 111); /*0x10099ca95*/
  v17[0] = *((_QWORD *)__src + 110); /*0x10099ca9c*/
  v17[1] = v4; /*0x10099caa3*/
  v17[2] = *((_QWORD *)__src + 112); /*0x10099cab1*/
  v16[0] = 1; /*0x10099cac6*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099cae5*/
    v13,
    v15[48],
    v16,
    v17,
    LODWORD(v15[49]),
    HIDWORD(v15[49]));
LABEL_16:
  if ( v25 != 0x8000000000000000LL ) /*0x10099cb87*/
  {
    v10 = v26; /*0x10099cb89*/
    for ( i = v27 + 1; i != 1; --i ) /*0x10099cb91*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v10); /*0x10099cbad*/
      v10 += 96; /*0x10099cbb2*/
    }
    if ( v25 ) /*0x10099cbbe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 96 * v25, 8); /*0x10099cbd1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099cbe2*/
}