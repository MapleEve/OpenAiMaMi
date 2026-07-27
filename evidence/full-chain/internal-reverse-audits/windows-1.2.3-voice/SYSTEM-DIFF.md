# System Diff — windows-1.2.3-voice

## Platform Artifacts

- Windows: `AiMaMi.1.2.3 win64.exe` (PE/AMD64), IDB `AiMaMi.1.2.3 win64.exe.i64` (strip), imagebase `0x140000000`. Liveness confirmed this session via IDA MCP `server_health` on host `<host>` (`IDA decompiler_ready=true`, `auto_analysis_ready=true`, `strings_cache_ready=true`).
- macOS sibling: see `../macos-1.2.3-voice/manifest.json` (mach-o/arm64, 212 raw voice-domain files). NOT used to infer any Windows fact in this package.

## Frontend IPC / Control-flow

- Both platforms expose 37 commands with "voice" in the name (Windows: `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`, own extraction; macOS: own extraction per its manifest).
- The `VoicePage` JS asset (`voice-page-CV7DqakD.js`) has the same filename/hash pattern on both platforms — Tauri JS bundles are platform-agnostic build output, not evidence of Windows-native backend behavior.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

| Submodule (macOS naming) | macOS raw .c count | Windows raw .c count | Windows dir | Note |
|---|---|---|---|---|
| commands/voice | 23 | 30 (28 named in shared `commands/` bucket + 2 unnamed in `commands/voice/`) | `commands/`, `commands/voice/` | Windows does not physically separate voice vs voice_runtime commands into distinct dirs; organizational difference, not a gap |
| commands/voice_runtime | 9 | (folded into the 28 above) | — | same as above |
| core/voice-direct serde+trait-glue (incl. MacosPermissionsChecker/MacosTextInjector) | 25 | 0 — no dedicated dir found | — | Unknown on Windows, not confirmed-absent (product_decision) |
| core/voice/runtime | 60 | 42 | `runtime/` | materially thinner on Windows |
| core/voice/runtime/overlay | 10 | 0 (folded into `runtime/`? 1 file `show_voice_overlay` lives directly under `runtime/`, no separate overlay subdir) | — | Unknown/thinner |
| core/voice/runtime/tray | 1 | 2 | `tray/` | Windows has MORE here (small numbers, likely noise-level) |
| core/voice/runtime/watchdog | 3 | 0 — no dedicated dir found | — | Unknown, not confirmed-absent |
| core/voice/workspace | 21 | 21 | `workspace/` | **exact match** |
| core/voice/llm | 11 | 6 | `llm/` | thinner on Windows |
| core/voice/aliyun_asr (+connect) | 9+2=11 | 62 | `aliyun_asr/` | **Windows is ~5.6x LARGER** — opposite direction from every other submodule; not independently explained this pass (hypothesis: less inlining/ICF folding on x86_64 for this async state machine vs ARM64, unverified) |
| core/voice/asr | 8 | 0 — no dedicated dir found | — | Unknown, not confirmed-absent |
| platform/voice_macos | 1 | N/A (macOS-only by definition) | — | expected |
| platform/voice_permissions | 4 | 0 — no dedicated dir found | — | Unknown, not confirmed-absent |
| platform/voice_trigger_macos | 15 | 4 | `voice_trigger_windows/` | materially thinner on Windows |
| platform/text_injection | 10 | 1 | `text_injection_windows/` | materially thinner on Windows |
| **Total** | **212** | **171** | — | aggregate totals are broadly comparable (80.7%) but per-submodule shape is very different; a naive "Windows ≈ 80% of macOS" reading would be misleading |

All Windows counts are this session's live `find`-based re-count against the actual raw directory tree (`raw/aimami/1.2.3/windows-x64/`), cross-checked against 7 matching `INDEX.jsonl` entries (module-prefix `codexmate_lib/core/voice` or `codexmate_lib/platform/voice_trigger_windows`, all from session `win-1.2.3-app-function-inventory-gapfill-20260724`, produced_at `2026-07-24T13:20:34Z`).

## Interface / Error / Boundary

Not produced for either platform's voice module this pass (macOS's own manifest also lists `dim4 interface/DTO ... NOT produced`).

## Gate Leaf

Windows: 0 readyToImplement / 0 strictImplementationUse / 0 consumerStartReady / 32 owner_existence_mapped (diagnostic) / 5 blocked. See `gate-report.json`.
macOS: see `../macos-1.2.3-voice/gate-report.json` (not read in full detail this pass beyond its manifest.json; do not assume parity).

## Plugin / Capability

N/A — voice is not a plugin-registry-gated module (unlike `toggle_plugin`, see AGENTS.md plugins special rule). Not applicable to this package.

## OTA / Package

Both platforms sourced from the same 1.2.3 OTA release train (per skill red-line 22 conventions); Windows package extracted from `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/`. No independent OTA-endpoint verification performed this pass (out of scope for a voice-module distillation).

## Resource / Binary Surface

Windows binary/IDB confirmed live and matching (`AiMaMi.1.2.3 win64.exe` / `.i64`) via this session's `server_health` call. SHA-256 of the underlying binary was not independently recomputed this pass (see manifest.json `binary.sha256_binary` = "unknown-not-independently-recomputed-this-pass").

## Unknown

1. [PARTIALLY RESOLVED 2026-07-26] Whether the 6 macOS-only submodules (voice_permissions/asr/overlay/watchdog/aliyun_asr::connect/serde-trait-glue) genuinely have no Windows-native equivalent, or exist under different naming not yet searched (strip binary — cannot rule out via directory-listing alone). **`asr` is now confirmed present on Windows**: a top-level `raw/aimami/1.2.3/windows-x64/asr/ida/pseudocode/` directory exists with 3 files, module-attributed via header comment to `codexmate_lib/core/voice/asr` — this directory was entirely omitted from the 2026-07-25 pass's 10-directory scan (the scan looked for directories with "voice" in the name; `asr/` doesn't have "voice" in its own name even though its module attribution does). Corrected status: `core::voice::asr` = confirmed-present-on-Windows, thinner (3 files vs macOS's 8), NOT absent/Unknown. The remaining 5 submodules (voice_permissions/overlay/watchdog/aliyun_asr::connect/serde-trait-glue) are still Unknown/product_decision, unchanged by this pass.
2. Why `aliyun_asr` is proportionally so much larger on Windows than macOS while every other submodule is thinner or absent. Unchanged this pass.
3. [RESOLVED 2026-07-26, 4/5] Whether the 5 blocked frontend commands map to the 2 unnamed `commands/voice/` sub_ functions, other not-yet-found functions, or are genuinely absent on Windows. **Resolved for 4 of 5**: `resolve_voice_vocabulary_app_info`/`upsert_voice_vocabulary_app_scope`/`remove_voice_vocabulary_app_scope`/`set_voice_trigger_listener_suppressed` are case branches inside a shared ICF-folded Tauri command-string dispatcher (`commands/relay/ida/pseudocode/open_path_0x140194810.c`) that the 2026-07-25 voice-only-directory scan never inspected — NOT the 2 unnamed `commands/voice/` sub_ functions, which were a red herring (those 2, plus a 3rd previously-uncounted file in the same directory, are confirmed via this pass to belong to `test_voice_asr_config`'s call-tree and `generate_voice_prompt`'s closure chain respectively — see `logic/FULL-CHAIN-1.2.3.md`). `cancel_voice_trigger_capture` remains genuinely unresolved; strengthened via live IDA `find_regex` full-binary string-cache search returning 0 matches this pass (see `logic/FULL-CHAIN-1.2.3.md` §4).
4. Real cause of the uniform "win 1.2.1" header literal (concluded stale-template, not re-verified against the script source itself this pass). Unchanged.

## 2026-07-26 Update Note

This SYSTEM-DIFF.md's per-submodule counts in the "Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf" table above were produced by the 2026-07-25 pass and are **not fully re-verified line-by-line this pass** except where explicitly called out in Unknown items 1 and 3 above. See `logic/REGISTRATION-TABLE-1.2.3.md` §3 for this pass's corrected non-command-support-module file counts (total raw voice-domain files corrected 171→180) and `manifest.json.reduce_pass_2026_07_26` for the full delta breakdown. The `commands/relay/open_path` shared-dispatcher finding (Unknown item 3) means the "Windows total: 171" and "aggregate totals broadly comparable (80.7%)" statements in the table above should be read as undercounts of the true Windows voice-domain surface, since 4 real voice commands' implementations live in a directory this table doesn't include at all (`commands/relay/`).
