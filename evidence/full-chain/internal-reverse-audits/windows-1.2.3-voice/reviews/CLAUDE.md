# Claude Independent Review — windows-1.2.3-voice

Reviewer: Claude (this distillation session, 2026-07-25)

## Evidence paths used

- `raw/aimami/1.2.3/windows-x64/{commands,codexmate_lib,aliyun_asr,llm,runtime,tray,workspace,voice_trigger_windows,text_injection_windows}/ida/pseudocode/*.c` (171 files, live `find` re-count, not carried over from any prior doc)
- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` (37 voice commands, own `json.loads` parse)
- `INDEX.jsonl` (7 module-prefix-matched entries, session `win-1.2.3-app-function-inventory-gapfill-20260724`)
- IDA MCP `server_health` on `<host>` (live confirmation, this session)
- `internal-reverse/audits/windows-1.0.9-voice/{manifest.json,README.md,AI.md}` (prior-version same-platform baseline, read in full)
- `internal-reverse/audits/macos-1.2.3-voice/manifest.json` (cross-platform sibling, read for structural template only, not for Windows fact inference)
- `internal-reverse/audits/windows-1.2.3-relay/{manifest.json,gate-report.json,pointers/evidence-paths.md,data/task-plan.json}` (most-recent same-platform-version sibling, used as the RULE8/gate-report structural template)
- `internal-reverse/AGENTS.md`, `internal-reverse/OUTPUT-SPEC.md` (read in full, this session)

## Coverage scope of this review

This review covers: file-existence verification (171-file union recount), truncation-marker scan (0 found, sampled + directory-level), header/module-attribution spot-check (~15 files read in full or near-full), frontend-command-name extraction and name-stem diff (32/37 mapped, 5 gaps), directory-listing cross-platform submodule comparison, IDA MCP liveness confirmation, and RULE9 diff-status determination against the 1.0.9 baseline.

This review does **NOT** cover: full pseudocode business-logic content review of all 171 files, call-tree tracing, DTO/interface extraction, error-path cataloguing, side-effect boundary identification, test/acceptance mapping, or byte-signature/string-xref identity resolution for the 131 generic `sub_` functions or the 2 unnamed `commands/voice/` candidates.

## Gaps found

1. 5 true frontend-command gaps (no backend name-stem match): `cancel_voice_trigger_capture`, `remove_voice_vocabulary_app_scope`, `resolve_voice_vocabulary_app_info`, `set_voice_trigger_listener_suppressed`, `upsert_voice_vocabulary_app_scope`.
2. 131/171 raw files are generic `sub_` — module-attributed but not function-identity-resolved.
3. 6 macOS-only submodules (voice_permissions/asr/overlay/watchdog/aliyun_asr::connect/serde-trait-glue) have zero Windows top-level directory — recorded Unknown/product_decision, not confirmed-absent.
4. All sampled headers carry a "win 1.2.1" literal despite the files living under the 1.2.3 raw path and INDEX.jsonl/live-IDB agreeing on 1.2.3 — concluded stale template literal after cross-checking INDEX + live IDA server_health, not a real provenance conflict, but not independently traced to the producing script's source this pass.
5. dim3/dim4/dim6 (call-tree-to-leaf, interface/DTO/error/side-effect, test/acceptance) entirely unproduced.
6. This session's `func_query` calls against the live IDA MCP did not filter by the supplied query terms (returned an unfiltered paginated function list regardless of query content) — flagged as an unresolved tool-usage discrepancy, not silently treated as "no gap found."

## Should-not-action items

- Do not promote any of the 32 owner-existence-mapped commands to `consumerStartReady=true` on the strength of this package alone — the 9-dim start gate is only 3/9 closed.
- Do not carry forward `windows-1.0.9-voice`'s `implementation_use=true`/`full_leaf_100=true`/`readyToImplement=true` to this or any future 1.2.3+ Windows voice package — that gate was for a fundamentally different fact pattern (backend absence), which no longer holds.
- Do not infer Windows dim3/dim4/dim5-parity/dim6 status from `macos-1.2.3-voice/`.
- Do not treat the 2 unnamed `commands/voice/` sub_ functions as confirmed owners of the 5 blocked commands without further disambiguation work.

## Conflicts with AGENT.md

None — no `reviews/AGENT.md` exists in this package (only one independent review produced this pass, matching OUTPUT-SPEC.md's "at least one of AGENT.md/CLAUDE.md" minimum; no `reviews/CROSS-REVIEW.md` is required or written since only one review exists).

## Compliance note (per task framing)

I read real pseudocode/header content for the sampled files (function bodies, comment provenance, module attribution) — no content raised a distinct compliance concern beyond the documentation-hygiene items already flagged above (stale version literal, tool-usage discrepancy). This is authorized internal analysis of the operating entity's own product line per the task framing; evidence and conclusions are kept entirely within the internal SMB volume (`internal-reverse/audits/windows-1.2.3-voice/`), no raw dump/decompile text was copied into this conclusion package, and nothing in this package is intended for external/public distribution (skill red-line 23).

---

## Addendum — 2026-07-26 reduce pass (Claude, second independent session)

Reviewer: Claude (this reduce session, 2026-07-26). This is a continuation review of the same package, not a replacement of the 2026-07-25 review above (preserved in full above this line).

### Scope of this pass

The `logic/` directory was found missing (empty) from this package while `gate-report.json`/`manifest.json`/`reviews/CLAUDE.md` were present. This session: (1) produced `logic/REGISTRATION-TABLE-1.2.3.md` and `logic/FULL-CHAIN-1.2.3.md` from a fresh independent re-read of the raw evidence root (not copied from the 2026-07-25 manifest numbers), (2) corrected the raw file census, (3) ran a live IDA MCP read-only verification session against `<host>` (`server_health` confirmed `status=ok`/`IDA decompiler_ready=true`/`idb_path=E:\binary\AiMaMi.1.2.3 win64.exe.i64`, satisfying skill red-line 17 IDA_LIVE_GATE), and (4) updated `manifest.json`/`gate-report.json`/`data/task-plan.json` to reflect the new findings.

### New evidence paths used this pass

- Full-tree `grep -r "// module:.*voice"` across `raw/aimami/1.2.3/windows-x64/` (not limited to the 10 directories the prior pass scanned) — found `asr/` (3 files) and `models/` (2 voice-related files) entirely omitted from the 2026-07-25 census, plus 1-file undercounts in `commands/`, `commands/voice/`, `aliyun_asr/`, `llm/`.
- Direct reading of `commands/ida/pseudocode/test_voice_asr_config_0x14016ced0.c` and cross-referencing its call site to `commands/voice/ida/pseudocode/sub_140755DC0_0x140755dc0.c` (full 535-line body read) and `sub_140ACDB60_0x140acdb60.c` (full 37-line body read).
- Direct reading of all 29 `commands/ida/pseudocode/*voice*.c` named wrapper files (grep-based symbol extraction across all 29, full-body read for 2 representative files).
- `idacall.py` (pre-existing script found at `/private/tmp/verify_win_iso/idacall.py` and several sibling temp directories, not authored this session) against IDA MCP host `<host>:13337`: `server_health`, `get_bytes` (2 regions), `decompile` (4 addresses), `lookup_funcs` (1 query), `find_regex` (1 pattern), `search_text` (2 attempts, both timed out).
- `internal-reverse/audits/windows-1.2.3-voice/{AI.md,README.md,SYSTEM-DIFF.md,manifest.json,gate-report.json,data/task-plan.json,pointers/evidence-paths.md}` (this package's own prior state, read in full before editing).

### Findings

1. **4 of the 5 originally-blocked commands resolved.** `resolve_voice_vocabulary_app_info`, `upsert_voice_vocabulary_app_scope`, `remove_voice_vocabulary_app_scope`, and `set_voice_trigger_listener_suppressed` are case branches inside `commands/relay/ida/pseudocode/open_path_0x140194810.c` — a shared Tauri IPC command-string ICF-folded dispatcher that hosts 26+ unrelated commands (its own header comment, left by an untracked prior pass, documents this). The 2026-07-25 pass's owner search was scoped to voice-domain directories only and never inspected this `commands/relay/` file, so it never had a chance to find these 4. This is a genuine scope-gap finding, not new reverse-engineering of previously-unseen code — the file itself was already in `raw/`.
2. **The 4 addresses' full pseudocode + Chinese-language business-logic annotations already existed in the live IDB** before this session (I only ran read-only `decompile` calls; I performed no `rename`/`set_comments`/`idb_save` writes). This means a *different, untracked* producer pass previously did real identity-resolution work on the IDB directly but never surfaced it into this audits package's `manifest.json`/`gate-report.json`. This is worth flagging to the orchestrator: there may be more such untracked IDB-only work for other windows-1.2.3 modules that hasn't been reduced into their respective audits packages either.
3. **2 of the 4 resolved commands carry explicit destructive side-effect annotations** in the pre-existing IDB comments: `upsert_voice_vocabulary_app_scope` → persistence write; `remove_voice_vocabulary_app_scope` → delete. Flagging per skill red-line 20's requirement to mark destructive side effects.
4. **`cancel_voice_trigger_capture` remains unresolved**, now with stronger negative evidence: a live `find_regex` full-binary-string-cache exact-match query returned `n=0` (the strings cache was confirmed warm via `server_health`, ruling out a cold-cache false negative), and `lookup_funcs` exact-name lookup returned `Not found`. `search_text` was attempted twice (30s, then 120s timeout) and both calls timed out without returning a result — this is recorded as an inconclusive, incomplete attempt, not evidence of anything.
5. **`asr/` directory (3 files, module-attributed to `codexmate_lib/core/voice/asr`) was completely absent from the 2026-07-25 manifest/SYSTEM-DIFF.md.** That document's own Unknown item #1 listed `core::voice::asr` as one of 6 macOS-only submodules with "0 — no dedicated dir found — Unknown, not confirmed-absent" on Windows. This is now corrected: the directory exists (3 files, thinner than macOS's 8), resolving this specific Unknown to confirmed-present rather than Unknown.
6. **`models/` directory contains 2 voice-related DTO serialization functions** (`serialize_VoiceGeneratePayload`, `serialize_VoiceWorkspacePayload`) that were also completely absent from the 2026-07-25 census — real dim4 (response-payload serialization) evidence that existed on disk but was never counted or read.
7. A generic command-wrapper skeleton (field-deserialize → business delegate → success/error response serialize → cleanup) was identified across all read named-wrapper files, built from 5 shared helper functions that are themselves NOT voice-specific and NOT present as separate raw files anywhere in the voice-domain tree — flagged as a cross-module infrastructure reverse-engineering unit that should be done once, not repeated per-module.

### Gaps still open after this pass

- Individual function identity for the ~131 generic `sub_` functions elsewhere in the module (aliyun_asr/llm/runtime/tray/workspace/voice_trigger_windows) — unchanged, still module-attribution only.
- `generate_voice_prompt`'s 2919-line body was not fully read this pass (only its terminal closure was traced) — too large for this session's budget; needs a dedicated `basic_blocks`-chunked pass per `ida-deep-recovery.md` §1.
- Response payload / error envelope field-level detail is still not catalogued for the bulk of the 37 commands (only request-side field names, several marked inferred/推断 from truncated IDA symbol names, not confirmed against mac symbols or frontend TypeScript types).
- The 4 newly-resolved commands' pseudocode has not been materialized into standalone `raw/` leaf files — it currently only exists embedded in the shared `open_path` file and in the live IDB. This reduce session did not have producer write-authorization (claim-first + owner-gate not performed) to create new raw files, so this is left as an explicit next-producer-step rather than done silently.
- The apparent duplicate `Serialize for VoiceWorkspacePayload` implementation (`workspace/serialize_2` vs `models/serialize_VoiceWorkspacePayload`, two different addresses) is unresolved.

### Should-not-action items (unchanged from 2026-07-25, still apply)

- Do not promote any command to `consumerStartReady=true`/`strictImplementationUse=true`/`readyToImplement=true` on the strength of this package — confirmed again this pass; even the 4 newly-resolved commands stop short of full dim3/dim4/dim6 closure.
- Do not infer Windows dim3/dim4/dim5-parity/dim6 status from `macos-1.2.3-voice/`.
- Do not treat this pass's `asr/` discovery as resolving the other 5 macOS-only submodules (`voice_permissions`/`overlay`/`watchdog`/`aliyun_asr::connect`/serde-trait-glue bucket) — those remain Unknown/product_decision, unchanged.

### Conflicts with AGENT.md

None — still no `reviews/AGENT.md` in this package (single-reviewer pass, same posture as 2026-07-25).

### Compliance note (this pass)

Same posture as the 2026-07-25 note above: authorized internal analysis of the operating entity's own product line; all evidence/conclusions stay within the internal SMB volume; the live IDA MCP calls this session were read-only verification (no binary patches, no IDB writes); nothing in this package is intended for external/public distribution (skill red-line 23).
