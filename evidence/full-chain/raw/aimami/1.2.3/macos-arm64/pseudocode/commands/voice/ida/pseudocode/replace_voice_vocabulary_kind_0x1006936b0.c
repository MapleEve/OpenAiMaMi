// __ZN13codexmate_lib8commands5voice29replace_voice_vocabulary_kind @ 0x1006936b0 | 基线 same-set
char *__fastcall codexmate_lib::commands::voice::replace_voice_vocabulary_kind::ha965059eda0c9790(
        char *__dst,
        _QWORD *a2,
        char a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r12d
  _QWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r12
  char v17; // r14
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // r15
  _QWORD *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD v36[4]; // [rsp+0h] [rbp-270h] BYREF
  _BYTE v37[96]; // [rsp+20h] [rbp-250h] BYREF
  _QWORD __src[26]; // [rsp+80h] [rbp-1F0h] BYREF
  __int64 v39; // [rsp+150h] [rbp-120h]
  __int64 v40; // [rsp+158h] [rbp-118h]
  __int64 v41; // [rsp+160h] [rbp-110h]
  _QWORD v42[15]; // [rsp+168h] [rbp-108h] BYREF
  _QWORD v43[3]; // [rsp+1E0h] [rbp-90h] BYREF
  __int64 v44; // [rsp+1F8h] [rbp-78h] BYREF
  __int64 v45; // [rsp+200h] [rbp-70h]
  __int64 v46; // [rsp+208h] [rbp-68h]
  __int64 v47; // [rsp+210h] [rbp-60h] BYREF
  __int64 v48; // [rsp+218h] [rbp-58h]
  __int64 v49; // [rsp+220h] [rbp-50h]
  __int64 *v50; // [rsp+228h] [rbp-48h]
  _QWORD *v51; // [rsp+230h] [rbp-40h]
  __int64 v52; // [rsp+238h] [rbp-38h]
  _QWORD *v53; // [rsp+240h] [rbp-30h]

  v51 = a5; /*0x1006936c7*/
  v50 = a4; /*0x1006936cb*/
  v53 = a2; /*0x1006936d5*/
  v9 = *a2; /*0x1006936d9*/
  if ( !*a2 ) /*0x1006936d9*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v53); /*0x100693903*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x1006936e5*/
  v52 = 0x7FFFFFFFFFFFFFFFLL; /*0x100693701*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100693708*/
  {
    v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, a2, v10, 0x7FFFFFFFFFFFFFFFLL); /*0x100693910*/
    LOBYTE(v11) = v11 ^ 1; /*0x100693913*/
    v12 = v53; /*0x100693917*/
    if ( *((_BYTE *)v53 + 8) ) /*0x10069391b*/
      goto LABEL_5; /*0x100693922*/
LABEL_26:
    v42[5] = v50[2]; /*0x100693928*/
    v28 = *v50; /*0x10069393b*/
    v42[4] = v50[1]; /*0x100693942*/
    v42[3] = v28; /*0x100693949*/
    v29 = v51[1]; /*0x100693957*/
    v42[6] = *v51; /*0x10069395b*/
    v42[7] = v29; /*0x100693962*/
    v42[8] = v51[2]; /*0x10069396d*/
    v30 = *a6; /*0x100693974*/
    v42[1] = a6[1]; /*0x10069397c*/
    v42[0] = v30; /*0x100693983*/
    v42[2] = a6[2]; /*0x10069398e*/
    LOBYTE(v42[9]) = a3; /*0x100693995*/
    codexmate_lib::core::voice::workspace::replace_vocabulary_kind::h7dab34fdd28a5dae(__src, v12 + 2, v42); /*0x1006939aa*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x1006939ca*/
    {
      qmemcpy(v42, &__src[1], 0x60u); /*0x1006939e2*/
      v47 = 0; /*0x1006939e5*/
      v48 = 1; /*0x1006939ed*/
      v49 = 0; /*0x1006939f5*/
      v43[2] = 1610612768; /*0x1006939fd*/
      v43[0] = &v47; /*0x100693a09*/
      v43[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100693a17*/
      v31 = v43; /*0x100693a1e*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x100693a28*/
                              v42,
                              v43) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100693bc9*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v44,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v44 = v47; /*0x100693a3d*/
      v45 = v48; /*0x100693a41*/
      v46 = v49; /*0x100693a49*/
      v32 = &__src[1]; /*0x100693a4d*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x100693a50*/
      v33 = v44; /*0x100693a59*/
      v34 = v45; /*0x100693a5d*/
      v39 = v44; /*0x100693a61*/
      v40 = v45; /*0x100693a68*/
      v41 = v46; /*0x100693a6f*/
      *((_QWORD *)__dst + 3) = v46; /*0x100693a76*/
      *((_QWORD *)__dst + 2) = v34; /*0x100693a7a*/
      *((_QWORD *)__dst + 1) = v33; /*0x100693a7e*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100693a8c*/
      if ( (_BYTE)v11 ) /*0x100693a92*/
        goto LABEL_32; /*0x100693a92*/
    }
    else
    {
      v42[14] = __src[3]; /*0x100693aa1*/
      v42[13] = __src[2]; /*0x100693aaf*/
      v42[12] = __src[1]; /*0x100693ab6*/
      qmemcpy(v37, &__src[4], sizeof(v37)); /*0x100693ad0*/
      v39 = __src[1]; /*0x100693ae1*/
      v36[0] = __src[0]; /*0x100693aef*/
      v36[1] = __src[1]; /*0x100693af6*/
      v36[2] = __src[2]; /*0x100693afd*/
      v36[3] = __src[3]; /*0x100693b04*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8831ad64c2bad91((__int64)__src, v36); /*0x100693b19*/
      v31 = __src; /*0x100693b1e*/
      v32 = __dst; /*0x100693b2a*/
      memcpy(__dst, __src, 0xD0u); /*0x100693b2d*/
      if ( (_BYTE)v11 ) /*0x100693b35*/
      {
LABEL_32:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v53); /*0x100693b4b*/
        return __dst; /*0x100693b52*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v52) != 0 /*0x100693bd0*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v32, v31, v34, v33) )
    {
      *((_BYTE *)v53 + 8) = 1; /*0x100693be1*/
    }
    goto LABEL_32; /*0x100693be5*/
  }
  v11 = 0; /*0x10069370e*/
  v12 = v53; /*0x100693711*/
  if ( !*((_BYTE *)v53 + 8) ) /*0x10069371c*/
    goto LABEL_26; /*0x10069371c*/
LABEL_5:
  v42[0] = 0; /*0x100693722*/
  v42[1] = 1; /*0x10069372d*/
  v42[2] = 0; /*0x100693738*/
  __src[2] = 1610612768; /*0x100693743*/
  __src[0] = v42; /*0x100693755*/
  __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100693763*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100693b8a*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v44,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v14 = v42[0]; /*0x10069378a*/
  v15 = v11; /*0x100693791*/
  v16 = v42[1]; /*0x100693794*/
  v17 = v42[2]; /*0x10069379b*/
  LODWORD(v43[0]) = *(_DWORD *)((char *)&v42[2] + 1); /*0x1006937a9*/
  *(_DWORD *)((char *)v43 + 3) = HIDWORD(v42[2]); /*0x1006937b5*/
  if ( !(_BYTE)v15
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v52) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v13,
                           v15) )
  {
    *((_BYTE *)v53 + 8) = 1; /*0x100693ba2*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v53); /*0x1006937da*/
  v18 = v43[0]; /*0x1006937df*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v43 + 3); /*0x1006937eb*/
  *(_DWORD *)(__dst + 25) = v18; /*0x1006937ee*/
  *((_QWORD *)__dst + 1) = v14; /*0x1006937f1*/
  *((_QWORD *)__dst + 2) = v16; /*0x1006937f5*/
  __dst[24] = v17; /*0x1006937f9*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100693807*/
  v19 = a6[1]; /*0x10069380a*/
  v20 = a6[2]; /*0x10069380e*/
  if ( v20 ) /*0x100693815*/
  {
    v21 = (_QWORD *)(v19 + 56); /*0x100693817*/
    do /*0x100693827*/
    {
      v22 = *(v21 - 7); /*0x100693829*/
      if ( v22 ) /*0x100693831*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v21 - 6), v22, 1); /*0x10069383d*/
      v23 = *(v21 - 4); /*0x100693842*/
      if ( v23 ) /*0x10069384a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v21 - 3), v23, 1); /*0x100693856*/
      v24 = *(v21 - 1); /*0x10069385b*/
      if ( 2 * v24 ) /*0x100693860*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v24, 1); /*0x100693876*/
      v21 += 9; /*0x100693820*/
      --v20; /*0x100693824*/
    }
    while ( v20 ); /*0x100693827*/
  }
  if ( *a6 ) /*0x10069387d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 72 * *a6, 8); /*0x100693896*/
  v25 = *v51; /*0x10069389f*/
  v26 = v50; /*0x1006938af*/
  if ( *v51 != 0x8000000000000000LL && v25 ) /*0x1006938b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51[1], v25, 1); /*0x1006938c3*/
  v27 = *v26; /*0x1006938c8*/
  if ( *v26 != 0x8000000000000000LL && v27 ) /*0x1006938e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26[1], v27, 1); /*0x1006938f0*/
  return __dst; /*0x100693b5a*/
}