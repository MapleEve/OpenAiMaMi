// mac 1.1.8 force_kill_codex node va=0x1004ba2d0 depth=1
// codexmate_lib4core6models21CoreEnvelope::ok
__int64 __fastcall codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h908b53d4c3a52143(__int64 a1, __int64 *a2)
{
  _WORD *v2; // rax
  _WORD *v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004ba2e0*/
  v2 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1004ba2ef*/
  if ( !v2 ) /*0x1004ba2f7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004ba3b2*/
  v3 = v2; /*0x1004ba2fd*/
  *v2 = 27503; /*0x1004ba300*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004ba305*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1004ba314*/
  if ( !v4 ) /*0x1004ba31c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004ba3c3*/
  *(_DWORD *)((char *)v4 + 3) = 1936942435; /*0x1004ba322*/
  *v4 = 1667462483; /*0x1004ba329*/
  *(_QWORD *)(a1 + 96) = a2[3]; /*0x1004ba333*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1004ba33b*/
  v5 = *a2; /*0x1004ba33f*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x1004ba346*/
  *(_QWORD *)(a1 + 72) = v5; /*0x1004ba34a*/
  *(_DWORD *)(a1 + 104) = 1; /*0x1004ba34e*/
  *(_BYTE *)(a1 + 108) = 1; /*0x1004ba356*/
  *(_QWORD *)a1 = 2; /*0x1004ba35b*/
  *(_QWORD *)(a1 + 8) = v3; /*0x1004ba362*/
  *(_QWORD *)(a1 + 16) = 2; /*0x1004ba366*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004ba36e*/
  *(_QWORD *)(a1 + 32) = v4; /*0x1004ba376*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004ba37a*/
  *(_QWORD *)(a1 + 48) = 0; /*0x1004ba382*/
  *(_QWORD *)(a1 + 56) = 8; /*0x1004ba38a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x1004ba392*/
  return a1; /*0x1004ba3a1*/
}