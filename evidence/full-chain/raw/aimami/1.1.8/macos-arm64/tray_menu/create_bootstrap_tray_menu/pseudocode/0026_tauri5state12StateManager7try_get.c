// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x10035f000 depth=2
// tauri5state12StateManager7try_get
__int64 __fastcall tauri::state::StateManager::try_get::he36bec9b09fd8bd7(__int64 a1)
{
  pthread_mutex_t *v2; // rdi
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14
  __m128i si128; // xmm0
  __int64 v9; // r9
  __int64 v10; // r9
  __m128i v11; // xmm2
  int v13; // edx
  __int64 v14; // r15
  __int64 v15; // r11
  __int64 v17; // [rsp+0h] [rbp-40h] BYREF
  char v18; // [rsp+8h] [rbp-38h]
  int v19; // [rsp+14h] [rbp-2Ch]

  v2 = *(pthread_mutex_t **)a1; /*0x10035f014*/
  if ( !v2 ) /*0x10035f01a*/
    v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f((volatile signed __int64 *)a1); /*0x10035f186*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x10035f020*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x10035f030*/
  {
    v4 = 0; /*0x10035f03c*/
    if ( !*(_BYTE *)(a1 + 8) ) /*0x10035f03e*/
      goto LABEL_5; /*0x10035f044*/
LABEL_20:
    v17 = a1; /*0x10035f1a1*/
    v18 = v4; /*0x10035f1a5*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035f1c6*/
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_698,
      43,
      (__int64)&v17,
      (__int64)&off_10152CEB0,
      (__int64)&off_10152DB68);
  }
  LOBYTE(v4) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x10035f193*/
  if ( *(_BYTE *)(a1 + 8) ) /*0x10035f195*/
    goto LABEL_20; /*0x10035f19b*/
LABEL_5:
  if ( !*(_QWORD *)(a1 + 40) ) /*0x10035f059*/
  {
LABEL_13:
    if ( (_BYTE)v4 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x10035f125*/
    {
      v14 = 0; /*0x10035f12b*/
      goto LABEL_18; /*0x10035f12e*/
    }
    v14 = 0; /*0x10035f1cd*/
    goto LABEL_22; /*0x10035f1cd*/
  }
  v5 = *(_QWORD *)(a1 + 16); /*0x10035f05f*/
  v6 = *(_QWORD *)(a1 + 24); /*0x10035f063*/
  v7 = 0; /*0x10035f075*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_10125F3B0); /*0x10035f078*/
  v9 = 0x4665D63BD0835CDDLL; /*0x10035f08e*/
  while ( 1 ) /*0x10035f091*/
  {
    v10 = v6 & v9; /*0x10035f091*/
    v11 = _mm_loadu_si128((const __m128i *)(v5 + v10)); /*0x10035f094*/
    _R10D = _mm_movemask_epi8(_mm_cmpeq_epi8(v11, si128)); /*0x10035f0a2*/
    if ( _R10D ) /*0x10035f0aa*/
      break; /*0x10035f0aa*/
LABEL_11:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v11, (__m128i)-1LL)) ) /*0x10035f104*/
      goto LABEL_13; /*0x10035f10a*/
    v9 = v10 + v7 + 16; /*0x10035f10c*/
    v7 += 16; /*0x10035f111*/
  }
  v19 = v4; /*0x10035f0ac*/
  while ( 1 ) /*0x10035f0af*/
  {
    __asm { tzcnt r11d, r10d } /*0x10035f0af*/
    _R11 = v6 & (v10 + _R11); /*0x10035f0b7*/
    if ( !(*(_QWORD *)(v5 - 32 - 32 * _R11 + 8) ^ 0x4665D63BD0835CDDLL /*0x10035f0d4*/
         | *(_QWORD *)(v5 - 32 - 32 * _R11) ^ 0xFAE40A116DF9FA76LL) )
      break; /*0x10035f0d4*/
    v13 = _R10D - 1; /*0x10035f0d9*/
    LOWORD(v13) = _R10D & (_R10D - 1); /*0x10035f0dd*/
    _R10D = v13; /*0x10035f0e1*/
    v4 = v19; /*0x10035f0ee*/
    if ( !(_WORD)v13 ) /*0x10035f0f1*/
      goto LABEL_11; /*0x10035f0f1*/
  }
  v15 = -32 * _R11; /*0x10035f133*/
  v14 = *(_QWORD *)(v5 + v15 - 16); /*0x10035f137*/
  (*(void (__fastcall **)(__int64 *, __int64, double, double))(*(_QWORD *)(v5 + v15 - 8) + 24LL))( /*0x10035f148*/
    &v17,
    v14,
    *(double *)si128.i64,
    NAN);
  if ( !(_BYTE)v19 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10035f162*/
  {
LABEL_22:
    if ( !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ) /*0x10035f1d0*/
      *(_BYTE *)(a1 + 8) = 1; /*0x10035f1d9*/
  }
LABEL_18:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x10035f164*/
  return v14; /*0x10035f16f*/
}