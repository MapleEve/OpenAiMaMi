// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003465d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h4aff26dd8bdfc5b9(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003465e0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003465ef*/
  if ( !v2 ) /*0x1003465f7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003466db*/
  v3 = v2; /*0x1003465fd*/
  *v2 = 27503; /*0x100346600*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346605*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346614*/
  if ( !v4 ) /*0x10034661c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003466ec*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100346622*/
  *v4 = 1667462483; /*0x100346629*/
  *(_QWORD *)(a1 + 128) = a2[7]; /*0x100346633*/
  *(_QWORD *)(a1 + 120) = a2[6]; /*0x10034663e*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x100346646*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x10034664e*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100346656*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x10034665e*/
  v5 = *a2; /*0x100346662*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100346669*/
  *(_QWORD *)(a1 + 72) = v5; /*0x10034666d*/
  *(_DWORD *)(a1 + 136) = 1; /*0x100346671*/
  *(_BYTE *)(a1 + 140) = 1; /*0x10034667c*/
  *(_QWORD *)a1 = 2; /*0x100346684*/
  *(_QWORD *)(a1 + 8) = v3; /*0x10034668b*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10034668f*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100346697*/
  *(_QWORD *)(a1 + 32) = v4; /*0x10034669f*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003466a3*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003466ab*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003466b3*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003466bb*/
  return a1; /*0x1003466ca*/
}