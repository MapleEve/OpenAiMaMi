// __ZN13codexmate_lib8platform9debug_log11append_line @ 0x1009166b0 | 基线 same-set
double __fastcall codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  const void *v5; // r14
  size_t v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r15
  _DWORD *v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rsi
  double result; // xmm0_8
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  __int128 v27; // kr00_16
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdx
  char v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // r15
  unsigned __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rsi
  int v39; // eax
  _QWORD v40[3]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+28h] [rbp-B8h]
  __int64 v43; // [rsp+30h] [rbp-B0h]
  size_t v44; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-A0h]
  size_t v46; // [rsp+48h] [rbp-98h]
  __int64 v47; // [rsp+50h] [rbp-90h]
  volatile signed __int64 *v48; // [rsp+58h] [rbp-88h] BYREF
  __int64 (__fastcall **v49)(); // [rsp+60h] [rbp-80h]
  __int64 v50; // [rsp+68h] [rbp-78h]
  __int64 (__fastcall *v51)(); // [rsp+70h] [rbp-70h]
  __int128 *v52; // [rsp+78h] [rbp-68h]
  __int64 (__fastcall *v53)(); // [rsp+80h] [rbp-60h]
  __int64 v54; // [rsp+88h] [rbp-58h]
  char v55; // [rsp+97h] [rbp-49h] BYREF
  __int128 v56; // [rsp+98h] [rbp-48h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-38h]
  __int64 v58; // [rsp+B0h] [rbp-30h]

  v58 = a2; /*0x1009166c7*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v48); /*0x1009166d8*/
  chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339_opts::hd34e5f87ddcab190(v40, &v48, 1, 1); /*0x1009166f1*/
  v48 = (volatile signed __int64 *)std::thread::current::current::hd610940328775657(); /*0x1009166fb*/
  v5 = (const void *)std::thread::thread::Thread::name::h45d326ef0fad982b(&v48); /*0x10091670e*/
  if ( !v5 ) /*0x100916714*/
  {
    v54 = a3; /*0x100916730*/
    v8 = a1; /*0x100916734*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, &v48); /*0x100916737*/
    v6 = 7; /*0x10091673c*/
    v7 = 1; /*0x100916742*/
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100916751*/
    if ( v9 ) /*0x100916759*/
    {
      v10 = (__int64)v9; /*0x10091675b*/
      *(_DWORD *)((char *)v9 + 3) = 1684368737; /*0x10091675e*/
      *v9 = 1634627189; /*0x100916765*/
      goto LABEL_12; /*0x10091676b*/
    }
    goto LABEL_4; /*0x100916759*/
  }
  v6 = v4; /*0x100916716*/
  if ( v4 < 0 ) /*0x10091671c*/
  {
    v7 = 0; /*0x10091671e*/
    goto LABEL_4; /*0x10091671e*/
  }
  v54 = a3; /*0x10091676d*/
  v8 = a1; /*0x100916771*/
  if ( !v4 ) /*0x100916774*/
  {
    v10 = 1; /*0x100916797*/
    goto LABEL_11; /*0x100916797*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, &v48); /*0x100916776*/
  v7 = 1; /*0x10091677b*/
  v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100916788*/
  if ( !v11 ) /*0x100916790*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x100916720*/
  v10 = v11; /*0x100916792*/
LABEL_11:
  memcpy((void *)v10, v5, v6); /*0x10091679d*/
LABEL_12:
  v44 = v6; /*0x1009167ab*/
  v45 = v10; /*0x1009167b2*/
  v46 = v6; /*0x1009167b9*/
  v12 = v8; /*0x1009167cb*/
  if ( !_InterlockedDecrement64(v48) ) /*0x1009167c7*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(&v48); /*0x1009167d7*/
  if ( codexmate_lib::platform::debug_log::CODEX_HOME::hdbb870b9a1d083c7 ) /*0x1009167f1*/
    v13 = 0; /*0x1009167fc*/
  else
    v13 = qword_1019FF210; /*0x1009167f3*/
  codexmate_lib::platform::debug_log::redact_text_inner::h676b645192a17d3b(&v56, v58, v54, v13, qword_1019FF218); /*0x100916809*/
  v48 = v40; /*0x100916815*/
  v49 = (__int64 (__fastcall **)())_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100916823*/
  v50 = (__int64)&v44; /*0x10091682e*/
  v51 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100916832*/
  v52 = &v56; /*0x100916836*/
  v53 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10091683a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41, &unk_1017C7A32, &v48); /*0x100916853*/
  v14 = v56; /*0x100916858*/
  if ( (_QWORD)v56 ) /*0x10091685f*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v56 + 1), v56, 1); /*0x10091686a*/
  v16 = v42; /*0x100916876*/
  v17 = v43; /*0x10091687d*/
  v18 = codexmate_lib::platform::debug_log::LOG_WRITE_LOCK::hc2e95efbd2685038; /*0x100916884*/
  v54 = v41; /*0x10091688e*/
  v47 = v42; /*0x100916892*/
  if ( !codexmate_lib::platform::debug_log::LOG_WRITE_LOCK::hc2e95efbd2685038 ) /*0x100916899*/
    v18 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::platform::debug_log::LOG_WRITE_LOCK::hc2e95efbd2685038); /*0x100916b94*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v18); /*0x10091689f*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1009168ae*/
  {
    v39 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v18, v14, v19, v20); /*0x100916b9c*/
    LOBYTE(v39) = v39 ^ 1; /*0x100916ba1*/
    LODWORD(v58) = v39; /*0x100916ba3*/
  }
  else
  {
    LODWORD(v58) = 0; /*0x1009168ba*/
  }
  v21 = *(_QWORD *)(v12 + 8); /*0x1009168c8*/
  v22 = *(_QWORD *)(v12 + 16); /*0x1009168cc*/
  LODWORD(v56) = 0; /*0x1009168d0*/
  WORD5(v56) = 1; /*0x1009168d7*/
  *(_DWORD *)((char *)&v56 + 6) = 0x10000; /*0x1009168dd*/
  WORD2(v56) = 384; /*0x1009168ec*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v48, &v56, v21, v22); /*0x100916900*/
  if ( (_DWORD)v48 == 1 ) /*0x10091690c*/
  {
    v23 = (__int64)v49; /*0x10091690e*/
  }
  else
  {
    LODWORD(v56) = HIDWORD(v48); /*0x10091691a*/
    v24 = v16; /*0x100916921*/
    v23 = std::io::Write::write_all::he2fd9a54c4cbfe2a(&v56, v16, v17); /*0x10091692c*/
    v25 = (unsigned int)v56; /*0x10091692f*/
    close_NOCANCEL((unsigned int)v56); /*0x100916932*/
    if ( !v23 ) /*0x10091693a*/
      goto LABEL_37; /*0x10091693a*/
  }
  v41 = v23; /*0x100916940*/
  _InterlockedIncrement64(&codexmate_lib::platform::debug_log::LOG_WRITE_FAILURES::h697566ae947851b1); /*0x100916947*/
  *(_QWORD *)&v56 = 0; /*0x10091694f*/
  *((_QWORD *)&v56 + 1) = 1; /*0x100916957*/
  v57 = 0; /*0x10091695f*/
  v50 = 1610612768; /*0x100916967*/
  v48 = (volatile signed __int64 *)&v56; /*0x10091696f*/
  v49 = &anon_155c4da9b5393270cfa7378e2b52c417_744; /*0x10091697d*/
  if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(&v41, &v48) ) /*0x100916992*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100916bc9*/
      &anon_155c4da9b5393270cfa7378e2b52c417_745,
      55,
      &v55,
      &anon_155c4da9b5393270cfa7378e2b52c417_758,
      &anon_155c4da9b5393270cfa7378e2b52c417_747);
  v27 = v56; /*0x1009169a3*/
  v28 = v57; /*0x1009169a7*/
  v29 = codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5; /*0x1009169ab*/
  if ( !codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5 ) /*0x1009169b5*/
    v29 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5); /*0x100916bdc*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v29); /*0x1009169bb*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1009169d7*/
    v31 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v29, &v48, v30, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x100916bec*/
  else
    v31 = 0; /*0x1009169dd*/
  v32 = xmmword_1019FF278; /*0x1009169e7*/
  if ( (_QWORD)xmmword_1019FF278 != 0x8000000000000000LL && (_QWORD)xmmword_1019FF278 ) /*0x100916a03*/
  {
    v29 = *((_QWORD *)&xmmword_1019FF278 + 1); /*0x100916a05*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&xmmword_1019FF278 + 1), xmmword_1019FF278, 1); /*0x100916a11*/
  }
  xmmword_1019FF278 = v27; /*0x100916a16*/
  qword_1019FF288 = v28; /*0x100916a24*/
  if ( !v31 /*0x100916c0e*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v29,
                           v32,
                           v30,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    byte_1019FF270 = 1; /*0x100916c1b*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::h56f0bb4e95623ea5); /*0x100916a54*/
  v48 = &v41; /*0x100916a59*/
  v49 = (__int64 (__fastcall **)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100916a67*/
  v25 = (unsigned __int64)&unk_1017C7A3E; /*0x100916a6b*/
  v24 = (__int64)&v48; /*0x100916a72*/
  std::io::stdio::_eprint::hbd0be87d5097bd2e(&unk_1017C7A3E, &v48); /*0x100916a79*/
  if ( (v41 & 3) != 1 ) /*0x100916a8d*/
  {
LABEL_37:
    v33 = v54; /*0x100916a93*/
    v34 = v47; /*0x100916a9b*/
    if ( (_BYTE)v58 ) /*0x100916aa2*/
      goto LABEL_39; /*0x100916aa2*/
    goto LABEL_38; /*0x100916aa2*/
  }
  v35 = v41 - 1; /*0x100916b2e*/
  v36 = *(_QWORD *)(v41 - 1); /*0x100916b32*/
  v37 = *(_QWORD *)(v41 + 7); /*0x100916b36*/
  if ( *(_QWORD *)v37 ) /*0x100916b3a*/
    (*(void (__fastcall **)(__int64))v37)(v36); /*0x100916b45*/
  v38 = *(_QWORD *)(v37 + 8); /*0x100916b47*/
  if ( v38 ) /*0x100916b4e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v38, *(_QWORD *)(v37 + 16)); /*0x100916b57*/
  v24 = 24; /*0x100916b5c*/
  v25 = v35; /*0x100916b66*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24, 8); /*0x100916b69*/
  v33 = v54; /*0x100916b72*/
  v34 = v47; /*0x100916b76*/
  if ( !(_BYTE)v58 ) /*0x100916b7d*/
  {
LABEL_38:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100916bf5*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v25,
                             v24,
                             v26,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      byte_101A046D0 = 1; /*0x100916c02*/
    }
  }
LABEL_39:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::debug_log::LOG_WRITE_LOCK::hc2e95efbd2685038); /*0x100916ac1*/
  if ( v33 ) /*0x100916ad0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x100916add*/
  if ( v44 ) /*0x100916aec*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v44, 1); /*0x100916afa*/
  if ( v40[0] ) /*0x100916b09*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40[1], v40[0], 1); /*0x100916b17*/
  return result; /*0x100916b1c*/
}