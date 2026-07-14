// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x1004baf10 depth=1
// codexmate_lib4core6models21CoreEnvelope::ok
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hba69220fb8456af3(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004baf20*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1004baf2f*/
  if ( !v2 ) /*0x1004baf37*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004bafe8*/
  v3 = v2; /*0x1004baf3d*/
  *v2 = 27503; /*0x1004baf40*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004baf45*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1004baf54*/
  if ( !v4 ) /*0x1004baf5c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004baff9*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1004baf62*/
  *v4 = 1667462483; /*0x1004baf69*/
  qmemcpy((void *)(a1 + 72), a2, 0x58u); /*0x1004baf7b*/
  *(_DWORD *)(a1 + 160) = 1; /*0x1004baf7e*/
  *(_BYTE *)(a1 + 164) = 1; /*0x1004baf89*/
  *(_QWORD *)a1 = 2; /*0x1004baf91*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1004baf98*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1004baf9c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004bafa4*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1004bafac*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004bafb0*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004bafb8*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004bafc0*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004bafc8*/
  return a1; /*0x1004bafd7*/
}