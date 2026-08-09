// Function: sub_140C37A50 (load_status equivalent)
// EA: 0x140C37A50
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06. Full body returned (~150 lines), no truncation marker.
// Condensed structural summary per time-budget scope (full text captured verbatim
// in this session's tool-call transcript).
//
// VERIFIED behavior:
//  - Re-acquires the SAME std::sync::Mutex<Repository> lock as the core function
//    (0x140c45670) and restart_trigger_listener (0x140c4a500) -- confirmed via the
//    identical "std::sync::poison::mutex::Mutex<codexmate_lib::core::repository::
//    Repository>" string reference (0x141774e58 aStdSyncPoisonM).
//  - Reads (not writes) the current Repository-held voice-runtime state on the
//    happy path, then delegates to sub_140C48530(&v40, a2) to produce the final
//    read-out result -- no persistence/mutation side effects observed in this
//    function's body (pure read + poison-guard boilerplate + delegation).
//  - This matches macOS's load_status semantics: a read-only accessor that
//    fetches the current persisted voice-runtime state (for status queries such
//    as load_voice_runtime_status, distinct from the write path in
//    update_voice_runtime_settings).
//
// Cross-platform mapping verdict: load_status on Windows is architecturally
// consistent with macOS (both read from the same underlying persisted state
// store guarded by a lock), though Windows reads from an in-process Mutex-
// guarded Repository struct rather than re-reading a JSON file from disk each
// time (macOS's load_status independently loads voice-runtime.json). This is a
// genuine, defensible cross-platform architecture difference (in-memory
// authoritative store vs. disk-round-trip), not a functional gap.
//
// refs of interest:
// 0x141774e58 aStdSyncPoisonM -> Mutex<Repository> type name (shared lock singleton,
//   same as core function and restart_trigger_listener)
// 0x140c48530 sub_140C48530 -> final read-out/result formatting delegate (not
//   separately decompiled this pass; candidate VoiceRuntimeInner::to_payload or
//   equivalent status-struct constructor -- flagged in manifest.json
//   recovery_attempts as an open next step, not accepted_unknown)
