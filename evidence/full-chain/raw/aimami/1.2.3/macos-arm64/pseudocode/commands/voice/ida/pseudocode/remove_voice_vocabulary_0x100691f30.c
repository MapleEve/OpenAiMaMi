// __ZN13codexmate_lib8commands5voice23remove_voice_vocabulary @ 0x100691f30 | 基线 same-set
char *__fastcall codexmate_lib::commands::voice::remove_voice_vocabulary::h0ea1dd0522fa3b71(
        char *__dst,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  char v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[4]; // [rsp+0h] [rbp-260h] BYREF
  _BYTE v20[96]; // [rsp+20h] [rbp-240h] BYREF
  _QWORD __src[26]; // [rsp+80h] [rbp-1E0h] BYREF
  _QWORD v22[12]; // [rsp+150h] [rbp-110h] BYREF
  __int64 v23; // [rsp+1B0h] [rbp-B0h]
  __int64 v24; // [rsp+1B8h] [rbp-A8h]
  __int64 v25; // [rsp+1C0h] [rbp-A0h]
  __int64 v26; // [rsp+1C8h] [rbp-98h]
  __int64 v27; // [rsp+1D0h] [rbp-90h]
  __int64 v28; // [rsp+1D8h] [rbp-88h]
  _QWORD v29[3]; // [rsp+1E0h] [rbp-80h] BYREF
  __int64 v30; // [rsp+1F8h] [rbp-68h] BYREF
  __int64 v31; // [rsp+200h] [rbp-60h]
  __int64 v32; // [rsp+208h] [rbp-58h]
  __int64 v33; // [rsp+210h] [rbp-50h] BYREF
  __int64 v34; // [rsp+218h] [rbp-48h]
  __int64 v35; // [rsp+220h] [rbp-40h]
  _QWORD *v36; // [rsp+228h] [rbp-38h]
  _QWORD *v37; // [rsp+230h] [rbp-30h]

  v36 = a3; /*0x100691f44*/
  v37 = a2; /*0x100691f4b*/
  v4 = *a2; /*0x100691f4f*/
  if ( !*a2 ) /*0x100691f4f*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v37); /*0x100692266*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x100691f5b*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100691f6a*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x100692273*/
    LOBYTE(v7) = v7 ^ 1; /*0x100692276*/
  }
  else
  {
    v7 = 0; /*0x100691f76*/
  }
  if ( !*((_BYTE *)v37 + 8) ) /*0x100691f8d*/
  {
    codexmate_lib::core::voice::workspace::remove_vocabulary::h7e1134832848bb9b(__src, v37 + 2, v36[1], v36[2]); /*0x100692081*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x10069209c*/
    {
      qmemcpy(v22, &__src[1], sizeof(v22)); /*0x1006920b4*/
      v33 = 0; /*0x1006920b7*/
      v34 = 1; /*0x1006920bf*/
      v35 = 0; /*0x1006920c7*/
      v29[2] = 1610612768; /*0x1006920cf*/
      v29[0] = &v33; /*0x1006920db*/
      v29[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006920e6*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006920f1*/
                              v22,
                              v29) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006922dc*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v30,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v30 = v33; /*0x100692106*/
      v31 = v34; /*0x10069210a*/
      v32 = v35; /*0x100692112*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100692119*/
      v13 = v30; /*0x100692122*/
      v14 = v31; /*0x100692126*/
      v23 = v30; /*0x10069212a*/
      v24 = v31; /*0x100692131*/
      v25 = v32; /*0x100692138*/
      *((_QWORD *)__dst + 3) = v32; /*0x10069213f*/
      *((_QWORD *)__dst + 2) = v14; /*0x100692143*/
      *((_QWORD *)__dst + 1) = v13; /*0x100692147*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10069214b*/
      if ( (_BYTE)v7 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100692164*/
        goto LABEL_17; /*0x100692164*/
      v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&__src[1], v29, v14, v13); /*0x10069216a*/
    }
    else
    {
      v28 = __src[3]; /*0x100692178*/
      v27 = __src[2]; /*0x100692187*/
      v26 = __src[1]; /*0x10069218e*/
      qmemcpy(v20, &__src[4], sizeof(v20)); /*0x1006921a8*/
      v23 = __src[1]; /*0x1006921b9*/
      v19[0] = __src[0]; /*0x1006921c7*/
      v19[1] = __src[1]; /*0x1006921ce*/
      v19[2] = __src[2]; /*0x1006921d5*/
      v19[3] = __src[3]; /*0x1006921dc*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8831ad64c2bad91((__int64)__src, v19); /*0x1006921f1*/
      memcpy(__dst, __src, 0xD0u); /*0x100692205*/
      if ( (_BYTE)v7 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x10069221c*/
      {
LABEL_17:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v37); /*0x100692222*/
        goto LABEL_18; /*0x100692229*/
      }
      v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, __src, v16, v17); /*0x1006922e3*/
    }
    if ( !v15 ) /*0x1006922ea*/
      *((_BYTE *)v37 + 8) = 1; /*0x1006922f4*/
    goto LABEL_17; /*0x1006922f8*/
  }
  v22[0] = 0; /*0x100691f93*/
  v22[1] = 1; /*0x100691f9e*/
  v22[2] = 0; /*0x100691fa9*/
  __src[2] = 1610612768; /*0x100691fb4*/
  __src[0] = v22; /*0x100691fc6*/
  __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100691fd4*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10069229d*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v30,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v8 = v22[0]; /*0x100691ffe*/
  v9 = v22[1]; /*0x100692005*/
  v10 = v7; /*0x10069200c*/
  v11 = v22[2]; /*0x10069200f*/
  LODWORD(v29[0]) = *(_DWORD *)((char *)&v22[2] + 1); /*0x10069201d*/
  *(_DWORD *)((char *)v29 + 3) = HIDWORD(v22[2]); /*0x100692026*/
  if ( !(_BYTE)v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v10) )
  {
    *((_BYTE *)v37 + 8) = 1; /*0x1006922b5*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v37); /*0x100692040*/
  v12 = v29[0]; /*0x100692045*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v29 + 3); /*0x10069204b*/
  *(_DWORD *)(__dst + 25) = v12; /*0x10069204f*/
  *((_QWORD *)__dst + 1) = v8; /*0x100692053*/
  *((_QWORD *)__dst + 2) = v9; /*0x100692057*/
  __dst[24] = v11; /*0x10069205b*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100692062*/
LABEL_18:
  if ( *v36 ) /*0x100692232*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36[1], *v36, 1); /*0x100692243*/
  return __dst; /*0x10069224b*/
}