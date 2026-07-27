// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003495b0 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he470c5dea3c06c27(void *__dst, void *__src)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1003495c1*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003495d0*/
  if ( !v2 ) /*0x1003495d8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003496a7*/
  v3 = v2; /*0x1003495de*/
  *v2 = 27503; /*0x1003495e1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003495e6*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003495f5*/
  if ( !v4 ) /*0x1003495fd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003496b8*/
  v5 = v4; /*0x100349603*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349606*/
  *v4 = 1667462483; /*0x10034960d*/
  memcpy(__dst, __src, 0x420u); /*0x10034961e*/
  *((_DWORD *)__dst + 282) = 1; /*0x100349623*/
  *((_BYTE *)__dst + 1132) = 1; /*0x10034962e*/
  *((_QWORD *)__dst + 132) = 2; /*0x100349636*/
  *((_QWORD *)__dst + 133) = v3; /*0x100349641*/
  *((_QWORD *)__dst + 134) = 2; /*0x100349648*/
  *((_QWORD *)__dst + 135) = 7; /*0x100349653*/
  *((_QWORD *)__dst + 136) = v5; /*0x10034965e*/
  *((_QWORD *)__dst + 137) = 7; /*0x100349665*/
  *((_QWORD *)__dst + 138) = 0; /*0x100349670*/
  *((_QWORD *)__dst + 139) = 8; /*0x10034967b*/
  *((_QWORD *)__dst + 140) = 0; /*0x100349686*/
  return __dst; /*0x100349694*/
}