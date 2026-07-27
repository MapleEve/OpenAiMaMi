// __ZN13codexmate_lib4core5relay17router_reconciler28record_model_catalog_summary @ 0x100328650 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::record_model_catalog_summary::hd941043d4138eb44(
        __int64 a1,
        int a2,
        __int64 a3)
{
  _QWORD v4[3]; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v5[14]; // [rsp+20h] [rbp-90h] BYREF
  __int64 v6; // [rsp+90h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a3 + 16); /*0x100328681*/
  v5[0] = a3 + 24; /*0x100328685*/
  v5[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328693*/
  v5[2] = a3 + 32; /*0x10032869a*/
  v5[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10032869e*/
  v5[4] = a3 + 40; /*0x1003286a2*/
  v5[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003286a6*/
  v5[6] = a3 + 48; /*0x1003286aa*/
  v5[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003286ae*/
  v5[8] = a3 + 56; /*0x1003286b2*/
  v5[9] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003286b6*/
  v5[10] = a3 + 64; /*0x1003286ba*/
  v5[11] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003286be*/
  v5[12] = &v6; /*0x1003286c6*/
  v5[13] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003286ca*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017BC3D2, v5); /*0x1003286e6*/
  return codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989( /*0x100328707*/
           0,
           (__int64)&unk_1015E43D5,
           23,
           a1,
           a2,
           v4);
}