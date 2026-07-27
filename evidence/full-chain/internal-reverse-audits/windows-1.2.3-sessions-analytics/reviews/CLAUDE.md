# Claude 独立复核 — windows-1.2.3-sessions-analytics

## 使用的证据路径

见 `pointers/evidence-paths.md`。本复核基于文件系统直接读取（`find`/`wc -l`/`grep`）**加**本轮 live IDA MCP 会话（`server_health`/`decompile`/`callees`/`xrefs_to`/`func_query`，对 <host> 上的 `AiMaMi.1.2.3 win64.exe.i64` 发起，红线17 门先行核实通过：`status=ok`/`uptime_sec=122661.071`/`IDA decompiler_ready=true`/module 名匹配）。

## 覆盖范围核实

- `sessions/`/`analytics/`/`commands/analytics/` 三个目录文件数经 `find | wc -l` 逐一核实：17/4/15，合计 36 —— 与 macOS 姊妹包 `manifest.json` 记录的 Windows 指针数字（"36 .c files located this pass"）完全吻合，交叉验证一致。
- 本轮额外发现 macOS 姊妹包指针未提及的 4 个文件：`codexmate_lib/` 下 3 个（`load_sessions`/`migrate_session_worktree`/`export_session_markdown`）+ `commands/` 根目录 1 个（`delete_sessions`）。逐一读取 header 确认：均标注 `tauri command handler = <name> | ... ground-truth`，且与 `sessions/` 目录下同名核心函数地址不同（例：`load_sessions` wrapper=`0x140c90f80` vs core=`0x14073a730`），非去重复制品。
- 前端命令绑定：`grep` 对 `frontend/ipc-contracts.jsonl` 逐一核实 9 个目标命令全部命中，非从摘要推断。

## live IDA 核实内容（本轮实际执行，非声称）

1. `decompile("0x14067fa70")` — 确认该 `analytics/` 未命名函数已带 `module src/core/analytics.rs | attributed via call-graph propagation` header，即目录归属已存在（先前 dirtree pass 产出），仅缺业务命名。
2. `callees(["0x140cd3d40"])`（`load_change_analytics`）— 32 个直接 callee 全部是未命名 `sub_*`，其中若干与 `commands/analytics/` 目录已有的 raw .c 文件地址吻合。据此判断：Windows 侧 5 个 analytics 命令的 compute 业务逻辑很可能内联在 wrapper 内或分散在这些未命名 sub 中，**不是**像 macOS 那样有一组独立命名的 `core::session_analytics` 函数（macOS 8 个专名函数）。这是本复核认为的真实平台结构差异发现，不是遗漏。
3. `callees(["0x140c8eb30","0x140c90f80","0x140c8cd60"])`（3 个 `codexmate_lib` wrapper）— 均不直接列出 `sessions/` 核心函数地址作为直接 callee。
4. `xrefs_to(["0x14073a730","0x1407514d0","0x140749420"])`（3 个 `sessions/` 核心函数）— 确认 `load_sessions_0` 的调用者含未命名 `sub_14074F3F0`，说明 wrapper→core 之间至少存在一层中间跳转，本轮未继续往上追踪。
5. `func_query({"queries":["session"]})` — 返回结果与名称子串过滤预期不符（0 条命中含 "session"），如实记为工具局限（accepted_unknown），未假装等价于有效的 angle-A 符号普查。

## 发现的缺口（与 gate-report.json 一致）

1. 26 个未命名 `sub_*` 函数（sessions/ 14 + analytics/ 2 + commands/analytics/ 10）未完成系统化 panic-Location + call-graph 命名恢复（红线24 方法），本轮只对 2 个做了 spot-check 确认已有目录归属。如实标 `sub_*`，不冒充已命名，不套用 accepted_unknown（未完整试破假墙不能标 genuine_ceiling，见红线13）。
2. `export_session_markdown` 与 5 个 analytics 命令的核心层业务函数身份未定位/未确认。
3. wrapper→core 调用链存在未追踪的中间跳转（sessions 3 命令）。
4. dim4/dim6 全部未做（继承姊妹包同状态）。

## 与 macOS 姊妹包的交叉核对

- macOS dim2-wrapper 缺口（`load_sessions` + 5 个 `load_*_analytics` 无专名 wrapper）在 Windows 侧**已解决**（9/9 命令均有专名 wrapper），但本复核**未**据此推翻或关闭 macOS 侧的缺口——严格遵守"macOS 只证明 macOS，Windows 只证明 Windows，禁止外推"红线，仅记录为 macOS 下一轮生产者的定位线索（见 `data/task-plan.json next_producer_steps` 末条）。
- macOS dim2-core 层强（56 个去重函数，8 个专名 `core::session_analytics`），本轮发现 Windows 在这一层反而更弱（仅 1 个专名 `compute_usage_analytics`）——如实记录为平台结构差异，不用 macOS 证据填补 Windows 空白。

## 未采纳/存疑项

- 无需要 CROSS-REVIEW 记录的冲突（本轮无独立 Codex/Agent 复核对照，`reviews/AGENT.md`/`reviews/CROSS-REVIEW.md` 本轮未产出——满足 OUTPUT-SPEC.md 验收条件"至少一份存在"的最低要求）。

## 结论

同意 README.md/gate-report.json 的 `consumerStartReady`（9/9）、非 `strictImplementationUse`、非 `readyToImplement` 结论。本复核在本轮 live IDA 证据范围内未发现证据造假或幻觉覆盖率声明；本包的 dim2-wrapper 结论（9/9 命令均有专名 wrapper）经 header 逐一核实为真，非从目录列表推断。
