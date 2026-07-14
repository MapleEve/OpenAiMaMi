// mac 1.1.8 switch_account_and_restart_codex node va=0x10042b6f0 depth=4
// crossbeam_channel5waker9SyncWaker10disconnect
int __fastcall crossbeam_channel::waker::SyncWaker::disconnect::h71459179ce7b84f1(__int64 a1)
{
  pthread_mutex_t *v2; // rdi
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  char v8; // cl
  __int64 v10; // [rsp+0h] [rbp-40h] BYREF
  char v11; // [rsp+8h] [rbp-38h]
  int v12; // [rsp+14h] [rbp-2Ch]

  v2 = *(pthread_mutex_t **)a1; /*0x10042b704*/
  if ( !v2 ) /*0x10042b70a*/
    v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f((volatile signed __int64 *)a1); /*0x10042b7ee*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x10042b710*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x10042b71f*/
  {
    v3 = 0; /*0x10042b72b*/
    if ( !*(_BYTE *)(a1 + 8) ) /*0x10042b72d*/
      goto LABEL_5; /*0x10042b733*/
LABEL_17:
    v10 = a1; /*0x10042b809*/
    v11 = v3; /*0x10042b80d*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10042b82e*/
      (__int64)&anon_fa700c1a43d52b7c25cc5c59994db220_159,
      43,
      (__int64)&v10,
      (__int64)&off_101530618,
      (__int64)&off_10152FC20);
  }
  LOBYTE(v3) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x10042b7fb*/
  if ( *(_BYTE *)(a1 + 8) ) /*0x10042b7fd*/
    goto LABEL_17; /*0x10042b803*/
LABEL_5:
  v12 = v3; /*0x10042b739*/
  v4 = *(_QWORD *)(a1 + 32); /*0x10042b73c*/
  if ( v4 ) /*0x10042b743*/
  {
    v5 = *(_QWORD *)(a1 + 24); /*0x10042b745*/
    v6 = 24 * v4; /*0x10042b74d*/
    v7 = 0; /*0x10042b751*/
    do /*0x10042b767*/
    {
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(v5 + v7) + 32LL), 2, 0) ) /*0x10042b76f*/
        std::sys::sync::thread_parking::darwin::Parker::unpark::h1af052e81cf3059c(*(_QWORD *)(*(_QWORD *)(v5 + v7) + 16LL) + 40LL); /*0x10042b783*/
      v7 += 24; /*0x10042b760*/
    }
    while ( v6 != v7 ); /*0x10042b767*/
  }
  crossbeam_channel::waker::Waker::notify::hc50d0f2545b1f5bf(a1 + 16); /*0x10042b78e*/
  v8 = v12; /*0x10042b798*/
  if ( *(_QWORD *)(a1 + 32) ) /*0x10042b793*/
  {
    *(_BYTE *)(a1 + 64) = 0; /*0x10042b79f*/
    if ( v8 ) /*0x10042b7a4*/
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x10042b7a4*/
  }
  else
  {
    *(_BYTE *)(a1 + 64) = *(_QWORD *)(a1 + 56) == 0; /*0x10042b7b0*/
    if ( v8 ) /*0x10042b7b5*/
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x10042b7b5*/
  }
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10042b835*/
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x10042b83e*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x10042b7d3*/
}