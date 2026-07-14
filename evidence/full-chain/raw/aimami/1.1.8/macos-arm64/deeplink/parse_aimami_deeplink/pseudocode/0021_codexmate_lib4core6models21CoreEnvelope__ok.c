// mac 1.1.8 parse_aimami_deeplink node va=0x1004ba1a0 depth=1
// codexmate_lib4core6models21CoreEnvelope::ok
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h66b389f477f86eef(
        __int64 a1,
        const void *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004ba1b0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1004ba1bf*/
  if ( !v2 ) /*0x1004ba1c7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004ba278*/
  v3 = v2; /*0x1004ba1cd*/
  *v2 = 27503; /*0x1004ba1d0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004ba1d5*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1004ba1e4*/
  if ( !v4 ) /*0x1004ba1ec*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004ba289*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1004ba1f2*/
  *v4 = 1667462483; /*0x1004ba1f9*/
  qmemcpy((void *)(a1 + 72), a2, 0x78u); /*0x1004ba20b*/
  *(_DWORD *)(a1 + 192) = 1; /*0x1004ba20e*/
  *(_BYTE *)(a1 + 196) = 1; /*0x1004ba219*/
  *(_QWORD *)a1 = 2; /*0x1004ba221*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1004ba228*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1004ba22c*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004ba234*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1004ba23c*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004ba240*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004ba248*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004ba250*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004ba258*/
  return a1; /*0x1004ba267*/
}