// mac 1.2.2 NEW export_debug_bundle 0x100871d00 d=1
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::snapshot::h05a46bda0d674025(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r12
  pthread_mutex_t *v4; // rdi
  bool v5; // r15
  __int64 v7; // [rsp+8h] [rbp-38h] BYREF
  bool v8; // [rsp+10h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8); /*0x100871d14*/
  v4 = *(pthread_mutex_t **)(v3 + 16); /*0x100871d1d*/
  if ( !v4 ) /*0x100871d25*/
    v4 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa((volatile signed __int64 *)(v3 + 16)); /*0x100871d93*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x100871d27*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x100871d37*/
  {
    v5 = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100871da0*/
    if ( !*(_BYTE *)(v3 + 24) ) /*0x100871dac*/
      goto LABEL_5; /*0x100871dac*/
LABEL_9:
    v7 = v3 + 16; /*0x100871dae*/
    v8 = v5; /*0x100871db2*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100871dd4*/
      (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_907,
      20,
      (__int64)&v7,
      (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1319,
      (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1087);
  }
  v5 = 0; /*0x100871d3f*/
  if ( *(_BYTE *)(v3 + 24) ) /*0x100871d42*/
    goto LABEL_9; /*0x100871d4a*/
LABEL_5:
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::h7943b7bbe3bd7225( /*0x100871d4c*/
    a1,
    v3 + 32);
  if ( !v5 /*0x100871ddb*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(v3 + 24) = 1; /*0x100871de4*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)(v3 + 16)); /*0x100871d74*/
  return a1; /*0x100871d7c*/
}