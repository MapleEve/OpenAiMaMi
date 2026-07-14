# Interface — `set_codex_router_enabled` (aimami 1.1.8, macos-arm64)

session: <审计会话> · machine: <本地机器>
owner_va: `0x1005c4030` · owner_symbol: `codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::hc374473223f0c370`
module: `core::relay::manager::RelayManager` (owner-map-118.jsonl line 101, source=`func_query_clean_top_level_symbol`)

## Request

- Frontend: `St("set_codex_router_enabled",{enabled:e,relaunch:t??!0})` (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 118), `argKeys=["enabled","relaunch"]`. `relaunch` defaults to `true` at the call site (`t??!0`) when the caller omits it.
- Invocation site: `ln.setCodexRouterEnabled(S,A)` inside a TanStack Query `mutationFn` at `assets/index-CX-I_QAq.js:254` (`frontend-control-flow.jsonl` line 165) — this is a mutation, not a plain query, i.e. the frontend expects this call to change persistent state and re-fetch/invalidate afterward.
- Rust signature (owner, `a1`=out-param return slot, `a2`=`&RelayManager`/self-like state pointer, `a3`=`enabled: bool` (`int` in the decompiled ABI), `a4`=`relaunch: bool`, `a5`/`a6`=a captured progress-emit closure (data pointer + vtable/fn-table pointer), `a7`/`a8`=unused float register padding from the calling convention):
  ```
  void *set_codex_router_enabled(_QWORD *a1, __int64 *a2, int a3 /*enabled*/, int a4 /*relaunch*/,
                                  __int64 a5 /*closure data*/, __int64 a6 /*closure vtable*/,
                                  double a7, double a8)
  ```
  Confirmed: `if (!a3) { ...skip diagnostics gather... }` at the very top of the owner branches directly on `enabled`; `a4` is stored to `v120` and only read once, gating whether `launch_codex_app_warning` or a `"done"`-event short-circuit runs near the end — confirms `a4`=`relaunch`.

## Progress-event side channel

The owner (and its callees `stop_codex_for_file_edit`'s caller-side wrapping) invoke a captured `Box<dyn Fn(&str)>`-shaped callback (`a5`=data ptr, `a6`=vtable ptr, dispatched as `(*(fnptr@vtable_offset+40))(data_ptr, &str_arg)`) with a sequence of exact-length-matched stage-name literals as the transition progresses:
- `"stopping_codex"` (14 bytes) — emitted just before `stop_codex_for_file_edit`.
- `"preparing_auth"` (14 bytes) — emitted just before the has_usable_real_oauth_login/install_virtual_unlock_auth branch (enable path only, gated on `v133`==enabled).
- `"writing_config"` (14 bytes, length-disambiguated from an adjacent-rodata artifact that visually looked like `"writing_configgpt-5.5launching_codex"` in the raw pseudocode dump — the explicit `14` length argument confirms the true literal is exactly `"writing_config"`) — emitted around `RelayManager::persist`/`ensure_proxy_started`.
- `"launching_codex"` (15 bytes) or `"done"` (4 bytes) — emitted at the very end depending on the `relaunch` flag.
This is almost certainly the backing mechanism for a frontend progress UI (not independently cross-checked against a specific frontend progress-listener component this round — see evidence.md Unknown).

## Response (success)

- Discriminant `10` = `Ok` (same convention observed in every other command in this module this session).
- On enable success: final payload built by `RelayManager::snapshot_sanitized` (0x158 bytes memcpy'd into the response at `0x1005c6662`) plus 1 trailing byte (`v97[368] = v133`, the enabled-flag echoed back) — i.e. response = `{ ...sanitized RelayState fields..., enabled: bool }` (field names not independently resolved via `type_query`/`declare_type` this round — see Unknown).
- On disable (`a3`==0): skips the diagnostics-gather/install/sync block entirely and falls straight to the shared `stop_codex_for_file_edit` teardown, then the (much shorter) `LABEL_35`-tail response construction — full disable-path response shape not exhaustively traced this round (the decompile output for this owner is truncated at the tool's 66667-char cap before the disable-only tail; see pseudocode/0001 truncation notice and evidence.md).

## Response (error)

- `CoreError` (same type used throughout this module: `codexmate_lib::core::models::CoreError`), formatted via `_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt`.
- At least 3 distinct named error origins confirmed:
  1. Generic wrapped `CoreError` from any of `config_takeover::inspect` / `repair_missing_rollouts_for_convergence` / `converge_threads_to_provider` / `RelayManager::persist` / `RelayManager::sync_codex_config_with_outcome` failing — each such failure triggers `RelayManager::rollback_router_enabled` before returning (6 distinct call sites for `rollback_router_enabled` found in the owner).
  2. `router_no_active_provider_error` — a specifically-named error variant constructed when `sync_codex_config_with_outcome` succeeds but leaves 0 active providers.
  3. `CodexPaths::ensure_directories` failure (`v58` nonzero) — short-circuits to `v59=2` before any of the auth/config-takeover logic runs at all (earliest possible failure point in the enable path, before any state mutation).
- Every rollback path itself re-runs a real remediation sequence (not just "undo in memory"): `RelayManager::snapshot` + `RelayManager::persist` (re-persist the pre-transition state) + `config_takeover::restore` + `repair_missing_rollouts_for_convergence` + `converge_threads_to_provider` + `legacy_virtual_auth::cleanup` + `router_unlock_auth::cleanup` — i.e. rollback is a genuine best-effort compensating transaction across every side-effect category this command touches, not a simple in-memory revert.

## Side effects (enable path, `enabled=true`)

1. **Process control**: always stops the sibling Codex.app process first (`stop_codex_for_file_edit`: graceful quit via `request_codex_app_quit`, poll up to 5s, then unconditional `kill_codex_processes_until_clear`) — this runs for BOTH enable and disable.
2. **Auth marker (new system)**: conditionally writes `router-unlock-auth-marker.json` via `install_virtual_unlock_auth` → `atomic_write::write_atomic` (with a `fs::copy` backup of the prior file first), OR conditionally deletes/patches it via `router_unlock_auth::cleanup` (`fs::remove_file` or `atomic_write::write_atomic` with one field stripped) if a real OAuth login has since become usable.
3. **Auth marker (legacy system)**: a structurally parallel `legacy_virtual_auth` module (distinct marker/config file, top-level JSON key `"tokens"`) with its own `cleanup`/`marker_exists`, reached somewhere in this owner's flow (confirmed present via regex scan of the decompiled buffer; exact call-site/condition not pinned down this round because it falls in the ~15% tail past the decompile truncation point — see evidence.md Unknown #1).
4. **Directory setup**: `CodexPaths::ensure_directories` (mkdir -p equivalent) before any auth-marker I/O.
5. **Config takeover check + thread convergence**: `config_takeover::inspect` (detect user hand-edits since last app write) → `repair_missing_rollouts_for_convergence` + `converge_threads_to_provider` (fix up per-thread provider/model assignments so existing conversation threads converge onto the new active provider set).
6. **State persistence**: `RelayManager::persist` → `storage::save` (disk write of the composed RelayState) → only-on-success in-memory cache update under the module's std Mutex.
7. **Local proxy**: `RelayManager::ensure_proxy_started` — TCP health-probe (300ms timeout, one retry after 50ms sleep) against the local proxy port; if not already listening, `tokio::Runtime::block_on` to synchronously start/await it; either way, `storage::save` again afterward to persist the proxy-status outcome.
8. **Codex CLI config write**: `RelayManager::sync_codex_config_with_outcome` → `codex_writer::apply_codex_state` (writes the actual codex CLI config file) + `codex_catalog::write_catalog`/`remove_catalog` (writes/removes the provider catalog file) — the single shared config-writer, also reused by `rollback_router_enabled`.
9. **Optional relaunch**: `launch_codex_app_warning`, gated on the `relaunch` request arg.

## Side effects (disable path, `enabled=false`)

Confirmed: process-stop teardown (#1 above) still runs unconditionally. The auth-marker install (#2/#3), config-takeover/thread-convergence (#5), and codex-config-sync (#6/#7/#8) block is inside an `if ((_BYTE)v133) {...}` guard keyed on the (possibly-mutated-in-place) enabled flag — for a pure disable request this whole block appears to be skipped, meaning the disable path's own persistence/config-write behavior is **not evidenced this round** (falls in the truncated tail of the owner decompile) — recorded as Unknown, not inferred.

## Read-only diagnostics gathered up front (enable path only)

`RelayManager::snapshot` (clone RelayState under mutex) → `valid_codex_active_ids` (pure in-memory hashmap build) → `config_needs_syntax_fix` (→ `codex_diagnostic::run_diagnostics`) → `config_takeover::inspect` (first call) → `inspect_router_thread_visibility` — all read-only, packed into a diagnostic word not itself part of the final response (consumed only for internal branching).
