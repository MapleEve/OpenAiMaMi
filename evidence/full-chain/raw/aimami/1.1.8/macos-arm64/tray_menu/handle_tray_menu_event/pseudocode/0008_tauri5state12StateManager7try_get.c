// mac 1.1.8 BACKEND-ONLY handle_tray_menu_event node 0x10035ebe0 depth=1
// tauri5state12StateManager7try_get
__int64 __fastcall tauri::state::StateManager::try_get::hdecac479e040b124(__int64 a1)
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

  v2 = *(pthread_mutex_t **)a1; /*0x10035ebf4*/
  if ( !v2 ) /*0x10035ebfa*/
    v2 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f((volatile signed __int64 *)a1); /*0x10035ed66*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v2); /*0x10035ec00*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x10035ec10*/
  {
    v4 = 0; /*0x10035ec1c*/
    if ( !*(_BYTE *)(a1 + 8) ) /*0x10035ec1e*/
      goto LABEL_5; /*0x10035ec24*/
LABEL_20:
    v17 = a1; /*0x10035ed81*/
    v18 = v4; /*0x10035ed85*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035eda6*/
      (__int64)&anon_7f3de6c6840f0b31a5181342ebf2ca5d_698,
      43,
      (__int64)&v17,
      (__int64)&off_10152CEB0,
      (__int64)&off_10152DB68);
  }
  LOBYTE(v4) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x10035ed73*/
  if ( *(_BYTE *)(a1 + 8) ) /*0x10035ed75*/
    goto LABEL_20; /*0x10035ed7b*/
LABEL_5:
  if ( !*(_QWORD *)(a1 + 40) ) /*0x10035ec39*/
  {
LABEL_13:
    if ( (_BYTE)v4 || (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x10035ed05*/
    {
      v14 = 0; /*0x10035ed0b*/
      goto LABEL_18; /*0x10035ed0e*/
    }
    v14 = 0; /*0x10035edad*/
    goto LABEL_22; /*0x10035edad*/
  }
  v5 = *(_QWORD *)(a1 + 16); /*0x10035ec3f*/
  v6 = *(_QWORD *)(a1 + 24); /*0x10035ec43*/
  v7 = 0; /*0x10035ec55*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_10125B420); /*0x10035ec58*/
  v9 = 0xA386450B41887408LL; /*0x10035ec6e*/
  while ( 1 ) /*0x10035ec71*/
  {
    v10 = v6 & v9; /*0x10035ec71*/
    v11 = _mm_loadu_si128((const __m128i *)(v5 + v10)); /*0x10035ec74*/
    _R10D = _mm_movemask_epi8(_mm_cmpeq_epi8(v11, si128)); /*0x10035ec82*/
    if ( _R10D ) /*0x10035ec8a*/
      break; /*0x10035ec8a*/
LABEL_11:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v11, (__m128i)-1LL)) ) /*0x10035ece4*/
      goto LABEL_13; /*0x10035ecea*/
    v9 = v10 + v7 + 16; /*0x10035ecec*/
    v7 += 16; /*0x10035ecf1*/
  }
  v19 = v4; /*0x10035ec8c*/
  while ( 1 ) /*0x10035ec8f*/
  {
    __asm { tzcnt r11d, r10d } /*0x10035ec8f*/
    _R11 = v6 & (v10 + _R11); /*0x10035ec97*/
    if ( !(*(_QWORD *)(v5 - 32 - 32 * _R11 + 8) ^ 0xA386450B41887408LL /*0x10035ecb4*/
         | *(_QWORD *)(v5 - 32 - 32 * _R11) ^ 0x646C555D9E6F011ELL) )
      break; /*0x10035ecb4*/
    v13 = _R10D - 1; /*0x10035ecb9*/
    LOWORD(v13) = _R10D & (_R10D - 1); /*0x10035ecbd*/
    _R10D = v13; /*0x10035ecc1*/
    v4 = v19; /*0x10035ecce*/
    if ( !(_WORD)v13 ) /*0x10035ecd1*/
      goto LABEL_11; /*0x10035ecd1*/
  }
  v15 = -32 * _R11; /*0x10035ed13*/
  v14 = *(_QWORD *)(v5 + v15 - 16); /*0x10035ed17*/
  (*(void (__fastcall **)(__int64 *, __int64, double, double))(*(_QWORD *)(v5 + v15 - 8) + 24LL))( /*0x10035ed28*/
    &v17,
    v14,
    *(double *)si128.i64,
    NAN);
  if ( !(_BYTE)v19 && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10035ed42*/
  {
LABEL_22:
    if ( !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() ) /*0x10035edb0*/
      *(_BYTE *)(a1 + 8) = 1; /*0x10035edb9*/
  }
LABEL_18:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a1); /*0x10035ed44*/
  return v14; /*0x10035ed4f*/
}