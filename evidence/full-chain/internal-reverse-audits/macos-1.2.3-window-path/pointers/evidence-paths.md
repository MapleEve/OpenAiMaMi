# Evidence Pointers — macos-1.2.3-window-path

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, 1.2.3）

- `raw/aimami/1.2.3/macos-arm64/commands/hotspot/ida/pseudocode/focus_main_window_0x1006fd300.c`
- `raw/aimami/1.2.3/macos-arm64/commands/system/ida/pseudocode/open_path_0x1007cda80.c`
- `raw/aimami/1.2.3/macos-arm64/VERSION-BASELINE.md`（binary_sha256 = 25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21）

## raw evidence（frontend, 1.2.3）

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`（131 行，命令名权威清单；本包命令位于 line 101 `focus_main_window` / line 103 `open_path`）

## 迁移源（baseline, 1.0.9, RULE 9 migrated_no_behavior_diff）

- `internal-reverse/audits/macos-1.0.9-window-path/README.md`
- `internal-reverse/audits/macos-1.0.9-window-path/logic/WINDOW-PATH-DISTILLED-109.md`
- `internal-reverse/audits/macos-1.0.9-window-path/gate-report.json`
- `internal-reverse/audits/macos-1.0.9-window-path/data/producer-ledger.json`
- `raw/aimami/1.0.9/macos-arm64/window-path/focus_main_window/leaf.md`
- `raw/aimami/1.0.9/macos-arm64/window-path/open_path/leaf.md`

## Windows 侧参考（本包不覆盖，仅信息性指针，不作为本包 gate 依据）

- `internal-reverse/audits/windows-1.0.9-system/logic/WIN-WINDOW-PATH-CLUSTER-109.md`（1.0.9 Windows 已闭合证据，dim1-5）
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/focus_main_window_0x1401927d0.c`（1.2.3 Windows focus_main_window，string-xref 确认 owner，但内部体多为未解析 monomorphized 派发代码）
- `raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/sub_140021540_0x140021540.c` 等 6 个未解析 `sub_XXXXXXXX` 候选（open_path owner 未从中隔离出）
- `raw/aimami/1.2.3/windows-x64/commands/relay/ida/pseudocode/open_path_0x140194810.c`（**注意**：此文件名虽含 `open_path`，但已由 session `relay123-win-commands-decompile-20260724` 确认是 `commands::relay` 的 ICF 折叠共享 dispatcher，是 `get_codex_router_auth_readiness` 等 26+ 条命令共享的入口，与本 cluster 的 `open_path`（`commands::system`）无关，不可作为本 cluster 的 Windows 证据）

## INDEX.jsonl 既有命中（1.0.9，交叉核实，未改旧行）

- `aimami/1.0.9/macos-arm64/window-path/focus_main_window`（line 1232）
- `aimami/1.0.9/macos-arm64/window-path/open_path`（line 1233）
- `aimami/1.0.9/macos-arm64/window-path/cluster-distilled`（line 1234）
- `aimami/1.0.9/windows-x64/system/focus_main_window`（line 1229）
- `aimami/1.0.9/windows-x64/system/open_path`（line 1230）
- `aimami/1.0.9/windows-x64/system/window-path-distilled`（line 1231）

## INDEX.jsonl 本次 append（append-only，未改旧行）

- `aimami/1.2.3/macos-arm64/window-path/focus_main_window`
- `aimami/1.2.3/macos-arm64/window-path/open_path`
- `aimami/1.2.3/macos-arm64/window-path/cluster-distilled`
- `internal-reverse/audits/macos-1.2.3-window-path/distillation-conclusion`

见 session `window-path123-distillation-conclusion-append-20260724`。

## 待办队列引用（本包填补的 backlog 条目）

- `internal-reverse/REVERSE-STATUS.md` 行 ~4011：window-path 曾列入 "均缺 1.2.3 canonical audits/<platform>-1.2.3-<module>/ 结论包" 的 targets 清单，本包写入后应视为已填补（后续 REVERSE-STATUS 刷新轮次可回填终态行，本次蒸馏任务范围不含改写 REVERSE-STATUS.md 正文）。
