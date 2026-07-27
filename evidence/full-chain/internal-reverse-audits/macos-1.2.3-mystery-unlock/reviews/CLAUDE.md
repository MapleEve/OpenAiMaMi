# Claude (CC) Independent Review — mystery-unlock cluster

Reviewer: Claude subagent (this task), single-pass (no independent second AI cross-review performed this round — `reviews/AGENT.md`/`reviews/CROSS-REVIEW.md` not produced; if a second independent pass is done later, populate both and reconcile here).

## Method

Read every `.c` pseudocode file under `router_unlock_auth/`, `legacy_virtual_auth/`, `is_aimami_managed_virtual_auth`, and the two `codex_diagnostic` residue check/fix files directly (not summaries). For `mystery_unlock_grants`, read all 4 pseudocode files plus cross-checked against pre-existing `backend-baseline` notes that already covered this symbol pair — cross-check was consistent, no correction needed.

## Key evidence that drove the tos_circumvention call

- `build_unlock_auth_json` literal strings: `chatgpt_account_id`, `chatgpt_account_user_id`, `chatgpt_user_id`, `chatgpt_plan_type`, `access_token`, `refresh_token`, `axonhub_note`, and a fixed placeholder identity `niuniu@woyao.pro` / `"AiMaMi router unlock auth. This is not a real OpenAI account."` — the last string is the vendor's own internal admission that the artifact is not real.
- `make_unsigned_jwt` builds base64url header/payload segments joined by `.` with no signature — an unsigned JWT shape mimicking a real OAuth access/refresh token.
- `install_virtual_unlock_auth` writes this to the `CodexPaths`-resolved auth file location, after first backing up any existing real credential, and records a marker file for later rollback.
- `is_aimami_managed_virtual_auth` string: `"auth.json contains AiMaMi managed virtual auth; not a real account"` — again the vendor's own code comments/error strings confirm intent: the local client is meant to *believe* this is a legitimate ChatGPT login when it structurally is not.

This is not an inference from naming alone — the literal strings inside the vendor's own compiled binary describe the mechanism as "not a real account" while building something shaped exactly like a real one. That is the basis for `tos_circumvention`, not just the function name.

## Key evidence that drove the normal_feature call (mystery_unlock_grants)

- No network/HTTP call sites in the read call-tree.
- No OAuth/token/account-identity fields; the DTO is a time-filtered local grant list.
- Existing `backend-baseline/models-repository-baseline.md:81` independently arrived at the same "本地隐藏功能开关" reading before this pass; this pass's fresh read of the pseudocode agrees.

## What I did not do (by design)

- Did not write field-by-field JSON schema, byte offsets, or a reproducible construction recipe for the tos_circumvention cluster in any of README/SYSTEM-DIFF/TOS-CLASSIFICATION — those files describe behavior and classification, not a build guide.
- Did not pursue frontend CCF for cluster A (would only serve an implementation that is not going to happen).
- Did not touch Windows artifacts this pass.

## Open item for a future reviewer

If someone re-opens this package intending to implement `mystery_unlock_grants` for Polaris, they should re-derive `Repository::mystery_route_allowed` independently rather than trusting the carried-over baseline note about its unresolved 18-char branch, since that note was not re-verified this pass.
