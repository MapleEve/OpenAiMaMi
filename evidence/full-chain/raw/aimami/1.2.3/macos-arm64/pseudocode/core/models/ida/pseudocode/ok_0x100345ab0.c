// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100345ab0 | 基线 same-set
void *__fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h1661061d85724ddc(__int64 a1, const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12
  void *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345ac1*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345ad0*/
  if ( !v2 ) /*0x100345ad8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345b89*/
  v3 = v2; /*0x100345ade*/
  *v2 = 27503; /*0x100345ae1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345ae6*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345af5*/
  if ( !v4 ) /*0x100345afd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345b9a*/
  v5 = v4; /*0x100345b03*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100345b06*/
  *v4 = 1667462483; /*0x100345b0d*/
  result = memcpy((void *)(a1 + 72), a2, 0x100u); /*0x100345b1f*/
  *(_DWORD *)(a1 + 328) = 1; /*0x100345b24*/
  *(_BYTE *)(a1 + 332) = 1; /*0x100345b2f*/
  *(_QWORD *)a1 = 2; /*0x100345b37*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100345b3e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100345b42*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100345b4a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100345b52*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100345b56*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100345b5e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100345b66*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100345b6e*/
  return result; /*0x100345b76*/
}