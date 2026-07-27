// __ZN13codexmate_lib4core5voice7runtime28default_recognition_language @ 0x100688ca0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::default_recognition_language::hfddfb9bf31265721(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v2; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100688ca9*/
  v2 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100688cb8*/
  if ( !v2 ) /*0x100688cc0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100688cef*/
  *v2 = 1869903201; /*0x100688cc2*/
  *a1 = 4; /*0x100688cc8*/
  a1[1] = v2; /*0x100688ccf*/
  a1[2] = 4; /*0x100688cd3*/
  return a1; /*0x100688ce2*/
}