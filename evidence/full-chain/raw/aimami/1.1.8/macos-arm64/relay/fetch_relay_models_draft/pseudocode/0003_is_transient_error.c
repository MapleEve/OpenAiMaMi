// callee: codexmate_lib::core::relay::fetch_models::is_transient_error::hfd01551eceeb3f9a
// VA: 0x10059c7d0 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>
// role: retry-gate — lowercases the error message then checks 4 substring patterns.
//       Functionally IDENTICAL to the 1.1.1 is_transient_error callee (same to_lowercase +
//       4x is_contained_in pattern, same 4 literal substrings by byte-length: 14/9/7/10) —
//       CONFIRMED UNCHANGED vs 1.1.1. This function itself has NOT changed; what changed
//       (see pseudocode/0001 owner + evidence.md) is that in 1.1.8 its boolean result now
//       feeds an actual bounded retry loop inside the owner, not just a single-shot check.

__int64 __fastcall codexmate_lib::core::relay::fetch_models::is_transient_error::hfd01551eceeb3f9a(
        __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6;   // retval (bool as int)
  void *v7;          // lowercased string data ptr
  __int64 v9;        // lowercased string len (BYREF)
  void *__s1;         // lowercased string data ptr (BYREF)

  alloc::str::to_lowercase::h21da2998c4baf545(&v9, a1, a2, a4, a5, a6); /*0x10059c7e7*/
  v7 = __s1;
  v6 = 1;
  if ( !str::is_contained_in::h62e4a94c27d2c698(&anon_1f22c03b288e649fafb3d21192ed4cff_171 /* "request failed", 14B */, 0xE, __s1)
    && !str::is_contained_in::h62e4a94c27d2c698(&anon_1f22c03b288e649fafb3d21192ed4cff_172 /* "timed out", 9B */, 0x9, v7)
    && !str::is_contained_in::h62e4a94c27d2c698(&anon_1f22c03b288e649fafb3d21192ed4cff_173 /* "timeout", 7B */, 0x7, v7) )
  {
    v6 = str::is_contained_in::h62e4a94c27d2c698("connection" /* 反编译器-merged display; real literal is 10B "connection" per string-length arg */, 0xA, v7);
  }
  if ( v9 )
    __rust_dealloc(v7, v9, 1); /* free the lowercased temporary */
  return v6; /* true => caller should retry (transient), false => terminal error */
}
