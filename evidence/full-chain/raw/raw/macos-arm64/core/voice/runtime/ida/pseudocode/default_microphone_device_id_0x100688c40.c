// __ZN13codexmate_lib4core5voice7runtime28default_microphone_device_id @ 0x100688c40 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::default_microphone_device_id::h54ee40d9fadece9a(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100688c49*/
  v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100688c58*/
  if ( !v2 ) /*0x100688c60*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100688c95*/
  *(_WORD *)(v2 + 4) = 28005; /*0x100688c62*/
  *(_DWORD *)v2 = 1953724787; /*0x100688c68*/
  *a1 = 6; /*0x100688c6e*/
  a1[1] = v2; /*0x100688c75*/
  a1[2] = 6; /*0x100688c79*/
  return a1; /*0x100688c88*/
}