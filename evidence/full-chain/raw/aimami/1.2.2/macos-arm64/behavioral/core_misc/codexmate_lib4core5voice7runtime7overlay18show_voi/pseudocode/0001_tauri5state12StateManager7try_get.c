// mac 1.2.2 NEW codexmate_lib4core5voice7runtime7overlay18show_voi 0x1006999b0 d=1
__int64 __fastcall tauri::state::StateManager::try_get::h2b9974199800432e(__int64 a1)
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

  v2 = *(pthread_mutex_t **)a1; /*0x1006999c4*/
  if ( !v2 ) /*0x1006999ca*/
    v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa((volatile signed __int64 *)a1); /*0x100699b36*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x1006999d0*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006999e0*/
  {
    v4 = 0; /*0x1006999ec*/
    if ( !*(_BYTE *)(a1 + 8) ) /*0x1006999ee*/
      goto LABEL_5; /*0x1006999f4*/
LABEL_20:
    v17 = a1; /*0x100699b51*/
    v18 = v4; /*0x100699b55*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100699b76*/
      (__int64)&unk_101591898,
      43,
      (__int64)&v17,
      (__int64)&off_101896380,
      (__int64)&off_101896BE0);
  }
  LOBYTE(v4) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100699b43*/
  if ( *(_BYTE *)(a1 + 8) ) /*0x100699b45*/
    goto LABEL_20; /*0x100699b4b*/
LABEL_5:
  if ( !*(_QWORD *)(a1 + 40) ) /*0x100699a09*/
  {
LABEL_13:
    if ( (_BYTE)v4 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100699ad5*/
    {
      v14 = 0; /*0x100699adb*/
      goto LABEL_18; /*0x100699ade*/
    }
    v14 = 0; /*0x100699b7d*/
    goto LABEL_22; /*0x100699b7d*/
  }
  v5 = *(_QWORD *)(a1 + 16); /*0x100699a0f*/
  v6 = *(_QWORD *)(a1 + 24); /*0x100699a13*/
  v7 = 0; /*0x100699a25*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_101591180); /*0x100699a28*/
  v9 = 0xCA3DD5E2467324EALL; /*0x100699a3e*/
  while ( 1 ) /*0x100699a41*/
  {
    v10 = v6 & v9; /*0x100699a41*/
    v11 = _mm_loadu_si128((const __m128i *)(v5 + v10)); /*0x100699a44*/
    _R10D = _mm_movemask_epi8(_mm_cmpeq_epi8(v11, si128)); /*0x100699a52*/
    if ( _R10D ) /*0x100699a5a*/
      break; /*0x100699a5a*/
LABEL_11:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v11, (__m128i)-1LL)) ) /*0x100699ab4*/
      goto LABEL_13; /*0x100699aba*/
    v9 = v10 + v7 + 16; /*0x100699abc*/
    v7 += 16; /*0x100699ac1*/
  }
  v19 = v4; /*0x100699a5c*/
  while ( 1 ) /*0x100699a5f*/
  {
    __asm { tzcnt r11d, r10d } /*0x100699a5f*/
    _R11 = v6 & (v10 + _R11); /*0x100699a67*/
    if ( !(*(_QWORD *)(v5 - 32 - 32 * _R11 + 8) ^ 0xCA3DD5E2467324EALL /*0x100699a84*/
         | *(_QWORD *)(v5 - 32 - 32 * _R11) ^ 0x1A90F51EFC9799DBLL) )
      break; /*0x100699a84*/
    v13 = _R10D - 1; /*0x100699a89*/
    LOWORD(v13) = _R10D & (_R10D - 1); /*0x100699a8d*/
    _R10D = v13; /*0x100699a91*/
    v4 = v19; /*0x100699a9e*/
    if ( !(_WORD)v13 ) /*0x100699aa1*/
      goto LABEL_11; /*0x100699aa1*/
  }
  v15 = -32 * _R11; /*0x100699ae3*/
  v14 = *(_QWORD *)(v5 + v15 - 16); /*0x100699ae7*/
  (*(void (__fastcall **)(__int64 *, __int64, double, double))(*(_QWORD *)(v5 + v15 - 8) + 24LL))( /*0x100699af8*/
    &v17,
    v14,
    *(double *)si128.i64,
    NAN);
  if ( !(_BYTE)v19 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x100699b12*/
  {
LABEL_22:
    if ( !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ) /*0x100699b80*/
      *(_BYTE *)(a1 + 8) = 1; /*0x100699b89*/
  }
LABEL_18:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x100699b14*/
  return v14; /*0x100699b1f*/
}