// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100347370 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h82ea1eab7f4abcbc(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100347381*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100347390*/
  if ( !v2 ) /*0x100347398*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10034744c*/
  v3 = v2; /*0x10034739e*/
  *v2 = 27503; /*0x1003473a1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1003473a6*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1003473b5*/
  if ( !v4 ) /*0x1003473bd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034745d*/
  v5 = v4; /*0x1003473c3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1003473c6*/
  *v4 = 1667462483; /*0x1003473cd*/
  memcpy((void *)(a1 + 72), a2, 0xB8u); /*0x1003473df*/
  *(_DWORD *)(a1 + 256) = 1; /*0x1003473e4*/
  *(_BYTE *)(a1 + 260) = 1; /*0x1003473ef*/
  *(_QWORD *)a1 = 2; /*0x1003473f7*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003473fe*/
  *(_QWORD *)(a1 + 16) = 2; /*0x100347402*/
  *(_QWORD *)(a1 + 24) = 7; /*0x10034740a*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100347412*/
  *(_QWORD *)(a1 + 40) = 7; /*0x100347416*/
  *(_QWORD *)(a1 + 48) = 0; /*0x10034741e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100347426*/
  *(_QWORD *)(a1 + 64) = 0; /*0x10034742e*/
  return a1; /*0x100347439*/
}