// __ZN13codexmate_lib4core5relay7manager12RelayManager28set_claude_web_search_compat @ 0x10079bbc0 | 1.2.4 NEW-delta
char *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_claude_web_search_compat::h5ac55fc2bdf61393(
        char *__dst,
        _QWORD *a2,
        int a3)
{
  __int64 v5; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdi
  char v16; // cl
  char v17; // r13
  __int64 v18; // rsi
  _BYTE v20[318]; // [rsp+0h] [rbp-330h] BYREF
  char v21; // [rsp+13Eh] [rbp-1F2h]
  _DWORD v22[24]; // [rsp+140h] [rbp-1F0h] BYREF
  _QWORD __src[40]; // [rsp+1A0h] [rbp-190h] BYREF
  int v24; // [rsp+2E4h] [rbp-4Ch]
  __int64 v25; // [rsp+2E8h] [rbp-48h]
  _QWORD *v26; // [rsp+2F0h] [rbp-40h]
  _QWORD *v27; // [rsp+2F8h] [rbp-38h]
  int v28; // [rsp+304h] [rbp-2Ch]

  v5 = a2[2]; /*0x10079bbe4*/
  if ( *(_QWORD *)(v5 + 16) != 0x8000000000000000LL ) /*0x10079bbf0*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__src[1], v5 + 16); /*0x10079bd2e*/
    __src[0] = 9; /*0x10079bd33*/
    qmemcpy(__dst + 8, __src, 0x60u); /*0x10079bd4e*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10079bd51*/
    return __dst; /*0x10079bd54*/
  }
  v7 = a2[4]; /*0x10079bbf9*/
  v27 = (_QWORD *)(v7 + 16); /*0x10079bc02*/
  v8 = *(_QWORD *)(v7 + 16); /*0x10079bc06*/
  if ( !v8 ) /*0x10079bc0d*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h719e63cd76cd1e9b(v27); /*0x10079bd62*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x10079bc13*/
  v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x10079bc22*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10079bc2f*/
  {
    v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, v5); /*0x10079bd6a*/
    LOBYTE(v13) = v13 ^ 1; /*0x10079bd6f*/
    v28 = v13; /*0x10079bd71*/
    v25 = v7; /*0x10079bd74*/
    if ( *(_BYTE *)(v7 + 24) ) /*0x10079bd78*/
      goto LABEL_6; /*0x10079bd7e*/
  }
  else
  {
    v28 = 0; /*0x10079bc35*/
    v25 = v7; /*0x10079bc3c*/
    if ( *(_BYTE *)(v7 + 24) ) /*0x10079bc40*/
    {
LABEL_6:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v5, v9, v10); /*0x10079bc4c*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1); /*0x10079bc5b*/
      if ( !v11 ) /*0x10079bc63*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40); /*0x10079bfd2*/
      v12 = (unsigned __int64)v11; /*0x10079bc69*/
      qmemcpy(v11, "Codex router transition lock is poisoned", 40); /*0x10079bcae*/
      if ( !(_BYTE)v28 /*0x10079bf7e*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(40, 1) )
      {
        *(_BYTE *)(v25 + 24) = 1; /*0x10079bf8f*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v27, 1); /*0x10079bcdb*/
      *((_QWORD *)__dst + 1) = 10; /*0x10079bce7*/
      *((_QWORD *)__dst + 2) = 40; /*0x10079bcef*/
      __dst[24] = v12; /*0x10079bcf7*/
      __dst[31] = HIBYTE(v12); /*0x10079bd02*/
      *(_WORD *)(__dst + 29) = HIDWORD(v12) >> 8; /*0x10079bd0a*/
      *(_DWORD *)(__dst + 25) = v12 >> 8; /*0x10079bd0f*/
      *((_QWORD *)__dst + 4) = 40; /*0x10079bd13*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10079bd1b*/
      return __dst; /*0x10079bd1e*/
    }
  }
  v14 = a2[1]; /*0x10079bd84*/
  v26 = (_QWORD *)(v14 + 16); /*0x10079bd8d*/
  v15 = *(_QWORD *)(v14 + 16); /*0x10079bd91*/
  if ( !v15 ) /*0x10079bd98*/
    v15 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h719e63cd76cd1e9b(v26); /*0x10079bf23*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x10079bd9e*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10079bdba*/
  {
    v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v5) ^ 1; /*0x10079bf32*/
    v24 = a3; /*0x10079bf35*/
    if ( !*(_BYTE *)(v14 + 24) ) /*0x10079bf3f*/
      goto LABEL_16; /*0x10079bf3f*/
LABEL_29:
    __src[0] = v26; /*0x10079bf45*/
    LOBYTE(__src[1]) = v16; /*0x10079bf50*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10079bf77*/
      &anon_968df7ff55cc5af6b8e31bcf74ad2104_797,
      20,
      __src,
      &anon_968df7ff55cc5af6b8e31bcf74ad2104_1189,
      &off_101979400);
  }
  v16 = 0; /*0x10079bdc0*/
  v24 = a3; /*0x10079bdc2*/
  if ( *(_BYTE *)(v14 + 24) ) /*0x10079bdc6*/
    goto LABEL_29; /*0x10079bdcc*/
LABEL_16:
  v17 = v16; /*0x10079bdd2*/
  v18 = v14 + 32; /*0x10079bdd5*/
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hb4649042da169073( /*0x10079bde0*/
    v20,
    v14 + 32);
  if ( !v17 /*0x10079bf98*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v18) )
  {
    *(_BYTE *)(v14 + 24) = 1; /*0x10079bfa5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v26, v18); /*0x10079be0e*/
  if ( (_BYTE)v24 == v21 ) /*0x10079be1c*/
  {
    codexmate_lib::core::relay::storage::sanitize_for_export::hb002c0af222266d5(__src, v20); /*0x10079be99*/
    memcpy(__dst, __src, 0x140u); /*0x10079bead*/
  }
  else
  {
    v21 = v24; /*0x10079be1e*/
    _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hb4649042da169073( /*0x10079be32*/
      __src,
      v20);
    codexmate_lib::core::relay::manager::RelayManager::persist::h834ff2e1c3ab231c(v22, a2, __src); /*0x10079be48*/
    if ( v22[0] == 11 ) /*0x10079be54*/
    {
      codexmate_lib::core::relay::storage::sanitize_for_export::hb002c0af222266d5(__src, v20); /*0x10079be64*/
      memcpy(__dst, __src, 0x140u); /*0x10079be78*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v20); /*0x10079be84*/
      goto LABEL_24; /*0x10079be89*/
    }
    qmemcpy(__dst + 8, v22, 0x60u); /*0x10079bec4*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10079bec7*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::h1eb216f4f9416b59(v20); /*0x10079bed1*/
LABEL_24:
  if ( !(_BYTE)v28 /*0x10079bfae*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, __src) )
  {
    *(_BYTE *)(v25 + 24) = 1; /*0x10079bfbf*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v27, __src); /*0x10079bf00*/
  return __dst; /*0x10079bf08*/
}