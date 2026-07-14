// mac 1.1.8 test_relay_draft_stream node va=0x101130300 depth=3
// core9panicking18panic_bounds_check
void __fastcall __noreturn core::panicking::panic_bounds_check::h56740b1198b22635(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v3[4]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v4; // [rsp+20h] [rbp-10h] BYREF
  __int64 v5; // [rsp+28h] [rbp-8h] BYREF

  v5 = a1; /*0x10113030c*/
  v4 = a2; /*0x101130313*/
  v3[0] = &v4; /*0x10113031a*/
  v3[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101130324*/
  v3[2] = &v5; /*0x101130328*/
  v3[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10113032c*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259CC9, (__int64)v3, a3); /*0x101130337*/
}