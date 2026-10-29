# dto-fieldlevel-win.md — AiMaMi 1.2.7 dim4 字段级 DTO win parity 抽查（windows-x64）

- session: `<审计会话>`，2026-09-30，machine <本地机器>
- 性质: mac 侧 dim4 字段级定向逆向（dto-fieldlevel-mac.md）的 **win 独立实证抽查**（红线8：不外推；win 串池/strings cache 32079 活体验证，零 IDB 写）
- 二进制: win `06091864…`（SOT `raw/binary/AiMaMi.1.2.7 win64.exe`）

## 抽查矩阵（全部 PASS）

| 合同面 | win 证据（串池 EA） | 判定 |
|---|---|---|
| ResetCredit/ResetCreditGrant/History DTO 字段 | `expiresAt`@`0x141a69fad` / `occurredAt`@`0x141a69fb6` / `nextCursor`@`0x141a69fc6`（与 mac 同序邻接）+ `next_cursor`@`0x141a6e8eb`（snake 上游面） | 字段名+大小写合同双平台一致 |
| CodexPaths 布局 | `sqlite`+`codex-dev.db` 邻接 @`0x1419d86fd`；`CODEX_SQLITE_HOME`@`0x1419d87fe`；`state_5.sqlite`@`0x1419d880f`；`codexmate`+`custom-instructions`+`relay`+`aionsale` 邻接 @`0x1419d8828` | 目录族+legacy aionsale 迁移面 win 同存 |
| CodexSession 26 字段 | `parentSessionId`@`0x141a6a453` / `agentNickname`@`0x141a6a467` / `isConversationThread`@`0x141a6a4a0` / `worktreeMigration`@`0x141a6a4c2`（邻接同序）；另 `parentThreadId`/`agentRole`/`projectId`/`historyMode`/`gitInfo` @`0x1419ef8a5` | 会话 DTO 字段集双平台一致 |
| FixResult / DiagnosticReport | `fixedIds`@`0x141a56786` / `failedIds`@`0x141a5678e` / `hasIssues`@`0x141a567a3` / `transitionInFlight`@`0x141a567ac`（邻接同序） | 诊断修复 DTO 双平台一致 |
| Anthropic 版本头 | `anthropic-version`@`0x1419e9c7a` + `2023-06-01`@`0x1419e9c8b`（另 `0x141a47d29` 一处，双点） | 协议版本头双平台一致 |
| 模型族常量 | `sonnet-5-5`@`0x1419ddeb4` / `fable-5-1`@`0x1419ddebe` / `mythos-5-1`@`0x1419ddec7` / `fable-5`@`0x1419dded9` / `mythos-5`@`0x1419ddee0`（邻接同序） | 模型族表双平台一致 |
| 引擎端点集 | base@`0x1419d71e9` / `/models`@`0x141a491a4` / `/responses`+`/responses/compact`@`0x141a491e8` / `/images/generations`+`/images/edits`@`0x141a49d3a`；`x-aimami-catalog-revision` ×3（`0x1419de1a7`/`0x141a3e1d7`/`0x141a47bf7`） | 与 mac 端点集 1:1 |
| SSE 事件枚举 | `message_start`@`0x1419d9205`/`0x141a53377`；`Duplicate Anthropic message_start`@`0x1419d9504` | 一致 |
| fix 诊断 key→owner | `win-diagnostic-key-owners.json`（前序轮：.rdata xref 权威映射，config_stale/auth_integrity 等 key→win owner EA） | 维持前序闭合 |
| OTA 端点（附带） | `https://aionsale.iiiwp.com/updates/stable/windows/latest.json`@`0x14193e322`；debug-reports `https://aionsale.iiiwp.com/api/client/debug-reports`@`0x141a2b0b1` | 与红线22 记录一致 |

## 已证平台分叉（dim5 终判，双轮证据合并）

| 面 | mac | win |
|---|---|---|
| 进程扫描叶 | `ps -ax -o etime=,comm=` 子进程 | Toolhelp32 API 族（CreateToolhelp32Snapshot/Process32FirstW/NextW，前序轮三叶 decompile 在案） |
| 自启面 | `~/Library/LaunchAgents/dev.aimami.auto-switch.plist` | LaunchAgents 字面量 win 串池未见（win 自有自启面，非本轮范围，如实记录不判缺席） |
| 系统音量 | `system_volume` | `system_volume_windows`（四角度 D1 divergence 已录，voice 邻接面 out-of-scope） |
| `useStateDbOnly`/`authinfo` 字面量 | mac 命中 | win 双版本 0 命中（深层核对待 1.2.6 win IDB，维持前序 PENDING） |
| DTO/错误面/端点/模型族 | 本文件 10 项抽查全 PASS | 同左 |

## 结论

五个 delta 目标（accounts/threads/router/engine/protocol）的 dim4 字段级合同在 win 侧经独立串池实证**无双平台分叉**；dim5 分叉集中在进程/自启/音量三个 OS 原生面（均已有 owner 级证据或已录 divergence）。win 红线24 dirtree 命名与 1.2.6 体级 callee 线维持前序 PENDING（需用户操作授权），不构成本轮 dim1-5 消费合同的阻塞项。

## CodexPaths win 函数级 owner 闭合（本轮升级：串池级 → 函数级）

live decompile 闭合 `codexmate_lib::platform::paths` 全函数面（模块归属实证：`src\platform\paths.rs` panic-Location @`0x1419d86c9` + 模块名串 @`0x1419d86df`）：

| 函数 | win owner EA | 函数级结论 |
|---|---|---|
| `CodexPaths::resolve_codex_home` | `0x1401B6ED0` | env `CODEX_HOME`(len10 @`0x1419d87d4`) 优先 → `home_dir()` 兜底 `"."` → join `.codex`(len6 @`0x1419d87de`)；与 mac `0x100b3d7d0` 逐分支一致 |
| `CodexPaths::from_home` | `0x1401B9830` | 31 字段布局（结构体 992B）28 次 join 逐字段解码，字段/偏移/父目录层级与 mac `0x100b3f770` 1:1；⚠ 副作用：legacy 迁移 `aionsale` 存在且 `codexmate` 不存在 → `rename(aionsale→codexmate)` |
| `CodexPaths::resolve_codex_state_db`（全量解析） | `0x1401B79C0` | env `CODEX_SQLITE_HOME`(len17) → config.toml `sqlite_home` 键 → `state_*.sqlite` 数字茎扫描 → 候选 is_file 首命中 |
| `CodexPaths::state_db_search_dirs` | `0x1401B7790` | 命中返 [state_db 父目录]，未命中返 [home/sqlite, home] 两目录族 |
| `resolve_codex_state_db`（from_home 内联入口/兜底） | `0x1401B8620` | 目录族扫现成 db，零命中兜底 `home/state_5.sqlite`(len14 @`0x1419d880f`) |
| `CodexPaths::catalog_db_path` | `0x1401B5F40` | 三候选 [configured sqlite_home/codex-dev.db, 既有字段, home/codex-dev.db] 首 is_file 命中，兜底 home/sqlite/codex-dev.db（`sqlite`+`codex-dev.db` @`0x1419d86fd`） |
| `CodexPaths::state_db` 惰性访问器 | `0x1401B8C00` | +960==-1 → 现算；否则 clone 缓存 Option<PathBuf> |
| `CodexPaths::all_state_db_candidates` | `0x1401B7010` | 缓存命中单元素，否则目录族扫描 + Path 规范化去重 |
| state_*.sqlite 扫描器 | `0x1401B8CC0` | read_dir 逐名 'state' 前缀 + '.sqlite' 后缀 + 数字茎 parse（字节级字面量比对 0x74617473/0x6C71732E/0x6574696C） |
| `CodexPaths::ensure_directories` | `0x1401B6D70` | ⚠ 写盘：`create_dir_all` ×9（accounts→snapshots→backups→registry-backups→codexmate→skill-backups→custom-instructions→history→relay），首个失败早退返 io::Error |
| `drop_in_place<CodexPaths>` | `0x140034990` | 30 堆字段顺次释放（+960 槽 -1 跳过） |

- 完整字段级布局（每字段 join 字面量 EA + 偏移 + 父目录）与错误面/副作用明细见同目录 `codexpaths-interface-report-win.json`。
- 双平台 parity：31 字段布局 / legacy aionsale 迁移臂 / state_db 四级解析 / catalog 三候选 / ensure_directories 9 目录集全一致；win 无 LaunchAgents plist 自启面（mac-only，已录 dim5 分叉表）；voice 两字段双平台同存（oos）。
- 无 accepted_unknown 项；全部 owner 以内容级证据（字面量 EA + 字段偏移 + callee 计数）三锚定，非调用图结构猜测。
