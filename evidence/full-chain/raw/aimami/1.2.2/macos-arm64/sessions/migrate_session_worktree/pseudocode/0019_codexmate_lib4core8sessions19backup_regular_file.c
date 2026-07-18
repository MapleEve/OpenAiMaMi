// mac 1.2.2 NEW migrate_session_worktree 0x1013bdc60 d=1
__int64 __fastcall codexmate_lib::core::sessions::backup_regular_file::h3e9031fbb6533907(
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
  __int64 result; // rax
  __int64 v11; // rdx
  size_t v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD v16[2]; // [rsp+10h] [rbp-60h] BYREF
  size_t __n; // [rsp+20h] [rbp-50h]
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  void *v19; // [rsp+30h] [rbp-40h]
  size_t v20; // [rsp+38h] [rbp-38h]
  void *__src; // [rsp+40h] [rbp-30h]

  codexmate_lib::core::sessions::migration_backup_path::h0db2c837090f31bd( /*0x1013bdca0*/
    (unsigned int)&v18,
    a4,
    a5,
    a6,
    a7,
    (unsigned int)"rolloutrollout changed while router migration was streaming; retry required",
    7);
  v8 = v19; /*0x1013bdca5*/
  v9 = v20; /*0x1013bdca9*/
  result = std::sys::fs::copy::hcda968f022f0a0e3(a2, a3, v19, v20); /*0x1013bdcb9*/
  if ( (result & 1) != 0 ) /*0x1013bdcc0*/
  {
    *a1 = 2; /*0x1013bdcc2*/
    a1[1] = v11; /*0x1013bdcc9*/
    if ( !v18 ) /*0x1013bdcd4*/
      return result; /*0x1013bdcd4*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bdcd4*/
  }
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v16, v8, v9); /*0x1013bdcf1*/
  __src = (void *)v16[1]; /*0x1013bdcfa*/
  v12 = __n; /*0x1013bdcfe*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1013bdd05*/
  {
    v13 = 0; /*0x1013bdd07*/
    goto LABEL_6; /*0x1013bdd07*/
  }
  if ( __n ) /*0x1013bdd17*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1013bdd19*/
    v13 = 1; /*0x1013bdd1e*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1u); /*0x1013bdd2c*/
    if ( !v14 ) /*0x1013bdd34*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13); /*0x1013bdd0a*/
    v15 = v14; /*0x1013bdd36*/
  }
  else
  {
    v15 = 1; /*0x1013bdd3b*/
  }
  memcpy((void *)v15, __src, v12); /*0x1013bdd4b*/
  a1[1] = v12; /*0x1013bdd50*/
  a1[2] = v15; /*0x1013bdd54*/
  a1[3] = v12; /*0x1013bdd58*/
  *a1 = 10; /*0x1013bdd5c*/
  if ( v18 ) /*0x1013bdd6a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bdd74*/
  result = 2LL * v16[0]; /*0x1013bdd7d*/
  if ( 2LL * v16[0] ) /*0x1013bdd7d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bdd93*/
  return result; /*0x1013bdd98*/
}