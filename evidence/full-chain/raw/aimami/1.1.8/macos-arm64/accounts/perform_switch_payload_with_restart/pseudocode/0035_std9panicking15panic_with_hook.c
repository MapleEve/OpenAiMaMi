// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1010aceed depth=8
// std9panicking15panic_with_hook
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

  v34 = a5; /*0x1010acefe*/
  v35 = a4; /*0x1010acf02*/
  v26 = a1; /*0x1010acf0b*/
  v27 = a2; /*0x1010acf12*/
  v33 = a3; /*0x1010acf19*/
  v5 = std::panicking::panic_count::increase::h2e43a54d4f361628(1); /*0x1010acf24*/
  if ( v5 != 2 ) /*0x1010acf2b*/
  {
    if ( (v5 & 1) != 0 ) /*0x1010ad1bf*/
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(a2 + 48))(a1); /*0x1010ad1c4*/
      v22 = 1; /*0x1010ad1cc*/
      if ( v20 ) /*0x1010ad1cd*/
        v22 = v20; /*0x1010ad1cd*/
      else
        v21 = nullptr; /*0x1010ad1d1*/
      v31 = (__int64 *)v22; /*0x1010ad1d9*/
      v32 = v21; /*0x1010ad1dc*/
      *(_QWORD *)&v28 = &v33; /*0x1010ad1e8*/
      *((_QWORD *)&v28 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hce5e5f99490a9311; /*0x1010ad1f2*/
      *(_QWORD *)&v29 = &v31; /*0x1010ad1f6*/
      *((_QWORD *)&v29 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h203b5c92ef2f99f1; /*0x1010ad201*/
      v23 = std::io::Write::write_fmt::h210f0dd61642ec64(&v31, &unk_101258EDD); /*0x1010ad210*/
      v24 = (__int64 **)&v25; /*0x1010ad215*/
      goto LABEL_45; /*0x1010ad215*/
    }
    *(_QWORD *)&v28 = &v33; /*0x1010ad229*/
    *((_QWORD *)&v28 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hce5e5f99490a9311; /*0x1010ad233*/
    *(_QWORD *)&v29 = &v26; /*0x1010ad23e*/
    *((_QWORD *)&v29 + 1) = _$LT$$RF$mut$u20$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcdf804afdc5e1946; /*0x1010ad249*/
    v31 = (__int64 *)std::io::Write::write_fmt::h210f0dd61642ec64(&v31, &unk_101258EBB); /*0x1010ad260*/
    v24 = &v31; /*0x1010ad263*/
LABEL_47:
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hd2b280389bf6e78b(v24); /*0x1010ad267*/
    std::process::abort::h38b4a24325fecca0(); /*0x1010ad26c*/
  }
  v6 = std::panicking::HOOK::h003159632230ebe9; /*0x1010acf31*/
  while ( v6 <= 0xFFFFFFFFFFFFFFEFLL && v6 != 1 && (v6 & 2) == 0 ) /*0x1010acf49*/
  {
    v7 = v6; /*0x1010acf56*/
    v6 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (v6 | 1) + 16, v6); /*0x1010acf56*/
    if ( v7 == v6 ) /*0x1010acf5f*/
      goto LABEL_35; /*0x1010acf5f*/
  }
  v29 = 0; /*0x1010acf6d*/
  v28 = 0; /*0x1010acf71*/
  v30 = 0; /*0x1010acf75*/
  v8 = 0; /*0x1010acf7a*/
  v9 = std::panicking::HOOK::h003159632230ebe9; /*0x1010acf7d*/
  while ( 1 ) /*0x1010acfa5*/
  {
    while ( (v9 & 2) == 0 && v9 != 1 && v9 < 0xFFFFFFFFFFFFFFF0LL ) /*0x1010acfa5*/
    {
      v10 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (v9 | 1) + 16, v9); /*0x1010acfb5*/
      if ( v9 == v10 ) /*0x1010acfbe*/
      {
        if ( *((_QWORD *)&v29 + 1) && !_InterlockedDecrement64(*((volatile signed __int64 **)&v29 + 1)) ) /*0x1010ad0e3*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939((__int64 *)&v29 + 1); /*0x1010ad0ed*/
LABEL_35:
        v31 = &qword_1015B9B88; /*0x1010ad0f2*/
        v32 = &std::panicking::HOOK::h003159632230ebe9; /*0x1010ad104*/
        v15 = v26; /*0x1010ad112*/
        v16 = v27; /*0x1010ad119*/
        if ( qword_1015B9B88 ) /*0x1010ad110*/
        {
          *(_QWORD *)&v28 = (*(__int64 (__fastcall **)(__int64))(v27 + 40))(v26); /*0x1010ad166*/
          *((_QWORD *)&v28 + 1) = v18; /*0x1010ad169*/
          *(_QWORD *)&v29 = v33; /*0x1010ad171*/
          BYTE8(v29) = v35; /*0x1010ad178*/
          BYTE9(v29) = v34; /*0x1010ad17e*/
          (*(void (__fastcall **)(__int64))(qword_1015B9B90 + 40))(qword_1015B9B88); /*0x1010ad18f*/
        }
        else
        {
          *(_QWORD *)&v28 = (*(__int64 (__fastcall **)(__int64))(v27 + 40))(v26); /*0x1010ad12b*/
          *((_QWORD *)&v28 + 1) = v17; /*0x1010ad12e*/
          *(_QWORD *)&v29 = v33; /*0x1010ad136*/
          BYTE8(v29) = v35; /*0x1010ad13d*/
          BYTE9(v29) = v34; /*0x1010ad143*/
          std::panicking::default_hook::hb722ebfb7bc18e8a(); /*0x1010ad146*/
        }
        core::ptr::drop_in_place$LT$std..sync..poison..rwlock..RwLockReadGuard$LT$$LP$$RP$$GT$$GT$::h54c183a434cdc661(&v31); /*0x1010ad196*/
        std::panicking::panic_count::LOCAL_PANIC_COUNT::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h2c1d6b9c58472f4d(); /*0x1010ad1a2*/
        *(_BYTE *)(v19 + 8) = 0; /*0x1010ad1a4*/
        if ( (_BYTE)v35 ) /*0x1010ad1ac*/
          _RNvCs1Y7DaGC1cwg_7___rustc10rust_panic(v15, v16); /*0x1010ad1b8*/
        v23 = std::io::Write::write_fmt::h210f0dd61642ec64( /*0x1010ad27f*/
                &v31,
                "thread caused non-unwinding panic. aborting.\ncannot modify the panic hook from a panicking thread()reentrant initoverflow in Duration::newdescription() is deprecated; use Displaymid > lencalled `Result::unwrap()` on an `Err` valueWouldBlock");
        v24 = (__int64 **)&v28; /*0x1010ad284*/
LABEL_45:
        *v24 = (__int64 *)v23; /*0x1010ad21c*/
        goto LABEL_47; /*0x1010ad21f*/
      }
LABEL_19:
      v9 = v10; /*0x1010ad03d*/
    }
    if ( v8 < 7 && (v9 & 2) == 0 ) /*0x1010acfd0*/
    {
      v12 = 1; /*0x1010ad045*/
      do /*0x1010ad055*/
        _mm_pause(); /*0x1010ad048*/
      while ( !(v12++ >> v8) ); /*0x1010ad055*/
      v9 = std::panicking::HOOK::h003159632230ebe9; /*0x1010ad057*/
      ++v8; /*0x1010ad05e*/
    }
    else
    {
      if ( !*((_QWORD *)&v29 + 1) ) /*0x1010acfdc*/
        core::cell::once::OnceCell$LT$T$GT$::try_init::hfe7587a34aa06979((char *)&v29 + 8); /*0x1010ad0bf*/
      *((_QWORD *)&v28 + 1) = 0; /*0x1010acfe2*/
      LOBYTE(v30) = 0; /*0x1010acff4*/
      *(_QWORD *)&v28 = v9 & 0xFFFFFFFFFFFFFFF0LL; /*0x1010acff8*/
      v11 = (char *)&v28 + (v9 & 9); /*0x1010acffc*/
      if ( (v9 & 2) != 0 ) /*0x1010ad005*/
      {
        *(_QWORD *)&v29 = 0; /*0x1010ad023*/
        v10 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (signed __int64)(v11 + 6), v9); /*0x1010ad032*/
        if ( v9 != v10 ) /*0x1010ad03b*/
          goto LABEL_19; /*0x1010ad03b*/
        if ( (v9 & 4) == 0 ) /*0x1010ad06a*/
          std::sys::sync::rwlock::queue::RwLock::unlock_queue::h3c50b31e38d05741(&std::panicking::HOOK::h003159632230ebe9); /*0x1010ad073*/
      }
      else
      {
        *(_QWORD *)&v29 = &v28; /*0x1010ad00b*/
        v10 = _InterlockedCompareExchange64(&std::panicking::HOOK::h003159632230ebe9, (signed __int64)(v11 + 2), v9); /*0x1010ad012*/
        if ( v9 != v10 ) /*0x1010ad01b*/
          goto LABEL_19; /*0x1010ad01b*/
      }
      while ( !(_BYTE)v30 ) /*0x1010ad0aa*/
      {
        v14 = *((_QWORD *)&v29 + 1); /*0x1010ad07a*/
        if ( !*((_QWORD *)&v29 + 1) ) /*0x1010ad081*/
          core::option::unwrap_failed::h44626cade04bbf1e((__int64)&off_1015AE2E0); /*0x1010ad0d0*/
        if ( _InterlockedDecrement8((volatile signed __int8 *)(*((_QWORD *)&v29 + 1) + 48LL)) ) /*0x1010ad083*/
        {
          while ( dispatch_semaphore_wait(*(dispatch_semaphore_t *)(v14 + 40), 0xFFFFFFFFFFFFFFFFLL) ) /*0x1010ad095*/
            ; /*0x1010ad08e*/
          *(_BYTE *)(v14 + 48) = 0; /*0x1010ad0a1*/
        }
      }
      v9 = std::panicking::HOOK::h003159632230ebe9; /*0x1010ad0ac*/
      v8 = 0; /*0x1010ad0b3*/
    }
  }
}