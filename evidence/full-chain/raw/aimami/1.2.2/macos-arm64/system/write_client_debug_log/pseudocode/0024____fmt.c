// mac 1.2.2 NEW write_client_debug_log 0x1013812e0 d=3
char __fastcall _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // rdi
  char result; // al
  size_t v4; // rax
  char v5; // bl
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  char __strerrbuf[16]; // [rsp+0h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-C0h]
  __int128 v10; // [rsp+20h] [rbp-B0h]
  __int128 v11; // [rsp+30h] [rbp-A0h]
  __int128 v12; // [rsp+40h] [rbp-90h]
  __int128 v13; // [rsp+50h] [rbp-80h]
  __int128 v14; // [rsp+60h] [rbp-70h]
  __int128 v15; // [rsp+70h] [rbp-60h]
  _QWORD v16[3]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v17; // [rsp+98h] [rbp-38h] BYREF
  int v18; // [rsp+B4h] [rbp-1Ch] BYREF

  v2 = *a1; /*0x1013812f3*/
  switch ( (unsigned __int8)v2 & 3 )
  {
    case 0:
      result = _$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(*v2, v2[1], (__int64)a2); /*0x101381325*/
      break; /*0x101381325*/
    case 1:
      result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(__int64 *)((char *)v2 + 7) + 32))( /*0x101381493*/
                 *(__int64 *)((char *)v2 - 1),
                 a2);
      break; /*0x101381493*/
    case 2:
      v18 = HIDWORD(v2); /*0x10138132e*/
      v15 = 0; /*0x101381334*/
      v14 = 0; /*0x101381338*/
      v13 = 0; /*0x10138133c*/
      v12 = 0; /*0x101381340*/
      v11 = 0; /*0x101381347*/
      v10 = 0; /*0x10138134e*/
      v9 = 0; /*0x101381355*/
      *(_OWORD *)__strerrbuf = 0; /*0x10138135c*/
      if ( strerror_r(SHIDWORD(v2), __strerrbuf, 0x80u) < 0 )
        core::panicking::panic_fmt::h3a793735daf6e4ec(
          (__int64)"strerror_r failureassertion failed: len >= size_of::<c::sockaddr_in>()assertion failed: len >= size_of::<c::sockaddr_in6>()cannot set a 0 duration timeoutoverflow when subtracting durationsno error set after POLLHUPconnection timed outdeadlock in SIGSEGV handlerfatal runtime error: a thread received SIGSEGV while modifying its stack overflow information, aborting\ninternal error: entered unreachable code: the thread info setup logic isn't recursivefatal runtime error: stack overflow, aborting\n`confstr` provided a string which wasn't nul-terminatedTMPDIRfatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\nassertion failed: r == libc::ETIMEDOUT || r == 0invalid timestamp",
          37,
          (__int64)&off_101925F78);
      v4 = strlen(__strerrbuf); /*0x101381386*/
      alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v16, __strerrbuf, v4); /*0x101381398*/
      _$LT$alloc..string..String$u20$as$u20$core..convert..From$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::from::habaeb6534dae2c95( /*0x1013813a7*/
        &v17,
        v16);
      *(_QWORD *)__strerrbuf = &v17; /*0x1013813ac*/
      *(_QWORD *)&__strerrbuf[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1013813ba*/
      *(_QWORD *)&v9 = &v18; /*0x1013813c5*/
      *((_QWORD *)&v9 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x1013813d3*/
      result = core::fmt::write::h2e5a8157a38fb62d(*a2, a2[1], byte_10172A3FF, (unsigned __int64)__strerrbuf); /*0x1013813ef*/
      if ( v17 ) /*0x1013813fb*/
      {
        v5 = result; /*0x101381406*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101381408*/
        result = v5; /*0x10138140d*/
      }
      break; /*0x10138140f*/
    case 3:
      v6 = (unsigned __int64)v2 >> 32; /*0x101381411*/
      v7 = qword_1016DFB88[v6]; /*0x10138141c*/
      v16[0] = *(&off_101927288 + v6); /*0x10138142b*/
      v16[1] = v7; /*0x10138142f*/
      *(_QWORD *)__strerrbuf = v16; /*0x101381437*/
      *(_QWORD *)&__strerrbuf[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h203b5c92ef2f99f1; /*0x101381445*/
      result = core::fmt::write::h2e5a8157a38fb62d(*a2, a2[1], byte_1016F10F6, (unsigned __int64)__strerrbuf); /*0x101381461*/
      break; /*0x101381461*/
  }
  return result; /*0x101381318*/
}