// mac 1.1.8 BACKEND-ONLY create_tray_menu node 0x101129d60 depth=2
// std3sys3pal4unix4sync5mutex5Mutex4lock4fail
void __fastcall __noreturn std::sys::pal::unix::sync::mutex::Mutex::lock::fail::h80ca574eae995758(__int64 a1)
{
  _QWORD v1[2]; // [rsp+8h] [rbp-38h] BYREF
  __int64 v2; // [rsp+18h] [rbp-28h] BYREF

  v2 = (a1 << 32) | 2; /*0x101129d77*/
  v1[0] = &v2; /*0x101129d7f*/
  v1[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x101129d8a*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10125872F, (__int64)v1, (__int64)&off_1015AE250); /*0x101129da0*/
}