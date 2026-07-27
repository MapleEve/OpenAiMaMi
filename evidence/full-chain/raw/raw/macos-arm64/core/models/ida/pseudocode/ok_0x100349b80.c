// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349b80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8b2d11717eab909(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349b90*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100349b9f*/
  if ( !v2 ) /*0x100349ba7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100349c8b*/
  v3 = v2; /*0x100349bad*/
  *v2 = 27503; /*0x100349bb0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349bb5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349bc4*/
  if ( !v4 ) /*0x100349bcc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100349c9c*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349bd2*/
  *v4 = 1667462483; /*0x100349bd9*/
  *(_QWORD *)(a1 + 128) = a2[7]; /*0x100349be3*/
  *(_QWORD *)(a1 + 120) = a2[6]; /*0x100349bee*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x100349bf6*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x100349bfe*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100349c06*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100349c0e*/
  v5 = *a2; /*0x100349c12*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100349c19*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100349c1d*/
  *(_DWORD *)(a1 + 136) = 1; /*0x100349c21*/
  *(_BYTE *)(a1 + 140) = 1; /*0x100349c2c*/
  *(_QWORD *)a1 = 2; /*0x100349c34*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100349c3b*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100349c3f*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100349c47*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100349c4f*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100349c53*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100349c5b*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100349c63*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100349c6b*/
  return a1; /*0x100349c7a*/
}