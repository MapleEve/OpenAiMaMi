// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$16ok_with_warnings @ 0x100345590 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::hd50f06649d211a03(
        _QWORD *__dst,
        void *__src,
        __int64 *a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r15
  _DWORD *v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1003455a7*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003455b6*/
  if ( !v4 ) /*0x1003455be*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034569d*/
  v5 = v4; /*0x1003455c4*/
  *v4 = 27503; /*0x1003455c7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003455cc*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003455db*/
  if ( !v6 ) /*0x1003455e3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003456ae*/
  v7 = v6; /*0x1003455e9*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x1003455ec*/
  *v6 = 1667462483; /*0x1003455f3*/
  __dst[110] = a3[2]; /*0x1003455fd*/
  v8 = *a3; /*0x100345605*/
  __dst[109] = a3[1]; /*0x10034560c*/
  __dst[108] = v8; /*0x100345614*/
  memcpy(__dst, __src, 0x330u); /*0x100345627*/
  *((_DWORD *)__dst + 222) = 1; /*0x10034562c*/
  *((_BYTE *)__dst + 892) = 1; /*0x100345638*/
  __dst[102] = 2; /*0x100345641*/
  __dst[103] = v5; /*0x10034564d*/
  __dst[104] = 2; /*0x100345655*/
  __dst[105] = 7; /*0x100345661*/
  __dst[106] = v7; /*0x10034566d*/
  __dst[107] = 7; /*0x100345675*/
  return __dst; /*0x100345688*/
}