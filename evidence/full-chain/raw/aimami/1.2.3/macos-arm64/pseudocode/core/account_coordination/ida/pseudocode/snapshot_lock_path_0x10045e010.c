// __ZN13codexmate_lib4core20account_coordination18snapshot_lock_path @ 0x10045e010
__int64 __fastcall codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  size_t v10; // rbx
  __int64 v11; // r15
  void *v12; // rax
  const void *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  char *v19; // r12
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v29; // [rsp+10h] [rbp-60h] BYREF
  __int64 v30; // [rsp+18h] [rbp-58h]
  __int64 v31; // [rsp+20h] [rbp-50h]
  __int64 v32; // [rsp+28h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-40h]
  __int64 v34; // [rsp+38h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-30h]

  v8 = std::path::Path::file_name::hf6c2daad91e50ebf(a2, a3); /*0x10045e030*/
  if ( v8 ) /*0x10045e038*/
  {
    v10 = v9; /*0x10045e03a*/
    if ( v9 < 0 ) /*0x10045e040*/
    {
      v11 = 0; /*0x10045e042*/
      goto LABEL_4; /*0x10045e042*/
    }
    v13 = (const void *)v8; /*0x10045e08c*/
    if ( v9 ) /*0x10045e08f*/
    {
      v35 = a1; /*0x10045e091*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x10045e095*/
      v11 = 1; /*0x10045e09a*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x10045e0a8*/
      if ( !v14 ) /*0x10045e0b0*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x10045e045*/
      v15 = v14; /*0x10045e0b2*/
      a1 = v35; /*0x10045e0b5*/
    }
    else
    {
      v15 = 1; /*0x10045e0bb*/
    }
    v35 = v15; /*0x10045e0c0*/
    memcpy((void *)v15, v13, v10); /*0x10045e0ca*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x10045e050*/
    v10 = 12; /*0x10045e055*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x10045e064*/
    if ( !v12 ) /*0x10045e06c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x10045e226*/
    qmemcpy(v12, "account.json", 12); /*0x10045e07c*/
    v35 = (__int64)v12; /*0x10045e07f*/
  }
  v16 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10045e0d5*/
  v18 = v17; /*0x10045e0da*/
  if ( !v16 ) /*0x10045e0e5*/
    v18 = 1; /*0x10045e0e5*/
  v19 = ".oauth-refresh.lock"; /*0x10045e0e9*/
  if ( v16 ) /*0x10045e0f0*/
    v19 = (char *)v16; /*0x10045e0f0*/
  std::sys::fs::canonicalize::h06efd38dcb2724a4(&v32, v19, v18); /*0x10045e0fe*/
  if ( __OFSUB__(0, v32) ) /*0x10045e105*/
  {
    v20 = a1; /*0x10045e10b*/
    v21 = v33; /*0x10045e10e*/
    std::path::Path::to_path_buf::h73855ce4b54f7174(&v29, v19, v18); /*0x10045e120*/
    if ( (v21 & 3) == 1 ) /*0x10045e12e*/
    {
      v22 = v21 - 1; /*0x10045e130*/
      v23 = *(_QWORD *)(v21 - 1); /*0x10045e134*/
      v24 = *(_QWORD *)(v21 + 7); /*0x10045e138*/
      if ( *(_QWORD *)v24 ) /*0x10045e13c*/
        (*(void (__fastcall **)(__int64))v24)(v23); /*0x10045e147*/
      v25 = *(_QWORD *)(v24 + 8); /*0x10045e149*/
      if ( v25 ) /*0x10045e150*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x10045e159*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24, 8); /*0x10045e16b*/
    }
    a1 = v20; /*0x10045e170*/
  }
  else
  {
    v31 = v34; /*0x10045e179*/
    v30 = v33; /*0x10045e185*/
    v29 = v32; /*0x10045e189*/
  }
  v26 = v30; /*0x10045e18d*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v32, v30, v31, v35, v10); /*0x10045e1a3*/
  if ( v10 ) /*0x10045e1ab*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v10, 1); /*0x10045e1b9*/
  v27 = v33; /*0x10045e1be*/
  std::path::Path::_with_extension::hcb726c8e846e50fc(a1, v33, v34, "oauth-refresh.lock", 18); /*0x10045e1d9*/
  if ( v32 ) /*0x10045e1e5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v32, 1); /*0x10045e1ef*/
  if ( v29 ) /*0x10045e1fb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v29, 1); /*0x10045e205*/
  return a1; /*0x10045e20d*/
}