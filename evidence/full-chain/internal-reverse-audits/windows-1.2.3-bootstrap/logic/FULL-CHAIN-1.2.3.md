# Windows 1.2.3 bootstrap — reduce-only full-chain notes

Scope: read-only reduce over pre-existing raw evidence. No new IDA decompile performed this
session. See `manifest.json` for the full scope statement.

## 1. What "bootstrap" raw evidence actually exists on windows-x64 1.2.3

A filename/owner-map-name search for "bootstrap" across
`raw/aimami/1.2.3/windows-x64/` returned exactly 5 files:

| file | VA | module | canonical home this package assigns |
|---|---|---|---|
| `commands/ida/pseudocode/load_bootstrap_state_0x14018b520.c` | 0x14018b520 | codexmate_lib/commands | **windows-1.2.3-daemon-autoswitch** (already owns it) |
| `manager/ida/pseudocode/bootstrap_0x14085a330.c` | 0x14085a330 | core::relay::manager | **this package (windows-1.2.3-bootstrap), leaf `manager_bootstrap`** |
| `commands/accounts/ida/pseudocode/store_bootstrap_snapshot_best_effort_0x1403ec5e0.c` | 0x1403ec5e0 | codexmate_lib/commands/accounts | **windows-1.2.3-accounts** (already owns it) |
| `commands/tray_menu/ida/pseudocode/create_bootstrap_tray_menu_0x1403f2350.c` | 0x1403f2350 | codexmate_lib/commands/tray_menu | **windows-1.2.3-tray** (already owns it) |
| `commands/accounts/ida/pseudocode/load_snapshot_0x140cb5e50.c` | 0x140cb5e50 | codexmate_lib/commands/accounts | **windows-1.2.3-accounts** (already owns it; name-only overlap with the 1.0.9 system-shell-init `load_snapshot` leaf, NOT confirmed same function — see §3) |

Only `manager_bootstrap` (row 2) is genuinely new/uncanonicalized bootstrap-domain evidence. The
other 4 were checked via `grep -rl <name-or-VA> internal-reverse/audits/windows-1.2.3-*/` and
confirmed already present in a sibling canonical package's `manifest.json`/`gate-report.json`/
`logic/*.md`/`pointers/evidence-paths.md` before this session started — including them here would
violate RULE8 (one canonical leaf name per module/version/platform) and the
`PREWRITE_PRODUCER_COLLISION_GATE_V1` owner-check requirement.

## 2. manager_bootstrap (core::relay::manager::bootstrap, VA 0x14085a330)

Full 646-line pseudocode already on disk (session `manager-win-deepdecompile-20260724`, this
session only read it, did not re-decompile). Cross-platform name match confirmed by the file's own
header comment: win `codexmate_lib::core::relay::manager` (panic-Location xref, win-native
ground truth) = mac `codexmate_lib::core::relay::manager::RelayManager::bootstrap` (string-
signature match).

Pre-existing INDEX.jsonl narrative summary (consumed, not re-derived):
> "Initializes the manager subsystem at startup: loads persisted account/provider entries, wires
> router/proxy state, prepares the in-memory account registry."

This session's own read of the body confirms two concrete call-tree edges (dim3, one hop):

- Line ~167: direct call to `ensure_proxy_started(&v41, (volatile signed __int64 **)v2)` — a named
  sibling function in the same manager module, itself already dim2-closed per the same owner-map
  INDEX entry ("Idempotently starts the local relay proxy server if not already running (checks
  running-state flag, spins it up, wires router state)").
- Lines ~197 and ~345: two calls to the module's internal tier-C helper `sub_14085A1E0` (the
  module's own owner-map note ties this to poisoned-lock/state-transition support, referencing the
  "relay state poisoned" string found at that address).

Neither `ensure_proxy_started` nor `sub_14085A1E0`'s own bodies were opened this session — dim3 is
"partial, one hop" not "closed". No DTO/error-boundary extraction (dim4) or frontend trigger trace
(dim1) was performed; dim1 is provisionally accepted N/A (internal startup routine, same class as
the 1.0.9 windows `app_run_entry`/`managed_state_registry` leaves) but NOT independently
re-verified against `ipc-contracts.jsonl` this session, so it is recorded `accepted_unknown` rather
than a confirmed N/A.

## 3. RULE9 baseline gap: the 5 windows-1.0.9-bootstrap leaves have zero 1.2.3 raw

`internal-reverse/audits/windows-1.0.9-bootstrap/` closed 5 leaves to `strictImplementationUse`:
`app_run_entry` (0x140004B30), `boot_spawn_threads` (0x14028CCB0), `bootstrap_cache`
(0x140272E80/0x1402663E0), `managed_state_registry` (0x141208810), plus a `system_shell_init`
supplement leaf `load_snapshot` (0x1408c2e10 coroutine / 0x14084DF80 snapshot builder /
0x1400AF970 event emitter / 0x14000F3E0 tray refresh).

This session grepped the entire `raw/aimami/1.2.3/windows-x64/` tree (all subdirectories, not just
the `bootstrap`-named files) for name patterns tied to each of these 5 leaves —
`app_run_entry`, `managed_state`, `CliDispatch`/`cli_dispatch`, `spawn_threads`/`boot_spawn` — and
found **zero hits**. This was cross-checked against the flat file listings of
`raw/aimami/1.2.3/windows-x64/{codexmate_lib,commands}/ida/pseudocode/` (32 + ~40 files
respectively, all individually named — none match) and `raw/aimami/1.2.3/windows-x64/mod/ida/
pseudocode/` (a single unrelated `sub_140AE7DE0` file).

This is recorded as an honest raw-thinness gap (`gap_needs_new_raw` for all 5), not a triage
failure and not papered over with an all-or-nothing rejection of the whole module, per the task's
explicit instruction. It is also not assumed to mean these leaves were removed in 1.2.3 — per
RULE9, `diff_required` is the only defensible status without direct new evidence.

One name-coincidence worth flagging: `commands/accounts/load_snapshot` (VA 0x140cb5e50, owned by
windows-1.2.3-accounts) shares the bare function name `load_snapshot` with the 1.0.9
`system_shell_init` supplement leaf, but the module (`commands::accounts` vs a system-shell-init
internal tokio coroutine) and role (account-snapshot IPC command vs internal snapshot-builder +
tray-refresh side effects) do not obviously match. This session did **not** open both bodies to
compare call-tree shape — left as an open identity question (`blocks_start`), not assumed same or
different.

## 4. Ownership cross-check method (collision gate)

For each of the 5 bootstrap-filename-matched raw files, ran:

```
grep -rl "<function-name-or-VA>" internal-reverse/audits/windows-1.2.3-*/
```

against every sibling `windows-1.2.3-*` canonical package's `manifest.json`, `gate-report.json`,
`logic/*.md`, `AI.md`, `README.md`, `SYSTEM-DIFF.md`, and `pointers/evidence-paths.md`. Four of the
five (`load_bootstrap_state`, `store_bootstrap_snapshot_best_effort`, `load_snapshot`,
`create_bootstrap_tray_menu`) returned hits in an existing sibling package's files, confirming prior
canonical ownership — those 4 are cross-referenced in `pointers/evidence-paths.md` and
`manifest.json` §known_residuals, not duplicated. Only `manager_bootstrap`'s VA/name returned zero
hits outside of the diagnostic-only `cross-1.2.3-relay-core-bootstrap` package (which sets no gate
fields and explicitly records `windows-1.2.3-bootstrap` as "completely absent, unattempted" prior to
this session) — confirming it was safe to claim as this package's one new canonical leaf.
