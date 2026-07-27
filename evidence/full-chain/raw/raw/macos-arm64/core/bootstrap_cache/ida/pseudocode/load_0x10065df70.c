// __ZN13codexmate_lib4core15bootstrap_cache4load @ 0x10065df70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::bootstrap_cache::load::hbe2b23d0f811fb61(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rsi
  _BYTE __dst[1056]; // [rsp+0h] [rbp-8A0h] BYREF
  __int64 v14; // [rsp+420h] [rbp-480h] BYREF
  _QWORD __src[143]; // [rsp+428h] [rbp-478h] BYREF

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v14, a2, a3); /*0x10065df8e*/
  v3 = v14; /*0x10065df93*/
  if ( __OFSUB__(-v14, 1) ) /*0x10065df9d*/
  {
    if ( (__src[0] & 3) == 1 ) /*0x10065dfb1*/
    {
      v4 = __src[0] - 1LL; /*0x10065dfb7*/
      v5 = *(_QWORD *)(__src[0] - 1LL); /*0x10065dfbb*/
      v6 = *(_QWORD *)(__src[0] + 7LL); /*0x10065dfbf*/
      if ( *(_QWORD *)v6 ) /*0x10065dfc3*/
        (*(void (__fastcall **)(__int64))v6)(v5); /*0x10065dfcf*/
      v7 = *(_QWORD *)(v6 + 8); /*0x10065dfd1*/
      if ( v7 ) /*0x10065dfd9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x10065dfe3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 24, 8); /*0x10065dff5*/
    }
    goto LABEL_16; /*0x10065dffa*/
  }
  v8 = __src[0]; /*0x10065dfff*/
  __src[132] = __src[0]; /*0x10065e00d*/
  __src[133] = __src[1]; /*0x10065e011*/
  __src[134] = 0; /*0x10065e015*/
  __src[135] = 0; /*0x10065e01d*/
  __src[136] = __src[0]; /*0x10065e025*/
  __src[137] = __src[1]; /*0x10065e029*/
  serde_json::de::from_trait::h309a570c013ecec9(&v14); /*0x10065e038*/
  v9 = v14; /*0x10065e03d*/
  if ( v14 != 2 ) /*0x10065e048*/
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x10065e09d*/
    if ( !v3 ) /*0x10065e0a5*/
      goto LABEL_15; /*0x10065e0a5*/
    goto LABEL_14; /*0x10065e0a5*/
  }
  v10 = __src[0]; /*0x10065e04a*/
  if ( *(_QWORD *)__src[0] == 1 ) /*0x10065e059*/
  {
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(__src[0] + 8LL); /*0x10065e11f*/
  }
  else if ( !*(_QWORD *)__src[0] ) /*0x10065e051*/
  {
    v11 = *(_QWORD *)(__src[0] + 16LL); /*0x10065e068*/
    if ( v11 ) /*0x10065e070*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(__src[0] + 8LL), v11, 1); /*0x10065e080*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 40, 8); /*0x10065e131*/
  if ( v3 ) /*0x10065e139*/
LABEL_14:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v3, 1); /*0x10065e0a7*/
LABEL_15:
  if ( (_DWORD)v9 != 2 ) /*0x10065e0bb*/
  {
    memcpy(a1 + 1, __dst, 0x418u); /*0x10065e0fd*/
    *a1 = v9; /*0x10065e102*/
    return a1; /*0x10065e102*/
  }
LABEL_16:
  *a1 = 0; /*0x10065e0bd*/
  a1[2] = 3; /*0x10065e0ce*/
  a1[104] = 0x8000000000000000LL; /*0x10065e0d6*/
  a1[116] = 0x8000000000000000LL; /*0x10065e0dd*/
  a1[124] = 0x8000000000000000LL; /*0x10065e0e4*/
  return a1; /*0x10065e108*/
}