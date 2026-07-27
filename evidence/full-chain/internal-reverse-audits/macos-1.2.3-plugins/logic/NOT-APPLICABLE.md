# logic/ — Justified N/A

**Status: N/A (justified).**
**Reason: the plugins feature is removed at 1.2.3 macOS-arm64 (removed=true, confidence=high, 4/4 same-platform signals). There is no implementation leaf — no command, no owner, no core, no persistence leaf — for which to write implementation/replication logic.**

## Why the OUTPUT-SPEC `logic/` files do not apply here
`logic/` (per OUTPUT-SPEC.md §logic) is the **direct basis for implementing/replicating code**: `FULL-CHAIN-<ver>.md` (frontend trigger → guard → invoke → backend command → core → fs/http/sidecar leaf), `REGISTRATION-TABLE-<ver>.md` (command/endpoint registration), `DELTA-LOGIC-<ver>.md`, etc. Every one of these presupposes a **present** feature with a live call chain to reconstruct.

At 1.2.3 macOS the plugins call chain does not exist:
- no `list_plugins`/`toggle_plugin`/`get_plugin_config`/`update_plugin_config` command (0/131 IPC commands),
- no `commands/plugins/` owner directory (16 subdirs, none plugins/),
- no `PluginRegistry` / `save_store_static` / `plugins.json` leaf (string-pool 0 hits),
- no `PluginsPage` frontend surface.

So there is nothing to distill into a full-chain or registration table. Writing one would be fabrication.

## RULE-9 classification of this package
Per AGENTS.md §RULE 9 (version-iteration diff migration), this target's status is **not** one of the four normal migration states (`migrated_no_behavior_diff` / `unchanged_reused` / `diff_required` / `diff_reversed`) — those all assume the target still exists in some form. This is a **feature-removal** outcome: the 1.0.9 plugins evidence (present, `full_leaf_100` accepted) does **not** migrate forward; it is retained only as historical behavior reference in `internal-reverse/audits/macos-1.0.9-plugins/`. The 1.2.3 conclusion is a negative-existence classification (`removed=true`), recorded in this package's `README.md`, `gate-report.json`, `SYSTEM-DIFF.md`, and `data/summary.json`.

## Where the real content lives
- Removal verification + evidence matrix: `README.md`
- Gate + dim status + negative-existence signals + unknowns: `gate-report.json`
- Version diff (1.0.9/1.1.8 present → 1.2.3 removed): `SYSTEM-DIFF.md`
- Machine-readable evidence + pointers: `data/summary.json`, `pointers/evidence-paths.md`

## If ever un-N/A'd
The only follow-up that could add a `logic/` note is desugaring `run_0x1006f50c0.c`'s 5 `.manage()` injected-state types to prove no `PluginRegistry`-typed state persists internally (accepted_unknown). That would be **supplementary internal-residual evidence**, not an implementation logic doc — the feature would still be absent from the product surface, so still nothing to implement.
