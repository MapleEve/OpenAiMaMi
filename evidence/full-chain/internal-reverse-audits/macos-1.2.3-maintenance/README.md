# AiMaMi 1.2.3 macOS arm64 — Maintenance Cluster (registry rebuild/clean/load_snapshot)

同步时间: 2026-07-25
范围: clean, rebuild_registry, load_snapshot (same 3-leaf domain as macos-1.0.9-maintenance)
最终结论: **partial, per-leaf honest grading — cluster is NOT uniformly consumerStartReady.** `clean` and `load_snapshot` reach `consumerStartReady`; `rebuild_registry` is held at `consumerStartBlocked` because no UI trigger evidence exists in currently-landed raw, despite having the strongest backend evidence of the three. No leaf reaches `strictImplementationUse` or `readyToImplement` this pass.

This is a **read-only distillation pass**: all raw `.c` evidence referenced below was already decompiled and landed on disk prior to this session. No new IDA MCP calls, no new decompilation, no implementation code were produced. This package's only job is to read the existing evidence and synthesize it into the canonical `audits/` consumer structure per `internal-reverse/AGENTS.md` RULE 8.

## 证据索引

- `logic/MAINTENANCE-DISTILLED-1.2.3.md` — per-leaf distilled frontend+backend+call-tree+interface+error+gate status
- `logic/DELTA-LOGIC-1.2.3.md` — RULE9 diff comparison against `macos-1.0.9-maintenance`
- `gate-report.json` — per-leaf dim1-dim6 status and gate tier
- `manifest.json` — bundle metadata, file inventory, known residuals
- `pointers/evidence-paths.md` — raw evidence paths on SMB

## Coverage

| Leaf | dim1 | dim2 | dim3 | dim4 | dim5 | dim6 | gate_tier |
|---|---|---|---|---|---|---|---|
| clean | pass | pass | partial | partial | macOS-only | missing | consumerStartReady |
| rebuild_registry | **missing** | pass (strongest) | partial | missing | macOS-only | missing | **consumerStartBlocked** |
| load_snapshot | partial | pass | partial | partial | macOS-only | missing | consumerStartReady |

Raw `.c` files read this pass: 6 primary (3 command wrappers + 3 core owners, all confirmed non-truncated, real bodies) + 8 candidate downstream files enumerated on disk but not read/traced. See `manifest.json.coverage` for the exact file list.

## Per-target Result Matrix

See `logic/MAINTENANCE-DISTILLED-1.2.3.md` for full per-leaf detail (frontend evidence, backend VA/symbol, call-tree candidates, interface fields, error paths). Summary:

### clean
Confirmed real UI action card in MaintenancePage (`analytics-maintenance-autoswitch-frontend.md` §2.3 item 4) → `useMutation` → full `invalidateQueries()` → toast echoing response fields `authBackupsRemoved`/`registryBackupsRemoved`/`staleEntriesRemoved`. Backend: `commands::system::clean` (139-line wrapper) → `core::repository::Repository::clean` (618-line core, both header-annotated `基线 same-set`).

### rebuild_registry
**No confirmed UI trigger** in currently-landed 1.2.3 raw. Backend evidence is the strongest of the three: `commands::system::rebuild_registry` (143-line wrapper) → `core::repository::Repository::rebuild_registry_with_policy` (2132-line core, header-annotated as a genuine `1.2.3 NEW-delta ... vs 1.2.2` function by a prior producer's IDA enumeration diff — a real version-level signature change, wrapper now passes 2 extra literal-`0` args vs the simpler 1.0.9 call shape).

### load_snapshot
Backend: `commands::accounts::load_snapshot` (146-line nested-closure wrapper, module placement note: lives under `commands::accounts` not `commands::system`) → `core::repository::Repository::load_snapshot_local` (96-line core, both `基线 same-set`). Frontend: a real guarded wrapper-callsite (`Ee.loadSnapshot(!1,x)` with single-flight preflight guard) is confirmed, but the outermost UI element is only inferred (source doc explicitly flags this as `推断`).

## Frontend Control Flow

`ipc-contracts.jsonl`: 3/3 named commands present as `tauriInvokeWrapper` entries (angle B, true_gaps=0). `frontend-control-flow.jsonl`: clean=1 entry (definition-only), rebuild_registry=1 entry (definition-only, weakest), load_snapshot=2 entries (definition + guarded wrapper-callsite, strongest automated signal). The strongest confirmed UI-trigger evidence for `clean` comes from the manually-authored page-narrative doc, not from the automated extractor alone — see `logic/MAINTENANCE-DISTILLED-1.2.3.md`.

## Backend Control Flow / Pseudocode / Call-tree

All 6 primary `.c` files (3 command wrappers + 3 core owners) are confirmed non-stub, real Hex-Rays decompile bodies (grep for truncation markers = 0 hits across all 6). Call-tree beyond the immediate core owner is candidate-only this pass — 8 downstream `core/repository` files identified by naming-pattern analogy to the 1.0.9-documented shape, not independently traced via `callees()`/`xrefs_to()`.

## Interface / Error / Boundary

See per-leaf detail in `logic/MAINTENANCE-DISTILLED-1.2.3.md`. All 3 leaves show the same mutex-poisoned-lock error-handling pattern in their command wrappers. DTO field names are only fully confirmed for `load_snapshot`'s request params (`localOnly`, `forceMetadata` per `ipc-contracts.jsonl`); response shapes for all 3 leaves are either unconfirmed (rebuild_registry) or carry an unresolved naming delta vs 1.0.9 (clean).

## Gate Leaf Status

- clean: consumerStartReady (pass)
- rebuild_registry: consumerStartBlocked (dim1 gap)
- load_snapshot: consumerStartReady (pass, dim1 partial/accepted_unknown on exact UI element)
- Cluster: gate_accepted=false, implementation_use=false, readyToImplement=false for all 3

## Diff 结论 (RULE9)

**Not a no-behavior-diff migration.** `rebuild_registry`'s core owner was renamed `Repository::rebuild_registry` → `Repository::rebuild_registry_with_policy` between the 1.0.9-era codebase and 1.2.3, header-annotated as new-vs-1.2.2, with 2 added parameters of undetermined semantics. `clean` and `load_snapshot_local` carry `基线 same-set` core-body annotations (weak same-logic signal) but `clean`'s frontend-echoed response field names differ from the 1.0.9-documented `CleanResult` struct field names. Full detail: `logic/DELTA-LOGIC-1.2.3.md`.

## Unknown / Missing

- rebuild_registry UI trigger element: genuine gap, not accepted_unknown (blocks consumerStartReady).
- rebuild_registry_with_policy's 2 new parameters: existence/call-site confirmed, semantics not derived (would need full 2132-line body read, out of this pass's scope).
- load_snapshot's exact top-level UI element: accepted_unknown (invoke/args/owner chain otherwise solid).
- clean's response DTO field-name delta vs 1.0.9: accepted_unknown, not backend-byte-confirmed for 1.2.3.
- dim3 (systematic call-tree-to-leaf): partial for all 3 leaves, candidate files only.
- dim4 (interface/DTO extraction pass): not systematically run for 1.2.3.
- dim5 Windows: sibling `windows-1.2.3-maintenance` package exists independently (same day), NOT consumed here per `doNotInferWindowsFromMacOS`.
- dim6 (test/acceptance mapping): missing for all 3 leaves (C5 implementation-side work).

## Action / Non-action

- consumerStartReady: **true for clean and load_snapshot**, **false for rebuild_registry**.
- strictImplementationUse: false for all 3 (dim3/dim4 not closed).
- readyToImplement: false for all 3.
- Next steps: see `data/task-plan.json.next_producer_steps` — highest-value next action is locating rebuild_registry's real UI trigger, since it is the only leaf currently blocked and its backend evidence is otherwise the strongest of the three.
- DO NOT infer Windows behavior from this macOS package, and do not infer this macOS package's conclusions from the `windows-1.2.3-maintenance` sibling.
