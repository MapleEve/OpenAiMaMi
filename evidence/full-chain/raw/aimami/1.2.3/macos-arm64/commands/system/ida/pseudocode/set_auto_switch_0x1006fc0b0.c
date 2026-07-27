// __ZN13codexmate_lib8commands6system15set_auto_switch28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fc0b0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::set_auto_switch::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h617ece24e3f40314(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r9d
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rcx
  char v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rcx
  char v20; // al
  _QWORD v21[15]; // [rsp+8h] [rbp-158h] BYREF
  _QWORD v22[12]; // [rsp+80h] [rbp-E0h] BYREF
  _QWORD v23[3]; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+100h] [rbp-60h]
  __int64 v26; // [rsp+108h] [rbp-58h]
  __int64 v27; // [rsp+110h] [rbp-50h] BYREF
  __int64 v28; // [rsp+118h] [rbp-48h]
  __int64 v29; // [rsp+120h] [rbp-40h]
  __int64 v30; // [rsp+128h] [rbp-38h]
  __int64 *v31; // [rsp+130h] [rbp-30h]

  v30 = a2; /*0x1006fc0c7*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006fc0dd*/
  v31 = v3; /*0x1006fc0e2*/
  if ( !v3 ) /*0x1006fc0ed*/
  {
    v22[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006fc346*/
    v22[1] = 76; /*0x1006fc34d*/
    v21[0] = v22; /*0x1006fc35f*/
    v21[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006fc36d*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006fc389*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v21,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = *v3; /*0x1006fc0f3*/
  if ( !*v3 ) /*0x1006fc0f3*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v31); /*0x1006fc39c*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006fc0ff*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006fc10e*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006fc3a9*/
    LOBYTE(v8) = v8 ^ 1; /*0x1006fc3ac*/
  }
  else
  {
    v8 = 0; /*0x1006fc11a*/
  }
  if ( !*((_BYTE *)v31 + 8) ) /*0x1006fc131*/
  {
    codexmate_lib::core::repository::Repository::update_auto_switch_config::h8b83d455cb5f769b( /*0x1006fc231*/
      (unsigned int)v21,
      (_DWORD)v31 + 16,
      0,
      v6,
      0,
      v7,
      *(_DWORD *)(v30 + 152));
    if ( v21[0] == 0x8000000000000000LL ) /*0x1006fc241*/
    {
      qmemcpy(v22, &v21[1], sizeof(v22)); /*0x1006fc25d*/
      v27 = 0; /*0x1006fc260*/
      v28 = 1; /*0x1006fc268*/
      v29 = 0; /*0x1006fc270*/
      v23[2] = 1610612768; /*0x1006fc278*/
      v23[0] = &v27; /*0x1006fc284*/
      v23[1] = &off_101969DD0; /*0x1006fc28f*/
      v15 = v23; /*0x1006fc293*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fc29a*/
                              v22,
                              v23) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v24, &unk_101969E38, &off_101969E00); /*0x1006fc412*/
      v24 = v27; /*0x1006fc2af*/
      v25 = v28; /*0x1006fc2b3*/
      v26 = v29; /*0x1006fc2bb*/
      v16 = &v21[1]; /*0x1006fc2bf*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v21[1]); /*0x1006fc2c6*/
      a1[3] = v26; /*0x1006fc2cf*/
      v17 = v24; /*0x1006fc2d4*/
      a1[2] = v25; /*0x1006fc2dc*/
      a1[1] = v17; /*0x1006fc2e1*/
      *a1 = 0x8000000000000000LL; /*0x1006fc2e6*/
      v18 = v31; /*0x1006fc2ed*/
      if ( (_BYTE)v8 ) /*0x1006fc2f1*/
        goto LABEL_17; /*0x1006fc2f1*/
    }
    else
    {
      qmemcpy(a1, v21, 0x78u); /*0x1006fc304*/
      v15 = v22; /*0x1006fc304*/
      v16 = a1 + 15; /*0x1006fc304*/
      v18 = v31; /*0x1006fc30a*/
      if ( (_BYTE)v8 ) /*0x1006fc30e*/
      {
LABEL_17:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v18); /*0x1006fc31c*/
        return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v30); /*0x1006fc31f*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006fc316*/
    {
      v20 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, v15, v14, v18); /*0x1006fc419*/
      v18 = v31; /*0x1006fc420*/
      if ( !v20 ) /*0x1006fc424*/
        *((_BYTE *)v31 + 8) = 1; /*0x1006fc42a*/
    }
    goto LABEL_17; /*0x1006fc42e*/
  }
  v22[0] = 0; /*0x1006fc137*/
  v22[1] = 1; /*0x1006fc142*/
  v22[2] = 0; /*0x1006fc14d*/
  v21[2] = 1610612768; /*0x1006fc158*/
  v21[0] = v22; /*0x1006fc16a*/
  v21[1] = &off_101969DD0; /*0x1006fc178*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v21) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v24, &unk_101969E38, &off_101969E00); /*0x1006fc3d3*/
  v9 = v22[0]; /*0x1006fc1a2*/
  v10 = v22[1]; /*0x1006fc1a9*/
  v11 = v8; /*0x1006fc1b0*/
  v12 = v22[2]; /*0x1006fc1b3*/
  LODWORD(v23[0]) = *(_DWORD *)((char *)&v22[2] + 1); /*0x1006fc1c1*/
  *(_DWORD *)((char *)v23 + 3) = HIDWORD(v22[2]); /*0x1006fc1ca*/
  if ( !(_BYTE)v11
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v11) )
  {
    *((_BYTE *)v31 + 8) = 1; /*0x1006fc3eb*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v31); /*0x1006fc1e4*/
  v13 = v23[0]; /*0x1006fc1e9*/
  *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v23 + 3); /*0x1006fc1ef*/
  *(_DWORD *)((char *)a1 + 25) = v13; /*0x1006fc1f4*/
  a1[1] = v9; /*0x1006fc1f9*/
  a1[2] = v10; /*0x1006fc1fe*/
  *((_BYTE *)a1 + 24) = v12; /*0x1006fc203*/
  *a1 = 0x8000000000000000LL; /*0x1006fc20b*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v30); /*0x1006fc32d*/
}