// mac 1.1.8 activate_relay_provider node va=0x1005c27a0 depth=2
// codexmate_lib4core5relay7manager12RelayManager22ensure_provider_loaded
void *__fastcall codexmate_lib::core::relay::manager::RelayManager::ensure_provider_loaded::h68b217972834b203(
        void *a1,
        _QWORD *a2,
        _QWORD *a3,
        size_t a4,
        double a5,
        double a6)
{
  __int64 v9; // rax
  _QWORD *v10; // r13
  const void *v11; // rdi
  __int64 v12; // rdx
  char v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  _QWORD *v18; // r13
  __int64 v19; // rdx
  void *v20; // rbx
  _BYTE *v21; // rsi
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rax
  _BYTE __dst[232]; // [rsp+8h] [rbp-218h] BYREF
  _QWORD __src[29]; // [rsp+F0h] [rbp-130h] BYREF
  void *v35; // [rsp+1D8h] [rbp-48h]
  _QWORD *v36; // [rsp+1E0h] [rbp-40h]
  _QWORD *v37; // [rsp+1E8h] [rbp-38h]
  __int64 v38; // [rsp+1F0h] [rbp-30h]

  v37 = a2; /*0x1005c27bd*/
  v9 = a2[1]; /*0x1005c27c1*/
  v10 = (_QWORD *)(v9 + 16); /*0x1005c27c5*/
  v38 = v9; /*0x1005c27c9*/
  v11 = *(const void **)(v9 + 16); /*0x1005c27cd*/
  if ( !v11 ) /*0x1005c27d4*/
    v11 = (const void *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v9 + 16); /*0x1005c2988*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c27da*/
  v35 = a1; /*0x1005c27ef*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1005c27e9*/
  {
    v13 = 0; /*0x1005c27f9*/
    v14 = v38; /*0x1005c27fc*/
    if ( !*(_BYTE *)(v38 + 24) ) /*0x1005c2800*/
      goto LABEL_5; /*0x1005c2806*/
LABEL_24:
    __src[0] = v10; /*0x1005c29ac*/
    LOBYTE(__src[1]) = v13; /*0x1005c29b3*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c29db*/
      (__int64)&anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      (__int64)__src,
      (__int64)&anon_1f22c03b288e649fafb3d21192ed4cff_853,
      (__int64)&off_101534270);
  }
  v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, a2, v12, a5, a6) ^ 1; /*0x1005c2998*/
  v14 = v38; /*0x1005c299c*/
  if ( *(_BYTE *)(v38 + 24) ) /*0x1005c29a0*/
    goto LABEL_24; /*0x1005c29a6*/
LABEL_5:
  v36 = v10; /*0x1005c280c*/
  v15 = *(_QWORD *)(v14 + 48); /*0x1005c2810*/
  if ( v15 ) /*0x1005c2817*/
  {
    v16 = *(_QWORD *)(v38 + 40); /*0x1005c2821*/
    v17 = 232 * v15; /*0x1005c2825*/
    while ( 1 ) /*0x1005c2844*/
    {
      if ( *(_QWORD *)(v16 + 16) == a4 ) /*0x1005c2848*/
      {
        v11 = *(const void **)(v16 + 8); /*0x1005c284a*/
        a2 = a3; /*0x1005c284e*/
        if ( !memcmp(v11, a3, a4) ) /*0x1005c2854*/
          break; /*0x1005c2854*/
      }
      v16 += 232; /*0x1005c2830*/
      v17 -= 232; /*0x1005c2837*/
      if ( !v17 ) /*0x1005c283e*/
        goto LABEL_20; /*0x1005c283e*/
    }
    v18 = v36; /*0x1005c2867*/
    _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005c286b*/
      __src,
      v16);
    memcpy(__dst, __src, sizeof(__dst)); /*0x1005c2883*/
    v20 = v35; /*0x1005c288b*/
    if ( !v13 /*0x1005c29f8*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, __src, v19, a5, a6) )
    {
      *(_BYTE *)(v38 + 24) = 1; /*0x1005c2a09*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v18, __src, v19, a5, a6); /*0x1005c28b2*/
    v21 = __dst; /*0x1005c28c2*/
    if ( !(unsigned __int8)codexmate_lib::core::relay::storage::lazy_load_api_key::ha9615138a2254373(*v37 + 16LL, __dst) ) /*0x1005c28d0*/
      goto LABEL_41; /*0x1005c28d0*/
    v22 = (_QWORD *)*v18; /*0x1005c28d6*/
    if ( !*v18 ) /*0x1005c28d6*/
      v22 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v18); /*0x1005c2a1a*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c28e3*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005c28ff*/
    {
      v26 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22, __dst, v23, a5, a6); /*0x1005c2a22*/
      v24 = v26; /*0x1005c2a27*/
      LOBYTE(v24) = v26 ^ 1; /*0x1005c2a29*/
      v25 = v38; /*0x1005c2a2c*/
      if ( *(_BYTE *)(v38 + 24) ) /*0x1005c2a30*/
      {
LABEL_17:
        if ( !(_BYTE)v24 /*0x1005c2b30*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v22,
                                 __dst,
                                 v24,
                                 a5,
                                 a6) )
        {
          *(_BYTE *)(v38 + 24) = 1; /*0x1005c2b41*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v18, __dst, v24, a5, a6); /*0x1005c293c*/
LABEL_41:
        memcpy(v20, __dst, 0xE8u); /*0x1005c2b07*/
        return v20; /*0x1005c2b16*/
      }
    }
    else
    {
      v24 = 0; /*0x1005c2905*/
      v25 = v38; /*0x1005c2907*/
      if ( *(_BYTE *)(v38 + 24) ) /*0x1005c290b*/
        goto LABEL_17; /*0x1005c2911*/
    }
    LODWORD(v37) = v24; /*0x1005c2a3c*/
    v27 = *(_QWORD *)(v25 + 48); /*0x1005c2a3f*/
    if ( v27 ) /*0x1005c2a46*/
    {
      v28 = *(_QWORD *)(v38 + 40); /*0x1005c2a50*/
      v29 = 232 * v27; /*0x1005c2a54*/
      v30 = 0; /*0x1005c2a5b*/
      while ( 1 ) /*0x1005c2a6c*/
      {
        if ( *(_QWORD *)(v28 + v30 + 16) == a4 ) /*0x1005c2a71*/
        {
          v22 = *(_QWORD **)(v28 + v30 + 8); /*0x1005c2a73*/
          v21 = a3; /*0x1005c2a78*/
          if ( !memcmp(v22, a3, a4) ) /*0x1005c2a7e*/
            break; /*0x1005c2a7e*/
        }
        v30 += 232; /*0x1005c2a60*/
        if ( v29 == v30 ) /*0x1005c2a6a*/
          goto LABEL_38; /*0x1005c2a6a*/
      }
      v22 = __src; /*0x1005c2a8e*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &__dst[72]); /*0x1005c2a95*/
      v21 = *(_BYTE **)(v28 + v30 + 72); /*0x1005c2a9f*/
      if ( v21 ) /*0x1005c2aa7*/
      {
        v22 = *(_QWORD **)(v28 + v30 + 80); /*0x1005c2aa9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005c2ab3*/
      }
      *(_QWORD *)(v28 + v30 + 88) = __src[2]; /*0x1005c2abf*/
      v31 = __src[0]; /*0x1005c2ac3*/
      *(_QWORD *)(v28 + v30 + 80) = __src[1]; /*0x1005c2ad1*/
      *(_QWORD *)(v28 + v30 + 72) = v31; /*0x1005c2ad5*/
    }
LABEL_38:
    if ( !(_BYTE)v37 /*0x1005c2b4a*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22, v21, v24, a5, a6) )
    {
      *(_BYTE *)(v38 + 24) = 1; /*0x1005c2b57*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v36, v21, v24, a5, a6); /*0x1005c2afe*/
    v20 = v35; /*0x1005c2b03*/
    goto LABEL_41; /*0x1005c2b03*/
  }
LABEL_20:
  v20 = v35; /*0x1005c2946*/
  *(_QWORD *)v35 = 0x8000000000000000LL; /*0x1005c2958*/
  if ( !v13 /*0x1005c29e2*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, a2, v12, a5, a6) )
  {
    *(_BYTE *)(v38 + 24) = 1; /*0x1005c29ef*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v36, a2, v12, a5, a6); /*0x1005c2976*/
  return v20; /*0x1005c2b1e*/
}