# pseudocode — get_system_info (AiMaMi 1.1.8, windows-x64)

**No owner function exists to decompile.**

No C pseudocode is provided in this leaf because no owner VA could be located for
`get_system_info` on windows-x64 1.1.8, despite 5 independent live/recorded search methods
(string-pool `find_regex`, symbol-table `func_query` by exact name and by module-path substring,
a full-image raw-byte `find_bytes` hex scan, and this session's own earlier STAGE1 owner-map
discovery pass). See `../evidence.md` for the complete Confirmed/Inferred/Unknown breakdown and
`../gate-report.json` for the fake-wall anti-cheat `recovery_attempts` record.

This is **not** an `accepted_unknown`/`genuine_ceiling` decompile-depth finding (there is no
partially-decompiled function body to speak of) — it is a plain, exhaustively-confirmed absence of
the command's dispatch entry point on this specific platform/version binary. Do not treat this file
as evidence of a decompile failure; treat it as evidence that there is nothing on this platform's
binary to decompile.

For contrast, the macOS 1.1.8 build **does** have a live owner symbol for this same command
(`__ZN13codexmate_lib8commands6system15get_system_info17h4766a9754b0ff435E` @ `0x1006c9110`,
per `intermediate/aimami/1.1.8/macos-arm64/version-delta/owner-map-118.jsonl` line 38), and the
1.1.1 windows baseline (out-of-scope migration-source citation only) had a confirmed working
dispatch chain rooted at `get_system_info_ipc_dispatcher_branch_sys_111@0x14001D130`. Both are
documented in `../evidence.md`.
