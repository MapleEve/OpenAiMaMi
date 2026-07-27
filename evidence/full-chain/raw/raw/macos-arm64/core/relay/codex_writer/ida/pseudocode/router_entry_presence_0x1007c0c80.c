// __ZN13codexmate_lib4core5relay12codex_writer21router_entry_presence @ 0x1007c0c80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_writer::router_entry_presence::hd5aebe89c04db819(void *__s1)
{
  __int64 v1; // r12
  void *v2; // r13
  __int64 v3; // r13
  void *v4; // r15
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // al
  __int64 v9; // [rsp+8h] [rbp-58h] BYREF
  void *__s2; // [rsp+10h] [rbp-50h]
  size_t __n; // [rsp+18h] [rbp-48h]
  int **v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+28h] [rbp-38h]
  unsigned __int8 v14; // [rsp+37h] [rbp-29h]

  v12 = &anon_3ce6d1417794db0febde534c64082f90_166; /*0x1007c0c9e*/
  v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007c0ca9*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v9, &anon_3ce6d1417794db0febde534c64082f90_167, &v12); /*0x1007c0cbc*/
  v1 = v9; /*0x1007c0cc1*/
  v2 = __s2; /*0x1007c0cc5*/
  v14 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(__s2, __n, __s1); /*0x1007c0cdb*/
  if ( v1 ) /*0x1007c0ce1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v1, 1); /*0x1007c0cee*/
  v12 = &anon_3ce6d1417794db0febde534c64082f90_166; /*0x1007c0cfa*/
  v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007c0cfe*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v9, &anon_3ce6d1417794db0febde534c64082f90_168, &v12); /*0x1007c0d11*/
  v3 = v9; /*0x1007c0d16*/
  v4 = __s2; /*0x1007c0d1a*/
  v5 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(__s2, __n, __s1); /*0x1007c0d30*/
  if ( v3 ) /*0x1007c0d36*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x1007c0d43*/
  v6 = v14; /*0x1007c0d48*/
  if ( v14 ) /*0x1007c0d50*/
    v7 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1007c0d64*/
           &anon_3ce6d1417794db0febde534c64082f90_169,
           0x10u,
           __s1);
  else
    v7 = 0; /*0x1007c0d6b*/
  return (v7 << 16) | (v5 << 8) | (unsigned int)v6; /*0x1007c0d82*/
}