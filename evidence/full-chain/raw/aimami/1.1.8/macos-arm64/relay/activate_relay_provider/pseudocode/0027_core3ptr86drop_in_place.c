// mac 1.1.8 activate_relay_provider node va=0x1005d58c0 depth=2
// core3ptr86drop_in_place
int __fastcall core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$tauri..window..Window$GT$$GT$::hd68f24e39fd59bd2(
        __int64 a1,
        char a2)
{
  if ( (a2 & 1) != 0 /*0x1005d58e9*/
    || !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6)
    || std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x1005d58db*/
  }
  *(_BYTE *)(a1 + 8) = 1; /*0x1005d58fc*/
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1);
}