// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND record_codex_route node 0x1005a7120 depth=0
char __fastcall codexmate_lib::core::relay::proxy_server::record_codex_route::hf35166d90cb7ab66(
        __int64 *a1,
        const void *a2,
        size_t a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        void *a7,
        size_t a8,
        __int16 a9,
        __int16 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // rbx
  __int64 v15; // r12
  pthread_mutex_t *v16; // rdi
  char result; // al
  pthread_mutex_t *v18; // rax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  size_t v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  size_t v30; // r15
  size_t v31; // r14
  __int64 v32; // rbx
  size_t v33; // rdi
  __int64 v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  __int64 v37; // [rsp+8h] [rbp-E8h]
  __int64 v38; // [rsp+10h] [rbp-E0h]
  unsigned __int64 v39; // [rsp+28h] [rbp-C8h]
  __int64 v40; // [rsp+30h] [rbp-C0h]
  __int64 v41; // [rsp+38h] [rbp-B8h]
  _DWORD v42[3]; // [rsp+44h] [rbp-ACh] BYREF
  void *__src; // [rsp+50h] [rbp-A0h]
  __int64 v44; // [rsp+58h] [rbp-98h]
  size_t v45; // [rsp+60h] [rbp-90h]
  __int64 v46; // [rsp+68h] [rbp-88h]
  __int64 v47; // [rsp+70h] [rbp-80h]
  __int64 v48; // [rsp+78h] [rbp-78h]
  size_t v49; // [rsp+80h] [rbp-70h] BYREF
  __int64 v50; // [rsp+88h] [rbp-68h]
  __int64 v51; // [rsp+90h] [rbp-60h]
  size_t v52; // [rsp+98h] [rbp-58h]
  volatile signed __int64 *v53; // [rsp+A0h] [rbp-50h]
  size_t v54; // [rsp+A8h] [rbp-48h]
  __int64 v55; // [rsp+B0h] [rbp-40h]
  size_t __n; // [rsp+B8h] [rbp-38h]
  __int16 v57; // [rsp+C0h] [rbp-30h]
  __int16 v58; // [rsp+C2h] [rbp-2Eh]
  int v59; // [rsp+C4h] [rbp-2Ch]

  v52 = a5; /*0x1005a7137*/
  __n = a3; /*0x1005a713e*/
  v57 = a10; /*0x1005a715f*/
  v58 = a9; /*0x1005a7167*/
  v14 = a8; /*0x1005a716b*/
  __src = a7; /*0x1005a7173*/
  v15 = *a1; /*0x1005a717a*/
  v53 = (volatile signed __int64 *)(*a1 + 16); /*0x1005a7182*/
  v16 = *(pthread_mutex_t **)(v15 + 16); /*0x1005a7186*/
  if ( v16 ) /*0x1005a718e*/
  {
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v16); /*0x1005a7194*/
    if ( !result ) /*0x1005a719b*/
      return result; /*0x1005a719b*/
  }
  else
  {
    v18 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v53); /*0x1005a721a*/
    result = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v18); /*0x1005a7222*/
    if ( !result ) /*0x1005a7229*/
      return result; /*0x1005a7229*/
  }
  v45 = 0x8000000000000000LL; /*0x1005a71b5*/
  v44 = 0x7FFFFFFFFFFFFFFFLL; /*0x1005a71bf*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005a71c9*/
  {
    LOBYTE(v19) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1005a7239*/
    v59 = v19; /*0x1005a723b*/
    if ( *(_BYTE *)(v15 + 24) ) /*0x1005a723e*/
    {
LABEL_5:
      if ( !(_BYTE)v59 /*0x1005a75f2*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v44) != 0
        && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
      {
        *(_BYTE *)(v15 + 24) = 1; /*0x1005a75ff*/
      }
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v53); /*0x1005a7211*/
    }
  }
  else
  {
    v59 = 0; /*0x1005a71cb*/
    if ( *(_BYTE *)(v15 + 24) ) /*0x1005a71d2*/
      goto LABEL_5; /*0x1005a71da*/
  }
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v42); /*0x1005a724f*/
  v20 = (v42[0] >> 13) - 1; /*0x1005a725f*/
  v21 = 0; /*0x1005a7262*/
  if ( v42[0] >> 13 <= 0 ) /*0x1005a7266*/
  {
    v22 = (1 - (v42[0] >> 13)) / 0x190u + 1; /*0x1005a727a*/
    v20 += 400 * v22; /*0x1005a7282*/
    v21 = -146097 * v22; /*0x1005a7284*/
  }
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1005a72f4*/
  {
    v23 = 0; /*0x1005a72f6*/
    goto LABEL_15; /*0x1005a72f6*/
  }
  v39 = 1000 /*0x1005a7309*/
      * (v42[1]
       + 86400LL * (((v20 / 100) >> 2) + ((1461 * v20) >> 2) + v21 + ((v42[0] >> 4) & 0x1FF) - v20 / 100 - 719163))
      + v42[2] / 0xF4240uLL;
  v54 = a8; /*0x1005a7310*/
  if ( __n ) /*0x1005a7314*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005a7316*/
    v23 = 1; /*0x1005a731b*/
    v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x1005a7329*/
    if ( !v24 ) /*0x1005a7331*/
LABEL_15:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, __n); /*0x1005a72f8*/
    v25 = v24; /*0x1005a7333*/
    v14 = v54; /*0x1005a7336*/
  }
  else
  {
    v25 = 1; /*0x1005a733c*/
  }
  v46 = v25; /*0x1005a7341*/
  memcpy((void *)v25, a2, __n); /*0x1005a734f*/
  v26 = v52; /*0x1005a7354*/
  if ( (v52 & 0x8000000000000000LL) != 0LL ) /*0x1005a735b*/
  {
    v27 = 0; /*0x1005a735d*/
    goto LABEL_22; /*0x1005a735d*/
  }
  if ( v52 ) /*0x1005a736f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005a7371*/
    v27 = 1; /*0x1005a7376*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v26, 1u); /*0x1005a7383*/
    if ( !v28 ) /*0x1005a738b*/
LABEL_22:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, v26); /*0x1005a735f*/
    v29 = v28; /*0x1005a738d*/
    v14 = v54; /*0x1005a7390*/
  }
  else
  {
    v29 = 1; /*0x1005a7396*/
  }
  v47 = v29; /*0x1005a739b*/
  memcpy((void *)v29, a4, v26); /*0x1005a73a5*/
  if ( !a6 ) /*0x1005a73ad*/
  {
    v31 = 0x8000000000000000LL; /*0x1005a7418*/
    v30 = 0x8000000000000000LL; /*0x1005a7422*/
    if ( __src ) /*0x1005a742d*/
      goto LABEL_29; /*0x1005a742d*/
LABEL_33:
    v14 = 0x8000000000000000LL; /*0x1005a742f*/
    goto LABEL_39; /*0x1005a7439*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v49, a6); /*0x1005a73b6*/
  v30 = v49; /*0x1005a73bb*/
  v55 = v50; /*0x1005a73c3*/
  v40 = v51; /*0x1005a73cb*/
  a6 += 24; /*0x1005a73d2*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v49, a6); /*0x1005a73dd*/
  v31 = v49; /*0x1005a73e2*/
  v48 = v50; /*0x1005a73ea*/
  v41 = v51; /*0x1005a73f2*/
  if ( !__src ) /*0x1005a7401*/
    goto LABEL_33; /*0x1005a7401*/
LABEL_29:
  if ( v14 < 0 ) /*0x1005a7406*/
  {
    v32 = 0; /*0x1005a7408*/
    goto LABEL_31; /*0x1005a7408*/
  }
  if ( v14 ) /*0x1005a743b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005a743d*/
    v33 = v14; /*0x1005a7442*/
    v32 = 1; /*0x1005a7445*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1u); /*0x1005a744f*/
    if ( !v34 ) /*0x1005a7457*/
LABEL_31:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v54); /*0x1005a740a*/
    a6 = v34; /*0x1005a7459*/
    v14 = v54; /*0x1005a745c*/
  }
  else
  {
    a6 = 1; /*0x1005a7462*/
  }
  memcpy((void *)a6, __src, v14); /*0x1005a7475*/
LABEL_39:
  if ( a11 ) /*0x1005a7484*/
  {
    codexmate_lib::core::relay::models::sanitize_error_for_display::hf67e65fdf83b28be(&v49, a11, a12); /*0x1005a7491*/
    v45 = v49; /*0x1005a749a*/
    v37 = v50; /*0x1005a74a5*/
    v38 = v51; /*0x1005a74b0*/
  }
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..models..CodexRouteDiagnostic$GT$$GT$::h082e8dfa355a3af0((_QWORD *)(v15 + 208)); /*0x1005a74bf*/
  v35 = __n; /*0x1005a74c4*/
  *(_QWORD *)(v15 + 208) = __n; /*0x1005a74c8*/
  *(_QWORD *)(v15 + 216) = v46; /*0x1005a74d7*/
  *(_QWORD *)(v15 + 224) = v35; /*0x1005a74df*/
  v36 = v52; /*0x1005a74e7*/
  *(_QWORD *)(v15 + 232) = v52; /*0x1005a74eb*/
  *(_QWORD *)(v15 + 240) = v47; /*0x1005a74f7*/
  *(_QWORD *)(v15 + 248) = v36; /*0x1005a74ff*/
  *(_QWORD *)(v15 + 256) = v30; /*0x1005a7507*/
  *(_QWORD *)(v15 + 264) = v55; /*0x1005a7513*/
  *(_QWORD *)(v15 + 272) = v40; /*0x1005a7522*/
  *(_QWORD *)(v15 + 280) = v31; /*0x1005a752a*/
  *(_QWORD *)(v15 + 288) = v48; /*0x1005a7536*/
  *(_QWORD *)(v15 + 296) = v41; /*0x1005a7545*/
  *(_QWORD *)(v15 + 304) = v14; /*0x1005a754d*/
  *(_QWORD *)(v15 + 312) = a6; /*0x1005a7555*/
  *(_QWORD *)(v15 + 320) = v14; /*0x1005a755d*/
  *(_QWORD *)(v15 + 328) = v45; /*0x1005a756c*/
  *(_QWORD *)(v15 + 336) = v37; /*0x1005a7582*/
  *(_QWORD *)(v15 + 344) = v38; /*0x1005a758a*/
  *(_QWORD *)(v15 + 352) = v39; /*0x1005a7599*/
  *(_WORD *)(v15 + 360) = v58; /*0x1005a75a5*/
  *(_WORD *)(v15 + 362) = v57; /*0x1005a75b2*/
  if ( !(_BYTE)v59 /*0x1005a760a*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v44) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(v15 + 24) = 1; /*0x1005a7613*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v53); /*0x1005a7200*/
}