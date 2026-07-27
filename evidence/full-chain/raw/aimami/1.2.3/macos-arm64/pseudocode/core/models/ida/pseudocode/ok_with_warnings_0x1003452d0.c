// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$16ok_with_warnings @ 0x1003452d0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h509b2971c0829fba(
        _QWORD *__dst,
        void *__src,
        __int64 *a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r15
  _DWORD *v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1003452e7*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003452f6*/
  if ( !v4 ) /*0x1003452fe*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003453dd*/
  v5 = v4; /*0x100345304*/
  *v4 = 27503; /*0x100345307*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x10034530c*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10034531b*/
  if ( !v6 ) /*0x100345323*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003453ee*/
  v7 = v6; /*0x100345329*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x10034532c*/
  *v6 = 1667462483; /*0x100345333*/
  __dst[59] = a3[2]; /*0x10034533d*/
  v8 = *a3; /*0x100345345*/
  __dst[58] = a3[1]; /*0x10034534c*/
  __dst[57] = v8; /*0x100345354*/
  memcpy(__dst, __src, 0x198u); /*0x100345367*/
  *((_DWORD *)__dst + 120) = 1; /*0x10034536c*/
  *((_BYTE *)__dst + 484) = 1; /*0x100345378*/
  __dst[51] = 2; /*0x100345381*/
  __dst[52] = v5; /*0x10034538d*/
  __dst[53] = 2; /*0x100345395*/
  __dst[54] = 7; /*0x1003453a1*/
  __dst[55] = v7; /*0x1003453ad*/
  __dst[56] = 7; /*0x1003453b5*/
  return __dst; /*0x1003453c8*/
}