# interface — get_system_info (AiMaMi 1.1.8, windows-x64)

## IPC contract (frontend-confirmed, `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 99)

- **command**: `get_system_info`
- **argKeys**: `[]` — no request payload
- **frontend wrapper**: `getSystemInfo:()=>te("get_system_info")`, `kind=tauriInvokeWrapper`,
  `assets/index-CX-I_QAq.js:86`
- **dispatch mechanism on windows-x64 1.1.8**: **none found**. The single uniform main IPC
  dispatcher (`0x1403cf5b0`, 19155B, 112 callees — same mechanism documented in
  `intermediate/aimami/1.1.8/windows-x64/version-delta/win-divergence-118.json` and the one that
  successfully resolved this session's sibling `get_relay_provider_quota` leaf) has zero
  string-literal reference to `get_system_info` anywhere in the binary — confirmed via 5 independent
  methods, see `../evidence.md`.
- **owner_va**: `null` — no owner function exists on this platform/build.
- **macOS 1.1.8 contrast**: owner **does** exist — `owner_va=0x1006c9110`,
  `owner_symbol=__ZN13codexmate_lib8commands6system15get_system_info17h4766a9754b0ff435E`,
  `module=commands::system` (`intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl`
  line 38, angle-A discovery-only record, no full gold-leaf performed for the mac side this round).
- **1.1.1 windows baseline** (out-of-scope migration-source citation only, not this round's
  comparison baseline): confirmed **working** dispatch chain at depth 5 — see
  `raw/aimami/1.1.1/windows-x64/system/get_system_info/evidence/reverse.md`
  (`get_system_info_ipc_dispatcher_branch_sys_111@0x14001D130` →
  `get_system_info_cmd_owner_sys_111@0x140835CC0` → field_builder/serialize/drop, structurally
  matched to a 1.0.9 windows chain rooted at `sub_140070050`).
- **1.0.9 baseline**: command is listed as unchanged (`cmd-same.win.txt` line 34) across
  1.0.9→1.1.8 from the frontend's perspective; no independent 1.0.9 windows-x64 backend evidence
  exists on disk this round.

## Request DTO

```
() // no arguments
```

## Response DTO

**Unknown on windows-x64 1.1.8** — no owner function exists to decompile, so the response
struct/fields cannot be determined from this platform's binary this round. The macOS owner symbol
name (`commands::system::get_system_info`) and the 1.1.1 windows baseline's `field_builder`/
`serialize` node names suggest a system-info DTO (OS version/build, hardware identifiers, or
similar), but no field-level detail was independently re-derived this round for either platform
(mac side was only angle-A symbol-resolved, not decompiled; windows side has no owner at all).

## Error paths

Unknown — no owner function exists on windows-x64 1.1.8 to trace an error path from.

## Side effects

Unknown — no owner function exists on windows-x64 1.1.8 to trace side effects from. Given the
command's read-only naming convention (`get_*`) and lack of any argKeys, a persistence/write side
effect is considered unlikely but is not confirmed either way.

## Delta vs baselines

- **vs 1.0.9**: unchanged frontend command (`cmd-same.win.txt`); no independent 1.0.9 windows
  backend evidence exists on disk this round.
- **vs 1.1.1** (migration-source citation only): windows dispatch chain was **confirmed working**
  in 1.1.1 (depth 5) and is **confirmed absent** (5-method exhaustive negative) in 1.1.8 — recorded
  as a genuine windows-side regression/removal finding for the 1.1.1→1.1.8 window, not a decompile
  ceiling. See `../evidence.md` "Delta vs baselines" for full detail and caveats.
