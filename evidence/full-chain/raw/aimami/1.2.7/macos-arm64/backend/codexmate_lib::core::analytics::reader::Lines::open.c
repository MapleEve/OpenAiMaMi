// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::Lines::open::h5a62474f0cd03178; addr: 0x1009c0960; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
// positive sp value has been detected, the output may be wrong!
_QWORD *__fastcall codexmate_lib::core::analytics::reader::Lines::open::h5a62474f0cd03178(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int8 (__fastcall *v6)(__int64); // r14
  __int64 v7; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 (__fastcall **v19)(); // r13
  __int64 (__fastcall *v20)(); // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rdx
  void *v27; // rax
  _QWORD v28[34]; // [rsp+0h] [rbp-10138h] BYREF
  __int64 v29; // [rsp+110h] [rbp-10028h] BYREF
  __int64 v30; // [rsp+1110h] [rbp-F028h] BYREF
  _BYTE v31[72]; // [rsp+10000h] [rbp-138h] BYREF
  _QWORD v32[14]; // [rsp+10048h] [rbp-F0h] BYREF
  _QWORD v33[9]; // [rsp+100B8h] [rbp-80h] BYREF
  unsigned __int64 v34; // [rsp+10100h] [rbp-38h] BYREF
  _DWORD v35[11]; // [rsp+1010Ch] [rbp-2Ch] BYREF

  do /*0x1009c0989*/
    v29 = 0; /*0x1009c097e*/
  while ( &v29 != &v30 - 0x2000 ); /*0x1009c0989*/
  v34 = a3; /*0x1009c0995*/
  v6 = *(unsigned __int8 (__fastcall **)(__int64))(a5 + 40); /*0x1009c099f*/
  if ( !v6(a4) ) /*0x1009c09ab*/
  {
    a1[1] = 0; /*0x1009c0a14*/
    goto LABEL_7; /*0x1009c0a14*/
  }
  LODWORD(v32[0]) = 0; /*0x1009c09ad*/
  WORD2(v32[0]) = 438; /*0x1009c09b7*/
  *(_DWORD *)((char *)v32 + 6) = 1; /*0x1009c09c0*/
  WORD1(v32[1]) = 0; /*0x1009c09ca*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v28, v32, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32)); /*0x1009c09f2*/
  if ( LOBYTE(v28[0]) ) /*0x1009c09fe*/
  {
    v7 = v28[1]; /*0x1009c0a00*/
LABEL_5:
    *a1 = 2; /*0x1009c0a07*/
    a1[1] = v7; /*0x1009c0a0e*/
    return a1; /*0x1009c0a12*/
  }
  v35[0] = HIDWORD(v28[0]); /*0x1009c0a3e*/
  if ( !*(_BYTE *)(a2 + 40) ) /*0x1009c0a47*/
  {
    if ( (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h9f4cbd6fbcee8df4(v35, 0, v34) & 1) != 0 ) /*0x1009c0b30*/
    {
      *a1 = 2; /*0x1009c0b32*/
      a1[1] = v12; /*0x1009c0b39*/
      close_NOCANCEL(v35[0]); /*0x1009c0b40*/
      return a1; /*0x1009c0b45*/
    }
    v13 = v35[0]; /*0x1009c0b4a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35, 0, v12); /*0x1009c0b4e*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x1009c0b5d*/
    if ( !v14 ) /*0x1009c0b65*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x1009c0e5f*/
    v28[0] = v14; /*0x1009c0b6b*/
    v28[1] = 0x2000; /*0x1009c0b72*/
    memset(&v28[2], 0, 24); /*0x1009c0b7d*/
    LODWORD(v28[5]) = v13; /*0x1009c0b9e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(0x2000, 1, v15); /*0x1009c0ba5*/
    v16 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 8); /*0x1009c0bb4*/
    if ( !v16 ) /*0x1009c0bbc*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 48); /*0x1009c0e4e*/
    v17 = v16; /*0x1009c0bc2*/
    v16[5] = v28[5]; /*0x1009c0bcc*/
    v16[4] = v28[4]; /*0x1009c0bd8*/
    v16[3] = v28[3]; /*0x1009c0be4*/
    v16[2] = v28[2]; /*0x1009c0bf0*/
    v18 = v28[0]; /*0x1009c0bf5*/
    v17[1] = v28[1]; /*0x1009c0c03*/
    *v17 = v18; /*0x1009c0c08*/
    v19 = &off_101AB9D10; /*0x1009c0c0c*/
    goto LABEL_21; /*0x1009c0c0c*/
  }
  ((void (__fastcall *)(_QWORD *))zstd::stream::read::Decoder$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$GT$::new::h03f75eaf8d0f8d56)(v28); /*0x1009c0a54*/
  v7 = v28[1]; /*0x1009c0a60*/
  v9 = v34; /*0x1009c0a6b*/
  if ( v28[0] == 2 ) /*0x1009c0a6f*/
    goto LABEL_5; /*0x1009c0a6f*/
  v33[8] = v28[8]; /*0x1009c0a78*/
  v33[7] = v28[7]; /*0x1009c0a83*/
  v33[6] = v28[6]; /*0x1009c0a8e*/
  v33[5] = v28[5]; /*0x1009c0a99*/
  v33[4] = v28[4]; /*0x1009c0aa4*/
  v33[3] = v28[3]; /*0x1009c0ab6*/
  v33[2] = v28[2]; /*0x1009c0aba*/
  v33[0] = v28[0]; /*0x1009c0abe*/
  v33[1] = v28[1]; /*0x1009c0ac2*/
  v10 = ((__int64 (__fastcall *)(_QWORD *, __int64))zstd::stream::raw::Decoder::set_parameter::hf2360a83731e9e58)( /*0x1009c0acf*/
          v33,
          27);
  if ( v10 ) /*0x1009c0ad7*/
  {
    *a1 = 2; /*0x1009c0add*/
    a1[1] = v10; /*0x1009c0ae4*/
    if ( v33[3] ) /*0x1009c0aef*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33[2], v33[3], 1); /*0x1009c0afa*/
    close_NOCANCEL(LODWORD(v33[7])); /*0x1009c0b02*/
    if ( !LOBYTE(v33[0]) ) /*0x1009c0b0b*/
      _$LT$zstd_safe..DCtx$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9ee84cf7d30fa273(&v33[1]); /*0x1009c0b15*/
    return a1; /*0x1009c0b1a*/
  }
  qmemcpy(v31, v33, sizeof(v31)); /*0x1009c0c80*/
  qmemcpy(v28, v33, 0x48u); /*0x1009c0c92*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v28[9], &v34, v11); /*0x1009c0c95*/
  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2000, 1); /*0x1009c0ca4*/
  if ( !v21 ) /*0x1009c0cac*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 0x2000); /*0x1009c0e70*/
  v32[0] = v21; /*0x1009c0cb2*/
  v32[1] = 0x2000; /*0x1009c0cb9*/
  memset(&v32[2], 0, 24); /*0x1009c0ccb*/
  qmemcpy(&v32[5], v31, 0x48u); /*0x1009c0cf8*/
  if ( !v9 ) /*0x1009c0cfe*/
  {
LABEL_37:
    qmemcpy(v28, v32, 0x70u); /*0x1009c0d6c*/
    v17 = (_QWORD *)alloc::alloc::exchange_malloc::h35ae2f61eae31883(); /*0x1009c0d74*/
    qmemcpy(v17, v28, 0x70u); /*0x1009c0d86*/
    v19 = &off_101AB9D98; /*0x1009c0d89*/
LABEL_21:
    if ( !v6(a4) ) /*0x1009c0c1b*/
    {
      a1[1] = 0; /*0x1009c0c32*/
      *a1 = 11; /*0x1009c0c3a*/
      if ( *v19 ) /*0x1009c0c41*/
        ((void (__fastcall *)(_QWORD *))*v19)(v17); /*0x1009c0c4d*/
      v20 = v19[1]; /*0x1009c0c4f*/
      if ( v20 ) /*0x1009c0c56*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v20, v19[2]); /*0x1009c0c63*/
      return a1; /*0x1009c0c68*/
    }
    a1[1] = v17; /*0x1009c0c1d*/
    a1[2] = v19; /*0x1009c0c21*/
    a1[3] = v34; /*0x1009c0c29*/
LABEL_7:
    *a1 = 11; /*0x1009c0a1c*/
    return a1; /*0x1009c0a1c*/
  }
  __bzero(v28, 0x10000); /*0x1009c0d0c*/
  while ( 1 ) /*0x1009c0d11*/
  {
    if ( !v6(a4) ) /*0x1009c0d19*/
    {
LABEL_38:
      a1[1] = 0; /*0x1009c0d95*/
      *a1 = 11; /*0x1009c0d9d*/
      goto LABEL_42; /*0x1009c0da4*/
    }
    v22 = 0x10000; /*0x1009c0d22*/
    if ( v9 < 0x10000 ) /*0x1009c0d27*/
      v22 = v9; /*0x1009c0d27*/
    v23 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64))_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h123c62c8de202535)( /*0x1009c0d39*/
            v32,
            v28,
            v22);
    v25 = v24; /*0x1009c0d3e*/
    if ( (v23 & 1) != 0 ) /*0x1009c0d43*/
    {
      *a1 = 2; /*0x1009c0da9*/
      a1[1] = v24; /*0x1009c0db0*/
      goto LABEL_42; /*0x1009c0db4*/
    }
    if ( !v6(a4) ) /*0x1009c0d4d*/
      goto LABEL_38; /*0x1009c0d4d*/
    if ( !v25 ) /*0x1009c0d52*/
      break; /*0x1009c0d52*/
    v9 -= v25; /*0x1009c0d54*/
    if ( !v9 ) /*0x1009c0d57*/
      goto LABEL_37; /*0x1009c0d57*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a4, v28, v26); /*0x1009c0db6*/
  v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x1009c0dc5*/
  if ( !v27 ) /*0x1009c0dcd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x1009c0e81*/
  qmemcpy(v27, "analytics compressed checkpoint changed", 39); /*0x1009c0e15*/
  *a1 = 9; /*0x1009c0e18*/
  a1[1] = 39; /*0x1009c0e1f*/
  a1[2] = v27; /*0x1009c0e27*/
  a1[3] = 39; /*0x1009c0e2b*/
LABEL_42:
  ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$zstd..stream..read..Decoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$$GT$::hbe6556c02d884408)(v32); /*0x1009c0e33*/
  return a1; /*0x1009c0a2d*/
}