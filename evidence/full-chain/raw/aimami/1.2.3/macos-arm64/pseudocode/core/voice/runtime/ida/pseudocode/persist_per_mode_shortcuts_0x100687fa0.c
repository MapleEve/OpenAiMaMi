// __ZN13codexmate_lib4core5voice7runtime26persist_per_mode_shortcuts @ 0x100687fa0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::persist_per_mode_shortcuts::h77a88a4d47aef74a(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // kr00_16
  char v10; // r12
  __int64 result; // rax
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _OWORD **v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r13
  char v23; // r12
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  double v27; // xmm0_8
  __int64 v28; // rax
  _OWORD *v29; // [rsp+8h] [rbp-738h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+10h] [rbp-730h]
  __int64 v31; // [rsp+18h] [rbp-728h]
  _OWORD __dst[25]; // [rsp+2F0h] [rbp-450h] BYREF
  _OWORD __src[25]; // [rsp+480h] [rbp-2C0h] BYREF
  double v34[3]; // [rsp+610h] [rbp-130h]
  _QWORD v35[12]; // [rsp+628h] [rbp-118h] BYREF
  _QWORD v36[3]; // [rsp+688h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+6A0h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+6A8h] [rbp-98h]
  __int64 v39; // [rsp+6B0h] [rbp-90h]
  __int64 v40; // [rsp+6B8h] [rbp-88h] BYREF
  __int64 v41; // [rsp+6C0h] [rbp-80h]
  __int64 v42; // [rsp+6C8h] [rbp-78h]
  __int128 v43; // [rsp+6D0h] [rbp-70h]
  __int128 v44; // [rsp+6E0h] [rbp-60h]
  __int128 v45; // [rsp+6F0h] [rbp-50h]
  _DWORD v46[2]; // [rsp+704h] [rbp-3Ch]
  int v47; // [rsp+70Ch] [rbp-34h]
  _QWORD *v48; // [rsp+710h] [rbp-30h]

  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x100687fcc*/
  if ( !v4 ) /*0x100687fd4*/
  {
    *(_QWORD *)&__src[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006880f6*/
    *((_QWORD *)&__src[0] + 1) = 76; /*0x1006880fd*/
    v29 = __src; /*0x10068810f*/
    v30 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10068811d*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100688139*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v29,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = v4; /*0x100687fda*/
  v6 = *v4; /*0x100687fdd*/
  if ( !*v4 ) /*0x100687fdd*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4); /*0x100688146*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x100687fe9*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v13 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x10068814e*/
    LOBYTE(v13) = v13 ^ 1; /*0x100688153*/
    LODWORD(v48) = v13; /*0x100688155*/
    if ( *((_BYTE *)v5 + 8) ) /*0x100688162*/
      goto LABEL_6; /*0x100688169*/
LABEL_12:
    _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x10068816f*/
      &v29,
      v5 + 2);
    if ( !(_BYTE)v48 /*0x10068859b*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v29, v5 + 2, v14, v15) )
    {
      *((_BYTE *)v5 + 8) = 1; /*0x1006885a8*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x100688198*/
    v16 = &v29; /*0x1006881a4*/
    codexmate_lib::core::voice::runtime::read_runtime_file::h7a5982944da78c50((char *)__src, (__int64)&v29); /*0x1006881ab*/
    if ( *(_QWORD *)&__src[0] == 0x8000000000000000LL ) /*0x1006881bb*/
    {
      _$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$u20$as$u20$core..default..Default$GT$::default::h3222dc64aa78695e(__dst); /*0x1006881c4*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb((char *)__src + 8); /*0x1006881d0*/
    }
    else
    {
      v16 = (_OWORD **)__src; /*0x1006881de*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x1006881ea*/
    }
    v17 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x1006881f7*/
    v48 = (_QWORD *)(v17 + 32); /*0x1006881fe*/
    v18 = *(_QWORD *)(v17 + 32); /*0x100688202*/
    if ( !v18 ) /*0x100688209*/
      v18 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v48); /*0x100688345*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v18); /*0x10068820f*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v25 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v18, v16, v19, v20); /*0x10068834d*/
      LOBYTE(v25) = v25 ^ 1; /*0x100688352*/
      v47 = v25; /*0x100688354*/
      if ( *(_BYTE *)(v17 + 40) ) /*0x100688357*/
        goto LABEL_21; /*0x10068835e*/
    }
    else
    {
      v47 = 0; /*0x100688221*/
      if ( *(_BYTE *)(v17 + 40) )
      {
LABEL_21:
        v35[0] = 0; /*0x100688235*/
        v35[1] = 1; /*0x100688240*/
        v35[2] = 0; /*0x10068824b*/
        *(_QWORD *)&__src[1] = 1610612768; /*0x100688256*/
        *(_QWORD *)&__src[0] = v35; /*0x100688268*/
        *((_QWORD *)&__src[0] + 1) = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100688276*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                __src) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100688594*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v40,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v21 = v35[0]; /*0x1006882a3*/
        v22 = v35[1]; /*0x1006882aa*/
        v23 = v35[2]; /*0x1006882b1*/
        LODWORD(v36[0]) = *(_DWORD *)((char *)&v35[2] + 1); /*0x1006882bf*/
        *(_DWORD *)((char *)v36 + 3) = HIDWORD(v35[2]); /*0x1006882cb*/
        if ( !(_BYTE)v47
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 0x7FFFFFFFFFFFFFFFLL,
                                 &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
        {
          *(_BYTE *)(v17 + 40) = 1; /*0x1006885bf*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v48); /*0x1006882ea*/
        v24 = v36[0]; /*0x1006882ef*/
        *(_DWORD *)(a1 + 20) = *(_DWORD *)((char *)v36 + 3); /*0x1006882fb*/
        *(_DWORD *)(a1 + 17) = v24; /*0x1006882fe*/
        *(_QWORD *)a1 = v21; /*0x100688301*/
        *(_QWORD *)(a1 + 8) = v22; /*0x100688304*/
        *(_BYTE *)(a1 + 16) = v23; /*0x100688308*/
        goto LABEL_33; /*0x10068830c*/
      }
    }
    *(_OWORD *)v34 = *(_OWORD *)(v17 + 808); /*0x100688376*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h08697cf7f9d0479a( /*0x100688384*/
      __src,
      v17 + 776);
    v27 = v34[0]; /*0x100688389*/
    __src[2] = *(_OWORD *)v34; /*0x100688390*/
    v43 = __src[0]; /*0x1006883a5*/
    v44 = __src[1]; /*0x1006883b4*/
    v45 = *(_OWORD *)v34; /*0x1006883d1*/
    if ( !(_BYTE)v47 /*0x1006885c9*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             __src,
                             v17 + 776,
                             v26,
                             *(_QWORD *)&v34[1]) )
    {
      *(_BYTE *)(v17 + 40) = 1; /*0x1006885d6*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v48); /*0x1006883f3*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd743cfc519763180(&__dst[18]); /*0x100688405*/
    __dst[20] = v45; /*0x100688416*/
    __dst[19] = v44; /*0x100688426*/
    __dst[18] = v43; /*0x100688436*/
    codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65(v35, (__int64)&v29, (__int64)__dst, v27); /*0x10068844e*/
    if ( LODWORD(v35[0]) == 11 ) /*0x10068845a*/
    {
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x10068845c*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(__dst); /*0x100688466*/
      return core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v29); /*0x10068855b*/
    }
    qmemcpy(__src, v35, 0x60u); /*0x100688486*/
    v37 = 0; /*0x100688489*/
    v38 = 1; /*0x100688494*/
    v39 = 0; /*0x10068849f*/
    v36[2] = 1610612768; /*0x1006884aa*/
    v36[0] = &v37; /*0x1006884bc*/
    v36[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x1006884ca*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1006884db*/
                            __src,
                            v36) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100688601*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v40,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v40 = v37; /*0x1006884f6*/
    v41 = v38; /*0x1006884fd*/
    v42 = v39; /*0x100688508*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v35); /*0x100688513*/
    *(_QWORD *)(a1 + 16) = v42; /*0x10068851c*/
    v28 = v40; /*0x100688520*/
    *(_QWORD *)(a1 + 8) = v41; /*0x10068852b*/
    *(_QWORD *)a1 = v28; /*0x10068852f*/
LABEL_33:
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..runtime..VoiceRuntimeFile$GT$::hbf8a3eb45d67413e(__dst); /*0x100688532*/
    return core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v29); /*0x100688539*/
  }
  LODWORD(v48) = 0; /*0x100688005*/
  if ( !*((_BYTE *)v5 + 8) ) /*0x10068801d*/
    goto LABEL_12; /*0x10068801d*/
LABEL_6:
  *(_QWORD *)&__src[0] = 0; /*0x100688023*/
  *((_QWORD *)&__src[0] + 1) = 1; /*0x10068802e*/
  *(_QWORD *)&__src[1] = 0; /*0x100688039*/
  v31 = 1610612768; /*0x100688044*/
  v29 = __src; /*0x100688056*/
  v30 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100688064*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          &v29) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100688332*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v40,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v9 = __src[0]; /*0x100688098*/
  v10 = __src[1]; /*0x10068809f*/
  v46[0] = *(_DWORD *)((char *)&__src[1] + 1); /*0x1006880ad*/
  *(_DWORD *)((char *)v46 + 3) = DWORD1(__src[1]); /*0x1006880b6*/
  if ( !(_BYTE)v48
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           0x7FFFFFFFFFFFFFFFLL,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *((_BYTE *)v5 + 8) = 1; /*0x100688569*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x1006880ce*/
  *(_OWORD *)a1 = v9; /*0x1006880d3*/
  *(_BYTE *)(a1 + 16) = v10; /*0x1006880da*/
  result = v46[0]; /*0x1006880de*/
  v12 = *(_DWORD *)((char *)v46 + 3); /*0x1006880e1*/
  *(_DWORD *)(a1 + 17) = v46[0]; /*0x1006880e4*/
  *(_DWORD *)(a1 + 20) = v12; /*0x1006880e7*/
  return result; /*0x10068854a*/
}