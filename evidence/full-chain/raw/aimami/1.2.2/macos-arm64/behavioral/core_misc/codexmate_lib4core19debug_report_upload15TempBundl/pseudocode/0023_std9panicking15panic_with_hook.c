// mac 1.2.2 NEW codexmate_lib4core19debug_report_upload15TempBundl 0x10136363d d=6
void __fastcall __noreturn std::panicking::panic_with_hook::h5c9dbff33bb81e8f(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5)
{
  char v5; // al
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rtt
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  signed __int64 v10; // rax
  char *v11; // rsi
  unsigned int v12; // eax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 **v24; // rdi
  char v25; // [rsp+8h] [rbp-98h] BYREF
  __int64 v26; // [rsp+10h] [rbp-90h] BYREF
  __int64 v27; // [rsp+18h] [rbp-88h]
  __int128 v28; // [rsp+20h] [rbp-80h] BYREF
  __int128 v29; // [rsp+30h] [rbp-70h] BYREF
  __int16 v30; // [rsp+40h] [rbp-60h]
  __int64 *v31; // [rsp+58h] [rbp-48h] BYREF
  __int64 *v32; // [rsp+60h] [rbp-40h]
  __int64 v33; // [rsp+68h] [rbp-38h] BYREF
  int v34; // [rsp+70h] [rbp-30h]
  int v35; // [rsp+74h] [rbp-2Ch]

  v34 = a5; /*0x10136364e*/
  v35 = a4; /*0x101363652*/
  v26 = a1; /*0x10136365b*/
  v27 = a2; /*0x101363662*/
  v33 = a3; /*0x101363669*/
  v5 = std::panicking::panic_count::increase::h2e43a54d4f361628(1); /*0x101363674*/
  if ( v5 != 2 ) /*0x10136367b*/
  {
    if ( (v5 & 1) != 0 ) /*0x10136390f*/
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(a2 + 48))(a1); /*0x101363914*/
      v22 = 1; /*0x10136391c*/
      if ( v20 ) /*0x10136391d*/
        v22 = v20; /*0x10136391d*/
      else
        v21 = nullptr; /*0x101363921*/
      v31 = (__int64 *)v22; /*0x101363929*/
      v32 = v21; /*0x10136392c*/
      *(_QWORD *)&v28 = &v33; /*0x101363938*/
      *((_QWORD *)&v28 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hce5e5f99490a9311; /*0x101363942*/
      *(_QWORD *)&v29 = &v31; /*0x101363946*/
      *((_QWORD *)&v29 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h203b5c92ef2f99f1; /*0x101363951*/
      v23 = std::io::Write::write_fmt::h210f0dd61642ec64(&v31, &unk_10172A2F0); /*0x101363960*/
      v24 = (__int64 **)&v25; /*0x101363965*/
      goto LABEL_45; /*0x101363965*/
    }
    *(_QWORD *)&v28 = &v33; /*0x101363979*/
    *((_QWORD *)&v28 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hce5e5f99490a9311; /*0x101363983*/
    *(_QWORD *)&v29 = &v26; /*0x10136398e*/
    *((_QWORD *)&v29 + 1) = _$LT$$RF$mut$u20$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcdf804afdc5e1946; /*0x101363999*/
    v31 = (__int64 *)std::io::Write::write_fmt::h210f0dd61642ec64(&v31, &unk_10172A2CE); /*0x1013639b0*/
    v24 = &v31; /*0x1013639b3*/
LABEL_47:
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hd2b280389bf6e78b(v24); /*0x1013639b7*/
    std::process::abort::h38b4a24325fecca0(); /*0x1013639bc*/
  }
  v6 = std::panicking::HOOK::h003159632230ebe9; /*0x101363681*/
  while ( v6 <= 0xFFFFFFFFFFFFFFEFLL && v6 != 1 && (v6 & 2) == 0 ) /*0x101363699*/
  {
    v7 = v6; /*0x1013636a6*/
    v6 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (v6 | 1) + 16, v6); /*0x1013636a6*/
    if ( v7 == v6 ) /*0x1013636af*/
      goto LABEL_35; /*0x1013636af*/
  }
  v29 = 0; /*0x1013636bd*/
  v28 = 0; /*0x1013636c1*/
  v30 = 0; /*0x1013636c5*/
  v8 = 0; /*0x1013636ca*/
  v9 = std::panicking::HOOK::h003159632230ebe9; /*0x1013636cd*/
  while ( 1 ) /*0x1013636f5*/
  {
    while ( (v9 & 2) == 0 && v9 != 1 && v9 < 0xFFFFFFFFFFFFFFF0LL ) /*0x1013636f5*/
    {
      v10 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (v9 | 1) + 16, v9); /*0x101363705*/
      if ( v9 == v10 ) /*0x10136370e*/
      {
        if ( *((_QWORD *)&v29 + 1) && !_InterlockedDecrement64(*((volatile signed __int64 **)&v29 + 1)) ) /*0x101363833*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939((__int64 *)&v29 + 1); /*0x10136383d*/
LABEL_35:
        v31 = &qword_101933888; /*0x101363842*/
        v32 = &std::panicking::HOOK::h003159632230ebe9; /*0x101363854*/
        v15 = v26; /*0x101363862*/
        v16 = v27; /*0x101363869*/
        if ( qword_101933888 ) /*0x101363860*/
        {
          *(_QWORD *)&v28 = (*(__int64 (__fastcall **)(__int64))(v27 + 40))(v26); /*0x1013638b6*/
          *((_QWORD *)&v28 + 1) = v18; /*0x1013638b9*/
          *(_QWORD *)&v29 = v33; /*0x1013638c1*/
          BYTE8(v29) = v35; /*0x1013638c8*/
          BYTE9(v29) = v34; /*0x1013638ce*/
          (*(void (__fastcall **)(__int64))(qword_101933890 + 40))(qword_101933888); /*0x1013638df*/
        }
        else
        {
          *(_QWORD *)&v28 = (*(__int64 (__fastcall **)(__int64))(v27 + 40))(v26); /*0x10136387b*/
          *((_QWORD *)&v28 + 1) = v17; /*0x10136387e*/
          *(_QWORD *)&v29 = v33; /*0x101363886*/
          BYTE8(v29) = v35; /*0x10136388d*/
          BYTE9(v29) = v34; /*0x101363893*/
          std::panicking::default_hook::hb722ebfb7bc18e8a(); /*0x101363896*/
        }
        core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(&v31); /*0x1013638e6*/
        std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h2c1d6b9c58472f4d(); /*0x1013638f2*/
        *(_BYTE *)(v19 + 8) = 0; /*0x1013638f4*/
        if ( (_BYTE)v35 ) /*0x1013638fc*/
          _RNvCs1Y7DaGC1cwg_7___rustc10rust_panic(v15, v16); /*0x101363908*/
        v23 = std::io::Write::write_fmt::h210f0dd61642ec64( /*0x1013639cf*/
                &v31,
                "thread caused non-unwinding panic. aborting.\ncannot modify the panic hook from a panicking thread()reentrant initoverflow in Duration::newdescription() is deprecated; use Displaymid > lencalled `Result::unwrap()` on an `Err` valueWouldBlock");
        v24 = (__int64 **)&v28; /*0x1013639d4*/
LABEL_45:
        *v24 = (__int64 *)v23; /*0x10136396c*/
        goto LABEL_47; /*0x10136396f*/
      }
LABEL_19:
      v9 = v10; /*0x10136378d*/
    }
    if ( v8 < 7 && (v9 & 2) == 0 ) /*0x101363720*/
    {
      v12 = 1; /*0x101363795*/
      do /*0x1013637a5*/
        _mm_pause(); /*0x101363798*/
      while ( !(v12++ >> v8) ); /*0x1013637a5*/
      v9 = std::panicking::HOOK::h003159632230ebe9; /*0x1013637a7*/
      ++v8; /*0x1013637ae*/
    }
    else
    {
      if ( !*((_QWORD *)&v29 + 1) ) /*0x10136372c*/
        core::cell::once::OnceCell$LT$T$GT$::try_init::hfe7587a34aa06979((char *)&v29 + 8); /*0x10136380f*/
      *((_QWORD *)&v28 + 1) = 0; /*0x101363732*/
      LOBYTE(v30) = 0; /*0x101363744*/
      *(_QWORD *)&v28 = v9 & 0xFFFFFFFFFFFFFFF0LL; /*0x101363748*/
      v11 = (char *)&v28 + (v9 & 9); /*0x10136374c*/
      if ( (v9 & 2) != 0 ) /*0x101363755*/
      {
        *(_QWORD *)&v29 = 0; /*0x101363773*/
        v10 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (signed __int64)(v11 + 6), v9); /*0x101363782*/
        if ( v9 != v10 ) /*0x10136378b*/
          goto LABEL_19; /*0x10136378b*/
        if ( (v9 & 4) == 0 ) /*0x1013637ba*/
          std::sys::sync::rwlock::queue::RwLock::unlock_queue::h3c50b31e38d05741(&std::panicking::HOOK::h003159632230ebe9); /*0x1013637c3*/
      }
      else
      {
        *(_QWORD *)&v29 = &v28; /*0x10136375b*/
        v10 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (signed __int64)(v11 + 2), v9); /*0x101363762*/
        if ( v9 != v10 ) /*0x10136376b*/
          goto LABEL_19; /*0x10136376b*/
      }
      while ( !(_BYTE)v30 ) /*0x1013637fa*/
      {
        v14 = *((_QWORD *)&v29 + 1); /*0x1013637ca*/
        if ( !*((_QWORD *)&v29 + 1) ) /*0x1013637d1*/
          core::option::unwrap_failed::h44626cade04bbf1e(&off_101926200); /*0x101363820*/
        if ( _InterlockedDecrement8((volatile signed __int8 *)(*((_QWORD *)&v29 + 1) + 48LL)) ) /*0x1013637d3*/
        {
          while ( dispatch_semaphore_wait(*(dispatch_semaphore_t *)(v14 + 40), 0xFFFFFFFFFFFFFFFFLL) ) /*0x1013637e5*/
            ; /*0x1013637de*/
          *(_BYTE *)(v14 + 48) = 0; /*0x1013637f1*/
        }
      }
      v9 = std::panicking::HOOK::h003159632230ebe9; /*0x1013637fc*/
      v8 = 0; /*0x101363803*/
    }
  }
}