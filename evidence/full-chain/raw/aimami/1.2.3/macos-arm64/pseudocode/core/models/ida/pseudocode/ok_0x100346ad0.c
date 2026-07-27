// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346ad0 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h6ed80eeb2754cda9(void *__dst, void *__src)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x100346ae1*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100346af0*/
  if ( !v2 ) /*0x100346af8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346bc7*/
  v3 = v2; /*0x100346afe*/
  *v2 = 27503; /*0x100346b01*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346b06*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346b15*/
  if ( !v4 ) /*0x100346b1d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346bd8*/
  v5 = v4; /*0x100346b23*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100346b26*/
  *v4 = 1667462483; /*0x100346b2d*/
  memcpy(__dst, __src, 0x198u); /*0x100346b3e*/
  *((_DWORD *)__dst + 120) = 1; /*0x100346b43*/
  *((_BYTE *)__dst + 484) = 1; /*0x100346b4e*/
  *((_QWORD *)__dst + 51) = 2; /*0x100346b56*/
  *((_QWORD *)__dst + 52) = v3; /*0x100346b61*/
  *((_QWORD *)__dst + 53) = 2; /*0x100346b68*/
  *((_QWORD *)__dst + 54) = 7; /*0x100346b73*/
  *((_QWORD *)__dst + 55) = v5; /*0x100346b7e*/
  *((_QWORD *)__dst + 56) = 7; /*0x100346b85*/
  *((_QWORD *)__dst + 57) = 0; /*0x100346b90*/
  *((_QWORD *)__dst + 58) = 8; /*0x100346b9b*/
  *((_QWORD *)__dst + 59) = 0; /*0x100346ba6*/
  return __dst; /*0x100346bb4*/
}