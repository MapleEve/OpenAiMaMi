// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347e90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf36b6214f86127c9(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347ea0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100347eaf*/
  if ( !v2 ) /*0x100347eb7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347f68*/
  v3 = v2; /*0x100347ebd*/
  *v2 = 27503; /*0x100347ec0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347ec5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347ed4*/
  if ( !v4 ) /*0x100347edc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100347f79*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347ee2*/
  *v4 = 1667462483; /*0x100347ee9*/
  qmemcpy((void *)(a1 + 72), a2, 0x68u); /*0x100347efb*/
  *(_DWORD *)(a1 + 176) = 1; /*0x100347efe*/
  *(_BYTE *)(a1 + 180) = 1; /*0x100347f09*/
  *(_QWORD *)a1 = 2; /*0x100347f11*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100347f18*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347f1c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100347f24*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100347f2c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347f30*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100347f38*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347f40*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100347f48*/
  return a1; /*0x100347f57*/
}