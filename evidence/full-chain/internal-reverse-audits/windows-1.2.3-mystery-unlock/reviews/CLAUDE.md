# Claude (CC) Independent Review — mystery-unlock cluster, Windows x64 1.2.3

Reviewer: Claude subagent (this task), single-pass (no independent second AI cross-review performed this round — `reviews/AGENT.md`/`reviews/CROSS-REVIEW.md` not produced this pass; if a second independent pass is done later, populate both and reconcile here).

## Method

Read every `.c` pseudocode file under `raw/aimami/1.2.3/windows-x64/{router_unlock_auth,legacy_virtual_auth}/ida/pseudocode/` directly, in full (not summaries) — 19 files, 19/19. Did not run new IDA MCP calls (none available to this subagent's toolset; this is a pure read+consolidate pass over already-fallen evidence, consistent with the task's stated nature). Cross-checked completeness against `intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl` before writing conclusions, not after.

## Four-angle honest self-check (tier statement)

**A — function enumeration completeness (not string-pool-dependent)**: Cross-checked module names `codexmate_lib/core/relay/router_unlock_auth` and `codexmate_lib/core/relay/legacy_virtual_auth` against `WIN-APP-FUNCTION-INVENTORY.jsonl` (a census independent of string-pool search — built via panic-Location xref + call-graph propagation + tauri-command-name xref per its own methodology notes). Result: 12 + 7 = 19 rows, all now on disk, zero remaining `on_disk:false` rows for these two exact module names. **Pass** — full closure for these two module names specifically. Does NOT cover `core::auth::is_aimami_managed_virtual_auth` or `core::relay::codex_diagnostic` (different module names, out of this task's file scope, not claimed complete).

**B — frontend ipc-contracts.jsonl command-name diff**: `grep -icE 'router_unlock|virtual_auth' raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` → **0 hits**. No direct Tauri command named after this cluster exists in the Windows frontend IPC contract list. This matches the macOS sibling's identical negative result. (A broader grep including `mystery_unlock` returns 9 hits, but those are all `get_mystery_unlock_grants`/`merge_mystery_unlock_grants` — the unrelated `normal_feature` cluster — plus incidental full-line matches on unrelated commands' metadata fields, not this cluster.) **true_gaps=0** for this specific check, consistent with this cluster being invoked indirectly (through some higher-level relay/router-enable command) rather than having its own direct IPC entry point — same conclusion macOS reached independently.

**C — semantic keyword orphan scan**: Searched `WIN-APP-FUNCTION-INVENTORY.jsonl` for any module name containing `virtual_auth` beyond `legacy_virtual_auth` — none found. No orphan module name suggesting an un-covered sibling (e.g. a non-legacy `virtual_auth` directory) exists in the win-native census.

**D — manifest covered-targets vs census diff + orphan four-classification**: manifest.json's `scope` (19 named functions across 2 modules) matches 1:1 against the 19 census rows found in step A. No orphans to classify (already_in_canonical / local_outtake / different_machine_owner / truly_undone) — the set is closed and exhaustive for these two module names.

**Overall tier for this package**: `understand_and_classify`, honest — not claiming `consumerStartReady`/`strictImplementationUse`/`readyToImplement` for any target (all permanently blocked by product decision, not evidence gap). The four-angle check above validates evidence *completeness within the declared scope* (router_unlock_auth + legacy_virtual_auth module names only); it explicitly does not validate completeness for the two out-of-scope modules (`core::auth`, `core::relay::codex_diagnostic`), which remain honestly marked Unknown.

## Key evidence that drove the tos_circumvention call (Windows-native, read myself)

- `sub_14048FF80` (0x14048ff80): literal `qmemcpy`/immediate writes of `"chatgpt_account_id"`, `"00000000-0000-4000-8000-000000000001"`, `"chatgpt_account_user_id"`, `"chatgpt_user_id"`, `"user_id"`, `"chatgpt_plan_type"`, `"https://auth.openai.com"`, `"aimami-router-unlock"`, `"niuniu@woyao.pro"`, `"NIUNIU WOYAO"`, `"aimami-router-unlock-refresh-token"`, `"2026-06-01T00:00:00Z"`, `"aimami_router_unlock_auth"`, `"AiMaMi router unlock auth. This is not a real OpenAI account."` — the last string is the vendor's own internal admission that the artifact is not real, embedded IN the artifact itself.
- `sub_14048F130` (0x14048f130): builds base64url header/payload joined by `.`, no signature segment content beyond the two parts — an unsigned-JWT shape carrying `iss="https://auth.openai.com"` as a claim, i.e. a real third-party domain string asserted as issuer inside a credential that third party never issued or saw.
- `install_virtual_unlock_auth` (0x1404949c0): writes this to a location resolved via a path-join helper fed by two path-fragment constants (consistent with a Codex-native-auth-file path pattern), after backing up any pre-existing content and recording marker state for later rollback.
- `read_cleanup_backup` / `legacy_virtual_auth::read_user_owned_backup`: both explicitly reject backup content containing `aimami_router_unlock_auth=true` or an `OPENAI_API_KEY` value ending in the SIMD-compared `-unlock` suffix constant — i.e. the code itself distinguishes "our own fake" from "a real user credential" as a first-class concern, further evidence this is a deliberately engineered impersonation mechanism, not an incidental artifact.

This is not an inference from naming alone — the literal strings inside the vendor's own compiled Windows binary describe the mechanism as "not a real account" while building something shaped exactly like a real one, and the code takes active measures to prevent its own fake output from being mistaken for genuine user data on the restore path. That is the basis for `tos_circumvention`, independently re-derived from Windows-native evidence before I cross-checked the macOS sibling package.

## What I did not do (by design)

- Did not write field-by-field JSON schema, byte offsets, or a reproducible construction recipe for this cluster anywhere in README/SYSTEM-DIFF/TOS-CLASSIFICATION/logic/ — those files describe behavior and classification, not a build guide (AI.md's field table is descriptive/confirmatory of what's already public in the macOS SPEC document, not a new implementation recipe).
- Did not pursue frontend CCF beyond the negative ipc-contracts.jsonl check (would only serve an implementation that is not going to happen).
- Did not read `core::auth::is_aimami_managed_virtual_auth` or `core::relay::codex_diagnostic` residue check/fix on Windows — genuinely out of the task's stated file scope (router_unlock_auth/legacy_virtual_auth/virtual_auth directories), left honestly as Unknown rather than guessed at.

## Open item for a future reviewer

- The conflict with `goal-aimami-122/SPEC-virtual-auth-mode.md` (which frames this same cluster as a legitimate feature to enhance) is unresolved by this package. A future reviewer/maintainer needs to decide which framing governs Polaris's actual product decision; this package's role was to read the Windows evidence honestly and report what it independently concludes, not to arbitrate between the two documents.
- If someone wants full dim1-6 closure for the `router_unlock_auth`/`legacy_virtual_auth` cluster despite the SKIP decision (e.g. for a security-audit purpose unrelated to implementation), they would need: Windows decompile of `sub_14048ED60` (the state-getter callee), and Windows evidence for `is_aimami_managed_virtual_auth`/`codex_diagnostic` residue check-fix, none of which this pass produced.
