// mac 1.1.8 upsert_relay_provider node va=0x100493720 depth=2
// tauri7manager4tray20TrayManager::tray_by_id
_QWORD *__fastcall tauri::manager::tray::TrayManager$LT$R$GT$::tray_by_id::hb161076cac6d89fe(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  pthread_mutex_t *v7; // rdi
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  unsigned int v16; // r15d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int8 v20; // di
  bool v21; // cf
  __int64 v22; // rcx
  char v23; // of
  __m128i v24; // xmm0
  __int64 v25; // rt0
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // r14
  int v30; // eax
  __m128i __dst[12]; // [rsp+0h] [rbp-210h] BYREF
  _QWORD __src[27]; // [rsp+C0h] [rbp-150h] BYREF
  __int64 v33; // [rsp+198h] [rbp-78h]
  __int64 v34; // [rsp+1A0h] [rbp-70h]
  unsigned __int64 v35; // [rsp+1A8h] [rbp-68h]
  __int64 v36; // [rsp+1B0h] [rbp-60h] BYREF
  _QWORD v37[2]; // [rsp+1B8h] [rbp-58h] BYREF
  __int64 v38; // [rsp+1C8h] [rbp-48h]
  void *v39; // [rsp+1D0h] [rbp-40h]
  volatile signed __int64 *v40; // [rsp+1D8h] [rbp-38h]
  int v41; // [rsp+1E0h] [rbp-30h]
  char v42; // [rsp+1E7h] [rbp-29h]

  v37[0] = a4; /*0x10049373d*/
  v37[1] = a5; /*0x100493741*/
  v40 = (volatile signed __int64 *)(a2 + 32); /*0x100493749*/
  v7 = *(pthread_mutex_t **)(a2 + 32); /*0x10049374d*/
  if ( !v7 ) /*0x100493754*/
    v7 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v40); /*0x100493ae5*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x10049375a*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x100493769*/
  {
    v8 = 0; /*0x100493775*/
    if ( !*(_BYTE *)(a2 + 40) ) /*0x100493777*/
      goto LABEL_5; /*0x10049377e*/
LABEL_47:
    __src[0] = v40; /*0x100493b04*/
    LOBYTE(__src[1]) = v8; /*0x100493b0f*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100493b36*/
      (__int64)&anon_fa700c1a43d52b7c25cc5c59994db220_159,
      43,
      (__int64)__src,
      (__int64)&anon_fa700c1a43d52b7c25cc5c59994db220_165,
      (__int64)&off_1015307C0);
  }
  LOBYTE(v30) = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100493aed*/
  v8 = v30; /*0x100493af2*/
  LOBYTE(v8) = v30 ^ 1; /*0x100493af4*/
  if ( *(_BYTE *)(a2 + 40) ) /*0x100493af7*/
    goto LABEL_47; /*0x100493afe*/
LABEL_5:
  v41 = v8; /*0x100493784*/
  v38 = a2; /*0x100493787*/
  v9 = *(_QWORD *)(a2 + 64); /*0x10049378b*/
  if ( v9 ) /*0x100493792*/
  {
    v10 = *(_QWORD *)(v38 + 56); /*0x10049379f*/
    v33 = v10 + 32 * v9; /*0x1004937aa*/
    v34 = *(_QWORD *)(a3 + 136) + 16LL; /*0x1004937b9*/
    v35 = 0x800000000000001BLL; /*0x1004937cf*/
    v39 = a1; /*0x1004937d3*/
    do /*0x1004937f8*/
    {
      v11 = (unsigned __int64)v37; /*0x1004937f8*/
      if ( !(unsigned __int8)_$LT$tray_icon..tray_icon_id..TrayIconId$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::hffc3a271d3c7deea( /*0x100493802*/
                               v10,
                               v37) )
      {
        *a1 = 3; /*0x1004937e0*/
        goto LABEL_8; /*0x1004937e0*/
      }
      v12 = tauri::manager::AppManager$LT$R$GT$::resources_table::hddcaae36eed2e8cc(v34); /*0x100493808*/
      v15 = v12; /*0x10049380d*/
      v42 = v13; /*0x100493810*/
      v16 = *(_DWORD *)(v10 + 24); /*0x100493813*/
      v17 = *(_QWORD *)(v12 + 16); /*0x100493817*/
      if ( !v17 ) /*0x10049381e*/
        goto LABEL_32; /*0x10049381e*/
      v18 = *(_QWORD *)(v12 + 24); /*0x100493824*/
      while ( 2 ) /*0x100493829*/
      {
        v13 = *(unsigned __int16 *)(v17 + 230); /*0x100493829*/
        v11 = 16 * (unsigned int)*(unsigned __int16 *)(v17 + 230); /*0x100493832*/
        v14 = -1; /*0x100493835*/
        v19 = 0; /*0x10049383c*/
        do /*0x100493860*/
        {
          if ( v11 == v19 ) /*0x100493843*/
          {
            v14 = *(unsigned __int16 *)(v17 + 230); /*0x100493880*/
            v21 = v18-- == 0; /*0x100493883*/
            if ( v21 ) /*0x100493887*/
              goto LABEL_32; /*0x100493887*/
            goto LABEL_19; /*0x100493887*/
          }
          v20 = (v16 > *(_DWORD *)(v17 + 4 * v14 + 188)) - (v16 < *(_DWORD *)(v17 + 4 * v14 + 188)); /*0x100493851*/
          v19 += 16; /*0x100493855*/
          ++v14; /*0x100493859*/
        }
        while ( v20 == 1 ); /*0x100493860*/
        v13 = v20; /*0x100493862*/
        if ( v20 ) /*0x100493868*/
        {
          v21 = v18-- == 0; /*0x10049386a*/
          if ( v21 ) /*0x10049386e*/
            goto LABEL_32; /*0x10049386e*/
LABEL_19:
          v17 = *(_QWORD *)(v17 + 8 * v14 + 232); /*0x10049388d*/
          continue; /*0x100493895*/
        }
        break;
      }
      v22 = *(_QWORD *)(v17 + v19 - 8); /*0x1004938a5*/
      v11 = *(_QWORD *)(v17 + v19 - 16) + ((*(_QWORD *)(v22 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0LL) + 16; /*0x1004938b5*/
      (*(void (__fastcall **)(__m128i *, unsigned __int64))(v22 + 24))(__dst, v11); /*0x1004938c1*/
      v24 = _mm_xor_si128(_mm_load_si128(__dst), (__m128i)xmmword_10125F690); /*0x1004938cc*/
      if ( !_mm_testz_si128(v24, v24) ) /*0x1004938d4*/
      {
LABEL_32:
        __src[0] = v35; /*0x1004939c0*/
        LODWORD(__src[1]) = v16; /*0x1004939cb*/
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(__src, v11, v13, v14); /*0x1004939d9*/
        a1 = v39; /*0x1004939de*/
        *(_QWORD *)v39 = 3; /*0x1004939e2*/
        if ( (v42 & 1) == 0 /*0x100493a68*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
        {
          *(_BYTE *)(v15 + 8) = 1; /*0x100493a71*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v15); /*0x100493a10*/
        goto LABEL_8; /*0x100493a15*/
      }
      v25 = _InterlockedIncrement64(*(volatile signed __int64 **)(v17 + v19 - 16)); /*0x1004938e4*/
      if ( (v25 < 0) ^ v23 | (v25 == 0) ) /*0x1004938ec*/
        BUG(); /*0x100493b3b*/
      v26 = *(_QWORD *)(v17 + v19 - 16); /*0x1004938f2*/
      __src[26] = v26; /*0x1004938f7*/
      a1 = v39; /*0x1004938fd*/
      if ( (v42 & 1) == 0 /*0x100493a79*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
      {
        *(_BYTE *)(v15 + 8) = 1; /*0x100493a86*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v15); /*0x100493924*/
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 0, 1) == 1 ) /*0x100493935*/
      {
        v27 = *(_QWORD *)(v26 + 16); /*0x100493937*/
        v28 = *(_QWORD *)(v26 + 24); /*0x10049393b*/
        memcpy(__dst, (const void *)(v26 + 32), sizeof(__dst)); /*0x10049394f*/
        if ( v26 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v26 + 8)) ) /*0x10049395a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10049396e*/
        if ( v27 != 3 ) /*0x100493977*/
        {
          __src[0] = v27; /*0x100493a1a*/
          __src[1] = v28; /*0x100493a21*/
          memcpy(&__src[2], __dst, 0xC0u); /*0x100493a3b*/
          a1 = v39; /*0x100493a40*/
          goto LABEL_36; /*0x100493a40*/
        }
        v26 = v28; /*0x10049397d*/
        a1 = v39; /*0x100493980*/
      }
      v36 = v26; /*0x100493984*/
      _$LT$tauri..tray..TrayIcon$LT$R$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h1c370719cb2485d8(__src); /*0x100493993*/
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v26) ) /*0x100493998*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::ha19298ae81559b7b(&v36, v26 + 16); /*0x1004939aa*/
LABEL_36:
      memcpy(a1, __src, 0xD0u); /*0x100493a48*/
      if ( *a1 != 3 ) /*0x100493a60*/
        goto LABEL_43; /*0x100493a60*/
LABEL_8:
      v10 += 32; /*0x1004937e7*/
    }
    while ( v10 != v33 ); /*0x1004937f8*/
  }
  *a1 = 3; /*0x100493a91*/
LABEL_43:
  if ( !(_BYTE)v41 /*0x100493b3d*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(v38 + 40) = 1; /*0x100493b4e*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v40); /*0x100493ac2*/
  return a1; /*0x100493aca*/
}