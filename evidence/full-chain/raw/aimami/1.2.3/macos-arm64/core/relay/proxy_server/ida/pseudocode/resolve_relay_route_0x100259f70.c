// __ZN13codexmate_lib4core5relay12proxy_server19resolve_relay_route @ 0x100259f70 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::proxy_server::resolve_relay_route::he8d67a121f56dd01(
        void *a1,
        __int64 a2,
        char *a3,
        size_t a4)
{
  size_t v4; // r15
  char *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  void *v10; // rbx
  __int64 v12; // r14
  __int64 v13; // r12
  char v14; // bl
  _QWORD __src[30]; // [rsp+8h] [rbp-1D8h] BYREF
  __int64 v16; // [rsp+F8h] [rbp-E8h]
  __int64 v17; // [rsp+100h] [rbp-E0h]
  __int64 v18; // [rsp+108h] [rbp-D8h]
  _QWORD v19[2]; // [rsp+110h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+120h] [rbp-C0h] BYREF
  size_t __n; // [rsp+128h] [rbp-B8h]
  __int64 v22; // [rsp+130h] [rbp-B0h]
  __int64 v23; // [rsp+138h] [rbp-A8h]
  __int64 v24; // [rsp+140h] [rbp-A0h]
  __int64 v25; // [rsp+148h] [rbp-98h]
  size_t v26; // [rsp+150h] [rbp-90h]
  __int64 v27; // [rsp+160h] [rbp-80h]
  __int64 v28; // [rsp+168h] [rbp-78h]
  char v29; // [rsp+178h] [rbp-68h]
  _QWORD v30[4]; // [rsp+180h] [rbp-60h] BYREF
  __int64 v31; // [rsp+1A0h] [rbp-40h]
  void *__dst; // [rsp+1A8h] [rbp-38h]
  size_t v33; // [rsp+1B0h] [rbp-30h]

  v4 = a4; /*0x100259f84*/
  __dst = a1; /*0x100259f8d*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2( /*0x100259fae*/
    __src,
    a3,
    a4,
    "::toolsimage_url[AiMaMi] image_url rejected by upstream; retrying with text fallbackexpect",
    2);
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x100259fbd*/
    &v20,
    __src);
  if ( (_BYTE)v20 ) /*0x100259fc9*/
  {
    v6 = &a3[v22]; /*0x100259fdc*/
    v33 = v4 - v22; /*0x100259fdf*/
    v4 = __n; /*0x100259fe3*/
    v7 = *(_QWORD *)(a2 + 16); /*0x100259fe6*/
    if ( !v7 ) /*0x100259fee*/
      goto LABEL_12; /*0x100259fee*/
  }
  else
  {
    v6 = nullptr; /*0x100259ff5*/
    v7 = *(_QWORD *)(a2 + 16); /*0x100259ff8*/
    if ( !v7 ) /*0x10025a000*/
    {
LABEL_12:
      v10 = __dst; /*0x10025a100*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10025a10e*/
      return v10; /*0x10025a10e*/
    }
  }
  v8 = *(_QWORD *)(a2 + 8); /*0x10025a006*/
  v9 = 232 * v7; /*0x10025a00b*/
  while ( *(_QWORD *)(v8 + 16) != v4 || memcmp(*(const void **)(v8 + 8), a3, v4) ) /*0x10025a04d*/
  {
    v8 += 232; /*0x10025a020*/
    v9 -= 232; /*0x10025a027*/
    if ( !v9 ) /*0x10025a02e*/
      goto LABEL_12; /*0x10025a02e*/
  }
  _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec( /*0x10025a059*/
    __src,
    v8);
  if ( !v6 ) /*0x10025a061*/
  {
LABEL_20:
    v10 = __dst; /*0x10025a205*/
    memcpy(__dst, __src, 0xE8u); /*0x10025a218*/
    return v10; /*0x10025a21d*/
  }
  v19[0] = v6; /*0x10025a067*/
  v19[1] = v33; /*0x10025a072*/
  codexmate_lib::core::relay::models::RelayProvider::exposed_models::h9992f3acf525d658(&v20, v8); /*0x10025a083*/
  v30[0] = __n; /*0x10025a0a8*/
  v30[2] = v20; /*0x10025a0ac*/
  v30[1] = __n; /*0x10025a0b0*/
  v30[3] = __n + 96 * v22; /*0x10025a0b4*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hb7389c7acd37b140( /*0x10025a0ca*/
    &v20,
    v30,
    v19);
  if ( (_DWORD)v20 != 2 ) /*0x10025a0d6*/
  {
    v18 = v24; /*0x10025a12d*/
    v17 = v23; /*0x10025a13b*/
    v16 = v22; /*0x10025a150*/
    __src[29] = __n; /*0x10025a157*/
    v12 = v25; /*0x10025a165*/
    v33 = v26; /*0x10025a173*/
    v13 = v27; /*0x10025a177*/
    v31 = v28; /*0x10025a17f*/
    v14 = v29; /*0x10025a183*/
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2fd3f8b631529bdb(v30); /*0x10025a18b*/
    if ( __src[12] ) /*0x10025a1a1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[13], __src[12], 1); /*0x10025a1af*/
    __src[14] = v18; /*0x10025a1b8*/
    __src[13] = v17; /*0x10025a1c3*/
    __src[12] = v16; /*0x10025a1c7*/
    BYTE6(__src[28]) = v14; /*0x10025a1cb*/
    if ( 2 * v13 ) /*0x10025a1d1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v13, 1); /*0x10025a1ea*/
    if ( v12 ) /*0x10025a1f2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v12, 1); /*0x10025a200*/
    goto LABEL_20; /*0x10025a200*/
  }
  v10 = __dst; /*0x10025a0e2*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10025a0e6*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2fd3f8b631529bdb(v30); /*0x10025a0ed*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__src); /*0x10025a0f9*/
  return v10; /*0x10025a114*/
}