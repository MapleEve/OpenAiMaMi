// __ZN13codexmate_lib8commands5voice21upsert_voice_template @ 0x1006917d0 | 基线 same-set
char *__fastcall codexmate_lib::commands::voice::upsert_voice_template::h50044a7f5a51d26d(
        char *__dst,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r13d
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r13
  char v16; // r12
  int v17; // eax
  __int64 *v18; // r15
  __int64 v19; // rsi
  _QWORD *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD v30[4]; // [rsp+8h] [rbp-358h] BYREF
  _BYTE __dsta[208]; // [rsp+28h] [rbp-338h] BYREF
  _QWORD v32[40]; // [rsp+F8h] [rbp-268h] BYREF
  __int64 v33; // [rsp+238h] [rbp-128h]
  __int64 v34; // [rsp+240h] [rbp-120h]
  __int64 v35; // [rsp+248h] [rbp-118h]
  __int64 v36; // [rsp+250h] [rbp-110h]
  __int64 v37; // [rsp+258h] [rbp-108h]
  __int64 v38; // [rsp+260h] [rbp-100h]
  _QWORD v39[12]; // [rsp+268h] [rbp-F8h] BYREF
  _QWORD v40[3]; // [rsp+2C8h] [rbp-98h] BYREF
  __int64 v41; // [rsp+2E0h] [rbp-80h] BYREF
  __int64 v42; // [rsp+2E8h] [rbp-78h]
  __int64 v43; // [rsp+2F0h] [rbp-70h]
  __int64 v44; // [rsp+2F8h] [rbp-68h] BYREF
  __int64 v45; // [rsp+300h] [rbp-60h]
  __int64 v46; // [rsp+308h] [rbp-58h]
  _QWORD *v47; // [rsp+310h] [rbp-50h]
  _QWORD *v48; // [rsp+318h] [rbp-48h]
  __int64 v49; // [rsp+320h] [rbp-40h]
  __int64 *v50; // [rsp+328h] [rbp-38h]
  _QWORD *v51; // [rsp+330h] [rbp-30h]

  v48 = a5; /*0x1006917e7*/
  v47 = a4; /*0x1006917eb*/
  v50 = a3; /*0x1006917ef*/
  v51 = a2; /*0x1006917f6*/
  v8 = *a2; /*0x1006917fa*/
  if ( !*a2 ) /*0x1006917fa*/
    v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v51); /*0x1006919ad*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8); /*0x100691806*/
  v49 = 0x7FFFFFFFFFFFFFFFLL; /*0x100691824*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10069182b*/
  {
    v10 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, 0x7FFFFFFFFFFFFFFFLL); /*0x1006919ba*/
    LOBYTE(v10) = v10 ^ 1; /*0x1006919bd*/
    v11 = v51; /*0x1006919c1*/
    if ( *((_BYTE *)v51 + 8) ) /*0x1006919c5*/
      goto LABEL_5; /*0x1006919cb*/
LABEL_18:
    v20 = v11 + 2; /*0x1006919d1*/
    v39[11] = v50[2]; /*0x1006919dd*/
    v21 = *v50; /*0x1006919e4*/
    v39[10] = v50[1]; /*0x1006919eb*/
    v39[9] = v21; /*0x1006919f2*/
    v39[2] = v47[2]; /*0x100691a01*/
    v22 = *v47; /*0x100691a08*/
    v39[1] = v47[1]; /*0x100691a0f*/
    v39[0] = v22; /*0x100691a16*/
    v23 = v48[1]; /*0x100691a24*/
    v39[3] = *v48; /*0x100691a28*/
    v39[4] = v23; /*0x100691a2f*/
    v39[5] = v48[2]; /*0x100691a3a*/
    v39[8] = a6[2]; /*0x100691a45*/
    v24 = *a6; /*0x100691a4c*/
    v39[7] = a6[1]; /*0x100691a53*/
    v39[6] = v24; /*0x100691a5a*/
    codexmate_lib::core::voice::workspace::upsert_template::h83a8d18a12d05669(v32, v20, v39); /*0x100691a6f*/
    if ( v32[0] == 0x8000000000000000LL ) /*0x100691a85*/
    {
      qmemcpy(v39, &v32[1], sizeof(v39)); /*0x100691a9d*/
      v44 = 0; /*0x100691aa0*/
      v45 = 1; /*0x100691aa8*/
      v46 = 0; /*0x100691ab0*/
      v40[2] = 1610612768; /*0x100691ab8*/
      v40[0] = &v44; /*0x100691ac7*/
      v40[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100691ad5*/
      v25 = v40; /*0x100691adc*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100691ae6*/
                              v39,
                              v40) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100691c7f*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v41,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v41 = v44; /*0x100691afb*/
      v42 = v45; /*0x100691aff*/
      v43 = v46; /*0x100691b07*/
      v26 = &v32[1]; /*0x100691b0b*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v32[1]); /*0x100691b0e*/
      v27 = v41; /*0x100691b17*/
      v28 = v42; /*0x100691b1b*/
      v33 = v41; /*0x100691b1f*/
      v34 = v42; /*0x100691b26*/
      v35 = v43; /*0x100691b2d*/
      *((_QWORD *)__dst + 3) = v43; /*0x100691b34*/
      *((_QWORD *)__dst + 2) = v28; /*0x100691b38*/
      *((_QWORD *)__dst + 1) = v27; /*0x100691b3c*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100691b40*/
      if ( (_BYTE)v10 ) /*0x100691b46*/
        goto LABEL_24; /*0x100691b46*/
    }
    else
    {
      v38 = v32[3]; /*0x100691b55*/
      v37 = v32[2]; /*0x100691b63*/
      v36 = v32[1]; /*0x100691b6a*/
      memcpy(__dsta, &v32[4], sizeof(__dsta)); /*0x100691b84*/
      v33 = v32[1]; /*0x100691b97*/
      v30[0] = v32[0]; /*0x100691ba5*/
      v30[1] = v32[1]; /*0x100691bac*/
      v30[2] = v32[2]; /*0x100691bb3*/
      v30[3] = v32[3]; /*0x100691bba*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf1357b66f780f0d9((__int64)v32, v30); /*0x100691bcf*/
      v25 = v32; /*0x100691bd4*/
      v26 = __dst; /*0x100691be0*/
      memcpy(__dst, v32, 0x140u); /*0x100691be3*/
      if ( (_BYTE)v10 ) /*0x100691beb*/
      {
LABEL_24:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v51); /*0x100691c01*/
        return __dst; /*0x100691c08*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v49) != 0 /*0x100691c86*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v26, v25, v28, v27) )
    {
      *((_BYTE *)v51 + 8) = 1; /*0x100691c97*/
    }
    goto LABEL_24; /*0x100691c9b*/
  }
  v10 = 0; /*0x100691831*/
  v11 = v51; /*0x100691834*/
  if ( !*((_BYTE *)v51 + 8) ) /*0x10069183e*/
    goto LABEL_18; /*0x10069183e*/
LABEL_5:
  v39[0] = 0; /*0x100691844*/
  v39[1] = 1; /*0x10069184f*/
  v39[2] = 0; /*0x10069185a*/
  v32[2] = 1610612768; /*0x100691865*/
  v32[0] = v39; /*0x100691877*/
  v32[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100691885*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v32) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100691c40*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v41,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v13 = v39[0]; /*0x1006918ac*/
  v14 = v10; /*0x1006918b3*/
  v15 = v39[1]; /*0x1006918b6*/
  v16 = v39[2]; /*0x1006918bd*/
  LODWORD(v40[0]) = *(_DWORD *)((char *)&v39[2] + 1); /*0x1006918cb*/
  *(_DWORD *)((char *)v40 + 3) = HIDWORD(v39[2]); /*0x1006918d7*/
  if ( !(_BYTE)v14
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v49) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v12,
                           v14) )
  {
    *((_BYTE *)v51 + 8) = 1; /*0x100691c58*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v51); /*0x1006918fc*/
  v17 = v40[0]; /*0x100691901*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v40 + 3); /*0x10069190d*/
  *(_DWORD *)(__dst + 25) = v17; /*0x100691911*/
  *((_QWORD *)__dst + 1) = v13; /*0x100691915*/
  *((_QWORD *)__dst + 2) = v15; /*0x100691919*/
  __dst[24] = v16; /*0x10069191d*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10069192b*/
  if ( *a6 ) /*0x10069192e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a6[1], *a6, 1); /*0x10069193f*/
  if ( *v48 ) /*0x100691948*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48[1], *v48, 1); /*0x100691959*/
  v18 = v50; /*0x100691968*/
  if ( *v47 ) /*0x100691962*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47[1], *v47, 1); /*0x100691977*/
  v19 = *v18; /*0x10069197c*/
  if ( *v18 != 0x8000000000000000LL && v19 ) /*0x10069198b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18[1], v19, 1); /*0x10069199a*/
  return __dst; /*0x100691c10*/
}