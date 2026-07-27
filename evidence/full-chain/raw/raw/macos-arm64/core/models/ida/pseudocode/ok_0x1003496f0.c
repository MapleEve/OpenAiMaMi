// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003496f0 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(void *__dst, void *__src)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x100349701*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100349710*/
  if ( !v2 ) /*0x100349718*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003497e7*/
  v3 = v2; /*0x10034971e*/
  *v2 = 27503; /*0x100349721*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349726*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349735*/
  if ( !v4 ) /*0x10034973d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003497f8*/
  v5 = v4; /*0x100349743*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349746*/
  *v4 = 1667462483; /*0x10034974d*/
  memcpy(__dst, __src, 0x2C8u); /*0x10034975e*/
  *((_DWORD *)__dst + 196) = 1; /*0x100349763*/
  *((_BYTE *)__dst + 788) = 1; /*0x10034976e*/
  *((_QWORD *)__dst + 89) = 2; /*0x100349776*/
  *((_QWORD *)__dst + 90) = v3; /*0x100349781*/
  *((_QWORD *)__dst + 91) = 2; /*0x100349788*/
  *((_QWORD *)__dst + 92) = 7; /*0x100349793*/
  *((_QWORD *)__dst + 93) = v5; /*0x10034979e*/
  *((_QWORD *)__dst + 94) = 7; /*0x1003497a5*/
  *((_QWORD *)__dst + 95) = 0; /*0x1003497b0*/
  *((_QWORD *)__dst + 96) = 8; /*0x1003497bb*/
  *((_QWORD *)__dst + 97) = 0; /*0x1003497c6*/
  return __dst; /*0x1003497d4*/
}