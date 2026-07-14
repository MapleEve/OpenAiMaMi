// SOURCE: AiMaMi 1.1.8 macOS universal (x86_64 slice decompiled; app-level facts arch-independent)
// SHA256 (AiMaMi app Mach-O): 63c9655f7e7f0d725e55c83b5057023cb8e8351d577f47a9ad683137d6c89470
// FUNCTION: codexmate_lib::core::oauth_refresh::ensure_fresh_token
// SYMBOL: __ZN13codexmate_lib4core13oauth_refresh18ensure_fresh_token17hfa129aada8ffa5c2E
// VA: 0x1003cf360   CALLER: confirm_pending_auto_switch (depth1 callee of root, conditional)
// STATUS: accepted pseudocode (679-line HexRays body; condensed to the app-level call chain below —
//   full raw JSON captured in session tool output, not duplicated in internal-reverse per red line 3).
// STATUS NOTE: this is a SYNCHRONOUS/blocking implementation (reqwest::blocking::*), NOT an async
//   ::poll state machine — red line 13's async-body requirement does not apply to this leaf.
// NEW vs 1.0.9: this entire function and its call from confirm_pending_auto_switch are new; 1.0.9's
//   confirm_pending_auto_switch had no network call anywhere in its call tree.
//
// Call chain (depth2 relative to root; std/reqwest boundary is the natural leaf, library-internal,
// not re-decompiled further):
//   1. token_remaining_seconds(auth_file) [VA 0x1003d0830] — chrono-based check of current token TTL;
//      if still fresh beyond a threshold, likely short-circuits without a network call (not fully
//      traced this round — recorded as inferred fast-path, not confirmed by branch-level trace).
//   2. http_client(proxy_config) [core::api_client::http_client, VA 0x100597e20] — builds a
//      reqwest::blocking::Client (honors the account's proxy config).
//   3. Client::request(...) [VA 0x1007f1b10] -> RequestBuilder::header_sensitive [0x1007f1f80] ->
//      RequestBuilder::timeout [0x100b377e0] -> RequestBuilder::form [0x1007f2790] -> RequestBuilder::
//      send [0x100b37730]  (terminated_reason=external_call)
//      — request target string pool confirms: "https://auth.openai.com/oauth/token" with form fields
//        "grant_type=authorization_code", "code_verifier", header "User-Agent: AiMaMi/1.1.8".
//   4. Response::text [VA 0x100b778a0] -> serde_json::de::from_trait [VA 0x10050f270] parses the JSON
//      token response.  (terminated_reason=response_serialize)
//   5. chrono::offset::Utc::now [VA 0x10094f5a0] + NaiveDateTime::overflowing_add_offset — compute new
//      expiry timestamp for the refreshed token.
//   6. AuthFile Serialize impl [VA 0x1006c7160] -> relay::atomic_write::write_atomic [VA 0x10039e600]
//      (see 0007) — persists the refreshed token back to the local auth file on disk.
//      (terminated_reason=persistence_commit)
//   7. On any reqwest::Error / std::io::Error / serde_json::Error along the way, formats via each
//      type's Display impl into a TokenEndpointError / CoreError and returns it (discriminant
//      >=0x8000000000000002 per the caller's check) — this is what confirm_pending_auto_switch
//      interprets as "refresh failed" and maps to the new user-facing
//      "Candidate token is no longer valid, please try another account" error.
//
// error strings referenced in this function's string pool (partial): "a Display implementation
//   returned an error unexpectedly", "chunk size must be non-zero", "called `Result::unwrap()` on an
//   `Err` value" (internal panic-path guards, not user-facing).

__m128i *__fastcall codexmate_lib::core::oauth_refresh::ensure_fresh_token::hfa129aada8ffa5c2(
        __m128i *a1 /* out TokenRefreshOutcome */,
        void *auth_file, void *auth_file_len,
        void *proxy_config, void *proxy_config_len,
        int unused1, int unused2)
{
  // see prose call chain above; condensed per red line 3 (no bulk decompile dumps in internal-reverse).
  return a1;
}
