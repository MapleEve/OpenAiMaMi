// __ZN13codexmate_lib4core6skills20lock_skill_mutations @ 0x10034e5f0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::skills::lock_skill_mutations::h04196551a2ddac87(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // r14
  void *v7; // rax
  __int64 v8; // rdx
  void *v9; // r15
  __int64 *result; // rax

  if ( qword_1019FEC88 ) /*0x10034e608*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hd86968d4831b7931(); /*0x10034e6e8*/
    v3 = codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d; /*0x10034e6ed*/
    if ( codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d ) /*0x10034e6f7*/
      goto LABEL_3; /*0x10034e6f7*/
  }
  else
  {
    v3 = codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d; /*0x10034e60e*/
    if ( codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d ) /*0x10034e618*/
      goto LABEL_3; /*0x10034e618*/
  }
  v3 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d); /*0x10034e709*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x10034e61e*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10034e62e*/
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x10034e719*/
    if ( byte_1019FEC80 ) /*0x10034e726*/
      goto LABEL_5; /*0x10034e726*/
LABEL_12:
    *(_QWORD *)(a1 + 8) = &codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d; /*0x10034e72c*/
    *(_BYTE *)(a1 + 16) = v6; /*0x10034e737*/
    *(_QWORD *)a1 = 11; /*0x10034e73b*/
    return &codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d; /*0x10034e74a*/
  }
  v6 = 0; /*0x10034e63a*/
  if ( !byte_1019FEC80 ) /*0x10034e646*/
    goto LABEL_12; /*0x10034e646*/
LABEL_5:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, a2); /*0x10034e64c*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1); /*0x10034e65b*/
  if ( !v7 ) /*0x10034e663*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 31); /*0x10034e76e*/
  v9 = v7; /*0x10034e669*/
  qmemcpy(v7, "Skill mutation lock is poisoned", 31); /*0x10034e6a0*/
  if ( !v6 /*0x10034e74b*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           31,
                           1,
                           v8,
                           std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) )
  {
    byte_1019FEC80 = 1; /*0x10034e758*/
  }
  result = (__int64 *)std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::core::skills::lock_skill_mutations::MUTATION_LOCK::h1a5cc655013c683d); /*0x10034e6c6*/
  *(_QWORD *)a1 = 10; /*0x10034e6cb*/
  *(_QWORD *)(a1 + 8) = 31; /*0x10034e6d2*/
  *(_QWORD *)(a1 + 16) = v9; /*0x10034e6da*/
  *(_QWORD *)(a1 + 24) = 31; /*0x10034e6de*/
  return result; /*0x10034e742*/
}