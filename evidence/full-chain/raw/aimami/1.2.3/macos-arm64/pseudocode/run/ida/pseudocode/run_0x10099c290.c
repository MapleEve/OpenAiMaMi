// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099c290 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h060248318f005985(
        char *__src,
        double a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  size_t v4; // r15
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  void *v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdi
  _BYTE v13[400]; // [rsp+0h] [rbp-610h] BYREF
  _BYTE __dst[520]; // [rsp+190h] [rbp-480h] BYREF
  _BYTE v15[400]; // [rsp+398h] [rbp-278h] BYREF
  _QWORD v16[10]; // [rsp+528h] [rbp-E8h] BYREF
  _QWORD v17[10]; // [rsp+578h] [rbp-98h] BYREF
  __int64 v18; // [rsp+5C8h] [rbp-48h]
  __int64 v19; // [rsp+5D0h] [rbp-40h]
  void *__srca; // [rsp+5D8h] [rbp-38h]
  __int64 v21; // [rsp+5E0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099c2b6*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x10099c2d1*/
  v21 = *((_QWORD *)__src + 115); /*0x10099c2dd*/
  v2 = *((_QWORD *)__src + 116); /*0x10099c2e1*/
  v3 = *((_QWORD *)__src + 117); /*0x10099c2e8*/
  codexmate_lib::platform::update::check_update_installability::h7d75525da3e76202((__int64)v16, (__int64)(__src + 520)); /*0x10099c2f6*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x10099c314*/
  if ( __OFSUB__(0, v16[0]) ) /*0x10099c31b*/
  {
    v4 = v16[3]; /*0x10099c332*/
    v19 = v16[1]; /*0x10099c33c*/
    __srca = (void *)v16[2]; /*0x10099c340*/
    if ( v16[3] < 0LL ) /*0x10099c344*/
    {
      v5 = 0; /*0x10099c346*/
      goto LABEL_4; /*0x10099c346*/
    }
    v18 = v2; /*0x10099c375*/
    if ( v16[3] ) /*0x10099c379*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, __src + 520); /*0x10099c37b*/
      v5 = 1; /*0x10099c380*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x10099c38e*/
      if ( !v7 ) /*0x10099c396*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x10099c349*/
      v8 = v7; /*0x10099c398*/
    }
    else
    {
      v8 = 1; /*0x10099c39d*/
    }
    v9 = __srca; /*0x10099c3a6*/
    memcpy((void *)v8, __srca, v4); /*0x10099c3b0*/
    if ( v19 ) /*0x10099c3bc*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v19, 1); /*0x10099c3c6*/
    LOBYTE(v17[1]) = 3; /*0x10099c3cb*/
    v17[2] = v4; /*0x10099c3d2*/
    v17[3] = v8; /*0x10099c3d9*/
    v17[4] = v4; /*0x10099c3dd*/
    v17[0] = 0x8000000000000000LL; /*0x10099c3eb*/
    v6 = v21; /*0x10099c3f2*/
    v2 = v18; /*0x10099c3f6*/
  }
  else
  {
    qmemcpy(v17, v16, sizeof(v17)); /*0x10099c369*/
    v6 = v21; /*0x10099c36c*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h5919795ad0fdd188(v15); /*0x10099c408*/
  if ( v6 != 0x8000000000000000LL ) /*0x10099c410*/
  {
    v10 = v3 + 1; /*0x10099c412*/
    v11 = v2; /*0x10099c415*/
    while ( v10 != 1 ) /*0x10099c424*/
    {
      --v10; /*0x10099c42a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x10099c42d*/
      v11 += 96; /*0x10099c432*/
    }
    if ( v6 ) /*0x10099c43a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 96 * v6, 8); /*0x10099c44c*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099c45d*/
}