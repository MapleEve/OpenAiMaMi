// __ZN13codexmate_lib8commands6system21configure_auto_switch28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fc4c0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::configure_auto_switch::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hb87dbde77debda75(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbx
  char v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rcx
  char v19; // al
  _QWORD v20[15]; // [rsp+8h] [rbp-158h] BYREF
  _QWORD v21[12]; // [rsp+80h] [rbp-E0h] BYREF
  _QWORD v22[3]; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+100h] [rbp-60h]
  __int64 v25; // [rsp+108h] [rbp-58h]
  __int64 v26; // [rsp+110h] [rbp-50h] BYREF
  __int64 v27; // [rsp+118h] [rbp-48h]
  __int64 v28; // [rsp+120h] [rbp-40h]
  _DWORD *v29; // [rsp+128h] [rbp-38h]
  __int64 *v30; // [rsp+130h] [rbp-30h]

  v29 = (_DWORD *)a2; /*0x1006fc4d7*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006fc4ed*/
  v30 = v3; /*0x1006fc4f2*/
  if ( !v3 ) /*0x1006fc4fd*/
  {
    v21[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006fc767*/
    v21[1] = 76; /*0x1006fc76e*/
    v20[0] = v21; /*0x1006fc780*/
    v20[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006fc78e*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006fc7aa*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v20,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = *v3; /*0x1006fc503*/
  if ( !*v3 ) /*0x1006fc503*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v30); /*0x1006fc7bd*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006fc50f*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006fc51e*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006fc7ca*/
    LOBYTE(v7) = v7 ^ 1; /*0x1006fc7cc*/
  }
  else
  {
    v7 = 0; /*0x1006fc52a*/
  }
  if ( !*((_BYTE *)v30 + 8) ) /*0x1006fc540*/
  {
    codexmate_lib::core::repository::Repository::update_auto_switch_config::h8b83d455cb5f769b( /*0x1006fc654*/
      (unsigned int)v20,
      (_DWORD)v30 + 16,
      v29[38],
      v29[39],
      v29[40],
      v29[41],
      v29[42]);
    if ( v20[0] == 0x8000000000000000LL ) /*0x1006fc664*/
    {
      qmemcpy(v21, &v20[1], sizeof(v21)); /*0x1006fc680*/
      v26 = 0; /*0x1006fc683*/
      v27 = 1; /*0x1006fc68b*/
      v28 = 0; /*0x1006fc693*/
      v22[2] = 1610612768; /*0x1006fc69b*/
      v22[0] = &v26; /*0x1006fc6a7*/
      v22[1] = &off_101969DD0; /*0x1006fc6b2*/
      v14 = v22; /*0x1006fc6b6*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fc6bd*/
                              v21,
                              v22) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v23, &unk_101969E38, &off_101969E00); /*0x1006fc831*/
      v23 = v26; /*0x1006fc6d2*/
      v24 = v27; /*0x1006fc6d6*/
      v25 = v28; /*0x1006fc6de*/
      v15 = &v20[1]; /*0x1006fc6e2*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v20[1]); /*0x1006fc6e9*/
      a1[3] = v25; /*0x1006fc6f2*/
      v16 = v23; /*0x1006fc6f7*/
      a1[2] = v24; /*0x1006fc6ff*/
      a1[1] = v16; /*0x1006fc704*/
      *a1 = 0x8000000000000000LL; /*0x1006fc709*/
      v17 = v30; /*0x1006fc70f*/
      if ( (_BYTE)v7 ) /*0x1006fc713*/
        goto LABEL_17; /*0x1006fc713*/
    }
    else
    {
      qmemcpy(a1, v20, 0x78u); /*0x1006fc726*/
      v14 = v21; /*0x1006fc726*/
      v15 = a1 + 15; /*0x1006fc726*/
      v17 = v30; /*0x1006fc72b*/
      if ( (_BYTE)v7 ) /*0x1006fc72f*/
      {
LABEL_17:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v17); /*0x1006fc73d*/
        return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1006fc740*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006fc737*/
    {
      v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v14, v13, v17); /*0x1006fc838*/
      v17 = v30; /*0x1006fc83f*/
      if ( !v19 ) /*0x1006fc843*/
        *((_BYTE *)v30 + 8) = 1; /*0x1006fc849*/
    }
    goto LABEL_17; /*0x1006fc84d*/
  }
  v21[0] = 0; /*0x1006fc546*/
  v21[1] = 1; /*0x1006fc551*/
  v21[2] = 0; /*0x1006fc55c*/
  v20[2] = 1610612768; /*0x1006fc567*/
  v20[0] = v21; /*0x1006fc579*/
  v20[1] = &off_101969DD0; /*0x1006fc587*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v20) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v23, &unk_101969E38, &off_101969E00); /*0x1006fc7f2*/
  v8 = v21[0]; /*0x1006fc5b1*/
  v9 = v7; /*0x1006fc5b8*/
  v10 = v21[1]; /*0x1006fc5ba*/
  v11 = v21[2]; /*0x1006fc5c1*/
  LODWORD(v22[0]) = *(_DWORD *)((char *)&v21[2] + 1); /*0x1006fc5cf*/
  *(_DWORD *)((char *)v22 + 3) = HIDWORD(v21[2]); /*0x1006fc5d8*/
  if ( !(_BYTE)v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v9) )
  {
    *((_BYTE *)v30 + 8) = 1; /*0x1006fc80a*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v30); /*0x1006fc5f2*/
  v12 = v22[0]; /*0x1006fc5f7*/
  *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v22 + 3); /*0x1006fc5fd*/
  *(_DWORD *)((char *)a1 + 25) = v12; /*0x1006fc602*/
  a1[1] = v8; /*0x1006fc607*/
  a1[2] = v10; /*0x1006fc60c*/
  *((_BYTE *)a1 + 24) = v11; /*0x1006fc611*/
  *a1 = 0x8000000000000000LL; /*0x1006fc619*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1006fc74e*/
}