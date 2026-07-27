// __ZN13codexmate_lib4core5voice7runtime17set_overlay_style @ 0x100674900 | 基线 same-set
_DWORD *__fastcall codexmate_lib::core::voice::runtime::set_overlay_style::hd9f2f06c8e9120c2(
        _DWORD *__dst,
        __int64 a2,
        int a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  char v14; // r13
  int v15; // ecx
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r15
  int v29; // eax
  unsigned int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v34; // [rsp+0h] [rbp-730h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+8h] [rbp-728h]
  __int64 v36; // [rsp+10h] [rbp-720h]
  _QWORD __dsta[50]; // [rsp+2E8h] [rbp-448h] BYREF
  _QWORD __src[50]; // [rsp+478h] [rbp-2B8h] BYREF
  _QWORD v39[12]; // [rsp+608h] [rbp-128h] BYREF
  _QWORD v40[12]; // [rsp+668h] [rbp-C8h] BYREF
  _QWORD *v41; // [rsp+6C8h] [rbp-68h] BYREF
  __int64 v42; // [rsp+6D0h] [rbp-60h]
  __int64 v43; // [rsp+6D8h] [rbp-58h]
  _QWORD *v44; // [rsp+6E0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+6E8h] [rbp-48h]
  __int64 v46; // [rsp+6F0h] [rbp-40h]
  _DWORD v47[2]; // [rsp+6F8h] [rbp-38h]
  int v48; // [rsp+700h] [rbp-30h]
  char v49; // [rsp+707h] [rbp-29h]

  v48 = a3; /*0x100674914*/
  v5 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x10067492f*/
  if ( !v5 ) /*0x100674937*/
  {
    __src[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x100674a63*/
    __src[1] = 76; /*0x100674a6a*/
    v34 = __src; /*0x100674a7c*/
    v35 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100674a8a*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100674aa6*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v34,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v6 = v5; /*0x10067493d*/
  v7 = *v5; /*0x100674940*/
  if ( !*v5 ) /*0x100674940*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v5); /*0x100674ab3*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x10067494c*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v9); /*0x100674ac0*/
    LOBYTE(v10) = v10 ^ 1; /*0x100674ac3*/
    if ( *((_BYTE *)v6 + 8) ) /*0x100674ad1*/
      goto LABEL_6; /*0x100674ad9*/
LABEL_12:
    v16 = v6 + 2; /*0x100674adf*/
    _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x100674aed*/
      &v34,
      v6 + 2);
    if ( !(_BYTE)v10 /*0x100674f7e*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v34, v16, v17, v18) )
    {
      *((_BYTE *)v6 + 8) = 1; /*0x100674f8b*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100674b0e*/
    v19 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100674b16*/
    v20 = v19; /*0x100674b1b*/
    v21 = (_QWORD *)(v19 + 32); /*0x100674b21*/
    v22 = *(_QWORD *)(v19 + 32); /*0x100674b25*/
    if ( !v22 ) /*0x100674b2c*/
      v22 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v19 + 32); /*0x100674c76*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v22); /*0x100674b32*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v30 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22, v16, v23, v24); /*0x100674c7e*/
      v25 = v30; /*0x100674c83*/
      LOBYTE(v25) = v30 ^ 1; /*0x100674c85*/
      if ( *(_BYTE *)(v20 + 40) ) /*0x100674c88*/
        goto LABEL_18; /*0x100674c8f*/
    }
    else
    {
      v25 = 0; /*0x100674b4a*/
      if ( *(_BYTE *)(v20 + 40) )
      {
LABEL_18:
        v48 = v25; /*0x100674b59*/
        __dsta[0] = 0; /*0x100674b5c*/
        __dsta[1] = 1; /*0x100674b67*/
        __dsta[2] = 0; /*0x100674b72*/
        __src[2] = 1610612768; /*0x100674b7d*/
        __src[0] = __dsta; /*0x100674b8f*/
        __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100674b9d*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                __src) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100674f77*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v41,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v27 = __dsta[0]; /*0x100674bc7*/
        v28 = __dsta[1]; /*0x100674bce*/
        v49 = __dsta[2]; /*0x100674bdc*/
        LODWORD(v40[0]) = *(_DWORD *)((char *)&__dsta[2] + 1); /*0x100674be5*/
        *(_DWORD *)((char *)v40 + 3) = HIDWORD(__dsta[2]); /*0x100674bf1*/
        if ( !(_BYTE)v48
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v26,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v20 + 40) = 1; /*0x100674fa3*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v21); /*0x100674c14*/
        v29 = v40[0]; /*0x100674c19*/
        __dst[7] = *(_DWORD *)((char *)v40 + 3); /*0x100674c25*/
        *(_DWORD *)((char *)__dst + 25) = v29; /*0x100674c28*/
        *((_QWORD *)__dst + 1) = v27; /*0x100674c2b*/
        *((_QWORD *)__dst + 2) = v28; /*0x100674c2f*/
        *((_BYTE *)__dst + 24) = v49; /*0x100674c37*/
        *(_QWORD *)__dst = 2; /*0x100674c3a*/
        goto LABEL_38; /*0x100674c41*/
      }
    }
    *(_BYTE *)(v20 + 904) = v48; /*0x100674c98*/
    if ( !(_BYTE)v25 /*0x100674fad*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v22, v16, v23, v25) )
    {
      *(_BYTE *)(v20 + 40) = 1; /*0x100674fba*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v21); /*0x100674cba*/
    codexmate_lib::core::voice::runtime::read_runtime_file::h7a5982944da78c50((char *)__src, (__int64)&v34); /*0x100674ccd*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x100674cdc*/
    {
      qmemcpy(v39, &__src[1], sizeof(v39)); /*0x100674cf8*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100674d09*/
      {
        v44 = v39; /*0x100674d0f*/
        v45 = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100674d1a*/
        v40[6] = 2; /*0x100674d1e*/
        v40[7] = "codexmate_lib::core::voice::runtimestandby"; /*0x100674d30*/
        v40[8] = 35; /*0x100674d37*/
        v40[10] = &loc_1017C2EB1; /*0x100674d49*/
        v40[11] = &v44; /*0x100674d51*/
        v40[0] = 0; /*0x100674d55*/
        v40[1] = "codexmate_lib::core::voice::runtimestandby"; /*0x100674d60*/
        v40[2] = 35; /*0x100674d67*/
        v40[3] = 0; /*0x100674d72*/
        v40[4] = "src/core/voice/runtime/mod.rs"; /*0x100674d84*/
        v40[5] = 29; /*0x100674d8b*/
        v40[9] = 0x4C600000001LL; /*0x100674da0*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v41, v40); /*0x100674daf*/
      }
      _$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$u20$as$u20$core..default..Default$GT$::default::h3222dc64aa78695e(__dsta); /*0x100674dbb*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v39); /*0x100674dc7*/
    }
    else
    {
      memcpy(__dsta, __src, sizeof(__dsta)); /*0x100674de1*/
    }
    BYTE3(__dsta[49]) = v48; /*0x100674de9*/
    codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65(v40, &v34, __dsta); /*0x100674e04*/
    if ( LODWORD(v40[0]) == 11 ) /*0x100674e10*/
    {
      codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__src, a2); /*0x100674e1c*/
      if ( __src[0] == 0x8000000000000000LL ) /*0x100674e28*/
      {
        codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(__dst, a2); /*0x100674e34*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(__dsta); /*0x100674e40*/
LABEL_38:
        core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v34); /*0x100674f20*/
        return __dst; /*0x100674f27*/
      }
      *((_QWORD *)__dst + 3) = __src[2]; /*0x100674ef3*/
      v31 = (_QWORD *)__src[0]; /*0x100674ef7*/
      v32 = __src[1]; /*0x100674efe*/
    }
    else
    {
      qmemcpy(__src, v40, 0x60u); /*0x100674e60*/
      v44 = nullptr; /*0x100674e63*/
      v45 = 1; /*0x100674e6b*/
      v46 = 0; /*0x100674e73*/
      v39[2] = 1610612768; /*0x100674e7b*/
      v39[0] = &v44; /*0x100674e8a*/
      v39[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100674e98*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100674ea9*/
                              __src,
                              v39) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100674fe2*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v41,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v41 = v44; /*0x100674ebe*/
      v42 = v45; /*0x100674ec2*/
      v43 = v46; /*0x100674eca*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v40); /*0x100674ed5*/
      *((_QWORD *)__dst + 3) = v43; /*0x100674ede*/
      v31 = v41; /*0x100674ee2*/
      v32 = v42; /*0x100674ee6*/
    }
    *((_QWORD *)__dst + 2) = v32; /*0x100674f05*/
    *((_QWORD *)__dst + 1) = v31; /*0x100674f09*/
    *(_QWORD *)__dst = 2; /*0x100674f0d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(__dsta); /*0x100674f1b*/
    goto LABEL_38; /*0x100674f1b*/
  }
  v10 = 0; /*0x100674967*/
  if ( !*((_BYTE *)v6 + 8) ) /*0x10067497c*/
    goto LABEL_12; /*0x10067497c*/
LABEL_6:
  __src[0] = 0; /*0x100674982*/
  __src[1] = 1; /*0x10067498d*/
  __src[2] = 0; /*0x100674998*/
  v36 = 1610612768; /*0x1006749a3*/
  v34 = __src; /*0x1006749b5*/
  v35 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006749c3*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          &v34) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100674c64*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v41,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v11 = __src[0]; /*0x1006749ed*/
  v12 = __src[1]; /*0x1006749f4*/
  v13 = v10; /*0x1006749fb*/
  v14 = __src[2]; /*0x1006749fe*/
  v47[0] = *(_DWORD *)((char *)&__src[2] + 1); /*0x100674a0c*/
  *(_DWORD *)((char *)v47 + 3) = HIDWORD(__src[2]); /*0x100674a15*/
  if ( !(_BYTE)v13
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v13,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v6 + 8) = 1; /*0x100674f4e*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x100674a33*/
  *((_QWORD *)__dst + 1) = v11; /*0x100674a38*/
  *((_QWORD *)__dst + 2) = v12; /*0x100674a3c*/
  *((_BYTE *)__dst + 24) = v14; /*0x100674a40*/
  v15 = *(_DWORD *)((char *)v47 + 3); /*0x100674a47*/
  *(_DWORD *)((char *)__dst + 25) = v47[0]; /*0x100674a4a*/
  __dst[7] = v15; /*0x100674a4d*/
  *(_QWORD *)__dst = 2; /*0x100674a50*/
  return __dst; /*0x100674f2f*/
}