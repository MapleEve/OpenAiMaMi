# Interface: open_path

## Command
- **IPC command name**: `open_path`
- **module**: `codexmate_lib::commands::system`
- **platform**: macos-arm64
- **version**: 1.1.1

## ArgKeys
- `path: String` — the path or URL to open (passed directly to macOS `open` CLI as first argument)

## ArgObject (frontend)
```json
{ "path": "<string>" }
```
- Confirmed from `ipc-contracts.jsonl` (col=31804, argObject=`{path:t}`) and `frontend-control-flow.jsonl` (4 CCF entries)

## Frontend Wrapper
- Function: `openPath(t)` → `ne("open_path", {path:t})`
- File: `assets/index-DdcCOEJG.js` line 86 col 31804

## Callsites (confirmed)
1. `accounts-page-BFpAaIej.js:24` → `W.openPath("https://chatgpt.com/")` — open external URL from accounts page
2. `index-DdcCOEJG.js:86` → static `openPath` fn (direct terminal)
3. `index-DdcCOEJG.js:316` → `mI` fn → `Ge.openPath(t)` — generic path open
4. `relay-page-CsHU7KuS.js:43` → `ou.openPath("https://woyao.pro")` — open external URL from relay page (onClick)

## Response
- **Ok**: discriminant `0x8000000000000000` = `CoreEnvelope<()>` (unit, no payload)
- **Err**: string error message from `std::io::Error::Display` (spawn failure reason)
- Response type: `Result<(), String>` (Tauri-serialized)

## Side Effects
- **OS sidecar**: spawns macOS `open` utility as child process with `path` as argument
  - `open <path>` opens URLs in default browser, files in default app, directories in Finder
  - Fire-and-forget: no wait/join on child; no persistence; no DB write
- **FD cleanup**: closes inherited pipe file descriptors (stdout/stderr) after spawn
- **No network call**: no HTTP, no reqwest; OS command only
- **No persistence**: no settings read/write

## Error Conditions
- Spawn failure: OS returns error on `fork`/`exec` → formatted as string error, returned as Err
- Invalid path/URL: not validated by backend; `open` utility handles; no Rust-level error
