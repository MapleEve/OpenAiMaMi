// __ZN13codexmate_lib4core10repository10Repository21verify_account_switch @ 0x10073a420 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::repository::Repository::verify_account_switch::ha97efbae3a0cf78f(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        size_t a4)
{
  const void *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // r15
  char *v14; // rsi
  const void *v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  const void *v20; // r13
  int v21; // eax
  __int64 v22; // rax
  _QWORD v23[12]; // [rsp+8h] [rbp-118h] BYREF
  _QWORD v24[12]; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD v25[3]; // [rsp+C8h] [rbp-58h] BYREF
  _QWORD v26[2]; // [rsp+E0h] [rbp-40h] BYREF
  void *v27; // [rsp+F0h] [rbp-30h]

  v8 = (const void *)a2[28]; /*0x10073a440*/
  v9 = v24; /*0x10073a44e*/
  codexmate_lib::core::repository::Repository::load_registry::hdf28c221d6eb58f2(v24, v8, a2[29]); /*0x10073a455*/
  if ( LODWORD(v24[0]) != 11 ) /*0x10073a461*/
  {
    qmemcpy(v23, v24, sizeof(v23)); /*0x10073a50e*/
    v26[0] = v23; /*0x10073a511*/
    v26[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x10073a51c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017CB26E, v26); /*0x10073a52f*/
    v24[1] = v25[0]; /*0x10073a543*/
    v24[2] = v25[1]; /*0x10073a54a*/
    v24[3] = v25[2]; /*0x10073a555*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v23); /*0x10073a563*/
    qmemcpy(a1 + 1, &v24[1], 0x58u); /*0x10073a574*/
    *a1 = 10; /*0x10073a577*/
    return a1; /*0x10073a577*/
  }
  if ( !__OFSUB__(0, v24[4]) && v24[6] == a4 )
  {
    v9 = (_QWORD *)v24[5]; /*0x10073a482*/
    v8 = a3; /*0x10073a489*/
    if ( !memcmp((const void *)v24[5], a3, a4) )
    {
      v16 = (const void *)a2[4]; /*0x10073a593*/
      v17 = v23; /*0x10073a59b*/
      codexmate_lib::core::repository::Repository::live_account_identity::h3024e0f43e2bbcb7(v23, v16, a2[5]); /*0x10073a5a2*/
      v20 = (const void *)v23[0]; /*0x10073a5b1*/
      if ( v23[0] != 0x8000000000000000LL ) /*0x10073a5bb*/
      {
        v17 = (_QWORD *)v23[1]; /*0x10073a5bd*/
        if ( v23[2] == a4 ) /*0x10073a5cb*/
        {
          v27 = (void *)v23[1]; /*0x10073a5cd*/
          v16 = a3; /*0x10073a5d5*/
          v21 = memcmp((const void *)v23[1], a3, a4); /*0x10073a5db*/
          v17 = v27; /*0x10073a5e0*/
          if ( !v21 ) /*0x10073a5e6*/
          {
            if ( v20 ) /*0x10073a625*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v20, 1); /*0x10073a62f*/
            *a1 = 11; /*0x10073a634*/
            goto LABEL_8; /*0x10073a63b*/
          }
        }
        if ( v20 ) /*0x10073a5eb*/
        {
          v16 = v20; /*0x10073a5f2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v20, 1); /*0x10073a5f5*/
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v16, v18, v19); /*0x10073a5fa*/
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x10073a609*/
      if ( v22 )
      {
        v13 = (void *)v22; /*0x10073a613*/
        v14 = "SWITCH_AUTH_VERIFY_FAILED: auth.json identity does not match the requested accountSWITCH_REGISTRY_VERIFY_F"
              "AILED: active account does not match the requested account[AiMaMi][accounts] repairing non-switchable acti"
              "ve snapshot during registry recovery[AiMaMi][accounts] resolved duplicate account snapshots using credenti"
              "al generation and registry continuity";
        goto LABEL_7; /*0x10073a61d*/
      }
LABEL_21:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 82); /*0x10073a640*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v8, v10, v11); /*0x10073a49c*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(82, 1); /*0x10073a4ab*/
  if ( !v12 ) /*0x10073a4b3*/
    goto LABEL_21; /*0x10073a4b3*/
  v13 = (void *)v12; /*0x10073a4b9*/
  v14 = "SWITCH_REGISTRY_VERIFY_FAILED: active account does not match the requested account[AiMaMi][accounts] repairing non-switchable active snapshot during registry recovery[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity";
LABEL_7:
  memcpy(v13, v14, 0x52u); /*0x10073a4c3*/
  *a1 = 10; /*0x10073a4d0*/
  a1[1] = 82; /*0x10073a4d7*/
  a1[2] = v13; /*0x10073a4df*/
  a1[3] = 82; /*0x10073a4e3*/
LABEL_8:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::ha96ba23e9c410a0d(&v24[1]); /*0x10073a4eb*/
  return a1; /*0x10073a581*/
}