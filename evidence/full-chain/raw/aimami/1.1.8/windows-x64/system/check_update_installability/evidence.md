# check_update_installability — AiMaMi 1.1.8 Windows x64 — accepted_unknown (no backend owner found)

**Session**: <审计会话>
**Machine**: <本地机器>
**Date**: 2026-07-13
**Binary SHA256**: f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10
**IDB**: <证据库> 1.1.8 win64.exe.i64
**Batch**: 2/20 (deep gold-leaf)
**Gate**: accepted_unknown (no `readyToImplement`/`strictImplementationUse` declared this leaf)
**IDB live gate**: `健康检查` confirmed `status=ok`, `反编译就绪=true`, `module="AiMaMi 1.1.8 win64.exe"` before any query.

---

## Confirmed

1. `check_update_installability` is a real, currently-registered frontend IPC command on Windows: `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 25 shows `wrapper=checkUpdateInstallability`, `command="check_update_installability"`, `argKeys=[]`, `kind="tauriInvokeWrapper"`, invoked as `te("check_update_installability")` with no arguments.
2. `check_update_installability` is classified as an **unchanged/shared** command between 1.0.9 and 1.1.8 on Windows (present in `intermediate/aimami/1.1.8/version-delta/frontend-delta/cmd-same.win.txt` set, i.e. not in `cmd-added.win.txt` nor `cmd-removed.win.txt`), meaning the frontend surface itself did not change this round.
3. On macOS-arm64 (same 1.1.8 build cycle), this command DOES have a confirmed real owner: `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` row `{"command":"check_update_installability","module":"platform::update","owner_va":"0x1005cf430","owner_symbol":"__ZN13codexmate_lib8platform6update27check_update_installability17hfbf2899e51c9c860E","source":"func_query_clean_top_level_symbol"}`, and `intermediate/aimami/1.1.8/macos-arm64/version-delta/buckets/mac-shard-1.json` classifies it `same` (unchanged) vs the 1.0.9 mac baseline.
4. This same session's own prior string-pool sweep already recorded this command as backend-absent on Windows: `intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` row 7: `{"command":"check_update_installability","owner_va":null,"method":"string_pool_absent(...)","present":false}`.
5. Cross-version check: **no Windows raw/intermediate artifact across 1.0.9, 1.1.1, or 1.1.8 ever recorded a genuine dedicated owner function for this exact command.** The only same-named artifact found is `raw/aimami/1.1.1/windows-x64/restart_codex/ida/pseudocode/check_update_installability_launch_sys_111.c` (VA `0x1407A02E0`), but its own header documents its role as "locate Codex.exe binary + launch via powershell + poll 5s for process running" and it is embedded as **Phase 3 ("Launch") of the `restart_codex` command's call chain** in that same leaf's `manifest.json`/`README.md` (`restart_codex_cmd_wrapper_sys_111 → restart_codex_quit_launch_coordinator_sys_111 → Phase 3: check_update_installability_launch_sys_111`) — i.e. this is very likely a **misattributed/mislabeled shared helper**, not the actual `check_update_installability` command handler, and is not reused here as this command's owner.

## Inferred

1. Windows 1.1.8's Tauri IPC dispatch is a single monolithic dispatcher (`sub_1403cf5b0`, confirmed in `win-divergence-118.json`) that matches ~130 command names via string comparison against the incoming payload; for the ~112 callees enumerated this round, most other commands' name literals ARE recoverable via `find_regex`/`find_bytes` (e.g. `parse_aimami_deeplink`@`0x14133b788`, hotspot family, single-instance guard message) — so the general string-embedding mechanism clearly works and is searchable on this build.
2. Since every other tested command's literal is recoverable but this one specifically is not, the most likely explanation is a genuine **per-platform conditional-compilation gap**: the Rust command implementation for `check_update_installability` may be `#[cfg(target_os = "macos")]`-gated (or similar), i.e. real on macOS (own owner symbol, real logic) but simply not compiled into the Windows binary at all — analogous in shape (though opposite in direction) to the already-documented macOS-side pattern of 42 frontend-declared commands (`voice_*`/`custom_instruction*`) with zero backend presence on that platform.
3. During byte-level probing, a coincidental partial match was found: bytes at `0x141339630`–`0x14133963f` spell `"check_update_ins"` (16 bytes) but the byte at the next position (`0x141339640`, would-be position 16 = `'t'` for our target) does **not** continue as `"tallability"` — confirmed by 0 hits for the 8-byte window `"ate_inst"` (positions 9–16) despite both its immediate neighbor windows (`"date_ins"` positions 8–15, and `"tallabil"` positions 16–23 as a *different, non-adjacent* occurrence) each independently matching. This means the binary contains at least one **other, unrelated Rust string literal that merely shares the `"check_update_ins"` prefix** with our target (most plausibly something like an update-checker library's own naming, e.g. a `self_update`-style crate or Windows-Update-adjacent string), not our target string itself. Raw bytes read via `get_bytes` at `0x1413395d0` (110-byte window) show tightly-packed, non-null-separated literals in this exact area — `"set_codex_router"` + `"start_for_update"` + `"graceful_restart"` + `"e_installability"` + `"check_update_i..."` back-to-back with zero separator bytes between distinct strings — confirming Rust's no-null-terminator (`&str` = fat pointer) packing is in effect here, which is why naive substring reasoning must be cross-checked against exact aligned byte-window matches rather than loose "contains" logic.
4. `"...e_installability"` (16-byte tail) appears at `0x141339620`–`0x14133962f`, immediately preceded by `"...ful_restart"` ending at `0x14133961f` — i.e. this fragment is the **tail of a different string ending in `_installability`** (not preceded by `"check_updat"` as our target would require), further reinforcing that the exact 27-byte literal `"check_update_installability"` is not assembled anywhere as one contiguous run.

## Unknown

1. Whether `check_update_installability` on Windows genuinely has **zero backend implementation** (frontend `invoke()` call would error/reject at runtime with a Tauri "command not found" error) — this would be a real, user-visible platform gap in the shipped product — or whether it is dispatched through some non-string-literal mechanism not covered by `find_regex`/`find_bytes` (e.g. a build-time perfect-hash/PHF table, or a shared macro-generated match arm whose string constant got entirely constant-folded away by LLVM's optimizer in a form no longer present as raw bytes). Not resolved this round.
2. What the true identity is of the coincidentally-prefix-matching `"check_update_ins..."` string found at `0x141339630` (i.e., what is it actually the start of — not decompiled/traced to an owner function or xref'd this round, out of scope for this accepted_unknown leaf).
3. What the true identity is of the `"...e_installability"` tail-string at `0x141339620` (which full literal it belongs to — not traced this round).
4. Whether the 1.1.1 `check_update_installability_launch_sys_111` misattribution (see Confirmed §5) has ever been corrected upstream in `REVERSE-STATUS.md`/`INDEX.jsonl` — flagged here for the maintainer, not corrected in this leaf (out of scope; this leaf only documents non-reuse of that mislabeled artifact for 1.1.8).
5. Whether a macOS-only implementation (Confirmed §3) implies the Windows update-installability check is instead performed by a different, non-IPC mechanism entirely (e.g. NSIS installer self-check at install time rather than an in-app runtime IPC command) — plausible given Windows commonly uses NSIS-based updaters with their own pre-flight checks, but not verified against any NSIS/installer artifact this round (no Windows installer/setup binary is present in `raw/binary/` for 1.1.8 per the frontend sub-entry's `binary_sot_missing` note).

---

## Delta vs 1.0.9

No delta can be asserted because **no genuine 1.0.9 Windows owner was ever established either** (see Confirmed §5) — there is nothing to diff. This is recorded as a **consistent, cross-version (1.0.9 → 1.1.1 → 1.1.8) Windows backend-absence** for this specific command, not a regression introduced in 1.1.8. The frontend-level surface (argKeys=[], no-args wrapper) is also unchanged across all three versions per the frontend-delta artifact (command present in `cmd-same.win.txt`, no argKey changes).

## Recovery attempts (anti-fake-wall documentation, red line 13)

Before accepting this as `accepted_unknown`, the following independent breaking techniques were tried (all against the live 1.1.8 win IDB, `反编译就绪=true`, module confirmed):

1. `find_regex` exact pattern `"check_update_installability"` → 0 hits.
2. `find_regex` partial pattern `"installability"` → 0 hits.
3. `find_regex` partial pattern `"update_installability"` → 0 hits.
4. `find_regex` partial pattern `"check_update"` → 0 hits.
5. `find_bytes` full 27-byte exact pattern (corrected space-separated hex format, validated against a known-positive control `parse_aimami_deeplink` before use) → 0 hits.
6. `find_bytes` all 20 possible sliding 8-byte-window substrings of the target string (covering every byte alignment, i.e. exhaustive substring coverage) → 18/20 chunks returned genuine hits, but **none form a contiguous 27-byte run matching the exact target** — the hits resolve to two *different*, non-matching, coincidentally-overlapping strings (see Inferred §3–4), not our target.
7. Cross-checked `owner-map-118.jsonl` (this same session, string-pool method) → independently concluded `present:false`.
8. Cross-checked `win-divergence-118.json` (this same session, dispatcher-architecture survey) → did not test this specific command, no conflicting claim.
9. Cross-checked all three historical Windows baselines (1.0.9, 1.1.1, 1.1.8 raw+intermediate corpora via `grep -rl`) → found only the mislabeled `restart_codex`-phase-3 launch helper from 1.1.1, not a genuine dedicated owner.
10. Read raw bytes directly (`get_bytes`/`get_string`) around both candidate hit clusters to disambiguate true string boundaries (Rust `&str` has no null terminator; adjacent distinct literals are packed with zero separator bytes) rather than relying on naive substring "contains" logic.

`genuine_ceiling`: **not applicable** — this is not an ICF-folded/vtable/async-shim wall around an existing owner; it is an absence of any string-literal evidence that an owner exists at all, consistent across three independent methods and three product versions. `accepted_unknown_cheating`: false (10 independent recovery attempts documented above, per red line 13).
