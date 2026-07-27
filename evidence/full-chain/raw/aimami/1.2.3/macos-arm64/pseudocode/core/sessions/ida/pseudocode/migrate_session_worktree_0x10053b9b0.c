// __ZN13codexmate_lib4core8sessions24migrate_session_worktree28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10053b9b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::sessions::migrate_session_worktree::_$u7b$$u7b$closure$u7d$$u7d$::hef2c1044127fb04b(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10053b9b9*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x10053b9c8*/
  if ( !result ) /*0x10053b9d0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x10053ba31*/
  *(_QWORD *)(result + 24) = 0xA7E781BFE8A885E5LL; /*0x10053b9dc*/
  *(_QWORD *)(result + 16) = 0x89AEE5BD83E88DB8LL; /*0x10053b9ea*/
  *(_QWORD *)(result + 8) = 0xE48D89E593BDE58BLL; /*0x10053b9f8*/
  *(_QWORD *)result = 0xA8E7BFBAE7A5AFE8LL; /*0x10053ba06*/
  *(_BYTE *)(result + 32) = -69; /*0x10053ba09*/
  *a1 = 33; /*0x10053ba0d*/
  a1[1] = result; /*0x10053ba14*/
  a1[2] = 33; /*0x10053ba18*/
  return result; /*0x10053ba24*/
}