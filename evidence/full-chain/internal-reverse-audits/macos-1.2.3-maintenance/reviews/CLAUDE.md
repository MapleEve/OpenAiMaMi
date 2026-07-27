# Claude Independent Review — macos-1.2.3-maintenance

Session: mac-maintenance-123-distillation-conclusion, 2026-07-25, machine: <host>.

## Methodology

This was a read-only reduce/distillation pass over already-landed raw evidence, per explicit task scope ("只读已有 .c + 写结论文档,不做新反编译、不产实现代码"). No IDA MCP tool calls were made this session. All conclusions are grounded in:

1. `find`/`wc -l`/`grep` disk enumeration against `raw/aimami/1.2.3/macos-arm64/{commands/system,commands/accounts,core/repository}/ida/pseudocode/*.c`.
2. Full or near-full reads of 6 primary `.c` files (3 command wrappers, 3 core owners).
3. Grep + targeted reads of `frontend/ipc-contracts.jsonl`, `frontend/frontend-control-flow.jsonl`, and full read of `frontend/pages/analytics-maintenance-autoswitch-frontend.md`.
4. Cross-reference against the canonical `macos-1.0.9-maintenance` package (README.md, manifest.json, gate-report.json) for RULE9 diff comparison.
5. Cross-reference against the same-day independent `windows-1.2.3-maintenance` sibling's manifest.json for scope-naming consistency only (its gate conclusions were NOT consumed, per doNotInferWindowsFromMacOS).

## Key findings I am confident in (grounded, directly observed)

- All 3 named commands (`clean`, `rebuild_registry`, `load_snapshot`) have real, non-stub, non-truncated backend pseudocode at both the command-wrapper and core-owner layers. I verified this by reading the files, not just checking line counts.
- `rebuild_registry`'s core owner carries a pre-existing header annotation (`// 1.2.3 NEW-delta ... vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)`) placed by an earlier producer pass — I did not add this annotation, I observed it already on disk. This is strong, prior, independently-produced evidence of a real version delta, which I am treating as reliable since it is a specific, falsifiable, mechanically-produced claim (IDA function-enumeration diff) rather than a vague note.
- `clean` and `load_snapshot_local` core bodies both carry `基线 same-set` header annotations, likewise pre-existing.
- `rebuild_registry` has zero UI-trigger evidence in the specific files I read this pass (`frontend-control-flow.jsonl`, `analytics-maintenance-autoswitch-frontend.md`, grep of `accounts-frontend.md` and `shared-index-app-frontend.md`). I did not exhaustively search every beautified frontend file in the tree — there could be a UI trigger in a file I did not read (e.g. a settings/advanced page not covered by the page-doc set produced so far). I am recording this as a gap in *currently-landed, currently-read* evidence, not an absolute claim that no UI trigger exists anywhere in the app.

## Where I chose to be conservative rather than optimistic

- I did NOT mark `rebuild_registry` as `consumerStartReady` despite its strong backend evidence, because GATE-SPEC.md Gate 1 requires `uiCallEntryReady` and I found no evidence for it. I considered whether the mere existence of a well-formed command wrapper implies a UI trigger must exist somewhere, but declined to assume this — that would be inferring evidence rather than reading it.
- I did NOT claim `migrated_no_behavior_diff` for the cluster despite two of three leaves carrying `基线 same-set` annotations, because (a) `rebuild_registry` clearly has a real diff, and (b) `clean`'s frontend-echoed response field names differ from 1.0.9's documented struct, which I could not resolve as either a real change or a naming approximation without further reversal that was out of this pass's scope.
- I did NOT read `rebuild_registry_with_policy_0x100a6a890.c` in full (2132 lines) — I read the signature and first ~90 lines to confirm it is a real, non-stub, non-degenerate function, and relied on the pre-existing header annotation for the delta signal. Fully deriving the 2 new parameters' semantics would require reading the remaining ~2040 lines, which is a legitimate next step but was not necessary to produce an honest partial conclusion package, and doing so would have pushed this pass toward "new analysis" rather than "distillation of existing evidence."

## Where I disagree with / caveat the 1.0.9 baseline

- The 1.0.9 package's `load_snapshot` characterization ("localOnly:boolean param" flowing to `Repository::load_snapshot_local`) does not match what I observed in the 1.2.3 closure body, which calls `load_snapshot_local(__src)` with no visible extra arguments. I flagged this as an open question rather than either (a) assuming the 1.0.9 characterization still holds, or (b) assuming a behavior change — the args could plausibly be consumed in an outer closure frame I did not trace.

## Implemented-checkpoint (per GATE-SPEC.md IMPLEMENTED_CHECKPOINT_RELATIONSHIP_V1)

None declared this pass — no leaf reached a gate tier I consider fully closed enough to checkpoint beyond what is already recorded in `gate-report.json`. `clean` and `load_snapshot` are at `consumerStartReady` (dims 1-2 closed, 3-4 partial, 5 declared macOS-only, 6 missing); `rebuild_registry` remains `consumerStartBlocked` (dim1 not closed).

## What I would do next if continuing this work

See `data/task-plan.json.next_producer_steps` — I consider locating `rebuild_registry`'s real UI trigger the single highest-value next action, since it is the only leaf below `consumerStartReady` and its backend evidence is otherwise the strongest of the three.
