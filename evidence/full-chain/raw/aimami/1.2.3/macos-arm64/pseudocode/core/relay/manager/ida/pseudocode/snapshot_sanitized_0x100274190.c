// __ZN13codexmate_lib4core5relay7manager12RelayManager18snapshot_sanitized @ 0x100274190 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::h51c681f0bedd12e0(
        __int64 a1,
        __int64 a2)
{
  _BYTE v3[312]; // [rsp+8h] [rbp-138h] BYREF

  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v3, a2); /*0x1002741ab*/
  codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(a1, v3); /*0x1002741b6*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v3); /*0x1002741c2*/
  return a1; /*0x1002741ca*/
}