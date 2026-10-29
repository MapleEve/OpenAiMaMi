// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/codex_mutation
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::codex_mutation::CodexMutationGate::try_lock::hc52e8ec53328372c @ 0x1002bf380 size=413 lines=55 =====
__int64 __fastcall codexmate_lib::core::relay::codex_mutation::CodexMutationGate::try_lock::hc52e8ec53328372c(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r12
  __int64 *v4; // r14
  __int64 v5; // rdi
  char v6; // r15
  void *v7; // rax

  v3 = *a2;
  v4 = (__int64 *)(*a2 + 16LL);
  v5 = *v4;
  if ( *v4 )
  {
    if ( (unsigned __int8)std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v5) )
      goto LABEL_3;
LABEL_12:
    *(_BYTE *)(a1 + 16) = 2;
    goto LABEL_13;
  }
  v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h8dd8979d8d8a8a3a(*a2 + 16LL);
  if ( !(unsigned __int8)std::sys::pal::unix::sync::mutex::Mutex::try_lock::ha481f93e51a9f965(v5) )
    goto LABEL_12;
LABEL_3:
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2) ^ 1;
  else
    v6 = 0;
  if ( !*(_BYTE *)(v3 + 24) )
  {
    *(_QWORD *)(a1 + 8) = v4;
    *(_BYTE *)(a1 + 16) = v6;
LABEL_13:
    *(_QWORD *)a1 = 11;
    return a1;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5);
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(55, 1);
  if ( !v7 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 55);
  qmemcpy(v7, "Codex mutation gate is poisoned during auth observation", 55);
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 55;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = 55;
  if ( !v6
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(55, 1) )
  {
    *(_BYTE *)(v3 + 24) = 1;
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4);
  return a1;
}

