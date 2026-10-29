// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h42479bd50bee7f15; addr: 0x10025d5a0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void __fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h42479bd50bee7f15(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r12
  void *v6; // rax
  _QWORD v7[7]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v8; // [rsp+38h] [rbp-28h]

  v3 = *a1; /*0x10025d5af*/
  if ( *a1 ) /*0x10025d5af*/
  {
    v5 = a1[1]; /*0x10025d5c1*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x10025d5c5*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x10025d5d4*/
    if ( !v6 ) /*0x10025d5dc*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x10025d655*/
    qmemcpy(v6, "reconciling_threads", 19); /*0x10025d5f6*/
    v7[0] = 1; /*0x10025d600*/
    v7[1] = a2; /*0x10025d608*/
    v7[2] = 1; /*0x10025d60c*/
    v7[3] = a3; /*0x10025d614*/
    v7[4] = 19; /*0x10025d618*/
    v7[5] = v6; /*0x10025d620*/
    v7[6] = 19; /*0x10025d624*/
    v8 = 2054; /*0x10025d62c*/
    (*(void (__fastcall **)(__int64, _QWORD *))(v5 + 40))(v3, v7); /*0x10025d639*/
  }
}
