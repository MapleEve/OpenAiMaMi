// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x1013effe0 d=4
void __fastcall __noreturn core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 *v4; // [rsp+0h] [rbp-30h] BYREF
  __int64 (__fastcall *v5)(); // [rsp+8h] [rbp-28h]
  __int64 *v6; // [rsp+10h] [rbp-20h]
  __int64 (__fastcall *v7)(); // [rsp+18h] [rbp-18h]
  unsigned __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-8h] BYREF

  if ( a1 > a3 ) /*0x1013effeb*/
  {
    v9 = a1; /*0x1013effed*/
    v8 = a3; /*0x1013efff1*/
    v4 = (__int64 *)&v9; /*0x1013efff9*/
    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f0004*/
    v6 = (__int64 *)&v8; /*0x1013f000c*/
    v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f0010*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10172B00D, (__int64)&v4, a4); /*0x1013f0022*/
  }
  if ( a2 <= a3 && a1 > a2 ) /*0x1013f002f*/
  {
    v9 = a1; /*0x1013f0031*/
    v8 = a2; /*0x1013f0035*/
    v4 = (__int64 *)&v9; /*0x1013f003d*/
    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f0048*/
    v6 = (__int64 *)&v8; /*0x1013f0050*/
    v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f0054*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10172AFE5, (__int64)&v4, a4); /*0x1013f0066*/
  }
  v9 = a2; /*0x1013f006b*/
  v8 = a3; /*0x1013f006f*/
  v4 = (__int64 *)&v9; /*0x1013f0077*/
  v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f0082*/
  v6 = (__int64 *)&v8; /*0x1013f008a*/
  v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1013f008e*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10172AFAE, (__int64)&v4, a4); /*0x1013f00a0*/
}