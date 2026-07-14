// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x1005cdf60 depth=2
// codexmate_lib4core5relay7manager12RelayManager8snapshot
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  char v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // [rsp+8h] [rbp-38h] BYREF
  char v13; // [rsp+10h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 8); /*0x1005cdf74*/
  v6 = *(_QWORD *)(v5 + 16); /*0x1005cdf7d*/
  if ( !v6 ) /*0x1005cdf85*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v5 + 16); /*0x1005cdff3*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005cdf87*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005cdf97*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, a3, a4) ^ 1; /*0x1005ce000*/
    if ( !*(_BYTE *)(v5 + 24) ) /*0x1005ce00c*/
      goto LABEL_5; /*0x1005ce00c*/
LABEL_9:
    v12 = v5 + 16; /*0x1005ce00e*/
    v13 = v8; /*0x1005ce012*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005ce034*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      &v12,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &anon_1f22c03b288e649fafb3d21192ed4cff_764);
  }
  v8 = 0; /*0x1005cdf9f*/
  if ( *(_BYTE *)(v5 + 24) ) /*0x1005cdfa2*/
    goto LABEL_9; /*0x1005cdfaa*/
LABEL_5:
  v9 = v5 + 32; /*0x1005cdfac*/
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hdc194ad118c67832( /*0x1005cdfb4*/
    a1,
    v5 + 32);
  if ( !v8 /*0x1005ce03b*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(a1, v9, v10, a3, a4) )
  {
    *(_BYTE *)(v5 + 24) = 1; /*0x1005ce044*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)(v5 + 16), v9, v10, a3, a4); /*0x1005cdfd4*/
  return a1; /*0x1005cdfdc*/
}