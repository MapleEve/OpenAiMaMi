// mac 1.1.8 BEHAVIORAL-BACKEND check_daemon_state node 0x101129e40 depth=1
// std3sys4sync4once5queue4Once4call
signed __int64 __fastcall std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c(
        volatile signed __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  signed __int64 result; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rcx
  bool v10; // cl
  __int64 v11; // r8
  __int64 v12; // rax
  signed __int64 v13; // r14
  volatile signed __int64 *v14; // r15
  char v15; // al
  signed __int64 v16; // rtt
  __int64 v17; // r13
  _QWORD v18[2]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+10h] [rbp-40h]
  volatile signed __int64 *v20; // [rsp+18h] [rbp-38h] BYREF
  bool v21; // [rsp+20h] [rbp-30h]

  result = *a1; /*0x101129e5a*/
  if ( !a2 ) /*0x101129e5f*/
  {
    while ( 2 ) /*0x101129f8c*/
    {
      switch ( result & 3 ) /*0x101129f8c*/
      {
        case 0LL: /*0x101129f8c*/
          return result;
        case 1LL: /*0x101129f8c*/
          while ( 2 ) /*0x101129f99*/
          {
            v17 = a5; /*0x101129f99*/
            result = std::sys::sync::once::queue::wait::h392345492206a66d(a1, result, 1); /*0x101129f9c*/
            a5 = v17; /*0x101129fa1*/
            switch ( result & 3 ) /*0x101129fb0*/
            {
              case 0LL: /*0x101129fb0*/
                return result;
              case 1LL: /*0x101129fb0*/
                continue;
              case 2LL: /*0x101129fb0*/
                goto LABEL_24;
              case 3LL: /*0x101129fb0*/
                goto LABEL_18;
            }
          }
        case 2LL: /*0x101129f8c*/
LABEL_24:
          core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)"Once instance has previously been poisoned", 85, a5); /*0x101129fde*/
        case 3LL: /*0x101129f8c*/
LABEL_18:
          v10 = 0; /*0x101129f69*/
          v16 = result; /*0x101129f75*/
          result = _InterlockedCompareExchange64(a1, (result & 0xFFFFFFFFFFFFFFFCLL) + 1, result); /*0x101129f75*/
          if ( v16 != result ) /*0x101129f7a*/
            continue; /*0x101129f7a*/
          goto LABEL_8; /*0x101129f7a*/
      }
    }
  }
  do /*0x101129e7f*/
  {
    while ( 1 ) /*0x101129e83*/
    {
      v9 = result & 3; /*0x101129e83*/
      if ( (unsigned __int64)(v9 - 2) < 2 ) /*0x101129e8e*/
        break; /*0x101129e8e*/
      if ( (_DWORD)v9 != 1 ) /*0x101129e93*/
        return result; /*0x101129e93*/
      result = std::sys::sync::once::queue::wait::h392345492206a66d(a1, result, 1); /*0x101129ea4*/
    }
    v8 = result; /*0x101129e7a*/
    result = _InterlockedCompareExchange64(a1, (result & 0xFFFFFFFFFFFFFFFCLL) + 1, result); /*0x101129e7a*/
  }
  while ( v8 != result ); /*0x101129e7f*/
  v10 = (_DWORD)v9 == 2; /*0x101129eae*/
LABEL_8:
  v18[1] = a1; /*0x101129eb1*/
  v19 = 2; /*0x101129eb5*/
  v20 = nullptr; /*0x101129ebd*/
  v21 = v10; /*0x101129ec5*/
  (*(void (__fastcall **)(__int64, volatile signed __int64 **))(a4 + 32))(a3, &v20); /*0x101129ecf*/
  v19 = (__int64)v20; /*0x101129ed7*/
  v12 = _InterlockedExchange64(a1, (__int64)v20); /*0x101129edb*/
  v18[0] = v12 & 3; /*0x101129ee3*/
  if ( v18[0] != 1 ) /*0x101129eeb*/
    core::panicking::assert_failed::he38f853952ce5d5d(0, v18, &qword_1012FEBF0, 0, v11, &off_1015AF188); /*0x101129fd7*/
  result = v12 & 0xFFFFFFFFFFFFFFFCLL; /*0x101129ef1*/
  if ( result ) /*0x101129ef5*/
  {
    do /*0x101129f1c*/
    {
      v13 = *(_QWORD *)(result + 8); /*0x101129f1c*/
      if ( _InterlockedIncrement64(*(volatile signed __int64 **)result) <= 0 ) /*0x101129f27*/
        BUG(); /*0x101129fdc*/
      v20 = *(volatile signed __int64 **)result; /*0x101129f30*/
      v14 = v20; /*0x101129f2d*/
      *(_BYTE *)(result + 16) = 1; /*0x101129f34*/
      v15 = *((_BYTE *)v14 + 48); /*0x101129f3a*/
      *((_BYTE *)v14 + 48) = 1; /*0x101129f3a*/
      if ( v15 == -1 ) /*0x101129f40*/
      {
        dispatch_semaphore_signal(*((dispatch_semaphore_t *)v14 + 5)); /*0x101129f54*/
        if ( !_InterlockedDecrement64(v14) ) /*0x101129f59*/
LABEL_17:
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(&v20); /*0x101129f5f*/
      }
      else if ( !_InterlockedDecrement64(v14) ) /*0x101129f42*/
      {
        goto LABEL_17; /*0x101129f46*/
      }
      result = v13; /*0x101129f10*/
    }
    while ( v13 ); /*0x101129f1c*/
  }
  return result; /*0x101129fb2*/
}