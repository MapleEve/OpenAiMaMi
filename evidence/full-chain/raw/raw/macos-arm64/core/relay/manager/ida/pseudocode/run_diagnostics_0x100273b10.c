// __ZN13codexmate_lib4core5relay7manager12RelayManager15run_diagnostics @ 0x100273b10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::run_diagnostics::hfd5b8365743954fe(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  _BYTE *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-6B0h] BYREF
  _BYTE v8[96]; // [rsp+8h] [rbp-6A8h] BYREF
  _QWORD __dst[84]; // [rsp+68h] [rbp-648h] BYREF
  _BYTE v10[104]; // [rsp+308h] [rbp-3A8h] BYREF
  _BYTE __src[672]; // [rsp+370h] [rbp-340h] BYREF
  _QWORD v12[12]; // [rsp+610h] [rbp-A0h] BYREF
  _QWORD v13[8]; // [rsp+670h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 16); /*0x100273b28*/
  if ( !__OFSUB__(0, *(_QWORD *)(v3 + 16)) ) /*0x100273b32*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v10[8], v3 + 16); /*0x100273b89*/
    *(_QWORD *)v10 = 9; /*0x100273b8e*/
    v4 = v10; /*0x100273b99*/
    goto LABEL_5; /*0x100273b99*/
  }
  codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::resolve_inner::h0014a02535f56cc8(v10); /*0x100273b4e*/
  qmemcpy(v12, &v10[8], sizeof(v12)); /*0x100273b6d*/
  if ( *(_QWORD *)v10 == 0x8000000000000000LL ) /*0x100273b73*/
  {
    v4 = v12; /*0x100273b75*/
LABEL_5:
    qmemcpy(a1, v4, 0x60u); /*0x100273ba8*/
    return a1; /*0x100273ba8*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100273bd1*/
  qmemcpy(v8, v12, sizeof(v8)); /*0x100273be9*/
  v7 = *(_QWORD *)v10; /*0x100273bec*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v10, a2); /*0x100273bfd*/
  codexmate_lib::core::relay::codex_diagnostic::run_diagnostics_with_mode::h30a2ac42c421fd0d(v13, &v7, v10, 1); /*0x100273c19*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v10); /*0x100273c25*/
  if ( codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::ha887099746f9e103( /*0x100273c2d*/
         a2,
         (__int64)&v7) )
  {
    codexmate_lib::core::relay::transition_journal::in_flight::hb734cd1dd4b34015(v12); /*0x100273c48*/
    if ( v12[0] != 0x8000000000000000LL ) /*0x100273c54*/
    {
      qmemcpy(v10, v12, 0x48u); /*0x100273c6c*/
      codexmate_lib::core::relay::codex_diagnostic::mark_transition_in_flight::h8a5a741180b40c57( /*0x100273c76*/
        (__int64)v13,
        (__int64)v10);
      if ( *(_QWORD *)v10 ) /*0x100273c85*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v10[8], *(_QWORD *)v10, 1); /*0x100273c93*/
      if ( *(_QWORD *)&v10[24] != 0x8000000000000000LL && *(_QWORD *)&v10[24] ) /*0x100273ca7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v10[32], *(_QWORD *)&v10[24], 1); /*0x100273cb5*/
    }
  }
  a1[4] = v13[3]; /*0x100273cbe*/
  a1[3] = v13[2]; /*0x100273cc6*/
  v6 = v13[0]; /*0x100273cca*/
  a1[2] = v13[1]; /*0x100273cd2*/
  a1[1] = v6; /*0x100273cd6*/
  *a1 = 11; /*0x100273cda*/
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v7); /*0x100273ce8*/
  if ( __dst[80] ) /*0x100273cf7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[81], __dst[80], 1); /*0x100273d09*/
  return a1; /*0x100273bae*/
}