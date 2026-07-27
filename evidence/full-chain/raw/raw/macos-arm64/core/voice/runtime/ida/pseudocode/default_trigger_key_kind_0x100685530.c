// __ZN13codexmate_lib4core5voice7runtime24default_trigger_key_kind @ 0x100685530 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::default_trigger_key_kind::hf23a6ca5725dd825(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100685539*/
  v2 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100685548*/
  if ( !v2 ) /*0x100685550*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100685586*/
  *v2 = 0x7265696669646F6DLL; /*0x10068555c*/
  *a1 = 8; /*0x10068555f*/
  a1[1] = v2; /*0x100685566*/
  a1[2] = 8; /*0x10068556a*/
  return a1; /*0x100685579*/
}