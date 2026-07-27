// __ZN13codexmate_lib8commands8accounts6logout28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100701a70 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::logout::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h5b7b326dc41129ba(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // bl
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r13
  char v15; // cl
  char v16; // bl
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // r14
  char v24; // r15
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  _QWORD v31[12]; // [rsp+8h] [rbp-148h] BYREF
  _QWORD v32[12]; // [rsp+68h] [rbp-E8h] BYREF
  __int64 *v33; // [rsp+C8h] [rbp-88h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+D0h] [rbp-80h]
  __int64 v35; // [rsp+D8h] [rbp-78h]
  __int64 v36; // [rsp+E0h] [rbp-70h]
  __int64 v37; // [rsp+E8h] [rbp-68h]
  __int64 v38; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-58h]
  __int64 v40; // [rsp+100h] [rbp-50h]
  __int64 v41; // [rsp+108h] [rbp-48h] BYREF
  __int64 v42; // [rsp+110h] [rbp-40h]
  __int64 v43; // [rsp+118h] [rbp-38h]
  char v44; // [rsp+127h] [rbp-29h]

  v36 = a2; /*0x100701a87*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h18d7865deb554c60(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x100701a9d*/
  if ( !v3 ) /*0x100701aa5*/
  {
    v32[0] = &anon_0df76e0cec988e6dc281ac0519b88803_743; /*0x100701d3b*/
    v32[1] = 61; /*0x100701d42*/
    v31[0] = v32; /*0x100701d4d*/
    v31[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100701d5b*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100701d77*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v31,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v4 = v3; /*0x100701ac1*/
  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x100701ac4*/
    (__int64)v32,
    v3,
    (__int64)&unk_101672172,
    36);
  if ( LODWORD(v32[0]) == 11 )
  {
    v37 = v32[1]; /*0x100701add*/
    v44 = v32[2]; /*0x100701ae8*/
    v5 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(v36 + 136) + 4872LL) + 16LL); /*0x100701b01*/
    v6 = v5; /*0x100701b06*/
    if ( !v5 ) /*0x100701b0c*/
    {
      v32[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x100701d88*/
      v32[1] = 76; /*0x100701d8f*/
      v31[0] = v32; /*0x100701d9a*/
      v31[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100701da8*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100701dc4*/
        &anon_0df76e0cec988e6dc281ac0519b88803_1033,
        v31,
        &anon_0df76e0cec988e6dc281ac0519b88803_1034);
    }
    v7 = *v5; /*0x100701b12*/
    if ( !*v5 ) /*0x100701b12*/
      v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v5); /*0x100701dfe*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x100701b1e*/
    if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
    {
      v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, v4, v8, v9) ^ 1; /*0x100701e0d*/
      if ( *((_BYTE *)v6 + 8) )
      {
LABEL_8:
        v32[0] = 0; /*0x100701b52*/
        v32[1] = 1; /*0x100701b5d*/
        v32[2] = 0; /*0x100701b68*/
        v31[2] = 1610612768; /*0x100701b73*/
        v31[0] = v32; /*0x100701b7e*/
        v31[1] = &off_101969DD0; /*0x100701b8c*/
        v11 = 41; /*0x100701ba1*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                v31) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v38, &unk_101969E38, &off_101969E00); /*0x100701f8c*/
        v13 = v32[0]; /*0x100701bb3*/
        v14 = v32[1]; /*0x100701bba*/
        v15 = v10; /*0x100701bc1*/
        v16 = v32[2]; /*0x100701bc3*/
        LODWORD(v33) = *(_DWORD *)((char *)&v32[2] + 1); /*0x100701bd0*/
        *(_DWORD *)((char *)&v33 + 3) = HIDWORD(v32[2]); /*0x100701bdc*/
        if ( !v15
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v12,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *((_BYTE *)v6 + 8) = 1; /*0x100701fa0*/
        }
        v17 = *v6; /*0x100701c03*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100701c06*/
        v19 = (int)v33; /*0x100701c0b*/
        *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v33 + 3); /*0x100701c17*/
        *(_DWORD *)(a1 + 25) = v19; /*0x100701c1c*/
        *(_QWORD *)(a1 + 8) = v13; /*0x100701c21*/
        *(_QWORD *)(a1 + 16) = v14; /*0x100701c26*/
        *(_BYTE *)(a1 + 24) = v16; /*0x100701c2b*/
        v20 = 0x7FFFFFFFFFFFFFFFLL; /*0x100701c30*/
        *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100701c3e*/
        v21 = v37; /*0x100701c46*/
        if ( v44 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100701c5d*/
          goto LABEL_28; /*0x100701c5d*/
        goto LABEL_36; /*0x100701c5d*/
      }
    }
    else
    {
      v10 = 0; /*0x100701b39*/
      if ( *((_BYTE *)v6 + 8) ) /*0x100701b45*/
        goto LABEL_8; /*0x100701b4c*/
    }
    codexmate_lib::core::repository::Repository::logout::h936f363dfc414d2b(v32, v6 + 2); /*0x100701e35*/
    if ( LODWORD(v32[0]) == 11 ) /*0x100701e41*/
    {
      qmemcpy((void *)a1, &v32[1], 0x50u); /*0x100701e52*/
      v11 = (__int64)&v32[11]; /*0x100701e52*/
      v28 = (_QWORD *)(a1 + 80); /*0x100701e52*/
      v27 = 0; /*0x100701e52*/
      if ( v10 ) /*0x100701e57*/
        goto LABEL_26; /*0x100701e57*/
    }
    else
    {
      qmemcpy(v31, v32, sizeof(v31)); /*0x100701e78*/
      v41 = 0; /*0x100701e7b*/
      v42 = 1; /*0x100701e83*/
      v43 = 0; /*0x100701e8b*/
      v35 = 1610612768; /*0x100701e93*/
      v33 = &v41; /*0x100701e9f*/
      v34 = &off_101969DD0; /*0x100701ead*/
      v11 = (__int64)&v33; /*0x100701eb1*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100701ebb*/
                              v31,
                              &v33) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v38, &unk_101969E38, &off_101969E00); /*0x100701fc8*/
      v38 = v41; /*0x100701ed0*/
      v39 = v42; /*0x100701ed4*/
      v40 = v43; /*0x100701edc*/
      v28 = v32; /*0x100701ee0*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v32); /*0x100701ee7*/
      *(_QWORD *)(a1 + 24) = v40; /*0x100701ef0*/
      v29 = v38; /*0x100701ef5*/
      v27 = v39; /*0x100701ef9*/
      *(_QWORD *)(a1 + 16) = v39; /*0x100701efd*/
      *(_QWORD *)(a1 + 8) = v29; /*0x100701f02*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100701f0b*/
      if ( v10 ) /*0x100701f11*/
      {
LABEL_26:
        v17 = *v6; /*0x100701f26*/
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100701f29*/
        v21 = v37; /*0x100701f32*/
        if ( v44 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100701f45*/
        {
LABEL_28:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v21); /*0x100701f4b*/
          return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v36); /*0x100701f4e*/
        }
LABEL_36:
        if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v17, v11, v18, v20) ) /*0x100701fe6*/
          *(_BYTE *)(v21 + 8) = 1; /*0x100701ff3*/
        goto LABEL_28; /*0x100701ff7*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100701fcf*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v28, v11, v26, v27) )
    {
      *((_BYTE *)v6 + 8) = 1; /*0x100701fdc*/
    }
    goto LABEL_26; /*0x100701fe1*/
  }
  qmemcpy(v31, v32, sizeof(v31)); /*0x100701c83*/
  v41 = 0; /*0x100701c86*/
  v42 = 1; /*0x100701c8e*/
  v43 = 0; /*0x100701c96*/
  v35 = 1610612768; /*0x100701c9e*/
  v33 = &v41; /*0x100701caa*/
  v34 = &off_101969DD0; /*0x100701cb8*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100701cc6*/
                          v31,
                          &v33) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v38, &unk_101969E38, &off_101969E00); /*0x100701dec*/
  v22 = v41; /*0x100701cd3*/
  v23 = v42; /*0x100701cd7*/
  v24 = v43; /*0x100701cdb*/
  LODWORD(v38) = *(_DWORD *)((char *)&v43 + 1); /*0x100701ce3*/
  *(_DWORD *)((char *)&v38 + 3) = HIDWORD(v43); /*0x100701ce9*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v32); /*0x100701cf3*/
  v25 = v38; /*0x100701cf8*/
  *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v38 + 3); /*0x100701cfe*/
  *(_DWORD *)(a1 + 25) = v25; /*0x100701d03*/
  *(_QWORD *)(a1 + 8) = v22; /*0x100701d08*/
  *(_QWORD *)(a1 + 16) = v23; /*0x100701d0d*/
  *(_BYTE *)(a1 + 24) = v24; /*0x100701d12*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100701d24*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v36); /*0x100701f5c*/
}