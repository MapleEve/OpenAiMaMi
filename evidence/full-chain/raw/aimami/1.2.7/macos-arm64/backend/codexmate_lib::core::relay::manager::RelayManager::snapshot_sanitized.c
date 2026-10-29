// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::hfa155c7208bbcb5b; addr: 0x100257fc0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
// B-level evidence identity verified; module codexmate_lib/core/relay/manager; range 0x100257fc0-0x100258006; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::snapshot_sanitized::hfa155c7208bbcb5b(
        __int64 a1,
        __int64 a2)
{
  _BYTE v3[400]; // [rsp+0h] [rbp-190h] BYREF

  codexmate_lib::core::relay::manager::RelayManager::snapshot::h527950d12ca05baa(v3, a2); /*0x100257fdb*/
  codexmate_lib::core::relay::storage::sanitize_for_export::h611985cee17feb5d(a1, (__int64)v3); /*0x100257fe6*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(v3); /*0x100257ff2*/
  return a1; /*0x100257ffa*/
}
