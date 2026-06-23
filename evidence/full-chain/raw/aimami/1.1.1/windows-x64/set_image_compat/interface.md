# set_image_compat — Interface (Windows x64, AiMaMi 1.1.1)

session: <审计会话>
machine: <本地机器>
sha: d24e429a

---

## dim1 — Frontend CCF (Client Call Frame)

**File**: `src/services/api/update/updateApi.tsx`

```typescript
// Command constant
updateCommands.setImageCompat = "set_image_compat"

// Invocation signature
setImageCompat: (enabled: boolean) =>
    invoke<CoreEnvelope<ImageCompatPayload>>(
        updateCommands.setImageCompat,
        { enabled }
    )
```

Frontend test coverage: `src/services/api.test.tsx` label `"update.setImageCompat"`

---

## dim2 — Arg Keys & Extractor

| Key | Type | VA (string) | Extractor |
|---|---|---|---|
| `enabled` | `boolean` | 0x1412AC720 (len=7) | `parse_bool_from_ipc_arg_sys @ 0x1402FF1A0` |

Parse path:
1. Direct bool literal: `token.byte0 == 1` → fast copy (tag=6)
2. String coerce: `"true"/"false"` → `sub_1412233C0`
3. Serde Display: `sub_140E30410` → `sub_14124BFE0` (panic on fail)

Tag encoding: `6` = Ok(bool), `3` = Err

---

## dim3 — Deep Call Tree (summary)

Depth 5 reached. Full tree in call-tree.md.

Critical path (success):
```
handler @ 0x1400173A0
  → parse_bool_from_ipc_arg_sys @ 0x1402FF1A0
  → toml_config_image_compat_writer_sys @ 0x1407868A0
      → codex_home_resolver_sys @ 0x1406F29D0
          → std::env::var("CODEX_HOME") | dirs::home_dir()
      → win32_file_read_bytes_111 @ 0x141093260
          → CreateFile(GENERIC_READ) → ReadFile → CloseHandle [TERMINAL]
      → win32_file_write_bytes_111 @ 0x141093710
          → CreateFile(CREATE_ALWAYS) → WriteFile → CloseHandle [TERMINAL]
  → error_response_encoder @ 0x140832D60
      → has_notch_invoke_resolver_respond @ 0x14080C3C0
          → WakeByAddressSingle [TERMINAL]
```

---

## dim4 — DTO + Struct Fields

### Request DTO

```rust
// Reconstructed from IPC arg descriptor at handler 0x1400173A0
struct SetImageCompatArgs {
    enabled: bool,  // key="enabled" @ 0x1412AC720
}
```

### Response DTO

```rust
// Returns Ok(()) on success; Err(String) on parse or file I/O failure
type Response = CoreEnvelope<()>;
```

### TOML mutation

```toml
# Written to CODEX_HOME/config.toml (or $HOME/config.toml)
[features]
image_generation = false   # hardcoded string @ 0x1412F37C8, len=24
```

Note: the written value is always `false` regardless of the `enabled` boolean argument.
The `enabled` arg controls which insertion branch executes (update/insert-after/append),
but the literal string written is invariant: `"image_generation = false"`.

---

## dim5 — Same-Platform Gate

Windows x64 confirmed:
- Strings cache at 0x1412AC1E1 matches `"set_image_compat"` (find_regex: 1 hit)
- `__imp_CloseHandle` at 0x14124D788 (Win32 kernel32 import)
- `WakeByAddressSingle` at 0x14124A5D0 (Win32 synchapi)
- `_InterlockedCompareExchange8` in handler body (Win32 intrinsic)
- No macOS equivalents observed in this binary

---

## dim6 — Implementation Notes (for consumer implementation)

1. `set_image_compat(enabled: bool)` writes TOML config; does NOT update in-memory state directly
2. The `enabled` argument does not change *what is written* — it only determines the code path
   (update existing key / insert after [features] / append new section)
3. File path resolution order: `CODEX_HOME` env var → `$HOME`
4. The write uses `CREATE_ALWAYS` — it will truncate and rewrite the entire config.toml
5. No locking observed on the config file between read and write (read-modify-write race possible)
6. Frontend must reload config to observe the change (no in-memory notification emitted from this handler)
