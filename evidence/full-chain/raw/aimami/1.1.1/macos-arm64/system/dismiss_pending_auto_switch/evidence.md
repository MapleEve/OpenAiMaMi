# dismiss_pending_auto_switch — AiMaMi 1.1.1 macOS ARM64

session: <审计会话>
machine: <本地机器>
produced_at: 2026-06-16
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
baseline: 1.0.9 sha=1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482
delta_classification: migrated_no_behavior_diff (interface identical; impl addresses changed)

---

## Confirmed

- Owner command VA: `0x10061b3e0`, size=0x2dd, symbol=`codexmate_lib::commands::system::dismiss_pending_auto_switch::h33e15699f40f5f79`
- Core Repository impl VA: `0x1004cdb90`, size=0x7ac, symbol=`codexmate_lib::core::repository::Repository::dismiss_pending_auto_switch::hc6050fe08f5c1e1b`
- IPC dispatch xref: `0x1003191a7` in fn `0x1003190a0` (codexmate_lib::run::{{closure}}::{{closure}})
- IPC registration blob: `0x10114801b` — contains `dismiss_pending_auto_switch` in command name list
- Both owner and core_impl decompiled cleanly (no HexRays failure)
- Command wrapper acquires OnceBox<Mutex<Repository>>, delegates to Repository impl, releases lock — identical pattern to 1.0.9
- Panic string at `0x10114c2e6` (41B): `"poisoned lock: another task failed inside"` — confirmed from rodata bytes
- Core impl: calls `load_pending_auto_switch` (fs::read_to_string + serde_json::from_trait)
- Core impl: on None pending record (discriminant=2): returns Ok(None) immediately — no snooze write
- Core impl: on pending record found: captures SystemTime::now + duration_since for `dismissedAt`
- Core impl: calls `CodexPaths::ensure_directories` (DirBuilder::create) — ensures snooze dir exists
- Core impl: allocs 128-byte JSON buffer, serializes three keys via serde_core::ser::SerializeMap::serialize_entry
- Serde key "currentAccountKey" (17B) at `0x10114ce56` — rodata confirmed
- Serde key "candidateAccountKey" (19B) at `0x10114ce67` — rodata confirmed
- Serde key "dismissedAt" (11B) at `0x10114ce7a` — rodata confirmed
- Core impl: `std::fs::write(a2+63, snooze_json_vec)` — writes snooze record to repo field offset 504 bytes
- Core impl: after write success: calls `drop_in_place<AutoSwitchSnoozeRecord>` then `Repository::clear_auto_switch_snooze`
- `clear_auto_switch_snooze@0x1004c8120`: calls `std::sys::fs::remove_file`; if NotFound returns Ok(()); other errors return Err(2)
- `load_pending_auto_switch@0x1004c8200`: reads file at repo field (a2+488/496); serde_json::from_trait into pending record struct
- `ensure_directories@0x1005582b0`: calls `std::fs::DirBuilder::_create` (create_dir_all semantics)
- Response success: returns `Ok(())` discriminant=10 byte=1 — identical to 1.0.9
- Response no-pending: returns `Ok(None)` discriminant=10 byte=0 — identical to 1.0.9
- argKeys=[] confirmed from frontend ipc-contracts.jsonl (zero-argument command)
- Frontend: `ne("dismiss_pending_auto_switch")` at index-DdcCOEJG.js:86:col=32223, kind=tauriInvokeWrapper
- Snooze JSON schema: `{"currentAccountKey":"<str>","candidateAccountKey":"<str>","dismissedAt":"<Duration_secs_nanos>"}` — confirmed from rodata (same keys as 1.0.9)
- Migration verdict: all field names, snooze keys, control flow, error codes, response discriminants match 1.0.9; only impl VA changed

## Inferred

- Snooze file path is at repo struct field offset 504 bytes (a2+63 in QWORD arithmetic), equivalent to 1.0.9 `a1+512/520`
- `dismissedAt` value is `Duration { secs, subsec_nanos }` from `SystemTime::now().duration_since(UNIX_EPOCH)` — if duration_since fails (clock before epoch), falls back to None/null
- `load_pending_auto_switch` reads from a separate pending record file path at repo offset a2+488/496 (auto-switch pending state JSON)
- `clear_auto_switch_snooze` removes the pending auto-switch request file (not the snooze record itself); NotFound is treated as Ok to allow idempotent clearing
- The `AutoSwitchSnoozeRecord` struct contains at minimum the three serde keys; full field layout not recovered
- IPC dispatch closure at `0x1003190a0` registers this command among system commands (same run::{{closure}} pattern as other commands)
- `ensure_directories` on failure returns Err which causes core_impl to return Err(2) without writing snooze

## Unknown

- `load_pending_auto_switch` full deserialized struct layout (AutoSwitchPendingRecord): only `currentAccountKey` (str) and `candidateAccountKey` (str) fields inferred from snooze output; exact field names in pending record file unknown
- Exact snooze file path (runtime, depends on CodexPaths::snooze_file_path or equivalent); repo struct field offset confirmed but filename unknown
- `dismissedAt` precise serialization format (serde_json output of Duration — likely `{secs:u64, nanos:u32}` object, not confirmed)
- `AutoSwitchSnoozeRecord` full struct definition (only the three serialized keys confirmed)
- Windows platform behavior (Windows Unknown — not inferred from macOS evidence)
- dim6 test/acceptance mapping (内部构建 implementation side)
- Whether multiple pending requests can exist or only single (no multi-element iteration observed)
- Snooze TTL or expiry logic (not present in dismiss path — snooze record is written, clearing happens on separate command)
- `clear_auto_switch_snooze` exact file path argument origin (a2[61], a2[62] — repo struct fields, not decoded)
- Whether `CoreEnvelope` wrapping happens at the Tauri layer or in the command fn (command fn returns Result<()>, envelope likely added by Tauri invoke)
