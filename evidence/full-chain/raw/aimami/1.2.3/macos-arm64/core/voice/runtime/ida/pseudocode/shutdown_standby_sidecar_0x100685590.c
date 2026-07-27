// __ZN13codexmate_lib4core5voice7runtime24shutdown_standby_sidecar @ 0x100685590 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::core::voice::runtime::shutdown_standby_sidecar::h75d9bc0590dc9e1b(
        __int64 a1,
        char **a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx
  volatile signed __int64 *result; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  char v13; // r15
  __int64 v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rsi
  _QWORD v27[3]; // [rsp+8h] [rbp-E8h] BYREF
  char *v28; // [rsp+20h] [rbp-D0h] BYREF
  char *v29; // [rsp+28h] [rbp-C8h]
  __int64 v30; // [rsp+30h] [rbp-C0h]
  __int64 v31; // [rsp+38h] [rbp-B8h]
  const char *v32; // [rsp+40h] [rbp-B0h]
  __int64 v33; // [rsp+48h] [rbp-A8h]
  __int64 v34; // [rsp+50h] [rbp-A0h]
  char *v35; // [rsp+58h] [rbp-98h]
  __int64 v36; // [rsp+60h] [rbp-90h]
  __int64 v37; // [rsp+68h] [rbp-88h]
  void *v38; // [rsp+70h] [rbp-80h]
  _QWORD *v39; // [rsp+78h] [rbp-78h]
  _QWORD *v40; // [rsp+80h] [rbp-70h] BYREF
  __int64 v41; // [rsp+88h] [rbp-68h]
  __int64 v42; // [rsp+90h] [rbp-60h]
  __int64 v43; // [rsp+98h] [rbp-58h]
  __int64 v44; // [rsp+A0h] [rbp-50h]
  _BYTE v45[7]; // [rsp+A8h] [rbp-48h]
  _QWORD *v46; // [rsp+B0h] [rbp-40h] BYREF
  volatile signed __int64 *v47; // [rsp+B8h] [rbp-38h] BYREF
  char v48; // [rsp+C0h] [rbp-30h]
  _DWORD v49[11]; // [rsp+C1h] [rbp-2Fh]

  v2 = tauri::Manager::state::hb5ba04dc9da9798f(a1); /*0x1006855a4*/
  v3 = v2; /*0x1006855a9*/
  v4 = (_QWORD *)(v2 + 32); /*0x1006855ac*/
  v5 = *(_QWORD **)(v2 + 32); /*0x1006855b0*/
  if ( !v5 ) /*0x1006855b7*/
    v5 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v2 + 32); /*0x1006856f0*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v5); /*0x1006855bd*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006855cd*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x1006856fd*/
    if ( *(_BYTE *)(v3 + 40) ) /*0x100685709*/
      goto LABEL_5; /*0x100685710*/
  }
  else
  {
    v8 = 0; /*0x1006855d9*/
    if ( *(_BYTE *)(v3 + 40) ) /*0x1006855e5*/
    {
LABEL_5:
      v46 = v4; /*0x1006855f2*/
      LOBYTE(v47) = v8; /*0x1006855f6*/
      v9 = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100685600*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100685607*/
      {
        v27[0] = &v46; /*0x100685611*/
        v27[1] = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h12b693ddd6822b12; /*0x10068561f*/
        v34 = 2; /*0x100685626*/
        v35 = "codexmate_lib::core::voice::runtimestandby"; /*0x100685638*/
        v36 = 35; /*0x10068563f*/
        v38 = &loc_1017C3069; /*0x100685651*/
        v39 = v27; /*0x10068565c*/
        v28 = nullptr; /*0x100685660*/
        v29 = "codexmate_lib::core::voice::runtimestandby"; /*0x10068566b*/
        v30 = 35; /*0x100685672*/
        v31 = 0; /*0x10068567d*/
        v32 = "src/core/voice/runtime/mod.rs"; /*0x10068568f*/
        v33 = 29; /*0x100685696*/
        v37 = 0x9D200000001LL; /*0x1006856ab*/
        v5 = &v40; /*0x1006856b2*/
        a2 = &v28; /*0x1006856b6*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v40, &v28); /*0x1006856bd*/
        v4 = v46; /*0x1006856c2*/
        v8 = (char)v47; /*0x1006856c6*/
      }
      if ( !v8 /*0x1006857d8*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v9) )
      {
        *((_BYTE *)v4 + 8) = 1; /*0x1006857e5*/
      }
      return (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006856e3*/
    }
  }
  v11 = *(_QWORD **)(v3 + 752); /*0x100685716*/
  v12 = *(_QWORD *)(v3 + 760); /*0x10068571d*/
  v41 = v12; /*0x100685724*/
  v40 = v11; /*0x100685728*/
  v13 = *(_BYTE *)(v3 + 768); /*0x10068572c*/
  *(_DWORD *)&v45[3] = *(_DWORD *)(v3 + 772); /*0x10068573b*/
  v14 = *(unsigned int *)(v3 + 769); /*0x10068573e*/
  *(_DWORD *)v45 = *(_DWORD *)(v3 + 769); /*0x100685745*/
  *(_BYTE *)(v3 + 768) = 2; /*0x100685748*/
  if ( !v8 /*0x1006857ee*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v12, v14) )
  {
    *(_BYTE *)(v3 + 40) = 1; /*0x1006857fb*/
  }
  result = (volatile signed __int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x100685764*/
  if ( v13 != 2 ) /*0x10068576d*/
  {
    v47 = (volatile signed __int64 *)v41; /*0x10068577b*/
    v46 = v40; /*0x10068577f*/
    v48 = v13; /*0x100685783*/
    v49[0] = *(_DWORD *)v45; /*0x10068578d*/
    *(_DWORD *)((char *)v49 + 3) = *(_DWORD *)&v45[3]; /*0x100685790*/
    v15 = (_QWORD *)(v41 + 16); /*0x100685793*/
    v16 = *(_QWORD *)(v41 + 16); /*0x100685797*/
    if ( !v16 ) /*0x10068579e*/
      v16 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v41 + 16); /*0x10068580d*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v16); /*0x1006857a0*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006857ac*/
    {
      v19 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, a2, v17, v18) ^ 1; /*0x10068581a*/
      if ( *(_BYTE *)(v41 + 24) ) /*0x10068581e*/
        goto LABEL_18; /*0x100685824*/
    }
    else
    {
      v19 = 0; /*0x1006857ae*/
      if ( *(_BYTE *)(v41 + 24) ) /*0x1006857b1*/
      {
LABEL_18:
        if ( !v19 /*0x100685957*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, a2, v17, v18) )
        {
          *(_BYTE *)(v41 + 24) = 1; /*0x100685964*/
        }
        goto LABEL_29; /*0x100685968*/
      }
    }
    v20 = v41 + 28; /*0x100685826*/
    v21 = (__int64)"quit\n"; /*0x10068582a*/
    v22 = std::io::Write::write_all::h3ce78d18b5b98128(v41 + 28, "quit\n", 5); /*0x100685836*/
    v24 = v22 & 3; /*0x10068583d*/
    if ( (_DWORD)v24 == 1 ) /*0x100685843*/
    {
      v42 = v22 - 1; /*0x1006858fa*/
      v43 = *(_QWORD *)(v22 - 1); /*0x100685902*/
      v44 = *(_QWORD *)(v22 + 7); /*0x10068590a*/
      if ( *(_QWORD *)v44 ) /*0x10068590e*/
        (*(void (__fastcall **)(__int64))v44)(v43); /*0x10068591a*/
      v26 = *(_QWORD *)(v44 + 8); /*0x100685924*/
      if ( v26 ) /*0x10068592b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v26, *(_QWORD *)(v44 + 16)); /*0x100685931*/
      v21 = 24; /*0x100685936*/
      v20 = v42; /*0x100685940*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 24, 8); /*0x100685944*/
      if ( v19 ) /*0x10068594c*/
        goto LABEL_29; /*0x10068594c*/
    }
    else if ( v19 ) /*0x10068584c*/
    {
LABEL_29:
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v15); /*0x10068585b*/
      v27[0] = 0x8000000000000000LL; /*0x10068586a*/
      ((void (__fastcall *)(char **, _QWORD *, _QWORD, __int64, _QWORD, _QWORD, _QWORD *))std::thread::lifecycle::spawn_unchecked::h8ecc940a9a343b8c)( /*0x10068588b*/
        &v28,
        v27,
        0,
        v25,
        0,
        0,
        v46);
      if ( !v28 ) /*0x1006858a1*/
      {
        v28 = v29; /*0x100685983*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006859ab*/
          "failed to spawn thread",
          22,
          &v28,
          &off_101968498,
          &off_101967AA0);
      }
      core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(&v28); /*0x1006858ca*/
      result = v47; /*0x1006858cf*/
      if ( !_InterlockedDecrement64(v47) ) /*0x1006858d3*/
        return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&v47); /*0x1006858dd*/
      return result; /*0x1006858dd*/
    }
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10068596d*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v20, v21, v23, v24) )
    {
      *(_BYTE *)(v41 + 24) = 1; /*0x10068597a*/
    }
    goto LABEL_29; /*0x10068597e*/
  }
  return result; /*0x1006858e2*/
}