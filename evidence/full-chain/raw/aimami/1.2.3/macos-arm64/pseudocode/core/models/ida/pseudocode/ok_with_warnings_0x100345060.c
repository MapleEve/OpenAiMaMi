// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$16ok_with_warnings @ 0x100345060 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h2768bb1fcdae0f72(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 *a4)
{
  _WORD *v6; // rax
  _WORD *v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10034507a*/
  v6 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100345089*/
  if ( !v6 ) /*0x100345091*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100345145*/
  v7 = v6; /*0x100345097*/
  *v6 = 27503; /*0x10034509a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x10034509f*/
  v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003450ae*/
  if ( !v8 ) /*0x1003450b6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100345156*/
  *(_DWORD *)((char *)v8 + 3) = 1936942435; /*0x1003450bc*/
  *v8 = 1667462483; /*0x1003450c3*/
  *(_QWORD *)(a1 + 64) = a4[2]; /*0x1003450cd*/
  v9 = *a4; /*0x1003450d2*/
  *(_QWORD *)(a1 + 56) = a4[1]; /*0x1003450d9*/
  *(_QWORD *)(a1 + 48) = v9; /*0x1003450de*/
  *(_DWORD *)(a1 + 72) = 1; /*0x1003450e3*/
  *(_BYTE *)(a1 + 78) = 1; /*0x1003450ec*/
  *(_QWORD *)a1 = 2; /*0x1003450f2*/
  *(_QWORD *)(a1 + 8) = v7; /*0x1003450fa*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003450ff*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100345108*/
  *(_QWORD *)(a1 + 32) = v8; /*0x100345111*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100345116*/
  *(_BYTE *)(a1 + 76) = a2; /*0x10034511f*/
  *(_BYTE *)(a1 + 77) = a3; /*0x100345124*/
  return a1; /*0x100345130*/
}