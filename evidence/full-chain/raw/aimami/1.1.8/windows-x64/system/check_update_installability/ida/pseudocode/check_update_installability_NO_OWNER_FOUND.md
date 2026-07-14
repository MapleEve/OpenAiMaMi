# [system win 1.1.8] check_update_installability — NO OWNER FOUND (accepted_unknown)

No candidate owner/dispatcher-case function was located for this command on Windows this round.
This file documents the negative-evidence search in lieu of a decompiled pseudocode body — see
`../../evidence.md` for the full write-up (Confirmed/Inferred/Unknown + 10 documented recovery
attempts, per red line 13 anti-fake-wall requirement).

## Session
- session: <审计会话>
- machine: <本地机器>
- binary: raw/binary/AiMaMi 1.1.8 win64.exe
- sha256_binary: f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10
- idb_path: <证据库> 1.1.8 win64.exe.i64
- 分析工具就绪门

## What was searched (all against the live 1.1.8 win IDB)

| # | Method | Pattern | Result |
|---|---|---|---|
| 1 | find_regex | `check_update_installability` (exact, 27 chars) | 0 hits |
| 2 | find_regex | `installability` | 0 hits |
| 3 | find_regex | `update_installability` | 0 hits |
| 4 | find_regex | `check_update` | 0 hits |
| 5 | find_bytes | full 27-byte ASCII pattern (space-hex, format validated against known-positive control `parse_aimami_deeplink` @ 0x14133b788 before use) | 0 hits |
| 6 | find_bytes | all 20 sliding 8-byte windows of the target string (exhaustive alignment coverage) | 18/20 individual windows hit, but resolve to two *different* coincidentally-overlapping strings, not a contiguous match of the full target (see evidence.md Inferred §3-4) |

## Why this is not a "fake wall" (假墙) case

The 假墙/genuine_ceiling taxonomy (drop_in_place shim, architecture-only budget rule, async-decompile-failed,
wrong VA, vtable dynamic dispatch, HTTP-terminal external-only) all presuppose a **real owner function
exists** and the analyst is failing to reach/decompile it. Here, no owner candidate address was ever
located in the first place — there is no VA to decompile, no async body to chase, no vtable to resolve.
This is an absence-of-dispatch-evidence finding, not a wall around a known target.

## Cross-reference: NOT reusing the 1.1.1 misattribution

`raw/aimami/1.1.1/windows-x64/restart_codex/ida/pseudocode/check_update_installability_launch_sys_111.c`
(VA 0x1407A02E0) exists under this exact name in the 1.1.1 corpus, but its own header/manifest.json/README.md
describe it as Phase 3 ("Launch") of the `restart_codex` command's call chain (locate + launch Codex.exe via
PowerShell), not an implementation of `check_update_installability` itself. Reusing that VA here would
perpetuate a likely prior-round misattribution; it is deliberately NOT renamed or claimed as this command's
owner in the 1.1.8 IDB. Flagged in evidence.md Unknown §4 for the session owner / skill maintainer to review
against REVERSE-STATUS.md.

## IDB writeback

No `rename`/`set_comments` call was made against any address for this command — there is no confirmed
owner VA to annotate. Per red line 13, fabricating an owner label here (including re-using the 1.1.1
misattributed VA) would be exactly the "标 accepted_unknown 没试破法 = 作弊" failure mode this rule exists
to prevent, applied in reverse: labeling *something* just to have a label is equally a fabrication.
