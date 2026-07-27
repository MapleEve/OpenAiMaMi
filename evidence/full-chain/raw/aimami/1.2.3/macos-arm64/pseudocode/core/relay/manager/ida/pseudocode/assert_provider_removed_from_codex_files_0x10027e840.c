// __ZN13codexmate_lib4core5relay7manager12RelayManager40assert_provider_removed_from_codex_files @ 0x10027e840 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::assert_provider_removed_from_codex_files::hd6387d5a33da3ad5(
        _QWORD *a1,
        _QWORD *a2,
        void *a3,
        size_t a4)
{
  void *v4; // r14
  __int64 v5; // r15
  void **v6; // r12
  __int64 result; // rax
  void **v8; // r14
  void *v9; // r12
  void **v10; // r15
  void *v11; // r12
  void *v12; // rdi
  void **v13; // rsi
  void **p_s2; // [rsp+0h] [rbp-110h] BYREF
  void *__s1; // [rsp+8h] [rbp-108h]
  _QWORD v16[3]; // [rsp+98h] [rbp-78h] BYREF
  _QWORD v17[3]; // [rsp+B0h] [rbp-60h] BYREF
  void **v18; // [rsp+C8h] [rbp-48h] BYREF
  void *v19; // [rsp+D0h] [rbp-40h]
  __int64 v20; // [rsp+D8h] [rbp-38h]
  void *__s2; // [rsp+E0h] [rbp-30h] BYREF
  size_t __n; // [rsp+E8h] [rbp-28h]

  __s2 = a3; /*0x10027e858*/
  __n = a4; /*0x10027e85c*/
  std::sys::fs::metadata::h32fa16d3052ea535(&p_s2, a2[9], a2[10]); /*0x10027e86f*/
  if ( (_DWORD)p_s2 == 1 ) /*0x10027e882*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10027e889*/
      1,
      __s1);
  }
  else
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10027e8f5*/
      0,
      __s1);
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&p_s2, a2[9], a2[10]); /*0x10027e909*/
    v8 = p_s2; /*0x10027e90e*/
    v9 = __s1; /*0x10027e915*/
    result = -(__int64)p_s2; /*0x10027e91f*/
    if ( __OFSUB__(-(__int64)p_s2, 1) ) /*0x10027e91f*/
    {
      *a1 = 2; /*0x10027e924*/
      a1[1] = v9; /*0x10027e92b*/
      return result; /*0x10027e92f*/
    }
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10027e982*/
                            __s2,
                            __n,
                            __s1) )
    {
      p_s2 = &__s2; /*0x10027e993*/
      __s1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027e9a1*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &unk_1017BA943, &p_s2); /*0x10027e9ba*/
      a1[3] = v17[2]; /*0x10027e9c3*/
      result = v17[0]; /*0x10027e9c7*/
      a1[2] = v17[1]; /*0x10027e9cf*/
      a1[1] = result; /*0x10027e9d3*/
      *a1 = 10; /*0x10027e9d7*/
      if ( !v8 ) /*0x10027e9e1*/
        return result; /*0x10027e9e1*/
      v12 = v9; /*0x10027e9ec*/
      v13 = v8; /*0x10027e9ef*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v13, 1); /*0x10027e9f2*/
    }
    if ( v8 ) /*0x10027eaa3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x10027eab4*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8(&v18, a2[75], a2[76], "codex_router_catalog.json", 25); /*0x10027e8ad*/
  v4 = v19; /*0x10027e8b2*/
  v5 = v20; /*0x10027e8b6*/
  std::sys::fs::metadata::h32fa16d3052ea535(&p_s2, v19, v20); /*0x10027e8c7*/
  v6 = p_s2; /*0x10027e8cc*/
  result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10027e8dd*/
             p_s2,
             __s1);
  if ( !v6 ) /*0x10027e8e5*/
  {
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&p_s2, v4, v5); /*0x10027e941*/
    v10 = p_s2; /*0x10027e946*/
    v11 = __s1; /*0x10027e94d*/
    result = -(__int64)p_s2; /*0x10027e957*/
    if ( __OFSUB__(-(__int64)p_s2, 1) ) /*0x10027e957*/
    {
      *a1 = 2; /*0x10027e960*/
      a1[1] = v11; /*0x10027e967*/
      goto LABEL_15; /*0x10027e96b*/
    }
    result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10027ea09*/
               __s2,
               __n,
               __s1);
    if ( (_BYTE)result ) /*0x10027ea10*/
    {
      p_s2 = &__s2; /*0x10027ea1a*/
      __s1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10027ea28*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v16, &unk_1017BA8FE, &p_s2); /*0x10027ea41*/
      a1[3] = v16[2]; /*0x10027ea4a*/
      result = v16[0]; /*0x10027ea4e*/
      a1[2] = v16[1]; /*0x10027ea56*/
      a1[1] = result; /*0x10027ea5a*/
      *a1 = 10; /*0x10027ea5e*/
      if ( v10 ) /*0x10027ea68*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x10027ea75*/
      goto LABEL_15; /*0x10027ea75*/
    }
    if ( v10 ) /*0x10027eac1*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x10027ead2*/
  }
  *a1 = 11; /*0x10027e8e7*/
LABEL_15:
  v13 = v18; /*0x10027ea7a*/
  if ( !v18 ) /*0x10027ea81*/
    return result; /*0x10027ea81*/
  v12 = v4; /*0x10027ea88*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v13, 1); /*0x10027ea90*/
}