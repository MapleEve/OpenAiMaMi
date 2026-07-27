// __ZN13codexmate_lib8commands8accounts21verify_account_switch @ 0x100698ef0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r13
  char v16; // cl
  char v17; // r14
  __int64 result; // rax
  int v19; // ecx
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD v23[12]; // [rsp+8h] [rbp-138h] BYREF
  _QWORD v24[3]; // [rsp+68h] [rbp-D8h] BYREF
  _QWORD v25[12]; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-58h]
  __int64 v28; // [rsp+F0h] [rbp-50h]
  __int64 v29; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+100h] [rbp-40h]
  __int64 v31; // [rsp+108h] [rbp-38h]
  _DWORD v32[12]; // [rsp+110h] [rbp-30h]

  v7 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(a2 + 4872) + 16LL); /*0x100698f18*/
  if ( !v7 ) /*0x100698f20*/
  {
    v25[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x100699040*/
    v25[1] = 76; /*0x100699047*/
    v23[0] = v25; /*0x100699059*/
    v23[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100699067*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100699083*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      v23,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v8 = v7; /*0x100698f26*/
  v9 = *v7; /*0x100698f29*/
  if ( !*v7 ) /*0x100698f29*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v7); /*0x100699090*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x100698f35*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100698f44*/
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, a2, v10, v11) ^ 1; /*0x1006990a0*/
    if ( *((_BYTE *)v8 + 8) ) /*0x1006990a4*/
      goto LABEL_6; /*0x1006990aa*/
LABEL_12:
    v20 = v8 + 2; /*0x1006990b0*/
    codexmate_lib::core::repository::Repository::verify_account_switch::h6238cc2dcd870b36(v25, v8 + 2, a3, a4); /*0x1006990c4*/
    if ( LODWORD(v25[0]) == 11 ) /*0x1006990d0*/
    {
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006990e0*/
      if ( v12 ) /*0x1006990e6*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v8); /*0x1006991cf*/
    }
    else
    {
      qmemcpy(v23, v25, sizeof(v23)); /*0x100699107*/
      v29 = 0; /*0x10069910a*/
      v30 = 1; /*0x100699112*/
      v31 = 0; /*0x10069911a*/
      v24[2] = 1610612768; /*0x100699122*/
      v24[0] = &v29; /*0x100699131*/
      v24[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069913f*/
      v20 = v24; /*0x100699146*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100699150*/
                              v23,
                              v24) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100699229*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v26,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v26 = v29; /*0x100699165*/
      v27 = v30; /*0x100699169*/
      v28 = v31; /*0x100699171*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v25); /*0x10069917c*/
      *(_QWORD *)(a1 + 16) = v28; /*0x100699185*/
      v22 = v26; /*0x100699189*/
      *(_QWORD *)(a1 + 8) = v27; /*0x100699191*/
      *(_QWORD *)a1 = v22; /*0x100699195*/
      if ( v12 ) /*0x1006991a5*/
        return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v8); /*0x1006991a5*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100699230*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v25,
                             v20,
                             v21,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v8 + 8) = 1; /*0x10069923d*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v8); /*0x100699241*/
  }
  v12 = 0; /*0x100698f50*/
  if ( !*((_BYTE *)v8 + 8) ) /*0x100698f59*/
    goto LABEL_12; /*0x100698f59*/
LABEL_6:
  v25[0] = 0; /*0x100698f5f*/
  v25[1] = 1; /*0x100698f6a*/
  v25[2] = 0; /*0x100698f75*/
  v23[2] = 1610612768; /*0x100698f80*/
  v23[0] = v25; /*0x100698f92*/
  v23[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100698fa0*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v23) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006991ee*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v26,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v14 = v25[0]; /*0x100698fc7*/
  v15 = v25[1]; /*0x100698fce*/
  v16 = v12; /*0x100698fd5*/
  v17 = v25[2]; /*0x100698fd8*/
  v32[0] = *(_DWORD *)((char *)&v25[2] + 1); /*0x100698fe6*/
  *(_DWORD *)((char *)v32 + 3) = HIDWORD(v25[2]); /*0x100698fef*/
  if ( !v16
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v13,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v8 + 8) = 1; /*0x100699202*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v8); /*0x100699016*/
  *(_QWORD *)a1 = v14; /*0x10069901b*/
  *(_QWORD *)(a1 + 8) = v15; /*0x10069901e*/
  *(_BYTE *)(a1 + 16) = v17; /*0x100699022*/
  result = v32[0]; /*0x100699026*/
  v19 = *(_DWORD *)((char *)v32 + 3); /*0x100699029*/
  *(_DWORD *)(a1 + 17) = v32[0]; /*0x10069902c*/
  *(_DWORD *)(a1 + 20) = v19; /*0x100699030*/
  return result; /*0x1006991be*/
}