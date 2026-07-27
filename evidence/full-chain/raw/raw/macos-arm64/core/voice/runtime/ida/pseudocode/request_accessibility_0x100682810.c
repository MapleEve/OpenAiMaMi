// __ZN13codexmate_lib4core5voice7runtime21request_accessibility @ 0x100682810 | 基线 same-set
char *__fastcall codexmate_lib::core::voice::runtime::request_accessibility::h5803b9178402e4d2(char *__dst, __int64 a2)
{
  const __CFDictionary *v3; // r14
  __int64 v4; // r12
  int v5; // r14d
  _QWORD *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  void *v10; // r14
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r14
  void *v14; // rax
  void *values; // [rsp+0h] [rbp-70h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+8h] [rbp-68h]
  __int64 v18; // [rsp+10h] [rbp-60h]
  __int64 v19; // [rsp+18h] [rbp-58h]
  void *keys; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]
  __int64 v22; // [rsp+30h] [rbp-40h]
  _BYTE v23[7]; // [rsp+38h] [rbp-38h]
  char v24; // [rsp+3Fh] [rbp-31h] BYREF
  int v25; // [rsp+40h] [rbp-30h]
  char v26; // [rsp+47h] [rbp-29h]

  keys = (void *)kAXTrustedCheckOptionPrompt; /*0x10068283b*/
  values = kCFBooleanTrue; /*0x10068283f*/
  v3 = CFDictionaryCreate(nullptr, (const void **)&keys, (const void **)&values, 1, nullptr, nullptr); /*0x10068285d*/
  AXIsProcessTrustedWithOptions(v3); /*0x100682863*/
  if ( v3 ) /*0x10068286b*/
    CFRelease(v3); /*0x100682870*/
  v19 = a2; /*0x100682875*/
  v4 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x100682881*/
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(v4 + 24) + 24LL))(*(_QWORD *)(v4 + 16)); /*0x10068288f*/
  v6 = (_QWORD *)(v4 + 32); /*0x100682892*/
  v7 = *(_QWORD *)(v4 + 32); /*0x100682897*/
  if ( !v7 ) /*0x10068289f*/
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 32); /*0x10068299b*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x1006828a5*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd( /*0x1006829a6*/
            v7,
            &keys,
            v8,
            &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6);
    LOBYTE(v12) = v12 ^ 1; /*0x1006829ae*/
    v25 = v12; /*0x1006829b0*/
    if ( *(_BYTE *)(v4 + 40) ) /*0x1006829bd*/
      goto LABEL_7; /*0x1006829c5*/
  }
  else
  {
    v25 = 0; /*0x1006828c0*/
    if ( *(_BYTE *)(v4 + 40) )
    {
LABEL_7:
      keys = nullptr; /*0x1006828df*/
      v21 = 1; /*0x1006828ea*/
      v22 = 0; /*0x1006828f2*/
      v18 = 1610612768; /*0x1006828fa*/
      values = &keys; /*0x100682906*/
      v17 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100682911*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              &values) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100682a70*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          &v24,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v10 = keys; /*0x100682935*/
      v19 = v21; /*0x10068293d*/
      v26 = v22; /*0x100682945*/
      *(_DWORD *)v23 = *(_DWORD *)((char *)&v22 + 1); /*0x10068294b*/
      *(_DWORD *)&v23[3] = HIDWORD(v22); /*0x100682951*/
      if ( !(_BYTE)v25
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v9,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
      {
        *(_BYTE *)(v4 + 40) = 1; /*0x100682a84*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x10068296a*/
      *((_QWORD *)__dst + 1) = v10; /*0x10068296f*/
      *((_QWORD *)__dst + 2) = v19; /*0x100682977*/
      __dst[24] = v26; /*0x10068297f*/
      v11 = *(_DWORD *)&v23[3]; /*0x100682985*/
      *(_DWORD *)(__dst + 25) = *(_DWORD *)v23; /*0x100682988*/
      *((_DWORD *)__dst + 7) = v11; /*0x10068298b*/
      goto LABEL_17; /*0x10068298e*/
    }
  }
  *(_WORD *)(v4 + 905) = v5; /*0x1006829cb*/
  *(_BYTE *)(v4 + 907) = BYTE2(v5); /*0x1006829d8*/
  if ( !(_BYTE)v25 /*0x100682a8f*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v7,
                           &keys,
                           v8,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v4 + 40) = 1; /*0x100682a9c*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x1006829f6*/
  v13 = v19; /*0x1006829ff*/
  codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)&values, v19); /*0x100682a06*/
  if ( values != (void *)0x8000000000000000LL ) /*0x100682a12*/
  {
    *((_QWORD *)__dst + 3) = v18; /*0x100682a25*/
    v14 = values; /*0x100682a29*/
    *((_QWORD *)__dst + 2) = v17; /*0x100682a31*/
    *((_QWORD *)__dst + 1) = v14; /*0x100682a35*/
LABEL_17:
    *(_QWORD *)__dst = 2; /*0x100682a39*/
    return __dst; /*0x100682a39*/
  }
  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(__dst, v13); /*0x100682a1a*/
  return __dst; /*0x100682a43*/
}