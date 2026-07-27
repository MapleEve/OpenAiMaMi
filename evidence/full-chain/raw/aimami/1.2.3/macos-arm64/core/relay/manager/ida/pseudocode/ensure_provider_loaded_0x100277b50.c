// __ZN13codexmate_lib4core5relay7manager12RelayManager22ensure_provider_loaded @ 0x100277b50 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::manager::RelayManager::ensure_provider_loaded::h48d57c55269bbf40(
        void *a1,
        _QWORD *a2,
        _QWORD *a3,
        size_t a4)
{
  __int64 v7; // rax
  _QWORD *v8; // r13
  const void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  _QWORD *v17; // r13
  __int64 v18; // rdx
  void *v19; // rbx
  _BYTE *v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // rax
  _BYTE __dst[232]; // [rsp+8h] [rbp-218h] BYREF
  _QWORD __src[29]; // [rsp+F0h] [rbp-130h] BYREF
  void *v34; // [rsp+1D8h] [rbp-48h]
  _QWORD *v35; // [rsp+1E0h] [rbp-40h]
  _QWORD *v36; // [rsp+1E8h] [rbp-38h]
  __int64 v37; // [rsp+1F0h] [rbp-30h]

  v36 = a2; /*0x100277b6d*/
  v7 = a2[1]; /*0x100277b71*/
  v8 = (_QWORD *)(v7 + 16); /*0x100277b75*/
  v37 = v7; /*0x100277b79*/
  v9 = *(const void **)(v7 + 16); /*0x100277b7d*/
  if ( !v9 ) /*0x100277b84*/
    v9 = (const void *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v7 + 16); /*0x100277d38*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x100277b8a*/
  v34 = a1; /*0x100277b9f*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100277b99*/
  {
    v12 = 0; /*0x100277ba9*/
    v13 = v37; /*0x100277bac*/
    if ( !*(_BYTE *)(v37 + 24) ) /*0x100277bb0*/
      goto LABEL_5; /*0x100277bb6*/
LABEL_24:
    __src[0] = v8; /*0x100277d5c*/
    LOBYTE(__src[1]) = v12; /*0x100277d63*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, __src, &off_10195E740, &off_10195DC00); /*0x100277d8b*/
  }
  v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, a2, v10, v11) ^ 1; /*0x100277d48*/
  v13 = v37; /*0x100277d4c*/
  if ( *(_BYTE *)(v37 + 24) ) /*0x100277d50*/
    goto LABEL_24; /*0x100277d56*/
LABEL_5:
  v35 = v8; /*0x100277bbc*/
  v14 = *(_QWORD *)(v13 + 48); /*0x100277bc0*/
  if ( v14 ) /*0x100277bc7*/
  {
    v15 = *(_QWORD *)(v37 + 40); /*0x100277bd1*/
    v16 = 232 * v14; /*0x100277bd5*/
    while ( 1 ) /*0x100277bf4*/
    {
      if ( *(_QWORD *)(v15 + 16) == a4 ) /*0x100277bf8*/
      {
        v9 = *(const void **)(v15 + 8); /*0x100277bfa*/
        a2 = a3; /*0x100277bfe*/
        if ( !memcmp(v9, a3, a4) ) /*0x100277c04*/
          break; /*0x100277c04*/
      }
      v15 += 232; /*0x100277be0*/
      v16 -= 232; /*0x100277be7*/
      if ( !v16 ) /*0x100277bee*/
        goto LABEL_20; /*0x100277bee*/
    }
    v17 = v35; /*0x100277c17*/
    _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::had89229e14f971ec( /*0x100277c1b*/
      __src,
      v15);
    memcpy(__dst, __src, sizeof(__dst)); /*0x100277c33*/
    v19 = v34; /*0x100277c3b*/
    if ( !v12 /*0x100277da8*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             __dst,
                             __src,
                             v18,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v37 + 24) = 1; /*0x100277db9*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v17); /*0x100277c62*/
    v20 = __dst; /*0x100277c72*/
    if ( !(unsigned __int8)codexmate_lib::core::relay::storage::lazy_load_api_key::h1b51e8f1fd913730(*v36 + 16LL) ) /*0x100277c80*/
      goto LABEL_41; /*0x100277c80*/
    v21 = (_QWORD *)*v17; /*0x100277c86*/
    if ( !*v17 ) /*0x100277c86*/
      v21 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v17); /*0x100277dca*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v21); /*0x100277c93*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100277caf*/
    {
      v25 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v21, __dst, v22, 0x7FFFFFFFFFFFFFFFLL); /*0x100277dd2*/
      v23 = v25; /*0x100277dd7*/
      LOBYTE(v23) = v25 ^ 1; /*0x100277dd9*/
      v24 = v37; /*0x100277ddc*/
      if ( *(_BYTE *)(v37 + 24) ) /*0x100277de0*/
      {
LABEL_17:
        if ( !(_BYTE)v23 /*0x100277ee0*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v21,
                                 __dst,
                                 v23,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v37 + 24) = 1; /*0x100277ef1*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v17); /*0x100277cec*/
LABEL_41:
        memcpy(v19, __dst, 0xE8u); /*0x100277eb7*/
        return v19; /*0x100277ec6*/
      }
    }
    else
    {
      v23 = 0; /*0x100277cb5*/
      v24 = v37; /*0x100277cb7*/
      if ( *(_BYTE *)(v37 + 24) ) /*0x100277cbb*/
        goto LABEL_17; /*0x100277cc1*/
    }
    LODWORD(v36) = v23; /*0x100277dec*/
    v26 = *(_QWORD *)(v24 + 48); /*0x100277def*/
    if ( v26 ) /*0x100277df6*/
    {
      v27 = *(_QWORD *)(v37 + 40); /*0x100277e00*/
      v28 = 232 * v26; /*0x100277e04*/
      v29 = 0; /*0x100277e0b*/
      while ( 1 ) /*0x100277e1c*/
      {
        if ( *(_QWORD *)(v27 + v29 + 16) == a4 ) /*0x100277e21*/
        {
          v21 = *(_QWORD **)(v27 + v29 + 8); /*0x100277e23*/
          v20 = a3; /*0x100277e28*/
          if ( !memcmp(v21, a3, a4) ) /*0x100277e2e*/
            break; /*0x100277e2e*/
        }
        v29 += 232; /*0x100277e10*/
        if ( v28 == v29 ) /*0x100277e1a*/
          goto LABEL_38; /*0x100277e1a*/
      }
      v21 = __src; /*0x100277e3e*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &__dst[72]); /*0x100277e45*/
      v20 = *(_BYTE **)(v27 + v29 + 72); /*0x100277e4f*/
      if ( v20 ) /*0x100277e57*/
      {
        v21 = *(_QWORD **)(v27 + v29 + 80); /*0x100277e59*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x100277e63*/
      }
      *(_QWORD *)(v27 + v29 + 88) = __src[2]; /*0x100277e6f*/
      v30 = __src[0]; /*0x100277e73*/
      *(_QWORD *)(v27 + v29 + 80) = __src[1]; /*0x100277e81*/
      *(_QWORD *)(v27 + v29 + 72) = v30; /*0x100277e85*/
    }
LABEL_38:
    if ( !(_BYTE)v36 /*0x100277efa*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v21,
                             v20,
                             v23,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v37 + 24) = 1; /*0x100277f07*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v35); /*0x100277eae*/
    v19 = v34; /*0x100277eb3*/
    goto LABEL_41; /*0x100277eb3*/
  }
LABEL_20:
  v19 = v34; /*0x100277cf6*/
  *(_QWORD *)v34 = 0x8000000000000000LL; /*0x100277d08*/
  if ( !v12 /*0x100277d92*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v9,
                           a2,
                           v10,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v37 + 24) = 1; /*0x100277d9f*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v35); /*0x100277d26*/
  return v19; /*0x100277ece*/
}