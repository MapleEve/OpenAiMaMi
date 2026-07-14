// mac 1.1.8 refresh_single_account_usage node va=0x10042ce50 depth=4
// crossbeam_channel7flavors4zero16Channel::disconnect
int __fastcall crossbeam_channel::flavors::zero::Channel$LT$T$GT$::disconnect::h380411fdcf4c1cc1(__int64 a1)
{
  pthread_mutex_t *v2; // rdi
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v13; // [rsp+0h] [rbp-40h] BYREF
  char v14; // [rsp+8h] [rbp-38h]
  int v15; // [rsp+14h] [rbp-2Ch]

  v2 = *(pthread_mutex_t **)a1; /*0x10042ce64*/
  if ( !v2 ) /*0x10042ce6a*/
    v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f((volatile signed __int64 *)a1); /*0x10042cfa0*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x10042ce70*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x10042ce7f*/
  {
    v3 = 0; /*0x10042ce8b*/
    if ( !*(_BYTE *)(a1 + 8) ) /*0x10042ce8d*/
      goto LABEL_5; /*0x10042ce93*/
LABEL_21:
    v13 = a1; /*0x10042cfbb*/
    v14 = v3; /*0x10042cfbf*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10042cfe0*/
      (__int64)&anon_fa700c1a43d52b7c25cc5c59994db220_159,
      43,
      (__int64)&v13,
      (__int64)&off_101530638,
      (__int64)&off_10152FCF8);
  }
  LOBYTE(v3) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x10042cfad*/
  if ( *(_BYTE *)(a1 + 8) ) /*0x10042cfaf*/
    goto LABEL_21; /*0x10042cfb5*/
LABEL_5:
  v15 = v3; /*0x10042ce99*/
  if ( !*(_BYTE *)(a1 + 112) ) /*0x10042ce9c*/
  {
    *(_BYTE *)(a1 + 112) = 1; /*0x10042cea6*/
    v4 = *(_QWORD *)(a1 + 32); /*0x10042ceaa*/
    if ( v4 ) /*0x10042ceb1*/
    {
      v5 = *(_QWORD *)(a1 + 24); /*0x10042ceb3*/
      v6 = 24 * v4; /*0x10042cebb*/
      v7 = 0; /*0x10042cebf*/
      do /*0x10042ced7*/
      {
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(v5 + v7) + 32LL), 2, 0) ) /*0x10042cedf*/
          std::sys::sync::thread_parking::darwin::Parker::unpark::h1af052e81cf3059c(*(_QWORD *)(*(_QWORD *)(v5 + v7) /*0x10042cef3*/
                                                                                              + 16LL) + 40LL);
        v7 += 24; /*0x10042ced0*/
      }
      while ( v6 != v7 ); /*0x10042ced7*/
    }
    crossbeam_channel::waker::Waker::notify::hc50d0f2545b1f5bf(a1 + 16); /*0x10042cefe*/
    v8 = *(_QWORD *)(a1 + 80); /*0x10042cf03*/
    if ( v8 ) /*0x10042cf0a*/
    {
      v9 = *(_QWORD *)(a1 + 72); /*0x10042cf0c*/
      v10 = 24 * v8; /*0x10042cf14*/
      v11 = 0; /*0x10042cf18*/
      do /*0x10042cf37*/
      {
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(v9 + v11) + 32LL), 2, 0) ) /*0x10042cf3f*/
          std::sys::sync::thread_parking::darwin::Parker::unpark::h1af052e81cf3059c(*(_QWORD *)(*(_QWORD *)(v9 + v11) /*0x10042cf53*/
                                                                                              + 16LL) + 40LL);
        v11 += 24; /*0x10042cf30*/
      }
      while ( v10 != v11 ); /*0x10042cf37*/
    }
    crossbeam_channel::waker::Waker::notify::hc50d0f2545b1f5bf(a1 + 64); /*0x10042cf5e*/
  }
  if ( !(_BYTE)v15 /*0x10042cfe7*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(a1 + 8) = 1; /*0x10042cff0*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x10042cf85*/
}