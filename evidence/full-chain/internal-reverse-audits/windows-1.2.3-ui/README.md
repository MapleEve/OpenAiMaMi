# AiMaMi 1.2.3 windows-x64 ui — 部分证据/诚实缺口结论包

同步时间：2026-07-26（模块根骨架补全，基于 2026-07-25 既有叶子结论 `win-ui-set-app-theme-123gap-20260725`）
范围：AiMaMi 1.2.3 windows-x64 的 `ui` 模块完整命令面是什么，以及每个已识别命令达到的 gate 档位。本包为只读归并（枚举既有 raw 目录 + 前端 dumped assets grep + ipc-contracts.jsonl diff + RULE9 同平台前版本对照 + 红线15 四角度孤儿核查），未新增 raw/intermediate 证据，未跑新 IDA decompile/callees/xrefs。
最终结论：模块唯一已识别命令面 `set_app_theme`（Tauri 内置 `plugin:app|set_app_theme` shim）——前端 shim 确认存在（dim1=candidate），后端 1.2.3 win 证据 = **0**（dim2-dim6 全 missing）。**gate = `blocks_start` / `gap_needs_new_raw`**，非 `strictImplementationUse`/`readyToImplement`。四角度孤儿核查（红线15）确认无额外 `truly_undone` 目标：`focus_main_window`/`has_notch` 两个语义相似候选均已 `already_in_canonical` 于 `windows-1.2.3-system-hotspot`。

## 证据索引

见 `pointers/evidence-paths.md`；完整推理过程见 `logic/UI-THEME-GAP-1.2.3.md`。

## Coverage

本包覆盖「ui 模块在 1.2.3 windows-x64 的完整命令面」这一问题，不是 `full_leaf_100_definition_v2` 六维闭合，不产出 `strictImplementationUse`/`readyToImplement` 门控值。

## Per-target Result Matrix

| target | 1.0.9 win 状态（基线） | 1.2.3 win 状态（本次） | 证据 |
|---|---|---|---|
| `set_app_theme`（`plugin:app|set_app_theme`） | `strictImplementationUse`（dims1-5 pass，dim6 open），owner `0x14091bc60` | dim1=candidate（前端 shim 结构一致）；dim2-dim6=missing（后端 raw=0）；gate=`blocks_start`/`gap_needs_new_raw` | `logic/UI-THEME-GAP-1.2.3.md` §1-3, `set_app_theme/gate-report.json` |
| `focus_main_window`（语义相似候选，非 ui 孤儿） | n/a | `already_in_canonical`（`windows-1.2.3-system-hotspot`，VA `0x14096F5D0`） | `gate-report.json.four_angle_completeness`, `manifest.json.orphan_four_category` |
| `has_notch`（语义相似候选，非 ui 孤儿） | n/a | `already_in_canonical`（`windows-1.2.3-system-hotspot`，VA `0x140970DA0`） | 同上 |

## Frontend Control Flow

`set_app_theme` 的 Tauri 内置 shim 在 `app-TuXtMya9.js:1` 确认存在（`async function m(n){return t("plugin:app|set_app_theme",{theme:n})}`，导出为 `setTheme`），与 1.0.9 结构一致（仅 minified 变量名/chunk hash 因重新打包而异）。该命令因是 `plugin:app|*` 内置 shim，不出现在 `ipc-contracts.jsonl`（131 命令零命中），仅可通过直接 grep 前端 dumped asset 发现。invoke-wrapper 身份未独立字节级追踪（`index-B40jKs17.js` 1MB 压缩包，此前 grep 尝试因二进制/混合编码内容中断，未重试）。

## Backend Control Flow / Pseudocode / Call-tree

不适用——`raw/aimami/1.2.3/windows-x64/` 65 个顶层模块目录（含 `commands/` 8 个子目录）无一名为 `ui`/`theme`；全树无 `.c` pseudocode 命中。本包未执行新的 IDA decompile/xrefs（任务范围明确排除）。

## Interface / Error / Boundary

`Unknown` — 1.2.3 未重新核验；1.0.9 契约（`argKeys=[theme]`，`CoreEnvelope<()>`，全窗口内存态应用，无磁盘写入）仅作同平台前版本参考，未经 diff 不带入本版本。

## Gate Leaf Status

`blocks_start` / `gap_needs_new_raw`。不写 `accepted`、`gate_accepted=true`、`implementation_use=true`。

## Diff 结论

RULE9 同平台版本 diff：前端侧可比对（结构一致，候选未行为变化）；后端侧 1.2.3 完全无证据可与 1.0.9 owner（`0x14091bc60`）比对，无法证明"无行为差异"，判定 `diff_required`（非 `migrated_no_behavior_diff`），不把 1.0.9 的 `strictImplementationUse` 上限带到 1.2.3。

## Unknown / Missing

- `set_app_theme` dim2-dim6：`Unknown`/`missing`，等待 producer 在 `raw/binary/AiMaMi.1.2.3 win64.exe.i64` 上开新 IDA session。
- `set_app_theme` dim1 的 invoke-wrapper 身份独立字节级追踪：未完成。
- macOS 1.2.3 侧：`audits/macos-1.2.3-ui/` 不存在，按 dim5/跨平台不外推原则留 `Unknown`，本包未展开。

## Action / Non-action

- Action：`REVERSE-STATUS.md` `[<审计会话> 的 full-app 缺口清单中 windows 专属 `ui` 一项，保持"已产出部分/诚实缺口结论包"状态（非完全关闭——`set_app_theme` 仍待 producer IDA 补证）；下一 producer 步骤见 `logic/UI-THEME-GAP-1.2.3.md` §Next producer steps。
- Non-action：不据本包为 `focus_main_window`/`has_notch` 重开等效逆向工作单（已 `already_in_canonical`）；不把 1.0.9 `strictImplementationUse` 上限带到 1.2.3；不因模块根骨架补全而升级/降级既有 gate 判定。
