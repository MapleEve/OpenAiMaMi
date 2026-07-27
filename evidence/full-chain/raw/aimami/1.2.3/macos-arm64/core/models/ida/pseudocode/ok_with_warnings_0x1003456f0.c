// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$16ok_with_warnings @ 0x1003456f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::he5e6cf309da90506(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r15
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100345704*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345713*/
  if ( !v4 ) /*0x10034571b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003457eb*/
  v5 = v4; /*0x100345721*/
  *v4 = 27503; /*0x100345724*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100345729*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100345738*/
  if ( !v6 ) /*0x100345740*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003457fc*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x100345746*/
  *v6 = 1667462483; /*0x10034574d*/
  *(_QWORD *)(a1 + 64) = a3[2]; /*0x100345757*/
  v7 = *a3; /*0x10034575c*/
  *(_QWORD *)(a1 + 56) = a3[1]; /*0x100345763*/
  *(_QWORD *)(a1 + 48) = v7; /*0x100345768*/
  v8 = a2[1]; /*0x100345770*/
  *(_QWORD *)(a1 + 72) = *a2; /*0x100345774*/
  *(_QWORD *)(a1 + 80) = v8; /*0x100345779*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100345782*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x10034578b*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x100345794*/
  *(_DWORD *)(a1 + 112) = 1; /*0x100345799*/
  *(_BYTE *)(a1 + 116) = 1; /*0x1003457a2*/
  *(_QWORD *)a1 = 2; /*0x1003457a8*/
  *(_QWORD *)(a1 + 8) = v5; /*0x1003457b0*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003457b5*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003457be*/
  *(_QWORD *)(a1 + 32) = v6; /*0x1003457c7*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003457cc*/
  return a1; /*0x1003457d8*/
}