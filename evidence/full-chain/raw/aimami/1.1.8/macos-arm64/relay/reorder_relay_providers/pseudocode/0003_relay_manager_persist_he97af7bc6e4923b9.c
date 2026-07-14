// addr=0x1005cccf0
// depth 2 — merges freshly-composed proxy status into the RelayState snapshot then calls storage::save; on success (discriminant==10) replaces the live Mutex-guarded RelayState with the new state.

_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3,
        double a4,
        double a5)
{
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  char v11; // r15
  __int64 v12; // rdx
  _QWORD __dst[43]; // [rsp+0h] [rbp-1E0h] BYREF
  _QWORD v15[17]; // [rsp+158h] [rbp-88h] BYREF

  memcpy(__dst, a3, sizeof(__dst)); /*0x1005ccd1c*/
  codexmate_lib::core::relay::manager::RelayManager::compose_proxy_status::h3638a0ee22531e27(v15); /*0x1005ccd2b*/
  if ( __dst[6] ) /*0x1005ccd3a*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x1005ccd48*/
  if ( __dst[9] ) /*0x1005ccd57*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1005ccd65*/
  if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x1005ccd8e*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x1005ccda2*/
  qmemcpy(&__dst[6], v15, 0x50u); /*0x1005ccdb6*/
  v7 = *a2 + 16LL; /*0x1005ccdbc*/
  codexmate_lib::core::relay::storage::save::h4619a27159e38d20(v15, v7, __dst); /*0x1005ccdce*/
  if ( LODWORD(v15[0]) != 10 ) /*0x1005ccdda*/
  {
    qmemcpy(a1, v15, 0x60u); /*0x1005cce83*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(__dst); /*0x1005cce8d*/
    return a1; /*0x1005cce8d*/
  }
  v8 = a2[1]; /*0x1005ccde0*/
  v9 = *(_QWORD *)(v8 + 16); /*0x1005ccde8*/
  if ( !v9 ) /*0x1005ccdef*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v8 + 16); /*0x1005cceaf*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005ccdf5*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005cce07*/
  {
    v11 = 0; /*0x1005cce0d*/
    if ( !*(_BYTE *)(v8 + 24) ) /*0x1005cce10*/
      goto LABEL_13; /*0x1005cce17*/
LABEL_19:
    v15[0] = v8 + 16; /*0x1005cced0*/
    LOBYTE(v15[1]) = v11; /*0x1005cced7*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005ccefc*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      v15,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534528);
  }
  v11 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, v7, v10, a4, a5) ^ 1; /*0x1005ccebf*/
  if ( *(_BYTE *)(v8 + 24) ) /*0x1005ccec3*/
    goto LABEL_19; /*0x1005cceca*/
LABEL_13:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(v8 + 32); /*0x1005cce1d*/
  memmove((void *)(v8 + 32), __dst, 0x158u); /*0x1005cce3b*/
  *a1 = 10; /*0x1005cce40*/
  if ( !v11 /*0x1005ccf03*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8 + 32, __dst, v12, a4, a5) )
  {
    *(_BYTE *)(v8 + 24) = 1; /*0x1005ccf10*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v8 + 16), __dst, v12, a4, a5); /*0x1005cce6d*/
  return a1; /*0x1005cce95*/
}
