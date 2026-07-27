// __ZN13codexmate_lib4core5relay17proxy_passthrough31stream_images_upstream_response @ 0x100270b40 | 基线 same-set
__int64 (__fastcall ***__fastcall codexmate_lib::core::relay::proxy_passthrough::stream_images_upstream_response::h45927e73268ab7cc(
        __int64 (__fastcall ***a1)(),
        __int64 a2))()
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r14
  const void *v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // r8
  _QWORD *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 *v17; // rax
  __int64 (__fastcall **v18)(); // rbx
  char v19; // r14
  __int64 (__fastcall **v20)(); // r15
  char v21; // r14
  __int64 v22; // rsi
  __int64 v23; // r15
  __int64 (__fastcall ***v24)(); // r12
  char v25; // r13
  _QWORD v27[12]; // [rsp+0h] [rbp-210h] BYREF
  _QWORD v28[11]; // [rsp+60h] [rbp-1B0h] BYREF
  __int16 v29; // [rsp+B8h] [rbp-158h]
  _QWORD v30[14]; // [rsp+C0h] [rbp-150h] BYREF
  _QWORD __dst[17]; // [rsp+130h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v32)(); // [rsp+1B8h] [rbp-58h]
  __int64 v33; // [rsp+1C0h] [rbp-50h]
  __int64 *v34; // [rsp+1C8h] [rbp-48h]
  int v35; // [rsp+1D0h] [rbp-40h]
  __int16 v36; // [rsp+1D4h] [rbp-3Ch]
  void *__src; // [rsp+1D8h] [rbp-38h]
  int v38; // [rsp+1E0h] [rbp-30h] BYREF
  __int16 v39; // [rsp+1E4h] [rbp-2Ch]

  v2 = *(_QWORD *)(a2 + 80); /*0x100270b54*/
  __src = (void *)a2; /*0x100270b7c*/
  if ( v2 >> 62 != 0 || 4 * v2 > 0x7FFFFFFFFFFFFFFELL ) /*0x100270b77*/
  {
    v3 = 0; /*0x100270b82*/
    goto LABEL_3; /*0x100270b82*/
  }
  v32 = a1; /*0x100270b95*/
  v4 = *(unsigned __int16 *)(a2 + 104); /*0x100270b99*/
  LOWORD(v34) = *(_WORD *)(a2 + 88); /*0x100270ba2*/
  v5 = *(const void **)(a2 + 72); /*0x100270ba6*/
  if ( 4 * v2 ) /*0x100270b58*/
  {
    v33 = v4; /*0x100270baf*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100270bb3*/
    v3 = 2; /*0x100270bb8*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4 * v2, 2); /*0x100270bc6*/
    if ( !v6 ) /*0x100270bce*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, 4 * v2); /*0x100270b85*/
    v7 = v6; /*0x100270bd0*/
    LOWORD(v4) = v33; /*0x100270bd3*/
  }
  else
  {
    v7 = 2; /*0x100270bd9*/
  }
  memcpy((void *)v7, v5, 4 * v2); /*0x100270be8*/
  v8 = __src; /*0x100270bed*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfe8f8c941e9360dc(v30, (char *)__src + 24); /*0x100270bfc*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he9843f4b519c7ea4(__dst, v8 + 6); /*0x100270c0c*/
  v9 = *v8; /*0x100270c11*/
  if ( *v8 >= 2u ) /*0x100270c19*/
  {
    v10 = v8[1]; /*0x100270c1b*/
    v27[1] = v8[2]; /*0x100270c23*/
    v27[0] = v10; /*0x100270c2a*/
  }
  v29 = (__int16)v34; /*0x100270c35*/
  v28[9] = v7; /*0x100270c3c*/
  v28[10] = v2; /*0x100270c43*/
  v28[3] = v30[0]; /*0x100270c58*/
  v28[4] = v30[1]; /*0x100270c5f*/
  v28[5] = v30[2]; /*0x100270c6d*/
  v28[6] = __dst[0]; /*0x100270c82*/
  v28[7] = __dst[1]; /*0x100270c89*/
  v28[8] = __dst[2]; /*0x100270c97*/
  v28[0] = v9; /*0x100270c9e*/
  v28[1] = v27[0]; /*0x100270cb3*/
  v28[2] = v27[1]; /*0x100270cba*/
  http::response::Parts::new::h962418c42e7bc305(__dst); /*0x100270cc8*/
  v11 = __dst[0]; /*0x100270ccd*/
  qmemcpy(v27, &__dst[1], sizeof(v27)); /*0x100270cea*/
  v12 = __dst[13]; /*0x100270ced*/
  v35 = *(_DWORD *)((char *)&__dst[13] + 2); /*0x100270cf5*/
  v36 = HIWORD(__dst[13]); /*0x100270cfc*/
  qmemcpy(__dst, v27, 0x60u); /*0x100270d0f*/
  v39 = HIWORD(__dst[13]); /*0x100270d16*/
  v38 = *(_DWORD *)((char *)&__dst[13] + 2); /*0x100270d1d*/
  if ( v11 != 3 ) /*0x100270d24*/
  {
    v12 = 200; /*0x100270d32*/
    if ( (unsigned __int16)(v4 - 100) < 0x384u ) /*0x100270d38*/
      v12 = v4; /*0x100270d38*/
    qmemcpy(__dst, v27, 0x60u); /*0x100270d4f*/
    v39 = v36; /*0x100270d56*/
    v38 = v35; /*0x100270d5d*/
  }
  v30[0] = v11; /*0x100270d60*/
  qmemcpy(&v30[1], __dst, 0x60u); /*0x100270d7a*/
  LOWORD(v30[13]) = v12; /*0x100270d7d*/
  *(_DWORD *)((char *)&v30[13] + 2) = v38; /*0x100270d88*/
  HIWORD(v30[13]) = v39; /*0x100270d92*/
  codexmate_lib::core::relay::proxy_passthrough::copy_response_headers_to_builder::hd61c366e5f16a0e6(__dst, v28, v30); /*0x100270db0*/
  qmemcpy(v30, __dst, sizeof(v30)); /*0x100270dcb*/
  v27[0] = "x-aimami-routerelay-responses-nativecodex native responses stream failedbuild error passthrough body failed"; /*0x100270dd5*/
  v27[1] = 14; /*0x100270ddc*/
  v27[2] = &unk_1015DE2A0; /*0x100270dee*/
  v27[3] = 25; /*0x100270df5*/
  http::response::Builder::and_then::h4e0760d990fde360(__dst, v30, v27); /*0x100270e11*/
  qmemcpy(v30, __dst, sizeof(v30)); /*0x100270e29*/
  v13 = v8; /*0x100270e3b*/
  memcpy(__dst, v8, sizeof(__dst)); /*0x100270e3e*/
  v14 = reqwest::async_impl::response::Response::bytes_stream::h4afb02b64d51c5f9(__dst); /*0x100270e4b*/
  v16 = v15; /*0x100270e4e*/
  __dst[0] = v14; /*0x100270e51*/
  __dst[1] = v15; /*0x100270e58*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v13); /*0x100270e5f*/
  v17 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 8); /*0x100270e6e*/
  if ( !v17 ) /*0x100270e76*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 16); /*0x100270fde*/
  *v17 = v14; /*0x100270e7c*/
  v17[1] = v16; /*0x100270e7f*/
  v18 = (__int64 (__fastcall **)())v30[0]; /*0x100270e83*/
  v19 = v30[1]; /*0x100270e8a*/
  v20 = (__int64 (__fastcall **)())v17; /*0x100270e9d*/
  if ( v30[0] == 3 ) /*0x100270ea0*/
  {
    v34 = v17; /*0x100270ea6*/
    LOBYTE(v33) = v30[1]; /*0x100270eaa*/
    v21 = BYTE1(v30[1]); /*0x100270eae*/
    if ( *(_QWORD *)v16 ) /*0x100270eb1*/
      (*(void (__fastcall **)(__int64))v16)(v14); /*0x100270ebd*/
    v22 = *(_QWORD *)(v16 + 8); /*0x100270ebf*/
    if ( v22 ) /*0x100270ec9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v22, *(_QWORD *)(v16 + 16)); /*0x100270ed2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, 16, 8); /*0x100270ee5*/
    LOBYTE(v38) = v33; /*0x100270eee*/
    BYTE1(v38) = v21; /*0x100270ef1*/
    v27[0] = &v38; /*0x100270ef8*/
    v27[1] = _$LT$http..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h4e78cc41db46f462; /*0x100270f06*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017B9F87, v27); /*0x100270f28*/
    v23 = __dst[1]; /*0x100270f2d*/
    v24 = v32; /*0x100270f48*/
    codexmate_lib::core::relay::proxy_passthrough::error_response::h71716868a9c3d7b2( /*0x100270f57*/
      v32,
      (_QWORD *)0x1F4,
      (void *)__dst[1],
      __dst[2],
      &unk_1015DE155,
      0x16u);
    if ( __dst[0] ) /*0x100270f66*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, __dst[0], 1); /*0x100270f70*/
  }
  else
  {
    v24 = v32; /*0x100270f7e*/
    v25 = BYTE1(v30[1]); /*0x100270f8c*/
    memcpy((char *)v32 + 10, (char *)&v30[1] + 2, 0x66u); /*0x100270f8f*/
    *v24 = v18; /*0x100270f94*/
    *((_BYTE *)v24 + 8) = v19; /*0x100270f98*/
    *((_BYTE *)v24 + 9) = v25; /*0x100270f9d*/
    v24[14] = v20; /*0x100270fa2*/
    v24[15] = &off_101960358; /*0x100270fae*/
  }
  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v28); /*0x100270fba*/
  return v24; /*0x100270fc2*/
}