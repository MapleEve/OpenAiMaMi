// __ZN13codexmate_lib8commands13account_oauth15run_oauth_login28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006faa10 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::account_oauth::run_oauth_login::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4e939a545888286f(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rbx
  char v11; // r14
  int v12; // eax
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  _QWORD *v17; // rsi
  __int64 *v18; // rcx
  __int64 v19; // rax
  char v21; // al
  _QWORD v22[12]; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v23[12]; // [rsp+60h] [rbp-E0h] BYREF
  _QWORD v24[3]; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h]
  __int64 v27; // [rsp+E8h] [rbp-58h]
  __int64 v28; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-48h]
  __int64 v30; // [rsp+100h] [rbp-40h]
  __int64 v31; // [rsp+108h] [rbp-38h]
  __int64 *v32; // [rsp+110h] [rbp-30h]

  v31 = a2; /*0x1006faa27*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006faa3d*/
  v32 = v3; /*0x1006faa42*/
  if ( !v3 ) /*0x1006faa4d*/
  {
    v23[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006facbc*/
    v23[1] = 76; /*0x1006facc3*/
    v22[0] = v23; /*0x1006facd5*/
    v22[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006face3*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006facff*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v22,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = *v3; /*0x1006faa53*/
  if ( !*v3 ) /*0x1006faa53*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v32); /*0x1006fad12*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006faa5f*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006faa6e*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006fad1f*/
    LOBYTE(v7) = v7 ^ 1; /*0x1006fad21*/
  }
  else
  {
    v7 = 0; /*0x1006faa7a*/
  }
  if ( !*((_BYTE *)v32 + 8) ) /*0x1006faa90*/
  {
    v14 = v31 + 152; /*0x1006fab8d*/
    codexmate_lib::core::account_io::persist_account_auth::h0fa88115997f54f4(v23, v32 + 2, v31 + 152); /*0x1006fab9e*/
    if ( LODWORD(v23[0]) == 11 ) /*0x1006fabaa*/
    {
      qmemcpy(a1, &v23[1], 0x50u); /*0x1006fabbb*/
      v17 = &v23[11]; /*0x1006fabbb*/
      v16 = a1 + 10; /*0x1006fabbb*/
      v18 = v32; /*0x1006fabc0*/
      if ( (_BYTE)v7 ) /*0x1006fabc4*/
      {
LABEL_17:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v18); /*0x1006fac8a*/
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v31); /*0x1006fac96*/
        return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v14); /*0x1006fac96*/
      }
    }
    else
    {
      qmemcpy(v22, v23, sizeof(v22)); /*0x1006fabe5*/
      v28 = 0; /*0x1006fabe8*/
      v29 = 1; /*0x1006fabf0*/
      v30 = 0; /*0x1006fabf8*/
      v24[2] = 1610612768; /*0x1006fac00*/
      v24[0] = &v28; /*0x1006fac0c*/
      v24[1] = &off_101969DD0; /*0x1006fac17*/
      v17 = v24; /*0x1006fac1b*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fac22*/
                              v22,
                              v24) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v25, &unk_101969E38, &off_101969E00); /*0x1006fad86*/
      v25 = v28; /*0x1006fac37*/
      v26 = v29; /*0x1006fac3b*/
      v27 = v30; /*0x1006fac43*/
      v16 = v23; /*0x1006fac47*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v23); /*0x1006fac4e*/
      a1[3] = v27; /*0x1006fac57*/
      v19 = v25; /*0x1006fac5c*/
      a1[2] = v26; /*0x1006fac64*/
      a1[1] = v19; /*0x1006fac69*/
      *a1 = 0x8000000000000000LL; /*0x1006fac72*/
      v18 = v32; /*0x1006fac78*/
      if ( (_BYTE)v7 ) /*0x1006fac7c*/
        goto LABEL_17; /*0x1006fac7c*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006fac84*/
    {
      v21 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, v17, v15, v18); /*0x1006fad8d*/
      v18 = v32; /*0x1006fad94*/
      if ( !v21 ) /*0x1006fad98*/
        *((_BYTE *)v32 + 8) = 1; /*0x1006fad9e*/
    }
    goto LABEL_17; /*0x1006fada2*/
  }
  v23[0] = 0; /*0x1006faa96*/
  v23[1] = 1; /*0x1006faaa1*/
  v23[2] = 0; /*0x1006faaac*/
  v22[2] = 1610612768; /*0x1006faab7*/
  v22[0] = v23; /*0x1006faac9*/
  v22[1] = &off_101969DD0; /*0x1006faad7*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v22) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v25, &unk_101969E38, &off_101969E00); /*0x1006fad47*/
  v8 = v23[0]; /*0x1006fab01*/
  v9 = v7; /*0x1006fab08*/
  v10 = v23[1]; /*0x1006fab0a*/
  v11 = v23[2]; /*0x1006fab11*/
  LODWORD(v24[0]) = *(_DWORD *)((char *)&v23[2] + 1); /*0x1006fab1f*/
  *(_DWORD *)((char *)v24 + 3) = HIDWORD(v23[2]); /*0x1006fab28*/
  if ( !(_BYTE)v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v9) )
  {
    *((_BYTE *)v32 + 8) = 1; /*0x1006fad5f*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v32); /*0x1006fab42*/
  v12 = v24[0]; /*0x1006fab47*/
  *((_DWORD *)a1 + 7) = *(_DWORD *)((char *)v24 + 3); /*0x1006fab4d*/
  *(_DWORD *)((char *)a1 + 25) = v12; /*0x1006fab52*/
  a1[1] = v8; /*0x1006fab57*/
  a1[2] = v10; /*0x1006fab5c*/
  *((_BYTE *)a1 + 24) = v11; /*0x1006fab61*/
  *a1 = 0x8000000000000000LL; /*0x1006fab69*/
  v13 = v31; /*0x1006fab6d*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v31); /*0x1006fab74*/
  v14 = v13 + 152; /*0x1006fab79*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v14); /*0x1006faca3*/
}