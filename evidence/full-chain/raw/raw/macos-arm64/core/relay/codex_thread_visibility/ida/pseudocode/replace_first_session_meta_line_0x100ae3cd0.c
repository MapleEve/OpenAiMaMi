// __ZN13codexmate_lib4core5relay23codex_thread_visibility31replace_first_session_meta_line @ 0x100ae3cd0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::codex_thread_visibility::replace_first_session_meta_line::h49193b4a14eef084(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5,
        const void *a6,
        size_t __n)
{
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  void *v15; // r14
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v20; // rax
  size_t v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+8h] [rbp-B8h]
  void *v27; // [rsp+10h] [rbp-B0h]
  void *v28; // [rsp+18h] [rbp-A8h]
  void *v29; // [rsp+20h] [rbp-A0h]
  size_t v30; // [rsp+28h] [rbp-98h]
  size_t v31; // [rsp+30h] [rbp-90h]
  __int64 v32; // [rsp+38h] [rbp-88h]
  size_t v33; // [rsp+40h] [rbp-80h]
  __int64 v34; // [rsp+48h] [rbp-78h]
  __int64 v35; // [rsp+50h] [rbp-70h]
  __int64 v36; // [rsp+58h] [rbp-68h]
  void *__src; // [rsp+60h] [rbp-60h]
  void *v38; // [rsp+68h] [rbp-58h]
  size_t v39; // [rsp+70h] [rbp-50h]
  size_t v40; // [rsp+78h] [rbp-48h]
  size_t v41; // [rsp+80h] [rbp-40h]
  __int64 v42; // [rsp+88h] [rbp-38h]
  void *__s1; // [rsp+90h] [rbp-30h]

  v41 = a5; /*0x100ae3ce7*/
  __src = a4; /*0x100ae3ceb*/
  v11 = &v25; /*0x100ae3cf8*/
  codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(&v25, a2, a3); /*0x100ae3cff*/
  v12 = v25; /*0x100ae3d04*/
  v13 = v26; /*0x100ae3d0b*/
  v14 = (__int64)v27; /*0x100ae3d12*/
  v15 = v28; /*0x100ae3d19*/
  v38 = v29; /*0x100ae3d27*/
  v39 = v30; /*0x100ae3d32*/
  v40 = v31; /*0x100ae3d3d*/
  if ( v25 != 11 ) /*0x100ae3d45*/
  {
    a1[11] = v36; /*0x100ae3dc5*/
    a1[10] = v35; /*0x100ae3dcd*/
    a1[9] = v34; /*0x100ae3dd5*/
    v17 = v32; /*0x100ae3dd9*/
    a1[8] = v33; /*0x100ae3de7*/
    a1[7] = v17; /*0x100ae3deb*/
    a1[6] = v40; /*0x100ae3df3*/
    v18 = (__int64)v38; /*0x100ae3df7*/
    a1[5] = v39; /*0x100ae3dff*/
    a1[4] = v18; /*0x100ae3e03*/
    *a1 = v12; /*0x100ae3e07*/
    a1[1] = v13; /*0x100ae3e0a*/
    a1[2] = v14; /*0x100ae3e0e*/
    a1[3] = (__int64)v15; /*0x100ae3e12*/
    return a1; /*0x100ae3e12*/
  }
  v42 = v26; /*0x100ae3d47*/
  if ( __OFSUB__(-v26, 1) ) /*0x100ae3d4e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v25, v26); /*0x100ae3d57*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x100ae3d66*/
    if ( !v16 ) /*0x100ae3d6e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x100ae401a*/
    qmemcpy(v16, "session_meta line not found", 27); /*0x100ae3d9a*/
    *a1 = 9; /*0x100ae3da4*/
    a1[1] = 27; /*0x100ae3dab*/
    a1[2] = (__int64)v16; /*0x100ae3db3*/
    a1[3] = 27; /*0x100ae3db7*/
    return a1; /*0x100ae3dbf*/
  }
  __s1 = v27; /*0x100ae3e2b*/
  if ( a6 ) /*0x100ae3e32*/
  {
    if ( v28 != (void *)__n || (v11 = __s1, v13 = (__int64)a6, memcmp(__s1, a6, __n)) ) /*0x100ae3e48*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v13); /*0x100ae3e55*/
      v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(57, 1); /*0x100ae3e64*/
      if ( !v20 ) /*0x100ae3e6c*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 57); /*0x100ae4029*/
      qmemcpy(v20, "session_meta changed since migration manifest was created", 57); /*0x100ae3ed0*/
      *a1 = 10; /*0x100ae3ed7*/
      a1[1] = 57; /*0x100ae3ede*/
      a1[2] = (__int64)v20; /*0x100ae3ee6*/
      a1[3] = 57; /*0x100ae3eea*/
      if ( v42 ) /*0x100ae3ef9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v42, 1); /*0x100ae3f08*/
      return a1; /*0x100ae3f0d*/
    }
  }
  v21 = v41; /*0x100ae3f12*/
  if ( (v41 & 0x8000000000000000LL) != 0LL ) /*0x100ae3f19*/
  {
    v22 = 0; /*0x100ae3f1b*/
    goto LABEL_15; /*0x100ae3f1b*/
  }
  if ( v41 ) /*0x100ae3f2e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v13); /*0x100ae3f30*/
    v22 = 1; /*0x100ae3f35*/
    v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1); /*0x100ae3f44*/
    v21 = v41; /*0x100ae3f49*/
    if ( !v23 ) /*0x100ae3f50*/
LABEL_15:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v22, v21); /*0x100ae3f1e*/
  }
  else
  {
    v23 = 1; /*0x100ae3f54*/
  }
  v24 = v23; /*0x100ae3f59*/
  memcpy((void *)v23, __src, v21); /*0x100ae3f63*/
  v25 = v42; /*0x100ae3f6c*/
  v26 = (__int64)__s1; /*0x100ae3f77*/
  v27 = v15; /*0x100ae3f7e*/
  v28 = v38; /*0x100ae3f8d*/
  v29 = (void *)v39; /*0x100ae3f94*/
  v30 = v40; /*0x100ae3f9f*/
  v31 = v41; /*0x100ae3faa*/
  v32 = v24; /*0x100ae3fb4*/
  v33 = v41; /*0x100ae3fbb*/
  codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines::haca5d114b57dfff7( /*0x100ae3fd5*/
    a1,
    a2,
    a3,
    (__int64)&v25,
    1);
  if ( v42 ) /*0x100ae3fe1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v42, 1); /*0x100ae3fec*/
  if ( v41 ) /*0x100ae3ff8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v41, 1); /*0x100ae4006*/
  return a1; /*0x100ae3e19*/
}