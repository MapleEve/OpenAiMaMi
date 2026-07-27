# System Diff — AiMaMi maintenance domain (rebuild_registry / clean / load_snapshot)

This file documents both a platform note (Windows-only, no macos-1.2.3-maintenance sibling package exists to diff against) and a version-over-version note (1.0.9 -> 1.2.3, Windows), since this package's most notable finding is a version-over-version evidence delta, not a platform delta.

## Platform Artifacts

- Binary: PE AMD64, `windows-x64`, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (same binary batch as `windows-1.2.3-relay`/`windows-1.2.3-accounts`, cross-checked against those packages' recorded hash).
- No macOS 1.2.3 sibling package exists for this specific 3-command domain (`macos-1.2.3-maintenance` is not present in `internal-reverse/audits/`; the existing `macos-1.0.9-maintenance` covers a DIFFERENT command pair -- see below). This is a genuine absence, not searched exhaustively for macOS 1.2.3 raw evidence this pass.

## Version Delta: 1.0.9 -> 1.2.3 (Windows), the headline finding of this package

- **`rebuild_registry` gained a policy parameter.** 1.0.9 Windows evidence (`raw/aimami/1.0.9/windows/system/rebuild_registry/evidence.md`) documents the core impl as `rebuild_registry_impl_core_sys@0x140558780` taking no policy-like argument (registry rebuild is unconditional: read auth.json + snapshots dir, rebuild, persist). The 1.2.3 Windows deep-leaf is named `rebuild_registry_with_policy` and takes signature `(char *a1, _QWORD *a2, unsigned __int8 a3, __int64 a4)` -- an added `unsigned __int8 a3` parameter that gates branches inside the function body (multiple `if (v352)` checks derived from `a3`, e.g. controlling whether a second `auto_switch`-adjacent registry pass runs). **The semantics of this policy byte are NOT derived this pass** -- only its existence and its use as a branch condition are confirmed by reading the pseudocode. This is a genuine, evidence-grounded product behavior change between 1.0.9 and 1.2.3, not a naming/attribution artifact (the deep-leaf .c file's own header comment independently anchors it to `mac codexmate_lib::core::repository::Repository::rebuild_registry_with_policy` via cross-platform string-signature match, i.e. macOS 1.2.3 independently has the same renamed/re-signatured function, corroborating this is a real cross-version product change rather than a Windows-only naming quirk).
- **`rebuild_registry`'s error-retry behavior is new or newly visible.** 1.2.3 evidence shows an explicit 3-retry loop (`if (v12 >= 3) { ... "auth.json ownership kept changing while rebuilding the account registry" ... }`) that has no analog described in the 1.0.9 Windows evidence.md (which describes a single-pass read-rebuild-persist flow with only a generic "pre-check guard" error path, no retry-loop language). Whether this retry logic existed in 1.0.9 but was simply not surfaced in that pass's evidence.md, or is genuinely new in 1.2.3, is **not determined this pass** (no live-IDA diff of the 1.0.9 binary was performed here; recorded as Unknown, not asserted either way).
- **`clean` has a confirmed evidence regression.** 1.0.9 Windows had a complete strictImplementationUse-tier evidence file (`raw/aimami/1.0.9/windows/system/clean/evidence.md`, dim1-5 all "Confirmed", only dim6 missing) describing `clean_handler_sys@0x140280DE0` -> `clean_impl_core_sys@0x140568340` -> `accounts_write_back_sys@0x140558110`, with a documented 3-field response DTO (`authBackupsRemoved`/`registryBackupsRemoved`/`staleEntriesRemoved`). At 1.2.3, an exhaustive filename + symbol-string search across the entire `raw/aimami/1.2.3/windows-x64/` tree returns **zero** matching files or fragments. Three explanations are possible and NOT distinguished this pass: (a) the command was removed/renamed in 1.2.3 (yet the frontend `ipc-contracts.jsonl` still defines `clean:()=>re("clean")`, so the frontend API surface still exists -- arguing against outright removal), (b) the backend function was folded/ICF-merged into another dispatcher the way `get_codex_router_auth_readiness` was in the relay package (a real, precedented pattern in this binary), or (c) the function exists but under a `sub_XXXXXXXX` name that a targeted live-IDA pass (command-name string xref, since the string `aClean`/`"clean"` likely still exists in the 1.2.3 binary's string pool per the frontend evidence) would resolve. This package does **not** attempt to resolve which; it is recorded as `blocks_start`, a genuine reverse-engineering gap for a future producer pass with live IDA access, not a product decision.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- `rebuild_registry`: wrapper (`commands/`) + 2-deep leaf chain (`repository/rebuild_registry_with_policy` -> `repository/persist_registry`) all present, 0 truncation. See `logic/WIN-MAINTENANCE-DISTILLED-1.2.3.md`.
- `clean`: no Windows 1.2.3 evidence at all (see Version Delta section above).
- `load_snapshot`: covered in `../windows-1.2.3-accounts/`, not re-derived here.

## Interface / Error / Boundary

`rebuild_registry`'s one confirmed error path (3-retry-then-fail) is documented above. No `clean` interface evidence exists for 1.2.3. Not independently extracted for either command beyond what's in README.md.

## Gate Leaf

`rebuild_registry` blocked-on-dim1 (no confirmed real UI trigger element, same bar as `windows-1.2.3-accounts`'s `load_snapshot`/`logout`). `clean` blocked-on-dim1-and-dim2. See `gate-report.json`.

## Plugin / Capability

Not in scope for this maintenance-only package.

## OTA / Package

Not evaluated this pass.

## Resource / Binary Surface

`rebuild_registry`: 3 `.c` files on Windows 1.2.3 (vs 2 named functions documented in the 1.0.9 Windows evidence.md, which described the same 3-hop shape but did not preserve `persist_registry` as a separately-cited deep leaf by that exact name -- the 1.0.9 doc calls the final write-back step `accounts_write_back_sys@0x140558110`, a DIFFERENT symbol than 1.2.3's `persist_registry@0x14038fb30`; whether these are the same logical function under different VAs/names across versions, or genuinely different write-back paths, is **not determined this pass**).
`clean`: 0 files on Windows 1.2.3 (vs a complete 5-VA chain documented on Windows 1.0.9).

## Unknown

- `rebuild_registry_with_policy`'s policy-byte semantics: Unknown (existence confirmed, meaning not derived).
- `clean`'s 1.2.3 Windows backend owner: Unknown/blocks_start (see Version Delta section; three candidate explanations, none confirmed).
- Whether 1.0.9's `accounts_write_back_sys@0x140558110` and 1.2.3's `persist_registry@0x14038fb30` are the same logical function renamed, or different functions: Unknown, not determined this pass.
- macOS 1.2.3 evidence for this exact 3-command set: not searched exhaustively this pass (no `macos-1.2.3-maintenance` package exists; `macos-1.2.3-accounts` may have partial cross-reference for `load_snapshot` only, not checked here since that command is out of this package's primary scope).
