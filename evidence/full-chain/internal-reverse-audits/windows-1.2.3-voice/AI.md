# AI Handoff — windows-1.2.3-voice

status: partial (honest-tiered; module-wide consumerStartReady NOT declared; see gate-report.json). Updated 2026-07-26: logic/ directory produced (was missing/empty); owner-resolution coverage 32/37 -> 36/37; raw file census 171 -> 180. No gate tier promoted.
evidence_root: raw/aimami/1.2.3/windows-x64/{commands,codexmate_lib,aliyun_asr,llm,runtime,tray,workspace,voice_trigger_windows,text_injection_windows}/ida/pseudocode/ + raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl
versions: 1.2.3 (superseding windows-1.0.9-voice via RULE9 diff_reversed, NOT migrated)
platforms: windows-x64 only (independently sourced; do_not_infer from macos-1.2.3-voice)
target_universe: 37 frontend voice commands (ipc-contracts.jsonl, win-specific extraction)
locator_audit:
  - canonical: 37 (frontend `command` field containing "voice", exact JSON parse)
  - locator (backend owner confirmed, 2026-07-26 corrected): 36 (32 via dedicated named raw file + 4 via live-IDA-confirmed case branches in the shared open_path dispatcher)
  - missed (true gaps, 2026-07-26 corrected): 1 — cancel_voice_trigger_capture (strengthened via live find_regex 0-match this pass; see logic/FULL-CHAIN-1.2.3.md §4)
  - extra (backend-named files with no frontend command match): 1 — show_voice_overlay (internal render trigger, not a top-level invoke command)
coverage: 180 raw .c files across 12 directories (corrected 2026-07-26 from 171/10 — asr/ and models/ directories, and 1-file undercounts in 4 other directories, were omitted from the 2026-07-25 scan); ~44 named (24.4%), remainder generic sub_; 0 truncated
coverage_mode: backend-owned-target-universe
owner_resolution_status: module-level resolved for all 180 (dirtree-recovery headers present); function-identity resolved for ~44/180 directly-named files, plus 4 more resolved via live-IDB-annotation readout this pass (not yet materialized as standalone named raw files)
full_app_coverage_status: not-full-app
per_target_required_results: see gate-report.json blocked_commands / owner_existence_mapped_commands
frontend_ccf_status: partial (invoke-wrapper-only; no UI-trigger/guard walkthrough) — unchanged this pass
backend_ccf_status: partial (owner/module existence closed for 36/37; call-tree-to-leaf traced past the wrapper for 6 commands — see logic/FULL-CHAIN-1.2.3.md; remainder still wrapper-only)
pseudocode_status: non-failed for all 180 sampled/scanned files (0 truncation stubs found)
call_tree_status: partial for 6/37 commands (2026-07-26); not-produced for the remainder
interface_status: partial — request DTO field names catalogued for 28/29 named command wrappers plus full request+response+error detail for 4 newly-resolved commands (logic/REGISTRATION-TABLE-1.2.3.md); response/error envelope detail not produced for the remainder
error_path_status: partial — error path confirmed for test_voice_asr_config ("ASR config is incomplete") and the 4 newly-resolved commands (missing-arg → error envelope); not-produced for the remainder
boundary_status: partial (platform boundary declared and cross-checked — see SYSTEM-DIFF.md; DTO/side-effect boundary partial for 6 commands, not produced for remainder)
gate_leaf_status: 0 readyToImplement, 0 strictImplementationUse, 0 consumerStartReady, 36 owner_existence_mapped (diagnostic-only, corrected 2026-07-26 from 32), 1 blocked (corrected from 5)

## Target universe (37 commands)

Owner-existence-mapped (32, diagnostic-only, NOT gate-promoted): capture_voice_trigger_key, generate_voice_prompt, inject_voice_text, load_voice_asr_config, load_voice_llm_config, load_voice_processing_modes, load_voice_runtime_status, load_voice_workspace, remove_voice_history_entry, remove_voice_mode_shortcut, remove_voice_template, remove_voice_vocabulary, replace_voice_vocabulary_kind, request_voice_permissions, save_voice_asr_config, save_voice_llm_config, save_voice_processing_modes, set_voice_global_shortcut, set_voice_mode_shortcut, set_voice_overlay_style, set_voice_processing_mode_id, set_voice_trigger_bindings, set_voice_trigger_key, show_voice_search_overlay, start_voice_capture, stop_voice_capture, test_voice_asr_config, test_voice_llm_config, update_voice_runtime_settings, upsert_voice_template, upsert_voice_vocabulary, voice_processing_done.

Blocked (5, no backend name-stem match): cancel_voice_trigger_capture, remove_voice_vocabulary_app_scope, resolve_voice_vocabulary_app_info, set_voice_trigger_listener_suppressed, upsert_voice_vocabulary_app_scope. Candidates: the 2 unnamed `commands/voice/` sub_ functions (sub_140755DC0 535 lines, sub_140ACDB60 37 lines) — accepted_unknown identity, not confirmed.

## Diff queue

RULE9 status = `diff_reversed`. Prior windows-1.0.9-voice package declared voice backend-absent on Windows at 1.0.9 (34/34 commands via accepted IDA-absence substitute). That conclusion is explicitly superseded, not migrated — 1.2.3 has real backend evidence. Do not cite windows-1.0.9-voice as current-state evidence for 1.2.3 or later versions.

## Coverage detail

- named/identity-resolved: 40 files (33 with "voice" in filename incl. show_voice_overlay + 7 other real names: start_message-adjacent, default_templates, read_workspace_file, serialize_2, 3 hash-closure names in aliyun_asr/)
- generic sub_: 131 files, ALL module-attributed via header comment (`attributed via call-graph propagation (>=2 same-module callers)` or `attributed via panic-Location xref`) — this is real prior work, not fabricated, but stops short of individual identity
- by directory: commands/ida/pseudocode(28 named)+codexmate_lib/ida/pseudocode(3 named)+commands/voice(2 unnamed)+aliyun_asr(62: 59 unnamed+3 named)+llm(6 unnamed)+runtime(42: 41 unnamed+1 named show_voice_overlay)+tray(2 unnamed)+workspace(21: 17 unnamed+4 named)+voice_trigger_windows(4 unnamed)+text_injection_windows(1 unnamed)

## Do-not-infer boundary

- Do not infer Windows dim2/dim3/dim4/dim6 closure from macos-1.2.3-voice/ (which itself only closed dim2-existence + dim1, not dim3/4/6 either — see that package's own manifest known_residuals).
- Do not treat the 32/37 name-stem match as call-tree, interface, or side-effect evidence — it is existence-only.
- Do not treat the 6 macOS-only submodules (voice_permissions/asr/overlay/watchdog/aliyun_asr::connect/serde-trait-glue) as confirmed-absent on Windows; they are Unknown (no Windows top-level directory found this pass, product_decision class).
- Do not carry forward windows-1.0.9-voice's `implementation_use=true`/`full_leaf_100=true` to 1.2.3.

## Scripts / recheck commands

```bash
ROOT=raw/aimami/1.2.3/windows-x64
# raw file union recount
{ find "$ROOT" -iname "*voice*.c"; \
  find "$ROOT"/{aliyun_asr,llm,runtime,tray,workspace,voice_trigger_windows,commands/voice} -name "*.c" 2>/dev/null; \
} | sort -u | wc -l   # expect 171

# truncation scan
find "$ROOT" -iname "*voice*.c" -exec grep -liE "TRUNCATED|DECOMPILE-FAILED|chars total\]" {} \;  # expect empty

# frontend command extraction
python3 -c "
import json
with open('$ROOT/frontend/ipc-contracts.jsonl') as f:
    print(sorted({json.loads(l)['command'] for l in f if l.strip() and 'voice' in (json.loads(l).get('command') or '').lower()}))
"

# IDA liveness
python3 <idacall.py-path> <host> server_health
```

## Unknowns (see gate-report.json.unknowns for full detail)

1. [RESOLVED 2026-07-26] Identity of 2 unnamed `commands/voice/` sub_ functions vs 5 blocked commands — the 2 (plus a 3rd previously-uncounted file) are NOT owners of any blocked command; `sub_140755DC0`/`sub_140ACDB60` belong to `test_voice_asr_config`'s call-tree, and the 3rd file is a `generate_voice_prompt` closure. The real owners of 4/5 blocked commands were found elsewhere (`commands/relay/ida/pseudocode/open_path_0x140194810.c`, a shared ICF-folded dispatcher) — see logic/REGISTRATION-TABLE-1.2.3.md and logic/FULL-CHAIN-1.2.3.md.
2. Identity of ~131 generic sub_ functions (module-resolved, not function-resolved) — unchanged, still blocks_start.
3. [PARTIALLY RESOLVED 2026-07-26] 6 macOS-only submodules with zero Windows top-level directory — `asr` (core::voice::asr) is now confirmed present on Windows (3 files, `raw/.../asr/ida/pseudocode/`, previously omitted from the directory scan entirely). Remaining 5 (voice_permissions/overlay/watchdog/aliyun_asr::connect/serde-trait-glue) still product_decision (Unknown, not confirmed-absent).
4. Uniform "win 1.2.1" header literal despite path/INDEX/live-IDB agreeing on 1.2.3 — accepted_unknown, concluded stale-template not real provenance conflict. Unchanged.
5. dim3/dim4/dim6 entirely not produced for the bulk of the module — still blocks_start, though this pass produced partial dim3/dim4 for 6 commands (test_voice_asr_config, generate_voice_prompt-closure, and the 4 newly-resolved commands) — see logic/FULL-CHAIN-1.2.3.md.
6. Full pseudocode content review not performed for all 180 files (this pass read all 29 named `commands/` wrappers, both `commands/voice/` unnamed files, the 4 newly-resolved live-IDB bodies, and headers of the remaining named files; the ~131 generic sub_ files and `generate_voice_prompt`'s 2919-line body remain unread) — blocks_start.
7. [NEW 2026-07-26] `cancel_voice_trigger_capture` — strengthened negative evidence (live IDA `find_regex` full-binary string search returned 0 matches; `lookup_funcs` exact-name returned Not found); `search_text` attempted twice, both timed out, inconclusive. Unverified hypothesis: possibly a pure-frontend AbortController semantic with no backend invoke. Still `truly_undone`.
8. [NEW 2026-07-26] Apparent duplicate `Serialize for VoiceWorkspacePayload` implementation at two different addresses (`workspace/serialize_2_0x1407ae080.c` and `models/serialize_VoiceWorkspacePayload_0x140aa76f0.c`) — not disambiguated, recorded as an observation.

## 2026-07-26 Reduce Pass Addendum

`logic/` directory (previously missing/empty) now contains `REGISTRATION-TABLE-1.2.3.md` (full 37-command registration table with corrected owner mapping, 36 owner_existence_mapped + 1 blocked) and `FULL-CHAIN-1.2.3.md` (end-to-end call-chain evidence for 6 commands, generic wrapper skeleton documentation, and the `cancel_voice_trigger_capture` exclusion record). `status:` line above should be read alongside this: still `partial`, no gate tier promoted, but owner-resolution coverage raised from 32/37 to 36/37. Raw file census corrected 171→180 (see manifest.json `reduce_pass_2026_07_26`). This pass used live IDA MCP (`<host>`) for read-only verification only (`server_health`/`get_bytes`/`decompile`/`lookup_funcs`/`find_regex`); no new raw `.c` files were written, no IDB writes performed.
