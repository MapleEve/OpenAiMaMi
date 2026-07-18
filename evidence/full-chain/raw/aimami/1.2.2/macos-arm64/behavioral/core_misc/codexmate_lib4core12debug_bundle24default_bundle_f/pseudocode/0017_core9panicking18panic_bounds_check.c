// mac 1.2.2 NEW codexmate_lib4core12debug_bundle24default_bundle_f 0x1013f02e0 d=3
void __fastcall __noreturn core::panicking::panic_bounds_check::h56740b1198b22635(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[4]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v4; // [rsp+20h] [rbp-10h] BYREF
  __int64 v5; // [rsp+28h] [rbp-8h] BYREF

  v5 = a1; /*0x1013f02ec*/
  v4 = a2; /*0x1013f02f3*/
  v3[0] = &v4; /*0x1013f02fa*/
  v3[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f0304*/
  v3[2] = &v5; /*0x1013f0308*/
  v3[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f030c*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10172B13B, (__int64)v3, a3); /*0x1013f0317*/
}