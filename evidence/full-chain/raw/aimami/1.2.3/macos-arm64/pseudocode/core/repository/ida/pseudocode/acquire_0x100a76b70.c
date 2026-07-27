// __ZN13codexmate_lib4core10repository16EnrichmentPermit7acquire @ 0x100a76b70
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::EnrichmentPermit::acquire::h96184ef57e3c333b(
        __int64 a1,
        pthread_mutex_t *a2)
{
  pthread_mutex_t *v2; // r15
  _QWORD *v4; // r12
  pthread_cond_t *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  pthread_cond_t **v10; // r13
  pthread_mutex_t *v11; // r14
  signed __int64 v12; // rax
  char v13; // [rsp+14h] [rbp-2Ch]

  v2 = a2; /*0x100a76b81*/
  v4 = (_QWORD *)(a1 + 16); /*0x100a76b8b*/
  v5 = *(pthread_cond_t **)(a1 + 16); /*0x100a76b8f*/
  if ( !v5 ) /*0x100a76b96*/
    v5 = (pthread_cond_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4); /*0x100a76c10*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x100a76b98*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100a76ba7*/
  {
    v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x100a76c1c*/
    v8 = *(_QWORD *)(a1 + 32); /*0x100a76c23*/
    if ( v8 < (unsigned __int64)a2 ) /*0x100a76c2a*/
      goto LABEL_5; /*0x100a76c2a*/
  }
  else
  {
    v13 = 0; /*0x100a76baf*/
    v8 = *(_QWORD *)(a1 + 32); /*0x100a76bba*/
    if ( v8 < (unsigned __int64)a2 ) /*0x100a76bc1*/
      goto LABEL_5; /*0x100a76bc1*/
  }
  v10 = (pthread_cond_t **)(a1 + 40); /*0x100a76c2c*/
  do /*0x100a76c65*/
  {
    v11 = *(pthread_mutex_t **)(a1 + 16); /*0x100a76c30*/
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), (signed __int64)v11, 0); /*0x100a76c36*/
    if ( v12 != 0 && v12 != (_QWORD)v11 ) /*0x100a76c42*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100a76c8c*/
        &anon_338d2c24067067f307e22096ebff88a8_1041,
        109,
        &anon_338d2c24067067f307e22096ebff88a8_1043);
    v5 = *v10; /*0x100a76c49*/
    if ( !*v10 ) /*0x100a76c49*/
      v5 = (pthread_cond_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h4cd5c864b6688978(a1 + 40); /*0x100a76c74*/
    a2 = v11; /*0x100a76c52*/
    pthread_cond_wait(v5, v11); /*0x100a76c55*/
    v8 = *(_QWORD *)(a1 + 32); /*0x100a76c5e*/
  }
  while ( v8 >= (unsigned __int64)v2 ); /*0x100a76c65*/
LABEL_5:
  *(_QWORD *)(a1 + 32) = v8 + 1; /*0x100a76bc3*/
  if ( !v13 /*0x100a76c93*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v5,
                           a2,
                           v6,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(a1 + 24) = 1; /*0x100a76ca0*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100a76bf1*/
  return a1; /*0x100a76bf9*/
}