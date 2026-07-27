// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003470f0 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8071e308383cb2e5(void *__dst, void *__src)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x100347101*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100347110*/
  if ( !v2 ) /*0x100347118*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003471e7*/
  v3 = v2; /*0x10034711e*/
  *v2 = 27503; /*0x100347121*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347126*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347135*/
  if ( !v4 ) /*0x10034713d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003471f8*/
  v5 = v4; /*0x100347143*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347146*/
  *v4 = 1667462483; /*0x10034714d*/
  memcpy(__dst, __src, 0x150u); /*0x10034715e*/
  *((_DWORD *)__dst + 102) = 1; /*0x100347163*/
  *((_BYTE *)__dst + 412) = 1; /*0x10034716e*/
  *((_QWORD *)__dst + 42) = 2; /*0x100347176*/
  *((_QWORD *)__dst + 43) = v3; /*0x100347181*/
  *((_QWORD *)__dst + 44) = 2; /*0x100347188*/
  *((_QWORD *)__dst + 45) = 7; /*0x100347193*/
  *((_QWORD *)__dst + 46) = v5; /*0x10034719e*/
  *((_QWORD *)__dst + 47) = 7; /*0x1003471a5*/
  *((_QWORD *)__dst + 48) = 0; /*0x1003471b0*/
  *((_QWORD *)__dst + 49) = 8; /*0x1003471bb*/
  *((_QWORD *)__dst + 50) = 0; /*0x1003471c6*/
  return __dst; /*0x1003471d4*/
}