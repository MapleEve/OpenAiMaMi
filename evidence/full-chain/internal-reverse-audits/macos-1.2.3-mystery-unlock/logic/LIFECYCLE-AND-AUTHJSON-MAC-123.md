# Lifecycle + auth.json structure + data flow — macOS arm64 1.2.3 (understand-only, not an implementation recipe)

Scope note: this document fills the OUTPUT-SPEC `logic/` non-empty requirement for this bundle, mirroring the sibling `internal-reverse/audits/windows-1.2.3-mystery-unlock/logic/LIFECYCLE-AND-AUTHJSON-WIN-123.md` deliverable for the same cluster. Because this cluster is classified `tos_circumvention` (see `TOS-CLASSIFICATION.md`), this document deliberately stays at **behavioral/architectural description**, not a field-by-field construction recipe. It is NOT `logic/` in the implementation-basis sense — no `implementation_use` claim is made anywhere in this bundle, and `manifest.json`/`gate-report.json`/`data/task-plan.json` already lock `implementation_use=false`/`gate_accepted=false` permanently for every `tos_circumvention` symbol. This file adds no new IDA MCP evidence; it synthesizes the already-read raw pseudocode listed in `pointers/evidence-paths.md` (33/33 in-scope files read in the original 2026-07-24 pass) plus two of those files re-read directly this pass for VA-level grounding (`live_auth_state_0x10051a5b0.c`, `cleanup_0x100522a90.c`).

## 1. Lifecycle (macOS-confirmed)

State is tracked via two on-disk artifacts alongside the Codex-native auth file: a **marker file** (`router-unlock-auth-marker.json`, records "we installed a placeholder credential") and a **backup file** (the real credential, if any, saved before overwrite). `live_auth_state` (`0x10051a5b0`) reads the auth file at the `CodexPaths`-resolved location and returns a 4-value state:

- **0** — file exists, `fs::metadata` succeeds, `read_to_string`/`serde_json` parse succeeds, and the parsed JSON does **not** carry the `aimami_router_unlock_auth` marker key subtree (i.e. looks like it could be a real/foreign auth.json, or is otherwise not our own placeholder) — treated as "no confirmed placeholder present" in the caller's switch.
- **1** — same successful read/parse path, but the JSON key lookup on `"aimami_router_unlock_authlast_refresh"` (string-pool-concatenated key name; the `index_into` call resolves the `aimami_router_unlock_auth.last_refresh` field) resolves and its discriminant byte differs from the case-0 result — distinguishes "our own placeholder, still fresh" from other states via the `2 - v6[1]` branch computation.
- **2** — reached when the metadata check itself fails (`v8 != 0`, i.e. `fs::metadata` errored, most commonly file-not-found) — `drop_in_place` on the `Result<Metadata,Error>` and early-return `0`... (Note: in `live_auth_state` the metadata-error path returns state `0`, not `2`; state `2` in the *caller* `cleanup`'s switch is reached via the `LABEL_12` no-op branch when `live_auth_state` is not `0`/`1`/`3`, i.e. the "already the real credential, do nothing" state observed at the call site — recorded here as an open item, see §4.)
- **3** — `read_to_string` fails (`__OFSUB__(-v8,1)` path) or `serde_json::de::from_trait` fails to parse (`(_BYTE)v14 == 6`, i.e. the serde error discriminant) — **Corrupt/unreadable** state.

`cleanup` (`0x100522a90`) switches on `live_auth_state(a2)` twice (once per marker-file variant read earlier in the function) and drives:

- **case 0** — reads the cleanup-backup (`read_cleanup_backup`), and if a real backup exists, `atomic_write::write_atomic_with_mode` restores it to the auth-file path (real-credential restore branch), then removes marker/backup files via `remove_file_if_exists`.
- **case 1** — same restore-or-noop logic, gated by whether the auth file's own metadata check still succeeds (handles a race where the file was removed externally between checks).
- **case 2** — no-op (`v21/v25 = 0`), falls straight to marker/backup removal only — this is the "nothing to restore, just tidy up" branch reached when `live_auth_state` didn't return 0/1/3.
- **case 3 (Corrupt)** — logs a warning (`"[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanup"` / the "orphaned ..." variant on the second switch), explicitly does **not** delete anything, and returns an `Ok` result flagging "preserved, not destroyed" — a defensive fail-safe so an unreadable file is never silently clobbered.

`install_virtual_unlock_auth` (`0x100520210`) is the write-side counterpart (not re-read this pass; already fully described behaviorally in `README.md` §结论摘要 and `TOS-CLASSIFICATION.md` row 1): checks `auth_is_usable_real_oauth`; if false, backs up any existing file, builds the placeholder JSON via `build_unlock_auth_json` (using `make_unsigned_jwt` for the access/refresh token fields), writes it to the auth-file path, and records the marker. `ensure_auth_for_router` (`0x10051fd50`) and `prepare_auth_for_router` (`0x10051fff0`) are the two dispatch layers above `install_virtual_unlock_auth`/`cleanup` described in README's Per-target Result Matrix; `restore_real_auth_for_router` (`0x100520eb0`) is the explicit restore-only entry point used when the router is turned off.

`legacy_virtual_auth::cleanup` (3 variants, `0x10065fad0` + 2 closures) implements the same conceptual state machine against a differently-named marker (`virtual-auth-marker.json` per TOS-CLASSIFICATION.md's string evidence), confirming it is a superseded generation kept only for migration-era cleanup, not an actively-installed path in 1.2.3 — same conclusion the Windows sibling package independently reached for its own `legacy_virtual_auth::cleanup_0`.

## 2. auth.json structure (macOS-confirmed)

See `README.md` §结论摘要 and `TOS-CLASSIFICATION.md` for the full narrative; per that TOS-CLASSIFICATION document's own stated scope boundary, this file does **not** restate a field-by-field JSON schema or byte-offset table for the placeholder credential. Summary only: the file impersonates the shape of a real OpenAI/ChatGPT-issued local credential (`chatgpt_account_id`, `chatgpt_account_user_id`, `chatgpt_user_id`, `chatgpt_plan_type`, `access_token`, `refresh_token`), populated with a fixed placeholder identity (`niuniu@woyao.pro`), with `access_token`/`refresh_token` built as unsigned JWTs (`make_unsigned_jwt`), and the binary's own embedded string self-discloses `"AiMaMi router unlock auth. This is not a real OpenAI account."` — identical in kind (not byte-identical field ordering, not verified) to the Windows-side independent finding in the sibling package.

## 3. Data flow (the part most relevant to "是否对外发送")

```
[no usable real OAuth login detected — auth_is_usable_real_oauth() == false]
        │
        ▼
install_virtual_unlock_auth (0x100520210)
        │  backs up existing auth.json (if any) → local backup file
        │  builds placeholder JSON in-memory (build_unlock_auth_json / make_unsigned_jwt)
        │  writes placeholder JSON → local auth-file path (atomic_write::write_atomic_with_mode)
        │  writes marker file recording "placeholder active" (local, router-unlock-auth-marker.json)
        ▼
[Codex-native login-state check reads auth.json from disk]
        │  (this read happens OUTSIDE the 33 files read this pass —
        │   presumed to be inside the bundled/adjacent Codex CLI component,
        │   not independently confirmed this pass; same caveat as the Windows sibling)
        ▼
[login-state check locally accepts the file as "logged in"]
        │
        ▼
[this app's own relay/router intercepts subsequent traffic,
 forwards to the user's configured provider — NOT to openai.com]
```

Every arrow above that touches `auth.json`/marker/backup content is **local filesystem only** (`atomic_write::write_atomic_with_mode`, `remove_file_if_exists`, `read_marker`, `read_cleanup_backup`, `std::fs::metadata`/`read_to_string`/`remove_file`). Across the 33 functions read in the original pass plus the 2 re-read this pass, **no call site invokes an HTTP/socket/network primitive** with this data — this matches the finding already recorded in `README.md` §Per-target Result Matrix (网络调用 column = 否 for every `tos_circumvention` row) and independently re-confirmed for the Windows binary in the sibling package. The placeholder credential's bytes are never transmitted to `auth.openai.com` or any other network endpoint by the functions in this cluster; its only "audience" is whatever local process later reads the file from disk.

Caveat (same scope boundary as `AI.md` unknowns and the Windows sibling's logic file): this pass did not trace the *consuming* side (the Codex-native login check itself, or what happens once the relay/router takes over real traffic) — that is different code (`core::relay::router*` handler chain / actual Codex CLI component, if bundled) outside this cluster's 33 read files. The claim "never sent to OpenAI" is scoped strictly to the construction/lifecycle of the fake credential file itself, not the entire relay/router subsystem's network behavior.

## 4. Open item for a future reviewer

`live_auth_state`'s case-2 semantics were reconstructed from the caller (`cleanup`)'s switch behavior (no-op/"already correct, nothing to restore") rather than from a positive in-function return-value trace for `LOBYTE(v1) = 2` (the function's only two explicit `return` statements produce `0` (metadata-error path) and the `v1` value falling out of the `2 - v6[1]` computation or the parse-failure `3` — a direct `return 2` literal was not located in this file). This is flagged here rather than silently assumed; it does not change the `tos_circumvention` classification or any gate value in this bundle (the entire cluster is `permanentlyBlockedProductDecision` regardless of state-machine micro-detail), but a future pass intending to document this cluster more precisely (still understand-only, per `implementation_policy=understand_only`) should re-derive the exact case-2 trigger condition directly rather than inferring it from caller context.
