// __ZN13codexmate_lib8platform19voice_trigger_macos18set_active_capture @ 0x1005e3070 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::voice_trigger_macos::set_active_capture::ha1a95636a1b3a628(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r14
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( qword_1019FED00 ) /*0x1005e3088*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hd66333fd6da635cb(&codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e3123*/
  v3 = (__int64 *)codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531; /*0x1005e308e*/
  if ( !codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531 ) /*0x1005e3098*/
    v3 = (__int64 *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e3139*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1005e309e*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005e30ad*/
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x1005e3149*/
    if ( byte_1019FECD8 ) /*0x1005e3160*/
    {
LABEL_7:
      if ( !v6 /*0x1005e31d3*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) )
      {
        byte_1019FECD8 = 1; /*0x1005e31e0*/
      }
      result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e30ed*/
      if ( *(_DWORD *)a1 != 3 ) /*0x1005e30f5*/
      {
        _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7cdcb0da0181451(a1); /*0x1005e3103*/
        return _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(a1 + 2); /*0x1005e3117*/
      }
      return result; /*0x1005e3117*/
    }
  }
  else
  {
    v6 = 0; /*0x1005e30b9*/
    if ( byte_1019FECD8 ) /*0x1005e30cf*/
      goto LABEL_7; /*0x1005e30cf*/
  }
  if ( (_DWORD)qword_1019FECE0 != 3 ) /*0x1005e316d*/
  {
    _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc7cdcb0da0181451(&qword_1019FECE0); /*0x1005e3176*/
    v3 = &qword_1019FECF0; /*0x1005e317b*/
    _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc457547a7b90080(&qword_1019FECF0); /*0x1005e3182*/
  }
  qword_1019FECF8 = a1[3]; /*0x1005e318b*/
  qword_1019FECF0 = a1[2]; /*0x1005e3196*/
  v8 = *a1; /*0x1005e319d*/
  v9 = a1[1]; /*0x1005e31a0*/
  qword_1019FECE8 = v9; /*0x1005e31a4*/
  qword_1019FECE0 = v8; /*0x1005e31ab*/
  if ( !v6 /*0x1005e31ec*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v9) )
  {
    byte_1019FECD8 = 1; /*0x1005e31f5*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::voice_trigger_macos::ACTIVE_CAPTURE::hdd85af818bb58531); /*0x1005e30f7*/
}