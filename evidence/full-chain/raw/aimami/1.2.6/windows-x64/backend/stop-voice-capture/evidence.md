# evidence: stop_voice_capture (AiMaMi 1.2.6 windows-x64)

## <门控>
`server_health` confirmed before any decompile/xref/rename call this session: `status=ok`,
`uptime_sec=105776.824`, `module="AiMaMi 1.2.6 win64.exe"`, `idb_path=<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`,
`<反编译器>_ready=true`.

## Owner resolution (grounded)
- `owner_ea=0x14015b140` from `ipc-command-owner-map.json` (`resolution_method:
  tauri_command_name_exact_string_xref_single_hit`, `confidence: high`).
- `analyze_function(0x14015b140)` confirms `callers:["sub_140174120"]` (same shared dispatcher as
  `get_codex_router_auth_readiness`/`load_voice_runtime_status`), 1068 bytes, 39 basic blocks, cc=10.
  Structurally near-identical shell template to `load_voice_runtime_status_owner_sys` (same tracing-span
  setup/dispatch-check/teardown shape), differing in span-name literal and inner business call.
- Owner's callee `sub_140C384A0` (renamed this session `stop_voice_capture_core_sys`) confirmed via
  `analyze_function` to have **3 total callers**: this owner plus `sub_140C42E40`/`sub_140C44B20`.
  Those two additional callers were checked (not renamed): both are internal to the sidecar-scheduler
  cluster (`start_capture_core_and_sidecar_scheduler` appears in their own callee lists), matching the
  already-completed task #152 scope. Documented as a shared-caller caveat, per established precedent
  (e.g. the 1.1.8 `keychain::get_api_key` 6-caller shared-helper caveat) — not re-derived/renamed this
  round, strictly out of the user's 3-target scope.

## Call-tree (depth3, external_call + persistence_read terminals hit)
See `call-trees/stop_voice_capture.jsonl`. Terminal nodes: `CloseHandle` (Win32 external_call, releases
the background capture worker thread HANDLE), `emit_voice_runtime_status` (external_call-class event
broadcast to frontend), and `load_voice_runtime_status` (persistence_read, re-queries fresh state at the
tail of the async join path — same core function documented in the sibling `load_voice_runtime_status`
leaf). Satisfies redline13 depth-or-terminated_reason gate.

## Side effects (⚠ disclosed per red line 20)
- `CloseHandle` on the background voice-capture worker thread HANDLE.
- `emit_voice_runtime_status` event broadcast to frontend (observable, non-persistent).
- Process-global generation-counter increment (`qword_141FBA3C0`), in-memory only.
- No filesystem/registry write found anywhere in this call tree.

## Fake-wall check
`genuine_ceiling=false`; `accepted_unknown` not claimed. Owner and core both given full Hex-Rays bodies
this session, 0 `decompile_truncated` flags observed. The 2 sidecar-scheduler caller functions
(`sub_140C42E40`/`sub_140C44B20`) were inspected only far enough to confirm they belong to the
already-completed task #152 scope — not decompiled to full depth or renamed, honest scope boundary.

## IDB mutations this session (scoped strictly to this leaf)
- `rename`: `sub_14015B140` → `stop_voice_capture_owner_sys`; `sub_140C384A0` → `stop_voice_capture_core_sys`.
- `set_comments`: 2 new comments (owner + shared core, including the 3-caller shared caveat).
- dirtree: both moved into `codexmate_lib/core/voice/runtime/`, grounded-verified via `resolve_path`.
- `<工具调用>`: `ok=true`. `sub_140C42E40`/`sub_140C44B20` were NOT renamed or moved.

## Count clarification (session-level, applies to all 3 p1gap leaves collectively)
This session covered **3 targets** (`get_codex_router_auth_readiness` / `load_voice_runtime_status` /
`stop_voice_capture`), producing **4 renamed functions** in total — not "3 functions". The extra function
comes from this leaf specifically: `stop_voice_capture` required renaming both its owner
(`stop_voice_capture_owner_sys`) and its core (`stop_voice_capture_core_sys`), while the other two targets
each only needed an owner rename (their core functions were pre-existing/already named). See
`producer-ledger.<审计会话> `count_clarification` field for the
authoritative statement.
