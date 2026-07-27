# System Diff — macos-1.2.3-maintenance vs macos-1.0.9-maintenance

## Platform Artifacts

- 1.2.3 binary: `raw/binary/AiMaMi 1.2.3.app`, macos-arm64, SHA-256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (cross-checked against macos-1.2.3-relay and macos-1.2.3-mcp manifests).
- 1.0.9 binary: `AiMaMi 1.0.9_ida.app`, SHA-256 `1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482` (per macos-1.0.9-maintenance/manifest.json, referenced only, not re-verified this pass).

## Frontend IPC / Control-flow

- All 3 named commands (`clean`, `rebuild_registry`, `load_snapshot`) remain present in the 1.2.3 `ipc-contracts.jsonl` as `tauriInvokeWrapper` entries, same command names as 1.0.9 (no rename at the IPC-command-name layer).
- Frontend evidence *strength* differs materially from what the 1.0.9 package claimed for all 3 commands, independent of whether the underlying UI actually changed: 1.0.9 claimed dim1=pass for all 3 via a `string xref + run closure`/`poll xref` methodology; 1.2.3's automated `frontend-control-flow.jsonl` extractor only resolves definition-site entries (`element:null`) for `clean` and `rebuild_registry`, with `clean`'s real UI trigger instead confirmed via a separate manually-authored page-narrative doc (`analytics-maintenance-autoswitch-frontend.md`), and `rebuild_registry` having no such narrative doc coverage at all in the files read this pass. This may reflect a genuine methodology/tooling difference between sessions rather than a real app-level UI change — not resolved either way this pass.
- `load_snapshot`'s frontend evidence is unusually asymmetric at 1.2.3: the automated extractor found a stronger-than-usual guarded wrapper-callsite (`Ee.loadSnapshot(!1,x)` with a single-flight preflight guard), while the manually-authored narrative doc only inferred the connection (marked `推断`).

## Backend Commands / Control-flow / Pseudocode / Call-tree

- `clean`: core owner symbol name unchanged (`Repository::clean`), header-annotated `基线 same-set` at 1.2.3 (weak same-logic signal, not independently re-verified against 1.0.9 byte-for-byte this pass).
- `load_snapshot`: core owner symbol name unchanged (`Repository::load_snapshot_local`), header-annotated `基线 same-set`. Module placement (`commands::accounts`, not `commands::system`) is consistent between 1.0.9 and 1.2.3.
- `rebuild_registry`: core owner symbol **renamed** `Repository::rebuild_registry` (1.0.9) → `Repository::rebuild_registry_with_policy` (1.2.3), header-annotated by a prior producer pass as new/changed since 1.2.2 (predates the 1.0.9→1.2.3 window but confirms the change is real and recent, not an artifact of this pass's own reading). Wrapper call arity grew from 2 args to 4 args (2 new trailing literal-`0` args). This is the one confirmed real behavioral-surface delta in this cluster; semantics of the new parameters not derived.
- Call-tree depth: 1.0.9 documented full traces to fs/process leaves for all 3 (depth 4-5). 1.2.3 this pass only confirms the immediate core owner; downstream leaves are candidate-only (8 files identified by name-pattern, not traced).

## Interface / Error / Boundary

- `clean` response DTO: 1.0.9 byte-confirmed `CleanResult{deleted_sessions:u32, deleted_intermediate:u32, registry_delta:i32}`; 1.2.3 frontend-echoed field names are `authBackupsRemoved`/`registryBackupsRemoved`/`staleEntriesRemoved` — different names, not independently byte-confirmed against a 1.2.3 backend struct this pass. Could be a rename, a genuine field-set change, or an artifact of the 1.0.9 package's own approximation — unresolved.
- `rebuild_registry` response DTO: 1.0.9 byte-confirmed `RebuildRegistryPayload{activeAccountKey, accountCount, registryUpdated}`; 1.2.3 has zero frontend evidence of response fields at all (command absent from all read UI-action docs).
- `load_snapshot` request params: unchanged shape (`localOnly`, `forceMetadata`) confirmed via `ipc-contracts.jsonl` argKeys at both versions. Response payload (`AppStatusPayload{...}` at 1.0.9): not re-extracted for 1.2.3.
- Error handling: the poisoned-mutex-lock pattern (`"poisoned lock: another task failed inside"`) is present in the wrapper for all 3 commands at 1.2.3, consistent with the general Rust `Mutex`-guard pattern documented at 1.0.9 (not a version-specific finding, just confirms the pattern persists).

## Gate Leaf

See gate-report.json. Cluster-wide gate tier at 1.0.9 was `strictImplementationUse` for all 3 leaves (dim1-5 closed, dim6 ceiling only). At 1.2.3 this pass: `consumerStartReady` for clean/load_snapshot, `consumerStartBlocked` for rebuild_registry — a real regression in confirmed evidence strength relative to 1.0.9's claims, driven primarily by dim1 (frontend) and dim3/dim4 (call-tree/interface) not having been re-derived to the same depth for 1.2.3 in currently-landed raw, not necessarily by any actual product regression.

## Plugin / Capability

Not in scope for this domain.

## OTA / Package

Not evaluated this pass.

## Resource / Binary Surface

See manifest.json.coverage for the exact file inventory (6 primary + 8 candidate .c files).

## Unknown

- Whether the 1.2.3 gate-tier drop from 1.0.9's `strictImplementationUse` reflects (a) a genuinely weaker session's worth of evidence-gathering depth this pass and in the raw as landed, vs (b) an actual product/build change that removed or relocated the rebuild_registry UI entry point, is **not resolved**. Both are plausible; this package does not assert either.
- Whether `rebuild_registry_with_policy`'s new parameters correspond to a new product feature (e.g. a "force rebuild" or "dry-run" option added to the maintenance UI somewhere not yet located) or an internal refactor with no user-visible behavior change is unresolved.
