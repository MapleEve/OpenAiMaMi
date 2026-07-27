// __ZN13codexmate_lib4core5relay17router_reconciler21record_thread_summary @ 0x100328060 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::record_thread_summary::h2e3c0038a3c425e4(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v3; // r11
  _QWORD v5[3]; // [rsp+8h] [rbp-C8h] BYREF
  _QWORD v6[18]; // [rsp+20h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+B0h] [rbp-20h] BYREF

  v3 = 0; /*0x1003280a0*/
  if ( *(_BYTE *)a3 ) /*0x1003280a3*/
    v3 = *(_QWORD *)(a3 + 16); /*0x1003280a8*/
  v7 = v3; /*0x1003280ac*/
  v6[0] = a3 + 144; /*0x1003280b7*/
  v6[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003280c5*/
  v6[2] = a3 + 152; /*0x1003280cc*/
  v6[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003280d3*/
  v6[4] = a3 + 160; /*0x1003280da*/
  v6[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003280e1*/
  v6[6] = a3 + 168; /*0x1003280e8*/
  v6[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003280ec*/
  v6[8] = a3 + 176; /*0x1003280f0*/
  v6[9] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003280f4*/
  v6[10] = a3 + 96; /*0x1003280f8*/
  v6[11] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003280fc*/
  v6[12] = a3 + 104; /*0x100328100*/
  v6[13] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328104*/
  v6[14] = &v7; /*0x10032810c*/
  v6[15] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328110*/
  v6[16] = a3 + 184; /*0x100328114*/
  v6[17] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328118*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v5, &unk_1017BC283, v6); /*0x100328134*/
  return codexmate_lib::core::relay::router_reconciler::record_timing::h97f3c49fbc3d5989( /*0x100328155*/
           0,
           (__int64)"thread_reconcileimage generationconnection resetreasoning_effortprocessingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id",
           16,
           a1,
           a2,
           v5);
}