// __ZN13codexmate_lib4core5relay7manager12RelayManager8snapshot @ 0x100283220 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r15
  __int64 v8; // rdx
  __int64 v10; // [rsp+8h] [rbp-38h] BYREF
  char v11; // [rsp+10h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8); /*0x100283234*/
  v4 = *(_QWORD *)(v3 + 16); /*0x10028323d*/
  if ( !v4 ) /*0x100283245*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3 + 16); /*0x1002832b3*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x100283247*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100283257*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x1002832c0*/
    if ( !*(_BYTE *)(v3 + 24) ) /*0x1002832cc*/
      goto LABEL_5; /*0x1002832cc*/
LABEL_9:
    v10 = v3 + 16; /*0x1002832ce*/
    v11 = v7; /*0x1002832d2*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, &v10, &off_10195E740, &off_10195DD98); /*0x1002832f4*/
  }
  v7 = 0; /*0x10028325f*/
  if ( *(_BYTE *)(v3 + 24) ) /*0x100283262*/
    goto LABEL_9; /*0x10028326a*/
LABEL_5:
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h93473878d0e3d393( /*0x10028326c*/
    a1,
    v3 + 32);
  if ( !v7 /*0x1002832fb*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           a1,
                           v3 + 32,
                           v8,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    *(_BYTE *)(v3 + 24) = 1; /*0x100283304*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v3 + 16)); /*0x100283294*/
  return a1; /*0x10028329c*/
}