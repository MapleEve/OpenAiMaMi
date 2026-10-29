// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_reset_credits::fetch_json::hec184fecb2319124; addr: 0x1009fbb70; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::account_reset_credits::fetch_json::hec184fecb2319124(
        __int64 a1,
        _DWORD a2,
        _DWORD a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int16 v12; // r14
  __int64 v13; // rdx
  void *v14; // rax
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  void *v19; // rax
  void *v20; // r15
  __int64 v21; // rsi
  _BYTE __src[328]; // [rsp+8h] [rbp-4F8h] BYREF
  _OWORD v23[11]; // [rsp+150h] [rbp-3B0h] BYREF
  _BYTE v24[24]; // [rsp+200h] [rbp-300h] BYREF
  _QWORD __dst[41]; // [rsp+218h] [rbp-2E8h] BYREF
  _BYTE v26[328]; // [rsp+360h] [rbp-1A0h] BYREF
  __int64 v27; // [rsp+4A8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+4B0h] [rbp-50h]
  unsigned __int64 v29; // [rsp+4B8h] [rbp-48h]
  __int128 v30; // [rsp+4C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+4D0h] [rbp-30h]

  codexmate_lib::core::api_client::http_client::ha41930d6b7578003(__dst, a5); /*0x1009fbb9d*/
  result = __dst[0]; /*0x1009fbba2*/
  *(_OWORD *)v26 = *(_OWORD *)&__dst[1]; /*0x1009fbbb0*/
  *(_QWORD *)&v26[16] = __dst[3]; /*0x1009fbbcc*/
  if ( __dst[0] != 11 ) /*0x1009fbbd7*/
  {
    *(_QWORD *)(a1 + 88) = __dst[11]; /*0x1009fbe03*/
    *(_QWORD *)(a1 + 80) = __dst[10]; /*0x1009fbe0e*/
    *(_QWORD *)(a1 + 72) = __dst[9]; /*0x1009fbe19*/
    *(_QWORD *)(a1 + 64) = __dst[8]; /*0x1009fbe24*/
    *(_QWORD *)(a1 + 56) = __dst[7]; /*0x1009fbe2f*/
    *(_QWORD *)(a1 + 48) = __dst[6]; /*0x1009fbe3a*/
    v11 = __dst[4]; /*0x1009fbe3e*/
    *(_QWORD *)(a1 + 40) = __dst[5]; /*0x1009fbe4c*/
    *(_QWORD *)(a1 + 32) = v11; /*0x1009fbe50*/
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v26[16]; /*0x1009fbe5b*/
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v26; /*0x1009fbe71*/
    *(_QWORD *)a1 = result; /*0x1009fbe75*/
    return result; /*0x1009fbe78*/
  }
  v30 = *(_OWORD *)v26; /*0x1009fbbeb*/
  v31 = *(_QWORD *)&v26[16]; /*0x1009fbbfa*/
  memset(v26, 1, 24); /*0x1009fbc16*/
  reqwest::blocking::client::Client::request::h200919eb5fc8df84(__dst); /*0x1009fbc35*/
  *(_QWORD *)v26 = a4; /*0x1009fbc3a*/
  *(_QWORD *)&v26[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1009fbc48*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1018F9A77, v26); /*0x1009fbc64*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h91958af44c0f1565(v26, __dst); /*0x1009fbc8d*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h8e528ddd05277a5c(__dst, v26); /*0x1009fbcb6*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h133577c2a04d8ea6(v26, __dst, 0); /*0x1009fbce9*/
  reqwest::blocking::request::RequestBuilder::header_sensitive::h133577c2a04d8ea6(__src, v26, 0); /*0x1009fbd1c*/
  if ( a6 != 0 && a7 != 0 ) /*0x1009fbd2e*/
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x1009fbd4b*/
    *(_QWORD *)&v23[0] = "cursor"; /*0x1009fbd57*/
    *((_QWORD *)&v23[0] + 1) = 6; /*0x1009fbd5e*/
    *(_QWORD *)&v23[1] = a6; /*0x1009fbd69*/
    *((_QWORD *)&v23[1] + 1) = a7; /*0x1009fbd70*/
    reqwest::blocking::request::RequestBuilder::query::h6617139de43e4560(v26, __dst); /*0x1009fbd88*/
    memcpy(__src, v26, sizeof(__src)); /*0x1009fbda0*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1009fbdbb*/
  reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(v26, __dst); /*0x1009fbdca*/
  if ( *(_QWORD *)v26 == 3 ) /*0x1009fbdda*/
  {
    v10 = reqwest::error::Error::without_url::hd3bcffd7643367fc(*(_QWORD *)&v26[8]); /*0x1009fbde7*/
    *(_QWORD *)a1 = 6; /*0x1009fbdec*/
    *(_QWORD *)(a1 + 8) = v10; /*0x1009fbdf3*/
    goto LABEL_21; /*0x1009fbdf7*/
  }
  qmemcpy((char *)&v23[1] + 8, &v26[24], 0x50u); /*0x1009fbe9e*/
  qmemcpy((char *)&v23[6] + 8, &v26[104], 0x48u); /*0x1009fbeb4*/
  v23[0] = *(_OWORD *)v26; /*0x1009fbeb7*/
  *(_QWORD *)&v23[1] = *(_QWORD *)&v26[16]; /*0x1009fbec5*/
  v12 = WORD4(v23[6]); /*0x1009fbecc*/
  if ( (unsigned __int16)(WORD4(v23[6]) - 200) >= 0x64u ) /*0x1009fbede*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, &v26[176], *(_QWORD *)&v26[8]); /*0x1009fbf5b*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1009fbf6a*/
    if ( !v14 ) /*0x1009fbf72*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1009fc1fa*/
    qmemcpy(v14, "reset-credit details", 20); /*0x1009fbf90*/
    *(_QWORD *)a1 = 7; /*0x1009fbf9a*/
    *(_QWORD *)(a1 + 8) = 20; /*0x1009fbfa1*/
    *(_QWORD *)(a1 + 16) = v14; /*0x1009fbfa9*/
    *(_QWORD *)(a1 + 24) = 20; /*0x1009fbfad*/
    *(_WORD *)(a1 + 32) = v12; /*0x1009fbfb5*/
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h64348cee0a154aa1(v23); /*0x1009fbfc1*/
    goto LABEL_21; /*0x1009fbfc6*/
  }
  memcpy(__dst, v23, 0xB0u); /*0x1009fbef6*/
  v27 = 0; /*0x1009fbefb*/
  v28 = 1; /*0x1009fbf03*/
  v29 = 0; /*0x1009fbf0b*/
  __dst[22] = 524289; /*0x1009fbf13*/
  __dst[23] = 524289; /*0x1009fbf1e*/
  if ( (std::io::default_read_to_end::haf8d701c48de2f9e(__dst, &v27, 0) & 1) != 0 ) /*0x1009fbf39*/
  {
    *(_QWORD *)a1 = 2; /*0x1009fbf3f*/
    *(_QWORD *)(a1 + 8) = v13; /*0x1009fbf46*/
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h64348cee0a154aa1(__dst); /*0x1009fbf51*/
    goto LABEL_19; /*0x1009fbf56*/
  }
  core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h64348cee0a154aa1(__dst); /*0x1009fbfd2*/
  if ( v29 > 0x80000 ) /*0x1009fbfe1*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, &v27, v15); /*0x1009fbfe7*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1009fbff6*/
    if ( !v16 ) /*0x1009fbffe*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1009fc20b*/
    qmemcpy(v16, "Reset credit details returned an invalid response", 49); /*0x1009fc054*/
    *(_QWORD *)a1 = 9; /*0x1009fc05b*/
    *(_QWORD *)(a1 + 8) = 49; /*0x1009fc062*/
    *(_QWORD *)(a1 + 16) = v16; /*0x1009fc06a*/
LABEL_18:
    *(_QWORD *)(a1 + 24) = 49; /*0x1009fc16e*/
LABEL_19:
    v21 = v27; /*0x1009fc176*/
    if ( !v27 ) /*0x1009fc17d*/
      goto LABEL_21; /*0x1009fc17d*/
    goto LABEL_20; /*0x1009fc17d*/
  }
  __dst[0] = v28; /*0x1009fc077*/
  *(_OWORD *)&__dst[1] = v29; /*0x1009fc07e*/
  __dst[3] = 0; /*0x1009fc090*/
  serde_json::de::from_trait::h89c510e88e63bfb2(v26, __dst); /*0x1009fc0a9*/
  if ( v26[0] == 6 ) /*0x1009fc0b5*/
  {
    v18 = *(_QWORD *)&v26[8]; /*0x1009fc0bb*/
    __dst[0] = *(_QWORD *)&v26[8]; /*0x1009fc0c2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, __dst, v17); /*0x1009fc0c9*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1009fc0d8*/
    if ( !v19 ) /*0x1009fc0e0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1009fc21c*/
    v20 = v19; /*0x1009fc0e6*/
    qmemcpy(v19, "Reset credit details returned an invalid response", 49); /*0x1009fc139*/
    core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::hadb49e5de99507f8(v18); /*0x1009fc144*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 40, 8); /*0x1009fc156*/
    *(_QWORD *)a1 = 9; /*0x1009fc15b*/
    *(_QWORD *)(a1 + 8) = 49; /*0x1009fc162*/
    *(_QWORD *)(a1 + 16) = v20; /*0x1009fc16a*/
    goto LABEL_18; /*0x1009fc16a*/
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v26[24]; /*0x1009fc1b9*/
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&v26[16]; /*0x1009fc1c4*/
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v26; /*0x1009fc1da*/
  *(_QWORD *)a1 = 11; /*0x1009fc1de*/
  v21 = v27; /*0x1009fc1e5*/
  if ( v27 ) /*0x1009fc1ec*/
LABEL_20:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v21, 1); /*0x1009fc17f*/
LABEL_21:
  result = v30; /*0x1009fc18d*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v30) ) /*0x1009fc191*/
    return alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v30); /*0x1009fc19b*/
  return result; /*0x1009fc1a0*/
}