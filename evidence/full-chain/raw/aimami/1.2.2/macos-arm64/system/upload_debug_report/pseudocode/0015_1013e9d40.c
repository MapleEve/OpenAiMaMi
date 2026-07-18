// mac 1.2.2 NEW upload_debug_report 0x1013e9d40 d=2
void __fastcall __noreturn std::sys::pal::unix::sync::mutex::Mutex::lock::fail::h80ca574eae995758(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v6[2]; // [rsp+8h] [rbp-38h] BYREF
  __int64 v7; // [rsp+18h] [rbp-28h] BYREF

  v7 = (a1 << 32) | 2; /*0x1013e9d57*/
  v6[0] = &v7; /*0x1013e9d5f*/
  v6[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1013e9d6a*/
  core::panicking::panic_fmt::h3a793735daf6e4ec(&unk_101729B99, v6, &off_101926170, a4, a5, a6); /*0x1013e9d80*/
}