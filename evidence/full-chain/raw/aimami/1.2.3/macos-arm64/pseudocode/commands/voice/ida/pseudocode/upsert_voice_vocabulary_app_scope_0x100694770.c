// __ZN13codexmate_lib8commands5voice33upsert_voice_vocabulary_app_scope @ 0x100694770 | 基线 same-set
char *__fastcall codexmate_lib::commands::voice::upsert_voice_vocabulary_app_scope::hfc4c9ebdf1c6379b(
        char *__dst,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r13
  char v13; // r15
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD v23[4]; // [rsp+0h] [rbp-270h] BYREF
  _BYTE v24[96]; // [rsp+20h] [rbp-250h] BYREF
  _QWORD __src[26]; // [rsp+80h] [rbp-1F0h] BYREF
  __int64 v26; // [rsp+150h] [rbp-120h]
  __int64 v27; // [rsp+158h] [rbp-118h]
  __int64 v28; // [rsp+160h] [rbp-110h]
  _QWORD v29[15]; // [rsp+168h] [rbp-108h] BYREF
  _QWORD v30[3]; // [rsp+1E0h] [rbp-90h] BYREF
  __int64 v31; // [rsp+1F8h] [rbp-78h] BYREF
  __int64 v32; // [rsp+200h] [rbp-70h]
  __int64 v33; // [rsp+208h] [rbp-68h]
  __int64 v34; // [rsp+210h] [rbp-60h] BYREF
  __int64 v35; // [rsp+218h] [rbp-58h]
  __int64 v36; // [rsp+220h] [rbp-50h]
  _QWORD *v37; // [rsp+228h] [rbp-48h]
  _QWORD *v38; // [rsp+230h] [rbp-40h]
  _QWORD *v39; // [rsp+238h] [rbp-38h]
  _QWORD *v40; // [rsp+240h] [rbp-30h]

  v38 = a5; /*0x100694784*/
  v39 = a4; /*0x100694788*/
  v37 = a3; /*0x10069478c*/
  v40 = a2; /*0x100694793*/
  v6 = *a2; /*0x100694797*/
  if ( !*a2 ) /*0x100694797*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v40); /*0x100694b48*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x1006947a3*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006947b2*/
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x100694b55*/
    LOBYTE(v9) = v9 ^ 1; /*0x100694b58*/
  }
  else
  {
    v9 = 0; /*0x1006947be*/
  }
  if ( !*((_BYTE *)v40 + 8) ) /*0x1006947d5*/
  {
    v29[2] = v37[2]; /*0x10069491c*/
    v15 = *v37; /*0x100694923*/
    v29[1] = v37[1]; /*0x10069492a*/
    v29[0] = v15; /*0x100694931*/
    v16 = v39[1]; /*0x10069493f*/
    v29[3] = *v39; /*0x100694943*/
    v29[4] = v16; /*0x10069494a*/
    v29[5] = v39[2]; /*0x100694955*/
    v17 = v38[1]; /*0x100694963*/
    v29[6] = *v38; /*0x100694967*/
    v29[7] = v17; /*0x10069496e*/
    v29[8] = v38[2]; /*0x100694979*/
    codexmate_lib::core::voice::workspace::upsert_vocabulary_app_scope::h95e47d40d7c1f060(__src, v40 + 2, v29); /*0x10069498e*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x1006949a8*/
    {
      qmemcpy(v29, &__src[1], 0x60u); /*0x1006949c0*/
      v34 = 0; /*0x1006949c3*/
      v35 = 1; /*0x1006949cb*/
      v36 = 0; /*0x1006949d3*/
      v30[2] = 1610612768; /*0x1006949db*/
      v30[0] = &v34; /*0x1006949e7*/
      v30[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006949f5*/
      v18 = v30; /*0x1006949fc*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100694a06*/
                              v29,
                              v30) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100694bbe*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v31,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v31 = v34; /*0x100694a1b*/
      v32 = v35; /*0x100694a1f*/
      v33 = v36; /*0x100694a27*/
      v19 = &__src[1]; /*0x100694a2b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100694a2e*/
      v20 = v31; /*0x100694a37*/
      v21 = v32; /*0x100694a3b*/
      v26 = v31; /*0x100694a3f*/
      v27 = v32; /*0x100694a46*/
      v28 = v33; /*0x100694a4d*/
      *((_QWORD *)__dst + 3) = v33; /*0x100694a54*/
      *((_QWORD *)__dst + 2) = v21; /*0x100694a58*/
      *((_QWORD *)__dst + 1) = v20; /*0x100694a5c*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100694a60*/
      if ( (_BYTE)v9 ) /*0x100694a66*/
        goto LABEL_21; /*0x100694a66*/
    }
    else
    {
      v29[14] = __src[3]; /*0x100694a75*/
      v29[13] = __src[2]; /*0x100694a83*/
      v29[12] = __src[1]; /*0x100694a8a*/
      qmemcpy(v24, &__src[4], sizeof(v24)); /*0x100694aa4*/
      v26 = __src[1]; /*0x100694ab5*/
      v23[0] = __src[0]; /*0x100694ac3*/
      v23[1] = __src[1]; /*0x100694aca*/
      v23[2] = __src[2]; /*0x100694ad1*/
      v23[3] = __src[3]; /*0x100694ad8*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8831ad64c2bad91((__int64)__src, v23); /*0x100694aed*/
      v18 = __src; /*0x100694af2*/
      v19 = __dst; /*0x100694afe*/
      memcpy(__dst, __src, 0xD0u); /*0x100694b01*/
      if ( (_BYTE)v9 ) /*0x100694b09*/
      {
LABEL_21:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v40); /*0x100694b1e*/
        return __dst; /*0x100694b25*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100694bc5*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v19, v18, v21, v20) )
    {
      *((_BYTE *)v40 + 8) = 1; /*0x100694bd6*/
    }
    goto LABEL_21; /*0x100694bda*/
  }
  v29[0] = 0; /*0x1006947db*/
  v29[1] = 1; /*0x1006947e6*/
  v29[2] = 0; /*0x1006947f1*/
  __src[2] = 1610612768; /*0x1006947fc*/
  __src[0] = v29; /*0x10069480e*/
  __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10069481c*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100694b7f*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v31,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v10 = v29[0]; /*0x100694846*/
  v11 = v9; /*0x10069484d*/
  v12 = v29[1]; /*0x100694850*/
  v13 = v29[2]; /*0x100694857*/
  LODWORD(v30[0]) = *(_DWORD *)((char *)&v29[2] + 1); /*0x100694865*/
  *(_DWORD *)((char *)v30 + 3) = HIDWORD(v29[2]); /*0x100694871*/
  if ( !(_BYTE)v11
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           v11) )
  {
    *((_BYTE *)v40 + 8) = 1; /*0x100694b97*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v40); /*0x10069488e*/
  v14 = v30[0]; /*0x100694893*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v30 + 3); /*0x10069489f*/
  *(_DWORD *)(__dst + 25) = v14; /*0x1006948a3*/
  *((_QWORD *)__dst + 1) = v10; /*0x1006948a7*/
  *((_QWORD *)__dst + 2) = v12; /*0x1006948ab*/
  __dst[24] = v13; /*0x1006948af*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006948b6*/
  if ( *v38 ) /*0x1006948bd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38[1], *v38, 1); /*0x1006948ce*/
  if ( *v39 ) /*0x1006948d7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39[1], *v39, 1); /*0x1006948e8*/
  if ( *v37 ) /*0x1006948f1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37[1], *v37, 1); /*0x100694906*/
  return __dst; /*0x100694b2d*/
}