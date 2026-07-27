// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347ad0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h951a6c24beb81400(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347ae0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100347aef*/
  if ( !v2 ) /*0x100347af7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100347bd0*/
  v3 = v2; /*0x100347afd*/
  *v2 = 27503; /*0x100347b00*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100347b05*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100347b14*/
  if ( !v4 ) /*0x100347b1c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100347be1*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100347b22*/
  *v4 = 1667462483; /*0x100347b29*/
  *(_QWORD *)(a1 + 120) = a2[6]; /*0x100347b33*/
  *(_QWORD *)(a1 + 112) = a2[5]; /*0x100347b3b*/
  *(_QWORD *)(a1 + 104) = a2[4]; /*0x100347b43*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x100347b4b*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x100347b53*/
  v5 = *a2; /*0x100347b57*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x100347b5e*/
  *(_QWORD *)(a1 + 72) = v5; /*0x100347b62*/
  *(_DWORD *)(a1 + 128) = 1; /*0x100347b66*/
  *(_BYTE *)(a1 + 132) = 1; /*0x100347b71*/
  *(_QWORD *)a1 = 2; /*0x100347b79*/
  *(_QWORD *)(a1 + 8) = v3; /*0x100347b80*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347b84*/
  *(_QWORD *)(a1 + 24) = 7; /*0x100347b8c*/
  *(_QWORD *)(a1 + 32) = v4; /*0x100347b94*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347b98*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100347ba0*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347ba8*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100347bb0*/
  return a1; /*0x100347bbf*/
}