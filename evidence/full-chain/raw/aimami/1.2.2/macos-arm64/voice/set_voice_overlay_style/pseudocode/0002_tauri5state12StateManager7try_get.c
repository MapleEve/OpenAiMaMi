// mac 1.2.2 NEW set_voice_overlay_style 0x100699590 d=1
__int64 __fastcall tauri::state::StateManager::try_get::h1fbaf639ec243c26(__int64 a1)
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

  v2 = *(pthread_mutex_t **)a1; /*0x1006995a4*/
  if ( !v2 ) /*0x1006995aa*/
    v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa((volatile signed __int64 *)a1); /*0x100699716*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x1006995b0*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006995c0*/
  {
    v4 = 0; /*0x1006995cc*/
    if ( !*(_BYTE *)(a1 + 8) ) /*0x1006995ce*/
      goto LABEL_5; /*0x1006995d4*/
LABEL_20:
    v17 = a1; /*0x100699731*/
    v18 = v4; /*0x100699735*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100699756*/
      (__int64)&unk_101591898,
      43,
      (__int64)&v17,
      (__int64)&off_101896380,
      (__int64)&off_101896BE0);
  }
  LOBYTE(v4) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100699723*/
  if ( *(_BYTE *)(a1 + 8) ) /*0x100699725*/
    goto LABEL_20; /*0x10069972b*/
LABEL_5:
  if ( !*(_QWORD *)(a1 + 40) ) /*0x1006995e9*/
  {
LABEL_13:
    if ( (_BYTE)v4 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1006996b5*/
    {
      v14 = 0; /*0x1006996bb*/
      goto LABEL_18; /*0x1006996be*/
    }
    v14 = 0; /*0x10069975d*/
    goto LABEL_22; /*0x10069975d*/
  }
  v5 = *(_QWORD *)(a1 + 16); /*0x1006995ef*/
  v6 = *(_QWORD *)(a1 + 24); /*0x1006995f3*/
  v7 = 0; /*0x100699605*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_101591200); /*0x100699608*/
  v9 = 0x26B2FB7715226F24LL; /*0x10069961e*/
  while ( 1 ) /*0x100699621*/
  {
    v10 = v6 & v9; /*0x100699621*/
    v11 = _mm_loadu_si128((const __m128i *)(v5 + v10)); /*0x100699624*/
    _R10D = _mm_movemask_epi8(_mm_cmpeq_epi8(v11, si128)); /*0x100699632*/
    if ( _R10D ) /*0x10069963a*/
      break; /*0x10069963a*/
LABEL_11:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v11, (__m128i)-1LL)) ) /*0x100699694*/
      goto LABEL_13; /*0x10069969a*/
    v9 = v10 + v7 + 16; /*0x10069969c*/
    v7 += 16; /*0x1006996a1*/
  }
  v19 = v4; /*0x10069963c*/
  while ( 1 ) /*0x10069963f*/
  {
    __asm { tzcnt r11d, r10d } /*0x10069963f*/
    _R11 = v6 & (v10 + _R11); /*0x100699647*/
    if ( !(*(_QWORD *)(v5 - 32 - 32 * _R11 + 8) ^ 0x26B2FB7715226F24LL /*0x100699664*/
         | *(_QWORD *)(v5 - 32 - 32 * _R11) ^ 0x6BB494776B6A95DLL) )
      break; /*0x100699664*/
    v13 = _R10D - 1; /*0x100699669*/
    LOWORD(v13) = _R10D & (_R10D - 1); /*0x10069966d*/
    _R10D = v13; /*0x100699671*/
    v4 = v19; /*0x10069967e*/
    if ( !(_WORD)v13 ) /*0x100699681*/
      goto LABEL_11; /*0x100699681*/
  }
  v15 = -32 * _R11; /*0x1006996c3*/
  v14 = *(_QWORD *)(v5 + v15 - 16); /*0x1006996c7*/
  (*(void (__fastcall **)(__int64 *, __int64, double, double))(*(_QWORD *)(v5 + v15 - 8) + 24LL))( /*0x1006996d8*/
    &v17,
    v14,
    *(double *)si128.i64,
    NAN);
  if ( !(_BYTE)v19 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1006996f2*/
  {
LABEL_22:
    if ( !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ) /*0x100699760*/
      *(_BYTE *)(a1 + 8) = 1; /*0x100699769*/
  }
LABEL_18:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x1006996f4*/
  return v14; /*0x1006996ff*/
}