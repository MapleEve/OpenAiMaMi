// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ac200 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h9e44340bea33c43c(
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
  __int64 v16[10]; // [rsp+528h] [rbp-E8h] BYREF
  _QWORD v17[10]; // [rsp+578h] [rbp-98h] BYREF
  __int64 v18; // [rsp+5C8h] [rbp-48h]
  __int64 v19; // [rsp+5D0h] [rbp-40h]
  void *__srca; // [rsp+5D8h] [rbp-38h]
  __int64 v21; // [rsp+5E0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ac226*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x1009ac241*/
  v21 = *((_QWORD *)__src + 115); /*0x1009ac24d*/
  v2 = *((_QWORD *)__src + 116); /*0x1009ac251*/
  v3 = *((_QWORD *)__src + 117); /*0x1009ac258*/
  codexmate_lib::commands::system::get_image_compat::hc23a8087dfaf9e58(v16, a2); /*0x1009ac266*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009ac284*/
  if ( __OFSUB__(0, v16[0]) ) /*0x1009ac28b*/
  {
    v4 = v16[3]; /*0x1009ac2a2*/
    v19 = v16[1]; /*0x1009ac2ac*/
    __srca = (void *)v16[2]; /*0x1009ac2b0*/
    if ( v16[3] < 0 ) /*0x1009ac2b4*/
    {
      v5 = 0; /*0x1009ac2b6*/
      goto LABEL_4; /*0x1009ac2b6*/
    }
    v18 = v2; /*0x1009ac2e5*/
    if ( v16[3] ) /*0x1009ac2e9*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, __src + 520); /*0x1009ac2eb*/
      v5 = 1; /*0x1009ac2f0*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x1009ac2fe*/
      if ( !v7 ) /*0x1009ac306*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5, v4); /*0x1009ac2b9*/
      v8 = v7; /*0x1009ac308*/
    }
    else
    {
      v8 = 1; /*0x1009ac30d*/
    }
    v9 = __srca; /*0x1009ac316*/
    memcpy((void *)v8, __srca, v4); /*0x1009ac320*/
    if ( v19 ) /*0x1009ac32c*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v19, 1); /*0x1009ac336*/
    LOBYTE(v17[1]) = 3; /*0x1009ac33b*/
    v17[2] = v4; /*0x1009ac342*/
    v17[3] = v8; /*0x1009ac349*/
    v17[4] = v4; /*0x1009ac34d*/
    v17[0] = 0x8000000000000000LL; /*0x1009ac35b*/
    v6 = v21; /*0x1009ac362*/
    v2 = v18; /*0x1009ac366*/
  }
  else
  {
    qmemcpy(v17, v16, sizeof(v17)); /*0x1009ac2d9*/
    v6 = v21; /*0x1009ac2dc*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h2769c9ed096da6a4(v15); /*0x1009ac378*/
  if ( v6 != 0x8000000000000000LL ) /*0x1009ac380*/
  {
    v10 = v3 + 1; /*0x1009ac382*/
    v11 = v2; /*0x1009ac385*/
    while ( v10 != 1 ) /*0x1009ac394*/
    {
      --v10; /*0x1009ac39a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009ac39d*/
      v11 += 96; /*0x1009ac3a2*/
    }
    if ( v6 ) /*0x1009ac3aa*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, 96 * v6, 8); /*0x1009ac3bc*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ac3cd*/
}