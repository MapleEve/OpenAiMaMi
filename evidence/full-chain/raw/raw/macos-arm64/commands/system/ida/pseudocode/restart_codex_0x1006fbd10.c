// __ZN13codexmate_lib8commands6system13restart_codex28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006fbd10 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::restart_codex::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h8dc9f00da56b2de1(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  char v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 **v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r12
  char v13; // r13
  int v14; // eax
  __int64 v15; // rax
  _QWORD v17[12]; // [rsp+0h] [rbp-130h] BYREF
  _QWORD v18[12]; // [rsp+60h] [rbp-D0h] BYREF
  __int64 *v19; // [rsp+C0h] [rbp-70h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+C8h] [rbp-68h]
  __int64 v21; // [rsp+D0h] [rbp-60h]
  __int64 v22; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h]
  __int64 v24; // [rsp+E8h] [rbp-48h]
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h]
  __int64 v27; // [rsp+100h] [rbp-30h]

  v4 = tauri::state::StateManager::try_get::h18d7865deb554c60(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006fbd3c*/
  if ( !v4 ) /*0x1006fbd44*/
  {
    v18[0] = &anon_0df76e0cec988e6dc281ac0519b88803_743; /*0x1006fbf82*/
    v18[1] = 61; /*0x1006fbf89*/
    v17[0] = v18; /*0x1006fbf94*/
    v17[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006fbfa2*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006fbfbe*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v17,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba(v18, v4, &unk_101672117, 34); /*0x1006fbd60*/
  if ( LODWORD(v18[0]) == 11 ) /*0x1006fbd6c*/
  {
    v5 = v18[1]; /*0x1006fbd6e*/
    v6 = v18[2]; /*0x1006fbd75*/
    v7 = 5; /*0x1006fbd84*/
    codexmate_lib::platform::process::CodexProcessLifecycle::prepare_transition::h285780eb18c8b906(v17, 5, 0, 0); /*0x1006fbd8d*/
    if ( LODWORD(v17[0]) == 11 ) /*0x1006fbd99*/
    {
      v9 = (__int64 **)v18; /*0x1006fbd9f*/
      codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(v18); /*0x1006fbda6*/
      if ( LODWORD(v18[0]) == 11 ) /*0x1006fbdb2*/
        goto LABEL_5; /*0x1006fbdb2*/
    }
    else
    {
      qmemcpy(v18, v17, sizeof(v18)); /*0x1006fbe8c*/
      v7 = (__int64)v18; /*0x1006fbe8c*/
      v9 = &v19; /*0x1006fbe8c*/
      v10 = 0; /*0x1006fbe8c*/
      if ( LODWORD(v18[0]) == 11 ) /*0x1006fbe96*/
      {
LABEL_5:
        *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006fbdb8*/
        if ( v6 ) /*0x1006fbdcb*/
        {
LABEL_13:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v5); /*0x1006fbf52*/
          return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fbf55*/
        }
LABEL_12:
        if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 /*0x1006fc00f*/
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, v7, v8, v10) )
        {
          *(_BYTE *)(v5 + 8) = 1; /*0x1006fc01c*/
        }
        goto LABEL_13; /*0x1006fc021*/
      }
    }
    qmemcpy(v17, v18, sizeof(v17)); /*0x1006fbeb2*/
    v25 = 0; /*0x1006fbeb5*/
    v26 = 1; /*0x1006fbebd*/
    v27 = 0; /*0x1006fbec5*/
    v21 = 1610612768; /*0x1006fbecd*/
    v19 = &v25; /*0x1006fbed9*/
    v20 = &off_101969DD0; /*0x1006fbee4*/
    v7 = (__int64)&v19; /*0x1006fbee8*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fbeef*/
                            v17,
                            &v19) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v22, &unk_101969E38, &off_101969E00); /*0x1006fc008*/
    v22 = v25; /*0x1006fbf04*/
    v23 = v26; /*0x1006fbf08*/
    v24 = v27; /*0x1006fbf10*/
    v9 = (__int64 **)v18; /*0x1006fbf14*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v18); /*0x1006fbf1b*/
    *(_QWORD *)(a1 + 16) = v24; /*0x1006fbf24*/
    v15 = v22; /*0x1006fbf28*/
    v10 = v23; /*0x1006fbf2c*/
    *(_QWORD *)(a1 + 8) = v23; /*0x1006fbf30*/
    *(_QWORD *)a1 = v15; /*0x1006fbf34*/
    if ( v6 ) /*0x1006fbf3a*/
      goto LABEL_13; /*0x1006fbf3a*/
    goto LABEL_12; /*0x1006fbf3a*/
  }
  qmemcpy(v17, v18, sizeof(v17)); /*0x1006fbdec*/
  v25 = 0; /*0x1006fbdef*/
  v26 = 1; /*0x1006fbdf7*/
  v27 = 0; /*0x1006fbdff*/
  v21 = 1610612768; /*0x1006fbe07*/
  v19 = &v25; /*0x1006fbe13*/
  v20 = &off_101969DD0; /*0x1006fbe1e*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006fbe29*/
                          v17,
                          &v19) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v22, &unk_101969E38, &off_101969E00); /*0x1006fbfe3*/
  v11 = v25; /*0x1006fbe36*/
  v12 = v26; /*0x1006fbe3a*/
  v13 = v27; /*0x1006fbe3e*/
  LODWORD(v22) = *(_DWORD *)((char *)&v27 + 1); /*0x1006fbe46*/
  *(_DWORD *)((char *)&v22 + 3) = HIDWORD(v27); /*0x1006fbe4c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v18); /*0x1006fbe56*/
  v14 = v22; /*0x1006fbe5b*/
  *(_DWORD *)(a1 + 20) = *(_DWORD *)((char *)&v22 + 3); /*0x1006fbe61*/
  *(_DWORD *)(a1 + 17) = v14; /*0x1006fbe65*/
  *(_QWORD *)a1 = v11; /*0x1006fbe69*/
  *(_QWORD *)(a1 + 8) = v12; /*0x1006fbe6c*/
  *(_BYTE *)(a1 + 16) = v13; /*0x1006fbe70*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x1006fbf62*/
}