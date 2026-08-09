# Windows 1.2.3 usage-settings cluster — distilled pseudocode summary

Source: `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/{get_usage_refresh_interval_0x14018cbb0.c,set_usage_refresh_interval_0x14018c2d0.c}` (read this session, non-truncated, brace-balanced).

## get_usage_refresh_interval (VA 0x14018cbb0)

- File header confirms: `module: codexmate_lib/commands`, `win 1.2.1 | tauri command handler = get_usage_refresh_interval | mapped via command-name string xref (win-native, ground-truth)`. Note: header says "win 1.2.1" (likely a carried-over template tag from the naming/attribution tooling, not a claim this is 1.2.1 evidence — file lives under `raw/aimami/1.2.3/windows-x64/`, VA and file path are unambiguously 1.2.3). Flagged as a minor provenance-comment inconsistency, not treated as evidence of wrong version.
- Signature: `__int64 __fastcall get_usage_refresh_interval(__int64 a1)`.
- Builds a lookup key using constant `aGetUsageRefres` (truncated string literal, "GetUsageRefres..." likely "GetUsageRefreshInterval") paired with a settings-domain tag `aRepo` (4 chars, "Repo") — i.e. this wrapper queries a settings-repository keyed by an operation name + domain string, consistent with the 1.0.9 baseline semantics (reads a persisted "UsageRefresh" interval setting).
- Calls `sub_140003640` (guard/lock-like, checked against a mutex-ish field at `a1+16` offset via `v18`), then either:
  - success path: calls `sub_1416850A0` (repository lookup) and branches on a sentinel byte (`0xFF` = not-found/error path via `sub_1403D3720`+error struct), else
  - proceeds to unpack a variable-length response blob (`v27`/`v29`/`v30`/`v31`) via `sub_140438B60`.
- Cleanup path iterates a linked/array structure (`v32`/`v33`) freeing via `sub_1402C7520` per-entry then `sub_140001660` bulk-free, and returns via `sub_140014270(v17)` (likely a String/Vec destructor releasing the initial 520-byte scratch buffer).
- **Not traced this pass**: what `sub_140003640`/`sub_1416850A0`/`sub_1403D3720`/`sub_140438B60` actually do internally (no live IDA callees/xrefs session run). Cannot confirm fs vs in-memory vs registry persistence leaf.

## set_usage_refresh_interval (VA 0x14018c2d0)

- File header: `module: codexmate_lib/commands`, same "win 1.2.1 | tauri command handler = set_usage_refresh_interval | mapped via command-name string xref" provenance note (same version-tag caveat as above).
- Signature: `__int64 __fastcall set_usage_refresh_interval(__int64 a1)`.
- Uses THREE sequential lookup-key constructions with the same operation-name constant `aSetUsageRefres` paired against three different domain tags in sequence: `aApp` (3 chars, "App"), `aRepo` (4 chars, "Repo"), `aInterval` (8 chars, "Interval") — suggesting a multi-stage settings-write path: first checks/derives from an "App"-scoped context, then a "Repo"-scoped guard (`sub_140003640` mutex-like check, same as the getter), then commits under an "Interval" key via `sub_1409757B0`.
- Branches into either an early-return / not-yet-initialized path (`sub_14047E370` invoked directly when `v29 == -1`) or the full write path: `sub_1401C3650` (initial classify) -> `sub_1416850A0` (repository lookup, mirrors the getter) -> `sub_1409757B0` (interval value derivation) -> `sub_1403D39C0` (validation/transform, branches on discriminant `== 1`) -> success/failure response assembly -> `sub_140438B60` (response envelope build, same call as getter's success path).
- Cleanup identical pattern to getter (`sub_1402C7520` loop + `sub_140001660` bulk-free + `sub_140014270` return).
- This structure (App -> Repo -> Interval three-stage key resolution) is functionally consistent with the 1.0.9 baseline's documented behavior ("writes persisted usage refresh interval" with `Err(8=InvalidVariant)` on invalid token, "atomic settings write") but the exact validation/error-envelope shape at 1.2.3 was **not independently re-derived** this pass.

## Honest limitations of this distillation

- No live IDA MCP session was available/run this pass (`<工具调用>d: false` in manifest.json) — this is a pure read-of-existing-raw-text distillation, not a fresh decompile or callee/xref chase.
- Callee function names (`sub_140003640` etc.) are unresolved symbol stubs; red line 24 (IDB dirtree module naming) has NOT been applied to these specific functions in this pass — that is a separate follow-up requiring live IDA access.
- Neither function's DTO/error envelope shape (dim4) nor deep leaf (dim3, e.g. does the settings write eventually hit a file/registry path or an in-memory cache only) is confirmed.
