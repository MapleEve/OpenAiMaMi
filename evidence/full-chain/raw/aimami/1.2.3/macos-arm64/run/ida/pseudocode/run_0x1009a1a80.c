// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a1a80 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h35b6e57c3478e05e(
        char *__src,
        double a2,
        double a3,
        double a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  size_t v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r14
  void *v11; // r13
  __int64 v12; // r12
  __int64 v13; // rdi
  _BYTE v15[400]; // [rsp+0h] [rbp-630h] BYREF
  _BYTE __dst[520]; // [rsp+190h] [rbp-4A0h] BYREF
  _BYTE v17[400]; // [rsp+398h] [rbp-298h] BYREF
  _QWORD v18[12]; // [rsp+528h] [rbp-108h] BYREF
  _QWORD v19[12]; // [rsp+588h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+5E8h] [rbp-48h]
  __int64 v21; // [rsp+5F0h] [rbp-40h]
  void *__srca; // [rsp+5F8h] [rbp-38h]
  __int64 v23; // [rsp+600h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a1aa6*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009a1ac1*/
  v23 = *((_QWORD *)__src + 115); /*0x1009a1acd*/
  v4 = *((_QWORD *)__src + 116); /*0x1009a1ad1*/
  v5 = *((_QWORD *)__src + 117); /*0x1009a1ad8*/
  codexmate_lib::commands::system::get_system_info::hc6020a5a6c5ce978(v18, (__int64)(__src + 520), a2, a3, a4); /*0x1009a1ae6*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a1b04*/
  if ( __OFSUB__(0, v18[0]) ) /*0x1009a1b0b*/
  {
    v6 = v18[3]; /*0x1009a1b22*/
    v21 = v18[1]; /*0x1009a1b2c*/
    __srca = (void *)v18[2]; /*0x1009a1b30*/
    if ( v18[3] < 0LL ) /*0x1009a1b34*/
    {
      v7 = 0; /*0x1009a1b36*/
      goto LABEL_4; /*0x1009a1b36*/
    }
    v20 = v4; /*0x1009a1b65*/
    if ( v18[3] ) /*0x1009a1b69*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a1b6b*/
      v7 = 1; /*0x1009a1b70*/
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1009a1b7e*/
      if ( !v9 ) /*0x1009a1b86*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1009a1b39*/
      v10 = v9; /*0x1009a1b88*/
    }
    else
    {
      v10 = 1; /*0x1009a1b8d*/
    }
    v11 = __srca; /*0x1009a1b96*/
    memcpy((void *)v10, __srca, v6); /*0x1009a1ba0*/
    if ( v21 ) /*0x1009a1bac*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v21, 1); /*0x1009a1bb6*/
    LOBYTE(v19[1]) = 3; /*0x1009a1bbb*/
    v19[2] = v6; /*0x1009a1bc2*/
    v19[3] = v10; /*0x1009a1bc9*/
    v19[4] = v6; /*0x1009a1bd0*/
    v19[0] = 0x8000000000000000LL; /*0x1009a1be1*/
    v8 = v23; /*0x1009a1be8*/
    v4 = v20; /*0x1009a1bec*/
  }
  else
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x1009a1b59*/
    v8 = v23; /*0x1009a1b5c*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::haf1d599ce47e8f18(v17); /*0x1009a1bfe*/
  if ( v8 != 0x8000000000000000LL ) /*0x1009a1c06*/
  {
    v12 = v5 + 1; /*0x1009a1c08*/
    v13 = v4; /*0x1009a1c0b*/
    while ( v12 != 1 ) /*0x1009a1c14*/
    {
      --v12; /*0x1009a1c1a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009a1c1d*/
      v13 += 96; /*0x1009a1c22*/
    }
    if ( v8 ) /*0x1009a1c2a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 96 * v8, 8); /*0x1009a1c3c*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a1c4d*/
}