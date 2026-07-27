// __ZN13codexmate_lib4core5voice7runtime7overlay18hide_voice_overlay @ 0x1006f7410 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(__int64 a1)
{
  __int64 v1; // r14
  char v2; // of
  volatile signed __int64 *v3; // r15
  __int64 v4; // rt0
  volatile signed __int64 *v5; // r12
  __int64 v6; // rt0
  int v7; // ecx
  _BYTE __dst[136]; // [rsp+10h] [rbp-160h] BYREF
  volatile signed __int64 *v10; // [rsp+98h] [rbp-D8h]
  volatile signed __int64 *v11; // [rsp+A0h] [rbp-D0h]
  __int64 v12; // [rsp+A8h] [rbp-C8h]
  int v13[2]; // [rsp+B0h] [rbp-C0h] BYREF
  _QWORD __src[21]; // [rsp+C8h] [rbp-A8h] BYREF

  v1 = codexmate_lib::core::voice::runtime::overlay::OVERLAY_GENERATION::h6f99dc283d7029eb; /*0x1006f7425*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006f7436*/
  v3 = *(volatile signed __int64 **)(a1 + 136); /*0x1006f743b*/
  v4 = _InterlockedIncrement64(v3); /*0x1006f7442*/
  if ( (v4 < 0) ^ v2 | (v4 == 0) /*0x1006f7458*/
    || (v5 = *(volatile signed __int64 **)(a1 + 144), v6 = _InterlockedIncrement64(v5), (v6 < 0) ^ v2 | (v6 == 0)) )
  {
    BUG(); /*0x1006f7536*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006f7474*/
  v10 = v3; /*0x1006f7479*/
  v11 = v5; /*0x1006f7480*/
  v12 = v1; /*0x1006f7487*/
  *(_QWORD *)v13 = 0x8000000000000000LL; /*0x1006f7498*/
  std::thread::lifecycle::spawn_unchecked::hb6f8b30581b99546((int)__src, (int)v13, 0, v7, 0, 0, __dst); /*0x1006f74b9*/
  if ( !__src[0] ) /*0x1006f74cf*/
  {
    __src[0] = __src[1]; /*0x1006f7509*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f7531*/
      "failed to spawn threadappstarted",
      22,
      __src,
      &anon_b756970ae374bf3e9e8d782d8f9d3f8c_402,
      &anon_b756970ae374bf3e9e8d782d8f9d3f8c_53);
  }
  return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(__src); /*0x1006f74f9*/
}