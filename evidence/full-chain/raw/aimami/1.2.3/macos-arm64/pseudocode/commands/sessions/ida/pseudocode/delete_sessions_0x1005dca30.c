// __ZN13codexmate_lib8commands8sessions15delete_sessions @ 0x1005dca30 | 基线 same-set
char *__fastcall codexmate_lib::commands::sessions::delete_sessions::hb1e57fbd78d3e61c(
        char *__dst,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rcx
  char v11; // r15
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  _QWORD __src[17]; // [rsp+8h] [rbp-198h] BYREF
  __int128 v26; // [rsp+90h] [rbp-110h]
  _QWORD v27[12]; // [rsp+A0h] [rbp-100h] BYREF
  __int128 v28; // [rsp+100h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+110h] [rbp-90h]
  __int64 v30; // [rsp+120h] [rbp-80h]
  __int64 v31; // [rsp+128h] [rbp-78h]
  int v32; // [rsp+130h] [rbp-70h]
  __int128 v33; // [rsp+140h] [rbp-60h] BYREF
  __int64 v34; // [rsp+150h] [rbp-50h]
  _QWORD *v35; // [rsp+158h] [rbp-48h]
  unsigned int v36; // [rsp+164h] [rbp-3Ch]
  _QWORD *v37; // [rsp+168h] [rbp-38h]
  _BYTE v38[41]; // [rsp+177h] [rbp-29h] BYREF

  v35 = a3; /*0x1005dca44*/
  v37 = a2; /*0x1005dca4b*/
  v4 = *a2; /*0x1005dca4f*/
  if ( !*a2 ) /*0x1005dca4f*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v37); /*0x1005dcdb0*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1005dca5b*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005dca6b*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1005dcdbd*/
    LOBYTE(v7) = v7 ^ 1; /*0x1005dcdc0*/
  }
  else
  {
    v7 = 0; /*0x1005dca77*/
  }
  if ( *((_BYTE *)v37 + 8) )
  {
    v27[0] = 0; /*0x1005dca94*/
    *(_OWORD *)&v27[1] = 1u; /*0x1005dca9f*/
    __src[2] = 1610612768; /*0x1005dcab5*/
    __src[0] = v27; /*0x1005dcac7*/
    __src[1] = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005dcad5*/
    if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                            "poisoned lock: another task failed inside",
                            41,
                            __src) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dcde7*/
        &anon_338d2c24067067f307e22096ebff88a8_1090,
        55,
        v38,
        &anon_338d2c24067067f307e22096ebff88a8_1093,
        &anon_338d2c24067067f307e22096ebff88a8_1092);
    v8 = v27[0]; /*0x1005dcaff*/
    v9 = v27[1]; /*0x1005dcb06*/
    v10 = v7; /*0x1005dcb0d*/
    v11 = v27[2]; /*0x1005dcb10*/
    LODWORD(v28) = *(_DWORD *)((char *)&v27[2] + 1); /*0x1005dcb1e*/
    *(_DWORD *)((char *)&v28 + 3) = HIDWORD(v27[2]); /*0x1005dcb2a*/
    if ( !(_BYTE)v10
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             "poisoned lock: another task failed inside",
                             41,
                             &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                             v10) )
    {
      *((_BYTE *)v37 + 8) = 1; /*0x1005dcdff*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v37); /*0x1005dcb47*/
    v12 = v28; /*0x1005dcb4c*/
    *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)&v28 + 3); /*0x1005dcb58*/
    *(_DWORD *)(__dst + 25) = v12; /*0x1005dcb5c*/
    *((_QWORD *)__dst + 1) = v8; /*0x1005dcb60*/
    *((_QWORD *)__dst + 2) = v9; /*0x1005dcb64*/
    __dst[24] = v11; /*0x1005dcb68*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1005dcb6f*/
    v13 = v35[1]; /*0x1005dcb76*/
    v14 = v35[2]; /*0x1005dcb7a*/
LABEL_22:
    if ( v14 ) /*0x1005dcd3b*/
    {
      v22 = (_QWORD *)(v13 + 8); /*0x1005dcd3d*/
      do /*0x1005dcd57*/
      {
        v23 = *(v22 - 1); /*0x1005dcd59*/
        if ( v23 ) /*0x1005dcd60*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x1005dcd6a*/
        v22 += 3; /*0x1005dcd50*/
        --v14; /*0x1005dcd54*/
      }
      while ( v14 ); /*0x1005dcd57*/
    }
    goto LABEL_27; /*0x1005dcd57*/
  }
  v36 = v7; /*0x1005dcb83*/
  v13 = v35[1]; /*0x1005dcb8f*/
  v14 = v35[2]; /*0x1005dcb93*/
  codexmate_lib::core::sessions::delete_sessions::h6e446b174d7f6131(v27, v37 + 2, v13, v14); /*0x1005dcba4*/
  if ( LODWORD(v27[0]) != 11 ) /*0x1005dcbb0*/
  {
    qmemcpy(__src, v27, 0x60u); /*0x1005dcc8b*/
    *(_QWORD *)&v33 = 0; /*0x1005dcc8e*/
    *((_QWORD *)&v33 + 1) = 1; /*0x1005dcc96*/
    v34 = 0; /*0x1005dcc9e*/
    *(_QWORD *)&v29 = 1610612768; /*0x1005dcca6*/
    *(_QWORD *)&v28 = &v33; /*0x1005dccb5*/
    *((_QWORD *)&v28 + 1) = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005dccc3*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1005dccd4*/
                            __src,
                            &v28) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dce26*/
        &anon_338d2c24067067f307e22096ebff88a8_1090,
        55,
        v38,
        &anon_338d2c24067067f307e22096ebff88a8_1093,
        &anon_338d2c24067067f307e22096ebff88a8_1092);
    v26 = v33; /*0x1005dcce5*/
    v19 = v34; /*0x1005dccec*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v27); /*0x1005dccf7*/
    *(_OWORD *)(__dst + 8) = v26; /*0x1005dcd03*/
    *((_QWORD *)__dst + 3) = v19; /*0x1005dcd08*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1005dcd10*/
    if ( !(_BYTE)v36 /*0x1005dce47*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v27, &v28, v20, v21) )
    {
      *((_BYTE *)v37 + 8) = 1; /*0x1005dce58*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v37); /*0x1005dcd33*/
    goto LABEL_22; /*0x1005dcd33*/
  }
  v31 = v27[6]; /*0x1005dcbbd*/
  v30 = v27[5]; /*0x1005dcbc8*/
  v28 = *(_OWORD *)&v27[1]; /*0x1005dcbe0*/
  v32 = v27[3]; /*0x1005dcbe7*/
  v29 = *(_OWORD *)&v27[3]; /*0x1005dcbea*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h951a6c24beb81400((__int64)__src, (__int64 *)&v28); /*0x1005dcbff*/
  memcpy(__dst, __src, 0x88u); /*0x1005dcc13*/
  if ( !(_BYTE)v36 /*0x1005dce2d*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, __src, v15, v16) )
  {
    *((_BYTE *)v37 + 8) = 1; /*0x1005dce3e*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v37); /*0x1005dcc38*/
  if ( v14 ) /*0x1005dcc40*/
  {
    v17 = (_QWORD *)(v13 + 8); /*0x1005dcc46*/
    do /*0x1005dcc57*/
    {
      v18 = *(v17 - 1); /*0x1005dcc5d*/
      if ( v18 ) /*0x1005dcc64*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x1005dcc6e*/
      v17 += 3; /*0x1005dcc50*/
      --v14; /*0x1005dcc54*/
    }
    while ( v14 ); /*0x1005dcc57*/
  }
LABEL_27:
  if ( *v35 ) /*0x1005dcd75*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 24LL * *v35, 8); /*0x1005dcd8d*/
  return __dst; /*0x1005dcd95*/
}