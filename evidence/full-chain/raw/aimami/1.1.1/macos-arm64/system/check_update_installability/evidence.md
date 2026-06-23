# evidence.md — check_update_installability (AiMaMi 1.1.1 macOS ARM64)

Session: wf-aimami111-delta-20260616 | Machine: <本地机器> | Date: 2026-06-16
Owner VA: 0x10055a520 | Symbol: codexmate_lib::platform::update::check_update_installability::h52e962388544d063

---

## ## Confirmed

1. **Owner VA**: `0x10055a520` confirmed via `func_query {"name_regex":".*check_update.*"}` → demangled symbol match `codexmate_lib::platform::update::check_update_installability::h52e962388544d063`, size=0x81e (2078 bytes), `has_type=true`.

2. **Dispatcher caller**: single xref from `codexmate_lib::run::{{closure}}::{{closure}}::h7cfd9a18cc906f52` @ `0x100313ef0` — Tauri IPC async closure calls owner directly via `check_update_installability::h52e962388544d063(v16)`.

3. **Translocation detection (inlined)**: string needle `/AppTranslocation/` (18 bytes) confirmed at `0x1011519EA` via `get_bytes` (`0x2f 0x41 0x70 0x70 0x54 0x72 0x61 0x6e 0x73 0x6c 0x6f 0x63 0x61 0x74 0x69 0x6f 0x6e 0x2f`). Applied via `is_contained_in` — inlined from separate helper `is_app_translocation_path` that existed at `0x100578020` in 1.0.9.

4. **`0x73656D756C6F562FLL` = little-endian `/Volumes` (8 bytes) + `0x2F`=`/` at byte 8 → exact 9-byte prefix match for `<macOS卷路径前缀>`. Applied to both exe path and candidate app_path.

5. **xattr probe**: `Command::new` with literal fused string at `0x101151971` (contains `"xattr"` len=5 substring), followed by `Command::arg("-p", 2)` + `Command::arg("com.apple.quarantine", 20)` + `Command::arg(app_path, len)` → `Command::output()` → exit code determines `quarantine_cleared`.

6. **Status tag strings**: `"read_only_location"` (17 bytes @ `0x1011519FC`), `"app_translocation"` (17 bytes @ `0x101151A0E`) confirmed via `get_bytes`.

7. **Response struct layout (75 bytes)**: confirmed from pseudocode: `*(_BYTE *)(result + 72) = can_install`, `*(_BYTE *)(result + 73) = is_translocation`, `*(_BYTE *)(result + 74) = quarantine_cleared`; options use `0x8000000000000000` None sentinel at +24 and +48.

8. **behavior diff vs 1.0.9**: functional behavior IDENTICAL — same translocation needle, same <来源位置>`is_app_translocation_path` helper. Migration gate: `migrated_no_behavior_diff`.

9. **Call-tree depth**: 4 levels; terminates at OS syscall (`fork+exec` for xattr), stdlib leaves, response serialization, and drop destructor. `Command::output` → `spawn` → OS fork/exec (depth 4).

10. **String pool absent for "check_update_installability"**: `find_regex("check_update_installability")` → 0 matches. IPC routing is pure Tauri closure dispatch (no string-table routing in 1.1.1), same as 1.0.9.

11. **can_install semantics**: `!(is_translocation | is_volumes_read_only)` — binary OR of the two bool flags, negated.

12. **current_exe() Err path**: detected via `if (__OFSUB__(-v62, 1))` sentinel; returns `status_tag="ok"`, all Option fields None, `can_install=false`, `is_translocation=false`, `quarantine_cleared=false`.

---

## ## Inferred

1. **is_contained_in applies to BOTH paths**: pseudocode shows `from_utf8_lossy + is_contained_in` called twice — once for exe path, once for candidate app_path. Both must be non-translocation for `is_translocation=false`.

2. **"ok" tag provenance**: `anon_c7777ab3e3e082d25560615475f0500f.469` at `0x101150af4` — 2-byte string ("ok"), referenced in fallback branches (LABEL_9, LABEL_42).

3. **xattr command construction**: `Command::new` receives fused pool string at offset+5 for "xattr" (pool content: `"unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistremovedev.aionsale.auto-switchxattr-pcom.apple.quarantine"` — "xattr" is the 5-char prefix starting at `"xattr-pcom..."` after `"-p"` parsing). Actually: looking at direct string literal `"xattr-pcom.apple.quarantine"` with arg 5 = likely `Command::new` takes first 5 bytes = `"xattr"`. The `-p` and `"com.apple.quarantine"` are passed as separate Command::arg calls.

4. **macOS-specific logic**: `/AppTranslocation/` and `<macOS卷路径前缀>` checks are macOS filesystem concepts; this function has no Windows equivalent behavior (translocation is macOS-only). Windows behavior unknown.

5. **quarantine_cleared naming is inverted**: `exit_code==0` from `xattr -p` means the quarantine attribute IS PRESENT (xattr read succeeded). The field name is misleading — `quarantine_cleared=true` actually means quarantine attribute exists, not that it was cleared.

---

## ## Unknown

1. **frontend_ccf**: Frontend control flow (UI trigger, invoke wrapper, param assembly) not evidenced in this pass. `find_regex` shows no `check_update_installability` string in 1.1.1 binary (same as 1.0.9). Accepted as `accepted_unknown` per 1.0.9 baseline pattern.

2. **IPC command name in rodata**: command name string not found in binary rodata (`find_regex` → 0 hits). Routing confirmed only via Tauri closure dispatcher decompile. accepted_unknown — function confirmed via demangled symbol.

3. **Windows platform evidence**: Windows 1.1.1 not analyzed in this session. Must not infer from macOS. Windows behavior status: Unknown.

4. **test / acceptance mapping (dim6)**: Not in scope for production-side reverse pass. Blocked for `readyToImplement` promotion.

5. **exact "ok" tag string address in 1.1.1**: inferred from anon reference pattern; not directly byte-confirmed in this session (same string used in multiple fallback branches).

6. **xattr -p vs xattr read semantics on non-.app paths**: behavior when candidate app_path is not a valid .app (edge case). Inferred: `quarantine_cleared=false` (xattr exit nonzero for nonexistent attribute).

7. **frontend field name mapping**: how the 75-byte struct is serialized to JSON for the frontend (field names may differ from offset labels above). Inferred from 1.0.9 baseline but not re-confirmed in 1.1.1 frontend bundle.
