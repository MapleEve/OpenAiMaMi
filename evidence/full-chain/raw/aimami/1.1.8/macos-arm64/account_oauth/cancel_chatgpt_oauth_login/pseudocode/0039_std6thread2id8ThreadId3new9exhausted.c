// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x10112abe0 depth=4
// std6thread2id8ThreadId3new9exhausted
void __noreturn std::thread::id::ThreadId::new::exhausted::hf16f361ce084b02b()
{
  core::panicking::panic_fmt::h3a793735daf6e4ec(
    (__int64)"failed to generate unique thread ID: bitspace exhaustedtoo many running threads in thread scopeuse of std::thread::current() is not possible after the thread's local data has been destroyedfatal runtime error: init_current() was re-entrant, which indicates a bug in the Rust threading implementation, aborting\nfatal runtime error: current thread handle already set during thread spawn, aborting\nRUST_LIB_BACKTRACE<unnamed>Box<dyn Any>thread caused non-unwinding panic. aborting.\ncannot modify the panic hook from a panicking thread()reentrant initoverflow in Duration::newdescription() is deprecated; use Displaymid > lencalled `Result::unwrap()` on an `Err` valueWouldBlock",
    111,
    (__int64)&off_1015AE7A0);
}