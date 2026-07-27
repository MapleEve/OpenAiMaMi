// __ZN13codexmate_lib4core5voice7runtime20default_prompt_sound @ 0x10067eb10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::default_prompt_sound::hdc667015901112c7(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10067eb19*/
  v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10067eb28*/
  if ( !v2 ) /*0x10067eb30*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10067eb65*/
  *(_WORD *)(v2 + 4) = 12914; /*0x10067eb32*/
  *(_DWORD *)v2 = 1702125943; /*0x10067eb38*/
  *a1 = 6; /*0x10067eb3e*/
  a1[1] = v2; /*0x10067eb45*/
  a1[2] = 6; /*0x10067eb49*/
  return a1; /*0x10067eb58*/
}