// __ZN13codexmate_lib8commands6system16force_kill_codex @ 0x1007c7860 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::system::force_kill_codex::h41281be10d94c36d(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r14
  char v7; // r15
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  _QWORD *v12; // rsi
  __int128 v13; // kr00_16
  char v14; // r12
  int v15; // r12d
  _BYTE v17[112]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD v18[3]; // [rsp+78h] [rbp-108h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-E0h]
  __int64 v21[12]; // [rsp+B0h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+110h] [rbp-70h] BYREF
  int v23; // [rsp+120h] [rbp-60h]
  _BYTE v24[24]; // [rsp+128h] [rbp-58h] BYREF
  _OWORD v25[4]; // [rsp+140h] [rbp-40h] BYREF

  codexmate_lib::core::relay::codex_mutation::CodexMutationGate::lock::he064726618f265ba( /*0x1007c7888*/
    (__int64)v21,
    a2,
    (__int64)"force closing the ChatGPT desktop appupdating image compatibilityososVersion",
    37);
  if ( LODWORD(v21[0]) == 11 ) /*0x1007c7894*/
  {
    v6 = v21[1]; /*0x1007c789a*/
    v7 = v21[2]; /*0x1007c78a1*/
    codexmate_lib::platform::process::CodexProcessLifecycle::force_close_all::hdface87e1d229c8f( /*0x1007c78b0*/
      (__int64)v21,
      (__int64)a2,
      v3,
      v4,
      v5);
    if ( LODWORD(v21[0]) == 11 ) /*0x1007c78bc*/
    {
      v8 = v21[1]; /*0x1007c78c2*/
      v20 = *(__int64 *)((char *)&v21[3] + 4); /*0x1007c78cf*/
      v25[0] = *(_OWORD *)((char *)&v21[1] + 4); /*0x1007c78ea*/
      *(_QWORD *)&v25[1] = *(__int64 *)((char *)&v21[3] + 4); /*0x1007c78f2*/
      DWORD2(v25[1]) = HIDWORD(v21[4]); /*0x1007c78f6*/
      *(_OWORD *)&v21[1] = *(_OWORD *)((char *)v25 + 12); /*0x1007c7908*/
      v21[0] = *(_QWORD *)((char *)v25 + 4); /*0x1007c7913*/
      LODWORD(v21[3]) = v8; /*0x1007c791a*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hd51e86589713ff9f((__int64)v17, v21); /*0x1007c792e*/
      qmemcpy(a1, v17, 0x70u); /*0x1007c7942*/
      v12 = v18; /*0x1007c7942*/
      v11 = a1 + 14; /*0x1007c7942*/
      v10 = 0; /*0x1007c7942*/
      if ( v7 || !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1007c7958*/
      {
LABEL_11:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v6); /*0x1007c7af7*/
        return a1; /*0x1007c7afa*/
      }
    }
    else
    {
      qmemcpy(v17, v21, 0x60u); /*0x1007c7a31*/
      *(_QWORD *)v24 = 0; /*0x1007c7a34*/
      *(_QWORD *)&v24[8] = 1; /*0x1007c7a3c*/
      *(_QWORD *)&v24[16] = 0; /*0x1007c7a44*/
      v18[2] = 1610612768; /*0x1007c7a4c*/
      v18[0] = v24; /*0x1007c7a5b*/
      v18[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c7a69*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c7a7a*/
                              v17,
                              v18) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c7b55*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          &v22,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v15 = *(_DWORD *)v24; /*0x1007c7a87*/
      v22 = *(_OWORD *)&v24[4]; /*0x1007c7a8f*/
      v23 = *(_DWORD *)&v24[20]; /*0x1007c7a9e*/
      v11 = v21; /*0x1007c7aa1*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v21); /*0x1007c7aa8*/
      v12 = *((_QWORD **)&v22 + 1); /*0x1007c7abe*/
      v9 = v22; /*0x1007c7abe*/
      v25[0] = v22; /*0x1007c7ac2*/
      LODWORD(v25[1]) = v23; /*0x1007c7aca*/
      *((_DWORD *)a1 + 7) = v23; /*0x1007c7acd*/
      *(_OWORD *)((char *)a1 + 12) = __PAIR128__((unsigned __int64)v12, v9); /*0x1007c7ad4*/
      *((_DWORD *)a1 + 2) = v15; /*0x1007c7ad8*/
      *a1 = 0x8000000000000000LL; /*0x1007c7ae0*/
      if ( v7 ) /*0x1007c7ae6*/
        goto LABEL_11; /*0x1007c7ae6*/
      v10 = std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6; /*0x1007c7aef*/
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1007c7af5*/
        goto LABEL_11; /*0x1007c7af5*/
    }
    if ( !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v12, v9, v10) ) /*0x1007c7b5c*/
      *(_BYTE *)(v6 + 8) = 1; /*0x1007c7b65*/
    goto LABEL_11; /*0x1007c7b6a*/
  }
  qmemcpy(v17, v21, 0x60u); /*0x1007c797f*/
  *(_QWORD *)&v25[0] = 0; /*0x1007c7982*/
  *((_QWORD *)&v25[0] + 1) = 1; /*0x1007c798a*/
  *(_QWORD *)&v25[1] = 0; /*0x1007c7992*/
  v20 = 1610612768; /*0x1007c799a*/
  v19[0] = v25; /*0x1007c79a9*/
  v19[1] = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007c79b7*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007c79c8*/
                          v17,
                          v19) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007c7b30*/
      &anon_3ce6d1417794db0febde534c64082f90_390,
      55,
      &v22,
      &anon_3ce6d1417794db0febde534c64082f90_429,
      &anon_3ce6d1417794db0febde534c64082f90_392);
  v13 = v25[0]; /*0x1007c79d9*/
  v14 = v25[1]; /*0x1007c79dd*/
  *((_DWORD *)a1 + 7) = DWORD1(v25[1]); /*0x1007c79e5*/
  *(_DWORD *)((char *)a1 + 25) = *(_DWORD *)((char *)&v25[1] + 1); /*0x1007c79eb*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v21); /*0x1007c79f5*/
  *(_OWORD *)(a1 + 1) = v13; /*0x1007c79fa*/
  *((_BYTE *)a1 + 24) = v14; /*0x1007c7a02*/
  *a1 = 0x8000000000000000LL; /*0x1007c7a13*/
  return a1; /*0x1007c7b02*/
}