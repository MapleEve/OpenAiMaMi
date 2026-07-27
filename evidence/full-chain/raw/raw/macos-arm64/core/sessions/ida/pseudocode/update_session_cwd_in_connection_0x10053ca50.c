// __ZN13codexmate_lib4core8sessions32update_session_cwd_in_connection28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10053ca50 | 基线 same-set
_DWORD *__fastcall codexmate_lib::core::sessions::update_session_cwd_in_connection::_$u7b$$u7b$closure$u7d$$u7d$::h5b30e6150e075785(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10053ca59*/
  result = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10053ca68*/
  if ( !result ) /*0x10053ca70*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10053caa3*/
  *(_DWORD *)((char *)result + 3) = 1048147056; /*0x10053ca72*/
  *result = 1886217532; /*0x10053ca79*/
  *a1 = 7; /*0x10053ca7f*/
  a1[1] = result; /*0x10053ca86*/
  a1[2] = 7; /*0x10053ca8a*/
  return result; /*0x10053ca96*/
}