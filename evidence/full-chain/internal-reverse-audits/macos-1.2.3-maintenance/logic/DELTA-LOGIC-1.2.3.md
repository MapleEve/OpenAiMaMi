# Maintenance Cluster — Delta vs macos-1.0.9-maintenance (RULE9)

Per RULE9 (`internal-reverse/AGENTS.md §RULE 9`), version iteration must default to same-platform diff migration rather than reversing from scratch. This pass compared the currently-landed 1.2.3 macos-arm64 raw evidence against the canonical `macos-1.0.9-maintenance` package (`strictImplementationUse`, all 3 leaves, produced 2026-06-03/2026-06-11).

**Conclusion: this is NOT a `migrated_no_behavior_diff` or `unchanged_reused` case for the cluster as a whole.** A real, grounded diff signal was found for `rebuild_registry`. `clean` and `load_snapshot_local` show a same-set annotation at the core-logic level but their frontend evidence strength differs materially from 1.0.9's claims, so they are graded independently on 1.2.3 evidence rather than migrated wholesale. Migration status: **`diff_required`** for the cluster, with per-leaf detail below.

## rebuild_registry — diff_required (real signal, not fully characterized)

| | 1.0.9 (macos-1.0.9-maintenance) | 1.2.3 (this pass) |
|---|---|---|
| Command wrapper symbol | `commands::system::rebuild_registry@0x10025eb00` | `commands::system::rebuild_registry@0x1007c7fb0` (VA differs as expected across builds) |
| Core owner symbol | `Repository::rebuild_registry@0x1005e7334` | `Repository::rebuild_registry_with_policy@0x100a6a890` — **name changed**, not just address |
| Core owner header annotation | (n/a — 1.0.9 package predates this annotation convention) | `// 1.2.3 NEW-delta \| codexmate_lib::core::repository \| vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)` — a prior producer's IDA function-enumeration diff already flagged this as new/changed since 1.2.2 |
| Wrapper call arity | `Repository::rebuild_registry(v20, a2 + 2)` — 2 args (per 1.0.9 shape as documented) | `Repository::rebuild_registry_with_policy(v20, a2 + 2, 0, 0)` — 4 args, 2 new trailing literal-`0` args |
| Frontend response DTO | `RebuildRegistryPayload{activeAccountKey, accountCount, registryUpdated}` (byte-confirmed 2026-06-04) | Unknown — no 1.2.3 frontend narrative doc documents this command's response fields at all (command is absent from the read UI-action docs) |
| Frontend UI trigger | Confirmed (`string@0x100ee9460 + run closure`) | **Not found** — only a bare wrapper-definition AST entry, `element:null` |

**What is confirmed:** the core function was renamed/extended between the 1.0.9-era codebase and 1.2.3, gaining what the wrapper calls with 2 extra `0` arguments — consistent with a "policy" parameter pair (naming suggests something like force/dry-run/mode flags, but this is speculation, not derived evidence).

**What is NOT confirmed (out of scope for this read-only pass):** the semantics of the 2 new parameters. Deriving them would require reading the full 2132-line `rebuild_registry_with_policy` body (only the signature + first ~90 lines were read this pass) and/or tracing call sites elsewhere in the binary that might invoke it with non-zero policy values. This is flagged as `next_producer_steps` in `data/task-plan.json`, not attempted here per the task's read-only-evidence scope.

**Does NOT invalidate the 1.0.9 gate** — 1.0.9's `strictImplementationUse` conclusion stands for the 1.0.9 binary. It simply cannot be migrated forward to 1.2.3 without re-deriving the new parameter semantics and re-confirming the frontend UI trigger, both of which are currently open gaps.

## clean — same-set signal at core layer, frontend re-assessed independently

| | 1.0.9 | 1.2.3 |
|---|---|---|
| Command wrapper header | (n/a) | `基线 same-set` |
| Core owner header | (n/a) | `基线 same-set` |
| Response DTO field names | `CleanResult{deleted_sessions:u32, deleted_intermediate:u32, registry_delta:i32}` (byte-confirmed) | `authBackupsRemoved`, `registryBackupsRemoved`, `staleEntriesRemoved` (from 1.2.3 frontend toast-echo narrative only, not backend-byte-confirmed this pass) |

The `基线 same-set` header annotation on both the 1.2.3 wrapper and core files is a signal (placed by a prior producer pass) suggesting no core-logic diff, which is consistent with — but does not by itself prove — behavioral equivalence to 1.0.9. The response field **names** differ from what the 1.0.9 package documented. This could mean: (a) the 1.2.3 frontend layer renamed/remapped fields from an unchanged backend struct, (b) the backend struct itself changed despite the "same-set" annotation (annotation may only reflect code-body similarity, not a full semantic diff), or (c) the 1.0.9 package's field names were themselves an approximation. **Not resolved this pass** — recorded as `accepted_unknown` in gate-report.json since it does not block the happy-path/owner-chain conclusion, but it does block treating the 1.0.9 `CleanResult` shape as authoritative for 1.2.3 implementation.

Frontend UI trigger evidence was independently (re-)established for 1.2.3 via the current `analytics-maintenance-autoswitch-frontend.md` narrative (MaintenancePage action card), not copied from the 1.0.9 package's `string xref + run closure` methodology.

## load_snapshot — same-set signal at core layer, frontend evidence shape differs

| | 1.0.9 | 1.2.3 |
|---|---|---|
| Core owner header | (n/a) | `基线 same-set` |
| Module placement | `commands::accounts` (noted as cross-module even at 1.0.9) | `commands::accounts` (same placement, confirmed independently this pass) |
| Args threading to core call | "localOnly:boolean param" documented as flowing to the core layer | 1.2.3 closure body calls `Repository::load_snapshot_local(__src)` with no visible localOnly/forceMetadata forwarding at this exact call site — open question, not traced further this pass (closure is nested 2 levels deep, args may be held in an outer frame) |
| Call-tree depth | 5 (`load_snapshot → load_local_state_synced → sync_local_runtime_state → load_local_state → OS reads`) | Not re-traced; closest disk-confirmed 1.2.3 name is `sync_local_runtime_state_0x100a5f130.c` (exists), but the full chain was not walked this pass |
| Frontend UI trigger | Confirmed (`string@0x100edc37e + Tokio poll xrefs`) | Partial — guarded wrapper-callsite confirmed (`Ee.loadSnapshot(!1,x)` from function `c` with single-flight guard), but outermost UI element only inferred (`accounts-frontend.md` explicitly flags as `推断`) |

Same conclusion pattern as `clean`: core-layer same-set signal present, but frontend/dim1 evidence strength was independently re-assessed against 1.2.3 raw rather than inherited from 1.0.9's claims, and turned out to be somewhat weaker on the "exact UI element" sub-point (though stronger than `clean`/`rebuild_registry` on the "wrapper callsite with guard logic" sub-point).

## Migration matrix (RULE9 field)

- `migrated_no_behavior_diff`: **none** of the 3 leaves qualify — no leaf has an empty, confirmed diff against 1.0.9.
- `unchanged_reused`: **none** — even the two leaves with `基线 same-set` core annotations have independently-graded (not reused) frontend/dim1 evidence for 1.2.3, and `clean`'s response DTO field names present an unresolved naming delta.
- `diff_required`: **all 3 leaves** — `rebuild_registry` has a confirmed, structurally real diff (function rename + 2 new params) whose semantics are undetermined; `clean` and `load_snapshot` have an open DTO/args-threading question that was not resolved this pass.
- `diff_reversed`: not applicable this pass — no new reducer work was performed against the diff signals found; they are recorded as open items in `data/task-plan.json.next_producer_steps` for a future pass.
