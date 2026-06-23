# Evidence: get_image_compat — AiMaMi 1.1.1 macOS arm64

session: <审计会话>
machine: <本地机器>
model: claude-sonnet-4-6
binary_sha256: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
produced_at: 2026-06-17

---

## ## Confirmed

1. **Owner VA confirmed**: `codexmate_lib::commands::system::get_image_compat::h0d0962e899c1c6b4` at `0x100617f40`, size=0x2fc, 逆向分析 HexRays clean decompile (hexrays_ready=true, uptime 36488s).

2. **Module confirmed as system**: mangled symbol contains `codexmate_lib::commands::system::get_image_compat` — module is `system`, not `relay`, `accounts`, or any other module.

3. **IPC registration confirmed**: xref chain from `codexmate_lib::run::{{closure}}::{{closure}}::h327652e9b45f60f3` at `0x10030f620` → direct call to owner at `0x10030f686` → `tauri::ipc::InvokeResolver::respond`. Single xref to owner (1 caller = 1 IPC dispatch site).

4. **argKeys = [] (zero arguments)**: The command owner pseudocode takes only the app state pointer (`a1`). No tauri `CommandArg::from_command` deserialization for any user-supplied field. The function reads directly from `CodexPaths`, not from IPC payload.

5. **Response type `CoreEnvelope<bool>`**: Return path is `CoreEnvelope::ok(v7)` where `v7` is a `u8` bool (0 or 1), via `codexmate_lib::core::models::CoreEnvelope::ok::h12b997406420beda` at `0x100554bb0`. The caller (`run::{{closure}}`) copies 0x50 bytes from the result and passes to `InvokeResolver::respond`.

6. **Config key `image_generation` confirmed**: `xmmword_10114F160` bytes confirmed via `get_bytes` call: `69 6d 61 67 65 5f 67 65 6e 65 72 61 74 69 6f 6e` = ASCII "image_generation" (16 bytes). This is the SSE comparison constant for the TOML key.

7. **Section header `[features]` confirmed**: XOR magic in decompile: `v13->i64[0] ^ 0x657275746165665BLL == 0` decodes to `[featur` (bytes 0x5B 0x66 0x65 0x61 0x74 0x75 0x72 0x65), `v13->u16[4] ^ 0x5D73LL == 0` decodes to `s]`. Combined = `[features]` (10 bytes). Section must be exactly this header.

8. **Value `false` confirmed**: XOR magic: `*(_DWORD *)v18 ^ 0x736C6166 == 0` = "fals" (0x66 0x61 0x6C 0x73), `*(u8 *)(v18 + 4) ^ 0x65 == 0` = 'e'. Combined = "false". The function returns true (image_compat enabled) when this exact 5-byte value is found.

9. **No error propagation**: IO failure on `read_to_string` causes silent return of `false` (image_compat disabled). No `Err` variant is returned to the frontend.

10. **Side effects: none**: Pure read-only. No keychain access, no HTTP, no process spawn, no mutex (the mutex/cache is in `image_compat_enabled` core layer, not in this command). The command reads the file fresh on every call.

11. **Related functions decompiled (3 additional)**:
    - `set_image_compat` (0x100618640, 0xcf8): writes `[features]\nimage_generation = false` to config when enabling; removes line when disabling. Uses `std::fs::write` (not atomic_write).
    - `image_compat_enabled` (0x1006e7a60, 0x673): core cache layer with path equality + mtime check; calls `read_image_compat_enabled` on miss. Static cache at `IMAGE_COMPAT_CACHE` (0x101442E08).
    - `read_image_compat_enabled` (0x1006e8130, 0x2c8): same TOML parse logic as owner, used on cache miss.

12. **Fake-wall check passed**: No fake wall. Command is synchronous (not async); clean decompile; no `drop_in_place` mistaken for async body; no ICF collapse (single instance, has_type=true); no vtable dynamic dispatch at command level; not HTTP-terminal (local file read).

---

## ## Inferred

1. **Frontend invoke pattern**: `invoke("get_image_compat")` with no payload. Return consumed as boolean `data` field from `CoreEnvelope`. Frontend likely uses this to toggle image compatibility UI state.

2. **Config file path**: Constructed by `CodexPaths::resolve_codex_home()` + `CodexPaths::from_home()`. This is the same config file path used by `set_image_compat` for writing. Likely `~/.codex/config.toml` or equivalent per platform paths convention.

3. **Semantics inversion**: "image_compat enabled" corresponds to `image_generation = false` in config. The feature flag is inverted: disabling image generation enables image compatibility mode. This is a legacy compatibility workaround flag.

4. **Cache behavior (image_compat_enabled vs get_image_compat)**: The command `get_image_compat` does NOT use the `IMAGE_COMPAT_CACHE` mutex; it reads fresh every call. The cached path via `image_compat_enabled` is used by the relay core subsystem for performance. Two separate code paths for the same underlying config value.

5. **No 1.0.9 delta behavior change**: Based on the call chain and TOML parsing logic, this command's behavior is consistent with the 1.0.9 baseline. The config format (`[features]` section + `image_generation = false`) is a stable interface.

6. **`set_image_compat` uses non-atomic write**: `std::fs::write::inner` is called directly (not `atomic_write::write_atomic`). This means the write is not crash-safe. A power loss during write could corrupt the config file.

7. **Empty config handling in `set_image_compat`**: If the config file is empty (v8=0 case), `set_image_compat` inserts `[features]\nimage_generation = false` as a fresh block, not just the key.

---

## ## Unknown

1. **dim1 frontend CCF**: Frontend control-flow not confirmed. `owner-map-111` shows `status=shared/not_yet_queried` for dim1. The UI component that calls `invoke("get_image_compat")`, the invoke wrapper, guard/preflight conditions, and state mutation on return are Unknown. dim1 blocks full `readyToImplement` gate.

2. **Exact config file path string**: `CodexPaths::resolve_codex_home` and `CodexPaths::from_home` were not decompiled in this session. The config file path (e.g., `~/.codex/config.toml` or `~/.codexmate/...`) is inferred from naming convention but not confirmed byte-for-byte.

3. **Windows platform behavior**: No Windows evidence in this session. The Windows IPC registration, owner VA, and config behavior are all Unknown. macOS evidence must not be extrapolated to Windows. Platform gate: `dim5_win = Unknown`.

4. **dim6 test/acceptance mapping**: 内部构建 implementation side — not covered by reversal.

5. **Frontend response consumption**: How the frontend uses the returned `CoreEnvelope<bool>` (store mutation, UI component state, or i18n toggle) is Unknown without dim1 CCF analysis.

6. **Return value when image_compat is absent from config**: Confirmed to return `false`. But whether the 内部构建 implementation should treat `false` as "feature not available" vs "feature available but disabled" is a product decision question.

7. **`CoreEnvelope<bool>` wire format discriminant**: The `ok` discriminant value for the bool response envelope is not byte-confirmed (inferred from same pattern as other commands using `CoreEnvelope::ok`).

8. **Cache invalidation trigger**: When `set_image_compat` writes the config, does it invalidate the `IMAGE_COMPAT_CACHE`? The cache stores path + mtime; it will naturally invalidate on next access after mtime changes. No explicit cache invalidation call seen from `set_image_compat`. This is inferred behavior.

9. **Concurrent access safety**: `get_image_compat` reads the config file without a lock. If `set_image_compat` is writing simultaneously, a torn read is possible (though `std::fs::read_to_string` uses a single read syscall).

10. **Whether `image_generation` key can appear outside `[features]` section**: The parser only matches within the `[features]` section (tracked by a boolean flag). Keys in other sections are ignored. This is confirmed behavior, but whether the 内部构建 config could have multiple sections with same key is an accepted unknown.
