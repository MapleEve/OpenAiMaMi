// __ZN13codexmate_lib4core5relay12fetch_models18is_transient_error @ 0x100253f60 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::fetch_models::is_transient_error::ha48ea6d9ab86c66a(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  void *v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-30h] BYREF
  void *__s1; // [rsp+8h] [rbp-28h]

  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v5, a1, a2); /*0x100253f77*/
  v3 = __s1; /*0x100253f7c*/
  LOBYTE(v2) = 1; /*0x100253f9b*/
  if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100253fcf*/
                           &anon_39a6e93098609d65551b0fc4eadbbbd9_168,
                           0xEu,
                           __s1)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_39a6e93098609d65551b0fc4eadbbbd9_169,
                           9u,
                           v3)
    && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                           &anon_39a6e93098609d65551b0fc4eadbbbd9_170,
                           7u,
                           v3) )
  {
    v2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100253fef*/
           "connection",
           0xAu,
           v3);
  }
  if ( v5 ) /*0x100253ff9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v5, 1); /*0x100254003*/
  return v2; /*0x10025400b*/
}