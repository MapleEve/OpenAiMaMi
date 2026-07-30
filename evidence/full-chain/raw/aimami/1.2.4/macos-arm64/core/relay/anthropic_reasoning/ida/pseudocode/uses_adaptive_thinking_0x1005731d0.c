// __ZN13codexmate_lib4core5relay19anthropic_reasoning22uses_adaptive_thinking @ 0x1005731d0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::uses_adaptive_thinking::he5dfbff7e6ddf326(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  void *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  void *__s1; // [rsp+8h] [rbp-28h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h2cf7ed6a4a525668(&v5, a1, a2); /*0x1005731e7*/
  v3 = __s1; /*0x1005731ec*/
  LOBYTE(v2) = 1; /*0x10057320b*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005732d6*/
                           &anon_d163fe72d6e6e73a137b22815ab75905_279,
                           7u,
                           __s1)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_d163fe72d6e6e73a137b22815ab75905_280,
                           8u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_d163fe72d6e6e73a137b22815ab75905_281,
                           0xEu,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_d163fe72d6e6e73a137b22815ab75905_282,
                           8u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_d163fe72d6e6e73a137b22815ab75905_283,
                           6u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_d163fe72d6e6e73a137b22815ab75905_284,
                           8u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_d163fe72d6e6e73a137b22815ab75905_285,
                           8u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_d163fe72d6e6e73a137b22815ab75905_286,
                           8u,
                           v3) )
  {
    v2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1005732f6*/
           "sonnet-4-6",
           0xAu,
           v3);
  }
  if ( v5 ) /*0x100573300*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, 1); /*0x10057330a*/
  return v2; /*0x100573312*/
}