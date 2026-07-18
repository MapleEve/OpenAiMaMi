// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18hide_voi 0x10055ff60 d=0
__int64 __fastcall codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::h7c6ff1eb7c3b7634(__int64 a1)
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

  v1 = codexmate_lib::core::voice::runtime::overlay::OVERLAY_GENERATION::h073d0448bbd27983; /*0x10055ff75*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf6e473e13a6bc9af(__src, a1); /*0x10055ff86*/
  v3 = *(volatile signed __int64 **)(a1 + 136); /*0x10055ff8b*/
  v4 = _InterlockedIncrement64(v3); /*0x10055ff92*/
  if ( (v4 < 0) ^ v2 | (v4 == 0) /*0x10055ffa8*/
    || (v5 = *(volatile signed __int64 **)(a1 + 144), v6 = _InterlockedIncrement64(v5), (v6 < 0) ^ v2 | (v6 == 0)) )
  {
    BUG(); /*0x100560086*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x10055ffc4*/
  v10 = v3; /*0x10055ffc9*/
  v11 = v5; /*0x10055ffd0*/
  v12 = v1; /*0x10055ffd7*/
  *(_QWORD *)v13 = 0x8000000000000000LL; /*0x10055ffe8*/
  std::thread::lifecycle::spawn_unchecked::hc97fe21e8247f6ff((int)__src, (int)v13, 0, v7, 0, 0, __dst); /*0x100560009*/
  if ( !__src[0] ) /*0x10056001f*/
  {
    __src[0] = __src[1]; /*0x100560059*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100560081*/
      (__int64)"failed to spawn threadvoice-overlay",
      22,
      (__int64)__src,
      (__int64)&anon_21f26993a2155ee534e156309534a585_701,
      (__int64)&anon_21f26993a2155ee534e156309534a585_172);
  }
  return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h76f5a15cecc8693d(__src); /*0x100560049*/
}