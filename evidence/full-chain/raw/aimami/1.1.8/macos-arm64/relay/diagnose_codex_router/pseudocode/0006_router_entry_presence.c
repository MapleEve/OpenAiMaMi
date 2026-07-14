// callee: codexmate_lib::core::relay::codex_writer::router_entry_presence::h2267da218ed514a4
// VA: 0x10067e230 | callee of codex_config_stale_reason (depth 2 from owner)

__int64 __fastcall codexmate_lib::core::relay::codex_writer::router_entry_presence::h2267da218ed514a4(void *__s1)
{
  void *v1; // r12
  unsigned __int8 v2; // r15
  void *v3; // r13
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // al
  int **v7; // [rsp+0h] [rbp-50h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+8h] [rbp-48h]
  __int64 v9; // [rsp+10h] [rbp-40h] BYREF
  void *__s2; // [rsp+18h] [rbp-38h]
  size_t __n; // [rsp+20h] [rbp-30h]

  v7 = &anon_5d4536734f60d7d1ae09e451c2f7649c_690; /*0x10067e24e*/
  v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10067e259*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v9, &anon_5d4536734f60d7d1ae09e451c2f7649c_691, &v7); /*0x10067e26c*/
  v1 = __s2; /*0x10067e271*/
  v2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(__s2, __n, __s1); /*0x10067e287*/
  if ( v9 ) /*0x10067e291*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v9, 1); /*0x10067e29b*/
  v7 = &anon_5d4536734f60d7d1ae09e451c2f7649c_690; /*0x10067e2a7*/
  v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10067e2ab*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v9, &anon_5d4536734f60d7d1ae09e451c2f7649c_692, &v7); /*0x10067e2be*/
  v3 = __s2; /*0x10067e2c3*/
  v4 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(__s2, __n, __s1); /*0x10067e2d9*/
  if ( v9 ) /*0x10067e2e3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v9, 1); /*0x10067e2ed*/
  if ( v2 ) /*0x10067e2f5*/
    v5 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10067e309*/
           &anon_5d4536734f60d7d1ae09e451c2f7649c_693,
           0x10u,
           __s1);
  else
    v5 = 0; /*0x10067e310*/
  return (v5 << 16) | (v4 << 8) | (unsigned int)v2; /*0x10067e327*/
}