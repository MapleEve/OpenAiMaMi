// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_observation::AuthObservationTracker::applied::h2005698f11279970; addr: 0x100987f60; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
void *__fastcall codexmate_lib::core::account_observation::AuthObservationTracker::applied::h2005698f11279970(
        _QWORD *a1,
        const void *a2,
        double a3)
{
  void *v3; // rbx

  v3 = a1 + 35; /*0x100987f67*/
  if ( *((_DWORD *)a1 + 70) != 3 ) /*0x100987f75*/
  {
    if ( !__OFSUB__(-a1[57], 1) && a1[57] ) /*0x100987f81*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1[58], a1[57], 1); /*0x100987f97*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..auth..AuthSnapshot$GT$$GT$::hdf3848feccc703ef( /*0x100987f9f*/
      v3,
      a3);
  }
  return memcpy(v3, a2, 0xF0u); /*0x100987faf*/
}