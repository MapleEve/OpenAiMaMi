// mac 1.1.8 confirm_pending_auto_switch_and_restart_codex node va=0x100f486a0 depth=1
// tokio7runtime4task5state5State21drop_join_handle_fast
bool __fastcall tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(
        volatile signed __int64 *a1)
{
  return _InterlockedCompareExchange64(a1, 132, 204) != 204; /*0x100f486b6*/
}