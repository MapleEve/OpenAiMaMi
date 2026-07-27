// __ZN13codexmate_lib8commands5voice27load_voice_processing_modes @ 0x100692ed0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::load_voice_processing_modes::hd71bd1b389167d4e(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r15
  __int64 v8; // r13
  char v9; // cl
  __int64 v10; // r15
  char v11; // r12
  int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 *v16; // rsi
  _QWORD v18[14]; // [rsp+8h] [rbp-1A8h] BYREF
  __int64 v19; // [rsp+78h] [rbp-138h] BYREF
  _BYTE v20[15]; // [rsp+88h] [rbp-128h]
  _QWORD v21[3]; // [rsp+98h] [rbp-118h] BYREF
  char v22; // [rsp+B0h] [rbp-100h] BYREF
  __int64 v23; // [rsp+B1h] [rbp-FFh]
  __int64 v24; // [rsp+B9h] [rbp-F7h]
  _BYTE v25[15]; // [rsp+C1h] [rbp-EFh]
  _QWORD v26[12]; // [rsp+D0h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+130h] [rbp-80h] BYREF
  __int64 v28; // [rsp+140h] [rbp-70h]
  _BYTE v29[31]; // [rsp+148h] [rbp-68h]
  __int128 v30; // [rsp+168h] [rbp-48h] BYREF
  __int64 v31; // [rsp+178h] [rbp-38h]
  _DWORD v32[12]; // [rsp+180h] [rbp-30h]

  v4 = *a2; /*0x100692eea*/
  if ( !*a2 ) /*0x100692eea*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x10069301a*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x100692ef6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100692f06*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x10069302a*/
    if ( *((_BYTE *)a2 + 8) ) /*0x100693038*/
      goto LABEL_5; /*0x10069303e*/
LABEL_10:
    codexmate_lib::core::voice::workspace::load_processing_modes::h83a5d3c3d40fe8ab(v26, a2 + 2); /*0x100693044*/
    if ( LODWORD(v26[0]) == 11 ) /*0x10069305b*/
    {
      *(_QWORD *)&v20[7] = v26[4]; /*0x10069306f*/
      *(_QWORD *)v20 = *(_QWORD *)((char *)&v26[3] + 1); /*0x10069307d*/
      *(_OWORD *)v29 = *(_OWORD *)((char *)&v26[1] + 1); /*0x100693092*/
      *(_QWORD *)&v29[16] = *(_QWORD *)((char *)&v26[3] + 1); /*0x1006930a8*/
      *(_QWORD *)&v29[23] = *(_QWORD *)&v20[7]; /*0x1006930ac*/
      v22 = v26[1]; /*0x1006930b0*/
      *(_QWORD *)&v25[7] = *(_QWORD *)&v20[7]; /*0x1006930ba*/
      *(_QWORD *)v25 = *(_QWORD *)&v29[16]; /*0x1006930c5*/
      v24 = *(_QWORD *)((char *)&v26[2] + 1); /*0x1006930d4*/
      v23 = *(_QWORD *)((char *)&v26[1] + 1); /*0x1006930db*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::he46dd80689000970((__int64)v18, (__int64 *)&v22); /*0x1006930f0*/
      qmemcpy(a1, v18, 0x70u); /*0x100693104*/
      v16 = &v19; /*0x100693104*/
      v15 = a1 + 14; /*0x100693104*/
      v14 = 0; /*0x100693104*/
      if ( v7 ) /*0x10069310a*/
      {
LABEL_16:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1006931df*/
        return a1; /*0x1006931e2*/
      }
    }
    else
    {
      qmemcpy(v18, v26, 0x60u); /*0x10069312b*/
      *(_QWORD *)&v30 = 0; /*0x10069312e*/
      *((_QWORD *)&v30 + 1) = 1; /*0x100693136*/
      v31 = 0; /*0x10069313e*/
      v21[2] = 1610612768; /*0x100693146*/
      v21[0] = &v30; /*0x100693155*/
      v21[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100693163*/
      v16 = v21; /*0x10069316a*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100693174*/
                              v18,
                              v21) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100693255*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v27,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v27 = v30; /*0x100693189*/
      v28 = v31; /*0x100693195*/
      v15 = v26; /*0x100693199*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v26); /*0x1006931a0*/
      v13 = *((_QWORD *)&v27 + 1); /*0x1006931ad*/
      v14 = v27; /*0x1006931ad*/
      *(_OWORD *)&v29[7] = v27; /*0x1006931b1*/
      *(_QWORD *)&v29[23] = v28; /*0x1006931b9*/
      a1[3] = v28; /*0x1006931bd*/
      *(_OWORD *)(a1 + 1) = __PAIR128__(v13, v14); /*0x1006931c5*/
      *a1 = 0x8000000000000000LL; /*0x1006931ce*/
      if ( v7 ) /*0x1006931d4*/
        goto LABEL_16; /*0x1006931d4*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10069325c*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v15, v16, v13, v14) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x100693269*/
    }
    goto LABEL_16; /*0x10069326d*/
  }
  v7 = 0; /*0x100692f12*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x100692f25*/
    goto LABEL_10; /*0x100692f25*/
LABEL_5:
  v26[0] = 0; /*0x100692f2b*/
  v26[1] = 1; /*0x100692f36*/
  v26[2] = 0; /*0x100692f41*/
  v18[2] = 1610612768; /*0x100692f4c*/
  v18[0] = v26; /*0x100692f5e*/
  v18[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100692f6c*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v18) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069321a*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v27,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v8 = v26[0]; /*0x100692f96*/
  v9 = v7; /*0x100692f9d*/
  v10 = v26[1]; /*0x100692fa0*/
  v11 = v26[2]; /*0x100692fa7*/
  v32[0] = *(_DWORD *)((char *)&v26[2] + 1); /*0x100692fb5*/
  *(_DWORD *)((char *)v32 + 3) = HIDWORD(v26[2]); /*0x100692fbe*/
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x10069322e*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100692fde*/
  a1[1] = v8; /*0x100692fe3*/
  a1[2] = v10; /*0x100692fe7*/
  *((_BYTE *)a1 + 24) = v11; /*0x100692feb*/
  v12 = *(_DWORD *)((char *)v32 + 3); /*0x100692ff2*/
  *(_DWORD *)((char *)a1 + 25) = v32[0]; /*0x100692ff5*/
  *((_DWORD *)a1 + 7) = v12; /*0x100692ff9*/
  *a1 = 0x8000000000000000LL; /*0x10069300a*/
  return a1; /*0x1006931ea*/
}