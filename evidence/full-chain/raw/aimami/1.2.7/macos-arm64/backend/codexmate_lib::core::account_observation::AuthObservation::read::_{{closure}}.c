// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_observation::AuthObservation::read::_$u7b$$u7b$closure$u7d$$u7d$::h85d6262b9b97bd79; addr: 0x1009873d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:16Z
__int64 __fastcall codexmate_lib::core::account_observation::AuthObservation::read::_$u7b$$u7b$closure$u7d$$u7d$::h85d6262b9b97bd79(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  void *v3; // rax
  __int64 v5; // [rsp+0h] [rbp-10h] BYREF

  v5 = a2; /*0x1009873d9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1009873dd*/
  v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x1009873ec*/
  if ( !v3 ) /*0x1009873f4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100987468*/
  qmemcpy(v3, "Auth observation is not valid JSON", 34); /*0x10098742a*/
  a1[1] = 34; /*0x100987433*/
  a1[2] = v3; /*0x10098743b*/
  a1[3] = 34; /*0x10098743f*/
  *a1 = 9; /*0x100987447*/
  return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc62c3b2945dfda16(&v5); /*0x10098745b*/
}