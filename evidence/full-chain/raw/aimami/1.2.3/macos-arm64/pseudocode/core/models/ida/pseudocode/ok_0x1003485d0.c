// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x1003485d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hbfa1a0d9a3b25d64(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1003485e0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1003485ef*/
  if ( !v2 ) /*0x1003485f7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003486a8*/
  v3 = v2; /*0x1003485fd*/
  *v2 = 27503; /*0x100348600*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100348605*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100348614*/
  if ( !v4 ) /*0x10034861c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1003486b9*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100348622*/
  *v4 = 1667462483; /*0x100348629*/
  qmemcpy((void *)(a1 + 72), a2, 0x68u); /*0x10034863b*/
  *(_DWORD *)(a1 + 176) = 1; /*0x10034863e*/
  *(_BYTE *)(a1 + 180) = 1; /*0x100348649*/
  *(_QWORD *)a1 = 2; /*0x100348651*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100348658*/
  *(_QWORD *)(a1 + 16) = 2; /*0x10034865c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100348664*/
  *(_QWORD *)(a1 + 32) = v4; /*0x10034866c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100348670*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100348678*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100348680*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100348688*/
  return a1; /*0x100348697*/
}