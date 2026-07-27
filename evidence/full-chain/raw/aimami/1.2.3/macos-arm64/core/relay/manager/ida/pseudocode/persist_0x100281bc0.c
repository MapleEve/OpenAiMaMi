// __ZN13codexmate_lib4core5relay7manager12RelayManager7persist @ 0x100281bc0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::persist::h80723bf8e1ca0c2e(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r15
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  _QWORD __dst[37]; // [rsp+0h] [rbp-1B0h] BYREF
  _QWORD v17[17]; // [rsp+128h] [rbp-88h] BYREF

  v6 = a2[2]; /*0x100281be7*/
  if ( *(_QWORD *)(v6 + 16) != 0x8000000000000000LL ) /*0x100281bf3*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__dst[1], v6 + 16); /*0x100281d5d*/
    __dst[0] = 9; /*0x100281d62*/
    qmemcpy(a1, __dst, 0x60u); /*0x100281d7c*/
    v14 = a3; /*0x100281d7f*/
LABEL_19:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v14); /*0x100281d9d*/
    return a1; /*0x100281d9d*/
  }
  memcpy(__dst, a3, sizeof(__dst)); /*0x100281c08*/
  codexmate_lib::core::relay::manager::RelayManager::compose_proxy_status::h7248b3f51c4d799d((__int64)v17, a2); /*0x100281c17*/
  if ( __dst[6] ) /*0x100281c26*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x100281c34*/
  if ( __dst[9] ) /*0x100281c43*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x100281c51*/
  if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x100281c6c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x100281c80*/
  qmemcpy(&__dst[6], v17, 0x50u); /*0x100281c94*/
  v7 = *a2 + 16LL; /*0x100281c9a*/
  codexmate_lib::core::relay::storage::save::h56fb60ad12ceed07(v17, v7, __dst); /*0x100281cac*/
  if ( LODWORD(v17[0]) != 11 ) /*0x100281cb8*/
  {
    qmemcpy(a1, v17, 0x60u); /*0x100281d93*/
    v14 = __dst; /*0x100281d96*/
    goto LABEL_19; /*0x100281d96*/
  }
  v8 = a2[1]; /*0x100281cbe*/
  v9 = *(_QWORD *)(v8 + 16); /*0x100281cc6*/
  if ( !v9 ) /*0x100281ccd*/
    v9 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v8 + 16); /*0x100281dbf*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x100281cd3*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100281ce5*/
  {
    v12 = 0; /*0x100281ceb*/
    if ( !*(_BYTE *)(v8 + 24) ) /*0x100281cee*/
      goto LABEL_14; /*0x100281cf5*/
LABEL_22:
    v17[0] = v8 + 16; /*0x100281de0*/
    LOBYTE(v17[1]) = v12; /*0x100281de7*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, v17, &off_10195E740, &off_10195DD38); /*0x100281e0c*/
  }
  v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v9, v7, v10, v11) ^ 1; /*0x100281dcf*/
  if ( *(_BYTE *)(v8 + 24) ) /*0x100281dd3*/
    goto LABEL_22; /*0x100281dda*/
LABEL_14:
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v8 + 32); /*0x100281cfb*/
  memmove((void *)(v8 + 32), __dst, 0x128u); /*0x100281d19*/
  *a1 = 11; /*0x100281d1e*/
  if ( !v12 /*0x100281e13*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           v8 + 32,
                           __dst,
                           v13,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(v8 + 24) = 1; /*0x100281e20*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v8 + 16)); /*0x100281d4b*/
  return a1; /*0x100281da5*/
}