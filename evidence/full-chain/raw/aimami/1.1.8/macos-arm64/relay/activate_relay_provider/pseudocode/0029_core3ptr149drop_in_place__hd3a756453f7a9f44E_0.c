// mac 1.1.8 activate_relay_provider node va=0x1005d70b0 depth=2
// core3ptr149drop_in_place::hd3a756453f7a9f44E_0
int __fastcall core::ptr::drop_in_place$LT$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..relay..models..RelayState$GT$$GT$$GT$::hd3a756453f7a9f44(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1; /*0x1005d70b6*/
  if ( !*((_BYTE *)a1 + 8) /*0x1005d70df*/
    && 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(v1 + 8) = 1; /*0x1005d70e8*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)v1); /*0x1005d70d8*/
}