// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100345d00 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h1eeed7616f7686d3(void *__dst, void *__src)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x100345d11*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345d20*/
  if ( !v2 ) /*0x100345d28*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345df7*/
  v3 = v2; /*0x100345d2e*/
  *v2 = 27503; /*0x100345d31*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345d36*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345d45*/
  if ( !v4 ) /*0x100345d4d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345e08*/
  v5 = v4; /*0x100345d53*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100345d56*/
  *v4 = 1667462483; /*0x100345d5d*/
  memcpy(__dst, __src, 0x280u); /*0x100345d6e*/
  *((_DWORD *)__dst + 178) = 1; /*0x100345d73*/
  *((_BYTE *)__dst + 716) = 1; /*0x100345d7e*/
  *((_QWORD *)__dst + 80) = 2; /*0x100345d86*/
  *((_QWORD *)__dst + 81) = v3; /*0x100345d91*/
  *((_QWORD *)__dst + 82) = 2; /*0x100345d98*/
  *((_QWORD *)__dst + 83) = 7; /*0x100345da3*/
  *((_QWORD *)__dst + 84) = v5; /*0x100345dae*/
  *((_QWORD *)__dst + 85) = 7; /*0x100345db5*/
  *((_QWORD *)__dst + 86) = 0; /*0x100345dc0*/
  *((_QWORD *)__dst + 87) = 8; /*0x100345dcb*/
  *((_QWORD *)__dst + 88) = 0; /*0x100345dd6*/
  return __dst; /*0x100345de4*/
}