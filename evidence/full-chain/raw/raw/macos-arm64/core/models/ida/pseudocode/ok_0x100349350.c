// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349350 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he176b04205f9453b(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349360*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10034936f*/
  if ( !v2 ) /*0x100349377*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100349428*/
  v3 = v2; /*0x10034937d*/
  *v2 = 27503; /*0x100349380*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349385*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349394*/
  if ( !v4 ) /*0x10034939c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100349439*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003493a2*/
  *v4 = 1667462483; /*0x1003493a9*/
  qmemcpy((void *)(a1 + 72), a2, 0x70u); /*0x1003493bb*/
  *(_DWORD *)(a1 + 184) = 1; /*0x1003493be*/
  *(_BYTE *)(a1 + 188) = 1; /*0x1003493c9*/
  *(_QWORD *)a1 = 2; /*0x1003493d1*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003493d8*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003493dc*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003493e4*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1003493ec*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003493f0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003493f8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100349400*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100349408*/
  return a1; /*0x100349417*/
}