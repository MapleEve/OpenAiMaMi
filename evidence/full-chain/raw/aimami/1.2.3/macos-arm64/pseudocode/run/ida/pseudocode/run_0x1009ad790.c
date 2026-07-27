// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009ad790 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb14d9df424ffc168(
        char *__src,
        double a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r12
  size_t v5; // r15
  __int64 v6; // r13
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

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009ad7b6*/
  memcpy(v13, __src + 520, sizeof(v13)); /*0x1009ad7d1*/
  v2 = *((_QWORD *)__src + 115); /*0x1009ad7d6*/
  v3 = *((_QWORD *)__src + 116); /*0x1009ad7dd*/
  v4 = *((_QWORD *)__src + 117); /*0x1009ad7e4*/
  codexmate_lib::platform::voice_trigger_macos::cancel_trigger_capture::hf72118e3af23e107( /*0x1009ad7eb*/
    (__int64)v13,
    (__int64)(__src + 520));
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf6edda7bcbeb3a54((__int64)v16, (__int64)(__src + 520)); /*0x1009ad7f7*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009ad80b*/
  if ( __OFSUB__(0, v16[0]) ) /*0x1009ad812*/
  {
    v19 = v16[1]; /*0x1009ad822*/
    __srca = (void *)v16[2]; /*0x1009ad82d*/
    v5 = v16[3]; /*0x1009ad831*/
    if ( v16[3] < 0LL ) /*0x1009ad83b*/
    {
      v6 = 0; /*0x1009ad83d*/
      goto LABEL_4; /*0x1009ad83d*/
    }
    v21 = v2; /*0x1009ad872*/
    v18 = v3; /*0x1009ad876*/
    if ( v16[3] ) /*0x1009ad87a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, __src + 520); /*0x1009ad87c*/
      v6 = 1; /*0x1009ad881*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1009ad88f*/
      if ( !v7 ) /*0x1009ad897*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1009ad840*/
      v8 = v7; /*0x1009ad899*/
    }
    else
    {
      v8 = 1; /*0x1009ad89e*/
    }
    v9 = __srca; /*0x1009ad8a7*/
    memcpy((void *)v8, __srca, v5); /*0x1009ad8b1*/
    if ( v19 ) /*0x1009ad8bd*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v19, 1); /*0x1009ad8c7*/
    LOBYTE(v17[1]) = 3; /*0x1009ad8cc*/
    v17[2] = v5; /*0x1009ad8d3*/
    v17[3] = v8; /*0x1009ad8da*/
    v17[4] = v5; /*0x1009ad8de*/
    v17[0] = 0x8000000000000000LL; /*0x1009ad8ec*/
    v2 = v21; /*0x1009ad8f3*/
    v3 = v18; /*0x1009ad8f7*/
  }
  else
  {
    qmemcpy(v17, v16, sizeof(v17)); /*0x1009ad860*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::hd6e58039a39c24e0(v15); /*0x1009ad909*/
  if ( v2 != 0x8000000000000000LL ) /*0x1009ad911*/
  {
    v10 = v4 + 1; /*0x1009ad913*/
    v11 = v3; /*0x1009ad916*/
    while ( v10 != 1 ) /*0x1009ad924*/
    {
      --v10; /*0x1009ad92a*/
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x1009ad92d*/
      v11 += 96; /*0x1009ad932*/
    }
    if ( v2 ) /*0x1009ad93a*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 96 * v2, 8); /*0x1009ad94c*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009ad95d*/
}