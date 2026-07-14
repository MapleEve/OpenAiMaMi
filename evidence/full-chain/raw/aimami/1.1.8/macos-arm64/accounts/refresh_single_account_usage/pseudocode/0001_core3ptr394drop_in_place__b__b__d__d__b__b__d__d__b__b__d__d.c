// mac 1.1.8 refresh_single_account_usage node va=0x1000c59d0 depth=1
// core3ptr394drop_in_place::b::b::d::d::b::b::d::d::b::b::d::d
char __fastcall core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$$LP$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$C$core..option..Option$LT$alloc..string..String$GT$$RP$$C$codexmate_lib..commands..accounts..refresh_single_account_usage..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h5940e93f1a09df11(
        __int64 a1)
{
  int v1; // eax
  volatile signed __int64 *v2; // rbx

  v1 = *(unsigned __int8 *)(a1 + 192); /*0x1000c59d7*/
  if ( *(_BYTE *)(a1 + 192) ) /*0x1000c59d7*/
  {
    if ( v1 == 3 ) /*0x1000c59e5*/
    {
      v2 = *(volatile signed __int64 **)(a1 + 184); /*0x1000c59e7*/
      LOBYTE(v1) = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v2); /*0x1000c59f1*/
      if ( (_BYTE)v1 ) /*0x1000c59f8*/
        LOBYTE(v1) = tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517((__int64)v2); /*0x1000c5a01*/
    }
  }
  else
  {
    LOBYTE(v1) = core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a1); /*0x1000c5a09*/
    if ( *(_QWORD *)(a1 + 152) ) /*0x1000c5a0e*/
      LOBYTE(v1) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000c5a2a*/
  }
  return v1; /*0x1000c59fd*/
}