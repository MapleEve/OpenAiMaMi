// __ZN13codexmate_lib4core5relay12proxy_server19pick_candidates_for @ 0x100259bc0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::pick_candidates_for::h094c25be24f8cc71(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r12
  __int64 *v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbx
  const void *v13; // r12
  size_t v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rsi
  _BYTE *v19; // rdi
  __int64 v20; // rdx
  _BYTE *v21; // r15
  __int64 v22; // rbx
  _QWORD *v23; // r14
  _QWORD *v24; // r14
  _QWORD *v25; // r14
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // ecx
  _BYTE v30[296]; // [rsp+0h] [rbp-1C0h] BYREF
  __int64 v31; // [rsp+128h] [rbp-98h]
  __int64 v32; // [rsp+130h] [rbp-90h]
  _QWORD *v33; // [rsp+138h] [rbp-88h]
  _QWORD *v34; // [rsp+140h] [rbp-80h]
  __int64 v35; // [rsp+148h] [rbp-78h] BYREF
  __int64 v36; // [rsp+150h] [rbp-70h]
  __int64 v37; // [rsp+158h] [rbp-68h]
  __int64 v38; // [rsp+160h] [rbp-60h]
  __int64 v39; // [rsp+168h] [rbp-58h]
  __int64 v40; // [rsp+170h] [rbp-50h]
  __int64 v41; // [rsp+178h] [rbp-48h]
  __int64 v42; // [rsp+180h] [rbp-40h]
  __int64 *v43; // [rsp+188h] [rbp-38h]
  int v44; // [rsp+194h] [rbp-2Ch]

  v3 = *a2; /*0x100259bda*/
  v4 = (__int64 *)(*a2 + 16LL); /*0x100259bdd*/
  v5 = *v4; /*0x100259be2*/
  if ( !*v4 ) /*0x100259be2*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(*a2 + 16LL); /*0x100259c55*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100259bec*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100259bfb*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x100259c5d*/
           v5,
           a2,
           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
           v6);
    LOBYTE(v7) = v7 ^ 1; /*0x100259c65*/
    v8 = *(unsigned __int8 *)(v3 + 24); /*0x100259c71*/
    if ( (_BYTE)v8 ) /*0x100259c79*/
    {
LABEL_5:
      *a1 = 0; /*0x100259c19*/
      a1[1] = 8; /*0x100259c20*/
      a1[2] = 0; /*0x100259c28*/
      if ( !(_BYTE)v7 /*0x100259efb*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               v5,
                               0x7FFFFFFFFFFFFFFFLL,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               v8) )
      {
        *(_BYTE *)(v3 + 24) = 1; /*0x100259f08*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100259c43*/
      return a1; /*0x100259c48*/
    }
  }
  else
  {
    v7 = 0; /*0x100259c03*/
    v8 = *(unsigned __int8 *)(v3 + 24); /*0x100259c0f*/
    if ( (_BYTE)v8 ) /*0x100259c17*/
      goto LABEL_5; /*0x100259c17*/
  }
  v44 = v7; /*0x100259c7b*/
  v43 = v4; /*0x100259c87*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(&v35, v3 + 56); /*0x100259c8b*/
  v33 = a1; /*0x100259c90*/
  v40 = v37; /*0x100259c9b*/
  v39 = v36; /*0x100259ca7*/
  v38 = v35; /*0x100259cab*/
  v9 = 232LL * *(_QWORD *)(v3 + 48); /*0x100259caf*/
  v32 = v3; /*0x100259cb8*/
  v10 = *(_QWORD *)(v3 + 40); /*0x100259cbf*/
  v42 = v10 + v9; /*0x100259cc7*/
  v34 = a2; /*0x100259ccb*/
  v31 = a2[2] + 16LL; /*0x100259cd7*/
  while ( v10 != v42 && v40 ) /*0x100259cf1*/
  {
    v11 = v39; /*0x100259cf7*/
    v12 = 24 * v40; /*0x100259cff*/
LABEL_14:
    v13 = *(const void **)(v10 + 8); /*0x100259d21*/
    v41 = v10; /*0x100259d25*/
    v14 = *(_QWORD *)(v10 + 16); /*0x100259d29*/
    v15 = 0; /*0x100259d2d*/
    while ( *(_QWORD *)(v11 + v15 + 16) != v14 || memcmp(*(const void **)(v11 + v15 + 8), v13, v14) ) /*0x100259d62*/
    {
      v15 += 24; /*0x100259d40*/
      if ( v12 == v15 ) /*0x100259d47*/
      {
        v10 = v41 + 232; /*0x100259d14*/
        if ( v41 + 232 == v42 ) /*0x100259d1f*/
          goto LABEL_19; /*0x100259d1f*/
        goto LABEL_14; /*0x100259d1f*/
      }
    }
    v16 = v41 + 232; /*0x100259d68*/
    codexmate_lib::core::relay::storage::lazy_load_api_key::h1b51e8f1fd913730(v31); /*0x100259d76*/
    v10 = v16; /*0x100259d7b*/
  }
LABEL_19:
  v17 = v32; /*0x100259d83*/
  v18 = v32 + 32; /*0x100259d8a*/
  v19 = v30; /*0x100259d8f*/
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x100259d96*/
    v30,
    v32 + 32);
  v21 = (_BYTE *)v39; /*0x100259d9b*/
  v22 = v40; /*0x100259d9f*/
  if ( v40 ) /*0x100259da6*/
  {
    v23 = (_QWORD *)(v39 + 8); /*0x100259da8*/
    do /*0x100259db7*/
    {
      v18 = *(v23 - 1); /*0x100259db9*/
      if ( v18 ) /*0x100259dc0*/
      {
        v19 = (_BYTE *)*v23; /*0x100259dc2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v23, v18, 1); /*0x100259dca*/
      }
      v23 += 3; /*0x100259db0*/
      --v22; /*0x100259db4*/
    }
    while ( v22 ); /*0x100259db7*/
  }
  v24 = v34; /*0x100259dd8*/
  if ( v38 ) /*0x100259ddc*/
  {
    v18 = 24 * v38; /*0x100259de2*/
    v19 = v21; /*0x100259deb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24 * v38, 8); /*0x100259dee*/
  }
  a1 = v33; /*0x100259df7*/
  if ( !(_BYTE)v44 /*0x100259f13*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v19,
                           v18,
                           v20,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v17 + 24) = 1; /*0x100259f20*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v43); /*0x100259e24*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v35); /*0x100259e2d*/
  v25 = v24 + 1; /*0x100259e32*/
  v26 = ((int)v35 >> 13) - 1; /*0x100259e3e*/
  v27 = 0; /*0x100259e41*/
  if ( (int)v35 >> 13 <= 0 ) /*0x100259e45*/
  {
    v28 = (1 - ((int)v35 >> 13)) / 0x190u + 1; /*0x100259e59*/
    v26 += 400 * v28; /*0x100259e61*/
    v27 = -146097 * v28; /*0x100259e63*/
  }
  codexmate_lib::core::relay::breaker::select_candidates::h3a550ff84efdf330( /*0x100259ed5*/
    a1,
    v30,
    v25,
    1000
  * (HIDWORD(v35)
   + 86400LL
   * (int)(((v26 / 100) >> 2) + ((1461 * v26) >> 2) + v27 + (((unsigned int)v35 >> 4) & 0x1FF) - v26 / 100 - 719163))
  + (unsigned int)v36 / 0xF4240uLL);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v30); /*0x100259ee1*/
  return a1; /*0x100259ee9*/
}