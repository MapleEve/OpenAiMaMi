__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::hf65da0a57567b4ce(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4)
{
  _BYTE v5[360]; // [rsp+8h] [rbp-168h] BYREF

  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)v5, a2, a3, a4); /*0x1005c132b*/
  codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92(a1, (__int64)v5); /*0x1005c1336*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v5); /*0x1005c1342*/
  return a1; /*0x1005c134a*/
}
---REFS---
0x1005cdf60 __ZN13codexmate_lib4core5relay7manager12RelayManager8snapshot17h0d4cb54a50479cd3E
0x1004b14b0 __ZN13codexmate_lib4core5relay7storage19sanitize_for_export17heb20e442c9650b92E
0x1005f0940 __ZN4core3ptr67drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$17ha31523a10c4e8151E_5
