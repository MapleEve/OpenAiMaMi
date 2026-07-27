# Evidence: open_path (macos-arm64, v1.1.1)

**Session**: <审计会话>
**Machine**: <本地机器>
**Date**: 2026-06-17
**Binary SHA256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**Owner VA**: 0x10061f810
**Symbol**: codexmate_lib::commands::system::open_path::h8be2aab143185937
**Size**: 0x1e0 (480 bytes)
**逆向分析**: IDA decompiler_ready=true, uptime=58008s

---

## ## Confirmed

1. **Owner VA confirmed** via `func_query {name_regex:"open_path"}` → `0x10061f810` demangled symbol `codexmate_lib::commands::system::open_path::h8be2aab143185937` size=480B — exact match
2. **ArgKey = "path"** confirmed from IPC dispatcher @0x10030c9c0: `v19[2]="pathwith..."`, `v19[3]=4` → "path" (4 bytes), then `CommandArg::from_command` parses it
3. **macOS `open` sidecar**: `Command::new(ptr=0x1010e8a44+36, len=4)` → program name = "open" (4 bytes at offset in packed string); confirmed by get_bytes + pseudocode
4. **ArgObject `{path:t}`**: ipc-contracts.jsonl direct hit `command=open_path, argKeys=["path"], argObject="{path:t}", col=31804, wrapper=openPath`
5. **Frontend CCF 4 entries**: all confirm `ne("open_path",{path:t})` pattern; callsites include URL strings ("https://chatgpt.com/", "https://woyao.pro") proving real usage
6. **IPC dispatcher xref**: `xrefs_to(0x10030c9c0 → 0x10061f810)` direct code xref; `xrefs_to(0x10114801b)` (cmd string blob) → dispatcher @0x10031bcd0 (outer router)
7. **Ok path**: spawn success → `*a1 = 0x8000000000000000` (unit Ok discriminant); returned via `InvokeResolver::respond`
8. **Err path**: spawn failure (v18==2) → `std::io::Error::Display::fmt` → `unwrap_failed` path → Err string returned
9. **Fire-and-forget**: no `Child::wait()` in pseudocode; child process runs independently; no stdout/stderr captured
10. **FD cleanup**: `close_NOCANCEL` called on up to 3 FDs (stdout/stderr pipe ends) on success path; inherited fd cleanup pattern

---

## ## Inferred

1. **Path/URL not validated**: Rust backend passes `path` arg directly to `open` CLI without validation; type coercion only (String)
2. **macOS `open` semantics**: URL → default browser; file path → default app; directory → Finder; behavior determined by OS not by AiMaMi
3. **No retry logic**: single spawn attempt; on failure returns Err immediately
4. **IPC dispatcher is command-specific closure**: `run::{{closure}}::{{closure}}::h0316fdf0efc4ac23` handles `open_path` specifically (seen from `v19[1]=9` + name pool)
5. **Error string format**: `std::io::Error::Display` — standard Rust IO error format (OS error code + description), e.g. "No such file or directory (os error 2)"
6. **`open` binary path**: not set explicitly; relies on `$PATH`; on macOS standard installs this is `/usr/bin/open`
7. **Arg count**: exactly 1 arg (`path`); no additional flags passed to `open`; no `-a` (app) or `-t` (text) switches
8. **Child process not tracked**: no `Child` handle stored; PID not returned; cannot be killed/monitored
9. **Thread**: called from Tauri async runtime thread (dispatch closure); spawn is non-blocking from caller perspective

---

## ## Unknown

1. **Windows platform**: Windows IDB required; Windows may use `ShellExecuteW` or similar — not confirmed (platform evidence separate)
2. **dim6 test/acceptance mapping**: 内部构建 implementation side, not scope of raw evidence
3. **Exact error message format on ENOENT**: inferred from std::io::Error Display impl; not byte-confirmed
4. **Whether `open` is searched in PATH at runtime or hardcoded**: inferred PATH lookup from Command::new without absolute path
5. **Behavior with special chars in path**: no sanitization observed; URL-encoded paths may be passed verbatim

---

## Four-Angle Completeness

- **A (func_query symbol enum)**: `func_query {name_regex:"open_path"}` → `0x10061f810` unique hit — PASS
- **B (string pool)**: `find_regex("open_path")` → @0x10114801b in packed cmd blob, len=9 confirmed by dispatcher `v19[1]=9` — PASS
- **C (frontend CCF)**: `ipc-contracts.jsonl` direct hit + 4 `frontend-control-flow.jsonl` entries, all argKeys=["path"] — PASS
- **D (manifest+INDEX)**: manifest.json + call-trees/open_path.jsonl + pseudocode files + INDEX.jsonl entry — PASS (written this session)

---

## Fake-Wall Check (genuine_ceiling=false)

All 7 taxonomy categories excluded:
1. `drop_in_place != async body`: owner is synchronous (no async/await, no Poll); `drop_in_place<Command>` is cleanup not logic body
2. `async decompile failed`: N/A — synchronous function, decompile succeeded completely
3. `wrong VA`: VA confirmed by func_query + xrefs_to + dispatcher call — unambiguous
4. `vtable dynamic dispatch`: no vtable in call chain; all calls are direct static dispatch
5. `HTTP-terminal`: no HTTP/reqwest; OS sidecar only (`/usr/bin/open`)
6. `ICF fold`: initial `lookup_funcs("*open_path*")` returned null (ICF behavior), but `func_query {name_regex}` found true demangled symbol — fake wall broken
7. `library internal vs config callsite`: stdlib `Command::new/arg/spawn` are implementation leaves, not config boundaries

**recovery_attempts**: ICF null from lookup_funcs → switched to func_query name_regex → found 0x10061f810 immediately. No other wall encountered.

---

## IDB Write-Back

- `append_comments` applied to owner @0x10061f810 (see step 5 below)
- `idb_save` called after this command is complete
