# AI.md — windows-1.2.3-tray

For any future AI session picking up windows-x64 1.2.3 tray work.

## Target universe

10 named target families, sourced from the mac sibling `../macos-1.2.3-tray/manifest.json.coverage.distinct_symbol_families_list`:

```
create_tray_menu, create_bootstrap_tray_menu, create_tray_menu_from_snapshot,
append_codex_router_section, handle_tray_menu_event, refresh_tray_menu,
refresh_tray_menu_with_snapshot, quota_text, load_tray_template_icon,
update_tray_recording_state
```

3 covered this session: `load_tray_template_icon`, `create_bootstrap_tray_menu`, `handle_tray_menu_event`.
7 NOT found by exact-name `lookup_funcs`: everything else in the list above.

## Diff queue

None run this session (RULE 9 diff basis not established against `windows-1.0.9-tray`; see `SYSTEM-DIFF.md` for the native-win32-vs-Tauri-abstraction hypothesis).

## Coverage state

See `gate-report.json` for the formal dim1–dim6 breakdown. Short version: dim1 (frontend) is closed for the whole module (0 IPC surface, native-callback-only, same on both platforms). dim2 (backend decompile) is 3/10. dim3–dim6 not systematically closed for even the 3 covered targets.

## Unknown list (do not silently resolve without new evidence)

1. Identity of `sub_14025D570` / `sub_1407190E0` relative to `quota_text` / `update_tray_recording_state` — plausible, unconfirmed.
2. Why 7/10 names return "Not found" — untested hypotheses: MSVC strip difference / ICF fold-into-covered-functions / genuine architecture divergence (least likely, since the 2 covered names match mac's module path exactly).
3. The `tray-account:<key>`-prefix account-switch dispatch path in `handle_tray_menu_event` (see `logic/FULL-CHAIN-1.2.3.md` §3) — whether a confirmation dialog gates the actual switch call was not traced (same open question as the mac sibling's own unresolved Unknown for the same architectural pattern).
4. Whether windows 1.2.3 tray truly migrated from native win32 (`windows-1.0.9-tray`) to a Tauri cross-platform abstraction — strong circumstantial evidence (exact symbol-name/module-path match to mac), not diffed.

## Recommended next session's first moves (see `data/task-plan.json.next_producer_steps` for the full list)

1. Re-confirm IDA MCP live (`server_health`) against <host> before anything else — this package's session found it healthy at uptime 121281s; a fresh session should not assume that persists.
2. Pull `callees`/`xrefs` for `create_bootstrap_tray_menu` (0x1403f2350) and `handle_tray_menu_event` (0x1403f1850) — both already decompiled, so this is cheap — to test the ICF/inlining hypothesis for the 7 missing names before spending a full RULE24 panic-Location pass.
3. If ICF/inlining is ruled out, run RULE24's 3-layer win-strip recovery (panic-Location 2-hop xref + ≥2-caller call-graph propagation + tauri-command-name xref) scoped to just these 7 names in this one module — small, bounded follow-up.

## Script / command entry points used this session

```
python3 <scratchpad>/idacall.py <host> server_health
python3 <scratchpad>/idacall.py <host> lookup_funcs '{"queries":[...]}'
python3 <scratchpad>/idacall.py <host> decompile '{"addr":"0x..."}'
```

No `IDA Python` batch driver was needed this session (only 2 single-address decompiles); if a future session needs to decompile many candidates at once (e.g. after RULE24 attribution produces a longer address list), reuse the `batch_decompile.py` driver referenced in the `win-1.2.3-app-function-inventory-gapfill-20260724` `INDEX.jsonl` entry.

## Boundary — do not do this without new evidence

- Do not mark any of the 7 uncovered targets `consumerStartReady` based on the mac sibling's behavior.
- Do not mark `sub_14025D570`/`sub_1407190E0` as `quota_text`/`update_tray_recording_state` without an xref or string-literal confirmation.
- Do not upgrade this package past `consumerStartReady` for the 3 covered targets without closing dim4 and dim6 for them first.
