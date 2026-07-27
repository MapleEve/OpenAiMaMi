// __ZN13codexmate_lib8commands5voice23upsert_voice_vocabulary @ 0x1006923a0 | 基线 same-set
char *__fastcall codexmate_lib::commands::voice::upsert_voice_vocabulary::h28eb1215eec4fa97(
        char *__dst,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        char a6,
        _QWORD *a7,
        __int64 *a8,
        _QWORD *a9)
{
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rcx
  char v19; // r12
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rsi
  _QWORD *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  char v33; // al
  char v34; // r12
  _QWORD *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // r15
  _QWORD v40[4]; // [rsp+8h] [rbp-3E8h] BYREF
  _BYTE __dsta[256]; // [rsp+28h] [rbp-3C8h] BYREF
  _QWORD v42[46]; // [rsp+128h] [rbp-2C8h] BYREF
  __int64 v43; // [rsp+298h] [rbp-158h]
  __int64 v44; // [rsp+2A0h] [rbp-150h]
  __int64 v45; // [rsp+2A8h] [rbp-148h]
  _QWORD v46[18]; // [rsp+2B0h] [rbp-140h] BYREF
  char v47; // [rsp+340h] [rbp-B0h]
  __int64 v48; // [rsp+348h] [rbp-A8h]
  __int64 v49; // [rsp+350h] [rbp-A0h]
  __int64 v50; // [rsp+358h] [rbp-98h]
  _QWORD v51[3]; // [rsp+360h] [rbp-90h] BYREF
  __int64 v52; // [rsp+378h] [rbp-78h] BYREF
  __int64 v53; // [rsp+380h] [rbp-70h]
  __int64 v54; // [rsp+388h] [rbp-68h]
  __int64 v55; // [rsp+390h] [rbp-60h] BYREF
  __int64 v56; // [rsp+398h] [rbp-58h]
  __int64 v57; // [rsp+3A0h] [rbp-50h]
  _QWORD *v58; // [rsp+3A8h] [rbp-48h]
  __int64 v59; // [rsp+3B0h] [rbp-40h]
  __int64 *v60; // [rsp+3B8h] [rbp-38h]
  _QWORD *v61; // [rsp+3C0h] [rbp-30h]

  v58 = a5; /*0x1006923b7*/
  v61 = a4; /*0x1006923bb*/
  v60 = a3; /*0x1006923bf*/
  v12 = *a2; /*0x1006923c9*/
  if ( !*a2 ) /*0x1006923c9*/
    v12 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1006925c0*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v12); /*0x1006923d5*/
  v59 = 0x7FFFFFFFFFFFFFFFLL; /*0x1006923f2*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006923f9*/
  {
    v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, a2, v13, 0x7FFFFFFFFFFFFFFFLL); /*0x1006925cd*/
    LOBYTE(v14) = v14 ^ 1; /*0x1006925d0*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1006925d4*/
      goto LABEL_5; /*0x1006925db*/
LABEL_25:
    v46[8] = v60[2]; /*0x1006925e1*/
    v26 = *v60; /*0x1006925f4*/
    v46[7] = v60[1]; /*0x1006925fb*/
    v46[6] = v26; /*0x100692602*/
    v46[2] = v61[2]; /*0x100692611*/
    v27 = *v61; /*0x100692618*/
    v46[1] = v61[1]; /*0x10069261f*/
    v46[0] = v27; /*0x100692626*/
    v46[5] = v58[2]; /*0x100692635*/
    v28 = *v58; /*0x10069263c*/
    v46[4] = v58[1]; /*0x100692643*/
    v46[3] = v28; /*0x10069264a*/
    v29 = a7[1]; /*0x100692658*/
    v46[9] = *a7; /*0x10069265c*/
    v46[10] = v29; /*0x100692663*/
    v46[11] = a7[2]; /*0x10069266e*/
    v30 = *a8; /*0x100692679*/
    v46[13] = a8[1]; /*0x100692680*/
    v46[14] = a8[2]; /*0x10069268b*/
    v46[12] = v30; /*0x100692692*/
    v31 = a9[1]; /*0x1006926a0*/
    v46[15] = *a9; /*0x1006926a4*/
    v46[16] = v31; /*0x1006926ab*/
    v46[17] = a9[2]; /*0x1006926b6*/
    v47 = a6; /*0x1006926bd*/
    LODWORD(v61) = v14; /*0x1006926d2*/
    codexmate_lib::core::voice::workspace::upsert_vocabulary::h5d64180514dcd824(v42); /*0x1006926d6*/
    if ( v42[0] == 0x8000000000000000LL ) /*0x1006926ec*/
    {
      qmemcpy(v46, &v42[1], 0x60u); /*0x100692704*/
      v55 = 0; /*0x100692707*/
      v56 = 1; /*0x10069270f*/
      v57 = 0; /*0x100692717*/
      v51[2] = 1610612768; /*0x10069271f*/
      v51[0] = &v55; /*0x10069272b*/
      v51[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100692739*/
      v32 = v51; /*0x100692740*/
      v33 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10069274a*/
              v46,
              v51);
      v34 = (char)v61; /*0x100692751*/
      if ( v33 ) /*0x100692755*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006928e0*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v52,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v52 = v55; /*0x100692763*/
      v53 = v56; /*0x100692767*/
      v54 = v57; /*0x10069276f*/
      v35 = &v42[1]; /*0x100692773*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v42[1]); /*0x100692776*/
      v36 = v52; /*0x10069277f*/
      v37 = v53; /*0x100692783*/
      v43 = v52; /*0x100692787*/
      v44 = v53; /*0x10069278e*/
      v45 = v54; /*0x100692795*/
      *((_QWORD *)__dst + 3) = v54; /*0x10069279c*/
      *((_QWORD *)__dst + 2) = v37; /*0x1006927a0*/
      *((_QWORD *)__dst + 1) = v36; /*0x1006927a4*/
      *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006927a8*/
      if ( v34 ) /*0x1006927ae*/
        goto LABEL_31; /*0x1006927ae*/
    }
    else
    {
      v50 = v42[3]; /*0x1006927bd*/
      v49 = v42[2]; /*0x1006927cb*/
      v48 = v42[1]; /*0x1006927d2*/
      memcpy(__dsta, &v42[4], sizeof(__dsta)); /*0x1006927ec*/
      v43 = v42[1]; /*0x1006927ff*/
      v40[0] = v42[0]; /*0x10069280d*/
      v40[1] = v42[1]; /*0x100692814*/
      v40[2] = v42[2]; /*0x10069281b*/
      v40[3] = v42[3]; /*0x100692822*/
      v38 = (char)v61; /*0x100692837*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::ha21784da8ac92a2a((__int64)v42, v40); /*0x10069283b*/
      v32 = v42; /*0x100692840*/
      v35 = __dst; /*0x10069284c*/
      memcpy(__dst, v42, 0x170u); /*0x10069284f*/
      if ( v38 ) /*0x100692857*/
      {
LABEL_31:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x100692869*/
        return __dst; /*0x10069286c*/
      }
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v59) != 0 /*0x1006928e7*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v35, v32, v37, v36) )
    {
      *((_BYTE *)a2 + 8) = 1; /*0x1006928f4*/
    }
    goto LABEL_31; /*0x1006928f9*/
  }
  v14 = 0; /*0x1006923ff*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x100692409*/
    goto LABEL_25; /*0x100692409*/
LABEL_5:
  v46[0] = 0; /*0x10069240f*/
  v46[1] = 1; /*0x10069241a*/
  v46[2] = 0; /*0x100692425*/
  v42[2] = 1610612768; /*0x100692430*/
  v42[0] = v46; /*0x100692442*/
  v42[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100692450*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          v42) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006928a4*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v52,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v16 = v46[0]; /*0x10069247b*/
  v17 = v46[1]; /*0x100692482*/
  v18 = v14; /*0x100692489*/
  v19 = v46[2]; /*0x10069248c*/
  LODWORD(v51[0]) = *(_DWORD *)((char *)&v46[2] + 1); /*0x10069249a*/
  *(_DWORD *)((char *)v51 + 3) = HIDWORD(v46[2]); /*0x1006924a6*/
  if ( !(_BYTE)v18
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v59) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v15,
                           v18) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1006928b8*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1006924c7*/
  v20 = v51[0]; /*0x1006924cc*/
  *((_DWORD *)__dst + 7) = *(_DWORD *)((char *)v51 + 3); /*0x1006924d8*/
  *(_DWORD *)(__dst + 25) = v20; /*0x1006924db*/
  *((_QWORD *)__dst + 1) = v16; /*0x1006924de*/
  *((_QWORD *)__dst + 2) = v17; /*0x1006924e2*/
  __dst[24] = v19; /*0x1006924e6*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x1006924f4*/
  v21 = *a9; /*0x1006924fb*/
  if ( *a9 != 0x8000000000000000LL && v21 ) /*0x100692506*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a9[1], v21, 1); /*0x100692511*/
  v22 = *a8; /*0x10069251a*/
  v23 = v61; /*0x100692520*/
  if ( *a8 != 0x8000000000000000LL && v22 ) /*0x100692529*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a8[1], v22, 1); /*0x100692534*/
  v24 = *a7; /*0x10069253d*/
  if ( *a7 != 0x8000000000000000LL && v24 ) /*0x100692548*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a7[1], v24, 1); /*0x100692553*/
  if ( *v58 ) /*0x10069255c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58[1], *v58, 1); /*0x10069256d*/
  if ( *v23 ) /*0x100692572*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23[1], *v23, 1); /*0x100692583*/
  v25 = *v60; /*0x10069258c*/
  if ( *v60 != 0x8000000000000000LL && v25 ) /*0x10069259b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60[1], v25, 1); /*0x1006925ae*/
  return __dst; /*0x100692874*/
}