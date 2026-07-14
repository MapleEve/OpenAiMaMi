// mac 1.1.8 refresh_usage_snapshot node va=0x1004cde20 depth=1
// codexmate_lib8commands8accounts40resolve_cached_auto_switch_service_state
__int64 __fastcall codexmate_lib::commands::accounts::resolve_cached_auto_switch_service_state::h49ee9782a44b2592(
        __int64 a1)
{
  volatile signed __int64 *v1; // rax
  volatile signed __int64 *v2; // r14
  pthread_mutex_t *v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r13
  void *v18; // [rsp+0h] [rbp-680h] BYREF
  _QWORD __dst[84]; // [rsp+8h] [rbp-678h] BYREF
  _QWORD v20[2]; // [rsp+2A8h] [rbp-3D8h] BYREF
  void *v21; // [rsp+2B8h] [rbp-3C8h]
  _QWORD __src[84]; // [rsp+2C0h] [rbp-3C0h] BYREF
  __int64 v23; // [rsp+560h] [rbp-120h]
  __int64 v24; // [rsp+568h] [rbp-118h]
  __int64 v25; // [rsp+570h] [rbp-110h]
  __int64 v26; // [rsp+578h] [rbp-108h]
  _QWORD v27[8]; // [rsp+5C0h] [rbp-C0h] BYREF
  _QWORD v28[10]; // [rsp+600h] [rbp-80h] BYREF
  int v29; // [rsp+654h] [rbp-2Ch]

  codexmate_lib::commands::accounts::get_cached_display_snapshot::hb232462823f1c357(v20); /*0x1004cde3e*/
  if ( LODWORD(v20[0]) == 3 ) /*0x1004cde4a*/
  {
    v1 = (volatile signed __int64 *)tauri::state::StateManager::try_get::h5668abcf78ad5dde(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 4872LL) + 16LL); /*0x1004cde62*/
    if ( !v1 ) /*0x1004cde6a*/
    {
      v18 = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_789; /*0x1004cdf53*/
      __dst[0] = 76; /*0x1004cdf5a*/
      v20[0] = &v18; /*0x1004cdf6c*/
      v20[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004cdf7a*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004cdf96*/
        (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
        (__int64)v20,
        (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
    }
    v2 = v1; /*0x1004cde70*/
    v3 = (pthread_mutex_t *)*v1; /*0x1004cde73*/
    if ( !*v1 ) /*0x1004cde73*/
      v3 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v1); /*0x1004cdfa3*/
    v4 = 0; /*0x1004cde7f*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1004cde89*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1004cdea0*/
    {
      LOBYTE(v5) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004cdfb0*/
      if ( *((_BYTE *)v2 + 8) ) /*0x1004cdfb2*/
      {
LABEL_7:
        if ( !(_BYTE)v5 /*0x1004ce17e*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
        {
          *((_BYTE *)v2 + 8) = 1; /*0x1004ce18b*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v2); /*0x1004cdec9*/
        LOBYTE(v4) = 4; /*0x1004cdece*/
        return v4; /*0x1004cded0*/
      }
    }
    else
    {
      v5 = 0; /*0x1004cdea6*/
      if ( *((_BYTE *)v2 + 8) ) /*0x1004cdea8*/
        goto LABEL_7; /*0x1004cdeaf*/
    }
    v29 = v5; /*0x1004cdfbf*/
    v11 = *((_QWORD *)v2 + 60); /*0x1004cdfc2*/
    codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf(v20, v11, *((_QWORD *)v2 + 61)); /*0x1004cdfd7*/
    LOBYTE(v4) = 4; /*0x1004cdfe3*/
    if ( v21 != (void *)3 ) /*0x1004cdfe9*/
    {
      v11 = (__int64)__src; /*0x1004cdfef*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x1004ce002*/
      v18 = v21; /*0x1004ce007*/
      v4 = BYTE1(__dst[67]); /*0x1004ce00e*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(&v18); /*0x1004ce01c*/
      v12 = __dst[82]; /*0x1004ce021*/
      v13 = __dst[83] + 1LL; /*0x1004ce02f*/
      v28[8] = __dst[82]; /*0x1004ce032*/
      while ( v13 != 1 ) /*0x1004ce044*/
      {
        --v13; /*0x1004ce04d*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(); /*0x1004ce050*/
        v12 += 336; /*0x1004ce055*/
      }
      if ( __dst[81] ) /*0x1004ce06b*/
      {
        v11 = 336LL * __dst[81]; /*0x1004ce06d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce07d*/
      }
    }
    if ( !(_BYTE)v29 /*0x1004ce195*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      *((_BYTE *)v2 + 8) = 1; /*0x1004ce1a2*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v2); /*0x1004ce098*/
    v14 = v23; /*0x1004ce09d*/
    if ( v23 != 0x8000000000000000LL ) /*0x1004ce0b1*/
    {
      v11 = v26; /*0x1004ce0b7*/
      if ( v26 != 0x8000000000000000LL && v26 ) /*0x1004ce0c6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce0d4*/
      v15 = v25; /*0x1004ce0e0*/
      if ( v25 ) /*0x1004ce0ea*/
      {
        v16 = v24 + 8; /*0x1004ce0ec*/
        do /*0x1004ce107*/
        {
          v11 = *(_QWORD *)(v16 - 8); /*0x1004ce109*/
          if ( v11 ) /*0x1004ce110*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce11b*/
          v16 += 40; /*0x1004ce100*/
          --v15; /*0x1004ce104*/
        }
        while ( v15 ); /*0x1004ce107*/
      }
      if ( v14 ) /*0x1004ce12f*/
      {
        v11 = 40 * v14; /*0x1004ce135*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004ce141*/
      }
    }
    if ( v27[0] != 0x8000000000000000LL ) /*0x1004ce14d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerListPayload$GT$::h30c7481782ab1799(v27, v11); /*0x1004ce156*/
    if ( v28[0] != 0x8000000000000000LL ) /*0x1004ce15f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..SkillListPayload$GT$::he2a6fe445548b11c(v28, v11); /*0x1004ce165*/
  }
  else
  {
    v4 = BYTE1(__src[65]); /*0x1004cded5*/
    v6 = __src[79]; /*0x1004cdedc*/
    v7 = __src[80]; /*0x1004cdee3*/
    v8 = __src[81]; /*0x1004cdeea*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e(v20); /*0x1004cdef8*/
    v9 = v8 + 1; /*0x1004cdefd*/
    v10 = v7; /*0x1004cdf00*/
    while ( v9 != 1 ) /*0x1004cdf14*/
    {
      --v9; /*0x1004cdf1d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(); /*0x1004cdf20*/
      v10 += 336; /*0x1004cdf25*/
    }
    if ( v6 ) /*0x1004cdf2d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004cdf42*/
  }
  return v4; /*0x1004ce16c*/
}