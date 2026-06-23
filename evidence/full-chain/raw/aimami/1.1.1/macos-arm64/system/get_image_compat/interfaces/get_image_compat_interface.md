# get_image_compat — Interface / DTO / Error / Side-effect Boundary

session: wf-aimami111-delta-20260616
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb

## Command Registration

- IPC command name: `get_image_compat`
- Confirmed via: xref from `codexmate_lib::run::{{closure}}::{{closure}}::h327652e9b45f60f3` (0x10030f620) → direct call to owner at 0x100617f40 (0x10030f686), then `tauri::ipc::InvokeResolver::respond`
- Module: `codexmate_lib::commands::system`
- No string pool hit (literal stored as inline SSE xmmword — normal Rust pattern)

## Request DTO

```
argKeys: []   (no arguments)
```

- Zero arguments. Command reads config from default CodexPaths location; caller passes nothing.
- Frontend invoke pattern: `invoke("get_image_compat")` with no payload object

## Response DTO

```
CoreEnvelope<bool>
```

- Success discriminant: `0x0000000000000000` (discriminant=0) → `ok: true, data: <bool>`
- `data`: `true` = image_compat enabled (image_generation = false in config)
- `data`: `false` = image_compat disabled (image_generation not set / file missing)
- Error discriminant: not applicable (command has no error path; IO read failure silently returns false)

## Error Paths

- File not found / IO error on `read_to_string`: silently returns `CoreEnvelope::ok(false)` — no error propagated
- Malformed TOML (missing section / missing key): returns `CoreEnvelope::ok(false)` — no error propagated
- No `Err` variant in the response; this command always returns Ok

## Side Effects

- **None** — pure read-only
- Reads: CodexPaths config file via `std::fs::read_to_string` (no mutation)
- No keychain access, no HTTP, no process spawn, no persistence write

## Config File Format

The config file is TOML-like. The relevant structure:

```toml
[features]
image_generation = false
```

- Section header must be exactly `[features]` (10 bytes including brackets)
- Key must be `image_generation` (16 bytes, compared via SSE xmmword at 0x10114F160)
- Value must be `false` (5 bytes, compared via DWORD+BYTE magic)
- The function returns `true` (image_compat enabled) when `image_generation = false` is present
- Semantics: image_compat enabled ⟺ image_generation = false (inverted flag)

## Config File Path

- Resolved via: `CodexPaths::resolve_codex_home()` → `CodexPaths::from_home()` → config file path
- Path is not a hardcoded string; it is constructed by the platform paths module
- The same path is used by `set_image_compat` for writing

## Companion Command

- `set_image_compat(enabled: bool)` at VA 0x100618640 writes the config
- When enabled=true: writes `[features]\nimage_generation = false` to config
- When enabled=false: removes `image_generation = false` line from config
- Write uses `std::fs::write` (NOT atomic_write — plain overwrite)

## Platform Gate (macOS only)

- macOS arm64 confirmed: owner at 0x100617f40, size=0x2fc, 逆向分析 HexRays clean decompile
- Windows: Unknown (not reversed in this session; macOS evidence not extrapolated)
