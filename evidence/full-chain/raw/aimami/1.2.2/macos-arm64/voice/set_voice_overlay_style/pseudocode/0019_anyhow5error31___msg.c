// mac 1.2.2 NEW set_voice_overlay_style 0x1013a4a70 d=2
__int64 __fastcall anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h4974f732d33763b8(__int64 a1)
{
  _QWORD v2[6]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v3[9]; // [rsp+38h] [rbp-48h] BYREF

  std::backtrace::Backtrace::capture::hafae5bcc5c0fee73(v2); /*0x1013a4a8b*/
  v3[5] = v2[5]; /*0x1013a4a94*/
  v3[4] = v2[4]; /*0x1013a4a9c*/
  v3[3] = v2[3]; /*0x1013a4aa4*/
  v3[2] = v2[2]; /*0x1013a4aac*/
  v3[1] = v2[1]; /*0x1013a4ab8*/
  v3[0] = v2[0]; /*0x1013a4abc*/
  return anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::construct::h695a399e6abfb440(a1, v3); /*0x1013a4acc*/
}