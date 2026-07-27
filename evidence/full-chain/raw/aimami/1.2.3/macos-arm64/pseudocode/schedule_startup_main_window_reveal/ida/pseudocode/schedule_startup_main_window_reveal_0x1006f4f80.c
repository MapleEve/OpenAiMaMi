// __ZN13codexmate_lib35schedule_startup_main_window_reveal @ 0x1006f4f80
// 1.2.3 NEW-delta | codexmate_lib::schedule_startup_main_window_reveal | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
char __fastcall codexmate_lib::schedule_startup_main_window_reveal::h2329f5b1445f21ff(__int64 a1)
{
  char result; // al
  char v2; // of
  volatile signed __int64 *v3; // r14
  __int64 v4; // rt0
  volatile signed __int64 *v5; // r15
  __int64 v6; // rt0
  int v7; // ecx
  _BYTE __dst[136]; // [rsp+10h] [rbp-150h] BYREF
  volatile signed __int64 *v9; // [rsp+98h] [rbp-C8h]
  volatile signed __int64 *v10; // [rsp+A0h] [rbp-C0h]
  int v11[2]; // [rsp+A8h] [rbp-B8h] BYREF
  _QWORD __src[20]; // [rsp+C0h] [rbp-A0h] BYREF

  result = codexmate_lib::launched_hidden::hdca70e9ee16aa088(); /*0x1006f4f93*/
  if ( !result ) /*0x1006f4f9a*/
  {
    _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006f4faa*/
    v3 = *(volatile signed __int64 **)(a1 + 136); /*0x1006f4faf*/
    v4 = _InterlockedIncrement64(v3); /*0x1006f4fb6*/
    if ( (v4 < 0) ^ v2 | (v4 == 0) /*0x1006f4fcb*/
      || (v5 = *(volatile signed __int64 **)(a1 + 144), v6 = _InterlockedIncrement64(v5), (v6 < 0) ^ v2 | (v6 == 0)) )
    {
      BUG(); /*0x1006f50a0*/
    }
    memcpy(__dst, __src, sizeof(__dst)); /*0x1006f4fe7*/
    v9 = v3; /*0x1006f4fec*/
    v10 = v5; /*0x1006f4ff3*/
    *(_QWORD *)v11 = 0x8000000000000000LL; /*0x1006f5004*/
    std::thread::lifecycle::spawn_unchecked::h93f5cc3b30756b9f((int)__src, (int)v11, 0, v7, 0, 0, __dst); /*0x1006f5025*/
    if ( !__src[0] ) /*0x1006f503b*/
    {
      __src[0] = __src[1]; /*0x1006f5073*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f509b*/
        "failed to spawn threadappstarted",
        22,
        __src,
        &anon_b756970ae374bf3e9e8d782d8f9d3f8c_402,
        &anon_b756970ae374bf3e9e8d782d8f9d3f8c_53);
    }
    return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(__src); /*0x1006f5060*/
  }
  return result; /*0x1006f5065*/
}