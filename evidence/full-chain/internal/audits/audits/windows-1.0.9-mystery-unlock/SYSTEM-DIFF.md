# mystery_unlock — Windows vs macOS Platform Differences
# session: <audit-session> | binary_sha12_win: a5822387fa3f

## MANDATORY NOTICE: DO NOT INFER WINDOWS FROM macOS
Per platform_policy.doNotInferWindowsFromMacOS=true.
All Windows dims are from Windows IDA evidence. macOS evidence (macos-1.0.9-mystery-unlock) is cross-check only.

## Struct Stride

| Property | Windows x64 | macOS arm64 |
|---|---|---|
| MysteryUnlockGrant stride | 96B (confirmed from cleanup loop: `96*v33` in get_mystery_unlock_grants) | Different; see macos-1.0.9-mystery-unlock SYSTEM-DIFF (likely similar but NOT transferred) |
| Cleanup pattern | 96B per-entry drop loop | — |

## Function Addresses

| Function | Windows | macOS |
|---|---|---|
| get_mystery_unlock_grants | 0x14027E640 | 0x10026091C (mac) |
| merge_mystery_unlock_grants | 0x1402719B0 | 0x1002620D4 (mac) |
| storage query impl | sub_1400A8B70 (win) | 0x1005EC3E0 (mac) |

## IPC Interface

Both platforms share the same IPC command names (`get_mystery_unlock_grants`, `merge_mystery_unlock_grants`) and same parameter names (`repo`, `grants`). This is expected — they're cross-platform Tauri commands.

Differences to verify (from cross-check; NOT Windows-proven without Windows IDA):
- macOS mystery-unlock SYSTEM-DIFF notes 9 route allowlist entries — Windows may differ; this requires Windows-specific func_query of `mystery_route_allowed` equivalent

## mystery_route_allowed (3rd command)

The macOS bundle includes a `mystery_route_allowed` helper. For Windows, this would need to be independently located via callees of the dispatcher `auto_switch_multiplex_dispatcher_sys@0x1402663e0`. 

Status for Windows `mystery_route_allowed`: NOT YET LOCATED — requires separate Windows IDA investigation. Per spec §4.1, this is documented as `consumerStartReady/blocked + blocker` if not found; not fabricated.

Current status: blocker = `mystery_route_allowed windows helper not yet independently located` (blocked pending further investigation, not a gate-stopper for the 2 main IPC owners which are at strictImplementationUse)
