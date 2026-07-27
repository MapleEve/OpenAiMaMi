// __ZN13codexmate_lib8commands8accounts51refresh_local_runtime_snapshot_after_mutation_async28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100701570
// 1.2.3 NEW-delta | codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation_async::_$u7b$$u7b$closure$u7d$$u7d$ | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation_async::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbb66373ad6f92e71(
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
  _BYTE *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v19; // [rsp+0h] [rbp-810h] BYREF
  _BYTE v20[888]; // [rsp+8h] [rbp-808h] BYREF
  _QWORD v21[112]; // [rsp+380h] [rbp-490h] BYREF
  _DWORD v22[24]; // [rsp+700h] [rbp-110h] BYREF
  _QWORD v23[3]; // [rsp+760h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+778h] [rbp-98h]
  __int64 v25; // [rsp+780h] [rbp-90h]
  __int64 v26; // [rsp+788h] [rbp-88h]
  __int64 v27; // [rsp+790h] [rbp-80h]
  __int64 v28; // [rsp+798h] [rbp-78h]
  __int64 v29; // [rsp+7A0h] [rbp-70h]
  __int64 v30; // [rsp+7A8h] [rbp-68h] BYREF
  __int64 v31; // [rsp+7B0h] [rbp-60h]
  __int64 v32; // [rsp+7B8h] [rbp-58h]
  __int64 v33; // [rsp+7C0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+7C8h] [rbp-48h]
  __int64 v35; // [rsp+7D0h] [rbp-40h]
  __int64 v36; // [rsp+7D8h] [rbp-38h]
  unsigned int v37; // [rsp+7E4h] [rbp-2Ch]

  v36 = a2; /*0x100701587*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x10070159d*/
  v4 = v3; /*0x1007015a2*/
  if ( !v3 ) /*0x1007015a8*/
  {
    v21[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1007016dd*/
    v21[1] = 76; /*0x1007016e4*/
    v19 = v21; /*0x1007016f6*/
    *(_QWORD *)v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100701704*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100701720*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v19,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = *v3; /*0x1007015ae*/
  if ( !*v3 ) /*0x1007015ae*/
    v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3); /*0x100701732*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1007015ba*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1007015c9*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7); /*0x10070173f*/
    LOBYTE(v8) = v8 ^ 1; /*0x100701741*/
    if ( *((_BYTE *)v4 + 8) ) /*0x10070174e*/
      goto LABEL_6; /*0x100701755*/
LABEL_12:
    v37 = v8; /*0x10070175b*/
    codexmate_lib::core::repository::Repository::load_snapshot_local::h7b714ce076bcba03(&v19); /*0x10070176f*/
    if ( v19 == (_QWORD *)3 ) /*0x100701786*/
    {
      qmemcpy(v22, v20, sizeof(v22)); /*0x10070179e*/
      v33 = 0; /*0x1007017a1*/
      v34 = 1; /*0x1007017a9*/
      v35 = 0; /*0x1007017b1*/
      v23[2] = 1610612768; /*0x1007017b9*/
      v23[0] = &v33; /*0x1007017c8*/
      v23[1] = &off_101969DD0; /*0x1007017d6*/
      v14 = v23; /*0x1007017dd*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007017e7*/
                              v22,
                              v23) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v30, &unk_101969E38, &off_101969E00); /*0x1007019aa*/
      v30 = v33; /*0x1007017fc*/
      v31 = v34; /*0x100701800*/
      v32 = v35; /*0x100701808*/
      v15 = v20; /*0x10070180c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v20); /*0x10070180f*/
      v16 = v30; /*0x100701818*/
      v17 = v31; /*0x10070181c*/
      v24 = v30; /*0x100701820*/
      v25 = v31; /*0x100701827*/
      v26 = v32; /*0x10070182e*/
      *((_QWORD *)__dst + 3) = v32; /*0x100701835*/
      *((_QWORD *)__dst + 2) = v17; /*0x10070183a*/
      *((_QWORD *)__dst + 1) = v16; /*0x10070183f*/
      *(_QWORD *)__dst = 3; /*0x100701844*/
      if ( (_BYTE)v37 /*0x10070186d*/
        || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      {
        goto LABEL_19; /*0x10070186d*/
      }
    }
    else
    {
      v29 = *(_QWORD *)&v20[16]; /*0x100701881*/
      v28 = *(_QWORD *)&v20[8]; /*0x10070188c*/
      v27 = *(_QWORD *)v20; /*0x100701890*/
      memcpy(&v21[4], &v20[24], 0x360u); /*0x1007018a7*/
      v24 = *(_QWORD *)v20; /*0x1007018b4*/
      v21[1] = *(_QWORD *)v20; /*0x1007018bf*/
      v21[2] = *(_QWORD *)&v20[8]; /*0x1007018c6*/
      v21[3] = *(_QWORD *)&v20[16]; /*0x1007018cd*/
      v21[0] = v19; /*0x1007018d4*/
      codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort::h70c2e4619a79948f( /*0x1007018f1*/
        (__int64)(v4 + 2),
        (__int64)v21,
        (__int64)&unk_10167215C,
        22);
      v14 = v21; /*0x1007018f6*/
      v15 = __dst; /*0x100701902*/
      memcpy(__dst, v21, 0x380u); /*0x100701905*/
      if ( (_BYTE)v37 /*0x100701927*/
        || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      {
LABEL_19:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10070192d*/
        return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v36); /*0x100701930*/
      }
    }
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1007019b1*/
                             v15,
                             v14,
                             v17,
                             0x7FFFFFFFFFFFFFFFLL) )
      *((_BYTE *)v4 + 8) = 1; /*0x1007019be*/
    goto LABEL_19; /*0x1007019c3*/
  }
  v8 = 0; /*0x1007015d5*/
  if ( !*((_BYTE *)v4 + 8) ) /*0x1007015e8*/
    goto LABEL_12; /*0x1007015e8*/
LABEL_6:
  v21[0] = 0; /*0x1007015ee*/
  v21[1] = 1; /*0x1007015f9*/
  v21[2] = 0; /*0x100701604*/
  *(_QWORD *)&v20[8] = 1610612768; /*0x10070160f*/
  v19 = v21; /*0x100701621*/
  *(_QWORD *)v20 = &off_101969DD0; /*0x10070162f*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          &v19) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, &v30, &unk_101969E38, &off_101969E00); /*0x10070196e*/
  v9 = v8; /*0x10070165c*/
  v10 = v21[0]; /*0x10070165e*/
  v11 = v21[1]; /*0x100701665*/
  v12 = v21[2]; /*0x10070166c*/
  v22[0] = *(_DWORD *)((char *)&v21[2] + 1); /*0x10070167a*/
  *(_DWORD *)((char *)v22 + 3) = HIDWORD(v21[2]); /*0x100701686*/
  if ( !(_BYTE)v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v9) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x100701982*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x10070169f*/
  v13 = v22[0]; /*0x1007016a4*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v22 + 3); /*0x1007016b0*/
  *(_DWORD *)(__dst + 25) = v13; /*0x1007016b5*/
  *((_QWORD *)__dst + 1) = v10; /*0x1007016ba*/
  *((_QWORD *)__dst + 2) = v11; /*0x1007016bf*/
  __dst[24] = v12; /*0x1007016c4*/
  *(_QWORD *)__dst = 3; /*0x1007016c9*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v36); /*0x10070193e*/
}