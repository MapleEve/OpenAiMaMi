// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348d30 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hd5c18ded5ca6dce7(void *__dst, void *__src)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x100348d41*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100348d50*/
  if ( !v2 ) /*0x100348d58*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348e27*/
  v3 = v2; /*0x100348d5e*/
  *v2 = 27503; /*0x100348d61*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348d66*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348d75*/
  if ( !v4 ) /*0x100348d7d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348e38*/
  v5 = v4; /*0x100348d83*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348d86*/
  *v4 = 1667462483; /*0x100348d8d*/
  memcpy(__dst, __src, 0x158u); /*0x100348d9e*/
  *((_DWORD *)__dst + 104) = 1; /*0x100348da3*/
  *((_BYTE *)__dst + 420) = 1; /*0x100348dae*/
  *((_QWORD *)__dst + 43) = 2; /*0x100348db6*/
  *((_QWORD *)__dst + 44) = v3; /*0x100348dc1*/
  *((_QWORD *)__dst + 45) = 2; /*0x100348dc8*/
  *((_QWORD *)__dst + 46) = 7; /*0x100348dd3*/
  *((_QWORD *)__dst + 47) = v5; /*0x100348dde*/
  *((_QWORD *)__dst + 48) = 7; /*0x100348de5*/
  *((_QWORD *)__dst + 49) = 0; /*0x100348df0*/
  *((_QWORD *)__dst + 50) = 8; /*0x100348dfb*/
  *((_QWORD *)__dst + 51) = 0; /*0x100348e06*/
  return __dst; /*0x100348e14*/
}