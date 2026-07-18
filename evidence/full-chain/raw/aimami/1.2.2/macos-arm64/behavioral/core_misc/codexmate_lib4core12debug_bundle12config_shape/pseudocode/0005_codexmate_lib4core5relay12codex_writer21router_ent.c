// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x1008b08c0 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_writer::router_entry_presence::h63c86674d39250e5(void *__s1)
{
  unsigned __int8 v1; // r15
  unsigned __int8 v2; // r12
  unsigned __int8 v3; // al
  int **v5; // [rsp+0h] [rbp-50h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+8h] [rbp-48h]
  size_t v7; // [rsp+10h] [rbp-40h] BYREF
  void *__s2; // [rsp+18h] [rbp-38h]
  size_t __n; // [rsp+20h] [rbp-30h]

  v5 = &anon_fd792a2461ce7c8d75006ec63925405b_91; /*0x1008b08de*/
  v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1008b08e9*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1008b08fc*/
    &v7,
    anon_fd792a2461ce7c8d75006ec63925405b_92,
    (unsigned __int64)&v5);
  v1 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(__s2, __n, __s1); /*0x1008b0917*/
  if ( v7 ) /*0x1008b0921*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008b092b*/
  v5 = &anon_fd792a2461ce7c8d75006ec63925405b_91; /*0x1008b0937*/
  v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1008b093b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1008b094e*/
    &v7,
    anon_fd792a2461ce7c8d75006ec63925405b_93,
    (unsigned __int64)&v5);
  v2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(__s2, __n, __s1); /*0x1008b0969*/
  if ( v7 ) /*0x1008b0973*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008b097d*/
  if ( v1 ) /*0x1008b0985*/
    v3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008b0999*/
           &anon_fd792a2461ce7c8d75006ec63925405b_94,
           0x10u,
           __s1);
  else
    v3 = 0; /*0x1008b09a0*/
  return (v3 << 16) | (v2 << 8) | (unsigned int)v1; /*0x1008b09b7*/
}