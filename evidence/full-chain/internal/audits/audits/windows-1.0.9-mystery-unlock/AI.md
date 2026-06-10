# AI.md — windows-1.0.9-mystery-unlock
# status: strictImplementationUse (dim2-5 Windows-independent; dim1 closed_via_mami_frontend; dim6 pending)
# session: <audit-session> | machine: <workstation> | binary_sha12: a5822387fa3f

## Summary

Two Windows IPC commands for mystery unlock grants flow.

| leaf | addr | gate | idb_saved |
|---|---|---|---|
| get_mystery_unlock_grants | 0x14027E640 | strictImplementationUse | true |
| merge_mystery_unlock_grants | 0x1402719B0 | strictImplementationUse | true |

## evidence_root
`<source-location>/audits/windows-1.0.9-mystery-unlock/`

## achievable_full_leaf_100 = true
- dim1: closed_via_mami_frontend (win ipc-contracts.jsonl confirmed both commands)
- dim2: Windows IDA decompile confirmed (get_mystery_unlock_grants body, merge_mystery_unlock_grants body)
- dim3: call-trees confirmed depth≥5 (sub_1400A8B70 storage query, sub_1400F0C60 merge impl, tauri_ipc_resolve_sys)
- dim4: MysteryUnlockGrant 96B/entry Windows stride; Ok==3/Err==6; both interfaces confirmed
- dim5: windows_independent_closed
- dim6: pending (C5 test plan listed in gate-report.json)

## evidenced_100 = false
dim6 not yet run; C5 implementation side work pending.

## do_not_infer
Windows behavior NOT inferred from macOS. Per platform_policy.doNotInferWindowsFromMacOS=true.

## accepted_unknown
None for the 2 main IPC owners.

Note: `mystery_route_allowed` Windows equivalent helper not yet independently located (separate future investigation item). Does NOT block the 2 main IPC owners' gate.
