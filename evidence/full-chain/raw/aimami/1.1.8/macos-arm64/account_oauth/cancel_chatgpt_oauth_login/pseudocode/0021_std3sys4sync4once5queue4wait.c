// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x1010a4560 depth=3
// std3sys4sync4once5queue4wait
signed __int64 __fastcall std::sys::sync::once::queue::wait::h392345492206a66d(
        volatile signed __int64 *a1,
        signed __int64 a2,
        unsigned __int8 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdi
  bool v7; // of
  __int64 v8; // rt0
  volatile signed __int64 *v9; // rdi
  signed __int64 *v10; // rax
  __int64 v11; // rdx
  signed __int64 v12; // rdi
  signed __int64 *v13; // rcx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rax
  signed __int64 result; // rax
  signed __int64 v18; // rtt
  volatile signed __int8 *v19; // r14
  signed __int64 v20; // rbx
  volatile signed __int8 *v21; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-28h]
  char v23; // [rsp+10h] [rbp-20h]

  std::thread::current::CURRENT::h27998f77ab2217d4(); /*0x1010a457d*/
  v6 = *v5; /*0x1010a457f*/
  v7 = __OFSUB__(*v5, 2); /*0x1010a4582*/
  if ( *v5 <= 2u ) /*0x1010a4586*/
  {
    if ( *v5 == 2 ) /*0x1010a4599*/
    {
      std::thread::current::id::ID::h7f955edb6f8bf8b0(); /*0x1010a45a6*/
      v12 = *v10; /*0x1010a45a8*/
      if ( !*v10 ) /*0x1010a45a8*/
      {
        v13 = v10; /*0x1010a45b0*/
        v14 = std::thread::id::ThreadId::new::COUNTER::h744b5cb69c0c863f; /*0x1010a45b3*/
        do /*0x1010a45d7*/
        {
          if ( v14 == -1 ) /*0x1010a45c4*/
            std::thread::id::ThreadId::new::exhausted::hf16f361ce084b02b(v12, a2, v11, v13); /*0x1010a46a9*/
          v12 = v14 + 1; /*0x1010a45ca*/
          v15 = v14; /*0x1010a45ce*/
          v14 = _InterlockedCompareExchange64(&std::thread::id::ThreadId::new::COUNTER::h744b5cb69c0c863f, v14 + 1, v14); /*0x1010a45ce*/
        }
        while ( v15 != v14 ); /*0x1010a45d7*/
        *v13 = v12; /*0x1010a45d9*/
      }
      v21 = (volatile signed __int8 *)0x8000000000000000LL; /*0x1010a45e6*/
      v16 = std::thread::thread::Thread::new::ha0b48c7a72ef1813(v12, &v21); /*0x1010a45ee*/
    }
    else
    {
      v16 = std::thread::current::init_current::hd6a81d13ca34ced7(); /*0x1010a46ae*/
    }
    v9 = (volatile signed __int64 *)v16; /*0x1010a45f3*/
  }
  else
  {
    v8 = _InterlockedIncrement64((volatile signed __int64 *)(v6 - 16)); /*0x1010a4588*/
    if ( (v8 < 0) ^ v7 | (v8 == 0) ) /*0x1010a458d*/
      BUG(); /*0x1010a46b8*/
    v9 = (volatile signed __int64 *)(v6 - 16); /*0x1010a4593*/
  }
  result = a2; /*0x1010a45f6*/
  v21 = (volatile signed __int8 *)v9; /*0x1010a45f9*/
  v23 = 0; /*0x1010a45fd*/
  v22 = 0; /*0x1010a4601*/
  while ( (result & 3) != 0 && (a3 & ((result & 3) == 2)) == 0 ) /*0x1010a462a*/
  {
    v22 = result & 0xFFFFFFFFFFFFFFFCLL; /*0x1010a4633*/
    v18 = result; /*0x1010a463c*/
    result = _InterlockedCompareExchange64(a1, (signed __int64)&v21 + (result & 3), result); /*0x1010a463c*/
    if ( v18 == result ) /*0x1010a4641*/
    {
      while ( !v23 ) /*0x1010a4680*/
      {
        v19 = v21; /*0x1010a4650*/
        if ( _InterlockedDecrement8(v21 + 48) ) /*0x1010a4654*/
        {
          while ( dispatch_semaphore_wait(*((dispatch_semaphore_t *)v19 + 5), 0xFFFFFFFFFFFFFFFFLL) ) /*0x1010a466b*/
            ; /*0x1010a4660*/
          *((_BYTE *)v19 + 48) = 0; /*0x1010a4677*/
        }
      }
      result = *a1; /*0x1010a4682*/
      break; /*0x1010a4682*/
    }
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v21) ) /*0x1010a4689*/
  {
    v20 = result; /*0x1010a4693*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(&v21); /*0x1010a4696*/
    return v20; /*0x1010a469b*/
  }
  return result; /*0x1010a469e*/
}