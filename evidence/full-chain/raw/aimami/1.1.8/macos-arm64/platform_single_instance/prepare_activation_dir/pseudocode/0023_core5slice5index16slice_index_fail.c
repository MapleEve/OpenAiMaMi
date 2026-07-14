// mac 1.1.8 BEHAVIORAL-BACKEND prepare_activation_dir node 0x101130000 depth=3
// core5slice5index16slice_index_fail
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

  if ( a1 > a3 ) /*0x10113000b*/
  {
    v9 = a1; /*0x10113000d*/
    v8 = a3; /*0x101130011*/
    v4 = (__int64 *)&v9; /*0x101130019*/
    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101130024*/
    v6 = (__int64 *)&v8; /*0x10113002c*/
    v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101130030*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259B9B, (__int64)&v4, a4); /*0x101130042*/
  }
  if ( a2 <= a3 && a1 > a2 ) /*0x10113004f*/
  {
    v9 = a1; /*0x101130051*/
    v8 = a2; /*0x101130055*/
    v4 = (__int64 *)&v9; /*0x10113005d*/
    v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101130068*/
    v6 = (__int64 *)&v8; /*0x101130070*/
    v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x101130074*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259B73, (__int64)&v4, a4); /*0x101130086*/
  }
  v9 = a2; /*0x10113008b*/
  v8 = a3; /*0x10113008f*/
  v4 = (__int64 *)&v9; /*0x101130097*/
  v5 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1011300a2*/
  v6 = (__int64 *)&v8; /*0x1011300aa*/
  v7 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1011300ae*/
  core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_101259B3C, (__int64)&v4, a4); /*0x1011300c0*/
}