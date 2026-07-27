// __ZN13codexmate_lib8commands6system34load_api_request_context_from_repo @ 0x1007ccda0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::load_api_request_context_from_repo::ha1762a10040204c0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rcx
  void **v10; // r15
  __int64 v11; // r13
  int v12; // ecx
  const void *v13; // r13
  size_t v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  void **v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  void **v25; // rax
  void **v27; // [rsp+8h] [rbp-1A8h] BYREF
  _QWORD __dst[21]; // [rsp+10h] [rbp-1A0h] BYREF
  void **v29; // [rsp+B8h] [rbp-F8h] BYREF
  _QWORD __src[21]; // [rsp+C0h] [rbp-F0h] BYREF
  _DWORD v31[2]; // [rsp+16Ch] [rbp-44h]
  unsigned int v32; // [rsp+174h] [rbp-3Ch]
  __int64 v33; // [rsp+178h] [rbp-38h]
  _BYTE v34[41]; // [rsp+187h] [rbp-29h] BYREF

  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1007ccdc9*/
  if ( !v3 ) /*0x1007ccdd1*/
  {
    v29 = (void **)&anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1007ccefc*/
    __src[0] = 76; /*0x1007ccf03*/
    v27 = (void **)&v29; /*0x1007ccf15*/
    __dst[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007ccf23*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1007ccf3f*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v27,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = v3; /*0x1007ccdd7*/
  v5 = *v3; /*0x1007ccdda*/
  if ( !*v3 ) /*0x1007ccdda*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3); /*0x1007ccf4c*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1007ccde6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x1007ccf59*/
    LOBYTE(v8) = v8 ^ 1; /*0x1007ccf5c*/
    if ( *((_BYTE *)v4 + 8) ) /*0x1007ccf6a*/
      goto LABEL_6; /*0x1007ccf72*/
  }
  else
  {
    v8 = 0; /*0x1007cce02*/
    if ( *((_BYTE *)v4 + 8) )
    {
LABEL_6:
      v29 = nullptr; /*0x1007cce1d*/
      __src[0] = 1; /*0x1007cce28*/
      __src[1] = 0; /*0x1007cce33*/
      __dst[1] = 1610612768; /*0x1007cce3e*/
      v27 = (void **)&v29; /*0x1007cce50*/
      __dst[0] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007cce5e*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v27) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cd293*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v34,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v9 = v8; /*0x1007cce88*/
      v10 = v29; /*0x1007cce8b*/
      v11 = __src[0]; /*0x1007cce92*/
      LOBYTE(v33) = __src[1]; /*0x1007ccea0*/
      v31[0] = *(_DWORD *)((char *)&__src[1] + 1); /*0x1007ccea9*/
      *(_DWORD *)((char *)v31 + 3) = HIDWORD(__src[1]); /*0x1007cceb2*/
      if ( !(_BYTE)v9
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               v9) )
      {
        *((_BYTE *)v4 + 8) = 1; /*0x1007cd2a7*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1007ccec9*/
      *(_QWORD *)(a1 + 8) = v10; /*0x1007ccece*/
      *(_QWORD *)(a1 + 16) = v11; /*0x1007cced2*/
      *(_BYTE *)(a1 + 24) = v33; /*0x1007cceda*/
      v12 = *(_DWORD *)((char *)v31 + 3); /*0x1007ccee0*/
      *(_DWORD *)(a1 + 25) = v31[0]; /*0x1007ccee3*/
      *(_DWORD *)(a1 + 28) = v12; /*0x1007ccee6*/
      *(_QWORD *)a1 = 0x8000000000000001LL; /*0x1007cceed*/
      return a1; /*0x1007ccef0*/
    }
  }
  v32 = v8; /*0x1007ccf78*/
  v13 = (const void *)v4[6]; /*0x1007ccf7c*/
  v14 = v4[7]; /*0x1007ccf81*/
  if ( v14 ) /*0x1007ccf89*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, a2); /*0x1007ccf8b*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x1007ccf9d*/
    if ( !v15 ) /*0x1007ccfa3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14); /*0x1007ccfad*/
  }
  else
  {
    v15 = 1; /*0x1007ccfb7*/
  }
  v33 = v15; /*0x1007ccfbc*/
  memcpy((void *)v15, v13, v14); /*0x1007ccfc6*/
  if ( !(_BYTE)v32 /*0x1007cd2b2*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v13, v16, v17) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x1007cd2bf*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1007ccfe8*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(&v29, v33, v14); /*0x1007ccffb*/
  v18 = v29; /*0x1007cd000*/
  if ( v29 == (void **)0x8000000000000001LL ) /*0x1007cd015*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x1007cd01a*/
    v29 = (void **)0x8000000000000000LL; /*0x1007cd022*/
    goto LABEL_27; /*0x1007cd029*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1007cd03a*/
  v27 = v29; /*0x1007cd03f*/
  codexmate_lib::core::auth::make_api_request_context::hf723ba8d82108568(&v29, &v27); /*0x1007cd054*/
  if ( 2LL * (_QWORD)v18 ) /*0x1007cd059*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0], v18, 1); /*0x1007cd175*/
    v19 = __dst[2]; /*0x1007cd17a*/
    if ( !(2LL * __dst[2]) ) /*0x1007cd18c*/
    {
LABEL_22:
      v20 = __dst[5]; /*0x1007cd082*/
      if ( !(2LL * __dst[5]) ) /*0x1007cd089*/
        goto LABEL_23; /*0x1007cd094*/
      goto LABEL_32; /*0x1007cd094*/
    }
  }
  else
  {
    v19 = __dst[2]; /*0x1007cd06a*/
    if ( !(2LL * __dst[2]) ) /*0x1007cd071*/
      goto LABEL_22; /*0x1007cd07c*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[3], v19, 1); /*0x1007cd19e*/
  v20 = __dst[5]; /*0x1007cd1a3*/
  if ( !(2LL * __dst[5]) ) /*0x1007cd1b5*/
  {
LABEL_23:
    v21 = __dst[8]; /*0x1007cd09a*/
    if ( !(2LL * __dst[8]) ) /*0x1007cd0a1*/
      goto LABEL_24; /*0x1007cd0ac*/
    goto LABEL_33; /*0x1007cd0ac*/
  }
LABEL_32:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[6], v20, 1); /*0x1007cd1bb*/
  v21 = __dst[8]; /*0x1007cd1cc*/
  if ( !(2LL * __dst[8]) ) /*0x1007cd1de*/
  {
LABEL_24:
    v22 = __dst[11]; /*0x1007cd0b2*/
    if ( !(2LL * __dst[11]) ) /*0x1007cd0b9*/
      goto LABEL_25; /*0x1007cd0c4*/
    goto LABEL_34; /*0x1007cd0c4*/
  }
LABEL_33:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[9], v21, 1); /*0x1007cd1e4*/
  v22 = __dst[11]; /*0x1007cd1f5*/
  if ( !(2LL * __dst[11]) ) /*0x1007cd207*/
  {
LABEL_25:
    v23 = __dst[14]; /*0x1007cd0ca*/
    if ( !(2LL * __dst[14]) ) /*0x1007cd0d1*/
      goto LABEL_26; /*0x1007cd0dc*/
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[15], v23, 1); /*0x1007cd236*/
    v24 = __dst[17]; /*0x1007cd247*/
    if ( !(2LL * __dst[17]) ) /*0x1007cd259*/
      goto LABEL_27; /*0x1007cd259*/
    goto LABEL_36; /*0x1007cd259*/
  }
LABEL_34:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[12], v22, 1); /*0x1007cd20d*/
  v23 = __dst[14]; /*0x1007cd21e*/
  if ( 2LL * __dst[14] ) /*0x1007cd225*/
    goto LABEL_35; /*0x1007cd230*/
LABEL_26:
  v24 = __dst[17]; /*0x1007cd0e2*/
  if ( !(2LL * __dst[17]) ) /*0x1007cd0e9*/
    goto LABEL_27; /*0x1007cd0f4*/
LABEL_36:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[18], v24, 1); /*0x1007cd25f*/
LABEL_27:
  *(_QWORD *)(a1 + 40) = __src[4]; /*0x1007cd0fa*/
  *(_QWORD *)(a1 + 32) = __src[3]; /*0x1007cd10c*/
  *(_QWORD *)(a1 + 24) = __src[2]; /*0x1007cd117*/
  *(_QWORD *)(a1 + 16) = __src[1]; /*0x1007cd122*/
  v25 = v29; /*0x1007cd126*/
  *(_QWORD *)(a1 + 8) = __src[0]; /*0x1007cd134*/
  *(_QWORD *)a1 = v25; /*0x1007cd138*/
  if ( v14 ) /*0x1007cd13e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v14, 1); /*0x1007cd14c*/
  return a1; /*0x1007cd154*/
}