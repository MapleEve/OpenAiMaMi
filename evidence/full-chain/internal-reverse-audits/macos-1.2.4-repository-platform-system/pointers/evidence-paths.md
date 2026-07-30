# Evidence Pointers — macos-1.2.4-repository-platform-system

所有路径均为 SMB 绝对路径（本会话硬编码，不使用 env-var，遵循 skill 红线 16）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend — mac 12 个 .c 文件）

### core/repository（5 个）
- `/raw/aimami/1.2.4/macos-arm64/core/repository/ida/pseudocode/store_bootstrap_snapshot_progressive_0x10074fc60.c`（8228 字节）
- `/raw/aimami/1.2.4/macos-arm64/core/repository/ida/pseudocode/enrich_active_account_usage_via_api_0x10075d8a0.c`（36707 字节，本批最大函数）
- `/raw/aimami/1.2.4/macos-arm64/core/repository/ida/pseudocode/preflight_account_switch_0x10073b080.c`（2364 字节）
- `/raw/aimami/1.2.4/macos-arm64/core/repository/ida/pseudocode/verify_account_switch_0x10073a420.c`（4717 字节）
- `/raw/aimami/1.2.4/macos-arm64/core/repository/ida/pseudocode/serialize_0x100755280.c`（3402 字节，Serialize for RegistryFile）

### core/api_client（1 个）
- `/raw/aimami/1.2.4/macos-arm64/core/api_client/ida/pseudocode/try_connect_local_proxy_0x1008adb70.c`（1202 字节）

### core/models（1 个）
- `/raw/aimami/1.2.4/macos-arm64/core/models/ida/pseudocode/serialize_0x1005825c0.c`（1999 字节，Serialize for ClaudeWebSearchCompatPayload）

### core/sessions（1 个）
- `/raw/aimami/1.2.4/macos-arm64/core/sessions/ida/pseudocode/export_session_markdown_0x1009210f0.c`（528 字节，closure）

### platform/process（1 个）
- `/raw/aimami/1.2.4/macos-arm64/platform/process/ida/pseudocode/codex_bundled_cli_path_0x10027bee0.c`（2629 字节）

### platform/single_instance/imp（1 个）
- `/raw/aimami/1.2.4/macos-arm64/platform/single_instance/imp/ida/pseudocode/acquire_0x1006221b0.c`（8257 字节）

### commands/system（1 个）
- `/raw/aimami/1.2.4/macos-arm64/commands/system/ida/pseudocode/get_claude_web_search_compat_0x10041d7a0.c`（3659 字节）

### commands/relay（1 个）
- `/raw/aimami/1.2.4/macos-arm64/commands/relay/ida/pseudocode/serialize_0x1007b6530.c`（2499 字节，Serialize for CodexNoAccountSlotsPayload）

## raw evidence（backend — win 4 个模块相关 .c 文件）

- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/cmd_get_claude_web_search_compat_0x140156ef0.c`（3874 字节）
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/cmd_set_claude_web_search_compat_0x140e01580.c`（18369 字节，win setter 完整实现）
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/cmd_set_codex_no_account_slots_0x140e2de30.c`（21975 字节，win setter 完整实现，725 行 serde 状态机）
- `/raw/aimami/1.2.4/windows-x64/version-delta/ida/pseudocode/codexmate_lib4core10repository35enrich_active_acco_0x1405056f0.c`（37205 字节，win enrich 等价体）

## raw evidence（6dims 分析文档）

- `/raw/aimami/1.2.4/macos-arm64/version-delta/repository-platform-system-6dims.md`（15088 字节，6dims 详实分析，本包合成来源）

## raw evidence（binary / manifest）

- `/raw/aimami/1.2.4/macos-arm64/MANIFEST.md`（reverse evidence manifest，binary sha256 来源）
- `/raw/aimami/1.2.4/macos-arm64/VERSION-BASELINE.md`（version baseline，app_version=1.2.4，bundle_identifier=dev.aimami.desktop）
- `/raw/aimami/1.2.4/macos-arm64/frontend/AiMaMi.arm64.thin`（thin arm64 binary，sha256=`24bf0857f7afa0c2352cb5ca1552136c406ed9894609dc2de6152437faf9c288`）

## raw evidence（frontend，未独立逆向但已提取）

- `/raw/aimami/1.2.4/macos-arm64/frontend/ipc-contracts.jsonl`（全量 IPC 命令映射）
- `/raw/aimami/1.2.4/macos-arm64/frontend/frontend-contract-report.md`（contract summary）
- `/raw/aimami/1.2.4/macos-arm64/frontend-page-ipc-rust-report.md`（page→IPC→Rust mapping template）

## consumed bundle（1.2.3 baseline）

- `internal-reverse/audits/macos-1.2.3-relay/`（manifest.json / gate-report.json / README.md / AI.md / SYSTEM-DIFF.md / logic/ / pointers/ / data/ / reviews/）

## cross-platform sibling（尚未产出）

- `internal-reverse/audits/windows-1.2.4-repository-platform-system/`（目录不存在；win raw `.c` 已在盘但无独立 win 侧 bundle）
