// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$16ok_with_warnings @ 0x1003451a0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h3c83c130f697f4cd(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r15
  _DWORD *v6; // rax
  __int64 v7; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003451b4*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003451c3*/
  if ( !v4 ) /*0x1003451cb*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345275*/
  v5 = v4; /*0x1003451d1*/
  *v4 = 27503; /*0x1003451d4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003451d9*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003451e8*/
  if ( !v6 ) /*0x1003451f0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345286*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x1003451f6*/
  *v6 = 1667462483; /*0x1003451fd*/
  *(_QWORD *)(a1 + 64) = a3[2]; /*0x100345207*/
  v7 = *a3; /*0x10034520b*/
  *(_QWORD *)(a1 + 56) = a3[1]; /*0x100345212*/
  *(_QWORD *)(a1 + 48) = v7; /*0x100345216*/
  *(_DWORD *)(a1 + 72) = 1; /*0x10034521a*/
  *(_BYTE *)(a1 + 88) = 1; /*0x100345222*/
  *(_QWORD *)a1 = 2; /*0x100345227*/
  *(_QWORD *)(a1 + 8) = v5; /*0x10034522e*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100345232*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034523a*/
  *(_QWORD *)(a1 + 32) = v6; /*0x100345242*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100345246*/
  *(_QWORD *)(a1 + 76) = *(_QWORD *)a2; /*0x100345252*/
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 8); /*0x10034525b*/
  return a1; /*0x100345262*/
}