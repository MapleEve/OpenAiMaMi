// __ZN13codexmate_lib8platform19voice_trigger_macos22cancel_trigger_capture @ 0x1005e3e40 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::voice_trigger_macos::cancel_trigger_capture::hf72118e3af23e107(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // al
  _QWORD v10[3]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-20h]

  if ( qword_1019FED00 ) /*0x1005e3e57*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h01bca2ab830af520(&codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e3feb*/
    v2 = codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531; /*0x1005e3ff0*/
    if ( codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531 ) /*0x1005e3ffa*/
      goto LABEL_3; /*0x1005e3ffa*/
  }
  else
  {
    v2 = codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531; /*0x1005e3e5d*/
    if ( codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531 ) /*0x1005e3e67*/
      goto LABEL_3; /*0x1005e3e67*/
  }
  v2 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e400c*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x1005e3e6d*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1005e3e86*/
  {
    if ( byte_1019FECD8 ) /*0x1005e3e9b*/
      goto LABEL_5; /*0x1005e3e9b*/
    v6 = qword_1019FECE0; /*0x1005e3eba*/
    v13 = qword_1019FECE8; /*0x1005e3ec8*/
    v14 = qword_1019FECF0; /*0x1005e3ed3*/
    v15 = qword_1019FECF8; /*0x1005e3ede*/
    qword_1019FECE0 = 3; /*0x1005e3ee2*/
LABEL_8:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005e408a*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v2, a2, v3, v4) )
    {
      byte_1019FECD8 = 1; /*0x1005e4097*/
    }
    goto LABEL_9; /*0x1005e409e*/
  }
  v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v2, a2, v3, v4); /*0x1005e4014*/
  v4 = (unsigned __int8)byte_1019FECD8; /*0x1005e4019*/
  if ( byte_1019FECD8 ) /*0x1005e4022*/
  {
    if ( !v9 ) /*0x1005e4026*/
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e3eb5*/
LABEL_5:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005e4031*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v2, a2, v3, v4) )
    {
      byte_1019FECD8 = 1; /*0x1005e403e*/
    }
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e4045*/
  }
  v6 = qword_1019FECE0; /*0x1005e404a*/
  v13 = qword_1019FECE8; /*0x1005e4058*/
  v14 = qword_1019FECF0; /*0x1005e4063*/
  v4 = qword_1019FECF8; /*0x1005e4067*/
  v15 = qword_1019FECF8; /*0x1005e406e*/
  qword_1019FECE0 = 3; /*0x1005e4072*/
  if ( v9 ) /*0x1005e407f*/
    goto LABEL_8; /*0x1005e407f*/
LABEL_9:
  v7 = codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531; /*0x1005e3ef9*/
  result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e3f00*/
  if ( v6 != 3 ) /*0x1005e3f09*/
  {
    v11[0] = v6; /*0x1005e3f0f*/
    v11[1] = v13; /*0x1005e3f1b*/
    v12[0] = v14; /*0x1005e3f1f*/
    v12[1] = v15; /*0x1005e3f27*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, a2); /*0x1005e3f2b*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1005e3f3a*/
    if ( !v8 ) /*0x1005e3f42*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27); /*0x1005e40ad*/
    *(_QWORD *)(v8 + 16) = 0xAE94E9918FE5A6A7LL; /*0x1005e3f52*/
    *(_QWORD *)(v8 + 8) = 0xE8A585E595BDE588LL; /*0x1005e3f60*/
    *(_QWORD *)v8 = 0xB6E6968FE5B2B7E5LL; /*0x1005e3f6e*/
    *(_DWORD *)(v8 + 23) = -2105482322; /*0x1005e3f71*/
    v13 = 27; /*0x1005e3f78*/
    v14 = v8; /*0x1005e3f80*/
    v15 = 27; /*0x1005e3f84*/
    std::sync::mpmc::Sender$LT$T$GT$::send::h46cc7fe258dc8522(v10, v11, &v13); /*0x1005e3f98*/
    if ( v10[0] != 0x8000000000000000LL && v10[0] ) /*0x1005e3fac*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10[1], v10[0], 1); /*0x1005e3fb7*/
    std::sync::mpmc::Sender$LT$T$GT$::send::h5b2fd9c4240d1a7a(v12); /*0x1005e3fc3*/
    _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7cdcb0da0181451(v11); /*0x1005e3fcc*/
    return _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(v12); /*0x1005e3fd4*/
  }
  return result; /*0x1005e3fd9*/
}