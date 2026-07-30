// __ZN13codexmate_lib4core5relay19anthropic_reasoning27thinking_cannot_be_disabled @ 0x100573940 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::anthropic_reasoning::thinking_cannot_be_disabled::h593e3dca8b9ac71c(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r15d
  void *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  void *__s1; // [rsp+8h] [rbp-28h]

  codexmate_lib::core::relay::anthropic_reasoning::normalize_model_name::h2cf7ed6a4a525668(&v5, a1, a2); /*0x100573957*/
  v3 = __s1; /*0x10057395c*/
  LOBYTE(v2) = 1; /*0x10057397b*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100573976*/
                           &anon_d163fe72d6e6e73a137b22815ab75905_279,
                           7u,
                           __s1) )
    v2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100573999*/
           &anon_d163fe72d6e6e73a137b22815ab75905_280,
           8u,
           v3);
  if ( v5 ) /*0x1005739a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, 1); /*0x1005739ad*/
  return v2; /*0x1005739b5*/
}