# check_update_installability — SAME-DEPTH-CONFIRM

## session: <审计会话> / machine: <本地机器>

### SAME-DEPTH-CONFIRM

**depth_reached**: 5
**comparison_result**: confirmed_same_depth5

#### 1.1.1 owner
- addr: 0x10055a520
- symbol: codexmate_lib::platform::update::check_update_installability
- size: 0x81e (platform layer, no commands:: wrapper; dispatched from tauri IPC async closure directly)

#### 1.0.9 baseline (call-tree depth 3, all leaves terminated)
depth1: check_update_installability @ 0x100578128
depth2: is_app_translocation_path (separate helper @ 0x100578020 in 1.0.9)
depth2: std::env::current_exe, Path::parent (×3), Path::extension, to_path_buf, String::from_utf8_lossy
depth2: Command::new, Command::arg, Command::output (xattr -p com.apple.quarantine)
depth3: __NSGetExecutablePath, drop_in_place<Command>, StrSearcher::next_match

#### 1.1.1 call-tree (this session, depth 5 verified from 逆向分析 decompile)
depth1: check_update_installability (0x10055a520) — NOTE: in 1.1.1 is_app_translocation_path is INLINED (not a separate callee at 0x10055a520; is_contained_in @ 0x100585080 directly inside the function)
depth2: std::env::current_exe (0x100f28a80) — IDENTICAL
depth2: std::path::Path::parent (0x100f33d60) ×3 — IDENTICAL
depth2: std::path::Path::extension (0x100f33fb0) — IDENTICAL
depth2: std::path::Path::to_path_buf (0x100f33090) — IDENTICAL
depth2: String::from_utf8_lossy (0x100f65430) ×3 — IDENTICAL
depth2: is_contained_in / StrSearcher (0x100585080) — INLINED from separate helper, semantically IDENTICAL to 1.0.9
depth2: Command::new (0x100f31ac0) — xattr setup IDENTICAL
depth2: Command::arg (0x100f31920) ×3 — args unchanged: -p, com.apple.quarantine, app_path
depth2: Command::output (0x100f36130) — subprocess exec IDENTICAL
depth3: Command::arg (continuation) — IDENTICAL
depth3: std::sys::process::unix::Command::spawn — IDENTICAL OS path
depth4: fork+exec OS leaf — IDENTICAL
depth5: waitpid+close$NOCANCEL — IDENTICAL

#### delta_analysis
- INLINING of is_app_translocation_path: this is compiler optimization noise (inlining of a small predicate). App-level behavior unchanged: same /AppTranslocation/ needle (18 bytes at 0x1011519EA in 1.1.1 decompile), same check logic
- xattr command: same argv -p com.apple.quarantine <path> — confirmed in decompile string constants
- Return structure: same CheckUpdateInstallabilityResult fields (is_quarantined: bool, installable: bool, quarantine_attr: Option<String>, app_path: Option<String>, bundle_path: Option<String>) — same memory layout write pattern at result+72/0/8/16/24/32/40/48/56/64/73/74
- No new HTTP, sidecar, or DTO fields

**dim6_inherited**: 1.0.9
