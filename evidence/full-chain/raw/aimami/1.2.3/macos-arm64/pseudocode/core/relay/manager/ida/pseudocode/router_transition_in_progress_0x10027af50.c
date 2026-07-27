// __ZN13codexmate_lib4core5relay7manager12RelayManager29router_transition_in_progress @ 0x10027af50
char __fastcall codexmate_lib::core::relay::manager::RelayManager::router_transition_in_progress::ha887099746f9e103(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r14
  char v9; // al

  v2 = *(_QWORD *)(a1 + 32); /*0x10027af5b*/
  v3 = *(_QWORD *)(v2 + 16); /*0x10027af5f*/
  if ( v3 ) /*0x10027af66*/
  {
    v4 = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v3); /*0x10027af68*/
    if ( !v4 ) /*0x10027af6f*/
      return v4 ^ 1; /*0x10027af6f*/
  }
  else
  {
    v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v2 + 16); /*0x10027afc0*/
    v4 = std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v3); /*0x10027afc3*/
    if ( !v4 ) /*0x10027afca*/
      return v4 ^ 1; /*0x10027afca*/
  }
  v7 = v4; /*0x10027af71*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) /*0x10027afdb*/
    || (v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v5, v6),
        v6 = *(unsigned __int8 *)(v2 + 24),
        v9) )
  {
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10027afdf*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v5, v6) )
    {
      *(_BYTE *)(v2 + 24) = 1; /*0x10027afe8*/
    }
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v2 + 16)); /*0x10027afa4*/
  v4 = v7; /*0x10027afa9*/
  return v4 ^ 1; /*0x10027afae*/
}