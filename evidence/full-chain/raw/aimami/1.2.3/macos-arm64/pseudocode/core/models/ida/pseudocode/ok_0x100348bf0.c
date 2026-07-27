// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348bf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hd51e86589713ff9f(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348c00*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100348c0f*/
  if ( !v2 ) /*0x100348c17*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348cd2*/
  v3 = v2; /*0x100348c1d*/
  *v2 = 27503; /*0x100348c20*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348c25*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348c34*/
  if ( !v4 ) /*0x100348c3c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348ce3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348c42*/
  *v4 = 1667462483; /*0x100348c49*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100348c53*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100348c5b*/
  v5 = *a2; /*0x100348c5f*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100348c66*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100348c6a*/
  *(_DWORD *)(a1 + 104) = 1; /*0x100348c6e*/
  *(_BYTE *)(a1 + 108) = 1; /*0x100348c76*/
  *(_QWORD *)a1 = 2; /*0x100348c7b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348c82*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100348c86*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100348c8e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100348c96*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100348c9a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348ca2*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100348caa*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348cb2*/
  return a1; /*0x100348cc1*/
}