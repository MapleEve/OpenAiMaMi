// owner (depth0, IPC command entry) — codexmate_lib::commands::skills::restore_skill_backup::hdd4cc5f5064d93ff
// addr=0x10030ed50 size=1010B basic_blocks=29 cyclomatic_complexity=14
// caller: codexmate_lib::run::{{closure}}::{{closure}}::h386a8c7d835c3b02 @ call site 0x1002fc493 (live, dispatcher-wired)
// sole meaningful callee: codexmate_lib::core::skills::restore_skill_backup::h2146afcdb0c1e1fe @ 0x1004bfbb0
// role: thin OnceBox-mutex-guarded IPC wrapper — acquires a global std::sys::pal::unix::sync::mutex::Mutex
// (poison-checked via std::panicking::panic_count), calls the core implementation, formats CoreError via
// Display when the Result is Err, and packs the CoreEnvelope<T> discriminant/message/detail into the IPC
// return buffer. No business logic of its own beyond mutex + envelope wrapping — matches the shape already
// documented for other commands::* wrappers in this pipeline (thin dispatcher, not itself the leaf).

char *__fastcall codexmate_lib::commands::skills::restore_skill_backup::hdd4cc5f5064d93ff(
        char *__dst,
        __int64 *a2,
        _QWORD *a3,
        double a4,
        double a5)
{
  __int64 v7; // rdi
  char v12; // r12 (panic-count-zero-slow-path flag)
  char v17; // bl
  _QWORD *v41; // rsi (arg tuple ptr, a3)

  v41 = a3; /* v41[1], v41[2] = the two string-slice halves (ptr,len) of the "id" backup-id argument */
  v7 = *a2;
  if ( !*a2 )
    v7 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(a2); /* lazy-init global command mutex */
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0();
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, a4, a5) ^ 1;
    if ( *((_BYTE *)a2 + 8) )
      goto LABEL_5; /* poisoned-lock diagnostic path — not restore-specific, shared mutex-guard boilerplate */
LABEL_10:
    /* THE call: core::skills::restore_skill_backup(dst=v26, a2[24],a2[25]=<skills_root>, a2[45],a2[46]=<backups_root>,
       v41[1],v41[2]=<backupId str,len>) */
    codexmate_lib::core::skills::restore_skill_backup::h2146afcdb0c1e1fe(
      (char *)v26,
      a2[24],
      a2[25],
      a2[45],
      a2[46],
      v41[1],
      v41[2]);
    if ( v26[0] == 2 ) /* core fn returned Err variant (discriminant 2) */
    {
      /* format CoreError via Display, build CoreEnvelope::err(...) response, unwrap_failed on Display::fmt error
         (defensive — should never trigger), then unlock mutex and return the packed error envelope. */
    }
    else
    {
      /* Ok path (not shown in this truncated excerpt of the wrapper — delegates straight through to
         CoreEnvelope<T>::ok(<core fn's 336+B success struct>), then Mutex::unlock, return __dst).
         Confirmed via callee list: CoreEnvelope$LT$T$GT$::ok, Mutex::unlock both present as direct callees
         of this owner. */
    }
  }
  return __dst;
}
