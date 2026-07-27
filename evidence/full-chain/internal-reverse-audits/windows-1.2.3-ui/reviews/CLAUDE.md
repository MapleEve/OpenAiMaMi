# Claude (CC) 独立复核 — windows-1.2.3-ui

- Evidence path 使用：`${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}/raw/binary/AiMaMi.1.2.3 win64.exe`、`.../raw/aimami/1.2.3/windows-x64/`（65 模块目录清单）、`.../raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 命令）、`.../raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/app-TuXtMya9.js`（前端 shim 直接 grep）、`internal-reverse/audits/windows-1.0.9-ui/set_app_theme/`（RULE9 同平台前版本对照）、`internal-reverse/audits/windows-1.2.3-system-hotspot/manifest.json`（孤儿归属交叉核对）、`internal-reverse/audits/WIN-1.2.3-COMMAND-CEILING-CLOSEOUT.md`（131 命令 handler 台账，语义扫底料）。
- 覆盖范围：
  - 复核 `win-ui-set-app-theme-123gap-20260725` 既有结论（`set_app_theme` 前端 shim 存在/后端 raw=0/RULE9 diff_required），未发现与既有证据矛盾之处，予以采纳。
  - 本轮新增：四角度完整性核查（红线15）。角度A（func_query 命名空间枚举）确认无 ui/theme 模块可枚举；角度B（前端 ipc-contracts diff）确认 131 命令 0 个 theme 命中，true_gaps=0；角度C（exports 语义关键词孤儿扫描）在 theme/appearance/window/style/dark/light/mica/tabbed/color/chrome 关键词下命中 `focus_main_window`/`has_notch` 两个候选；角度D（manifest covered_commands diff + 四分类）核实这两个候选均已 `already_in_canonical` 于 `windows-1.2.3-system-hotspot`（own 独立 command-layer 函数，dispatch VA 分别为 0x14096F5D0/0x140970DA0），非 ui 模块孤儿。
  - 补齐模块根 RULE 8 骨架缺项：`manifest.json`（含 covered_commands + 四分类孤儿）、`logic/UI-THEME-GAP-1.2.3.md`（诚实的 partial-gap 结论，非伪造 FULL-CHAIN）、`reviews/CLAUDE.md`（本文件）、`pointers/evidence-paths.md`、`data/summary.json`、`data/producer-ledger.json`；并在既有 `gate-report.json` 追加 `four_angle_completeness`/`covered_commands`/`reduce_backfill` 字段（不删除、不覆盖既有字段，不改变既有 gate 判定）。
- 缺口：
  - `set_app_theme` 的 dim2-dim6 仍全 `Unknown`/`missing`（无 1.2.3 win 后端 IDA 证据）；本轮未跑新 decompile/xrefs/server_health（任务范围明确排除新反编译，只做只读归并 + 孤儿核查）。
  - dim1 本身也未升级到完全闭合：`index-B40jKs17.js` 的 invoke-wrapper 身份未独立字节级追踪（既有已知缺口，本轮未新增尝试）。
  - macOS 1.2.3 侧仍为 Unknown（`audits/macos-1.2.3-ui/` 不存在），按 dim5/跨平台不外推原则未在本轮展开。
- 不应行动项：
  - 不得据本轮孤儿核查结果为 `focus_main_window`/`has_notch` 重开等效逆向工作单（已 `already_in_canonical`，红线15 明确禁止）。
  - 不得将 1.0.9 `strictImplementationUse` 的 gate 上限带到 1.2.3（RULE9 `diff_required`，非 `migrated_no_behavior_diff`）。
  - 不得因本次模块根骨架补全而升级/降级 `set_app_theme` 的 gate 判定（`gate_tier`/`gate_accepted`/`implementation_use` 均保持既有值不变）。
- 结论：本轮为**纯 reduce/backfill**（模块根包骨架补全 + 四角度孤儿核查），未产生新 raw/intermediate 证据，未跑新 IDA 调用。`gate-report.json`/`manifest.json`/`logic/UI-THEME-GAP-1.2.3.md`/本文件口径一致：`set_app_theme` 保持 `gap_needs_new_raw`/`blocks_start`；孤儿四分类 `truly_undone=0`。
