// __ZN13codexmate_lib4core5relay16codex_diagnostic24is_cc_switch_fingerprint @ 0x1004f2af0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::is_cc_switch_fingerprint::h0a9e1d8b185a113c(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  void *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  void *__s1; // [rsp+8h] [rbp-28h]

  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v5, a1, a2); /*0x1004f2b07*/
  v3 = __s1; /*0x1004f2b0c*/
  LOBYTE(v2) = 1; /*0x1004f2b2b*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004f2bb8*/
                           "cc-switchcc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                           9u,
                           __s1)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "cc_switchcodex-switch[model_providers.cccircuit_breakerprovider_router",
                           9u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "ccswitchorphaned",
                           8u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "codex-switch[model_providers.cccircuit_breakerprovider_router",
                           0xCu,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "[model_providers.cccircuit_breakerprovider_router",
                           0x13u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           "circuit_breakerprovider_router",
                           0xFu,
                           v3) )
  {
    v2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1004f2bd8*/
           "provider_router",
           0xFu,
           v3);
  }
  if ( v5 ) /*0x1004f2be2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, 1); /*0x1004f2bec*/
  return v2; /*0x1004f2bf4*/
}