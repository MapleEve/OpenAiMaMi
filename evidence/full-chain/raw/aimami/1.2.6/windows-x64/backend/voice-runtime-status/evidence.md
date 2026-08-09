# evidence: load_voice_runtime_status (AiMaMi 1.2.6 windows-x64)

## <门控>
`server_health` confirmed before any decompile/xref/rename call this session: `status=ok`,
`uptime_sec=105776.824`, `module="AiMaMi 1.2.6 win64.exe"`, `idb_path=<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`,
`<反编译器>_ready=true`.

## Owner resolution (grounded)
- `owner_ea=0x140162d80` from `ipc-command-owner-map.json` (`resolution_method:
  tauri_command_name_exact_string_xref_single_hit`, `confidence: high`).
- `analyze_function(0x140162d80)` confirms `callers:["sub_140174120"]` (the same shared dispatcher used
  by `get_codex_router_auth_readiness`), 1100 bytes, 39 basic blocks, cc=10.
- Owner's own callees include a function literally named `load_voice_runtime_status` at `0x140c37a50`
  (`lookup_funcs` confirms this name already exists in the IDB). `analyze_function(0x140c37a50)` confirms
  `callers:["sub_140162D80"]` — exclusive to this owner.

## Pre-existing orphaned IDB mutation discovered (important, disclosed per red line 29)
At session start, `0x140c37a50` was ALREADY renamed to `load_voice_runtime_status` and carried a Chinese
comment dated "1.2.6 windows deep pass 20260806" (today's date, evidently written in an earlier round of
work this same day — likely task #151 "voice runtime 9-function parity set"). A full-tree search of
`raw/aimami/1.2.6/windows-x64/` and `intermediate/aimami/1.2.6/windows-x64/` for any
`load_voice_runtime_status`/`voice-runtime-status` artifact found **zero** hits anywhere on disk before
this session's writes — confirming the rename+comment was an orphaned IDB mutation (IDB changed, no raw
evidence bundle ever written). This session supplies the first full raw bundle for it, on top of the
pre-existing rename, without re-doing or duplicating that earlier rename/comment work.

## Call-tree (depth3, response_serialize + persistence_read terminals both hit)
See `call-trees/load_voice_runtime_status.jsonl`. `sub_140029DD0` (mutex-guard resolve, string-anchored to
`std::sync::poison::mutex::Mutex<codexmate_lib::core::repository::Repository>`) and `sub_140BB37B0`
(712-byte snapshot copy) both terminate as persistence_read; `sub_140C48530` terminates as
response_serialize (final disc/ok/error tuple builder). Satisfies redline13 depth-or-terminated_reason gate.

## Fake-wall check
`genuine_ceiling=false`; `accepted_unknown` not claimed. Both owner and core were given full Hex-Rays
bodies this session with no `decompile_truncated` flags. Only the immediate depth-2 callees of the core
were traced (mutex-resolve / snapshot-copy / response-builder); their own sub-callees were not further
walked this round — an honest scope boundary, not a hidden truncation.

## IDB mutations this session (scoped strictly to this leaf)
- `rename`: `sub_140162D80` → `load_voice_runtime_status_owner_sys` (ok). The core `0x140c37a50` was
  **not** re-renamed (name `load_voice_runtime_status` already correct from the earlier orphaned pass).
- `set_comments`: 1 new comment at `0x140162d80` documenting the owner/core relationship; the core's
  pre-existing comment at `0x140c37a50` was left untouched (not re-edited, per minimal-touch discipline).
- dirtree: `codexmate_lib/core/voice/runtime` already existed (confirms the earlier orphaned pass had
  already created it for the core function); this session additionally moved
  `load_voice_runtime_status_owner_sys` into the same folder, grounded-verified via `resolve_path`.
- `<工具调用>`: `ok=true`.
