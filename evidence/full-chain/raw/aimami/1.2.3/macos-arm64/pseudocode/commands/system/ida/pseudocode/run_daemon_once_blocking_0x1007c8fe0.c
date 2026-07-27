// __ZN13codexmate_lib8commands6system24run_daemon_once_blocking @ 0x1007c8fe0
// 1.2.3 NEW-delta | codexmate_lib::commands::system::run_daemon_once_blocking | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
char *__fastcall codexmate_lib::commands::system::run_daemon_once_blocking::hd844426ddbbef3e6(char *__dst, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r12
  char v11; // bl
  int v12; // ecx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  const void *v15; // r15
  size_t v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // r12
  int v35; // eax
  unsigned int v36; // eax
  const __m128i **v37; // rdi
  const __m128i **v38; // rsi
  __int64 v39; // rdx
  const __m128i *v40; // rax
  __int64 (__fastcall **v41)(); // rcx
  _QWORD *v42; // rbx
  __int64 v43; // r15
  __int64 v44; // r12
  unsigned int v45; // eax
  unsigned __int8 v46; // r15
  _QWORD *v47; // rax
  _QWORD **v48; // rsi
  _QWORD **v49; // rdi
  __int64 v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  __int64 v54; // r15
  const __m128i *v55; // r12
  const __m128i *v57; // r13
  int v58; // ebx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int64 v61; // rax
  _BYTE v63[1072]; // [rsp+0h] [rbp-E50h] BYREF
  _QWORD v64[134]; // [rsp+430h] [rbp-A20h] BYREF
  _QWORD v65[134]; // [rsp+860h] [rbp-5F0h] BYREF
  _QWORD v66[3]; // [rsp+C90h] [rbp-1C0h] BYREF
  _QWORD v67[3]; // [rsp+CA8h] [rbp-1A8h] BYREF
  _QWORD v68[3]; // [rsp+CC0h] [rbp-190h] BYREF
  _QWORD v69[3]; // [rsp+CD8h] [rbp-178h] BYREF
  _QWORD v70[2]; // [rsp+CF0h] [rbp-160h] BYREF
  __int64 v71; // [rsp+D00h] [rbp-150h]
  _QWORD v72[2]; // [rsp+D08h] [rbp-148h] BYREF
  __int64 v73; // [rsp+D18h] [rbp-138h]
  const __m128i *v74; // [rsp+D20h] [rbp-130h] BYREF
  __int64 (__fastcall **v75)(); // [rsp+D28h] [rbp-128h]
  __int64 v76; // [rsp+D30h] [rbp-120h]
  __int64 v77; // [rsp+D38h] [rbp-118h]
  _DWORD v78[2]; // [rsp+D50h] [rbp-100h]
  _QWORD v79[12]; // [rsp+D58h] [rbp-F8h] BYREF
  _QWORD *v80; // [rsp+DB8h] [rbp-98h] BYREF
  __int64 v81; // [rsp+DC0h] [rbp-90h]
  __int64 v82; // [rsp+DC8h] [rbp-88h]
  _QWORD *v83; // [rsp+DD0h] [rbp-80h]
  __int64 v84; // [rsp+DD8h] [rbp-78h]
  __int64 v85; // [rsp+DE0h] [rbp-70h]
  __int64 v86; // [rsp+DE8h] [rbp-68h]
  __int64 v87; // [rsp+DF0h] [rbp-60h]
  size_t v88; // [rsp+DF8h] [rbp-58h]
  _QWORD *v89; // [rsp+E00h] [rbp-50h]
  _QWORD *v90; // [rsp+E08h] [rbp-48h] BYREF
  __int64 v91; // [rsp+E10h] [rbp-40h]
  __int64 v92; // [rsp+E18h] [rbp-38h]
  unsigned int v93; // [rsp+E20h] [rbp-30h]
  _BYTE v94[41]; // [rsp+E27h] [rbp-29h] BYREF

  v4 = *a2; /*0x1007c8ffa*/
  if ( !*a2 ) /*0x1007c8ffa*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007c9132*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1007c9010*/
  v87 = 0x7FFFFFFFFFFFFFFFLL; /*0x1007c9024*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, 0x7FFFFFFFFFFFFFFFLL); /*0x1007c913f*/
    LOBYTE(v6) = v6 ^ 1; /*0x1007c9141*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007c9144*/
      goto LABEL_5; /*0x1007c914b*/
  }
  else
  {
    v6 = 0; /*0x1007c9031*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_5:
      v65[0] = 0; /*0x1007c9040*/
      v65[1] = 1; /*0x1007c904b*/
      v65[2] = 0; /*0x1007c9056*/
      v64[2] = 1610612768; /*0x1007c9061*/
      v64[0] = v65; /*0x1007c9073*/
      v64[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c9081*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v64) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c9644*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v94,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v8 = v6; /*0x1007c90a8*/
      v9 = v65[0]; /*0x1007c90aa*/
      v10 = v65[1]; /*0x1007c90b1*/
      v11 = v65[2]; /*0x1007c90b8*/
      v78[0] = *(_DWORD *)((char *)&v65[2] + 1); /*0x1007c90c5*/
      *(_DWORD *)((char *)v78 + 3) = HIDWORD(v65[2]); /*0x1007c90d1*/
      if ( !(_BYTE)v8
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v7,
                               v8) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1007c965b*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c90f3*/
      *((_QWORD *)__dst + 1) = v9; /*0x1007c90f8*/
      *((_QWORD *)__dst + 2) = v10; /*0x1007c90fc*/
      __dst[24] = v11; /*0x1007c9100*/
      v12 = *(_DWORD *)((char *)v78 + 3); /*0x1007c910a*/
      *(_DWORD *)(__dst + 25) = v78[0]; /*0x1007c9110*/
      *((_DWORD *)__dst + 7) = v12; /*0x1007c9114*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007c9122*/
      return __dst; /*0x1007c9125*/
    }
  }
  v93 = v6; /*0x1007c9151*/
  codexmate_lib::core::repository::Repository::auto_switch_config::hb0e53217ed18b987(v70, a2 + 2); /*0x1007c9162*/
  codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(v64); /*0x1007c9171*/
  v89 = a2 + 2; /*0x1007c9176*/
  if ( v64[0] == 2 ) /*0x1007c918c*/
  {
    qmemcpy(v79, &v64[1], sizeof(v79)); /*0x1007c91a4*/
    v90 = nullptr; /*0x1007c91a7*/
    v91 = 1; /*0x1007c91af*/
    v92 = 0; /*0x1007c91b7*/
    v76 = 1610612768; /*0x1007c91bf*/
    v74 = (const __m128i *)&v90; /*0x1007c91ce*/
    v75 = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c91dc*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c91ed*/
                            v79,
                            &v74) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c9683*/
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        v94,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    v80 = v90; /*0x1007c9202*/
    v81 = v91; /*0x1007c9209*/
    v82 = v92; /*0x1007c9214*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v64[1]); /*0x1007c921e*/
    v13 = v80; /*0x1007c922a*/
    v14 = v81; /*0x1007c9231*/
    v72[0] = v80; /*0x1007c9238*/
    v72[1] = v81; /*0x1007c923f*/
    v73 = v82; /*0x1007c9246*/
    *((_QWORD *)__dst + 3) = v82; /*0x1007c924d*/
    *((_QWORD *)__dst + 2) = v14; /*0x1007c9251*/
    *((_QWORD *)__dst + 1) = v13; /*0x1007c9255*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007c9259*/
    if ( !(_BYTE)v93 /*0x1007c9dc2*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v64[1], &v74, v14, v13) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007c9dcf*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c927a*/
    return __dst; /*0x1007c927f*/
  }
  v85 = v64[3]; /*0x1007c9288*/
  v84 = v64[2]; /*0x1007c9293*/
  v83 = (_QWORD *)v64[1]; /*0x1007c9297*/
  memcpy(&v65[4], &v64[4], 0x410u); /*0x1007c92ae*/
  v73 = v64[3]; /*0x1007c92b7*/
  v65[1] = v64[1]; /*0x1007c92c6*/
  v65[2] = v64[2]; /*0x1007c92cd*/
  v65[3] = v64[3]; /*0x1007c92d4*/
  v65[0] = v64[0]; /*0x1007c92db*/
  v15 = (const void *)a2[51]; /*0x1007c92e2*/
  v16 = a2[52]; /*0x1007c92e9*/
  if ( v16 ) /*0x1007c92f3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v65[4], &v64[4]); /*0x1007c92f5*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x1007c9302*/
    if ( !v17 ) /*0x1007c930a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16); /*0x1007c9314*/
  }
  else
  {
    v17 = 1; /*0x1007c931e*/
  }
  v86 = v17; /*0x1007c9323*/
  memcpy((void *)v17, v15, v16); /*0x1007c9330*/
  memcpy(v63, v65, sizeof(v63)); /*0x1007c9348*/
  if ( !(_BYTE)v93 /*0x1007c968d*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v63, v65, v18, v19) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1007c969a*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c936b*/
  v69[2] = v71; /*0x1007c9377*/
  v69[1] = v70[1]; /*0x1007c938c*/
  v69[0] = v70[0]; /*0x1007c9393*/
  memcpy(v64, v63, sizeof(v64)); /*0x1007c93ad*/
  if ( (_BYTE)v71 )
  {
    codexmate_lib::core::repository::enrich_accounts_via_api_with_subscription_policy::h5e1e2136bd5f5cf1( /*0x1007c93d7*/
      &v74,
      v64,
      v86,
      v16,
      0);
    v20 = *a2; /*0x1007c93dc*/
    if ( !*a2 ) /*0x1007c93dc*/
      v20 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007c96bc*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v20); /*0x1007c93e9*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0 )
    {
      v45 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v64, v21, v22); /*0x1007c98d5*/
      LOBYTE(v45) = v45 ^ 1; /*0x1007c98e0*/
      v93 = v45; /*0x1007c98e2*/
      if ( *((_BYTE *)a2 + 8) ) /*0x1007c98e5*/
        goto LABEL_26; /*0x1007c98ec*/
    }
    else
    {
      v93 = 0; /*0x1007c9402*/
      if ( *((_BYTE *)a2 + 8) )
      {
LABEL_26:
        v79[0] = 0; /*0x1007c9416*/
        v79[1] = 1; /*0x1007c9421*/
        v79[2] = 0; /*0x1007c942c*/
        v65[2] = 1610612768; /*0x1007c9437*/
        v65[0] = v79; /*0x1007c9449*/
        v65[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c9457*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                v65) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c9e1f*/
            &anon_3ce6d1417794db0febde534c64082f90_390,
            55,
            v94,
            &anon_3ce6d1417794db0febde534c64082f90_429,
            &anon_3ce6d1417794db0febde534c64082f90_392);
        v25 = v79[0]; /*0x1007c947e*/
        v26 = v79[1]; /*0x1007c9485*/
        LOBYTE(v89) = v79[2]; /*0x1007c9493*/
        LODWORD(v90) = *(_DWORD *)((char *)&v79[2] + 1); /*0x1007c949c*/
        *(_DWORD *)((char *)&v90 + 3) = HIDWORD(v79[2]); /*0x1007c94a5*/
        if ( !(_BYTE)v93
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v23,
                                 v24) )
        {
          *((_BYTE *)a2 + 8) = 1; /*0x1007c9e4a*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c94c6*/
        v27 = (int)v90; /*0x1007c94cb*/
        *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)&v90 + 3); /*0x1007c94d1*/
        *(_DWORD *)(__dst + 25) = v27; /*0x1007c94d5*/
        *((_QWORD *)__dst + 1) = v25; /*0x1007c94d9*/
        *((_QWORD *)__dst + 2) = v26; /*0x1007c94dd*/
        __dst[24] = (char)v89; /*0x1007c94e5*/
        *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007c94f3*/
LABEL_79:
        HIDWORD(_RAX) = HIDWORD(v75); /*0x1007c9c7a*/
        if ( v75 ) /*0x1007c9c84*/
        {
          v87 = (__int64)v75; /*0x1007c9c8a*/
          v88 = v16; /*0x1007c9c8e*/
          v54 = v77; /*0x1007c9c92*/
          if ( v77 ) /*0x1007c9c9c*/
          {
            v55 = v74; /*0x1007c9ca2*/
            _EBX = ~_mm_movemask_epi8(_mm_load_si128(v74)); /*0x1007c9cb3*/
            v57 = v74 + 1; /*0x1007c9cb5*/
            do /*0x1007c9ccd*/
            {
              if ( !(_WORD)_EBX ) /*0x1007c9cd2*/
              {
                do /*0x1007c9cfb*/
                {
                  v58 = _mm_movemask_epi8(_mm_load_si128(v57)); /*0x1007c9ce6*/
                  v55 -= 24; /*0x1007c9cea*/
                  ++v57; /*0x1007c9cf1*/
                }
                while ( v58 == 0xFFFF ); /*0x1007c9cfb*/
                _EBX = ~v58; /*0x1007c9cfd*/
              }
              __asm { tzcnt eax, ebx } /*0x1007c9cff*/
              v59 = -3 * _RAX; /*0x1007c9d06*/
              v60 = *((_QWORD *)&v55[-1] + v59 - 1); /*0x1007c9d0a*/
              if ( v60 ) /*0x1007c9d12*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55[-1].i64[v59], v60, 1); /*0x1007c9d21*/
              --v54; /*0x1007c9cc0*/
              _RAX = _EBX & (unsigned int)(_EBX - 1); /*0x1007c9cc6*/
              _EBX &= _EBX - 1; /*0x1007c9cc8*/
            }
            while ( v54 ); /*0x1007c9ccd*/
          }
          v61 = (24 * v87 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1007c9d38*/
          v16 = v88; /*0x1007c9d43*/
          if ( v61 + v87 != -17 ) /*0x1007c9d47*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v74 - v61, v61 + v87 + 17, 16); /*0x1007c9d58*/
        }
        goto LABEL_90; /*0x1007c9d58*/
      }
    }
    codexmate_lib::core::repository::Repository::persist_progressive_state::hba8e5e8e2d346f6d(v79, v89, v64); /*0x1007c9904*/
    if ( LODWORD(v79[0]) == 11 ) /*0x1007c9910*/
    {
      codexmate_lib::core::repository::Repository::auto_switch_config::hb0e53217ed18b987(v72, v89); /*0x1007c9921*/
      v46 = v73; /*0x1007c9926*/
      if ( (_BYTE)v73 && v72[0] == v70[0] ) /*0x1007c9945*/
      {
        codexmate_lib::core::repository::Repository::reconcile_auto_switch_request::h1410e94b2e717fe6( /*0x1007c996b*/
          v79,
          v89,
          v64,
          v72,
          &v74);
        if ( LODWORD(v79[0]) == 11 ) /*0x1007c9977*/
        {
          v66[0] = v79[1]; /*0x1007c9992*/
          v66[1] = v79[2]; /*0x1007c9999*/
          v66[2] = v79[3]; /*0x1007c99a0*/
          v79[0] = 0x8000000000000000LL; /*0x1007c99a7*/
          codexmate_lib::core::repository::Repository::build_daemon_payload::hb3b18dbdadb3ea0e(v65, v89, v79, v66, 1); /*0x1007c99cd*/
          if ( v65[0] == 0x8000000000000000LL ) /*0x1007c99d9*/
          {
            qmemcpy(v79, &v65[1], sizeof(v79)); /*0x1007c99f5*/
            codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$::h00f44e7d4d6871d9( /*0x1007c99ff*/
              &v90,
              v79);
            *((_QWORD *)__dst + 3) = v92; /*0x1007c9a08*/
            v47 = v90; /*0x1007c9a0c*/
            *((_QWORD *)__dst + 2) = v91; /*0x1007c9a14*/
            *((_QWORD *)__dst + 1) = v47; /*0x1007c9a18*/
            *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007c9a1c*/
          }
          else
          {
            memcpy(__dst, v65, 0xA8u); /*0x1007c9da3*/
          }
          core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1( /*0x1007c9daf*/
            a2,
            (unsigned __int8)v93);
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v74); /*0x1007c9dbb*/
          goto LABEL_90; /*0x1007c9dc0*/
        }
        qmemcpy(v65, v79, 0x60u); /*0x1007c9c21*/
        v49 = &v90; /*0x1007c9c24*/
        v48 = (_QWORD **)v65; /*0x1007c9c28*/
        codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$::h00f44e7d4d6871d9( /*0x1007c9c2b*/
          &v90,
          v65);
        v52 = v90; /*0x1007c9c34*/
        v50 = v91; /*0x1007c9c38*/
        v83 = v90; /*0x1007c9c3c*/
        v84 = v91; /*0x1007c9c40*/
        v85 = v92; /*0x1007c9c44*/
        *((_QWORD *)__dst + 3) = v92; /*0x1007c9c48*/
        *((_QWORD *)__dst + 2) = v50; /*0x1007c9c4c*/
        *((_QWORD *)__dst + 1) = v52; /*0x1007c9c50*/
        goto LABEL_75; /*0x1007c9c50*/
      }
      codexmate_lib::core::repository::Repository::sync_auto_switch_request::h65844a159a40ab13(v79, v89, 0, 0, v72); /*0x1007c9af0*/
      if ( LODWORD(v79[0]) != 11 ) /*0x1007c9afc*/
      {
        qmemcpy(v65, v79, 0x60u); /*0x1007c9bcc*/
        v49 = &v90; /*0x1007c9bcf*/
        v48 = (_QWORD **)v65; /*0x1007c9bd3*/
        codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$::h00f44e7d4d6871d9( /*0x1007c9bd6*/
          &v90,
          v65);
        v52 = (_QWORD *)v91; /*0x1007c9bdf*/
        v50 = v92; /*0x1007c9be3*/
        *((_QWORD *)__dst + 1) = v90; /*0x1007c9be7*/
        *((_QWORD *)__dst + 2) = v52; /*0x1007c9beb*/
        *((_QWORD *)__dst + 3) = v50; /*0x1007c9bef*/
        goto LABEL_75; /*0x1007c9bf3*/
      }
      if ( 2LL * v79[1] ) /*0x1007c9b09*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[2], v79[1], 1); /*0x1007c9b22*/
      v67[0] = 0x8000000000000000LL; /*0x1007c9b27*/
      v79[2] = v67[2]; /*0x1007c9b3c*/
      v79[1] = v67[1]; /*0x1007c9b43*/
      v79[0] = 0x8000000000000000LL; /*0x1007c9b4a*/
      codexmate_lib::core::repository::Repository::build_daemon_payload::hb3b18dbdadb3ea0e(v65, v89, v79, v67, v46); /*0x1007c9b6e*/
      if ( v65[0] != 0x8000000000000000LL ) /*0x1007c9b7a*/
      {
        v48 = (_QWORD **)v65; /*0x1007c9bf5*/
        v49 = (_QWORD **)__dst; /*0x1007c9c01*/
        memcpy(__dst, v65, 0xA8u); /*0x1007c9c04*/
        goto LABEL_76; /*0x1007c9c09*/
      }
      qmemcpy(v79, &v65[1], sizeof(v79)); /*0x1007c9b92*/
      v49 = &v90; /*0x1007c9b95*/
      v48 = (_QWORD **)v79; /*0x1007c9b99*/
      codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$::h00f44e7d4d6871d9( /*0x1007c9b9c*/
        &v90,
        v79);
      *((_QWORD *)__dst + 3) = v92; /*0x1007c9ba5*/
      v51 = v90; /*0x1007c9ba9*/
      v52 = (_QWORD *)v91; /*0x1007c9bad*/
    }
    else
    {
      qmemcpy(v65, v79, 0x60u); /*0x1007c9a3a*/
      v80 = nullptr; /*0x1007c9a3d*/
      v81 = 1; /*0x1007c9a48*/
      v82 = 0; /*0x1007c9a53*/
      v92 = 1610612768; /*0x1007c9a5e*/
      v90 = &v80; /*0x1007c9a6d*/
      v91 = (__int64)&anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c9a78*/
      v48 = &v90; /*0x1007c9a7c*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c9a83*/
                              v65,
                              &v90) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c9e97*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v94,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v83 = v80; /*0x1007c9a9e*/
      v84 = v81; /*0x1007c9aa2*/
      v85 = v82; /*0x1007c9aad*/
      v49 = (_QWORD **)v79; /*0x1007c9ab1*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v79); /*0x1007c9ab8*/
      *((_QWORD *)__dst + 3) = v85; /*0x1007c9ac1*/
      v51 = v83; /*0x1007c9ac5*/
      v52 = (_QWORD *)v84; /*0x1007c9ac9*/
    }
    *((_QWORD *)__dst + 2) = v52; /*0x1007c9acd*/
    *((_QWORD *)__dst + 1) = v51; /*0x1007c9ad1*/
LABEL_75:
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007c9c54*/
LABEL_76:
    if ( !(_BYTE)v93 /*0x1007c9eb5*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v49, v48, v50, v52) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007c9ec2*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c9c75*/
    goto LABEL_79; /*0x1007c9c75*/
  }
  v28 = *a2; /*0x1007c94fb*/
  if ( !*a2 ) /*0x1007c94fb*/
    v28 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1007c96ac*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v28); /*0x1007c9508*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0 )
  {
    v36 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v28, v63, v29, v30); /*0x1007c96c4*/
    LOBYTE(v36) = v36 ^ 1; /*0x1007c96cf*/
    v93 = v36; /*0x1007c96d1*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1007c96d4*/
      goto LABEL_34; /*0x1007c96db*/
  }
  else
  {
    v93 = 0; /*0x1007c9521*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_34:
      v79[0] = 0; /*0x1007c9535*/
      v79[1] = 1; /*0x1007c9540*/
      v79[2] = 0; /*0x1007c954b*/
      v65[2] = 1610612768; /*0x1007c9556*/
      v65[0] = v79; /*0x1007c9568*/
      v65[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c9576*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              v65) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c9df7*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v94,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v33 = v79[0]; /*0x1007c959d*/
      v34 = v79[1]; /*0x1007c95a4*/
      LOBYTE(v89) = v79[2]; /*0x1007c95b2*/
      LODWORD(v74) = *(_DWORD *)((char *)&v79[2] + 1); /*0x1007c95bb*/
      *(_DWORD *)((char *)&v74 + 3) = HIDWORD(v79[2]); /*0x1007c95c7*/
      if ( !(_BYTE)v93
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v31,
                               v32) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1007c9e33*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c95eb*/
      v35 = (int)v74; /*0x1007c95f0*/
      *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)&v74 + 3); /*0x1007c95fc*/
      *(_DWORD *)(__dst + 25) = v35; /*0x1007c9600*/
      *((_QWORD *)__dst + 1) = v33; /*0x1007c9604*/
      *((_QWORD *)__dst + 2) = v34; /*0x1007c9608*/
      __dst[24] = (char)v89; /*0x1007c9610*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007c961e*/
      goto LABEL_90; /*0x1007c9621*/
    }
  }
  v88 = v16; /*0x1007c96e1*/
  codexmate_lib::core::repository::Repository::sync_auto_switch_request::h65844a159a40ab13(v79, v89, 0, 0, v69); /*0x1007c96fb*/
  if ( LODWORD(v79[0]) != 11 ) /*0x1007c9707*/
  {
    qmemcpy(v65, v79, 0x60u); /*0x1007c9802*/
    v90 = nullptr; /*0x1007c9805*/
    v91 = 1; /*0x1007c980d*/
    v92 = 0; /*0x1007c9815*/
    v76 = 1610612768; /*0x1007c981d*/
    v74 = (const __m128i *)&v90; /*0x1007c982c*/
    v75 = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c983a*/
    v38 = &v74; /*0x1007c9841*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c984b*/
                            v65,
                            &v74) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c9e72*/
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        v94,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    v42 = v90; /*0x1007c9858*/
    v43 = v91; /*0x1007c985c*/
    v44 = v92; /*0x1007c9860*/
    v37 = (const __m128i **)v79; /*0x1007c9864*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v79); /*0x1007c986b*/
    *((_QWORD *)__dst + 1) = v42; /*0x1007c9870*/
    *((_QWORD *)__dst + 2) = v43; /*0x1007c9874*/
    *((_QWORD *)__dst + 3) = v44; /*0x1007c9878*/
LABEL_52:
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1007c987c*/
    v16 = v88; /*0x1007c988d*/
    if ( (_BYTE)v93 ) /*0x1007c9891*/
      goto LABEL_56; /*0x1007c9891*/
LABEL_55:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v87) != 0 /*0x1007c9e9e*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v37, v38, v39, v41) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1007c9eab*/
    }
    goto LABEL_56; /*0x1007c9eb0*/
  }
  if ( 2LL * v79[1] ) /*0x1007c9714*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79[2], v79[1], 1); /*0x1007c9737*/
  v68[0] = 0x8000000000000000LL; /*0x1007c973c*/
  v79[2] = v68[2]; /*0x1007c9751*/
  v79[1] = v68[1]; /*0x1007c9758*/
  v79[0] = 0x8000000000000000LL; /*0x1007c975f*/
  codexmate_lib::core::repository::Repository::build_daemon_payload::hb3b18dbdadb3ea0e(v65, v89, v79, v68, 0); /*0x1007c9782*/
  if ( v65[0] == 0x8000000000000000LL ) /*0x1007c9798*/
  {
    qmemcpy(v79, &v65[1], sizeof(v79)); /*0x1007c97b4*/
    v37 = &v74; /*0x1007c97b7*/
    v38 = (const __m128i **)v79; /*0x1007c97be*/
    codexmate_lib::commands::system::run_daemon_once_blocking::_$u7b$$u7b$closure$u7d$$u7d$::h00f44e7d4d6871d9( /*0x1007c97c1*/
      &v74,
      v79);
    *((_QWORD *)__dst + 3) = v76; /*0x1007c97cd*/
    v40 = v74; /*0x1007c97d1*/
    v41 = v75; /*0x1007c97d8*/
    *((_QWORD *)__dst + 2) = v75; /*0x1007c97df*/
    *((_QWORD *)__dst + 1) = v40; /*0x1007c97e3*/
    goto LABEL_52; /*0x1007c97e7*/
  }
  v38 = (const __m128i **)v65; /*0x1007c9895*/
  v37 = (const __m128i **)__dst; /*0x1007c98a1*/
  memcpy(__dst, v65, 0xA8u); /*0x1007c98a4*/
  v16 = v88; /*0x1007c98ad*/
  if ( !(_BYTE)v93 ) /*0x1007c98b1*/
    goto LABEL_55; /*0x1007c98b1*/
LABEL_56:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1007c98c7*/
LABEL_90:
  if ( v16 ) /*0x1007c9d60*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v16, 1); /*0x1007c9d6e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..LoadedState$GT$::h1f7da081a0ad6cb7(v64); /*0x1007c9d7a*/
  return __dst; /*0x1007c9d82*/
}