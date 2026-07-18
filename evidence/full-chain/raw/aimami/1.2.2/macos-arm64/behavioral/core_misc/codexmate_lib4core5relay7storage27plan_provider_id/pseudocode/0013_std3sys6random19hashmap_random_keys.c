// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x10135b080 d=1
__int64 std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45()
{
  __int128 bytes; // [rsp+0h] [rbp-20h] BYREF
  CCRNGStatus v2; // [rsp+1Ch] [rbp-4h] BYREF

  bytes = 0; /*0x10135b08b*/
  v2 = CCRandomGenerateBytes(&bytes, 0x10u); /*0x10135b09d*/
  if ( v2 )
    core::panicking::assert_failed::hb70d0550edc83796(
      0,
      &v2,
      "",
      "failed to generate random datathe number of hardware threads is not known for the target platforminvalid stack sizefile name contained an unexpected NUL byte (SIGHUP) (SIGINT) (SIGQUIT) (SIGILL) (SIGTRAP) (SIGABRT) (SIGBUS) (SIGFPE) (SIGKILL) (SIGUSR1) (SIGSEGV) (SIGUSR2) (SIGPIPE) (SIGALRM) (SIGTERM) (SIGCHLD) (SIGCONT) (SIGSTOP) (SIGTSTP) (SIGTTIN) (SIGTTOU) (SIGURG) (SIGXCPU) (SIGXFSZ) (SIGVTALRM) (SIGPROF) (SIGWINCH) (SIGIO) (SIGSYS) (SIGEMT) (SIGINFO)nul byte found in provided datafatal runtime error: assertion failed: output.write(&bytes).is_ok(), aborting\nwait() should either return Ok or panicshort read on the CLOEXEC pipestack backtrace:\nnote: Some details are omitted, run with `RUST_BACKTRACE=full` for a verbose backtrace.\n__rust_end_short_backtrace__rust_begin_short_backtraces",
      61,
      &off_101926248);
  return bytes; /*0x10135b0ac*/
}