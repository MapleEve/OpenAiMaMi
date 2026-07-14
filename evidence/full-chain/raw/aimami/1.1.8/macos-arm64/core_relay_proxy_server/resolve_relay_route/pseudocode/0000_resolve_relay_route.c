// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND resolve_relay_route node 0x1005a7aa0 depth=0
void *__fastcall codexmate_lib::core::relay::proxy_server::resolve_relay_route::hdc48096e003c90a9(
        _QWORD *__dst,
        __int64 a2,
        char *a3,
        size_t a4)
{
  size_t v4; // r12
  void *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  size_t v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  unsigned __int64 v18; // r14
  _QWORD __src[29]; // [rsp+8h] [rbp-148h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-60h] BYREF
  size_t __n; // [rsp+F8h] [rbp-58h]
  __int64 v22; // [rsp+100h] [rbp-50h]
  _QWORD *v23; // [rsp+108h] [rbp-48h]
  __int64 v24; // [rsp+110h] [rbp-40h]
  size_t v25; // [rsp+118h] [rbp-38h]
  void *__s2; // [rsp+120h] [rbp-30h]

  v4 = a4; /*0x1005a7ab4*/
  v6 = __dst; /*0x1005a7abd*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2( /*0x1005a7add*/
    __src,
    a3,
    a4,
    "::toolsimage_url[AiMaMi] image_url rejected by upstream; retrying with text fallback",
    2);
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1005a7ae9*/
    &v20,
    __src);
  if ( (_BYTE)v20 ) /*0x1005a7af2*/
  {
    __s2 = &a3[v22]; /*0x1005a7b02*/
    v25 = v4 - v22; /*0x1005a7b06*/
    v4 = __n; /*0x1005a7b0a*/
    v7 = *(_QWORD *)(a2 + 16); /*0x1005a7b0d*/
    if ( !v7 ) /*0x1005a7b14*/
      goto LABEL_12; /*0x1005a7b14*/
  }
  else
  {
    __s2 = nullptr; /*0x1005a7b1b*/
    v7 = *(_QWORD *)(a2 + 16); /*0x1005a7b23*/
    if ( !v7 ) /*0x1005a7b2a*/
    {
LABEL_12:
      *__dst = 0x8000000000000000LL; /*0x1005a7bb5*/
      return v6; /*0x1005a7bbf*/
    }
  }
  v8 = *(_QWORD *)(a2 + 8); /*0x1005a7b30*/
  v9 = 232 * v7; /*0x1005a7b34*/
  while ( *(_QWORD *)(v8 + 16) != v4 || memcmp(*(const void **)(v8 + 8), a3, v4) ) /*0x1005a7b67*/
  {
    v8 += 232; /*0x1005a7b40*/
    v9 -= 232; /*0x1005a7b47*/
    if ( !v9 ) /*0x1005a7b4e*/
      goto LABEL_12; /*0x1005a7b4e*/
  }
  _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005a7b73*/
    (__int64)__src,
    v8);
  if ( !__s2 ) /*0x1005a7b7d*/
    goto LABEL_33; /*0x1005a7b7d*/
  v23 = __dst; /*0x1005a7b83*/
  codexmate_lib::core::relay::models::RelayProvider::exposed_models::hd9dfa52e52b4bea1(&v20, v8); /*0x1005a7b8e*/
  v24 = v20; /*0x1005a7b97*/
  v10 = __n; /*0x1005a7b9b*/
  if ( !v22 ) /*0x1005a7ba6*/
  {
LABEL_20:
    v6 = v23; /*0x1005a7c39*/
    *v23 = 0x8000000000000000LL; /*0x1005a7c47*/
    if ( v24 ) /*0x1005a7c51*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a7c5f*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(__src); /*0x1005a7c6b*/
    return v6; /*0x1005a7c70*/
  }
  v11 = 32 * v22; /*0x1005a7bac*/
  v12 = 0; /*0x1005a7bb0*/
  while ( 1 ) /*0x1005a7bf9*/
  {
    v14 = *(_QWORD *)(v10 + v12); /*0x1005a7bf9*/
    v15 = *(_QWORD *)(v10 + v12 + 8); /*0x1005a7bfe*/
    if ( *(_QWORD *)(v10 + v12 + 16) != v25 || memcmp(*(const void **)(v10 + v12 + 8), __s2, v25) ) /*0x1005a7c19*/
    {
      if ( v14 ) /*0x1005a7c25*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a7c32*/
      goto LABEL_15; /*0x1005a7c37*/
    }
    if ( v14 != 0x8000000000000000LL ) /*0x1005a7be4*/
      break; /*0x1005a7be4*/
LABEL_15:
    v12 += 32; /*0x1005a7bf0*/
    if ( v11 == v12 ) /*0x1005a7bf7*/
      goto LABEL_20; /*0x1005a7bf7*/
  }
  LOBYTE(__s2) = *(_BYTE *)(v10 + v12 + 24); /*0x1005a7c7b*/
  if ( v11 - 32 != v12 ) /*0x1005a7c85*/
  {
    v16 = v11 - v12 - 32; /*0x1005a7c8a*/
    v17 = v10 + v12 + 40; /*0x1005a7c8e*/
    v18 = v16 >> 5; /*0x1005a7c93*/
    do /*0x1005a7ca7*/
    {
      if ( *(_QWORD *)(v17 - 8) ) /*0x1005a7ca9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a7cba*/
      v17 += 32; /*0x1005a7ca0*/
      --v18; /*0x1005a7ca4*/
    }
    while ( v18 ); /*0x1005a7ca7*/
  }
  if ( v24 ) /*0x1005a7cc8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a7cd6*/
  v6 = v23; /*0x1005a7ce5*/
  if ( __src[12] ) /*0x1005a7ce9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a7cf7*/
  __src[12] = v14; /*0x1005a7cfc*/
  __src[13] = v15; /*0x1005a7d03*/
  __src[14] = v25; /*0x1005a7d0e*/
  BYTE6(__src[28]) = (_BYTE)__s2; /*0x1005a7d19*/
LABEL_33:
  memcpy(v6, __src, 0xE8u); /*0x1005a7d1c*/
  return v6; /*0x1005a7bc5*/
}