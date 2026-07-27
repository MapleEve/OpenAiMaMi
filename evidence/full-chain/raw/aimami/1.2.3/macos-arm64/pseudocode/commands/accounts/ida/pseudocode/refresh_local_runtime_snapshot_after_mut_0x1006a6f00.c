// __ZN13codexmate_lib8commands8accounts45refresh_local_runtime_snapshot_after_mutation @ 0x1006a6f00
__int64 __fastcall codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation::hcf84ef475d51a3e9(
        char *__dst,
        __int64 a2,
        __m128 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r12
  char v13; // cl
  char v14; // r13
  __int64 result; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // [rsp+0h] [rbp-810h] BYREF
  _BYTE v22[888]; // [rsp+8h] [rbp-808h] BYREF
  _BYTE v23[96]; // [rsp+380h] [rbp-490h] BYREF
  _QWORD v24[112]; // [rsp+3E0h] [rbp-430h] BYREF
  _QWORD v25[3]; // [rsp+760h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+778h] [rbp-98h]
  __int64 v27; // [rsp+780h] [rbp-90h]
  __int64 v28; // [rsp+788h] [rbp-88h]
  __int64 v29; // [rsp+790h] [rbp-80h]
  __int64 v30; // [rsp+798h] [rbp-78h]
  __int64 v31; // [rsp+7A0h] [rbp-70h]
  __int64 v32; // [rsp+7A8h] [rbp-68h] BYREF
  __int64 v33; // [rsp+7B0h] [rbp-60h]
  __int64 v34; // [rsp+7B8h] [rbp-58h]
  __int64 v35; // [rsp+7C0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+7C8h] [rbp-48h]
  __int64 v37; // [rsp+7D0h] [rbp-40h]
  _DWORD v38[2]; // [rsp+7DCh] [rbp-34h]
  int v39; // [rsp+7E4h] [rbp-2Ch]

  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006a6f2c*/
  if ( !v4 ) /*0x1006a6f34*/
  {
    v24[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006a705c*/
    v24[1] = 76; /*0x1006a7063*/
    v21 = v24; /*0x1006a7075*/
    *(_QWORD *)v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a7083*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006a709f*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v21,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = v4; /*0x1006a6f3a*/
  v6 = *v4; /*0x1006a6f3d*/
  if ( !*v4 ) /*0x1006a6f3d*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4); /*0x1006a70ac*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1006a6f49*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x1006a70b9*/
    LOBYTE(v9) = v9 ^ 1; /*0x1006a70bc*/
    if ( *((_BYTE *)v5 + 8) ) /*0x1006a70c0*/
      goto LABEL_6; /*0x1006a70c6*/
  }
  else
  {
    v9 = 0; /*0x1006a6f64*/
    if ( *((_BYTE *)v5 + 8) )
    {
LABEL_6:
      v24[0] = 0; /*0x1006a6f73*/
      v24[1] = 1; /*0x1006a6f7e*/
      v24[2] = 0; /*0x1006a6f89*/
      *(_QWORD *)&v22[8] = 1610612768; /*0x1006a6f94*/
      v21 = v24; /*0x1006a6fa6*/
      *(_QWORD *)v22 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a6fb4*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v21) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a72f0*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v32,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v11 = v24[0]; /*0x1006a6fdb*/
      v12 = v24[1]; /*0x1006a6fe2*/
      v13 = v9; /*0x1006a6fe9*/
      v14 = v24[2]; /*0x1006a6fec*/
      v38[0] = *(_DWORD *)((char *)&v24[2] + 1); /*0x1006a6ffa*/
      *(_DWORD *)((char *)v38 + 3) = HIDWORD(v24[2]); /*0x1006a7003*/
      if ( !v13
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v10,
                               0x7FFFFFFFFFFFFFFFLL) )
      {
        *((_BYTE *)v5 + 8) = 1; /*0x1006a7304*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x1006a702a*/
      *((_QWORD *)__dst + 1) = v11; /*0x1006a702f*/
      *((_QWORD *)__dst + 2) = v12; /*0x1006a7033*/
      __dst[24] = v14; /*0x1006a7037*/
      result = v38[0]; /*0x1006a703b*/
      v16 = *(_DWORD *)((char *)v38 + 3); /*0x1006a703e*/
      *(_DWORD *)(__dst + 25) = v38[0]; /*0x1006a7041*/
      *((_DWORD *)__dst + 7) = v16; /*0x1006a7045*/
      *(_QWORD *)__dst = 3; /*0x1006a7049*/
      return result; /*0x1006a7050*/
    }
  }
  v39 = v9; /*0x1006a70cc*/
  codexmate_lib::core::repository::Repository::load_snapshot_local::h7b714ce076bcba03(&v21); /*0x1006a70e1*/
  if ( v21 == (_QWORD *)3 ) /*0x1006a70f8*/
  {
    qmemcpy(v23, v22, sizeof(v23)); /*0x1006a7110*/
    v35 = 0; /*0x1006a7113*/
    v36 = 1; /*0x1006a711b*/
    v37 = 0; /*0x1006a7123*/
    v25[2] = 1610612768; /*0x1006a712b*/
    v25[0] = &v35; /*0x1006a713a*/
    v25[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006a7148*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006a7159*/
                            v23,
                            v25) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006a732b*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v32,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v32 = v35; /*0x1006a716e*/
    v33 = v36; /*0x1006a7172*/
    v34 = v37; /*0x1006a717a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v22); /*0x1006a7181*/
    v17 = v32; /*0x1006a718a*/
    v18 = v33; /*0x1006a718e*/
    v26 = v32; /*0x1006a7192*/
    v27 = v33; /*0x1006a7199*/
    v28 = v34; /*0x1006a71a0*/
    *((_QWORD *)__dst + 3) = v34; /*0x1006a71a7*/
    *((_QWORD *)__dst + 2) = v18; /*0x1006a71ab*/
    *((_QWORD *)__dst + 1) = v17; /*0x1006a71af*/
    *(_QWORD *)__dst = 3; /*0x1006a71b3*/
    if ( !(_BYTE)v39 /*0x1006a7348*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v22,
                             v25,
                             v18,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v5 + 8) = 1; /*0x1006a7355*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x1006a71e0*/
  }
  else
  {
    v31 = *(_QWORD *)&v22[16]; /*0x1006a71ee*/
    v30 = *(_QWORD *)&v22[8]; /*0x1006a71f9*/
    v29 = *(_QWORD *)v22; /*0x1006a71fd*/
    memcpy(&v24[4], &v22[24], 0x360u); /*0x1006a7214*/
    v26 = *(_QWORD *)v22; /*0x1006a7221*/
    v24[1] = *(_QWORD *)v22; /*0x1006a722c*/
    v24[2] = *(_QWORD *)&v22[8]; /*0x1006a7233*/
    v24[3] = *(_QWORD *)&v22[16]; /*0x1006a723a*/
    v24[0] = v21; /*0x1006a7241*/
    codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort::h70c2e4619a79948f( /*0x1006a725e*/
      (__int64)(v5 + 2),
      (__int64)v24,
      (__int64)&unk_101602190,
      16);
    if ( !(_BYTE)v39 /*0x1006a7332*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v5 + 2,
                             v24,
                             v19,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v5 + 8) = 1; /*0x1006a733f*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x1006a7289*/
    codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h4b255ecc5717b597( /*0x1006a72a7*/
      a2,
      (__int64)v24,
      "mutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch",
      8u,
      nullptr,
      v20,
      a3);
    return (__int64)memcpy(__dst, v24, 0x380u); /*0x1006a72bb*/
  }
}