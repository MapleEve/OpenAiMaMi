# diagnose_codex_router — Windows x64 1.1.1 Raw Evidence

**Session**: <审计会话>
**Machine**: <本地机器>
**Binary**: AiMaMi 1.1.1 win64.exe
**SHA256 binary**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**Produced**: 2026-06-17
**Platform**: windows-x64
**Module**: relay (reclassified from system in 1.0.9; matches macOS 1.1.1 reclassification)
**is_upstream**: false (C5-extra; not in upstream codex-cli)
**IDB**: <本地路径>
**Gate tier**: strictImplementationUse (dim1-5 closed; dim6 not in reverse scope)

---

## IDA_LIVE_GATE 结果

- status=ok, uptime=51395s, hexrays_ready=true, module="AiMaMi 1.1.1 win64.exe", imagebase=0x140000000
- strings_cache_ready=true, strings_cache_size=21003

---

## dim1 — Frontend CCF

- Shared frontend JS bundle (same as macOS); CCF sourced from 1.0.9 analysis + 1.1.1 macOS CCF migration
- `relay-page-*.js` — `invoke("diagnose_codex_router")` during relay toggle flow
- Guard: relay page condition met
- Response fields consumed: `mt.data.config_toml_has_router`, `mt.data.config_toml_has_catalog`, `mt.data.summary`
- **dim1 status**: Accepted (migrated from 1.0.9 win + 1.1.1 macOS; shared bundle cross-platform CCF confirmed)

---

## dim2 — Owner / IPC handler

**Owner**: `diagnose_codex_router_cmd_owner_111@0x140021AE0` (A-level, renamed in IDB)
**Size**: 0x38F = 911 bytes (identical to 1.0.9 win)
**IPC string**: `"diagnose_codex_router"` (21 chars) @ `0x1412AC56B` (get_bytes confirmed: 64 69 61 67 6e 6f 73 65 5f 63 6f 64 65 78 5f 72 6f 75 74 65 72)
**Manager key**: `"manager"` (7 chars) @ `0x1412AC6C0` (get_bytes confirmed: 6d 61 6e 61 67 65 72)

### Decompile summary (owner)
1. `sub_141212FB0(v15, a1, 520)` + `sub_141212FB0(v17, a1+520, 400)` — copy IPC ctx
2. Store `aDiagnoseCodexR@0x1412ac56b` ptr + len(21) in `v26/v27[0]`
3. Store `aManager@0x1412ac6c0` ptr + len(7) in `v27[1]/v28`
4. `sub_14006F4B0(v16+16)` — check managed state init
5. If state OK: `sub_141214620(v25, v26, v27+8)` — RelayManager Arc extraction
6. Check `LOBYTE(v25[0]) != 6` (discriminant 6 = state error)
7. Success: `relay_health_check_core_sys_111(v21, v4)` @ `0x140218E30` — core health probe
8. `sub_14082FA60(v25, v26)` — compose CoreEnvelope response
9. → `sub_14080C3C0` (tauri InvokeResolver dispatch, `_InterlockedCompareExchange8` + vtable+24)

**NOTE**: STANDALONE FUNCTION (not inside multiplex dispatcher) — same pattern as 1.0.9 win.
- **dim2 status**: Accepted (A-level decompile; full body; no ICF fold; PE stripped → renamed)

---

## dim3 — Call tree (depth ≥ 3, all terminated)

```
diagnose_codex_router_cmd_owner_111@0x140021AE0 (911B)
  └─ relay_health_check_core_sys_111@0x140218E30 (4454B, core diagnostic engine)
       ├─ sub_1406E8480 [relay_manager_state_extract_sys_111] (233B)
       │    └─ sub_14072A3A0 [relay_providers_enumerate_sys_111] (1201B)
       │         ├─ sub_1403654F0 (providers list extraction)
       │         └─ sub_1410A2210 (Result<T> unwrap/move)
       ├─ sub_14073AF50 (TOML/JSON key search: "model_catalog_json", "model_provider")
       ├─ sub_14107A2D0 (file path build + read: codex_router_catalog.json ×2)
       │    ├─ sub_1410A1B60 (PathBuf builder)
       │    └─ sub_141088630 (fs read)
       ├─ sub_1410795D0 (string compare/CMP for catalog content match)
       ├─ sub_1407B2550 (fuzzy string compare for model entry match)
       ├─ sub_1403654F0 (relay state copy)
       ├─ sub_1406DF920 (relay active flag read)
       ├─ sub_1405F9310 (provider_active discriminant check)
       ├─ sub_1406F29D0 / sub_1406F3770 (relay provider field normalize)
       └─ XOR aimami check inline:
            (*(_DWORD*)v101.i64[1] ^ 0x616D6961 | *(u16*)(v101.i64[1]+4) ^ 0x3169) == 0
  └─ sub_14082FA60 [envelope_builder] (592B)
       └─ sub_14080C3C0 [tauri_ipc_resolve] (InterlockedCmpExch + WakeByAddressSingle)
```

Call-tree depth 3 from handler; all branches terminate at fs/interlock/std leaves.
- **dim3 status**: Accepted

---

## dim4 — Interface / DTO / Error / Side-effects

### Input
- No params; no deserialized args (arg_keys=[])

### Diagnostic flags (5 conditions → string selection)
| Flag | Variable | Condition |
|---|---|---|
| relay_enabled | v75 | RelayManager enabled state |
| proxy_running | v67 | local proxy running (offset +122 byte) |
| catalog_present | v124 read | codex_router_catalog.json exists + parseable |
| catalog_aimami_match | v22/v5 | XOR 0x616D6961\|0x3169 match in catalog JSON |
| config_keys_present | v3/v119 | model_catalog_json + model_provider in config.toml |

### Output strings (6 Chinese diagnostic strings confirmed)
| VA | Len | Content (first 30 chars) |
|---|---|---|
| 0x1412c0ec7 (xmmword) | 124B | 未启用智能路由：Codex 桌面应用... |
| 0x1412c0f43 (xmmword) | 71B | 已启用但本地代理未运行... |
| 0x1412c0fd2 (xmmword) | 101B | 已启用但 catalog 缺失... |
| 0x1412c1037 | 153B | 已启用但 ~/.codex/config.toml 未写入 model_catalog_json... |
| 0x1412c10d0 | 148B | 已启用但 ~/.codex/config.toml 未写入 model_provider router... |
| 0x1412c1164 | 143B | 已启用但当前没有任何已启用的中转 Provider... |

### Response DTO
- `CoreEnvelope<DiagnoseCodexRouterResult>` (assembled in envelope_builder, ~400B payload)
- error_sentinel: `0x8000000000000000`
- Output struct written to `a1`: discriminant=2 (OK), short keys "ok"(2B) + "check"/"run"(7B), 320B main payload block

### Error paths
- `0x8000000000000000` sentinel on RelayManager state error (discriminant 6)
- Alloc failure → OOM panic via `sub_14124BCCB`
- IO error on catalog/config reads → silent flag=false

### Side effects
- Read-only: codex_router_catalog.json, config.toml, RelayManager in-memory state
- No writes, no HTTP, no spawns
- Win: RegOpenKeyExW HKCU (registry path resolution via codex_paths, inherited from 1.0.9)

- **dim4 status**: Accepted

---

## dim5 — Windows platform gate

- Binary: AiMaMi 1.1.1 win64.exe (PE x64, SHA256 confirmed)
- All evidence produced directly from Windows IDB (NOT derived from macOS)
- Windows-specific: `_InterlockedCompareExchange8`, `WakeByAddressSingle` (vs macOS Mutex::lock/unlock)
- Windows-specific: standalone command handler (vs macOS dispatcher-based in some builds)
- Windows-specific: core engine as separate large function (4454B) vs macOS inline in owner
- Registry path: RegOpenKeyExW HKCU (inherited from 1.0.9; not in macOS artifact)
- **dim5 status**: windows_confirmed (independent 逆向分析 evidence; NOT macOS extrapolation)

### Platform differences vs macOS 1.1.1
| Aspect | macOS 1.1.1 | Windows 1.1.1 |
|---|---|---|
| owner_va | 0x1005e9e00 | 0x140021AE0 |
| owner_size | 3433B (0xd69) | 911B (0x38F) |
| core_va | inline in owner | 0x140218E30 (4454B separate) |
| mutex pattern | Mutex::lock/unlock | _InterlockedCompareExchange8 + WakeByAddressSingle |
| registry | no | RegOpenKeyExW HKCU |
| diagnostic strings | 6 Chinese (identical) | 6 Chinese (identical) |
| XOR aimami check | 0x616D6961\|0x3169 | 0x616D6961\|0x3169 (identical) |
| config files read | config.toml + codex_router_catalog.json | config.toml + codex_router_catalog.json |
| module classification | commands::relay | relay |

---

## dim6 — Not assessed

ceiling = strictImplementationUse. dim6 (C5 test/acceptance mapping) is consumer-side implementation work, not reverse scope.

---

## Four-angle completeness

- **A (func_query)**: `.*diagnose_codex_router.*` → 0 hits (PE stripped, expected); xrefs_to IPC string → 1 hit @ 0x140021AE0 (owner confirmed) — PASS
- **B (string pool)**: `find_regex "diagnose_codex_router"` → 1 hit @ 0x1412ac56b (IPC string, not stripped); get_bytes confirmed 21B UTF-8 — PASS
- **C (frontend IPC)**: dim1 migrated from 1.0.9 win + 1.1.1 macOS (shared bundle); invoke("diagnose_codex_router") confirmed — PASS
- **D (owner-map + INDEX)**: INDEX has no prior 1.1.1 windows entry; ADDITIVE no collision; this session owner — PASS

**Fake-wall check**: genuine_ceiling=false; all 7 taxonomy categories excluded:
- drop_in_place: not triggered (synchronous, A-level decompile)
- architecture_only/budget_rule: not applicable
- async_decompile_failed: not async
- wrong_VA: IPC string xref direct → owner confirmed
- vtable_dynamic: handler is direct call
- HTTP_terminal_external_only: no HTTP in this command
- library_internal_vs_callsite: all callees confirmed in-binary

---

## IDB write-back

| Type | Address | Name | Result |
|---|---|---|---|
| rename | 0x140021AE0 | diagnose_codex_router_cmd_owner_111 | ok |
| rename | 0x140218E30 | relay_health_check_core_sys_111 | ok |
| append_comment | 0x140021AE0 | func-level evidence | ok |
| append_comment | 0x140218E30 | func-level evidence | ok |
| append_comment | 0x1412ac56b | IPC string xref | ok |
| append_comment | 0x1412f006f | catalog string | ok |
| append_comment | 0x1406E8480 | relay manager extract | ok |
| append_comment | 0x14072A3A0 | relay providers enumerate | ok |
| idb_save | <本地路径>| — | ok |

---

## INDEX key

`aimami/1.1.1/windows-x64/relay/diagnose_codex_router`
**Leaf path**: `raw/aimami/1.1.1/windows-x64/relay/diagnose_codex_router/`
