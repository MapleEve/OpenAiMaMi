// __ZN13codexmate_lib8platform5paths10CodexPaths22with_state_db_override @ 0x100542fc0 | 基线 same-set
void *__fastcall codexmate_lib::platform::paths::CodexPaths::with_state_db_override::h18e8997204347fac(
        void *__dst,
        __int64 a2,
        __int64 *a3)
{
  const void *v4; // r13
  size_t v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD __src[98]; // [rsp+0h] [rbp-310h] BYREF

  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(__src, a2); /*0x100542fe1*/
  v4 = (const void *)a3[1]; /*0x100542fe6*/
  v5 = a3[2]; /*0x100542fea*/
  if ( v5 ) /*0x100542ff1*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, a2); /*0x100542ff3*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100543005*/
    if ( !v6 ) /*0x10054300b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x100543015*/
  }
  else
  {
    v6 = 1; /*0x10054301c*/
  }
  memcpy((void *)v6, v4, v5); /*0x10054302b*/
  if ( __src[12] ) /*0x10054303a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[13], __src[12], 1); /*0x100543048*/
  __src[12] = v5; /*0x10054304d*/
  __src[13] = v6; /*0x100543054*/
  __src[14] = v5; /*0x10054305b*/
  if ( !__OFSUB__(-__src[90], 1) && __src[90] ) /*0x100543072*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[91], __src[90], 1); /*0x10054307d*/
  __src[92] = a3[2]; /*0x100543086*/
  v7 = *a3; /*0x10054308a*/
  __src[91] = a3[1]; /*0x100543091*/
  __src[90] = v7; /*0x100543095*/
  memcpy(__dst, __src, 0x2E8u); /*0x1005430a7*/
  return __dst; /*0x1005430af*/
}