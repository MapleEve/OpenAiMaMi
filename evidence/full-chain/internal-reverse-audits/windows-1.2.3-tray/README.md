# Windows 1.2.3 tray

Status: `consumerStartReady` for 3/10 named target families (30%); 7/10 `blocked`/`truly_undone`. Not `strictImplementationUse`, not `readyToImplement`.

## What this package is

A **partial** audit package for the windows-x64 build of AiMaMi 1.2.3's system-tray module. It exists to make an honest gap explicit: the macOS sibling (`../macos-1.2.3-tray/`) has 10/10 named target families covered (`consumerStartReady`); Windows, until this session, had only 2 stripped functions and 1 cross-platform-matched function on disk, and **no `windows-1.2.3-tray` conclusion package at all**. This session:

1. Read all pre-existing windows-x64 1.2.3 raw evidence for tray (3 files: `load_tray_template_icon`, `sub_14025D570`, `sub_1407190E0`).
2. Confirmed the live IDA MCP session (<host>, `AiMaMi.1.2.3 win64.exe`) via `server_health` before any tool call.
3. Ran exact-name `lookup_funcs` against the live session for all 10 mac-side tray_menu target names, and found 2 more (`create_bootstrap_tray_menu`, `handle_tray_menu_event`) that exist as **named (non-stripped)** functions on the windows binary but had never been decompiled or catalogued (not in the 1133-row `WIN-APP-FUNCTION-INVENTORY.jsonl`, no raw `.c` file, no `INDEX.jsonl` entry).
4. Decompiled both, verified brace-balance and non-truncation, wrote them to `raw/aimami/1.2.3/windows-x64/commands/tray_menu/ida/pseudocode/`, and appended one `INDEX.jsonl` row.
5. Confirmed the other 7 mac-side names return `Not found` on windows-x64 1.2.3 — a real, reported gap, not a false negative (the IDA session was live throughout and other calls in the same session succeeded).
6. Assembled this canonical `audits/windows-1.2.3-tray/` package per RULE 8.

## Coverage summary

| named target | windows-x64 1.2.3 status |
|---|---|
| `load_tray_template_icon` | covered — pre-existing raw evidence, cross-platform string-signature matched |
| `create_bootstrap_tray_menu` | covered — decompiled this session (exact-name match) |
| `handle_tray_menu_event` | covered — decompiled this session (exact-name match) |
| `create_tray_menu` | **not found** — no windows owner resolved |
| `create_tray_menu_from_snapshot` | **not found** |
| `append_codex_router_section` | **not found** |
| `refresh_tray_menu` | **not found** |
| `refresh_tray_menu_with_snapshot` | **not found** |
| `quota_text` | **not found** (2 unresolved stripped functions on disk are plausible-but-unconfirmed candidates) |
| `update_tray_recording_state` | **not found** (same caveat) |

See `logic/FULL-CHAIN-1.2.3.md` for what the 3 covered functions actually do, `gate-report.json` for the formal dim-by-dim gate status, and `data/task-plan.json` for the producer next-steps to close the remaining 7.

## Why the gap is plausible, not just "missed work"

`create_bootstrap_tray_menu` and `handle_tray_menu_event` are named on the windows binary and match the mac Rust module path *exactly* (`codexmate_lib::commands::tray_menu::*`). That is unusual for a stripped-release windows PE and suggests either (a) these two symbols specifically survived stripping/some build-config difference, or (b) the tray module is built with different symbol-visibility settings than the rest of `codexmate_lib`. Either way, exact-name lookup for the other 7 genuinely returning "Not found" (not an error, not a timeout — a clean negative result from a live session) means they are most likely either MSVC-toolchain-stripped without a resolvable name, or ICF-folded/inlined into the 2 functions that *are* named. Both hypotheses are recorded as `next_producer_steps`, neither was tested this session.

## What NOT to conclude from this package

- Do not assume windows 1.2.3 tray behavior is identical to macOS 1.2.3 tray for the 7 uncovered targets. `platformPolicy.doNotInferWindowsFromMacOS` applies.
- Do not treat `sub_14025D570` / `sub_1407190E0` as confirmed instances of `quota_text` / `update_tray_recording_state`. They are architecturally plausible (icon-badge pixel math; drop-glue) but not identity-mapped this session.
- Do not carry forward `windows-1.0.9-tray`'s `accepted_full_leaf_100_windows_ida` claim to this package. Different binary, different (and likely architecturally different — native win32 vs. Tauri abstraction) implementation, no diff run.

## Producer/session facts

- IDA MCP host: <host>, module `AiMaMi.1.2.3 win64.exe`, idb `<二进制路径>\AiMaMi.1.2.3 win64.exe.i64`, confirmed live via `server_health` (status=ok, uptime=121281s, IDA decompiler_ready=true) before all tool calls this session.
- Binary sha256 (independently re-hashed this session): `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`.
- 2 new raw `.c` files written this session; 1 `INDEX.jsonl` row appended (append-only, no existing rows modified).
- 0 new IDA MCP calls failed, timed out, or returned ambiguous results that were treated as coverage (per red line 17 — one `lookup_funcs` call did hit a client-side timeout on first attempt and was retried once per protocol; the retry succeeded and its result is what's recorded here).
