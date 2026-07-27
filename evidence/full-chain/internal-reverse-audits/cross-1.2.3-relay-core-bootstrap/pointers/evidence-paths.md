# Evidence Paths — cross-1.2.3-relay-core-bootstrap

All paths below are env-relative to `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`
(mounted at `` on this machine). This package produced
no new raw/intermediate evidence; the paths below are what was read to derive the
dependency-completeness finding.

## Consumed canonical bundles (internal-reverse)

| bundle | path | consumed for |
|---|---|---|
| macos bootstrap | `internal-reverse/audits/macos-1.2.3-bootstrap/{README.md,manifest.json,gate-report.json}` | bootstrap macOS gate state, binary SHA |
| macos relay-core (diagnostic) | `internal-reverse/audits/macos-1.2.3-relay-core/{README.md,manifest.json}` | relay-core macOS coverage finding, unknown list |
| windows relay | `internal-reverse/audits/windows-1.2.3-relay/manifest.json` | windows binary SHA cross-check |
| cross 1.0.9 template | `internal-reverse/audits/cross-1.0.9-relay-core-bootstrap/{README.md,AI.md,SYSTEM-DIFF.md,manifest.json,gate-report.json}` | structural template only, no 1.2.3 content taken from it |
| status ledger | `internal-reverse/REVERSE-STATUS.md` (section `[wf-aimami123-fullapp-20260724]`, and `[mac-1.2.3-bootstrap-triage-20260725]`) | canonical backlog claim for relay-core/bootstrap/relay-core-bootstrap as open 1.2.3 targets; confirmed no prior claim on `cross-1.2.3-relay-core-bootstrap` before this session |

## Consumed raw evidence (not canonical, unreduced)

| item | path | notes |
|---|---|---|
| windows relay-core function surface | `raw/aimami/1.2.3/windows-x64/relay-core/manifest.json` | scope=function-surface-only, no_decompile_performed=true |
| windows relay-core surface writeup | `raw/aimami/1.2.3/windows-x64/relay-core/SURFACE-MANIFEST.md` | 177 functions / 29 submodules, per-module breakdown table |
| windows relay-core tool status | `raw/aimami/1.2.3/windows-x64/relay-core/tool-status.txt` | IDA_LIVE_GATE passed confirmation, stage list |
| windows relay-core owner map | `raw/aimami/1.2.3/windows-x64/relay-core/owner-map.jsonl` | 177 lines, per-function tier/evidence detail (not read line-by-line this session, only wc -l) |
| windows-x64 raw tree top level | `raw/aimami/1.2.3/windows-x64/` (directory listing only) | checked for a bootstrap-equivalent tree; none found under that name; noted `runtime/`, `codex_runtime/`, and `manager/ida/pseudocode/bootstrap_0x14085a330.c` as unexamined leads |
| windows-x64 transition_journal dir | `raw/aimami/1.2.3/windows-x64/transition_journal/` (existence only, not opened) | flagged discrepancy vs relay-core surface manifest's "zero hits" claim; not resolved |

## Not consulted this session (out of scope for a read-only distillation pass)

- `raw/aimami/1.2.3/macos-arm64/core/relay/*/` — referenced only via `audits/macos-1.2.3-relay-core/manifest.json`'s own cross-check table, not independently re-read.
- Any live IDA MCP endpoint (mac or win) — no `server_health` or other IDA calls made this session; this is a disk-grounded distillation pass only.
- `data/task-plan.json` of any source bundle beyond what is summarized in their respective manifest.json/gate-report.json files.
