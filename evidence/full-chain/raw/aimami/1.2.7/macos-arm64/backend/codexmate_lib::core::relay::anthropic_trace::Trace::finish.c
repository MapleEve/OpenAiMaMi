// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::Trace::finish::hcc170cbb153bf8da; addr: 0x1005da740; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::Trace::finish::hcc170cbb153bf8da(
        _QWORD *a1,
        const void *a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6)
{
  __int64 *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rdi
  char v11; // r13
  char *v13; // rax
  size_t v14; // rdx
  unsigned __int64 v15; // rax
  __int64 *v16; // r15
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r13
  char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rcx
  char v29; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+1h] [rbp-DFh]
  __int64 v31; // [rsp+9h] [rbp-D7h]
  _BYTE v32[15]; // [rsp+11h] [rbp-CFh]
  _QWORD v33[8]; // [rsp+20h] [rbp-C0h] BYREF
  signed __int64 v34; // [rsp+60h] [rbp-80h]
  const void *v35; // [rsp+68h] [rbp-78h]
  __int64 v36; // [rsp+70h] [rbp-70h] BYREF
  __int64 v37; // [rsp+78h] [rbp-68h]
  __int64 v38; // [rsp+80h] [rbp-60h]
  __int64 v39; // [rsp+88h] [rbp-58h]
  unsigned __int64 v40; // [rsp+90h] [rbp-50h]
  __int64 v41; // [rsp+98h] [rbp-48h]
  unsigned __int64 v42; // [rsp+A0h] [rbp-40h]
  __int64 v43; // [rsp+A8h] [rbp-38h]
  __int64 *v44; // [rsp+B0h] [rbp-30h]

  v34 = a3; /*0x1005da75a*/
  v35 = a2; /*0x1005da75e*/
  v8 = (__int64 *)(*a1 + 56LL); /*0x1005da765*/
  v9 = *a1; /*0x1005da769*/
  v10 = *v8; /*0x1005da76c*/
  if ( !*v8 ) /*0x1005da76c*/
    v10 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v8); /*0x1005da7e4*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a6); /*0x1005da775*/
  v44 = v8; /*0x1005da78a*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005da784*/
  {
    v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10) ^ 1; /*0x1005da7f7*/
    if ( *(_BYTE *)(v9 + 356) ) /*0x1005da80b*/
    {
LABEL_5:
      if ( !v11 /*0x1005daac7*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10) )
      {
        *(_BYTE *)(v9 + 64) = 1; /*0x1005daad4*/
      }
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v44); /*0x1005da7d7*/
    }
  }
  else
  {
    v11 = 0; /*0x1005da790*/
    if ( *(_BYTE *)(v9 + 356) ) /*0x1005da7a3*/
      goto LABEL_5; /*0x1005da7ac*/
  }
  *(_BYTE *)(v9 + 356) = 1; /*0x1005da81c*/
  v13 = codexmate_lib::core::relay::anthropic_trace::error_class::h2b657d94910c43d2(a4, a5); /*0x1005da829*/
  codexmate_lib::core::relay::anthropic_trace::summary::hbcde4eb59603bfe2((__int64)&v36, v9 + 72, v35, v34, v13, v14); /*0x1005da847*/
  v43 = *(_QWORD *)(v9 + 208); /*0x1005da853*/
  v42 = *(_QWORD *)(v9 + 200); /*0x1005da85e*/
  v15 = *(_QWORD *)(v9 + 184); /*0x1005da862*/
  v41 = *(_QWORD *)(v9 + 192); /*0x1005da870*/
  v40 = v15; /*0x1005da874*/
  *(_QWORD *)(v9 + 184) = 0; /*0x1005da878*/
  *(_QWORD *)(v9 + 192) = 8; /*0x1005da883*/
  *(_QWORD *)(v9 + 200) = 0; /*0x1005da88e*/
  *(_QWORD *)(v9 + 208) = 0; /*0x1005da899*/
  if ( !v11 /*0x1005daadf*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v36) )
  {
    *(_BYTE *)(v9 + 64) = 1; /*0x1005daaec*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v9 + 56)); /*0x1005da8c4*/
  v33[7] = v39; /*0x1005da8cd*/
  v33[6] = v38; /*0x1005da8d8*/
  v33[5] = v37; /*0x1005da8e7*/
  v33[4] = v36; /*0x1005da8ee*/
  v16 = (__int64 *)(v9 + 16); /*0x1005da8f5*/
  v17 = v40; /*0x1005da8f9*/
  v18 = v43; /*0x1005da8fd*/
  if ( v43 ) /*0x1005da904*/
  {
    v44 = (__int64 *)(v9 + 16); /*0x1005da90a*/
    v19 = v41; /*0x1005da90e*/
    v20 = v42; /*0x1005da912*/
    while ( 1 ) /*0x1005da928*/
    {
      v21 = v17; /*0x1005da928*/
      if ( v20 + 1 < v17 ) /*0x1005da930*/
        v21 = 0; /*0x1005da930*/
      v22 = v20 + 1 - v21; /*0x1005da934*/
      if ( *(_BYTE *)(v19 + 32 * v20) == 6 ) /*0x1005da945*/
        break; /*0x1005da945*/
      v23 = (char *)(v19 + 32 * v20); /*0x1005da951*/
      v29 = *v23; /*0x1005da954*/
      *(_QWORD *)&v32[7] = *((_QWORD *)v23 + 3); /*0x1005da965*/
      *(_QWORD *)v32 = *(_QWORD *)(v23 + 17); /*0x1005da96d*/
      v24 = *(_QWORD *)(v23 + 1); /*0x1005da971*/
      v31 = *(_QWORD *)(v23 + 9); /*0x1005da979*/
      v30 = v24; /*0x1005da97d*/
      codexmate_lib::core::relay::anthropic_trace::Inner::emit::h84842d22e12e8a46( /*0x1005da997*/
        (__int64)v44,
        (__int64)"usagecached_tokenstopephemeralcache_controlassistant",
        5,
        (__int64)&v29);
      v20 = v22; /*0x1005da99c*/
      if ( !--v18 ) /*0x1005da9a8*/
      {
        v42 = v22; /*0x1005da9ae*/
        v16 = v44; /*0x1005da9b2*/
        goto LABEL_19; /*0x1005da9b6*/
      }
    }
    v42 = v20 + 1 - v21; /*0x1005daa61*/
    v43 = v18 - 1; /*0x1005daa69*/
    if ( v18 == 1 ) /*0x1005daa71*/
    {
      v25 = 0; /*0x1005daa73*/
      v26 = 0; /*0x1005daa76*/
      v27 = 0; /*0x1005daa78*/
      v16 = v44; /*0x1005daa7b*/
    }
    else
    {
      v28 = 0; /*0x1005daa84*/
      if ( v22 >= v17 ) /*0x1005daa89*/
        v28 = v17; /*0x1005daa89*/
      v27 = v22 - v28; /*0x1005daa8d*/
      v16 = v44; /*0x1005daa99*/
      if ( v17 - v27 >= v18 - 1 ) /*0x1005daa9d*/
      {
        v26 = v18 + v20 - v28 - v21; /*0x1005daabc*/
        v25 = 0; /*0x1005daabf*/
      }
      else
      {
        v25 = v18 + v20 - v28 - v21 - v17; /*0x1005daaa8*/
        v26 = v17; /*0x1005daaab*/
      }
    }
  }
  else
  {
    v19 = v41; /*0x1005da9b8*/
LABEL_19:
    v43 = 0; /*0x1005da9bc*/
    v25 = 0; /*0x1005da9c4*/
    v26 = 0; /*0x1005da9c7*/
    v27 = 0; /*0x1005da9c9*/
  }
  core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::hb92542d67554f1af(v19 + 32 * v27, v26 - v27); /*0x1005da9dc*/
  core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::hb92542d67554f1af(v19, v25); /*0x1005da9ea*/
  if ( v17 ) /*0x1005da9f2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 32 * v17, 8); /*0x1005daa03*/
  v33[3] = v39; /*0x1005daa0c*/
  v33[2] = v38; /*0x1005daa17*/
  v33[1] = v37; /*0x1005daa26*/
  v33[0] = v36; /*0x1005daa2d*/
  return codexmate_lib::core::relay::anthropic_trace::Inner::emit::h84842d22e12e8a46( /*0x1005da7c6*/
           (__int64)v16,
           (__int64)&anon_4bf7b7c8c09ec04f58b93d1c5edcde78_405,
           3,
           (__int64)v33);
}