// __ZN13codexmate_lib8commands6system8diagnose28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fcd30 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::diagnose::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h20257d9d1d6c0826(
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
  _QWORD __src[52]; // [rsp+8h] [rbp-278h] BYREF
  _QWORD v21[12]; // [rsp+1A8h] [rbp-D8h] BYREF
  _QWORD v22[3]; // [rsp+208h] [rbp-78h] BYREF
  __int64 v23; // [rsp+220h] [rbp-60h] BYREF
  __int64 v24; // [rsp+228h] [rbp-58h]
  __int64 v25; // [rsp+230h] [rbp-50h]
  __int64 v26; // [rsp+238h] [rbp-48h] BYREF
  __int64 v27; // [rsp+240h] [rbp-40h]
  __int64 v28; // [rsp+248h] [rbp-38h]
  __int64 v29; // [rsp+250h] [rbp-30h]

  v29 = a2; /*0x1006fcd47*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006fcd5d*/
  v4 = v3; /*0x1006fcd62*/
  if ( !v3 ) /*0x1006fcd68*/
  {
    v21[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006fce91*/
    v21[1] = 76; /*0x1006fce98*/
    __src[0] = v21; /*0x1006fceaa*/
    __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006fceb8*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006fced4*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      __src,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = *v3; /*0x1006fcd6e*/
  if ( !*v3 ) /*0x1006fcd6e*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3); /*0x1006fcee6*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1006fcd7a*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006fcd89*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x1006fcef3*/
    LOBYTE(v8) = v8 ^ 1; /*0x1006fcef5*/
    if ( *((_BYTE *)v4 + 8) ) /*0x1006fcf02*/
      goto LABEL_6; /*0x1006fcf09*/
LABEL_12:
    codexmate_lib::core::repository::Repository::diagnose::h773f305c6f31c083(__src); /*0x1006fcf0f*/
    if ( LODWORD(__src[0]) == 2 ) /*0x1006fcf29*/
    {
      qmemcpy(v21, &__src[1], sizeof(v21)); /*0x1006fcf45*/
      v26 = 0; /*0x1006fcf48*/
      v27 = 1; /*0x1006fcf50*/
      v28 = 0; /*0x1006fcf58*/
      v22[2] = 1610612768; /*0x1006fcf60*/
      v22[0] = &v26; /*0x1006fcf6c*/
      v22[1] = &off_101969DD0; /*0x1006fcf77*/
      v14 = v22; /*0x1006fcf7b*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fcf82*/
                              v21,
                              v22) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v23, &unk_101969E38, &off_101969E00); /*0x1006fd07d*/
      v23 = v26; /*0x1006fcf97*/
      v24 = v27; /*0x1006fcf9b*/
      v25 = v28; /*0x1006fcfa3*/
      v15 = &__src[1]; /*0x1006fcfa7*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x1006fcfae*/
      *((_QWORD *)__dst + 3) = v25; /*0x1006fcfb7*/
      v17 = v23; /*0x1006fcfbc*/
      v18 = v24; /*0x1006fcfc0*/
      *((_QWORD *)__dst + 2) = v24; /*0x1006fcfc4*/
      *((_QWORD *)__dst + 1) = v17; /*0x1006fcfc9*/
      *(_QWORD *)__dst = 2; /*0x1006fcfce*/
      if ( (_BYTE)v8 ) /*0x1006fcfd8*/
        goto LABEL_18; /*0x1006fcfd8*/
    }
    else
    {
      v14 = __src; /*0x1006fcfdc*/
      v15 = __dst; /*0x1006fcfe8*/
      memcpy(__dst, __src, 0x1A0u); /*0x1006fcfeb*/
      if ( (_BYTE)v8 ) /*0x1006fcff2*/
      {
LABEL_18:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006fd000*/
        return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1006fd003*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1006fd084*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v14, v16, v18) )
    {
      *((_BYTE *)v4 + 8) = 1; /*0x1006fd091*/
    }
    goto LABEL_18; /*0x1006fd096*/
  }
  v8 = 0; /*0x1006fcd95*/
  if ( !*((_BYTE *)v4 + 8) ) /*0x1006fcda8*/
    goto LABEL_12; /*0x1006fcda8*/
LABEL_6:
  v21[0] = 0; /*0x1006fcdae*/
  v21[1] = 1; /*0x1006fcdb9*/
  v21[2] = 0; /*0x1006fcdc4*/
  __src[2] = 1610612768; /*0x1006fcdcf*/
  __src[0] = v21; /*0x1006fcde1*/
  __src[1] = &off_101969DD0; /*0x1006fcdef*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v23, &unk_101969E38, &off_101969E00); /*0x1006fd041*/
  v9 = v8; /*0x1006fce1c*/
  v10 = v21[0]; /*0x1006fce1e*/
  v11 = v21[1]; /*0x1006fce25*/
  v12 = v21[2]; /*0x1006fce2c*/
  LODWORD(v22[0]) = *(_DWORD *)((char *)&v21[2] + 1); /*0x1006fce3a*/
  *(_DWORD *)((char *)v22 + 3) = HIDWORD(v21[2]); /*0x1006fce43*/
  if ( !(_BYTE)v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v9) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x1006fd055*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006fce59*/
  v13 = v22[0]; /*0x1006fce5e*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v22 + 3); /*0x1006fce64*/
  *(_DWORD *)(__dst + 25) = v13; /*0x1006fce69*/
  *((_QWORD *)__dst + 1) = v10; /*0x1006fce6e*/
  *((_QWORD *)__dst + 2) = v11; /*0x1006fce73*/
  __dst[24] = v12; /*0x1006fce78*/
  *(_QWORD *)__dst = 2; /*0x1006fce7d*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1006fd011*/
}