// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::native_repair_catalog::PreparedRepairCatalog::catalog::h1a5764c824ac355b; addr: 0x10031f950; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
_QWORD *__fastcall codexmate_lib::core::relay::native_repair_catalog::PreparedRepairCatalog::catalog::h1a5764c824ac355b(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  const void *v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  const void *v9; // r15
  __int64 *v10; // r12
  size_t v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  void *v17; // r14
  __int64 v19; // rcx
  __int64 v20; // [rsp+8h] [rbp-88h] BYREF
  __int64 v21; // [rsp+10h] [rbp-80h]
  void *__s1; // [rsp+18h] [rbp-78h]
  size_t __n; // [rsp+20h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-68h]
  __int64 v25; // [rsp+30h] [rbp-60h]
  __int64 v26; // [rsp+38h] [rbp-58h]
  __int64 v27; // [rsp+40h] [rbp-50h]
  __int64 v28; // [rsp+48h] [rbp-48h]
  __int64 v29; // [rsp+50h] [rbp-40h]
  __int64 v30; // [rsp+58h] [rbp-38h]
  __int64 v31; // [rsp+60h] [rbp-30h]

  v6 = (const void *)a3[7]; /*0x10031f96a*/
  v7 = &v20; /*0x10031f972*/
  codexmate_lib::core::relay::native_repair_catalog::read_optional::h76fbee7e324b28ba(&v20, (__int64)v6, a3[8]); /*0x10031f979*/
  v8 = v20; /*0x10031f97e*/
  v9 = (const void *)v21; /*0x10031f985*/
  v10 = (__int64 *)__s1; /*0x10031f989*/
  v11 = __n; /*0x10031f98d*/
  if ( v20 != 11 ) /*0x10031f995*/
  {
    a1[11] = v31; /*0x10031fa22*/
    a1[10] = v30; /*0x10031fa2a*/
    a1[9] = v29; /*0x10031fa32*/
    a1[8] = v28; /*0x10031fa3a*/
    a1[7] = v27; /*0x10031fa42*/
    a1[6] = v26; /*0x10031fa4a*/
    v15 = v24; /*0x10031fa4e*/
    a1[5] = v25; /*0x10031fa56*/
    a1[4] = v15; /*0x10031fa5a*/
    a1[1] = v9; /*0x10031fa5e*/
    a1[2] = v10; /*0x10031fa62*/
LABEL_9:
    a1[3] = v11; /*0x10031fa66*/
    *a1 = v8; /*0x10031fa6a*/
    return a1; /*0x10031fa6d*/
  }
  v12 = a2[22]; /*0x10031f9ab*/
  if ( __OFSUB__(-v21, 1) ) /*0x10031f9a8*/
  {
    if ( v12 != 0x8000000000000000LL ) /*0x10031f9bb*/
      goto LABEL_16; /*0x10031f9bb*/
  }
  else
  {
    if ( v12 == 0x8000000000000000LL /*0x10031fa8a*/
      || __n != a2[24]
      || (v6 = (const void *)a2[23], v7 = (__int64 *)__s1, memcmp(__s1, v6, __n)) )
    {
      if ( !v9 ) /*0x10031faa4*/
        goto LABEL_16; /*0x10031faa4*/
      v7 = v10; /*0x10031faab*/
LABEL_15:
      v6 = v9; /*0x10031faae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, 1); /*0x10031fab1*/
      goto LABEL_16; /*0x10031fab1*/
    }
    if ( v9 ) /*0x10031fb67*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x10031fb78*/
  }
  v6 = (const void *)a3[4]; /*0x10031f9c4*/
  v7 = &v20; /*0x10031f9cc*/
  codexmate_lib::core::relay::native_repair_catalog::read_optional::h76fbee7e324b28ba(&v20, (__int64)v6, a3[5]); /*0x10031f9d3*/
  v8 = v20; /*0x10031f9d8*/
  v9 = (const void *)v21; /*0x10031f9df*/
  v13 = (__int64 *)__s1; /*0x10031f9e3*/
  v11 = __n; /*0x10031f9e7*/
  if ( v20 != 11 ) /*0x10031f9ef*/
  {
    a1[11] = v31; /*0x10031fb1b*/
    a1[10] = v30; /*0x10031fb23*/
    a1[9] = v29; /*0x10031fb2b*/
    a1[8] = v28; /*0x10031fb33*/
    a1[7] = v27; /*0x10031fb3b*/
    a1[6] = v26; /*0x10031fb43*/
    v19 = v24; /*0x10031fb47*/
    a1[5] = v25; /*0x10031fb4f*/
    a1[4] = v19; /*0x10031fb53*/
    a1[1] = v9; /*0x10031fb57*/
    a1[2] = v13; /*0x10031fb5b*/
    goto LABEL_9; /*0x10031fb5f*/
  }
  v14 = a2[25]; /*0x10031f9f5*/
  if ( v21 == 0x8000000000000000LL ) /*0x10031f9ff*/
  {
    if ( v14 == 0x8000000000000000LL ) /*0x10031fa08*/
    {
LABEL_7:
      a1[1] = a2; /*0x10031fa0e*/
      *a1 = 11; /*0x10031fa12*/
      return a1; /*0x10031fa19*/
    }
    goto LABEL_16; /*0x10031fa08*/
  }
  if ( v14 != 0x8000000000000000LL && __n == a2[27] ) /*0x10031fb98*/
  {
    v6 = (const void *)a2[26]; /*0x10031fb9a*/
    v7 = (__int64 *)__s1; /*0x10031fba1*/
    if ( !memcmp(__s1, v6, __n) ) /*0x10031fbab*/
    {
      if ( v9 ) /*0x10031fbc6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v9, 1); /*0x10031fbd7*/
      goto LABEL_7; /*0x10031fbdc*/
    }
  }
  if ( v9 ) /*0x10031fbb0*/
  {
    v7 = v13; /*0x10031fbbb*/
    goto LABEL_15; /*0x10031fbbe*/
  }
LABEL_16:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6, v11); /*0x10031fab6*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(90, 1); /*0x10031fac5*/
  if ( !v16 ) /*0x10031facd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 90); /*0x10031fbeb*/
  v17 = v16; /*0x10031fad3*/
  memcpy(v16, &unk_1016EFBC1, 0x5Au); /*0x10031fae5*/
  *a1 = 10; /*0x10031faea*/
  a1[1] = 90; /*0x10031faf1*/
  a1[2] = v17; /*0x10031faf9*/
  a1[3] = 90; /*0x10031fafd*/
  return a1; /*0x10031fb08*/
}
