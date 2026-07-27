// __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok @ 0x100349220 | 基线 same-set
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he0c3e5a0a1de9527(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // r12

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349231*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100349240*/
  if ( !v2 ) /*0x100349248*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1003492fc*/
  v3 = v2; /*0x10034924e*/
  *v2 = 27503; /*0x100349251*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100349256*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100349265*/
  if ( !v4 ) /*0x10034926d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10034930d*/
  v5 = v4; /*0x100349273*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x100349276*/
  *v4 = 1667462483; /*0x10034927d*/
  memcpy((void *)(a1 + 72), a2, 0xA8u); /*0x10034928f*/
  *(_DWORD *)(a1 + 240) = 1; /*0x100349294*/
  *(_BYTE *)(a1 + 244) = 1; /*0x10034929f*/
  *(_QWORD *)a1 = 2; /*0x1003492a7*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1003492ae*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1003492b2*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1003492ba*/
  *(_QWORD *)(a1 + 32) = v5; /*0x1003492c2*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1003492c6*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1003492ce*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1003492d6*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1003492de*/
  return a1; /*0x1003492e9*/
}