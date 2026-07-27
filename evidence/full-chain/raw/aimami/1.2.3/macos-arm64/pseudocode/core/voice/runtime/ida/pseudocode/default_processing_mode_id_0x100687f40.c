// __ZN13codexmate_lib4core5voice7runtime26default_processing_mode_id @ 0x100687f40 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::default_processing_mode_id::h94fdc7014b1d5319(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v2; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100687f49*/
  v2 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100687f58*/
  if ( !v2 ) /*0x100687f60*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100687f8f*/
  *v2 = 1802723700; /*0x100687f62*/
  *a1 = 4; /*0x100687f68*/
  a1[1] = v2; /*0x100687f6f*/
  a1[2] = 4; /*0x100687f73*/
  return a1; /*0x100687f82*/
}