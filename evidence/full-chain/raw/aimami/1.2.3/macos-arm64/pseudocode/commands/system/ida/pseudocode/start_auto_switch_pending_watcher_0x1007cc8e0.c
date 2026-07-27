// __ZN13codexmate_lib8commands6system33start_auto_switch_pending_watcher @ 0x1007cc8e0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::system::start_auto_switch_pending_watcher::hb1f5f287c8f00244(__int64 a1)
{
  char v1; // of
  volatile signed __int64 *v2; // r14
  __int64 v3; // rt0
  volatile signed __int64 *v4; // r15
  __int64 v5; // rt0
  int v6; // ecx
  _BYTE __dst[136]; // [rsp+10h] [rbp-150h] BYREF
  volatile signed __int64 *v9; // [rsp+98h] [rbp-C8h]
  volatile signed __int64 *v10; // [rsp+A0h] [rbp-C0h]
  int v11[2]; // [rsp+A8h] [rbp-B8h] BYREF
  _QWORD __src[20]; // [rsp+C0h] [rbp-A0h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1007cc8fd*/
  v2 = *(volatile signed __int64 **)(a1 + 136); /*0x1007cc902*/
  v3 = _InterlockedIncrement64(v2); /*0x1007cc909*/
  if ( (v3 < 0) ^ v1 | (v3 == 0) /*0x1007cc91e*/
    || (v4 = *(volatile signed __int64 **)(a1 + 144), v5 = _InterlockedIncrement64(v4), (v5 < 0) ^ v1 | (v5 == 0)) )
  {
    BUG(); /*0x1007cc9f3*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1007cc93a*/
  v9 = v2; /*0x1007cc93f*/
  v10 = v4; /*0x1007cc946*/
  *(_QWORD *)v11 = 0x8000000000000000LL; /*0x1007cc957*/
  std::thread::lifecycle::spawn_unchecked::hd5a8ea99f8b549b5((int)__src, (int)v11, 0, v6, 0, 0, __dst); /*0x1007cc978*/
  if ( !__src[0] ) /*0x1007cc98e*/
  {
    __src[0] = __src[1]; /*0x1007cc9c6*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007cc9ee*/
      "failed to spawn thread",
      22,
      __src,
      &anon_3ce6d1417794db0febde534c64082f90_433,
      &anon_3ce6d1417794db0febde534c64082f90_277);
  }
  return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(__src); /*0x1007cc9b8*/
}