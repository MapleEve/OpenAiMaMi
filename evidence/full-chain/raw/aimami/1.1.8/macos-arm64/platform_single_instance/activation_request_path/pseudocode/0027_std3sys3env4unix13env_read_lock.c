// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x1010a1b70 depth=4
// std3sys3env4unix13env_read_lock
void *std::sys::env::unix::env_read_lock::hf14baef26d24c6e3()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rtt
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // r12
  signed __int64 v4; // rax
  char *v5; // rsi
  __int64 v6; // r15
  unsigned int v7; // eax
  __int128 v10; // [rsp+0h] [rbp-60h] BYREF
  __int128 v11; // [rsp+10h] [rbp-50h] BYREF
  __int16 v12; // [rsp+20h] [rbp-40h]

  v0 = std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73; /*0x1010a1b81*/
  while ( v0 <= 0xFFFFFFFFFFFFFFEFLL && v0 != 1 && (v0 & 2) == 0 ) /*0x1010a1ba1*/
  {
    v1 = v0; /*0x1010a1bae*/
    v0 = _InterlockedCompareExchange64(&std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73, (v0 | 1) + 16, v0); /*0x1010a1bae*/
    if ( v1 == v0 ) /*0x1010a1bb7*/
      return &unk_1015BB391; /*0x1010a1bb7*/
  }
  v11 = 0; /*0x1010a1bc5*/
  v10 = 0; /*0x1010a1bc9*/
  v12 = 0; /*0x1010a1bcd*/
  v2 = 0; /*0x1010a1bd3*/
  v3 = std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73; /*0x1010a1bd6*/
  while ( (v3 & 2) != 0 || v3 == 1 || v3 >= 0xFFFFFFFFFFFFFFF0LL ) /*0x1010a1c29*/
  {
    if ( v2 < 7 && (v3 & 2) == 0 ) /*0x1010a1c36*/
    {
      v7 = 1; /*0x1010a1d12*/
      do /*0x1010a1d2d*/
        _mm_pause(); /*0x1010a1d20*/
      while ( !(v7++ >> v2) ); /*0x1010a1d2d*/
      v3 = std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73; /*0x1010a1d2f*/
      ++v2; /*0x1010a1d36*/
    }
    else
    {
      if ( !*((_QWORD *)&v11 + 1) ) /*0x1010a1c46*/
        core::cell::once::OnceCell$LT$T$GT$::try_init::hfe7587a34aa06979((char *)&v11 + 8); /*0x1010a1d41*/
      LOBYTE(v12) = 0; /*0x1010a1c59*/
      *(_QWORD *)&v10 = v3 & 0xFFFFFFFFFFFFFFF0LL; /*0x1010a1c5d*/
      *((_QWORD *)&v10 + 1) = 0; /*0x1010a1c61*/
      v5 = (char *)&v10 + (v3 & 9); /*0x1010a1c69*/
      if ( (v3 & 2) != 0 ) /*0x1010a1c72*/
      {
        *(_QWORD *)&v11 = 0; /*0x1010a1c90*/
        v4 = _InterlockedCompareExchange64( /*0x1010a1c9f*/
               &std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73,
               (signed __int64)(v5 + 6),
               v3);
        if ( v3 != v4 ) /*0x1010a1ca8*/
          goto LABEL_9; /*0x1010a1ca8*/
        if ( (v3 & 4) == 0 ) /*0x1010a1cb2*/
          std::sys::sync::rwlock::queue::RwLock::unlock_queue::h3c50b31e38d05741(&std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73); /*0x1010a1cb7*/
LABEL_24:
        while ( !(_BYTE)v12 ) /*0x1010a1d01*/
        {
          v6 = *((_QWORD *)&v11 + 1); /*0x1010a1cc0*/
          if ( !*((_QWORD *)&v11 + 1) ) /*0x1010a1cc7*/
            core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_1015AE2E0); /*0x1010a1d8d*/
          if ( _InterlockedDecrement8((volatile signed __int8 *)(*((_QWORD *)&v11 + 1) + 48LL)) ) /*0x1010a1ccd*/
          {
            while ( dispatch_semaphore_wait(*(dispatch_semaphore_t *)(v6 + 40), 0xFFFFFFFFFFFFFFFFLL) ) /*0x1010a1ceb*/
              ; /*0x1010a1ce0*/
            *(_BYTE *)(v6 + 48) = 0; /*0x1010a1cf7*/
          }
        }
        v3 = std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73; /*0x1010a1d03*/
        v2 = 0; /*0x1010a1d0a*/
      }
      else
      {
        *(_QWORD *)&v11 = &v10; /*0x1010a1c78*/
        v4 = _InterlockedCompareExchange64( /*0x1010a1c7f*/
               &std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73,
               (signed __int64)(v5 + 2),
               v3);
        if ( v3 == v4 ) /*0x1010a1c88*/
          goto LABEL_24; /*0x1010a1c88*/
LABEL_9:
        v3 = v4; /*0x1010a1c0d*/
      }
    }
  }
  v4 = _InterlockedCompareExchange64(&std::sys::env::unix::ENV_LOCK::h979d8deb1dabef73, (v3 | 1) + 16, v3); /*0x1010a1bfe*/
  if ( v3 != v4 ) /*0x1010a1c07*/
    goto LABEL_9; /*0x1010a1c07*/
  if ( *((_QWORD *)&v11 + 1) && !_InterlockedDecrement64(*((volatile signed __int64 **)&v11 + 1)) ) /*0x1010a1d54*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939((__int64 *)&v11 + 1); /*0x1010a1d5d*/
  return &unk_1015BB391; /*0x1010a1d77*/
}