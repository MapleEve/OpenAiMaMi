// mac 1.1.8 refresh_usage_snapshot node va=0x1004b9410 depth=2
// codexmate_lib4core6models21CoreEnvelope::ok_with_warnings
_QWORD *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h15c73cdffbf317c8(
        _QWORD *__dst,
        void *__src,
        __int64 *a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r15
  _DWORD *v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004b9427*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1004b9436*/
  if ( !v4 ) /*0x1004b943e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004b951d*/
  v5 = v4; /*0x1004b9444*/
  *v4 = 27503; /*0x1004b9447*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004b944c*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1004b945b*/
  if ( !v6 ) /*0x1004b9463*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004b952e*/
  v7 = v6; /*0x1004b9469*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x1004b946c*/
  *v6 = 1667462483; /*0x1004b9473*/
  __dst[93] = a3[2]; /*0x1004b947d*/
  v8 = *a3; /*0x1004b9485*/
  __dst[92] = a3[1]; /*0x1004b948c*/
  __dst[91] = v8; /*0x1004b9494*/
  memcpy(__dst, __src, 0x2A8u); /*0x1004b94a7*/
  *((_DWORD *)__dst + 188) = 1; /*0x1004b94ac*/
  *((_BYTE *)__dst + 756) = 1; /*0x1004b94b8*/
  __dst[85] = 2; /*0x1004b94c1*/
  __dst[86] = v5; /*0x1004b94cd*/
  __dst[87] = 2; /*0x1004b94d5*/
  __dst[88] = 7; /*0x1004b94e1*/
  __dst[89] = v7; /*0x1004b94ed*/
  __dst[90] = 7; /*0x1004b94f5*/
  return __dst; /*0x1004b9508*/
}