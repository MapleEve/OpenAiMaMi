// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100346d80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h7ab5ec0371a94489(
        __int64 a1,
        __int64 a2,
        char a3)
{
  _WORD *v4; // rax
  _WORD *v5; // r12
  _DWORD *v6; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100346d93*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100346da2*/
  if ( !v4 ) /*0x100346daa*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100346e48*/
  v5 = v4; /*0x100346db0*/
  *v4 = 27503; /*0x100346db3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100346db8*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100346dc7*/
  if ( !v6 ) /*0x100346dcf*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100346e57*/
  *(_DWORD *)((char *)v6 + 3) = 1936942435; /*0x100346dd1*/
  *v6 = 1667462483; /*0x100346dd8*/
  *(_DWORD *)(a1 + 72) = 1; /*0x100346dde*/
  *(_BYTE *)(a1 + 78) = 1; /*0x100346de6*/
  *(_QWORD *)a1 = 2; /*0x100346deb*/
  *(_QWORD *)(a1 + 8) = v5; /*0x100346df2*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100346df6*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100346dfe*/
  *(_QWORD *)(a1 + 32) = v6; /*0x100346e06*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100346e0a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100346e12*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100346e1a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100346e22*/
  *(_BYTE *)(a1 + 76) = a2; /*0x100346e2a*/
  *(_BYTE *)(a1 + 77) = a3; /*0x100346e2e*/
  return a1; /*0x100346e35*/
}