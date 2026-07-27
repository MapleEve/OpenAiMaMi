// __ZN13codexmate_lib8commands8accounts31switch_account_and_restart_sync28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10069f130
__int64 __fastcall codexmate_lib::commands::accounts::switch_account_and_restart_sync::_$u7b$$u7b$closure$u7d$$u7d$::hd65f2b4d1184839f(
        char *__dst,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r13
  char v15; // cl
  char v16; // r14
  __int64 result; // rax
  int v18; // ecx
  _QWORD *v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD __src[61]; // [rsp+8h] [rbp-2B8h] BYREF
  _QWORD v24[12]; // [rsp+1F0h] [rbp-D0h] BYREF
  _QWORD v25[3]; // [rsp+250h] [rbp-70h] BYREF
  __int64 v26; // [rsp+268h] [rbp-58h] BYREF
  __int64 v27; // [rsp+270h] [rbp-50h]
  __int64 v28; // [rsp+278h] [rbp-48h]
  __int64 v29; // [rsp+280h] [rbp-40h] BYREF
  __int64 v30; // [rsp+288h] [rbp-38h]
  __int64 v31; // [rsp+290h] [rbp-30h]

  v6 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(a4 + 4872) + 16LL); /*0x10069f158*/
  if ( !v6 ) /*0x10069f160*/
  {
    v24[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x10069f288*/
    v24[1] = 76; /*0x10069f28f*/
    __src[0] = v24; /*0x10069f2a1*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10069f2af*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10069f2cb*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v7 = v6; /*0x10069f166*/
  v8 = *v6; /*0x10069f169*/
  if ( !*v6 ) /*0x10069f169*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v6); /*0x10069f2d8*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8); /*0x10069f175*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10069f184*/
  {
    v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, v10) ^ 1; /*0x10069f2e8*/
    if ( *((_BYTE *)v7 + 8) ) /*0x10069f2ec*/
      goto LABEL_6; /*0x10069f2f2*/
LABEL_12:
    codexmate_lib::core::repository::Repository::switch_account::h8da8a6a163d67813(__src, v7 + 2, a2, a3); /*0x10069f2f8*/
    if ( LODWORD(__src[0]) == 2 ) /*0x10069f318*/
    {
      qmemcpy(v24, &__src[1], sizeof(v24)); /*0x10069f337*/
      v29 = 0; /*0x10069f33a*/
      v30 = 1; /*0x10069f342*/
      v31 = 0; /*0x10069f34a*/
      v25[2] = 1610612768; /*0x10069f352*/
      v25[0] = &v29; /*0x10069f35e*/
      v25[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069f369*/
      v19 = v25; /*0x10069f36d*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10069f374*/
                              v24,
                              v25) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069f46c*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v26,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v26 = v29; /*0x10069f389*/
      v27 = v30; /*0x10069f38d*/
      v28 = v31; /*0x10069f395*/
      v20 = &__src[1]; /*0x10069f399*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x10069f39c*/
      *((_QWORD *)__dst + 3) = v28; /*0x10069f3a5*/
      v22 = v26; /*0x10069f3a9*/
      *((_QWORD *)__dst + 2) = v27; /*0x10069f3b1*/
      *((_QWORD *)__dst + 1) = v22; /*0x10069f3b5*/
      *(_QWORD *)__dst = 2; /*0x10069f3b9*/
      if ( v11 ) /*0x10069f3c3*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v7); /*0x10069f3c3*/
    }
    else
    {
      v19 = __src; /*0x10069f3c7*/
      v20 = __dst; /*0x10069f3d3*/
      memcpy(__dst, __src, 0x1E8u); /*0x10069f3d6*/
      if ( v11 ) /*0x10069f3de*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v7); /*0x10069f412*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10069f473*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v20,
                             v19,
                             v21,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v7 + 8) = 1; /*0x10069f480*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v7); /*0x10069f484*/
  }
  v11 = 0; /*0x10069f190*/
  if ( !*((_BYTE *)v7 + 8) ) /*0x10069f199*/
    goto LABEL_12; /*0x10069f199*/
LABEL_6:
  v24[0] = 0; /*0x10069f19f*/
  v24[1] = 1; /*0x10069f1aa*/
  v24[2] = 0; /*0x10069f1b5*/
  __src[2] = 1610612768; /*0x10069f1c0*/
  __src[0] = v24; /*0x10069f1d2*/
  __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069f1e0*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069f431*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v26,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v13 = v24[0]; /*0x10069f207*/
  v14 = v24[1]; /*0x10069f20e*/
  v15 = v11; /*0x10069f215*/
  v16 = v24[2]; /*0x10069f218*/
  LODWORD(v25[0]) = *(_DWORD *)((char *)&v24[2] + 1); /*0x10069f226*/
  *(_DWORD *)((char *)v25 + 3) = HIDWORD(v24[2]); /*0x10069f22f*/
  if ( !v15
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v12,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v7 + 8) = 1; /*0x10069f445*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v7); /*0x10069f256*/
  *((_QWORD *)__dst + 1) = v13; /*0x10069f25b*/
  *((_QWORD *)__dst + 2) = v14; /*0x10069f25f*/
  __dst[24] = v16; /*0x10069f263*/
  result = LODWORD(v25[0]); /*0x10069f267*/
  v18 = *(_DWORD *)((char *)v25 + 3); /*0x10069f26a*/
  *(_DWORD *)(__dst + 25) = v25[0]; /*0x10069f26d*/
  *((_DWORD *)__dst + 7) = v18; /*0x10069f271*/
  *(_QWORD *)__dst = 2; /*0x10069f275*/
  return result; /*0x10069f401*/
}