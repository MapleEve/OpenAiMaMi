# interface — diagnose_codex_router (AiMaMi 1.1.8, macos-arm64 label / x86_64 IDB slice)

## IPC contract (frontend-confirmed, `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 132)

- **command**: `diagnose_codex_router`
- **argKeys**: `[]` (no input parameters — void command, unchanged vs 1.0.9)
- **frontend wrapper**: dynamic `invoke("diagnose_codex_router")` call inside `assets/relay-page-CybVyflj.js:38`
  (async-imported `invoke` binding, not the static `te()` wrapper table used by simpler commands)
- **dispatch mechanism**: `codexmate_lib::run::{{closure}}::{{closure}}` (0x1002fd160, confirmed via
  `xrefs_to` — sole call site 0x1002fd273) → `codexmate_lib::commands::relay::diagnose_codex_router`
  owner (0x1004c4cf0) → JSON-serialized back to the frontend
- **1.0.9 baseline**: same command, same argKeys=[], present at
  `raw/aimami/1.0.9/macos/system/diagnose_codex_router/DIAGNOSE-CODEX-ROUTER-MAC-109.md`
  (owner VA in that build: 0x1001e0d70, different binary layout, gate_tier=strictImplementationUse)

## Request DTO

None. Command takes no arguments (confirmed both versions).

## Response DTO

Struct written at `a2+72`, 0x140 (320) bytes, `CoreEnvelope`-style ok header at `+392`/`+396`
(`*(_DWORD*)(a2+392)=1; *(_BYTE*)(a2+396)=1`). Fields consumed by the frontend
(`relay-page-CybVyflj.js:38`, confirmed unchanged from 1.0.9):

- `summary: Option<String>` — human-readable stale-reason / diagnostic message, or `None`. Built from one
  of 6 literal Chinese message templates (see Error paths / delta section below) via
  `alloc::fmt::format::format_inner`, or left `None` when no stale condition is detected.
- `config_toml_has_router: bool` — consumed as `!Mt.data.config_toml_has_router` in the frontend guard
  (`qn` variable) — true when `~/.codex/config.toml` contains a router-pointing key.
- `config_toml_has_catalog: bool` — consumed as `Mt.data.config_toml_has_catalog===!1` (`Wn` variable) in
  the frontend guard — true when the active profile's catalog reference resolves.
- `has_router_thread_migration: bool`, `relay_providers_count: usize`, plus additional boolean/port/model-addr
  fields — same struct shape as 1.0.9 (offsets not independently re-mapped bit-for-bit this round; inferred
  from control-flow/offset continuity with the 1.0.9 baseline doc, see evidence.md Inferred section).

## Config keys read (TOML, `~/.codex/config.toml`) — **DELTA vs 1.0.9**

| 1.0.9 baseline key | 1.1.8 key (this leaf, decompile-confirmed) |
|---|---|
| `model_server_addr` (14 bytes) | `model_provider` (14 bytes) |
| `model` (18-byte variant literal) | `model_catalog_json` (18 bytes) |
| `profiles.` prefix | (not observed in this leaf's owner body; may still be read inside `codex_config_stale_reason`'s own `read_top_level_string_value` calls — not independently re-keyed this round) |

Additionally new in 1.1.8: a `Path::_join(codex_home, "codex_router_catalog.json")` call (literal string
confirmed via decompile operand, len=25) followed by a `PathBuf::eq` comparison against the resolved
`model_catalog_json` value — no analog exists in the 1.0.9 baseline's documented call tree or key list.

## Error paths / summary message templates (byte-confirmed via `get_bytes` this round)

The `summary` field is populated from one of 6 literal Chinese-language diagnostic templates (all values
directly decoded from 反编译器 `get_bytes`, not guessed):

1. `0x1012C7259` (124B): "未启用智能路由：Codex 桌面应用走原生官方通道；CLI 用户可用 codex --profile aimami_relay 走中转。"
2. `0x1012C72D5` (71B): "已启用但本地代理未运行：请重启 AiMaMi 让代理拉起。"
3. `0x1012C731C` (101B): "已启用但 catalog 缺失：可能写入失败，请检查 ~/.codex/codexmate/relay 目录权限。"
4. `0x1012C7381` (153B): "已启用但 ~/.codex/config.toml 未写入 model_catalog_json：Codex GUI 无法读取中转模型完整能力，请关闭后重新启用智能路由。"
5. `0x1012C741A` (148B): "已启用但 ~/.codex/config.toml 未写入 model_provider router：Codex 新版不会进入 AiMaMi router，请关闭后重新启用智能路由。"
6. `0x1012C74AE` (143B): "已启用但当前没有任何已启用的中转 Provider：Codex 菜单只会看到官方模型，请在 AiMaMi 中启用至少一个中转。"

Templates #4 and #5 **explicitly name the new 1.1.8 TOML keys** (`model_catalog_json`, `model_provider
router`) in their user-facing text — this is direct textual confirmation of the config-key migration, not
inferred from control flow alone. Byte-lengths 71/101/124/143/148/153 numerically overlap with lengths
listed in the 1.0.9 baseline doc's "7 output string variants" table, but since templates #4/#5 demonstrably
reference the NEW key names, this overlap is treated as coincidental total-length matching, not evidence
that message text is unchanged — a full byte-for-byte 1.0.9 vs 1.1.8 string diff was not performed this
round (1.0.9 baseline doc records byte-lengths only, not decoded content), so equality/inequality of the
other 4 non-key-naming templates (#1/#2/#3/#6) vs their 1.0.9 counterparts is **Unknown**, not asserted
either way.

`diagnose_codex_router` never returns `Err` — always returns `Ok` with a struct containing the above flags,
`summary` carrying the diagnostic detail. This matches 1.0.9 documented behavior (no error return path).

## Side effects

**Read-only.** No writes, no process spawn, no notifications — purely diagnostic, matching 1.0.9 baseline.
Confirmed reads this round: `~/.codex/config.toml` (via `read_to_string`, twice — once directly by the
owner, once again inside `codex_config_stale_reason`'s own nested read), plus an `fs::metadata` stat on the
same path for existence-checking. `RelayManager::snapshot` reads the in-memory relay-provider state (no
file I/O) and is now passed through the new `sanitize_for_export` redaction step (apiKey zeroed at
offset+88 per 232-byte provider record). Tracing the sanitized-clone stack slot (`v35` in
`pseudocode/0001`) end-to-end shows it is never read again after the call that produces it — the original
unsanitized snapshot (`__src`) is dropped immediately at `0x1004c4d3d`, and the sanitized clone itself is
only ever touched once more, at `0x1004c5598`, to run its `Drop` glue at function exit. No field of the
sanitized clone is copied into the response struct (`v50`/`v28`) anywhere in the owner body. So for this
specific command, the practical effect of the new `sanitize_for_export` call is currently inert — computed
and dropped, never read to build the response (see evidence.md Confirmed section for the full trace).
