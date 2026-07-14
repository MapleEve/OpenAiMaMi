__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h220e764405a9ae33(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r15
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1004b9a80*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004b9a8f*/
  if ( !v2 ) /*0x1004b9a97*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004b9b3f*/
  v3 = v2; /*0x1004b9a9d*/
  *v2 = 27503; /*0x1004b9aa0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1004b9aa5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004b9ab4*/
  if ( !v4 ) /*0x1004b9abc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004b9b4e*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1004b9ac2*/
  *v4 = 1667462483; /*0x1004b9ac9*/
  *(_DWORD *)(a1 + 72) = 1; /*0x1004b9acf*/
  *(_BYTE *)(a1 + 88) = 1; /*0x1004b9ad6*/
  *(_QWORD *)a1 = 2; /*0x1004b9ada*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1004b9ae1*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1004b9ae5*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004b9aed*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1004b9af5*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004b9af9*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004b9b01*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004b9b09*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004b9b11*/
  *(_QWORD *)(a1 + 76) = *(_QWORD *)a2; /*0x1004b9b1c*/
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 8); /*0x1004b9b24*/
  return a1; /*0x1004b9b2e*/
}