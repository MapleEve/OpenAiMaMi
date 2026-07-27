// __ZN13codexmate_lib4core6models28default_voice_history_status @ 0x100349de0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::models::default_voice_history_status::hfada480c0a75e2cd(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100349de9*/
  v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100349df8*/
  if ( !v2 ) /*0x100349e00*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100349e3a*/
  *(_QWORD *)v2 = 0x6574656C706D6F63LL; /*0x100349e0c*/
  *(_BYTE *)(v2 + 8) = 100; /*0x100349e0f*/
  *a1 = 9; /*0x100349e13*/
  a1[1] = v2; /*0x100349e1a*/
  a1[2] = 9; /*0x100349e1e*/
  return a1; /*0x100349e2d*/
}