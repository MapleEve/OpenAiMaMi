// __ZN13codexmate_lib4core5voice7runtime22notify_processing_done @ 0x100684810 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::notify_processing_done::hdc075b800f908cf7(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rcx
  _QWORD *v12; // r12
  __int64 v13; // r14
  __int64 v14; // r13
  int v15; // ecx
  bool v16; // al
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 *v19; // rax
  __int64 *v21; // [rsp+8h] [rbp-78h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+10h] [rbp-70h]
  __int64 v23; // [rsp+18h] [rbp-68h]
  __int64 v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-50h]
  __int64 v27; // [rsp+38h] [rbp-48h]
  _DWORD v28[2]; // [rsp+40h] [rbp-40h]
  _QWORD *v29; // [rsp+48h] [rbp-38h]
  char v30[41]; // [rsp+57h] [rbp-29h] BYREF

  v27 = a2; /*0x10068482a*/
  v7 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100684836*/
  v29 = (_QWORD *)(v7 + 32); /*0x10068483d*/
  v8 = *(_QWORD *)(v7 + 32); /*0x100684841*/
  if ( !v8 ) /*0x100684848*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v29); /*0x100684947*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8); /*0x100684858*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x10068496b*/
            &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
            a2,
            0x7FFFFFFFFFFFFFFFLL,
            v9);
    LOBYTE(v10) = v10 ^ 1; /*0x10068496e*/
    if ( *(_BYTE *)(v7 + 40) ) /*0x100684972*/
      goto LABEL_5; /*0x100684979*/
  }
  else
  {
    v10 = 0; /*0x100684878*/
    if ( *(_BYTE *)(v7 + 40) )
    {
LABEL_5:
      v24 = 0; /*0x100684888*/
      v25 = 1; /*0x100684896*/
      v26 = 0; /*0x10068489e*/
      v23 = 1610612768; /*0x1006848a6*/
      v21 = &v24; /*0x1006848b2*/
      v22 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006848bd*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &v21) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100684af5*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v30,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v11 = v10; /*0x1006848e4*/
      v12 = v29; /*0x1006848e7*/
      v13 = v24; /*0x1006848eb*/
      v14 = v25; /*0x1006848ef*/
      LOBYTE(v27) = v26; /*0x1006848f7*/
      v28[0] = *(_DWORD *)((char *)&v26 + 1); /*0x1006848fd*/
      *(_DWORD *)((char *)v28 + 3) = HIDWORD(v26); /*0x100684903*/
      if ( !(_BYTE)v11
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               0x7FFFFFFFFFFFFFFFLL,
                               v11) )
      {
        *(_BYTE *)(v7 + 40) = 1; /*0x100684b09*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v12); /*0x10068491a*/
      *(_QWORD *)a1 = v13; /*0x10068491f*/
      *(_QWORD *)(a1 + 8) = v14; /*0x100684922*/
      *(_BYTE *)(a1 + 16) = v27; /*0x10068492a*/
      v15 = *(_DWORD *)((char *)v28 + 3); /*0x100684930*/
      *(_DWORD *)(a1 + 17) = v28[0]; /*0x100684933*/
      *(_DWORD *)(a1 + 20) = v15; /*0x100684936*/
      return a1; /*0x100684939*/
    }
  }
  v16 = 1; /*0x10068497f*/
  if ( (a3 & 1) != 0 ) /*0x100684985*/
  {
    if ( *(_QWORD *)(v7 + 872) != a4 ) /*0x10068498e*/
      goto LABEL_24; /*0x10068498e*/
    v16 = codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1 == a4; /*0x10068499e*/
  }
  if ( *(_BYTE *)(v7 + 908) == 4 && v16 ) /*0x1006849b1*/
  {
    *(_QWORD *)(v7 + 872) = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1); /*0x1006849c8*/
    *(_QWORD *)(v7 + 880) = 0; /*0x1006849cf*/
    *(_BYTE *)(v7 + 908) = 0; /*0x1006849da*/
    v17 = *(_QWORD *)(v7 + 616); /*0x1006849e2*/
    if ( v17 != 0x8000000000000000LL && v17 ) /*0x1006849f1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v7 + 624), v17, 1); /*0x100684a05*/
    *(_QWORD *)(v7 + 616) = 0x8000000000000000LL; /*0x100684a1a*/
    v18 = v27; /*0x100684a24*/
    if ( !(_BYTE)v10 /*0x100684b3b*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                             v17,
                             0x7FFFFFFFFFFFFFFFLL,
                             0x8000000000000000LL) )
    {
      *(_BYTE *)(v7 + 40) = 1; /*0x100684b48*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v29); /*0x100684a3d*/
    codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(v18); /*0x100684a45*/
    codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(v18, 0); /*0x100684a4f*/
    if ( qword_1019FF088 ) /*0x100684a5e*/
      std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hb43fbf08bf63748c(&codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce); /*0x100684b1a*/
    std::sync::mpmc::Sender$LT$T$GT$::send::h22e3779823916dcc( /*0x100684a70*/
      &codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce,
      1);
    codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)&v21, v18); /*0x100684a7c*/
    if ( v21 == (__int64 *)0x8000000000000000LL ) /*0x100684a85*/
    {
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100684a87*/
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v23; /*0x100684ab2*/
      v19 = v21; /*0x100684ab6*/
      *(_QWORD *)(a1 + 8) = v22; /*0x100684abe*/
      *(_QWORD *)a1 = v19; /*0x100684ac2*/
    }
    return a1; /*0x100684a8a*/
  }
LABEL_24:
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100684a8c*/
  if ( !(_BYTE)v10 /*0x100684b24*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           a2,
                           0x7FFFFFFFFFFFFFFFLL,
                           0x8000000000000000LL) )
  {
    *(_BYTE *)(v7 + 40) = 1; /*0x100684b31*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v29); /*0x100684aa7*/
  return a1; /*0x100684ac8*/
}