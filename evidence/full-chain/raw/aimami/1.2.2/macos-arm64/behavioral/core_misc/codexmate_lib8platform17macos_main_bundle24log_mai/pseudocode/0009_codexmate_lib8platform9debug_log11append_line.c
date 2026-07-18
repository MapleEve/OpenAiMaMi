// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle24log_mai 0x1008c6ab0 d=1
__int64 __fastcall codexmate_lib::platform::debug_log::append_line::hd94facb518a61d68(
        __int64 a1,
        __int64 a2,
        size_t a3)
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
  __int64 v14; // r15
  __int64 v15; // r13
  const void *v16; // rdx
  size_t v17; // rcx
  __int64 v18; // r15
  __int128 v19; // kr00_16
  __int64 v20; // rbx
  char v21; // r15
  size_t v22; // rbx
  __int64 result; // rax
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // [rsp+8h] [rbp-D8h] BYREF
  size_t v27; // [rsp+20h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-B8h]
  __int64 v29; // [rsp+30h] [rbp-B0h]
  _QWORD v30[4]; // [rsp+38h] [rbp-A8h] BYREF
  __int128 *v31; // [rsp+58h] [rbp-88h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+60h] [rbp-80h]
  __int64 v33; // [rsp+68h] [rbp-78h]
  __int64 (__fastcall *v34)(); // [rsp+70h] [rbp-70h]
  __int128 *v35; // [rsp+78h] [rbp-68h]
  __int64 (__fastcall *v36)(); // [rsp+80h] [rbp-60h]
  size_t v37; // [rsp+88h] [rbp-58h]
  char v38; // [rsp+97h] [rbp-49h] BYREF
  __int128 v39; // [rsp+98h] [rbp-48h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-38h]
  __int64 v41; // [rsp+B0h] [rbp-30h]

  v41 = a2; /*0x1008c6ac7*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v31); /*0x1008c6ad8*/
  chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339_opts::h59d472254d332601(&v26, &v31, 1, 1); /*0x1008c6af1*/
  v31 = (__int128 *)std::thread::current::current::hd610940328775657(); /*0x1008c6afb*/
  v5 = (const void *)std::thread::thread::Thread::name::h45d326ef0fad982b(&v31); /*0x1008c6b0e*/
  if ( !v5 ) /*0x1008c6b14*/
  {
    v37 = a3; /*0x1008c6b30*/
    v8 = a1; /*0x1008c6b34*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008c6b37*/
    v6 = 7; /*0x1008c6b3c*/
    v7 = 1; /*0x1008c6b42*/
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1008c6b51*/
    if ( v9 ) /*0x1008c6b59*/
    {
      v10 = (__int64)v9; /*0x1008c6b5b*/
      *(_DWORD *)((char *)v9 + 3) = 1684368737; /*0x1008c6b5e*/
      *v9 = 1634627189; /*0x1008c6b65*/
      goto LABEL_12; /*0x1008c6b6b*/
    }
    goto LABEL_4; /*0x1008c6b59*/
  }
  v6 = v4; /*0x1008c6b16*/
  if ( v4 < 0 ) /*0x1008c6b1c*/
  {
    v7 = 0; /*0x1008c6b1e*/
    goto LABEL_4; /*0x1008c6b1e*/
  }
  v37 = a3; /*0x1008c6b6d*/
  v8 = a1; /*0x1008c6b71*/
  if ( !v4 ) /*0x1008c6b74*/
  {
    v10 = 1; /*0x1008c6b97*/
    goto LABEL_11; /*0x1008c6b97*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008c6b76*/
  v7 = 1; /*0x1008c6b7b*/
  v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x1008c6b88*/
  if ( !v11 ) /*0x1008c6b90*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1008c6b20*/
  v10 = v11; /*0x1008c6b92*/
LABEL_11:
  memcpy((void *)v10, v5, v6); /*0x1008c6b9d*/
LABEL_12:
  v30[0] = v6; /*0x1008c6bab*/
  v30[1] = v10; /*0x1008c6bb2*/
  v30[2] = v6; /*0x1008c6bb9*/
  v12 = v8; /*0x1008c6bcb*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v31) ) /*0x1008c6bc7*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939(&v31); /*0x1008c6bd7*/
  if ( codexmate_lib::platform::debug_log::CODEX_HOME::hdef0661e4f759be7 ) /*0x1008c6bf1*/
    v13 = 0; /*0x1008c6bfc*/
  else
    v13 = qword_10192A058; /*0x1008c6bf3*/
  codexmate_lib::platform::debug_log::redact_text_inner::hab2d4f742d78f6c8(&v39, v41, v37, v13, qword_10192A060); /*0x1008c6c09*/
  v31 = (__int128 *)&v26; /*0x1008c6c15*/
  v32 = (__int64 (__fastcall **)())_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c6c23*/
  v33 = (__int64)v30; /*0x1008c6c2e*/
  v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c6c32*/
  v35 = &v39; /*0x1008c6c36*/
  v36 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008c6c3a*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v27, byte_1016FA2FE, (unsigned __int64)&v31); /*0x1008c6c53*/
  if ( (_QWORD)v39 ) /*0x1008c6c5f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c6c6a*/
  v14 = v28; /*0x1008c6c76*/
  v15 = v29; /*0x1008c6c7d*/
  v37 = v27; /*0x1008c6c8e*/
  v30[3] = v28; /*0x1008c6c92*/
  if ( !codexmate_lib::platform::debug_log::LOG_WRITE_LOCK::h03b604107343e8dd ) /*0x1008c6c99*/
    std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa(&codexmate_lib::platform::debug_log::LOG_WRITE_LOCK::h03b604107343e8dd); /*0x1008c6f8f*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1008c6c9f*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1008c6cae*/
  {
    v25 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x1008c6f9c*/
    LOBYTE(v25) = v25 ^ 1; /*0x1008c6fa1*/
    LODWORD(v41) = v25; /*0x1008c6fa3*/
  }
  else
  {
    LODWORD(v41) = 0; /*0x1008c6cba*/
  }
  v16 = *(const void **)(v12 + 8); /*0x1008c6cc8*/
  v17 = *(_QWORD *)(v12 + 16); /*0x1008c6ccc*/
  LODWORD(v39) = 0; /*0x1008c6cd0*/
  WORD5(v39) = 1; /*0x1008c6cd7*/
  *(_DWORD *)((char *)&v39 + 6) = 0x10000; /*0x1008c6cdd*/
  WORD2(v39) = 384; /*0x1008c6cec*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa((__int64)&v31, (__int64)&v39, v16, v17); /*0x1008c6d00*/
  if ( (_DWORD)v31 == 1 ) /*0x1008c6d0c*/
  {
    v18 = (__int64)v32; /*0x1008c6d0e*/
  }
  else
  {
    LODWORD(v39) = HIDWORD(v31); /*0x1008c6d1a*/
    v18 = std::io::Write::write_all::ha7991334f9d9412b(&v39, v14, v15); /*0x1008c6d2c*/
    close_NOCANCEL((unsigned int)v39); /*0x1008c6d32*/
    if ( !v18 ) /*0x1008c6d3a*/
      goto LABEL_37; /*0x1008c6d3a*/
  }
  v27 = v18; /*0x1008c6d40*/
  _InterlockedIncrement64(&codexmate_lib::platform::debug_log::LOG_WRITE_FAILURES::h4b8c610794752f0c); /*0x1008c6d47*/
  *(_QWORD *)&v39 = 0; /*0x1008c6d4f*/
  *((_QWORD *)&v39 + 1) = 1; /*0x1008c6d57*/
  v40 = 0; /*0x1008c6d5f*/
  v33 = 1610612768; /*0x1008c6d67*/
  v31 = &v39; /*0x1008c6d6f*/
  v32 = &anon_fd792a2461ce7c8d75006ec63925405b_384; /*0x1008c6d7d*/
  if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(&v27, &v31) ) /*0x1008c6d92*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008c6fc9*/
      &anon_fd792a2461ce7c8d75006ec63925405b_385,
      55,
      &v38,
      &anon_fd792a2461ce7c8d75006ec63925405b_413,
      &anon_fd792a2461ce7c8d75006ec63925405b_387);
  v19 = v39; /*0x1008c6da3*/
  v20 = v40; /*0x1008c6da7*/
  if ( !codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::hdb2521cf7a94a9d4 ) /*0x1008c6db5*/
    std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa(&codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::hdb2521cf7a94a9d4); /*0x1008c6fd7*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1008c6dbb*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1008c6dd7*/
    v21 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ^ 1; /*0x1008c6fec*/
  else
    v21 = 0; /*0x1008c6ddd*/
  if ( (_QWORD)xmmword_10192A0C0 != 0x8000000000000000LL && (_QWORD)xmmword_10192A0C0 ) /*0x1008c6e03*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c6e11*/
  xmmword_10192A0C0 = v19; /*0x1008c6e16*/
  qword_10192A0D0 = v20; /*0x1008c6e24*/
  if ( !v21 /*0x1008c700e*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    byte_10192A0B8 = 1; /*0x1008c701b*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::debug_log::LAST_LOG_WRITE_ERROR::hdb2521cf7a94a9d4); /*0x1008c6e54*/
  v31 = (__int128 *)&v27; /*0x1008c6e59*/
  v32 = (__int64 (__fastcall **)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008c6e67*/
  std::io::stdio::_eprint::hbd0be87d5097bd2e(&unk_1016FA30A, &v31); /*0x1008c6e79*/
  if ( (v27 & 3) != 1 ) /*0x1008c6e8d*/
  {
LABEL_37:
    v22 = v37; /*0x1008c6e93*/
    if ( (_BYTE)v41 ) /*0x1008c6ea2*/
      goto LABEL_39; /*0x1008c6ea2*/
    goto LABEL_38; /*0x1008c6ea2*/
  }
  v24 = *(_QWORD *)(v27 + 7); /*0x1008c6f36*/
  if ( *(_QWORD *)v24 ) /*0x1008c6f3a*/
    (*(void (__fastcall **)(_QWORD))v24)(*(_QWORD *)(v27 - 1)); /*0x1008c6f45*/
  if ( *(_QWORD *)(v24 + 8) ) /*0x1008c6f47*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c6f57*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c6f69*/
  v22 = v37; /*0x1008c6f72*/
  if ( !(_BYTE)v41 ) /*0x1008c6f7d*/
  {
LABEL_38:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1008c6ff5*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
    {
      byte_10192F570 = 1; /*0x1008c7002*/
    }
  }
LABEL_39:
  result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::platform::debug_log::LOG_WRITE_LOCK::h03b604107343e8dd); /*0x1008c6ec1*/
  if ( v22 ) /*0x1008c6ed0*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c6edd*/
  if ( v30[0] ) /*0x1008c6eec*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c6efa*/
  if ( v26 ) /*0x1008c6f09*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c6f17*/
  return result; /*0x1008c6f1c*/
}