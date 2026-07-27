# Evidence Pointers — windows-1.2.3-system

所有路径相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（SMB 绝对挂载：``）。

## Raw pseudocode（本包 scope 内，54 文件）

- `raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/*.c`（6 文件）
- `raw/aimami/1.2.3/windows-x64/system_volume_windows/ida/pseudocode/*.c`（3 文件）
- `raw/aimami/1.2.3/windows-x64/process/ida/pseudocode/*.c`（34 文件）
- `raw/aimami/1.2.3/windows-x64/paths/ida/pseudocode/*.c`（3 文件）
- `raw/aimami/1.2.3/windows-x64/debug_log/ida/pseudocode/*.c`（3 文件）
- `raw/aimami/1.2.3/windows-x64/proxy/ida/pseudocode/*.c`（5 文件）

## 归属普查表

- `intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl`（1133 行，schema: addr/name_or_sub/module/confidence/evidence/comment_raw/on_disk）

## 前端

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 行）

## Canonical Index 记录

- `INDEX.jsonl` 行（key）：
  - `aimami/1.2.3/windows-x64/commands/system/win-app-inventory-gapfill-leaf`
  - `aimami/1.2.3/windows-x64/system_volume_windows/win-app-inventory-gapfill-leaf`
  - session: `win-1.2.3-app-function-inventory-gapfill-20260724`，produced_at `2026-07-24T13:20:34Z`

## 姊妹包（consumed，非复制内容）

- `internal-reverse/audits/macos-1.2.3-system/`（scope/skeleton 精确对照来源，26 条命令名的来源）
- `internal-reverse/audits/windows-1.2.3-system-hotspot/`（同层级独立模块，本包排除）
- `internal-reverse/audits/windows-1.2.3-relay/`（本任务指令引用的另一份 Windows RULE8 骨架先例）

## IDA MCP 现场核验

- 目标：`<host>:13337`（win instance，module `AiMaMi.1.2.3 win64.exe`）
- 本轮调用：`server_health`（1 次）、`decompile`（9 次 system 域地址 + 2 次 platform 抽验地址）、`func_query`/`find_regex`/`search_text`（探索性尝试，未产出可用新证据，详见 README Unknown 小节）
