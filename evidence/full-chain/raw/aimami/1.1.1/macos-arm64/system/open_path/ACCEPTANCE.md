# open_path — dim6 ACCEPTANCE MAPPING
# version: 1.1.1 | platform: macos-arm64 | shard: mac-3/5
# authored: 2026-06-19 | session: <审计会话>

## gate_tier: readyToImplement (dim1-5_mac all closed; dim6=acceptance-draft)
## Note: dim5_win Unknown — mac-shard gate only

---

## happy_path

**Scenario**: Frontend calls `invoke("open_path", { path: "https://chatgpt.com/" })`. macOS `/usr/bin/open` is available in PATH.

Input:
```json
{ "path": "https://chatgpt.com/" }
```

Expected output:
```json
{ "tag": "0x8000000000000000" }
```
i.e., `Result::Ok(())` — unit success, no data payload.

**Behaviour**:
- macOS `open` utility is spawned with `path` as the sole argument.
- Fire-and-forget: no `Child::wait()`; child runs independently after IPC returns.
- `open <url>` → opens in default browser; `open <file_path>` → opens in default app; `open <dir>` → Finder.
- Three file descriptors (stdout/stderr pipe ends) closed after spawn via `close_NOCANCEL`.
- IPC returns immediately after spawn success.

**side_effect_asserts**:
1. `open` subprocess spawned with the given `path` as argument — verifiable via `ps` output or OS activity monitor.
2. No files written, no DB changes, no network calls from the IPC layer itself.
3. Return value is unit Ok; no data field in response.

---

## boundary / error paths

| Trigger | Expected behavior |
|---------|-------------------|
| `open` binary not found in PATH (ENOENT) | `CoreEnvelope::err` — error string = `std::io::Error::Display` format e.g. "No such file or directory (os error 2)" |
| `fork`/`exec` syscall fails (EAGAIN, ENOMEM) | Same as above — OS error string returned |
| Path string contains special characters | Passed verbatim to `open` — no backend sanitization; `open` handles |
| Path is empty string | Spawned as `open ""` — OS behavior undefined (likely error from `open` side, but IPC returns Ok) |
| Path is a non-existent local file | IPC returns Ok (spawn succeeds); `open` itself may show an error in the OS UI |

---

## side_effect_asserts

1. On success: subprocess spawned — verify via process list or OS activity monitor.
2. No persistence side-effects at all.
3. FDs not leaked: pipe ends closed in owner function.

---

## test_mapping

| Test | Type | Rationale |
|------|------|-----------|
| Spawns `open` with correct path argument | unit (Rust) — mock Command | intercept Command::new call, verify program="open" and args=[path] |
| Returns unit Ok on spawn success | unit (Rust) — mock Command | mock spawn returning Ok(Child), verify Ok discriminant |
| Returns Err string on spawn failure | unit (Rust) — mock Command | mock spawn returning Err(io::Error), verify error message format |
| Fire-and-forget: IPC returns before child exits | manual / e2e (Tauri) | open a slow-starting app, verify IPC returns immediately |
| URL opens in browser (e2e smoke) | manual (Computer Use) | call invoke with "https://chatgpt.com/", observe browser launch |
| explicit_non_automatable_accept: macOS-specific `open` behaviour tested via OS integration | manual | Windows uses different mechanism; this acceptance is macOS-only |

---

## dim6_basis
Evidence: system/open_path/evidence.md §Confirmed items 3 (Command::new program="open" 4B confirmed via get_bytes), 4 (argObject {path:t} from ipc-contracts.jsonl), 5 (4 CCF entries including explicit URL callsites), 7-9 (Ok discriminant, Err path, fire-and-forget confirmed); interfaces/open_path_interface.md documents Result<(),String> response and OS sidecar side-effect only.
