// __ZN13codexmate_lib8commands8accounts13load_snapshot28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006ffc90 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::load_snapshot::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb2728c783fbfc094(
        char *__dst,
        __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r13
  char v12; // r15
  int v13; // eax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD __src[112]; // [rsp+8h] [rbp-458h] BYREF
  _QWORD v21[12]; // [rsp+388h] [rbp-D8h] BYREF
  _QWORD v22[3]; // [rsp+3E8h] [rbp-78h] BYREF
  __int64 v23; // [rsp+400h] [rbp-60h] BYREF
  __int64 v24; // [rsp+408h] [rbp-58h]
  __int64 v25; // [rsp+410h] [rbp-50h]
  __int64 v26; // [rsp+418h] [rbp-48h] BYREF
  __int64 v27; // [rsp+420h] [rbp-40h]
  __int64 v28; // [rsp+428h] [rbp-38h]
  __int64 v29; // [rsp+430h] [rbp-30h]

  v29 = a2; /*0x1006ffca7*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006ffcbd*/
  v4 = v3; /*0x1006ffcc2*/
  if ( !v3 ) /*0x1006ffcc8*/
  {
    v21[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006ffdf1*/
    v21[1] = 76; /*0x1006ffdf8*/
    __src[0] = v21; /*0x1006ffe0a*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006ffe18*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006ffe34*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = *v3; /*0x1006ffcce*/
  if ( !*v3 ) /*0x1006ffcce*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3); /*0x1006ffe46*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1006ffcda*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006ffce9*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x1006ffe53*/
    LOBYTE(v8) = v8 ^ 1; /*0x1006ffe55*/
    if ( *((_BYTE *)v4 + 8) ) /*0x1006ffe62*/
      goto LABEL_6; /*0x1006ffe69*/
LABEL_12:
    codexmate_lib::core::repository::Repository::load_snapshot_local::h7b714ce076bcba03(__src); /*0x1006ffe6f*/
    if ( LODWORD(__src[0]) == 3 ) /*0x1006ffe89*/
    {
      qmemcpy(v21, &__src[1], sizeof(v21)); /*0x1006ffea5*/
      v26 = 0; /*0x1006ffea8*/
      v27 = 1; /*0x1006ffeb0*/
      v28 = 0; /*0x1006ffeb8*/
      v22[2] = 1610612768; /*0x1006ffec0*/
      v22[0] = &v26; /*0x1006ffecc*/
      v22[1] = &off_101969DD0; /*0x1006ffed7*/
      v14 = v22; /*0x1006ffedb*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006ffee2*/
                              v21,
                              v22) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v23, &unk_101969E38, &off_101969E00); /*0x1006fffdd*/
      v23 = v26; /*0x1006ffef7*/
      v24 = v27; /*0x1006ffefb*/
      v25 = v28; /*0x1006fff03*/
      v15 = &__src[1]; /*0x1006fff07*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x1006fff0e*/
      *((_QWORD *)__dst + 3) = v25; /*0x1006fff17*/
      v17 = v23; /*0x1006fff1c*/
      v18 = v24; /*0x1006fff20*/
      *((_QWORD *)__dst + 2) = v24; /*0x1006fff24*/
      *((_QWORD *)__dst + 1) = v17; /*0x1006fff29*/
      *(_QWORD *)__dst = 3; /*0x1006fff2e*/
      if ( (_BYTE)v8 ) /*0x1006fff38*/
        goto LABEL_18; /*0x1006fff38*/
    }
    else
    {
      v14 = __src; /*0x1006fff3c*/
      v15 = __dst; /*0x1006fff48*/
      memcpy(__dst, __src, 0x380u); /*0x1006fff4b*/
      if ( (_BYTE)v8 ) /*0x1006fff52*/
      {
LABEL_18:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006fff60*/
        return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1006fff63*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006fffe4*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v14, v16, v18) )
    {
      *((_BYTE *)v4 + 8) = 1; /*0x1006ffff1*/
    }
    goto LABEL_18; /*0x1006ffff6*/
  }
  v8 = 0; /*0x1006ffcf5*/
  if ( !*((_BYTE *)v4 + 8) ) /*0x1006ffd08*/
    goto LABEL_12; /*0x1006ffd08*/
LABEL_6:
  v21[0] = 0; /*0x1006ffd0e*/
  v21[1] = 1; /*0x1006ffd19*/
  v21[2] = 0; /*0x1006ffd24*/
  __src[2] = 1610612768; /*0x1006ffd2f*/
  __src[0] = v21; /*0x1006ffd41*/
  __src[1] = &off_101969DD0; /*0x1006ffd4f*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v23, &unk_101969E38, &off_101969E00); /*0x1006fffa1*/
  v9 = v8; /*0x1006ffd7c*/
  v10 = v21[0]; /*0x1006ffd7e*/
  v11 = v21[1]; /*0x1006ffd85*/
  v12 = v21[2]; /*0x1006ffd8c*/
  LODWORD(v22[0]) = *(_DWORD *)((char *)&v21[2] + 1); /*0x1006ffd9a*/
  *(_DWORD *)((char *)v22 + 3) = HIDWORD(v21[2]); /*0x1006ffda3*/
  if ( !(_BYTE)v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v9) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x1006fffb5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006ffdb9*/
  v13 = v22[0]; /*0x1006ffdbe*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v22 + 3); /*0x1006ffdc4*/
  *(_DWORD *)(__dst + 25) = v13; /*0x1006ffdc9*/
  *((_QWORD *)__dst + 1) = v10; /*0x1006ffdce*/
  *((_QWORD *)__dst + 2) = v11; /*0x1006ffdd3*/
  __dst[24] = v12; /*0x1006ffdd8*/
  *(_QWORD *)__dst = 3; /*0x1006ffddd*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1006fff71*/
}