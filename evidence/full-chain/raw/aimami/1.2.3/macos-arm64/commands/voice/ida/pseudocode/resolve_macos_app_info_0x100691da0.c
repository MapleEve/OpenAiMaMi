// __ZN13codexmate_lib8commands5voice22resolve_macos_app_info28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100691da0 | 基线 same-set
double __fastcall codexmate_lib::commands::voice::resolve_macos_app_info::_$u7b$$u7b$closure$u7d$$u7d$::h85bef13235bb2ad4(
        size_t *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  const void *v11; // r13
  size_t v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  double result; // xmm0_8
  char v17[8]; // [rsp+0h] [rbp-50h] BYREF
  const void *v18; // [rsp+8h] [rbp-48h]
  __int64 v19; // [rsp+10h] [rbp-40h]
  __int64 v20; // [rsp+18h] [rbp-38h]
  __int64 v21; // [rsp+20h] [rbp-30h]

  v20 = a5; /*0x100691db1*/
  v8 = a3; /*0x100691dbe*/
  v9 = std::path::Path::file_stem::h431036c04b956216(a2, a3); /*0x100691dc1*/
  v11 = &unk_1016046E7; /*0x100691dc6*/
  v12 = 3; /*0x100691dcd*/
  if ( !v9 || (a2 = v17, v8 = v9, core::str::converts::from_utf8::hb32deb9559450f6e(v17, v9, v10), v17[0]) ) /*0x100691de8*/
  {
LABEL_3:
    v21 = a4; /*0x100691dea*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v8); /*0x100691dee*/
    v13 = 1; /*0x100691df3*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x100691e00*/
    if ( v14 ) /*0x100691e08*/
    {
      v15 = v14; /*0x100691e0a*/
      goto LABEL_5; /*0x100691e0a*/
    }
LABEL_9:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v12); /*0x100691e56*/
  }
  v12 = v19; /*0x100691e4b*/
  if ( v19 < 0 ) /*0x100691e52*/
  {
    v13 = 0; /*0x100691e54*/
    goto LABEL_9; /*0x100691e54*/
  }
  v21 = a4; /*0x100691e78*/
  v11 = v18; /*0x100691e7c*/
  if ( v19 ) /*0x100691e80*/
  {
    a4 = v21; /*0x100691e82*/
    goto LABEL_3; /*0x100691e86*/
  }
  v15 = 1; /*0x100691e8b*/
  v12 = 0; /*0x100691e91*/
LABEL_5:
  memcpy((void *)v15, v11, v12); /*0x100691e0d*/
  *a1 = v12; /*0x100691e1b*/
  a1[1] = v15; /*0x100691e1e*/
  a1[2] = v12; /*0x100691e22*/
  if ( v21 ) /*0x100691e2d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v21, 1); /*0x100691e46*/
  return result; /*0x100691e38*/
}