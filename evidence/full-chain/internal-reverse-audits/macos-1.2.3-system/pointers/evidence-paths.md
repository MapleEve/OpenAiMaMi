# Evidence Pointers — macos-1.2.3-system

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, macOS, 主目标）

- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/*.c` — 34 个函数文件（本包主目标）

## raw evidence（backend, macOS, 支撑证据，非 system 独占）

- `raw/aimami/1.2.3/macos-arm64/platform/process/ida/pseudocode/*.c`（34 文件）
- `raw/aimami/1.2.3/macos-arm64/platform/paths/ida/pseudocode/*.c`（21 文件，见口径差异）
- `raw/aimami/1.2.3/macos-arm64/platform/debug_log/ida/pseudocode/*.c`（17 文件，见口径差异）
- `raw/aimami/1.2.3/macos-arm64/platform/daemon/ida/pseudocode/*.c`（6 文件）
- `raw/aimami/1.2.3/macos-arm64/platform/single_instance/ida/pseudocode/*.c`（7 文件，见口径差异）
- `raw/aimami/1.2.3/macos-arm64/platform/system_volume/ida/pseudocode/*.c`（7 文件）
- `raw/aimami/1.2.3/macos-arm64/platform/proxy/ida/pseudocode/*.c`（3 文件）

## raw evidence（backend, macOS, 已知未覆盖缺口）

- `raw/aimami/1.2.3/macos-arm64/core/bootstrap_cache/ida/pseudocode/*.c`（9 文件，`truly_undone`，见 README.md Unknown #4）

## raw evidence（backend, Windows, 材料稀薄）

- `raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/*.c`（6 文件，全部 `sub_XXXX` 未解析）
- `raw/aimami/1.2.3/windows-x64/system_volume_windows/ida/pseudocode/*.c`（3 文件，全部 `sub_XXXX` 未解析）

## raw evidence（frontend）

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — 全量 131 条 IPC 命令表，本包角度B cross-check 依据

## 既有基线文档（本包主要蒸馏来源）

- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`（§2「system」为本包主要来源；§0/§12 全局说明也被引用）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/platform-baseline.md`（全篇为本包支撑证据来源）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/models-repository-baseline.md`（用于核实 core::bootstrap_cache 是否被覆盖——核实结果为未覆盖）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/run-app-misc-baseline.md`（同上核实用途）

## 相关/交叉引用的 internal-reverse 结论包

- `internal-reverse/audits/macos-1.2.3-relay/logic/REGISTRATION-TABLE-1.2.3.md` — `detect/set/test_api_proxy_config` 3 条命令的共享物理归属记录方
- `internal-reverse/audits/macos-1.0.9-system/`、`macos-1.0.9-system-hotspot/`、`macos-1.0.9-system-shell-init/` — 1.0.9 期 system/hotspot/shell-init 三包拆分先例（本包沿用此拆分边界，未消费其内容）

## INDEX.jsonl 命中（本次核实/append）

- 本次 append（append-only，未改旧行）：见 root `INDEX.jsonl` 中 `session=system123-distillation-conclusion-append-20260724` 的条目（1 条 commands/system backend-pseudocode-surface + 7 条 platform 子目录 backend-pseudocode-surface + 1 条 audit_conclusion）
