# AI.md — mystery-unlock windows-x64 1.2.3

session: windows-1.2.3-mystery-unlock-classify-20260725
machine: (subagent, SMB path hardcoded per red line 16)
produced: 2026-07-25
gate_tier: understand_and_classify (no consumerStartReady/strictImplementationUse/readyToImplement claimed)
is_upstream: n/a (product/ToS decision, not a coverage gate)

---

status: canonical_bundle_written
evidence_root: raw/aimami/1.2.3/windows-x64/{router_unlock_auth,legacy_virtual_auth}/ida/pseudocode/
versions: ["1.2.3"]
platforms: ["windows-x64"]
target_universe: 19 functions (12 router_unlock_auth + 7 legacy_virtual_auth), full census closure for these 2 module names per WIN-APP-FUNCTION-INVENTORY.jsonl (0 remaining on_disk=false rows)
locator_audit: module names cross-checked against intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl (grep -i "router_unlock_auth|legacy_virtual_auth" → 19 rows, no other module name matches "virtual_auth")
coverage: 19/19 in-scope raw .c files read in full (not summarized)
coverage_mode: full-leaf-for-named-module (router_unlock_auth + legacy_virtual_auth only; is_aimami_managed_virtual_auth / codex_diagnostic residue check-fix out of scope this pass)
owner_resolution_status: closed for router_unlock_auth + legacy_virtual_auth; not attempted for core::auth / codex_diagnostic
full_app_coverage_status: not-full-app
per_target_required_results: see README.md Per-target Result Matrix
frontend_ccf_status: not-produced (SKIP, tos_circumvention — intentionally not pursued, same principle as macOS sibling package)
backend_ccf_status: closed for router_unlock_auth (12/12) + legacy_virtual_auth (7/7); non-failed decompile, no truncation
pseudocode_status: full (19/19, brace-balanced, verified via WIN-APP-FUNCTION-INVENTORY.jsonl + direct Read)
call_tree_status: closed to fs/alloc/json leaves; zero HTTP/network call sites observed in any of the 19 functions
interface_status: not produced (tos_circumvention — no field-level construction recipe written, per OUTPUT-SPEC §ToS sensitivity handling precedent set by macOS sibling)
error_path_status: observed (CoreError tag-based Ok/Err branching, alloc-failure panics via sub_1416C2D4B), not exhaustively enumerated
boundary_status: Windows-scoped only; is_aimami_managed_virtual_auth / codex_diagnostic residue check-fix Windows equivalents = Unknown (out of scope this pass)
gate_leaf_status: permanentlyBlockedProductDecision for all 19 targets (see gate-report.json)
scripts: none run this pass (pure read + write, no IDA MCP calls — all 19 raw .c files were already on disk prior to this session per INDEX.jsonl sessions win-group2of4-relay-modules-20260724 and win-1.2.3-app-function-inventory-gapfill-20260724)
unknowns: see README.md Unknown/Missing
do_not_infer: do not infer Windows behavior from macOS evidence and vice versa (dim5); the cross-platform "consistent" findings in this package were independently re-derived from Windows-native literals, not copied from the macOS sibling package

---

## Targets (all `tos_circumvention`, `implementation_use=false` permanent)

| target | va | role | gate |
|---|---|---|---|
| `router_unlock_auth::install_virtual_unlock_auth` | 0x1404949c0 | enable / orchestrates placeholder-credential install | permanentlyBlockedProductDecision |
| `router_unlock_auth::sub_14048FF80` (≈mac `build_unlock_auth_json`) | 0x14048ff80 | constructs the placeholder auth.json fields | permanentlyBlockedProductDecision |
| `router_unlock_auth::sub_14048F130` (≈mac `make_unsigned_jwt`) | 0x14048f130 | constructs unsigned JWT with `iss="https://auth.openai.com"` | permanentlyBlockedProductDecision |
| `router_unlock_auth::cleanup` (+4 closures) | 0x140497830, 0x14046b5e0/670/700 | state-machine cleanup/restore of placeholder credential | permanentlyBlockedProductDecision |
| `router_unlock_auth::read_marker` | 0x14048e790 | reads marker file recording placeholder-active state | permanentlyBlockedProductDecision |
| `router_unlock_auth::read_cleanup_backup` | 0x14048f550 | reads+validates backed-up real credential before restore | permanentlyBlockedProductDecision |
| `router_unlock_auth::serialize` | 0x140465450 | serde Serialize impl for readiness DTO (UI status reporting) | permanentlyBlockedProductDecision |
| `router_unlock_auth::sub_14048EF50` | 0x14048ef50 | string/marker helper | permanentlyBlockedProductDecision |
| `router_unlock_auth::sub_14048FE80` | 0x14048fe80 | marker/file existence + error-wrap helper | permanentlyBlockedProductDecision |
| `legacy_virtual_auth::cleanup_0` | 0x14057a0e0 | old-generation cleanup/restore state machine | permanentlyBlockedProductDecision |
| `legacy_virtual_auth::read_marker_0` | 0x140579290 | old-generation marker read | permanentlyBlockedProductDecision |
| `legacy_virtual_auth::read_user_owned_backup` | 0x140579800 | validates backup is user's real credential, not our fake one | permanentlyBlockedProductDecision |
| `legacy_virtual_auth::sub_1404F99D0` | 0x1404f99d0 | Result/drop-glue-style cleanup helper | permanentlyBlockedProductDecision |
| `legacy_virtual_auth::sub_140579700` | 0x140579700 | marker validation helper | permanentlyBlockedProductDecision |
| `legacy_virtual_auth::__closure__6/7` | 0x140566820, 0x1405668b0 | cleanup error-path closures | permanentlyBlockedProductDecision |

---

## Placeholder auth.json — fields confirmed byte-identical on Windows (via `sub_14048FF80`)

```jsonc
{
  "chatgpt_account_id": "00000000-0000-4000-8000-000000000001",
  "chatgpt_account_user_id": "user-niuniu-woyao-pro-unlock",
  "chatgpt_user_id": "user-niuniu-woyao-pro-unlock",
  "user_id": "user-niuniu-woyao-pro-unlock",
  "chatgpt_plan_type": "free",
  "tokens": {
    "id_token": "<unsigned JWT>",
    "access_token": "<unsigned JWT>",
    "refresh_token": "aimami-router-unlock-refresh-token"
  },
  "last_refresh": "2026-06-01T00:00:00Z",
  "aimami_router_unlock_auth": true,
  "axonhub_note": "AiMaMi router unlock auth. This is not a real OpenAI account."
}
```

JWT claims (both id_token/access_token): `iss="https://auth.openai.com"`, `aud="aimami-router-unlock"`, `sub="user-niuniu-woyao-pro-unlock"`, `email="niuniu@woyao.pro"`, `name="NIUNIU WOYAO"`, `iat=<real current unix seconds>`, `exp=2524608000` (fixed, ~2050).

All literal bytes above were read directly from `sub_14048FF80`'s decompiled `qmemcpy`/immediate-constant sites this pass — not copied from the macOS SPEC, independently confirmed identical.

## Accepted unknowns / ceiling

| item | status |
|---|---|
| `sub_14048ED60` (state getter called by `cleanup`/`install_virtual_unlock_auth`, functionally ≈ mac `live_auth_state`) | not independently decompiled this pass — out of the 19-function module census; only its call site and 0/1/2/3 consumption observed |
| JWT trailing-dot / 2-vs-3-segment format | accepted_unknown (same as macOS SPEC; format-string constant not resolved; does not affect behavior since signature is never verified) |
| `is_aimami_managed_virtual_auth` / `codex_diagnostic::{check,fix}_router_unlock_auth_residue` Windows equivalents | Unknown — out of scope this pass (task file-scope limited to router_unlock_auth/legacy_virtual_auth/virtual_auth dirs) |
| Windows inlining vs missing-evidence for macOS's extra 17 named functions (ensure_auth_for_router etc.) | high-confidence inlining hypothesis, not fully proven (see SYSTEM-DIFF.md) |

## Evidence pointer

raw leaves: `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/router_unlock_auth/ida/pseudocode/` (12 files), `${C5CM_INTERNAL_HISTORY_ROOT}/raw/aimami/1.2.3/windows-x64/legacy_virtual_auth/ida/pseudocode/` (7 files)
census: `${C5CM_INTERNAL_HISTORY_ROOT}/intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl`
binary: sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`, PE/AMD64
sibling package (cross-reference only, not evidence source): `${C5CM_INTERNAL_HISTORY_ROOT}/internal-reverse/audits/macos-1.2.3-mystery-unlock/`
