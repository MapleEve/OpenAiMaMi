# windows-1.2.3-ui / set_app_theme — Partial / Gap Conclusion Bundle

Consumer-side归并任务：把已落盘证据整理为结论文档，覆盖不足如实标缺口。
session: win-ui-set-app-theme-123gap-20260725 | machine: <host> | 2026-07-25
binary SHA256 (raw/binary/`AiMaMi.1.2.3 win64.exe`): `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396` (33667584 bytes, computed this session, matches size cited in REVERSE-STATUS.md line ~4051)

## Result in one line

**win 侧 `ui`/主题切换域在 AiMaMi 1.2.3 windows-x64 下几乎没有已落盘后端证据（raw .c = 0）。前端命令面存在且与 1.0.9 结构一致，但后端 owner/decompile/call-tree/interface/platform-gate 全部 Unknown。本包如实产出为 partial/gap 结论，`gate_tier = blocks_start`，`gap_class = gap_needs_new_raw`，不是失败，是当前证据状态的诚实记录。**

## 覆盖度统计（本会话只读盘查，未跑新反编译）

| 维度 | 状态 | 依据 |
|---|---|---|
| raw 后端 .c 文件（win 1.2.3, ui/theme 模块） | **0** | `raw/aimami/1.2.3/windows-x64/` 下枚举 65 个顶层模块目录，无一命名为 `ui` 或 `theme`；对全部 1.2.3 windows-x64 raw+frontend 证据做定向 grep（含误报排除，如 `quit`/`quiet` 子串误命中 `ui`）确认零 `.c` pseudocode 命中 |
| 前端命令面（win 1.2.3） | **存在** | dumped asset `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/app-TuXtMya9.js` 第 1 行：`async function m(n){return t("plugin:app|set_app_theme",{theme:n})}` 导出为 `setTheme`；argKey=`theme`；与 1.0.9 的 `app-C4jGp0lC.js` 结构逐字节一致（仅 minified 变量名/chunk hash 因版本重新打包而不同） |
| `ipc-contracts.jsonl`（win 1.2.3, 131 条命令） | **0 命中** `theme`/`set_app_theme` | 提取器不收录 `plugin:app|*` Tauri 内置 shim 命令（与 1.0.9 已记录的行为一致），只能靠直接 grep dumped JS 资产找到 |
| mac 1.2.3 侧对照 | **未开展本轮工作 / Unknown** | `internal-reverse/audits/` 下无 `macos-1.2.3-ui`；`raw/aimami/1.2.3/macos-arm64/` 下也无命名为 `ui`/`theme` 的模块目录（快速检索唯一命中是 `install_macos_quit_guard` 等误报子串）。按 dim5 规则不得用其他平台/版本证据外推，故留 Unknown，非否定结论 |
| RULE9 同平台版本迁移判定 | **`diff_required`**（非 `migrated_no_behavior_diff`，非 `unchanged_reused`） | 已按 RULE9 先尝试 diff：前端侧证据足以说明命令签名未变；但后端侧 1.2.3 完全无证据可与 1.0.9 owner（VA `0x14091bc60`）比对，无法证明"无行为差异"，只能诚实留 Unknown，不得把 1.0.9 的 `strictImplementationUse` 上限带到 1.2.3 |

## What the 1.0.9 predecessor evidence says (NOT carried forward, cited for context only)

`windows-1.0.9-ui/set_app_theme` 是同平台上一版本的完整闭合结论（`strictImplementationUse`，dim1-dim5 pass，dim6 missing）：`set_app_theme` 是 Tauri 内置 `app` plugin 的主题设置命令（`is_upstream=true`），仅在进程内对所有存活窗口即时应用主题（discriminant=28 派发 + 33 finalize），**不写盘**（`settings.json` 持久化属于姊妹命令 `set_theme@0x1408adf90`，非本命令）。详见 `windows-1.0.9-ui/set_app_theme/README.md` + `logic/WIN-SET-APP-THEME-DISTILLED-109.md`。

本包**不**把上述 1.0.9 结论直接标记为 1.2.3 结论——按 AGENTS.md「artifact/platform 没拿到的状态保持 Unknown，禁止用 macOS 证据外推 Windows」的同一原则同样适用于跨版本：没有 1.2.3 同版本证据，就不能把 1.0.9 的 gate 上限带过来。1.0.9 内容只作为「下一步该找什么」的路线图（owner VA 候选定位方法、call-tree 深度预期、interface 形状预期）。

## 需要的证据（下一步生产者工作单，本轮未执行）

1. 在 IDA 打开 `raw/binary/AiMaMi.1.2.3 win64.exe`（或对应 `.i64`，`ls` 确认已存在于 `raw/binary/`），核对 `server_health` 后：
   - 用 `set_app_theme` 字符串做 `xrefs_to` 定位 1.2.3 侧的 owner 函数（1.0.9 方法：单一 data xref → 包裹协程函数，非 ICF 折叠）。
   - `decompile` 该 owner，对比 1.0.9 owner（`0x14091bc60`，1780B/57BB/16 wind states）判定 `migrated_no_behavior_diff` 还是 `diff_reversed`。
   - `callees`/`xrefs_to` 追 call-tree 到 fs/http/registry/process/sidecar/response/error 等 leaf（1.0.9 深度=6，terminal=`tauri_ipc_resolve_sys`）。
   - 确认 1.2.3 是否仍无磁盘写入（对照姊妹命令 `set_theme` 的 1.2.3 owner，避免重复 1.0.9 raw pass 曾误归因磁盘写入的错误）。
2. 独立开展 macOS 1.2.3 侧同一命令的核验（当前完全空白，见上表）。
3. 视 1. 的 diff 结果，把本包升级为 `consumerStartReady`/`strictImplementationUse`（不得跳过 dim2-dim5 直接升级）。

## Files

- `manifest.json` — bundle metadata，含 RULE9 迁移判定与前端/后端证据统计
- `gate-report.json` — per-dim gate 证据（dim1=candidate，dim2-dim6=missing）
- `pointers/evidence-paths.md` — 前端资产路径 + 1.0.9 参照路径（env-relative）
- `reviews/CLAUDE.md` — 本次归并的独立复核记录
- `data/task-plan.json` — 三档队列（本包不进任何放行队列，全部 blocks_start）
- `AI.md` — AI 交接：target universe、下一步可复跑命令、Unknown 清单
- `SYSTEM-DIFF.md` — 系统差异模板（本版本大部分维度 Unknown）
