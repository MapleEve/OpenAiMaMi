// mac 1.1.8 BACKEND-ONLY refresh_tray_menu node 0x1004d0830 depth=1
// codexmate_lib8commands9tray_menu16create_tray_menu
_QWORD *__fastcall codexmate_lib::commands::tray_menu::create_tray_menu::h9bf3ccf1bea591c8(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  volatile signed __int64 *v3; // rax
  volatile signed __int64 *v4; // r14
  pthread_mutex_t *v5; // rdi
  bool v6; // bl
  __int64 v7; // r15
  __int64 v8; // r12
  bool v9; // cl
  char v10; // bl
  int v11; // ecx
  __int64 v12; // rdi
  __int64 j; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 i; // r15
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbx
  _QWORD __src[85]; // [rsp+0h] [rbp-690h] BYREF
  _BYTE __dst[696]; // [rsp+2A8h] [rbp-3E8h] BYREF
  __int64 v26; // [rsp+560h] [rbp-130h]
  __int64 v27; // [rsp+568h] [rbp-128h]
  __int64 v28; // [rsp+570h] [rbp-120h]
  __int64 v29; // [rsp+578h] [rbp-118h]
  __int64 v30[8]; // [rsp+5C0h] [rbp-D0h] BYREF
  __int64 v31[8]; // [rsp+600h] [rbp-90h] BYREF
  _QWORD *v32; // [rsp+640h] [rbp-50h]
  __int64 v33; // [rsp+648h] [rbp-48h] BYREF
  __int64 v34; // [rsp+650h] [rbp-40h]
  __int64 v35; // [rsp+658h] [rbp-38h]
  _BYTE v36[7]; // [rsp+660h] [rbp-30h]
  char v37[41]; // [rsp+667h] [rbp-29h] BYREF

  v2 = a1; /*0x1004d0847*/
  codexmate_lib::commands::accounts::get_cached_display_snapshot::hb232462823f1c357(__src); /*0x1004d0854*/
  if ( LODWORD(__src[0]) == 3 )
  {
    v3 = (volatile signed __int64 *)tauri::state::StateManager::try_get::h5668abcf78ad5dde(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1004d0878*/
    if ( !v3 ) /*0x1004d0880*/
    {
      __src[0] = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_789; /*0x1004d0a1e*/
      __src[1] = 76; /*0x1004d0a25*/
      *(_QWORD *)__dst = __src; /*0x1004d0a30*/
      *(_QWORD *)&__dst[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004d0a3e*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004d0a5a*/
        (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
        (__int64)__dst,
        (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
    }
    v4 = v3; /*0x1004d0886*/
    v32 = a1; /*0x1004d0889*/
    v5 = (pthread_mutex_t *)*v3; /*0x1004d088d*/
    if ( !*v3 ) /*0x1004d088d*/
      v5 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v3); /*0x1004d0a67*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1004d08a3*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v6 = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1004d0a76*/
      if ( *((_BYTE *)v4 + 8) ) /*0x1004d0a79*/
        goto LABEL_7; /*0x1004d0a80*/
    }
    else
    {
      v6 = 0; /*0x1004d08c0*/
      if ( *((_BYTE *)v4 + 8) )
      {
LABEL_7:
        v33 = 0; /*0x1004d08cf*/
        v34 = 1; /*0x1004d08d7*/
        v35 = 0; /*0x1004d08df*/
        __src[2] = 1610612768; /*0x1004d08e7*/
        __src[0] = &v33; /*0x1004d08f6*/
        __src[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d0904*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                (__int64)"poisoned lock: another task failed inside",
                                41,
                                (__int64)__src) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d0c62*/
            (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::u"
                     "nwrap()` on an `Err` value",
            55,
            (__int64)v37,
            (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
            (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
        v7 = v33; /*0x1004d092b*/
        v8 = v34; /*0x1004d092f*/
        v9 = v6; /*0x1004d0933*/
        v10 = v35; /*0x1004d0935*/
        *(_DWORD *)v36 = *(_DWORD *)((char *)&v35 + 1); /*0x1004d093c*/
        *(_DWORD *)&v36[3] = HIDWORD(v35); /*0x1004d0942*/
        if ( !v9 /*0x1004d0c69*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
        {
          *((_BYTE *)v4 + 8) = 1; /*0x1004d0c76*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v4); /*0x1004d095f*/
        v2 = v32; /*0x1004d0964*/
        *v32 = v7; /*0x1004d0968*/
        v2[1] = v8; /*0x1004d096c*/
        *((_BYTE *)v2 + 16) = v10; /*0x1004d0970*/
        v11 = *(_DWORD *)&v36[3]; /*0x1004d0977*/
        *(_DWORD *)((char *)v2 + 17) = *(_DWORD *)v36; /*0x1004d097a*/
        *((_DWORD *)v2 + 5) = v11; /*0x1004d097e*/
        return v2; /*0x1004d0982*/
      }
    }
    codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf( /*0x1004d0a9b*/
      (__int64 *)__dst,
      *((const void **)v4 + 60),
      *((_QWORD *)v4 + 61));
    if ( !v6 /*0x1004d0c80*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      *((_BYTE *)v4 + 8) = 1; /*0x1004d0c8d*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v4); /*0x1004d0aba*/
    v2 = v32; /*0x1004d0abf*/
    if ( *(_DWORD *)&__dst[16] == 3 ) /*0x1004d0aca*/
    {
      codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::h2c50152c9250541b(v32, a2); /*0x1004d0ad2*/
    }
    else
    {
      memcpy(__src, &__dst[16], sizeof(__src)); /*0x1004d0af8*/
      codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h27dd499b1484bd80(v32, a2, __src); /*0x1004d0b06*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e((__int64)&__dst[16]); /*0x1004d0b0e*/
      v18 = __src[83]; /*0x1004d0b13*/
      for ( i = __src[84] + 1LL; i != 1; --i ) /*0x1004d0b21*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v18); /*0x1004d0b40*/
        v18 += 336; /*0x1004d0b45*/
      }
      if ( __src[82] ) /*0x1004d0b54*/
      {
        a2 = 336LL * __src[82]; /*0x1004d0b5d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d0b69*/
      }
    }
    v20 = v26; /*0x1004d0b6e*/
    if ( v26 != 0x8000000000000000LL ) /*0x1004d0b78*/
    {
      a2 = v29; /*0x1004d0b7e*/
      if ( v29 != 0x8000000000000000LL && v29 ) /*0x1004d0b8d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d0b9b*/
      v21 = v28; /*0x1004d0ba7*/
      if ( v28 ) /*0x1004d0bb1*/
      {
        v22 = v27 + 8; /*0x1004d0bb3*/
        do /*0x1004d0bc7*/
        {
          a2 = *(_QWORD *)(v22 - 8); /*0x1004d0bc9*/
          if ( a2 ) /*0x1004d0bd0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d0bda*/
          v22 += 40; /*0x1004d0bc0*/
          --v21; /*0x1004d0bc4*/
        }
        while ( v21 ); /*0x1004d0bc7*/
      }
      if ( v20 ) /*0x1004d0bee*/
      {
        a2 = 40 * v20; /*0x1004d0bf4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d0c00*/
      }
    }
    if ( v30[0] != 0x8000000000000000LL ) /*0x1004d0c0c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerListPayload$GT$::h30c7481782ab1799(v30); /*0x1004d0c15*/
    if ( v31[0] != 0x8000000000000000LL ) /*0x1004d0c21*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..SkillListPayload$GT$::he2a6fe445548b11c( /*0x1004d0c2a*/
        v31,
        a2,
        v14,
        v15,
        v16,
        v17);
  }
  else
  {
    memcpy(__dst, __src, 0x2A8u); /*0x1004d099d*/
    codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h27dd499b1484bd80(a1, a2, __dst); /*0x1004d09ab*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppStatusPayload$GT$::he2402bee5fcd767e((__int64)__src); /*0x1004d09b7*/
    v12 = *(_QWORD *)&__dst[664]; /*0x1004d09bc*/
    for ( j = *(_QWORD *)&__dst[672] + 1LL; j != 1; --j ) /*0x1004d09ca*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v12); /*0x1004d09e0*/
      v12 += 336; /*0x1004d09e5*/
    }
    if ( *(_QWORD *)&__dst[656] ) /*0x1004d09f4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d0a0d*/
  }
  return v2; /*0x1004d0c32*/
}