// __ZN13codexmate_lib4core5relay16codex_diagnostic18checked_fix_result @ 0x1004e6d80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::checked_fix_result::hbdd9e58b4320b7fd(
        __int64 *a1,
        const void *a2,
        size_t a3,
        _QWORD *a4,
        void *a5,
        size_t a6)
{
  _WORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r12
  void *v11; // rax
  void *v12; // rbx
  void *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 result; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // r12
  void *v27; // rax
  void *v28; // rbx
  void *v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // r15
  size_t v32; // r12
  void *v33; // rax
  void *v34; // rbx
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rsi
  _QWORD v39[3]; // [rsp+8h] [rbp-D8h] BYREF
  _QWORD v40[2]; // [rsp+20h] [rbp-C0h] BYREF
  size_t __n; // [rsp+30h] [rbp-B0h]
  void *__src; // [rsp+38h] [rbp-A8h]
  _WORD *v43; // [rsp+40h] [rbp-A0h]
  __int64 v44; // [rsp+48h] [rbp-98h]
  _QWORD *v45; // [rsp+50h] [rbp-90h]
  __int64 v46; // [rsp+58h] [rbp-88h]
  __int64 v47; // [rsp+60h] [rbp-80h]
  __int64 v48; // [rsp+68h] [rbp-78h]
  __int64 v49; // [rsp+70h] [rbp-70h]
  _QWORD *v50; // [rsp+78h] [rbp-68h] BYREF
  __int64 v51; // [rsp+80h] [rbp-60h]
  __int64 *v52; // [rsp+88h] [rbp-58h]
  __int64 (__fastcall *v53)(); // [rsp+90h] [rbp-50h]
  __int64 v54; // [rsp+98h] [rbp-48h] BYREF
  _QWORD *v55; // [rsp+A0h] [rbp-40h]
  __int64 v56; // [rsp+A8h] [rbp-38h]
  _QWORD *v57; // [rsp+B0h] [rbp-30h]

  v40[0] = a2; /*0x1004e6d9d*/
  v40[1] = a3; /*0x1004e6da4*/
  v57 = a4; /*0x1004e6dab*/
  if ( a4[5] == 2 && (v8 = (_WORD *)v57[4], *v8 == 27503) ) /*0x1004e6dc3*/
  {
    __src = a5; /*0x1004e6fd9*/
    __n = a6; /*0x1004e6fe0*/
    v43 = v8; /*0x1004e6fe7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004e6fee*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e6ffd*/
    if ( !v25 ) /*0x1004e7005*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e71c5*/
    v26 = (_QWORD *)v25; /*0x1004e700b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e700e*/
    v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1004e701b*/
    if ( !v27 ) /*0x1004e7023*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1004e71f4*/
    v28 = v27; /*0x1004e7029*/
    v29 = v27; /*0x1004e702c*/
    memcpy(v27, a2, a3); /*0x1004e7035*/
    *v26 = a3; /*0x1004e703a*/
    v26[1] = v28; /*0x1004e703e*/
    v26[2] = a3; /*0x1004e7043*/
    v54 = 1; /*0x1004e7048*/
    v55 = v26; /*0x1004e7050*/
    v56 = 1; /*0x1004e7054*/
    v50 = nullptr; /*0x1004e705c*/
    v51 = 8; /*0x1004e7064*/
    v52 = nullptr; /*0x1004e706c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, a2); /*0x1004e7074*/
    v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e7083*/
    if ( !v30 ) /*0x1004e708b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e71d6*/
    v31 = (_QWORD *)v30; /*0x1004e7091*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e7094*/
    v32 = __n; /*0x1004e709e*/
    v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1004e70a8*/
    if ( !v33 ) /*0x1004e70b0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x1004e7203*/
    v34 = v33; /*0x1004e70b6*/
    memcpy(v33, __src, __n); /*0x1004e70c6*/
    *v31 = __n; /*0x1004e70cb*/
    v31[1] = v34; /*0x1004e70ce*/
    v31[2] = v32; /*0x1004e70d2*/
    v35 = v55; /*0x1004e70da*/
    *a1 = v54; /*0x1004e70de*/
    a1[1] = (__int64)v35; /*0x1004e70e1*/
    a1[2] = v56; /*0x1004e70e9*/
    v36 = v51; /*0x1004e70f1*/
    a1[3] = (__int64)v50; /*0x1004e70f5*/
    a1[5] = (__int64)v52; /*0x1004e70fd*/
    a1[4] = v36; /*0x1004e7101*/
    a1[6] = 1; /*0x1004e7105*/
    a1[7] = (__int64)v31; /*0x1004e710d*/
    a1[8] = 1; /*0x1004e7111*/
    if ( *v57 ) /*0x1004e711d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57[1], *v57, 1); /*0x1004e712e*/
    v37 = v57[3]; /*0x1004e7133*/
    if ( v37 ) /*0x1004e713a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v37, 1); /*0x1004e7148*/
    v38 = v57[6]; /*0x1004e714d*/
    if ( v38 ) /*0x1004e7154*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57[7], v38, 1); /*0x1004e715f*/
    result = -v57[9]; /*0x1004e716b*/
    if ( !__OFSUB__(result, 1) && v57[9] ) /*0x1004e7168*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57[10], v57[9], 1); /*0x1004e7194*/
  }
  else
  {
    v47 = 0; /*0x1004e6dc9*/
    v48 = 8; /*0x1004e6dd1*/
    v49 = 0; /*0x1004e6dd9*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004e6de1*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e6df0*/
    if ( !v9 ) /*0x1004e6df8*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e71a3*/
    v10 = (_QWORD *)v9; /*0x1004e6dfe*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x1004e6e01*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1004e6e0e*/
    if ( !v11 ) /*0x1004e6e16*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1004e71e5*/
    v12 = v11; /*0x1004e6e1c*/
    v13 = v11; /*0x1004e6e1f*/
    memcpy(v11, a2, a3); /*0x1004e6e28*/
    *v10 = a3; /*0x1004e6e2d*/
    v10[1] = v12; /*0x1004e6e31*/
    v10[2] = a3; /*0x1004e6e36*/
    v44 = 1; /*0x1004e6e3b*/
    v45 = v10; /*0x1004e6e46*/
    v46 = 1; /*0x1004e6e4d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, a2); /*0x1004e6e58*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004e6e67*/
    if ( !v14 ) /*0x1004e6e72*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x1004e71b4*/
    v15 = (_QWORD *)v14; /*0x1004e6e78*/
    if ( __OFSUB__(-v57[9], 1) ) /*0x1004e6e86*/
    {
      v56 = v57[8]; /*0x1004e6e93*/
      v16 = v57[6]; /*0x1004e6e97*/
      v55 = (_QWORD *)v57[7]; /*0x1004e6e9e*/
      v54 = v16; /*0x1004e6ea2*/
    }
    else
    {
      v17 = v57[6]; /*0x1004e6ea8*/
      v18 = v57[7]; /*0x1004e6eac*/
      v54 = v57[9]; /*0x1004e6eb0*/
      v19 = v57[11]; /*0x1004e6eb8*/
      v55 = (_QWORD *)v57[10]; /*0x1004e6ebc*/
      v56 = v19; /*0x1004e6ec0*/
      if ( v17 ) /*0x1004e6ec7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1004e6ece*/
    }
    v50 = v40; /*0x1004e6eda*/
    v51 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1004e6ee5*/
    v52 = &v54; /*0x1004e6eed*/
    v53 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004e6ef8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_1017BF859, &v50); /*0x1004e6f0e*/
    if ( v54 ) /*0x1004e6f1a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x1004e6f25*/
    v15[2] = v39[2]; /*0x1004e6f31*/
    v20 = v39[0]; /*0x1004e6f35*/
    v15[1] = v39[1]; /*0x1004e6f43*/
    *v15 = v20; /*0x1004e6f47*/
    a1[2] = v49; /*0x1004e6f4e*/
    v21 = v47; /*0x1004e6f52*/
    a1[1] = v48; /*0x1004e6f5a*/
    *a1 = v21; /*0x1004e6f5e*/
    a1[5] = v46; /*0x1004e6f68*/
    result = v44; /*0x1004e6f6c*/
    a1[4] = (__int64)v45; /*0x1004e6f7a*/
    a1[3] = result; /*0x1004e6f7e*/
    a1[6] = 1; /*0x1004e6f82*/
    a1[7] = (__int64)v15; /*0x1004e6f8a*/
    a1[8] = 1; /*0x1004e6f8e*/
    v23 = v57; /*0x1004e6f96*/
    if ( *v57 ) /*0x1004e6f9a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57[1], *v57, 1); /*0x1004e6fab*/
    v24 = v23[3]; /*0x1004e6fb0*/
    if ( v24 ) /*0x1004e6fb7*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[4], v24, 1); /*0x1004e6fc2*/
  }
  return result; /*0x1004e6fc7*/
}