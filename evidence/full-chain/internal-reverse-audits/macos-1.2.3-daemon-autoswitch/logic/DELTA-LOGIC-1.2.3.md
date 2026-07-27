# DELTA-LOGIC-1.2.3 — macos-1.2.3-daemon-autoswitch (vs 1.0.9 baseline)

Per RULE9 this documents the delta logic found for AiMaMi 1.2.3 macOS-arm64 daemon-autoswitch relative to the `../macos-1.0.9-daemon-autoswitch/` baseline (that version's canonical 13-command universe origin, `readyToImplement=true` / `full_leaf_100=true`). This is **NOT** a `migrated_no_behavior_diff` classification: 8 functions in this domain carry a genuine header-embedded `1.2.3 NEW-delta` provenance tag, consistent with the "账号切换稳定性" (account-switching stability) changelog item cross-referenced from `../macos-1.2.3-relay/README.md`. RULE9 status = `diff_reversed` (new raw evidence for the changed targets already exists from a prior raw-collection pass; this pass is reduce-only, no new IDA decompile).

All 13 canonical targets remain **`blocks_start`** at the package gate (0/13 consumerStartReady/strictImplementationUse/readyToImplement); see `../gate-report.json`. This logic doc is the grounded reduce of what *changed* and how the daemon-run-once path behaves — it is a diagnostic/implementation-reference for the Polaris rebuild, not a promotion of any target to `ready`.

Binary: macOS arm64 Mach-O, SHA `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (cited from `../macos-1.2.3-relay/manifest.json`, same App binary; not independently re-verified against these .c files' own provenance this pass — same caveat the Windows sibling recorded).

Source evidence root: `raw/aimami/1.2.3/macos-arm64/` (relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}` = ``). Full pointer list in `../pointers/evidence-paths.md`.

---

## 1. daemon-run-once behavioral spine (grounded, 1.2.3 macOS)

The daemon's per-run decision is: **check usage against the configured thresholds → if the current account is still above both thresholds do nothing → otherwise pick the eligible candidate account with the most remaining quota → write a *pending* auto-switch request file. The daemon never switches the account itself.** The actual account switch + Codex restart happens only later, when the user confirms the pending request from the frontend banner.

### 1.1 Entry: `run_daemon_once_blocking` (**1.2.3 NEW-delta**)

`commands/system/ida/pseudocode/run_daemon_once_blocking_0x1007c8fe0.c` (620 lines, complete non-truncated; header `// 1.2.3 NEW-delta | codexmate_lib::commands::system::run_daemon_once_blocking | vs 1.2.2 新增`). This is the plausible-but-**unconfirmed** backend owner for the canonical `run_daemon_once` command (identity mapping open — see §4). Its call spine (grounded from the file's own call-sites):

```
run_daemon_once_blocking(__dst, a2):
  L156  Repository::auto_switch_config(v70, a2+2)            # read {enabled, threshold5h, thresholdWeekly, schedule...}
  L157  Repository::load_local_state_synced(v64)             # load accounts + local runtime snapshot

  Branch A (auto_switch disabled):
    L545  Repository::sync_auto_switch_request(v79, v89, 0, 0, v69)   # candidate=0 → clear any stale pending
    L592  Repository::build_daemon_payload(v65, v89, v79, v68, 0)     # payload, rotation flag = 0

  Branch B (auto_switch enabled):
    L237  Repository::enrich_accounts_via_api_with_subscription_policy(...)   # HTTP enrich (NEW name, see §2)
    L344  Repository::persist_progressive_state(v79, v89, v64)               # fs write of progressive snapshot
    L347  Repository::auto_switch_config(v72, v89)                           # re-read config post-enrich
    L351  Repository::reconcile_auto_switch_request(...)                     # NEW-delta: threshold gate + select + sync
    L363  Repository::build_daemon_payload(v65, v89, v79, v66, 1)           # payload, rotation flag = 1
    L402  Repository::sync_auto_switch_request(v79, v89, 0, 0, v72)         # early-out clear path (candidate=0)
    L424  Repository::build_daemon_payload(v65, v89, v79, v67, v46)
```

Grep of the entire function body for `switch_account` / `perform_switch` / process-restart calls returns **zero hits** — the daemon body only reads config, enriches, persists, reconciles, syncs the pending request, and builds the response payload. This is the grounded basis for the **"never silently switch"** invariant.

### 1.2 Rotation decision: `reconcile_auto_switch_request` (**1.2.3 NEW-delta**)

`core/repository/ida/pseudocode/reconcile_auto_switch_request_0x100a6f840.c` (164 lines, complete; header `// 1.2.3 NEW-delta`). This is the function that consolidates the rotation decision (in 1.0.9 the same effect was spread across an inline `sync_auto_switch_request → select_rotation_candidate → sync_auto_switch_request` triple — see §2). Grounded logic:

```
reconcile_auto_switch_request(self, key, keylen, config a4, pending_map a5):
  if *(current_state + 152) == 2:                 # current-account status disc == None/skip
        candidate = 0; goto sync                   # nothing to rotate against
  if *(current_state + 490) != 1 or a5[3] == 0:   # +490 = auto_switch enabled flag; a5[3] = pending/accounts map len
        goto no-rotation (candidate = 0)
  # hashbrown SIMD probe locates the current account record in the accounts map (hash_one + _mm_cmpeq probe)
  # THRESHOLD GATE:
  v42 = *(a4 + 8)     # config threshold5h  (percent floor on remaining quota)
  v43 = *(a4 + 12)    # config thresholdWeekly
  if ( *(state+232)==2 || *(state+264) >  v42 )     # 5h limit unset (disc==2) OR remaining5h still above floor
     && ( *(state+272)==2 || *(state+304) > v43 ):  # weekly limit unset OR remainingWeekly still above floor
        candidate = 0; goto sync    # current account still has headroom above BOTH thresholds → no rotation
  else:
        candidate = select_rotation_candidate(accounts_ptr=*(self+816), count=*(self+824),
                                              current_key, config a4(with thresholds a4+8/a4+12),
                                              pending_map a5)   # pick best other account
  sync:
    Repository::sync_auto_switch_request(self, key, keylen, candidate, config)   # write/clear pending file
```

Field-offset reading is grounded on the pseudocode but the symbolic field *names* are inferred (offsets `+232/+264` = 5h {limit-discriminant, remaining-percent}, `+272/+304` = weekly {discriminant, remaining-percent}); the `== 2` comparisons are Rust `Option::None` discriminants meaning "that limit is unset → that leg of the gate passes". Net semantics: **rotation is only triggered when the current account has dropped to/below at least one configured threshold floor.**

### 1.3 Candidate selection: `select_rotation_candidate` (基线 same-set)

`core/repository/ida/pseudocode/select_rotation_candidate_0x100a7bda0.c` (509 lines, complete; header `// 基线 same-set` — carried unchanged from the baseline). Grounded logic (iterates the accounts array at stride 352 bytes/account):

- **Skip current**: `memcmp(account.key, current_key)==0` → skip.
- **Eligibility filter**: `*(acct+160)!=2 && ((acct[176]&6)==2 || acct[176]==4) || acct[338]!=1` → skip ineligible accounts (status-flag/login-state gates; `acct[338]!=1` = not a usable/logged-in account).
- **Exclusion probe**: when a pending/exclusion map is passed (`a5`/`v106`), accounts present in it are skipped via a hashbrown SIMD probe.
- **Score = remaining headroom**: per account it computes `field - threshold` clamped to `[0,100]` for the 5h leg (`*(acct+112)` vs config threshold5h `*(a5+8)`) and the weekly leg (`*(acct+152)` vs config thresholdWeekly `*(a5+12)`); when both limits apply it takes the binding (min) of the two legs; a candidate must have score `> 0`.
- **Selection = maximise score**: it keeps a running best and replaces it when a later account has a strictly higher score; ties are broken by (eligibility-flag class, secondary leg value, then `memcmp` of the account key) to give a stable deterministic winner. Returns the winning account record pointer, or `nullptr` when no eligible account has positive remaining headroom.

This is the grounded meaning of **"挑剩余配额最多候选" (pick the candidate with the most remaining quota)**.

### 1.4 Write leaf: `sync_auto_switch_request` (基线 same-set)

`core/repository/ida/pseudocode/sync_auto_switch_request_0x100a5e820.c` (基线 same-set). Grounded leaf behavior:

- Reads the on-disk registry (`std::fs::read_to_string` of the registry path at `self+512/+520`).
- When the desired candidate is null / already-current, calls `clear_pending_auto_switch_request` (removes the pending request) + `clear_auto_switch_transient_state`.
- When a real candidate is chosen, it serializes a `core::models::PendingAutoSwitchPayload` (serde `Serialize` impl) and writes it **atomically** via `core::relay::atomic_write::write_atomic_with_mode` — i.e. the **pending file write**. It also consults `load_pending_auto_switch` to diff against the existing pending request (idempotent — it won't rewrite an identical pending entry).

No `switch_account` / process-restart appears on this path either: the daemon's terminal side-effect is a serialized pending-request file, nothing more.

### 1.5 Where the actual switch happens (out of the daemon body)

The user-facing confirmation path is a separate command family (see the frontend banner CCF in `../pointers/evidence-paths.md` → `shared-index-app-frontend.md` `a7`/`s7`, L43429-43561): the banner calls `confirm_pending_auto_switch_and_restart_codex`, whose plausible-but-unconfirmed 1.2.3 owner is `commands/accounts/ida/pseudocode/perform_switch_payload_with_restart_0x1006a1800.c` (1360 lines, **1.2.3 NEW-delta**, `[FULL — IDA decompiler 全解 53045B, 超大体分页取回]`). That function — not the daemon — performs the account switch + Codex restart. The clean separation (daemon writes pending → user confirms → switch executes) is the whole point of the "never silently switch" design and is why the daemon body carries no switch call.

---

## 2. What changed vs 1.0.9 (delta signals)

1. **Rotation decision consolidated into `reconcile_auto_switch_request` (NEW).** 1.0.9's `run_daemon_once` enabled-branch (see `../macos-1.0.9-daemon-autoswitch/logic/DAEMON-AUTOSWITCH-FULLCHAIN-109.md` §1 step 5) ran an inline `sync_auto_switch_request → select_rotation_candidate → sync_auto_switch_request(with_rotation)` sequence. In 1.2.3 that logic is refactored into a single `Repository::reconcile_auto_switch_request` (NEW-delta) that internally performs the threshold gate, calls `select_rotation_candidate` (unchanged — `基线 same-set`), and calls `sync_auto_switch_request` once. The *selection algorithm* is baseline; the *orchestration/threshold-gating around it* is new.

2. **Account enrichment is now subscription-policy-aware (NEW name).** 1.0.9 called `enrich_accounts_via_api`; 1.2.3 `run_daemon_once_blocking` L237 calls `enrich_accounts_via_api_with_subscription_policy`. A companion NEW-delta function `core/repository/ida/pseudocode/reconcile_subscription_with_live_plan_0x100a82f70.c` also appears in this domain — i.e. 1.2.3 reconciles the locally-stored subscription/plan against a live plan lookup before deciding rotation. This directly matches the "账号切换稳定性" changelog item (stability = don't rotate on a stale plan/quota view).

3. **8 functions carry a header-embedded `1.2.3 NEW-delta` provenance tag** (real behavior change vs 1.2.2, verified by reading each file header this pass):
   - `commands::system::run_daemon_once_blocking` (0x1007c8fe0)
   - `commands::accounts::perform_switch_payload_with_restart` (0x1006a1800)
   - `core::repository::Repository::reconcile_auto_switch_request` (0x100a6f840)
   - `core::repository::Repository::restore_auto_switch_service` (0x100a6a760)
   - `core::repository::Repository::clear_pending_auto_switch_request` (0x100a709f0)
   - `core::repository::Repository::clear_pending_auto_switch_request_if_current` (0x100a744e0)
   - `core::repository::Repository::update_auto_switch_config` (0x100a66800)
   - `core::repository::Repository::confirm_pending_auto_switch::{{closure}}` (0x100a69390 — the *other* `confirm_pending_auto_switch` address, 0x100a68530, is `基线 same-set`)
   
   Plus the NEW subscription reconciler `reconcile_subscription_with_live_plan` (0x100a82f70). The presence of new `clear_pending_auto_switch_request` + `..._if_current` helpers is consistent with the daemon now clearing stale/superseded pending requests more carefully (again: stability).

4. **`select_rotation_candidate`, `sync_auto_switch_request`, `confirm_pending_auto_switch`(0x100a68530), and the 4 usage-refresh watchers are baseline (`基线 same-set`)** — their file headers carry no NEW-delta tag. Whether they are genuinely byte-identical to their 1.0.9 counterparts is **not independently re-verified this pass** (the tag is inherited provenance metadata, read but not re-confirmed against the 1.2.3 SHA).

---

## 3. 13-command migration matrix (RULE9)

For each canonical command: raw-evidence status this pass + RULE9 migration decision. **No command is `unchanged_reused`/`migrated_no_behavior_diff`** — the domain carries confirmed NEW-delta signal, so every row is at least `diff_required` and the whole package stays `blocks_start`.

| # | Canonical command | Scope | Raw `.c` this pass | Provenance | RULE9 status |
|---|---|---|---|---|---|
| 1 | `run_daemon_once` | daemon | **candidate** `run_daemon_once_blocking_0x1007c8fe0` (620L) + CLI `run_daemon_once_cli_0x1006f3190` (510L) + `run_daemon_once_inner` (27L) | NEW-delta (blocking) / same-set (cli, inner) | `diff_required`, owner-identity **unconfirmed** |
| 2 | `load_bootstrap_state` | daemon | **exact** `load_bootstrap_state_0x1007c8780` (92L) | 基线 same-set | `diff_required` (raw present, not deep-read) |
| 3 | `note_usage_refresh_activity` | daemon | **exact** `note_usage_refresh_activity_0x1007cbfc0` (49L) | 基线 same-set | `diff_required` |
| 4 | `schedule_full_runtime_refresh` | daemon | **ZERO HITS** (grep -rl entire mac 1.2.3 tree) | — | `diff_required`; existence Unknown (not IDA-verified absent) |
| 5 | `start_usage_refresh_watcher` | daemon | **exact** `start_usage_refresh_watcher_0x1007cc0d0` (135L) | 基线 same-set | `diff_required` |
| 6 | `update_usage_refresh_schedule` | daemon | **exact** `update_usage_refresh_schedule_0x1007cc7b0` (50L) | 基线 same-set | `diff_required` |
| 7 | `start_auto_switch_pending_watcher` | auto-switch | **exact** `start_auto_switch_pending_watcher_0x1007cc8e0` (39L) | 基线 same-set | `diff_required` |
| 8 | `load_pending_auto_switch` | auto-switch | **exact** `load_pending_auto_switch_0x1007c8db0` (91L) | 基线 same-set | `diff_required` |
| 9 | `confirm_pending_auto_switch` | auto-switch | **candidate** `confirm_pending_auto_switch_async_0x1000eac80` (104L) | no-tag | `diff_required`, owner-identity **unconfirmed** (+ possible-dead-frontend-code Q) |
| 10 | `dismiss_pending_auto_switch` | auto-switch | **exact** `dismiss_pending_auto_switch_0x1007cb840` (135L) | 基线 same-set | `diff_required` |
| 11 | `confirm_pending_auto_switch_and_restart_codex` | auto-switch | **candidate** `perform_switch_payload_with_restart_0x1006a1800` (1360L, FULL) | NEW-delta | `diff_required`, owner-identity **unconfirmed** (Win sibling found a *different* candidate name) |
| 12 | `configure_auto_switch` | auto-switch | **exact** `configure_auto_switch_0x1006fc4c0` (156L) | 基线 same-set | `diff_required` |
| 13 | `set_auto_switch` | auto-switch | **exact** `set_auto_switch_0x1006fc0b0` (157L) | 基线 same-set | `diff_required` |

Totals: **9 exact-name** (rows 2,3,5,6,7,8,10,12,13) + **3 candidate-only unconfirmed** (rows 1,9,11) + **1 zero-hit** (row 4). All 59 scoped raw `.c` files brace-balance + TRUNCATED-marker clean (0 flagged) — every produced file is a genuine complete decompile, not a truncation stub (red line 20 check passed). The 3 candidate rows are name-adjacent semantic matches (plausible) but have **no byte-signature or IDA xref cross-check** this pass; do not treat any as a confirmed identity.

Underlying support layer (not canonical commands, but the daemon-run-once spine leans on them): `core::repository::{reconcile_auto_switch_request(NEW), select_rotation_candidate, sync_auto_switch_request, restore_auto_switch_service(NEW), clear_pending_auto_switch_request(NEW), clear_pending_auto_switch_request_if_current(NEW), update_auto_switch_config(NEW), auto_switch_config, load_local_state_synced, persist_progressive_state, enrich_accounts_via_api_with_subscription_policy(NEW name), reconcile_subscription_with_live_plan(NEW), build_daemon_payload}` + `core::models::{PendingAutoSwitchPayload, AutoSwitchStatusPayload, AutoSwitchRuntimeState}` serde impls. All present + complete this pass.

---

## 4. Open identity questions (do-not-assume)

1. **`run_daemon_once` ⇔ `run_daemon_once_blocking`(0x1007c8fe0)**: plausible by name/semantic proximity and the fact that the blocking function *is* the daemon spine; UNCONFIRMED (the Tauri command wrapper → this body xref was not traced this pass). Separate `run_daemon_once_cli`/`run_daemon_once_inner` files are the LaunchAgent CLI entrypoint, structurally distinct from the Tauri command.
2. **`confirm_pending_auto_switch` ⇔ `confirm_pending_auto_switch_async`(0x1000eac80)**: UNCONFIRMED. Additionally, the plain (non-restart) frontend wrapper is registered in the facade but no calling component was found in the 3 extracted frontend docs (only the `...AndRestartCodex` sibling is actually called by the banner) — whether the plain variant is 1.2.3 dead frontend code is itself **unresolved**.
3. **`confirm_pending_auto_switch_and_restart_codex` ⇔ `perform_switch_payload_with_restart`(0x1006a1800)**: plausible (semantic name proximity, both NEW in 1.2.3, both = account-switch + Codex restart, reinforced by the changelog item) but UNCONFIRMED (different Rust command name, different `commands::` submodule — accounts vs system). The Windows sibling independently found a *different* unconfirmed candidate name (`switch_account_and_restart_codex`, itself HEXRAYS_DECOMPILE_FAILED on Win) — the two platforms have **not** converged on a resolved identity.
4. **`schedule_full_runtime_refresh`**: zero raw evidence across the whole mac 1.2.3 tree. Consistent with the 1.0.9 native-thread/no-IPC-surface pattern (it was the watcher-thread callback in 1.0.9, see `DAEMON-TRIGGER-AND-THREAD-MODEL-109.md` §4), but this pass ran no live IDA search to confirm true absence-from-binary vs not-yet-decompiled. Recorded Unknown.

---

## 5. Replication guidance for Polaris (diagnostic use only — NOT ready-to-implement)

To reproduce the 1.2.3 daemon-run-once behavior in the Polaris rebuild:

1. On each daemon tick, read auto-switch config (enabled + threshold5h% + thresholdWeekly% + optional schedule), then load the local account snapshot.
2. If auto-switch is disabled: clear any stale pending request and emit the daemon payload with rotation flag 0. Do nothing else.
3. If enabled: enrich accounts via the usage/subscription API **with subscription-policy reconciliation against the live plan** (do not decide on a stale plan/quota view — this is the 1.2.3 stability fix), then persist the progressive snapshot.
4. Reconcile: if the **current** account still has remaining quota strictly above **both** the 5h and weekly threshold floors (treating an unset limit as "unlimited → passes"), do not rotate — clear pending. Otherwise select the eligible account with the **maximum remaining headroom** (score = `min(remaining5h, remainingWeekly)` clamped `[0,100]`, must be `> 0`; skip the current account, non-logged-in/ineligible accounts, and accounts already in the exclusion/pending set; deterministic tie-break by key).
5. **Write the selected candidate as a *pending* auto-switch request file (atomic write of a serialized `PendingAutoSwitchPayload`) and stop.** Never call the account-switch/Codex-restart path from the daemon.
6. Surface the pending request in the frontend banner; the switch + Codex restart executes only on explicit user confirmation (`confirm_pending_auto_switch_and_restart_codex`).

This guidance is a diagnostic reference grounded in the reduced pseudocode; dim3 (deep call-tree to fs/http leaves), dim4 (DTO/error/boundary), and dim6 (test/acceptance mapping) are **not closed** for 1.2.3 — the 1.0.9 `interfaces/`+`ACCEPTANCE-MAPPING-109` materials are a structural template only, **not** 1.2.3 evidence (especially for the 8 NEW-delta functions, which postdate the 1.0.9 analysis). Do not promote any target to `consumerStartReady`/`readyToImplement` on the basis of this doc.

---

## 6. Not-closed (carried from package gate)

- dim3 call-tree, dim4 interface/DTO/error/side-effect boundary, dim6 test/acceptance: **not produced** for 1.2.3 (all 13 commands).
- 3 command→owner identity mappings unconfirmed (§4.1–4.3); `schedule_full_runtime_refresh` existence Unknown (§4.4).
- 5 zero-frontend-hit commands' dim1 native-thread-substitute status at 1.2.3: consistent-with-1.0.9-pattern only (weak grep-level cross-check, not IDA xrefs_to verified).
- Whether the `基线 same-set`-tagged functions are byte-identical to 1.0.9: not re-verified this pass.
- Cross-platform: do NOT infer Windows daemon-autoswitch behavior/identities from this macOS doc, or vice versa (`../windows-1.2.3-daemon-autoswitch/logic/DELTA-LOGIC-1.2.3.md` records independently-found divergent candidates + a `configure_auto_switch`/`switch_account_and_restart_codex` decompile regression not observed on macOS).
