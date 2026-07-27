// __ZN13codexmate_lib4core10repository10Repository24load_pending_auto_switch @ 0x100a5e410 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_pending_auto_switch::h6842d236c81b2905(
        _QWORD *__dst,
        __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // rsi
  _QWORD __src[91]; // [rsp+8h] [rbp-328h] BYREF
  _QWORD v15[10]; // [rsp+2E0h] [rbp-50h] BYREF

  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, *(_QWORD *)(a2 + 488), *(_QWORD *)(a2 + 496)); /*0x100a5e43d*/
  v2 = __src[0]; /*0x100a5e442*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x100a5e44c*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x100a5e460*/
    {
      v3 = __src[1] - 1LL; /*0x100a5e462*/
      v4 = *(_QWORD *)(__src[1] - 1LL); /*0x100a5e466*/
      v5 = *(_QWORD *)(__src[1] + 7LL); /*0x100a5e46a*/
      if ( *(_QWORD *)v5 ) /*0x100a5e46e*/
        (*(void (__fastcall **)(__int64))v5)(v4); /*0x100a5e47a*/
      v6 = *(_QWORD *)(v5 + 8); /*0x100a5e47c*/
      if ( v6 ) /*0x100a5e484*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x100a5e48e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x100a5e4a0*/
    }
    *__dst = 2; /*0x100a5e4a5*/
    return __dst; /*0x100a5e4ac*/
  }
  v7 = __src[1]; /*0x100a5e4b1*/
  v15[0] = __src[1]; /*0x100a5e4bf*/
  v15[1] = __src[2]; /*0x100a5e4c3*/
  v15[2] = 0; /*0x100a5e4c7*/
  v15[3] = 0; /*0x100a5e4cf*/
  v15[4] = __src[1]; /*0x100a5e4d7*/
  v15[5] = __src[2]; /*0x100a5e4db*/
  serde_json::de::from_trait::h24c3fb775a39dbbf(__src); /*0x100a5e4ea*/
  if ( LODWORD(__src[0]) != 2 ) /*0x100a5e4f6*/
  {
    memcpy(__dst, __src, 0x2D8u); /*0x100a5e53f*/
    if ( !v2 ) /*0x100a5e547*/
      return __dst; /*0x100a5e547*/
LABEL_15:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v2, 1); /*0x100a5e549*/
    return __dst; /*0x100a5e554*/
  }
  *__dst = 2; /*0x100a5e4f8*/
  v11 = __src[1]; /*0x100a5e4ff*/
  if ( *(_QWORD *)__src[1] == 1 ) /*0x100a5e50e*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(__src[1] + 8LL, v15, v8, v9, v10); /*0x100a5e571*/
  }
  else if ( !*(_QWORD *)__src[1] ) /*0x100a5e506*/
  {
    v12 = *(_QWORD *)(__src[1] + 16LL); /*0x100a5e515*/
    if ( v12 ) /*0x100a5e51d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(__src[1] + 8LL), v12, 1); /*0x100a5e529*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 40, 8); /*0x100a5e583*/
  if ( v2 ) /*0x100a5e58b*/
    goto LABEL_15; /*0x100a5e58b*/
  return __dst; /*0x100a5e55c*/
}