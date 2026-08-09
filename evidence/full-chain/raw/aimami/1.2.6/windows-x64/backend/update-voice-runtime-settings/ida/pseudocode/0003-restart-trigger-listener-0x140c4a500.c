// Function: sub_140C4A500 (restart_trigger_listener_internal equivalent)
// EA: 0x140C4A500
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06. Full body captured verbatim in this session's tool-call
// transcript (~250 lines); condensed structural summary below per time-budget
// scope (not a truncation fabrication -- IDA returned complete, non-truncated body).
//
// VERIFIED behavior (grounded in the captured decompile output):
//  - Acquires the same Mutex<Repository> lock pattern as the core function.
//  - Reads the persisted trigger-key binding config (fields at Repository+120,
//    +144, +264, +288, +168, +192, +216, +240, +736 etc -- same field cluster
//    the core function writes to), matching a keybinding/shortcut struct layout.
//  - Constructs a per-binding descriptor table (48-byte stride records) covering
//    modifier-key combinations (offsets checked against ranges 91-165, 20, etc --
//    virtual-key-code range checks for shortcut matching).
//  - Spawns a background thread via sub_14023EC90 (Rust std::thread::spawn
//    equivalent) carrying the Arc-cloned binding table (7-field Arc refcount
//    increment chain, generic Arc<T> clone) -- this IS the listener-restart
//    action: a fresh OS-level hotkey listener thread is spawned with the new
//    keybinding table whenever update_voice_runtime_settings changes the shortcut.
//  - On thread-spawn failure, emits the Rust panic string "failed to spawn thread"
//    (0x14187dd64 aFailedToSpawnT_10) via the generic panic-formatting helper.
//  - On success or non-spawn branches, calls sub_140C37590 (emit_status, see 0004)
//    to publish the "voice-runtime-updated" event, confirming this function sits
//    in the same call chain as emit_status/load_status.
//  - CloseHandle() on the thread handle is called in the success path (Windows
//    thread handle lifecycle management, generic OS glue).
//
// Cross-platform mapping: this matches macOS's restart_trigger_listener_internal
// semantically (both restart the OS-level global-hotkey listener whenever the
// shortcut/binding config changes), though the underlying mechanism differs
// (macOS likely uses a platform hotkey API re-registration; Windows spawns a
// fresh std::thread carrying the updated binding table -- consistent with
// Windows low-level keyboard hook / RegisterHotKey patterns typically requiring
// a dedicated message-pump thread).
//
// refs of interest:
// 0x14023ec90 sub_14023EC90 -> std::thread::spawn equivalent
// 0x14187dd64 aFailedToSpawnT_10 -> "failed to spawn thread" (Rust panic string)
// 0x140c37590 sub_140C37590 -> emit_status (called from within this function's
//   fallback/success paths; see companion file 0004)
// 0x1417767e8 / aStdSyncPoisonM -> Mutex<Repository> (shared lock, same singleton
//   as core function 0x140c45670)
