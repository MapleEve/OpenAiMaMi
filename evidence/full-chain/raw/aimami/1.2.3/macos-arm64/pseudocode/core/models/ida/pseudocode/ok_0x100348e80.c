// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100348e80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hd65ecbd130151bb9(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100348e90*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100348e9f*/
  if ( !v2 ) /*0x100348ea7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100348f58*/
  v3 = v2; /*0x100348ead*/
  *v2 = 27503; /*0x100348eb0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348eb5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348ec4*/
  if ( !v4 ) /*0x100348ecc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100348f69*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348ed2*/
  *v4 = 1667462483; /*0x100348ed9*/
  qmemcpy((void *)(a1 + 72), a2, 0x48u); /*0x100348eeb*/
  *(_DWORD *)(a1 + 144) = 1; /*0x100348eee*/
  *(_BYTE *)(a1 + 148) = 1; /*0x100348ef9*/
  *(_QWORD *)a1 = 2; /*0x100348f01*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348f08*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100348f0c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100348f14*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100348f1c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100348f20*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348f28*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100348f30*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348f38*/
  return a1; /*0x100348f47*/
}