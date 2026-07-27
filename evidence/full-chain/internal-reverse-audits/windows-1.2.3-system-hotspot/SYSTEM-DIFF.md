# System Diff — AiMaMi 1.2.3 system-hotspot (windows-x64, vs macOS-arm64 sibling)

## Platform Artifacts

- Binary: PE AMD64, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (shared 1.2.3 windows-x64 binary, matches sibling packages windows-1.2.3-relay and macos-1.2.3-system-hotspot's recorded windows sha); idb_module_name `AiMaM 1.2.3 win64.exe.i64 (strip)`.
- macOS sibling evidence: Mach-O arm64, sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d` (see ../macos-1.2.3-system-hotspot/SYSTEM-DIFF.md for macOS-side detail; not independently re-verified this pass, cited only for cross-reference).
- All 5 Windows .c file headers read "win 1.2.1" despite living under the raw/aimami/1.2.3/windows-x64/ tree -- inherited extraction-pass label quirk, already documented for the identical 5 files by the macOS sibling package; directory path + binary SHA-256 both independently confirm 1.2.3.

## Frontend IPC / Control-flow

- 5 hotspot-related commands, all present and byte-identical in name to the macOS sibling: `has_notch`, `get_hotspot_enabled`, `set_hotspot_enabled`, `focus_main_window`, `hotspot_ready` -- confirmed independently this pass via exact-JSON-field-match against the win-native ipc-contracts.jsonl (131 total win commands, true_gaps=0).
- 3 win-native frontend UI asset files consume these commands (see README.md Frontend Control Flow section): index-B40jKs17.js (dedicated hotspot window mount effect + capsule onClick), settings-page-B8vywarZ.js (Settings Switch), accounts-page-GdJYDnGj.js (Accounts Quick-Settings dialog Switch) -- all independently grepped/confirmed this pass, not inferred from the macOS sibling's page-doc filenames (which are differently-named .md synthesis docs, not raw JS assets).
- The win-native `hasNotch` wrapper carries a `.catch(()=>!1)` fallback (returns false if the invoke call rejects) -- a genuine win-native frontend detail confirmed this pass via direct grep of the ipc-contracts.jsonl snippet field.
- The double-gated query pattern (`has-notch` staleTime:Infinity -> `hotspot-enabled` enabled-on-has-notch-result) is confirmed present verbatim in BOTH win-native asset files (settings-page-B8vywarZ.js and accounts-page-GdJYDnGj.js), matching the macOS sibling's description of the same pattern in its own page docs -- this is genuine win-native corroboration of the same frontend behavior, independently derived.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- Windows backend function count for this module: 5 (command-layer only). No dedicated `commands/hotspot/` or `platform/screen`-equivalent directory exists on Windows at all -- confirmed via directory find this pass. This is a STRUCTURAL platform difference from macOS (which has 18 real-named functions across 2 dedicated directories), independently re-confirmed (not copied from the macOS package's own note of the same fact).
- Windows call-tree depth: 0/5 commands reach a confirmed implementation leaf (all 5 stop at an undecompiled sub_XXXX core-dispatch address one hop past the command wrapper) -- this is a genuine depth gap relative to the macOS sibling (7/18 macOS functions close to real AppKit leaves directly) and relative to the semantically-different windows-1.0.9-system-hotspot package (which reached persistence_commit/external_call terminal leaves for its 3 WiFi-hotspot commands via named owner_sys/core_sys functions).
- New this-pass cross-reference finding (not present in the macOS sibling package): commands/autostart/sub_140388D60.c contains a serde field-name-matcher string constant suggesting 'hotspot' may be a direct top-level field name of CodexMateSettings itself, distinct from the separately-named HotspotConfig struct the macOS package found in an unrelated core/repository serde-glue file. Diagnostic-only, not independently verified.
- Backend decompile coverage: 5/5 real-named Windows command-layer functions, 0 truncated stubs, 0 sub_XXXX at the wrapper layer. See manifest.json/gate-report.json.

## Interface / Error / Boundary

Not independently extracted for Windows this pass (dim4 gap, see gate-report.json). See the CodexMateSettings-field-name lead above -- diagnostic-only, do not treat as closed.

## Gate Leaf

consumerStartReady 5/5; strictImplementationUse 0/5; readyToImplement 0/5. See gate-report.json. Windows dim3 depth is materially weaker than the macOS sibling package's own (also not-yet-strict) state for the same 5 commands.

## Plugin / Capability

Not applicable -- system-hotspot is not part of the plugins system (see OUTPUT-SPEC.md §plugins 1.0.8 最小逆向任务, a separate module with its own gate).

## OTA / Package

Not evaluated this pass (out of scope for a UI-companion-window module).

## Resource / Binary Surface

`commands/`: 5 .c files on Windows (flat, no dedicated subdirectory, all real symbol names, ground-truth command-name string xref). No `windows-x64/screen` or `windows-x64/hotspot` directory exists at all. This is the single most visible structural platform difference from macOS's dedicated `commands/hotspot/`(16 files) + `platform/screen/`(2 files) layout -- Windows collapses the entire module surface into 5 flat command-wrapper files with no separately-decompiled internals.

## Unknown

- 5 core-dispatch addresses' actual behavior (0x140970DA0/0x14096F8D0/0x14096FB70/0x14096F460/0x14096F5D0): not independently decompiled this pass, only inferred structural corroboration (repo/app namespace strings) from call-site context.
- 'hotspot' as a candidate direct CodexMateSettings field name: genuinely new lead this pass, field type/layout Unknown.
- 13 of 18 macOS-defined functions' Windows-side existence/absence: zero confirmed Windows evidence, no windows-x64/screen or windows-x64/hotspot directory exists -- plausible genuine platform difference (no notch hardware concept on Windows) but not confirmed either way; independently re-derived this pass, not copied from the macOS package.
- Semantic-keyword orphan scan performed as a text-grep proxy (not live IDA export_funcs()) -- weaker evidence class, see manifest.json known_residuals.
- Interface/DTO and test/acceptance mapping: not extracted for 1.2.3 Windows (dim4/dim6 gaps).
- Relationship (if any) between this package's scope and the semantically-different windows-1.0.9-system-hotspot package's WiFi-hotspot scope: product_decision, not attempted this pass.
