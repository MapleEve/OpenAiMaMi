// IDA Hex-Rays decompile evidence
// addr: 0x1003f5800
// cluster: relay
// purpose: unknown-census resolution sweep (2026-07-24), verify drop_in_place != business logic
//
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$$LT$axum..serve..WithGracefulShutdown$LT$axum..routing..Router$C$axum..routing..Router$C$codexmate_lib..core..relay..proxy_server..start..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$u20$as$u20$core..future..into_future..IntoFuture$GT$..into_future..$u7b$$u7b$closure$u7d$$u7d$$GT$::h85a814855c0b1c9d(
        __int64 a1)
{
  volatile signed __int64 *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  volatile signed __int64 **v6; // rbx
  volatile signed __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi

  result = (volatile signed __int64 *)*(unsigned __int8 *)(a1 + 169); /*0x1003f580a*/
  switch ( *(_BYTE *)(a1 + 169) ) /*0x1003f582c*/
  {
    case 0: /*0x1003f582c*/
      _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc84da47d6cf00806(a1); /*0x1003f5831*/
      v3 = *(unsigned int *)(a1 + 24); /*0x1003f5836*/
      if ( (_DWORD)v3 != -1 ) /*0x1003f583c*/
        close_NOCANCEL(v3); /*0x1003f583e*/
      core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(a1); /*0x1003f5846*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 32)) ) /*0x1003f584f*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h9bc205f123fbae08(a1 + 32); /*0x1003f5859*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 40)) ) /*0x1003f5862*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h130b3c1fab17572e(a1 + 40); /*0x1003f586c*/
      v4 = *(_QWORD *)(a1 + 48); /*0x1003f5875*/
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v4 + 360)) ) /*0x1003f5879*/
        tokio::sync::notify::Notify::notify_waiters::h1933d7d9888d6569(v4 + 376); /*0x1003f588a*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 48)) ) /*0x1003f5892*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h9fd29acc8306c51e(a1 + 48); /*0x1003f589b*/
      v5 = *(_QWORD *)(a1 + 64); /*0x1003f58a0*/
      v6 = (volatile signed __int64 **)(a1 + 64); /*0x1003f58a4*/
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v5 + 368)) ) /*0x1003f58a8*/
        goto LABEL_41; /*0x1003f58b0*/
      goto LABEL_40; /*0x1003f58b0*/
    case 3: /*0x1003f582c*/
      core::ptr::drop_in_place$LT$$LP$axum..serve..tcp_accept..$u7b$$u7b$closure$u7d$$u7d$$C$tokio..sync..watch..Sender$LT$$LP$$RP$$GT$..closed..$u7b$$u7b$closure$u7d$$u7d$$RP$$GT$::hb87e12b8c2ec4967(a1 + 184); /*0x1003f58d4*/
      goto LABEL_26; /*0x1003f58d9*/
    case 4: /*0x1003f582c*/
      goto LABEL_18;
    case 5: /*0x1003f582c*/
      v7 = *(volatile signed __int64 **)(a1 + 176); /*0x1003f58de*/
      if ( v7 && !_InterlockedDecrement64(v7) ) /*0x1003f58ea*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h130b3c1fab17572e(a1 + 176); /*0x1003f58f7*/
LABEL_18:
      _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h8f3ca559a76632e4(a1 + 136); /*0x1003f58fc*/
      v8 = *(unsigned int *)(a1 + 160); /*0x1003f590b*/
      if ( (_DWORD)v8 != -1 ) /*0x1003f5914*/
        close_NOCANCEL(v8); /*0x1003f5916*/
      core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(a1 + 136); /*0x1003f591e*/
      *(_WORD *)(a1 + 172) = 0; /*0x1003f5923*/
      goto LABEL_26; /*0x1003f592c*/
    case 6: /*0x1003f582c*/
      if ( *(_BYTE *)(a1 + 264) == 3 && *(_BYTE *)(a1 + 193) == 4 ) /*0x1003f593e*/
      {
        _$LT$tokio..sync..notify..Notified$u20$as$u20$core..ops..drop..Drop$GT$::drop::h908cf072cd399b70(a1 + 200); /*0x1003f5947*/
        v9 = *(_QWORD *)(a1 + 232); /*0x1003f594c*/
        if ( v9 ) /*0x1003f5956*/
          (*(void (__fastcall **)(_QWORD))(v9 + 24))(*(_QWORD *)(a1 + 240)); /*0x1003f595f*/
        *(_BYTE *)(a1 + 192) = 0; /*0x1003f5962*/
      }
LABEL_26:
      if ( *(_BYTE *)(a1 + 170) ) /*0x1003f5969*/
      {
        _$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hc84da47d6cf00806(a1); /*0x1003f5975*/
        v10 = *(unsigned int *)(a1 + 24); /*0x1003f597a*/
        if ( (_DWORD)v10 != -1 ) /*0x1003f5980*/
          close_NOCANCEL(v10); /*0x1003f5982*/
        core::ptr::drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$::h4a01551a0288ecb6(a1); /*0x1003f598a*/
      }
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 32)) ) /*0x1003f5993*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h9bc205f123fbae08(a1 + 32); /*0x1003f599d*/
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 40)) ) /*0x1003f59a6*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h130b3c1fab17572e(a1 + 40); /*0x1003f59b0*/
      if ( *(_BYTE *)(a1 + 171) ) /*0x1003f59b5*/
      {
        v11 = *(_QWORD *)(a1 + 48); /*0x1003f59c2*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v11 + 360)) ) /*0x1003f59c6*/
          tokio::sync::notify::Notify::notify_waiters::h1933d7d9888d6569(v11 + 376); /*0x1003f59d7*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 48)) ) /*0x1003f59df*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h9fd29acc8306c51e(a1 + 48); /*0x1003f59e8*/
      }
      v5 = *(_QWORD *)(a1 + 64); /*0x1003f59ed*/
      v6 = (volatile signed __int64 **)(a1 + 64); /*0x1003f59f1*/
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v5 + 368)) ) /*0x1003f59f5*/
      {
LABEL_40:
        _InterlockedOr64((volatile signed __int64 *)(v5 + 352), 1u); /*0x1003f59ff*/
        tokio::sync::watch::big_notify::BigNotify::notify_waiters::h59da4644921cf4fb(v5 + 16); /*0x1003f5a0c*/
      }
LABEL_41:
      result = *v6; /*0x1003f5a11*/
      if ( !_InterlockedDecrement64(*v6) ) /*0x1003f5a14*/
        result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h9fd29acc8306c51e(v6); /*0x1003f5a27*/
      break; /*0x1003f5a27*/
    default:
      return result;
  }
  return result; /*0x1003f5a21*/
}

// --- refs (callees/xrefs from decompile) ---
// 0x100243330  __ZN87_$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17hc84da47d6cf00806E
// 0x1014afa00  _close$NOCANCEL
// 0x1003fcb20  __ZN4core3ptr67drop_in_place$LT$tokio..runtime..io..registration..Registration$GT$17h4a01551a0288ecb6E_3
// 0x10076b1c0  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h9bc205f123fbae08E
// 0x100c53f30  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h130b3c1fab17572eE
// 0x1012c4ce0  __ZN5tokio4sync6notify6Notify14notify_waiters17h1933d7d9888d6569E
// 0x10076b280  __ZN5alloc4sync16Arc$LT$T$C$A$GT$9drop_slow17h9fd29acc8306c51eE
// 0x1003e0b10  __ZN4core3ptr163drop_in_place$LT$$LP$axum..serve..tcp_accept..$u7b$$u7b$closure$u7d$$u7d$$C$tokio..sync..watch..Sender$LT$$LP$$RP$$GT$..closed..$u7b$$u7b$closure$u7d$$u7d$$RP$$GT$17hb87e12b8c2ec4967E
// 0x100243230  __ZN87_$LT$tokio..io..poll_evented..PollEvented$LT$E$GT$$u20$as$u20$core..ops..drop..Drop$GT$4drop17h8f3ca559a76632e4E
// 0x1012c5620  __ZN71_$LT$tokio..sync..notify..Notified$u20$as$u20$core..ops..drop..Drop$GT$4drop17h908cf072cd399b70E
// 0x1012b7f80  __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h59da4644921cf4fbE
