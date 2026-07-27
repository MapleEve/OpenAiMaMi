// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003460c0 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h381a5be78e361a59(void *__dst, void *__src)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, __src); /*0x1003460d1*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003460e0*/
  if ( !v2 ) /*0x1003460e8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003461b7*/
  v3 = v2; /*0x1003460ee*/
  *v2 = 27503; /*0x1003460f1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003460f6*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346105*/
  if ( !v4 ) /*0x10034610d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003461c8*/
  v5 = v4; /*0x100346113*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100346116*/
  *v4 = 1667462483; /*0x10034611d*/
  memcpy(__dst, __src, 0x1E8u); /*0x10034612e*/
  *((_DWORD *)__dst + 140) = 1; /*0x100346133*/
  *((_BYTE *)__dst + 564) = 1; /*0x10034613e*/
  *((_QWORD *)__dst + 61) = 2; /*0x100346146*/
  *((_QWORD *)__dst + 62) = v3; /*0x100346151*/
  *((_QWORD *)__dst + 63) = 2; /*0x100346158*/
  *((_QWORD *)__dst + 64) = 7; /*0x100346163*/
  *((_QWORD *)__dst + 65) = v5; /*0x10034616e*/
  *((_QWORD *)__dst + 66) = 7; /*0x100346175*/
  *((_QWORD *)__dst + 67) = 0; /*0x100346180*/
  *((_QWORD *)__dst + 68) = 8; /*0x10034618b*/
  *((_QWORD *)__dst + 69) = 0; /*0x100346196*/
  return __dst; /*0x1003461a4*/
}