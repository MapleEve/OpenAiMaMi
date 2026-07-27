// __ZN13codexmate_lib4core8sessions19backup_regular_file @ 0x100535b80 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::backup_regular_file::h0586201b51cc4559(
        _QWORD *a1,
        void *a2,
        size_t a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  void *v8; // rbx
  size_t v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rsi
  void *v12; // rdi
  size_t v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  double result; // xmm0_8
  _QWORD v18[2]; // [rsp+10h] [rbp-60h] BYREF
  size_t __n; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  void *v21; // [rsp+30h] [rbp-40h]
  size_t v22; // [rsp+38h] [rbp-38h]
  void *__src; // [rsp+40h] [rbp-30h]

  codexmate_lib::core::sessions::migration_backup_path::h7dbc8ce73e7fc2db( /*0x100535bc0*/
    (unsigned int)&v20,
    a4,
    a5,
    a6,
    a7,
    (unsigned int)"rollout",
    7);
  v8 = v21; /*0x100535bc5*/
  v9 = v22; /*0x100535bc9*/
  if ( (std::sys::fs::copy::hcda968f022f0a0e3(a2, a3, v21, v22) & 1) != 0 ) /*0x100535be0*/
  {
    *a1 = 2; /*0x100535be2*/
    a1[1] = v10; /*0x100535be9*/
    v11 = v20; /*0x100535bed*/
    if ( !v20 ) /*0x100535bf4*/
      return result; /*0x100535bf4*/
    v12 = v8; /*0x100535bff*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100535c02*/
  }
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v18, v8, v9); /*0x100535c11*/
  __src = (void *)v18[1]; /*0x100535c1a*/
  v13 = __n; /*0x100535c1e*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100535c25*/
  {
    v14 = 0; /*0x100535c27*/
    goto LABEL_6; /*0x100535c27*/
  }
  if ( __n ) /*0x100535c37*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v8); /*0x100535c39*/
    v14 = 1; /*0x100535c3e*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v13, 1); /*0x100535c4c*/
    if ( !v15 ) /*0x100535c54*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v13); /*0x100535c2a*/
    v16 = v15; /*0x100535c56*/
  }
  else
  {
    v16 = 1; /*0x100535c5b*/
  }
  memcpy((void *)v16, __src, v13); /*0x100535c6b*/
  a1[1] = v13; /*0x100535c70*/
  a1[2] = v16; /*0x100535c74*/
  a1[3] = v13; /*0x100535c78*/
  *a1 = 11; /*0x100535c7c*/
  if ( v20 ) /*0x100535c8a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v20, 1); /*0x100535c94*/
  v11 = v18[0]; /*0x100535c99*/
  if ( 2LL * v18[0] ) /*0x100535c9d*/
  {
    v12 = __src; /*0x100535caf*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100535cb3*/
  }
  return result; /*0x100535cb8*/
}