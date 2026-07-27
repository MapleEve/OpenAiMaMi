// __ZN13codexmate_lib8commands9autostart21set_autostart_enabled @ 0x1006a79c0
__int64 __fastcall codexmate_lib::commands::autostart::set_autostart_enabled::ha4eafe8f010fead2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        char a4)
{
  __int64 v5; // rax
  unsigned int v6; // r12d
  _QWORD *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r12
  __int64 v11; // r13
  char v12; // r15
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // al
  _QWORD __dst[18]; // [rsp+8h] [rbp-198h] BYREF
  char v28; // [rsp+99h] [rbp-107h]
  _QWORD v29[12]; // [rsp+A0h] [rbp-100h] BYREF
  _QWORD v30[3]; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+118h] [rbp-88h] BYREF
  __int64 v32; // [rsp+120h] [rbp-80h]
  __int64 v33; // [rsp+128h] [rbp-78h]
  __int64 v34; // [rsp+130h] [rbp-70h]
  __int64 v35; // [rsp+138h] [rbp-68h] BYREF
  __int64 v36; // [rsp+140h] [rbp-60h]
  __int64 v37; // [rsp+148h] [rbp-58h]
  __int64 *v38; // [rsp+150h] [rbp-50h] BYREF
  __int64 v39; // [rsp+158h] [rbp-48h]
  __int64 v40; // [rsp+160h] [rbp-40h]
  unsigned int v41; // [rsp+16Ch] [rbp-34h]
  _QWORD *v42; // [rsp+170h] [rbp-30h]

  v42 = a3; /*0x1006a79d7*/
  v34 = a2; /*0x1006a79de*/
  v5 = tauri::state::StateManager::try_get::hc83b298ea759c550(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006a79f4*/
  if ( !v5 ) /*0x1006a79fc*/
  {
    v29[0] = &anon_0df76e0cec988e6dc281ac0519b88803_1035; /*0x1006a7c6e*/
    v29[1] = 41; /*0x1006a7c75*/
    __dst[0] = v29; /*0x1006a7c87*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a7c95*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006a7cb1*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __dst,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  if ( a4 ) /*0x1006a7a05*/
    tauri_plugin_autostart::AutoLaunchManager::enable::h7cfc24bdcadcb496(v30, v5); /*0x1006a7a11*/
  else
    tauri_plugin_autostart::AutoLaunchManager::disable::hf6be777386cd8bbd(v30, v5); /*0x1006a7a22*/
  if ( v30[0] == 0x8000000000000001LL )
  {
    if ( !*v42 ) /*0x1006a7a46*/
      std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v42); /*0x1006a7cbf*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1006a7a52*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v6 = ((__int64 (*)(void))std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd)(); /*0x1006a7cd1*/
      LOBYTE(v6) = v6 ^ 1; /*0x1006a7cd4*/
      v7 = v42; /*0x1006a7cd8*/
      if ( *((_BYTE *)v42 + 8) ) /*0x1006a7cdc*/
        goto LABEL_10; /*0x1006a7ce3*/
    }
    else
    {
      v6 = 0; /*0x1006a7a78*/
      v7 = v42; /*0x1006a7a7b*/
      if ( *((_BYTE *)v42 + 8) )
      {
LABEL_10:
        v38 = nullptr; /*0x1006a7a8c*/
        v39 = 1; /*0x1006a7a94*/
        v40 = 0; /*0x1006a7a9c*/
        __dst[2] = 1610612768; /*0x1006a7aa4*/
        __dst[0] = &v38; /*0x1006a7ab3*/
        __dst[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a7ac1*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                __dst) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a7ede*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v31,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v9 = v6; /*0x1006a7ae8*/
        v10 = v38; /*0x1006a7aeb*/
        v11 = v39; /*0x1006a7aef*/
        v12 = v40; /*0x1006a7af3*/
        LODWORD(v35) = *(_DWORD *)((char *)&v40 + 1); /*0x1006a7afb*/
        *(_DWORD *)((char *)&v35 + 3) = HIDWORD(v40); /*0x1006a7b01*/
        if ( !(_BYTE)v9
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v8,
                                 v9) )
        {
          *((_BYTE *)v42 + 8) = 1; /*0x1006a7ef6*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v42); /*0x1006a7b22*/
        v13 = v35; /*0x1006a7b27*/
        *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v35 + 3); /*0x1006a7b2d*/
        *(_DWORD *)(a1 + 25) = v13; /*0x1006a7b31*/
        *(_QWORD *)(a1 + 8) = v10; /*0x1006a7b35*/
        *(_QWORD *)(a1 + 16) = v11; /*0x1006a7b39*/
        *(_BYTE *)(a1 + 24) = v12; /*0x1006a7b3d*/
        *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006a7b4b*/
        goto LABEL_24; /*0x1006a7b4e*/
      }
    }
    v41 = v6; /*0x1006a7ce9*/
    codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst); /*0x1006a7cfb*/
    v28 = a4; /*0x1006a7d00*/
    codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v29, v7 + 2, __dst); /*0x1006a7d18*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v7 + 2); /*0x1006a7d24*/
    if ( LODWORD(v29[0]) == 11 ) /*0x1006a7d30*/
    {
      v21 = v42; /*0x1006a7d3a*/
      if ( !(_BYTE)v41 /*0x1006a7d4d*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      {
        v26 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, v7 + 2, v20, v42); /*0x1006a7f27*/
        v21 = v42; /*0x1006a7f2e*/
        if ( !v26 ) /*0x1006a7f32*/
          *((_BYTE *)v42 + 8) = 1; /*0x1006a7f38*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v21); /*0x1006a7d56*/
      codexmate_lib::commands::autostart::read_enabled::ha4e465ff69e6af59(v29, *(_QWORD *)(v34 + 136)); /*0x1006a7d6d*/
      v22 = v29[0]; /*0x1006a7d72*/
      v23 = v29[1]; /*0x1006a7d79*/
      if ( v29[0] == 0x8000000000000000LL ) /*0x1006a7d8d*/
      {
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h7ab5ec0371a94489(__dst, LOBYTE(v29[1]), 1); /*0x1006a7da2*/
        qmemcpy((void *)a1, __dst, 0x50u); /*0x1006a7db6*/
      }
      else
      {
        v25 = *(_QWORD *)((char *)&v29[1] + 1); /*0x1006a7e97*/
        *(_QWORD *)(a1 + 24) = v29[2]; /*0x1006a7ea5*/
        *(_QWORD *)(a1 + 17) = v25; /*0x1006a7ea9*/
        *(_QWORD *)(a1 + 8) = v22; /*0x1006a7ead*/
        *(_BYTE *)(a1 + 16) = v23; /*0x1006a7eb1*/
        *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006a7eb5*/
      }
    }
    else
    {
      qmemcpy(__dst, v29, 0x60u); /*0x1006a7dd4*/
      v35 = 0; /*0x1006a7dd7*/
      v36 = 1; /*0x1006a7ddf*/
      v37 = 0; /*0x1006a7de7*/
      v40 = 1610612768; /*0x1006a7def*/
      v38 = &v35; /*0x1006a7dfb*/
      v39 = (__int64)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a7e06*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006a7e11*/
                              __dst,
                              &v38) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a7f20*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v31,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v31 = v35; /*0x1006a7e26*/
      v32 = v36; /*0x1006a7e2d*/
      v33 = v37; /*0x1006a7e35*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v29); /*0x1006a7e40*/
      *(_QWORD *)(a1 + 24) = v33; /*0x1006a7e49*/
      v24 = v31; /*0x1006a7e4d*/
      *(_QWORD *)(a1 + 16) = v32; /*0x1006a7e58*/
      *(_QWORD *)(a1 + 8) = v24; /*0x1006a7e5c*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006a7e6a*/
      if ( !(_BYTE)v41 /*0x1006a7f41*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)((__int64 (*)(void))std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd)() )
      {
        *((_BYTE *)v42 + 8) = 1; /*0x1006a7f52*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v42); /*0x1006a7e8d*/
    }
  }
  else
  {
    __dst[2] = v30[2]; /*0x1006a7b5a*/
    __dst[1] = v30[1]; /*0x1006a7b6f*/
    __dst[0] = v30[0]; /*0x1006a7b76*/
    v38 = __dst; /*0x1006a7b84*/
    v39 = (__int64)_$LT$tauri_plugin_autostart..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8e0129bcf871b870; /*0x1006a7b8f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v29, &unk_1017C380F, &v38); /*0x1006a7ba5*/
    if ( __dst[0] == 0x8000000000000000LL ) /*0x1006a7bb4*/
    {
      if ( (__dst[1] & 3) == 1 ) /*0x1006a7bc5*/
      {
        v14 = __dst[1] - 1LL; /*0x1006a7bca*/
        v15 = *(_QWORD *)(__dst[1] - 1LL); /*0x1006a7bce*/
        v16 = *(_QWORD *)(__dst[1] + 7LL); /*0x1006a7bd2*/
        if ( *(_QWORD *)v16 ) /*0x1006a7bd6*/
          (*(void (__fastcall **)(__int64))v16)(v15); /*0x1006a7be1*/
        v17 = *(_QWORD *)(v16 + 8); /*0x1006a7be3*/
        if ( v17 ) /*0x1006a7bea*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x1006a7bf3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24, 8); /*0x1006a7c05*/
      }
    }
    else if ( __dst[0] ) /*0x1006a7c12*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1006a7c20*/
    }
    *(_QWORD *)(a1 + 24) = v29[2]; /*0x1006a7c2c*/
    v18 = v29[0]; /*0x1006a7c30*/
    *(_QWORD *)(a1 + 16) = v29[1]; /*0x1006a7c3e*/
    *(_QWORD *)(a1 + 8) = v18; /*0x1006a7c42*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006a7c46*/
  }
LABEL_24:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v34); /*0x1006a7c49*/
  return a1; /*0x1006a7c55*/
}