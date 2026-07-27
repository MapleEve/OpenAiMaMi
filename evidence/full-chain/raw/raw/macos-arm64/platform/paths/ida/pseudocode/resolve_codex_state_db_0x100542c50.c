// __ZN13codexmate_lib8platform5paths10CodexPaths22resolve_codex_state_db @ 0x100542c50 | 基线 same-set
double __fastcall codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h14df2306ab2134d7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  const void *v6; // r15
  size_t v7; // r14
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // r14
  _QWORD *v11; // r15
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  _QWORD *v20; // rbx
  __int64 v21; // rsi
  double result; // xmm0_8
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rsi
  unsigned __int64 v28; // r12
  _QWORD *v29; // r13
  __int64 v30; // rsi
  _QWORD v31[4]; // [rsp+8h] [rbp-F8h] BYREF
  _QWORD v32[4]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v33[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v35; // [rsp+70h] [rbp-90h]
  unsigned __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  _QWORD *v40; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _QWORD *v43; // [rsp+B0h] [rbp-50h]
  size_t v44; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h]
  size_t v46; // [rsp+C8h] [rbp-38h]
  _QWORD *v47; // [rsp+D0h] [rbp-30h]

  codexmate_lib::platform::paths::CodexPaths::state_db_search_dirs::he3f621873ba76902(&v37, a2, a3); /*0x100542c71*/
  v4 = v39; /*0x100542c76*/
  v47 = a1; /*0x100542c7d*/
  if ( v39 ) /*0x100542c81*/
  {
    v5 = v38; /*0x100542c83*/
    v6 = *(const void **)(v38 + 8); /*0x100542c87*/
    v7 = *(_QWORD *)(v38 + 16); /*0x100542c8b*/
    if ( v7 ) /*0x100542c92*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v37, a2); /*0x100542c94*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x100542ca6*/
      if ( !v8 ) /*0x100542cac*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x100542cb6*/
    }
    else
    {
      v8 = 1; /*0x100542cdf*/
    }
    memcpy((void *)v8, v6, v7); /*0x100542cee*/
    v44 = v7; /*0x100542cf3*/
    v45 = v8; /*0x100542cf7*/
    v46 = v7; /*0x100542cfb*/
  }
  else
  {
    std::path::Path::_join::hb1a495d4f06b13b8(&v44, a2, a3, &unk_1015FD3B6, 6); /*0x100542cd4*/
    v5 = v38; /*0x100542cd9*/
  }
  v33[0] = v5; /*0x100542d0a*/
  v33[1] = v5; /*0x100542d11*/
  v33[2] = v37; /*0x100542d18*/
  v33[3] = v5 + 32 * v4; /*0x100542d1f*/
  alloc::vec::in_place_collect::from_iter_in_place::h0da44cbbc9c44de2(&v34, v33); /*0x100542d34*/
  v9 = 4 * v36; /*0x100542d43*/
  if ( v36 < 2 ) /*0x100542d4b*/
  {
    v10 = v34; /*0x100542d4d*/
    v11 = v35; /*0x100542d54*/
    v12 = &v35[v9]; /*0x100542d5b*/
    v40 = v35; /*0x100542d5e*/
    v42 = v34; /*0x100542d62*/
    v41 = v35; /*0x100542d66*/
    v43 = v12; /*0x100542d6a*/
    v13 = v35; /*0x100542d6e*/
    if ( v36 && (v13 = v35 + 4, v41 = v35 + 4, v14 = *v35, !__OFSUB__(-*v35, 1)) ) /*0x100542d87*/
    {
      v26 = v35[1]; /*0x100542ed0*/
      v27 = v47; /*0x100542ed8*/
      v47[2] = v35[2]; /*0x100542edc*/
      v27[1] = v26; /*0x100542ee0*/
      *v27 = v14; /*0x100542ee4*/
      v15 = (char *)v12 - (char *)v13; /*0x100542ee7*/
      if ( !v15 ) /*0x100542eea*/
        goto LABEL_29; /*0x100542eea*/
    }
    else
    {
      std::path::Path::_join::hb1a495d4f06b13b8(v47, v45, v46, &unk_1015FF6BD, 14); /*0x100542da6*/
      v15 = (char *)v12 - (char *)v13; /*0x100542dab*/
      if ( !v15 ) /*0x100542dae*/
      {
LABEL_29:
        if ( v10 ) /*0x100542f25*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 32 * v10, 8); /*0x100542f36*/
        goto LABEL_31; /*0x100542f36*/
      }
    }
    v28 = v15 >> 5; /*0x100542eec*/
    v29 = v13 + 1; /*0x100542ef0*/
    do /*0x100542f07*/
    {
      v30 = *(v29 - 1); /*0x100542f09*/
      if ( v30 ) /*0x100542f10*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v30, 1); /*0x100542f1b*/
      v29 += 4; /*0x100542f00*/
      --v28; /*0x100542f04*/
    }
    while ( v28 ); /*0x100542f07*/
    goto LABEL_29; /*0x100542f07*/
  }
  v16 = v34; /*0x100542db9*/
  v17 = v35; /*0x100542dc0*/
  v18 = *v35; /*0x100542dc7*/
  if ( __OFSUB__(-*v35, 1) ) /*0x100542dcd*/
  {
    v19 = (unsigned __int64)(v9 * 8 - 32) >> 5; /*0x100542dd6*/
    v20 = v35 + 5; /*0x100542dda*/
    do /*0x100542de7*/
    {
      v21 = *(v20 - 1); /*0x100542ded*/
      if ( v21 ) /*0x100542df4*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v21, 1); /*0x100542dfe*/
      v20 += 4; /*0x100542de0*/
      --v19; /*0x100542de4*/
    }
    while ( v19 ); /*0x100542de7*/
    if ( v16 ) /*0x100542e9a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 32 * v16, 8); /*0x100542eab*/
    v24 = v47; /*0x100542eb0*/
  }
  else
  {
    v31[3] = v35[3]; /*0x100542e10*/
    v23 = v35[1]; /*0x100542e17*/
    v31[2] = v35[2]; /*0x100542e1f*/
    v31[1] = v23; /*0x100542e26*/
    v31[0] = v18; /*0x100542e2d*/
    v40 = v35; /*0x100542e34*/
    v41 = v35 + 4; /*0x100542e38*/
    v42 = v34; /*0x100542e3c*/
    v43 = &v35[v9]; /*0x100542e40*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h702c0c2e76575e9b( /*0x100542e56*/
      v32,
      &v40,
      v31);
    v24 = v47; /*0x100542e6c*/
    if ( v32[0] != 0x8000000000000000LL ) /*0x100542e70*/
    {
      v47[2] = v32[2]; /*0x100542e79*/
      v25 = v32[0]; /*0x100542e7d*/
      v24[1] = v32[1]; /*0x100542e8b*/
      *v24 = v25; /*0x100542e8f*/
      goto LABEL_31; /*0x100542e92*/
    }
  }
  std::path::Path::_join::hb1a495d4f06b13b8(v24, v45, v46, &unk_1015FF6BD, 14); /*0x100542ec9*/
LABEL_31:
  if ( v44 ) /*0x100542f42*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x100542f4d*/
  return result; /*0x100542f52*/
}