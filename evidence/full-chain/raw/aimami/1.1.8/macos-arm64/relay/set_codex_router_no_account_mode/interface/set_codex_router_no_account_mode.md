# Interface — `set_codex_router_no_account_mode` (aimami 1.1.8, macos-arm64)

session: <审计会话> · machine: <本地机器>
owner_va: `0x1005c9090` · owner_symbol: `codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::h9a7e2a1f189a607c`
module: `core::relay::manager::RelayManager` (owner-map-118.jsonl, `func_query_clean_top_level_symbol`)
confirmed absent from 1.0.9 (new command in 1.1.8; see `evidence.md`)

## Request

- Frontend: `St("set_codex_router_no_account_mode",{enabled:e,relaunch:t??!0})`
  (`raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl` line 119), `argKeys=["enabled","relaunch"]`.
  `relaunch` defaults to `true` at the call site (`t??!0`) when the caller omits it.
- Invocation site: `ln.setCodexRouterNoAccountMode(S,A)` inside a TanStack Query `mutationFn` at
  `assets/index-CX-I_QAq.js:254` (`frontend-control-flow.jsonl` lines 147, 166) — a mutation, expected to
  change persistent state and invalidate/refetch afterward.
- Rust signature (owner, `a1`=out-param return slot, `a2`=`&RelayManager` state pointer, `a3`=`enabled:
  bool`, `a4`=`relaunch: bool`, `a5`/`a6`=captured progress-emit closure (data ptr + vtable ptr), `a7`/`a8`=
  float-register padding from the calling convention):
  ```
  void *set_codex_router_no_account_mode(_QWORD *a1, __int64 *a2, int a3 /*enabled*/, int a4 /*relaunch*/,
                                          __int64 a5 /*closure data*/, __int64 a6 /*closure vtable*/,
                                          double a7, double a8)
  ```
  Confirmed: `a3` (`v64`) is read exactly once at the single install-vs-cleanup decision
  (`if ((_BYTE)v64) install_virtual_unlock_auth(...) else cleanup(...)`); `a4` (`v62`) is read exactly once
  near the end, gating whether the `{{closure}}`+`launch_codex_app_warning` relaunch sequence runs.

## Progress-event side channel

Same mechanism as the sibling `set_codex_router_enabled` command: a captured `Box<dyn Fn(&str)>`-shaped
callback (`a5`=data ptr, `a6`=vtable ptr, dispatched as `(*(fnptr@vtable_offset+40))(data_ptr, &str_arg)`),
fired with exact-length-matched stage-name literals as the transition progresses:
- `"stopping_codex"` (14 bytes) — emitted before the conditional `stop_codex_for_file_edit` call (only
  when the pre-transition snapshot shows the relay currently enabled).
- `"preparing_auth"` (14 bytes) — emitted before the install/cleanup branch.
- `"writing_config"` (14 bytes) — emitted before `sync_codex_config_with_outcome`.
- `"launching_codex"` (15 bytes) — emitted from a dedicated closure
  (`set_codex_router_no_account_mode::{{closure}}`, `0x1005c9a60`) on the relaunch=true path; the
  no-relaunch path instead writes a sentinel (`0x8000000000000000`, effectively a "done"/no-event
  short-circuit) directly into the same slot without invoking the closure.

## Response (success)

- Discriminant `10` = `Ok` (same convention as the other commands in this module).
- Final payload built by `RelayManager::snapshot_sanitized` — a fresh `RelayManager::snapshot` followed by
  `storage::sanitize_for_export` (0x158 bytes memcpy'd into the response at `0x1005c9800`/`0x1005c9810`)
  plus 1 trailing byte (`*((_BYTE*)v11 + 368) = v63`, the resolved mode-state echoed back) — i.e. response
  = `{ ...sanitized RelayState fields..., mode_echo: bool }` (exact field names not independently resolved
  via `type_query`/`declare_type` this round — see `evidence.md` Unknown).
- `sanitize_for_export` zeroes a fixed offset (byte 88) within every 232-byte element of a nested array
  before the clone is returned — a redaction pass, inferred (not confirmed via type-inspection) to strip a
  per-provider API-key/secret field from the response.

## Response (error)

- Same `CoreError` type used throughout this module (`codexmate_lib::core::models::CoreError`).
- At least 2 distinct named error origins confirmed in the owner itself:
  1. Generic wrapped `CoreError` from any of `install_virtual_unlock_auth` / `cleanup` /
     `RelayManager::persist` / `RelayManager::sync_codex_config_with_outcome` failing — each such failure
     triggers `RelayManager::rollback_no_account_mode_change` before returning (2 explicit named call sites
     plus shared error-propagation `goto` targets).
  2. A specifically-named 111-byte error literal (`unk_1012CBA5A`) constructed when
     `router_unlock_auth::marker_exists` reports the marker file is still present immediately after
     `cleanup` reported success — a named consistency-check failure, not a generic wrapped I/O error.
  3. A second specifically-named 126-byte error literal (`unk_1012CBAC9`) constructed on an
     allocation-failure branch just after `sync_codex_config_with_outcome` succeeds but the disable-mode
     detection flag (`v54`) is false — exact semantic condition not fully resolved this round (see
     `evidence.md` Unknown #6 for the literal contents; the branch condition itself was observed directly
     in the owner's own decompiled body).
- Every rollback path re-runs a real remediation sequence: `rollback_no_account_mode_change` branches on
  its own bool argument to re-run either `cleanup` or `install_virtual_unlock_auth` (bidirectional, undoing
  either toggle direction), then re-runs `RelayManager::persist` and
  `RelayManager::sync_codex_config_with_outcome` — a genuine best-effort compensating transaction across
  every side-effect category this command touches, not a simple in-memory revert.

## Side effects (enable path, `enabled=true`)

1. **Process control (conditional)**: if the relay is currently enabled per the pre-transition snapshot,
   stops the sibling Codex.app process first (`stop_codex_for_file_edit`: graceful quit via
   `request_codex_app_quit`, poll up to 5s, then unconditional `kill_codex_processes_until_clear`).
2. **Auth marker (install)**: writes `router-unlock-auth-marker.json` via `install_virtual_unlock_auth` →
   `atomic_write::write_atomic`, with a `std::sys::fs::copy` backup of any prior file first; the marker
   JSON body embeds the hardcoded literal owner-identity string `"niuniu@woyao.pro"` plus a timestamp.
3. **Directory setup**: `CodexPaths::ensure_directories` runs inside `install_virtual_unlock_auth` before
   any marker-file I/O.
4. **State persistence**: `RelayManager::persist` → `compose_proxy_status` (recompute proxy-status fields)
   → `storage::save` (disk write) → only-on-success in-memory cache update under the module's std Mutex.
5. **Codex CLI config write**: `RelayManager::sync_codex_config_with_outcome` → `valid_codex_active_ids`
   (pure in-memory) → `codex_writer::apply_codex_state` (writes the actual codex CLI config file) +
   `codex_catalog::write_catalog`/`remove_catalog` (writes/removes the provider catalog file) — the same
   shared config-writer this session's sibling leaf confirmed for `set_codex_router_enabled`, also reused
   by this command's own `rollback_no_account_mode_change`.
6. **Optional relaunch**: on `relaunch=true`, fires the `{{closure}}` progress event (`"launching_codex"`)
   then `launch_codex_app_warning` → `platform::process::launch_codex_app` (actual OS-level process
   relaunch). On `relaunch=false`, a `"done"`-equivalent sentinel is written instead and no relaunch
   happens.
7. **Response construction**: `RelayManager::snapshot_sanitized` (fresh snapshot + field-redaction pass)
   builds the final success payload.

## Side effects (disable path, `enabled=false`)

Confirmed: the install-vs-cleanup branch takes the `cleanup` side instead of `install_virtual_unlock_auth`
(same conditional stop_codex_for_file_edit, same persist/sync_codex_config_with_outcome/relaunch/response
tail structure — this owner's control flow is NOT split into two largely-disjoint halves the way the
sibling `set_codex_router_enabled` owner is; both `enabled=true` and `enabled=false` flow through
materially the same downstream sequence, differing only in the install-vs-cleanup call and in the
`marker_exists` post-check which is reached only on the disable/cleanup-succeeded path). `cleanup` itself
either fully deletes the marker file (`std::sys::fs::remove_file`) or rewrites it with one field stripped
(`atomic_write::write_atomic`) depending on whether a real OAuth login has since become usable (per the
sibling leaf's independent characterization of the identical `cleanup` VA `0x10068fab0` — see
`evidence.md` Inferred #5); the exact branch-selecting condition was not re-walked line-by-line from this
leaf's own (partial) read of `cleanup`'s body.

## Read-only reads up front

`RelayManager::snapshot` (clone RelayState under mutex) at function entry, reading the current
`no_account_mode` bit (offset+340) and relay-enabled bit (offset+341) from the cloned buffer to decide
whether the conditional `stop_codex_for_file_edit` call is needed — re-snapshotted 3 more times later in
the same owner to build fresh state for `persist` and the final response.
